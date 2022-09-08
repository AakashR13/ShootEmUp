// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleShooter/KillEmAllGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillEmAllGameMode() {}
// Cross Module References
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AKillEmAllGameMode_NoRegister();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AKillEmAllGameMode();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_APlayerShooterGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SimpleShooter();
// End Cross Module References
	void AKillEmAllGameMode::StaticRegisterNativesAKillEmAllGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKillEmAllGameMode);
	UClass* Z_Construct_UClass_AKillEmAllGameMode_NoRegister()
	{
		return AKillEmAllGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AKillEmAllGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKillEmAllGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerShooterGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillEmAllGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "KillEmAllGameMode.h" },
		{ "ModuleRelativePath", "KillEmAllGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKillEmAllGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKillEmAllGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKillEmAllGameMode_Statics::ClassParams = {
		&AKillEmAllGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AKillEmAllGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKillEmAllGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKillEmAllGameMode()
	{
		if (!Z_Registration_Info_UClass_AKillEmAllGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKillEmAllGameMode.OuterSingleton, Z_Construct_UClass_AKillEmAllGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKillEmAllGameMode.OuterSingleton;
	}
	template<> SIMPLESHOOTER_API UClass* StaticClass<AKillEmAllGameMode>()
	{
		return AKillEmAllGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKillEmAllGameMode);
	struct Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_KillEmAllGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_KillEmAllGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKillEmAllGameMode, AKillEmAllGameMode::StaticClass, TEXT("AKillEmAllGameMode"), &Z_Registration_Info_UClass_AKillEmAllGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKillEmAllGameMode), 1611305202U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_KillEmAllGameMode_h_1457422281(TEXT("/Script/SimpleShooter"),
		Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_KillEmAllGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_KillEmAllGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
