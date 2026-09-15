// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FrontendUISubsystem.generated.h"

//前置声明，防止编译器找不到类型而报错
class UWidget_PrimaryLayout;
struct FGameplayTag;
class UWidget_ActivatableBase;

enum class EAsyncPushWidgetState : uint8
{
	OnCreatedBeforePush,
	AfterPush
};
/**
 * 
 */
UCLASS()
class FRONTENDUI_API UFrontendUISubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	//获取ui子系统
	static UFrontendUISubsystem* Get(const UObject* WorldContextObject);

	//是否应该创建子系统，确保子系统只会被创建一次
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

	//将子系统和ui根连接起来，子系统保存这个ui根
	UFUNCTION(BlueprintCallable)
	void RegisterCreatePrimaryLayoutWidget(UWidget_PrimaryLayout* InCreatedWidget);

	//异步堆叠
	void PushSoftWidgetToStackAynsc(const FGameplayTag& InWidgetStackTag,TSoftClassPtr<UWidget_ActivatableBase> InSoftWidgetClass,TFunction<void(EAsyncPushWidgetState, UWidget_ActivatableBase*)> AysncPushStateCallback);
private:
	UPROPERTY(Transient)
	UWidget_PrimaryLayout* CreatePrimaryLayout;
};
