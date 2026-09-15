// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Widgets/Widget_ActivatableBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWidget_ActivatableBase() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UWidget_ActivatableBase();
FRONTENDUI_API UClass* Z_Construct_UClass_UWidget_ActivatableBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWidget_ActivatableBase **************************************************
void UWidget_ActivatableBase::StaticRegisterNativesUWidget_ActivatableBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWidget_ActivatableBase;
UClass* UWidget_ActivatableBase::GetPrivateStaticClass()
{
	using TClass = UWidget_ActivatableBase;
	if (!Z_Registration_Info_UClass_UWidget_ActivatableBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Widget_ActivatableBase"),
			Z_Registration_Info_UClass_UWidget_ActivatableBase.InnerSingleton,
			StaticRegisterNativesUWidget_ActivatableBase,
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
	return Z_Registration_Info_UClass_UWidget_ActivatableBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UWidget_ActivatableBase_NoRegister()
{
	return UWidget_ActivatableBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWidget_ActivatableBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisableNaiveTick", "" },
		{ "IncludePath", "Widgets/Widget_ActivatableBase.h" },
		{ "ModuleRelativePath", "Widgets/Widget_ActivatableBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_ActivatableBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidget_ActivatableBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ActivatableBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_ActivatableBase_Statics::ClassParams = {
	&UWidget_ActivatableBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_ActivatableBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidget_ActivatableBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidget_ActivatableBase()
{
	if (!Z_Registration_Info_UClass_UWidget_ActivatableBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_ActivatableBase.OuterSingleton, Z_Construct_UClass_UWidget_ActivatableBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidget_ActivatableBase.OuterSingleton;
}
UWidget_ActivatableBase::UWidget_ActivatableBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_ActivatableBase);
UWidget_ActivatableBase::~UWidget_ActivatableBase() {}
// ********** End Class UWidget_ActivatableBase ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UE_Project_FrontendUI_Source_FrontendUI_Widgets_Widget_ActivatableBase_h__Script_FrontendUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_ActivatableBase, UWidget_ActivatableBase::StaticClass, TEXT("UWidget_ActivatableBase"), &Z_Registration_Info_UClass_UWidget_ActivatableBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_ActivatableBase), 1842310506U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_FrontendUI_Source_FrontendUI_Widgets_Widget_ActivatableBase_h__Script_FrontendUI_2944393548(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_UE_Project_FrontendUI_Source_FrontendUI_Widgets_Widget_ActivatableBase_h__Script_FrontendUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Project_FrontendUI_Source_FrontendUI_Widgets_Widget_ActivatableBase_h__Script_FrontendUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
