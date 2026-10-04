// Fill out your copyright notice in the Description page of Project Settings.



#include "Widget_PrimaryLayout.h"
#include "FrontendUI/FrontendDebugHelper.h"
UCommonActivatableWidgetContainerBase* UWidget_PrimaryLayout::FindWidgetStackByTag(const FGameplayTag& InTag) const
{
	//检查，标签是否合法，不合法直接崩溃
	checkf(RegisteredWidgetStackMap.Contains(InTag), TEXT("Can Not Find Widget By Tag %s"),*InTag.ToString());
	return RegisteredWidgetStackMap.FindRef(InTag);
}

void UWidget_PrimaryLayout::RegisterWidgetStack(UPARAM(meta = (Categories = "Frontend.WidgetStack"))FGameplayTag InStackTag, UCommonActivatableWidgetContainerBase* Stack)
{
	if (!IsDesignTime())
	{
		if (!RegisteredWidgetStackMap.Contains(InStackTag))
		{
			RegisteredWidgetStackMap.Add(InStackTag, Stack);
			//打印测试信息
			//Debug::Print(TEXT("Widget Stack Registeren under the Tag") + InStackTag.ToString());
		}
	}
}
