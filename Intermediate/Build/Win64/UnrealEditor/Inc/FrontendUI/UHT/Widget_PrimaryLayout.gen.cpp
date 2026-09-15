// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Widgets/Widget_PrimaryLayout.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWidget_PrimaryLayout() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UWidget_PrimaryLayout();
FRONTENDUI_API UClass* Z_Construct_UClass_UWidget_PrimaryLayout_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWidget_PrimaryLayout Function RegisterWidgetStack ***********************
struct Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics
{
	struct Widget_PrimaryLayout_eventRegisterWidgetStack_Parms
	{
		FGameplayTag InStackTag;
		UCommonActivatableWidgetContainerBase* Stack;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd\xd7\xa2\xef\xbf\xbd\xef\xbf\xbd\xd5\xbb\xef\xbf\xbd\xc4\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xc7\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xa6\xef\xbf\xbd\xef\xbf\xbd\xd5\xbb\n" },
#endif
		{ "ModuleRelativePath", "Widgets/Widget_PrimaryLayout.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd\xd7\xa2\xef\xbf\xbd\xef\xbf\xbd\xd5\xbb\xef\xbf\xbd\xc4\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdd\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xc7\xa9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xa6\xef\xbf\xbd\xef\xbf\xbd\xd5\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStackTag_MetaData[] = {
		{ "Categories", "Frontend.WidgetStack" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stack_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStackTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::NewProp_InStackTag = { "InStackTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_PrimaryLayout_eventRegisterWidgetStack_Parms, InStackTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStackTag_MetaData), NewProp_InStackTag_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_PrimaryLayout_eventRegisterWidgetStack_Parms, Stack), Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stack_MetaData), NewProp_Stack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::NewProp_InStackTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::NewProp_Stack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWidget_PrimaryLayout, nullptr, "RegisterWidgetStack", Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::Widget_PrimaryLayout_eventRegisterWidgetStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::Widget_PrimaryLayout_eventRegisterWidgetStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget_PrimaryLayout::execRegisterWidgetStack)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_InStackTag);
	P_GET_OBJECT(UCommonActivatableWidgetContainerBase,Z_Param_Stack);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterWidgetStack(Z_Param_InStackTag,Z_Param_Stack);
	P_NATIVE_END;
}
// ********** End Class UWidget_PrimaryLayout Function RegisterWidgetStack *************************

// ********** Begin Class UWidget_PrimaryLayout ****************************************************
void UWidget_PrimaryLayout::StaticRegisterNativesUWidget_PrimaryLayout()
{
	UClass* Class = UWidget_PrimaryLayout::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterWidgetStack", &UWidget_PrimaryLayout::execRegisterWidgetStack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWidget_PrimaryLayout;
UClass* UWidget_PrimaryLayout::GetPrivateStaticClass()
{
	using TClass = UWidget_PrimaryLayout;
	if (!Z_Registration_Info_UClass_UWidget_PrimaryLayout.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Widget_PrimaryLayout"),
			Z_Registration_Info_UClass_UWidget_PrimaryLayout.InnerSingleton,
			StaticRegisterNativesUWidget_PrimaryLayout,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UWidget_PrimaryLayout.InnerSingleton;
}
UClass* Z_Construct_UClass_UWidget_PrimaryLayout_NoRegister()
{
	return UWidget_PrimaryLayout::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWidget_PrimaryLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisableNaiveTick", "" },
		{ "IncludePath", "Widgets/Widget_PrimaryLayout.h" },
		{ "ModuleRelativePath", "Widgets/Widget_PrimaryLayout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredWidgetStackMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xe6\xb4\xa2""4\xef\xbf\xbd\xef\xbf\xbd\xd5\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/Widget_PrimaryLayout.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xe6\xb4\xa2""4\xef\xbf\xbd\xef\xbf\xbd\xd5\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredWidgetStackMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredWidgetStackMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredWidgetStackMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack, "RegisterWidgetStack" }, // 747400061
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_PrimaryLayout>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_PrimaryLayout_Statics::NewProp_RegisteredWidgetStackMap_ValueProp = { "RegisteredWidgetStackMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidget_PrimaryLayout_Statics::NewProp_RegisteredWidgetStackMap_Key_KeyProp = { "RegisteredWidgetStackMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWidget_PrimaryLayout_Statics::NewProp_RegisteredWidgetStackMap = { "RegisteredWidgetStackMap", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_PrimaryLayout, RegisteredWidgetStackMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredWidgetStackMap_MetaData), NewProp_RegisteredWidgetStackMap_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_PrimaryLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_PrimaryLayout_Statics::NewProp_RegisteredWidgetStackMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_PrimaryLayout_Statics::NewProp_RegisteredWidgetStackMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_PrimaryLayout_Statics::NewProp_RegisteredWidgetStackMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PrimaryLayout_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidget_PrimaryLayout_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PrimaryLayout_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_PrimaryLayout_Statics::ClassParams = {
	&UWidget_PrimaryLayout::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWidget_PrimaryLayout_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PrimaryLayout_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PrimaryLayout_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidget_PrimaryLayout_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidget_PrimaryLayout()
{
	if (!Z_Registration_Info_UClass_UWidget_PrimaryLayout.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_PrimaryLayout.OuterSingleton, Z_Construct_UClass_UWidget_PrimaryLayout_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidget_PrimaryLayout.OuterSingleton;
}
UWidget_PrimaryLayout::UWidget_PrimaryLayout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_PrimaryLayout);
UWidget_PrimaryLayout::~UWidget_PrimaryLayout() {}
// ********** End Class UWidget_PrimaryLayout ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UE_Project_FrontendUI_Source_FrontendUI_Widgets_Widget_PrimaryLayout_h__Script_FrontendUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_PrimaryLayout, UWidget_PrimaryLayout::StaticClass, TEXT("UWidget_PrimaryLayout"), &Z_Registration_Info_UClass_UWidget_PrimaryLayout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_PrimaryLayout), 1930251596U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_FrontendUI_Source_FrontendUI_Widgets_Widget_PrimaryLayout_h__Script_FrontendUI_693135620(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_UE_Project_FrontendUI_Source_FrontendUI_Widgets_Widget_PrimaryLayout_h__Script_FrontendUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Project_FrontendUI_Source_FrontendUI_Widgets_Widget_PrimaryLayout_h__Script_FrontendUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
