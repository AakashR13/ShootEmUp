// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleShooter/ShooterAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterAIController() {}
// Cross Module References
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AShooterAIController_NoRegister();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AShooterAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_SimpleShooter();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AShooterAIController::StaticRegisterNativesAShooterAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterAIController);
	UClass* Z_Construct_UClass_AShooterAIController_NoRegister()
	{
		return AShooterAIController::StaticClass();
	}
	struct Z_Construct_UClass_AShooterAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIBehavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ShooterAIController.h" },
		{ "ModuleRelativePath", "ShooterAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterAIController_Statics::NewProp_AIBehavior_MetaData[] = {
		{ "Category", "ShooterAIController" },
		{ "ModuleRelativePath", "ShooterAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterAIController_Statics::NewProp_AIBehavior = { "AIBehavior", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooterAIController, AIBehavior), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterAIController_Statics::NewProp_AIBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::NewProp_AIBehavior_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterAIController_Statics::NewProp_AIBehavior,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterAIController_Statics::ClassParams = {
		&AShooterAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooterAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterAIController()
	{
		if (!Z_Registration_Info_UClass_AShooterAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterAIController.OuterSingleton, Z_Construct_UClass_AShooterAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterAIController.OuterSingleton;
	}
	template<> SIMPLESHOOTER_API UClass* StaticClass<AShooterAIController>()
	{
		return AShooterAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterAIController);
	struct Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterAIController, AShooterAIController::StaticClass, TEXT("AShooterAIController"), &Z_Registration_Info_UClass_AShooterAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterAIController), 798732906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterAIController_h_4235888469(TEXT("/Script/SimpleShooter"),
		Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SimpleShooter_Source_SimpleShooter_ShooterAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
