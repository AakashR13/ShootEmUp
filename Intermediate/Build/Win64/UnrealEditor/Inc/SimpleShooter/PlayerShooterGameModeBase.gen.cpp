// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleShooter/PlayerShooterGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerShooterGameModeBase() {}
// Cross Module References
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_APlayerShooterGameModeBase_NoRegister();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_APlayerShooterGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SimpleShooter();
// End Cross Module References
	void APlayerShooterGameModeBase::StaticRegisterNativesAPlayerShooterGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerShooterGameModeBase);
	UClass* Z_Construct_UClass_APlayerShooterGameModeBase_NoRegister()
	{
		return APlayerShooterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APlayerShooterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerShooterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShooterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlayerShooterGameModeBase.h" },
		{ "ModuleRelativePath", "PlayerShooterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerShooterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerShooterGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerShooterGameModeBase_Statics::ClassParams = {
		&APlayerShooterGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APlayerShooterGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShooterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerShooterGameModeBase()
	{
		if (!Z_Registration_Info_UClass_APlayerShooterGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerShooterGameModeBase.OuterSingleton, Z_Construct_UClass_APlayerShooterGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerShooterGameModeBase.OuterSingleton;
	}
	template<> SIMPLESHOOTER_API UClass* StaticClass<APlayerShooterGameModeBase>()
	{
		return APlayerShooterGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerShooterGameModeBase);
	struct Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_PlayerShooterGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_PlayerShooterGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerShooterGameModeBase, APlayerShooterGameModeBase::StaticClass, TEXT("APlayerShooterGameModeBase"), &Z_Registration_Info_UClass_APlayerShooterGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerShooterGameModeBase), 279876268U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_PlayerShooterGameModeBase_h_1196041624(TEXT("/Script/SimpleShooter"),
		Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_PlayerShooterGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_PlayerShooterGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
