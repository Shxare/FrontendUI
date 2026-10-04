// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/FrontendFunctionLibrary.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFrontendFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendFunctionLibrary();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendFunctionLibrary_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UWidget_ActivatableBase_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFrontendFunctionLibrary Function GetFrontendSoftWidgetClassByTag ********
struct Z_Construct_UFunction_UFrontendFunctionLibrary_GetFrontendSoftWidgetClassByTag_Statics
{
	struct FrontendFunctionLibrary_eventGetFrontendSoftWidgetClassByTag_Parms
	{
		FGameplayTag InWidgetTag;
		TSoftClassPtr<UWidget_ActivatableBase>  ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Frontend Function Library" },
		{ "ModuleRelativePath", "FrontendFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWidgetTag_MetaData[] = {
		{ "Categories", "Frontend.Widget" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InWidgetTag;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFrontendFunctionLibrary_GetFrontendSoftWidgetClassByTag_Statics::NewProp_InWidgetTag = { "InWidgetTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendFunctionLibrary_eventGetFrontendSoftWidgetClassByTag_Parms, InWidgetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWidgetTag_MetaData), NewProp_InWidgetTag_MetaData) }; // 133831994
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UFrontendFunctionLibrary_GetFrontendSoftWidgetClassByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendFunctionLibrary_eventGetFrontendSoftWidgetClassByTag_Parms, ReturnValue), Z_Construct_UClass_UWidget_ActivatableBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendFunctionLibrary_GetFrontendSoftWidgetClassByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendFunctionLibrary_GetFrontendSoftWidgetClassByTag_Statics::NewProp_InWidgetTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendFunctionLibrary_GetFrontendSoftWidgetClassByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendFunctionLibrary_GetFrontendSoftWidgetClassByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendFunctionLibrary_GetFrontendSoftWidgetClassByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFrontendFunctionLibrary, nullptr, "GetFrontendSoftWidgetClassByTag", Z_Construct_UFunction_UFrontendFunctionLibrary_GetFrontendSoftWidgetClassByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendFunctionLibrary_GetFrontendSoftWidgetClassByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendFunctionLibrary_GetFrontendSoftWidgetClassByTag_Statics::FrontendFunctionLibrary_eventGetFrontendSoftWidgetClassByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendFunctionLibrary_GetFrontendSoftWidgetClassByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendFunctionLibrary_GetFrontendSoftWidgetClassByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFrontendFunctionLibrary_GetFrontendSoftWidgetClassByTag_Statics::FrontendFunctionLibrary_eventGetFrontendSoftWidgetClassByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendFunctionLibrary_GetFrontendSoftWidgetClassByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendFunctionLibrary_GetFrontendSoftWidgetClassByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendFunctionLibrary::execGetFrontendSoftWidgetClassByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_InWidgetTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftClassPtr<UWidget_ActivatableBase> *)Z_Param__Result=UFrontendFunctionLibrary::GetFrontendSoftWidgetClassByTag(Z_Param_InWidgetTag);
	P_NATIVE_END;
}
// ********** End Class UFrontendFunctionLibrary Function GetFrontendSoftWidgetClassByTag **********

// ********** Begin Class UFrontendFunctionLibrary *************************************************
void UFrontendFunctionLibrary::StaticRegisterNativesUFrontendFunctionLibrary()
{
	UClass* Class = UFrontendFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFrontendSoftWidgetClassByTag", &UFrontendFunctionLibrary::execGetFrontendSoftWidgetClassByTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFrontendFunctionLibrary;
UClass* UFrontendFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UFrontendFunctionLibrary;
	if (!Z_Registration_Info_UClass_UFrontendFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FrontendFunctionLibrary"),
			Z_Registration_Info_UClass_UFrontendFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUFrontendFunctionLibrary,
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
	return Z_Registration_Info_UClass_UFrontendFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UFrontendFunctionLibrary_NoRegister()
{
	return UFrontendFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFrontendFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FrontendFunctionLibrary.h" },
		{ "ModuleRelativePath", "FrontendFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFrontendFunctionLibrary_GetFrontendSoftWidgetClassByTag, "GetFrontendSoftWidgetClassByTag" }, // 2164531341
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFrontendFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontendFunctionLibrary_Statics::ClassParams = {
	&UFrontendFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontendFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFrontendFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UFrontendFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontendFunctionLibrary.OuterSingleton, Z_Construct_UClass_UFrontendFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFrontendFunctionLibrary.OuterSingleton;
}
UFrontendFunctionLibrary::UFrontendFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendFunctionLibrary);
UFrontendFunctionLibrary::~UFrontendFunctionLibrary() {}
// ********** End Class UFrontendFunctionLibrary ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UE_Project_FrontendUI_Source_FrontendUI_FrontendFunctionLibrary_h__Script_FrontendUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendFunctionLibrary, UFrontendFunctionLibrary::StaticClass, TEXT("UFrontendFunctionLibrary"), &Z_Registration_Info_UClass_UFrontendFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendFunctionLibrary), 3017749720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_FrontendUI_Source_FrontendUI_FrontendFunctionLibrary_h__Script_FrontendUI_88713430(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_UE_Project_FrontendUI_Source_FrontendUI_FrontendFunctionLibrary_h__Script_FrontendUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Project_FrontendUI_Source_FrontendUI_FrontendFunctionLibrary_h__Script_FrontendUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
