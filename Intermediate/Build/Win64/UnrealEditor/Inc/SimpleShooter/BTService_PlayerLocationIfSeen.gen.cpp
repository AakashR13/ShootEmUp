// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleShooter/BTService_PlayerLocationIfSeen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_PlayerLocationIfSeen() {}
// Cross Module References
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_UBTService_PlayerLocationIfSeen_NoRegister();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_UBTService_PlayerLocationIfSeen();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_SimpleShooter();
// End Cross Module References
	void UBTService_PlayerLocationIfSeen::StaticRegisterNativesUBTService_PlayerLocationIfSeen()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_PlayerLocationIfSeen);
	UClass* Z_Construct_UClass_UBTService_PlayerLocationIfSeen_NoRegister()
	{
		return UBTService_PlayerLocationIfSeen::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_PlayerLocationIfSeen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_PlayerLocationIfSeen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_PlayerLocationIfSeen_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTService_PlayerLocationIfSeen.h" },
		{ "ModuleRelativePath", "BTService_PlayerLocationIfSeen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_PlayerLocationIfSeen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_PlayerLocationIfSeen>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_PlayerLocationIfSeen_Statics::ClassParams = {
		&UBTService_PlayerLocationIfSeen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTService_PlayerLocationIfSeen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_PlayerLocationIfSeen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_PlayerLocationIfSeen()
	{
		if (!Z_Registration_Info_UClass_UBTService_PlayerLocationIfSeen.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_PlayerLocationIfSeen.OuterSingleton, Z_Construct_UClass_UBTService_PlayerLocationIfSeen_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_PlayerLocationIfSeen.OuterSingleton;
	}
	template<> SIMPLESHOOTER_API UClass* StaticClass<UBTService_PlayerLocationIfSeen>()
	{
		return UBTService_PlayerLocationIfSeen::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_PlayerLocationIfSeen);
	struct Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_BTService_PlayerLocationIfSeen_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_BTService_PlayerLocationIfSeen_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_PlayerLocationIfSeen, UBTService_PlayerLocationIfSeen::StaticClass, TEXT("UBTService_PlayerLocationIfSeen"), &Z_Registration_Info_UClass_UBTService_PlayerLocationIfSeen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_PlayerLocationIfSeen), 2671469048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_BTService_PlayerLocationIfSeen_h_1388419644(TEXT("/Script/SimpleShooter"),
		Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_BTService_PlayerLocationIfSeen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_BTService_PlayerLocationIfSeen_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
