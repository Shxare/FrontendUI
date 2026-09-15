// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontendUI/Controllers/FrontendPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFrontendPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
FRONTENDUI_API UClass* Z_Construct_UClass_AFrontendPlayerController();
FRONTENDUI_API UClass* Z_Construct_UClass_AFrontendPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontendUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFrontendPlayerController ************************************************
void AFrontendPlayerController::StaticRegisterNativesAFrontendPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFrontendPlayerController;
UClass* AFrontendPlayerController::GetPrivateStaticClass()
{
	using TClass = AFrontendPlayerController;
	if (!Z_Registration_Info_UClass_AFrontendPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FrontendPlayerController"),
			Z_Registration_Info_UClass_AFrontendPlayerController.InnerSingleton,
			StaticRegisterNativesAFrontendPlayerController,
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
	return Z_Registration_Info_UClass_AFrontendPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AFrontendPlayerController_NoRegister()
{
	return AFrontendPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFrontendPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/FrontendPlayerController.h" },
		{ "ModuleRelativePath", "Controllers/FrontendPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFrontendPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFrontendPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontendUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFrontendPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFrontendPlayerController_Statics::ClassParams = {
	&AFrontendPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFrontendPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFrontendPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFrontendPlayerController()
{
	if (!Z_Registration_Info_UClass_AFrontendPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFrontendPlayerController.OuterSingleton, Z_Construct_UClass_AFrontendPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFrontendPlayerController.OuterSingleton;
}
AFrontendPlayerController::AFrontendPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFrontendPlayerController);
AFrontendPlayerController::~AFrontendPlayerController() {}
// ********** End Class AFrontendPlayerController **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UE_Project_FrontendUI_Source_FrontendUI_Controllers_FrontendPlayerController_h__Script_FrontendUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFrontendPlayerController, AFrontendPlayerController::StaticClass, TEXT("AFrontendPlayerController"), &Z_Registration_Info_UClass_AFrontendPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFrontendPlayerController), 1767588204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Project_FrontendUI_Source_FrontendUI_Controllers_FrontendPlayerController_h__Script_FrontendUI_3111013983(TEXT("/Script/FrontendUI"),
	Z_CompiledInDeferFile_FID_UE_Project_FrontendUI_Source_FrontendUI_Controllers_FrontendPlayerController_h__Script_FrontendUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Project_FrontendUI_Source_FrontendUI_Controllers_FrontendPlayerController_h__Script_FrontendUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
