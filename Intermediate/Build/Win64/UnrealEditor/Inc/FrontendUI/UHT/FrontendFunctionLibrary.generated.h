// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FrontendFunctionLibrary.h"

#ifdef FRONTENDUI_FrontendFunctionLibrary_generated_h
#error "FrontendFunctionLibrary.generated.h already included, missing '#pragma once' in FrontendFunctionLibrary.h"
#endif
#define FRONTENDUI_FrontendFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UWidget_ActivatableBase;
struct FGameplayTag;

// ********** Begin Class UFrontendFunctionLibrary *************************************************
#define FID_UE_Project_FrontendUI_Source_FrontendUI_FrontendFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFrontendSoftWidgetClassByTag);


FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendFunctionLibrary_NoRegister();

#define FID_UE_Project_FrontendUI_Source_FrontendUI_FrontendFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFrontendFunctionLibrary(); \
	friend struct Z_Construct_UClass_UFrontendFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UFrontendFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FrontendUI"), Z_Construct_UClass_UFrontendFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UFrontendFunctionLibrary)


#define FID_UE_Project_FrontendUI_Source_FrontendUI_FrontendFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFrontendFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFrontendFunctionLibrary(UFrontendFunctionLibrary&&) = delete; \
	UFrontendFunctionLibrary(const UFrontendFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFrontendFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFrontendFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFrontendFunctionLibrary) \
	NO_API virtual ~UFrontendFunctionLibrary();


#define FID_UE_Project_FrontendUI_Source_FrontendUI_FrontendFunctionLibrary_h_14_PROLOG
#define FID_UE_Project_FrontendUI_Source_FrontendUI_FrontendFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Project_FrontendUI_Source_FrontendUI_FrontendFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Project_FrontendUI_Source_FrontendUI_FrontendFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE_Project_FrontendUI_Source_FrontendUI_FrontendFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFrontendFunctionLibrary;

// ********** End Class UFrontendFunctionLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Project_FrontendUI_Source_FrontendUI_FrontendFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
