// Fill out your copyright notice in the Description page of Project Settings.


#include "FrontendUISubsystem.h"
#include "Engine/AssetManager.h"
#include "../Widgets/Widget_PrimaryLayout.h"
#include "../Widgets/Widget_ActivatableBase.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "FrontendUI/FrontendDebugHelper.h"
UFrontendUISubsystem* UFrontendUISubsystem::Get(const UObject* WorldContextObject)
{
	//检查引擎是否正常初始化
	if (GEngine)
	{
		//通过上下文对象获取游戏运行的世界，如果上下文对象无效或找不到世界直接崩溃
		UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::Assert);
		//通过世界获取游戏实例，再用该游戏实例查找并返回需要的ui子系统
		return UGameInstance::GetSubsystem<UFrontendUISubsystem>(World->GetGameInstance());
	}
	return nullptr;
}

bool UFrontendUISubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	//剔除服务器，服务器不负责图形ui相关功能
	if (!CastChecked<UGameInstance>(Outer)->IsDedicatedServerInstance())
	{
		TArray<UClass*> FoundClasses;
		//获取该类信息，检查有没有类继承它，确保唯一性
		GetDerivedClasses(GetClass(), FoundClasses);

		return FoundClasses.IsEmpty();
	}
	return false;
}

void UFrontendUISubsystem::RegisterCreatePrimaryLayoutWidget(UWidget_PrimaryLayout* InCreatedWidget)
{
	check(InCreatedWidget);
	CreatePrimaryLayout = InCreatedWidget;
	Debug::Print(TEXT("Primary layout widget stored"));
}

//InWidgetStackTag ui存放位置，要把ui放到哪个栈中
//InSoftWidgetClass  软引用，只是文件路径，不是实体，只用用到时才从硬盘读取到内存中
//AysncPushStateCallback  回调函数，当ui达到相应状态执行相应函数
void UFrontendUISubsystem::PushSoftWidgetToStackAynsc(const FGameplayTag& InWidgetStackTag, TSoftClassPtr<UWidget_ActivatableBase> InSoftWidgetClass, TFunction<void(EAsyncPushWidgetState, UWidget_ActivatableBase*)> AysncPushStateCallback)
{
	//检查控件类是不是空指针
	check(!InSoftWidgetClass.IsNull());

	//通过资源管理器发起异步加载
	UAssetManager::Get().GetStreamableManager().RequestAsyncLoad(
		InSoftWidgetClass.ToSoftObjectPath(),//要加载的资源的路径
		FStreamableDelegate::CreateLambda(//加载完干什么
			[InSoftWidgetClass, this, InWidgetStackTag, AysncPushStateCallback]()
			{
				//此时资源被加载出来，保存这个类
				UClass* LoadedWidgetClass = InSoftWidgetClass.Get();
				//安全检查，确保该资源和ui根还在
				check(LoadedWidgetClass && CreatePrimaryLayout);
				//通过tag找到这个组件对应的4个容器之一
				UCommonActivatableWidgetContainerBase* FoundWidgetStack = CreatePrimaryLayout->FindWidgetStackByTag(InWidgetStackTag);
				UWidget_ActivatableBase* CreatedWidget = FoundWidgetStack->AddWidget<UWidget_ActivatableBase>(
					LoadedWidgetClass,
					//ui被实例化创建出来，但还没有显示时执行
					[AysncPushStateCallback](UWidget_ActivatableBase& CreatedWidgetInstance)
					{
						// 回调将状态设为：OnCreatedBeforePush (创建了，但还没推入)
						// 有机会在这里初始化 UI 的数据
						AysncPushStateCallback(EAsyncPushWidgetState::OnCreatedBeforePush, &CreatedWidgetInstance);
					}
				);
				//已经推入屏幕
				AysncPushStateCallback(EAsyncPushWidgetState::AfterPush, CreatedWidget);
			}
		)
	);
}
