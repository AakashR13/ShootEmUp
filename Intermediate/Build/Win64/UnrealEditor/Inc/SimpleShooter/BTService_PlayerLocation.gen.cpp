// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleShooter/BTService_PlayerLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_PlayerLocation() {}
// Cross Module References
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_UBTService_PlayerLocation_NoRegister();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_UBTService_PlayerLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_SimpleShooter();
// End Cross Module References
	void UBTService_PlayerLocation::StaticRegisterNativesUBTService_PlayerLocation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_PlayerLocation);
	UClass* Z_Construct_UClass_UBTService_PlayerLocation_NoRegister()
	{
		return UBTService_PlayerLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_PlayerLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_PlayerLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_PlayerLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTService_PlayerLocation.h" },
		{ "ModuleRelativePath", "BTService_PlayerLocation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_PlayerLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_PlayerLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_PlayerLocation_Statics::ClassParams = {
		&UBTService_PlayerLocation::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_PlayerLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_PlayerLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_PlayerLocation()
	{
		if (!Z_Registration_Info_UClass_UBTService_PlayerLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_PlayerLocation.OuterSingleton, Z_Construct_UClass_UBTService_PlayerLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_PlayerLocation.OuterSingleton;
	}
	template<> SIMPLESHOOTER_API UClass* StaticClass<UBTService_PlayerLocation>()
	{
		return UBTService_PlayerLocation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_PlayerLocation);
	struct Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_BTService_PlayerLocation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_BTService_PlayerLocation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_PlayerLocation, UBTService_PlayerLocation::StaticClass, TEXT("UBTService_PlayerLocation"), &Z_Registration_Info_UClass_UBTService_PlayerLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_PlayerLocation), 2562901812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_BTService_PlayerLocation_h_861347634(TEXT("/Script/SimpleShooter"),
		Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_BTService_PlayerLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_BTService_PlayerLocation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
