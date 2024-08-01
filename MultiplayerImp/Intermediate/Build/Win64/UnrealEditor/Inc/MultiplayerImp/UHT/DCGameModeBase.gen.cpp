// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerImp/Public/DungeonCrawler/DCGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDCGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MULTIPLAYERIMP_API UClass* Z_Construct_UClass_ADCGameModeBase();
	MULTIPLAYERIMP_API UClass* Z_Construct_UClass_ADCGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MultiplayerImp();
// End Cross Module References
	void ADCGameModeBase::StaticRegisterNativesADCGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADCGameModeBase);
	UClass* Z_Construct_UClass_ADCGameModeBase_NoRegister()
	{
		return ADCGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADCGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADCGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerImp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADCGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DungeonCrawler/DCGameModeBase.h" },
		{ "ModuleRelativePath", "Public/DungeonCrawler/DCGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADCGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADCGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADCGameModeBase_Statics::ClassParams = {
		&ADCGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADCGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADCGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADCGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ADCGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADCGameModeBase.OuterSingleton, Z_Construct_UClass_ADCGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADCGameModeBase.OuterSingleton;
	}
	template<> MULTIPLAYERIMP_API UClass* StaticClass<ADCGameModeBase>()
	{
		return ADCGameModeBase::StaticClass();
	}
	ADCGameModeBase::ADCGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADCGameModeBase);
	ADCGameModeBase::~ADCGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_MultiplayerImp_Source_MultiplayerImp_Public_DungeonCrawler_DCGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_MultiplayerImp_Source_MultiplayerImp_Public_DungeonCrawler_DCGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADCGameModeBase, ADCGameModeBase::StaticClass, TEXT("ADCGameModeBase"), &Z_Registration_Info_UClass_ADCGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADCGameModeBase), 935348383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_MultiplayerImp_Source_MultiplayerImp_Public_DungeonCrawler_DCGameModeBase_h_2046575906(TEXT("/Script/MultiplayerImp"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_MultiplayerImp_Source_MultiplayerImp_Public_DungeonCrawler_DCGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_MultiplayerImp_Source_MultiplayerImp_Public_DungeonCrawler_DCGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
