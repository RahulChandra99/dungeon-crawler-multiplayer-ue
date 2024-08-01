// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerImp/MultiplayerImpGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerImpGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MULTIPLAYERIMP_API UClass* Z_Construct_UClass_AMultiplayerImpGameMode();
	MULTIPLAYERIMP_API UClass* Z_Construct_UClass_AMultiplayerImpGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MultiplayerImp();
// End Cross Module References
	void AMultiplayerImpGameMode::StaticRegisterNativesAMultiplayerImpGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerImpGameMode);
	UClass* Z_Construct_UClass_AMultiplayerImpGameMode_NoRegister()
	{
		return AMultiplayerImpGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerImpGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayerImpGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerImp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerImpGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MultiplayerImpGameMode.h" },
		{ "ModuleRelativePath", "MultiplayerImpGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayerImpGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerImpGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerImpGameMode_Statics::ClassParams = {
		&AMultiplayerImpGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMultiplayerImpGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerImpGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiplayerImpGameMode()
	{
		if (!Z_Registration_Info_UClass_AMultiplayerImpGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerImpGameMode.OuterSingleton, Z_Construct_UClass_AMultiplayerImpGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMultiplayerImpGameMode.OuterSingleton;
	}
	template<> MULTIPLAYERIMP_API UClass* StaticClass<AMultiplayerImpGameMode>()
	{
		return AMultiplayerImpGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerImpGameMode);
	AMultiplayerImpGameMode::~AMultiplayerImpGameMode() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_MultiplayerImp_Source_MultiplayerImp_MultiplayerImpGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_MultiplayerImp_Source_MultiplayerImp_MultiplayerImpGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerImpGameMode, AMultiplayerImpGameMode::StaticClass, TEXT("AMultiplayerImpGameMode"), &Z_Registration_Info_UClass_AMultiplayerImpGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerImpGameMode), 355527102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_MultiplayerImp_Source_MultiplayerImp_MultiplayerImpGameMode_h_3397875065(TEXT("/Script/MultiplayerImp"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_MultiplayerImp_Source_MultiplayerImp_MultiplayerImpGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_MultiplayerImp_Source_MultiplayerImp_MultiplayerImpGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
