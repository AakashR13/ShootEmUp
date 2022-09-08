// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleShooter/ShooterPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterPlayerController() {}
// Cross Module References
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AShooterPlayerController_NoRegister();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AShooterPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_SimpleShooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AShooterPlayerController::StaticRegisterNativesAShooterPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterPlayerController);
	UClass* Z_Construct_UClass_AShooterPlayerController_NoRegister()
	{
		return AShooterPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AShooterPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RespawnDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoseScreenClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LoseScreenClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WinScreenClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WinScreenClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ShooterPlayerController.h" },
		{ "ModuleRelativePath", "ShooterPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_RespawnDelay_MetaData[] = {
		{ "Category", "ShooterPlayerController" },
		{ "ModuleRelativePath", "ShooterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_RespawnDelay = { "RespawnDelay", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPlayerController, RespawnDelay), METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_RespawnDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_RespawnDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_LoseScreenClass_MetaData[] = {
		{ "Category", "ShooterPlayerController" },
		{ "ModuleRelativePath", "ShooterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_LoseScreenClass = { "LoseScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPlayerController, LoseScreenClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_LoseScreenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_LoseScreenClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_WinScreenClass_MetaData[] = {
		{ "Category", "ShooterPlayerController" },
		{ "ModuleRelativePath", "ShooterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_WinScreenClass = { "WinScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPlayerController, WinScreenClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_WinScreenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_WinScreenClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUDClass_MetaData[] = {
		{ "Category", "ShooterPlayerController" },
		{ "ModuleRelativePath", "ShooterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPlayerController, HUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUDClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUD_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterPlayerController, HUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUD_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_RespawnDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_LoseScreenClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_WinScreenClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUDClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterPlayerController_Statics::NewProp_HUD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterPlayerController_Statics::ClassParams = {
		&AShooterPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterPlayerController()
	{
		if (!Z_Registration_Info_UClass_AShooterPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterPlayerController.OuterSingleton, Z_Construct_UClass_AShooterPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterPlayerController.OuterSingleton;
	}
	template<> SIMPLESHOOTER_API UClass* StaticClass<AShooterPlayerController>()
	{
		return AShooterPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterPlayerController);
	struct Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterPlayerController, AShooterPlayerController::StaticClass, TEXT("AShooterPlayerController"), &Z_Registration_Info_UClass_AShooterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterPlayerController), 2221146462U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterPlayerController_h_4273050450(TEXT("/Script/SimpleShooter"),
		Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
