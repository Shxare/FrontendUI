// Fill out your copyright notice in the Description page of Project Settings.


#include "FrontendFunctionLibrary.h"
#include "FrontendSettings/FrontendDeveloperSettings.h"

TSoftClassPtr<UWidget_ActivatableBase> UFrontendFunctionLibrary::GetFrontendSoftWidgetClassByTag(FGameplayTag InWidgetTag)
{
	//获取开发者设置中配置的标签和ui资源路径的设置
	const UFrontendDeveloperSettings* FrontendDeveloperSettings=GetDefault<UFrontendDeveloperSettings>();

	//检查这个设置中，映射变量是否保存了传进来的标签
	checkf(FrontendDeveloperSettings->FrontendWidgetMap.Contains(InWidgetTag),TEXT("Could not find the corresponding widget under the tag %s"), *InWidgetTag.ToString());

	//返回标签对应的软引用资源
	return FrontendDeveloperSettings->FrontendWidgetMap.FindRef(InWidgetTag);

}