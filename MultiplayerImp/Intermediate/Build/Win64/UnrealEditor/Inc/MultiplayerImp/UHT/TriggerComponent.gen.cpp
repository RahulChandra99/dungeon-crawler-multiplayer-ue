// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerImp/Public/DungeonCrawler/TriggerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	MULTIPLAYERIMP_API UClass* Z_Construct_UClass_UTriggerComponent();
	MULTIPLAYERIMP_API UClass* Z_Construct_UClass_UTriggerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MultiplayerImp();
// End Cross Module References
	void UTriggerComponent::StaticRegisterNativesUTriggerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTriggerComponent);
	UClass* Z_Construct_UClass_UTriggerComponent_NoRegister()
	{
		return UTriggerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DoorTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerImp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "DungeonCrawler/TriggerComponent.h" },
		{ "ModuleRelativePath", "Public/DungeonCrawler/TriggerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerComponent_Statics::NewProp_DoorTag_MetaData[] = {
		{ "Category", "TriggerComponent" },
		{ "ModuleRelativePath", "Public/DungeonCrawler/TriggerComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTriggerComponent_Statics::NewProp_DoorTag = { "DoorTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTriggerComponent, DoorTag), METADATA_PARAMS(Z_Construct_UClass_UTriggerComponent_Statics::NewProp_DoorTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::NewProp_DoorTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerComponent_Statics::NewProp_DoorTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriggerComponent_Statics::ClassParams = {
		&UTriggerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTriggerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerComponent()
	{
		if (!Z_Registration_Info_UClass_UTriggerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriggerComponent.OuterSingleton, Z_Construct_UClass_UTriggerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTriggerComponent.OuterSingleton;
	}
	template<> MULTIPLAYERIMP_API UClass* StaticClass<UTriggerComponent>()
	{
		return UTriggerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerComponent);
	UTriggerComponent::~UTriggerComponent() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_DUNGEON_CRAWLER_dungeon_crawler_multiplayer_ue_MultiplayerImp_Source_MultiplayerImp_Public_DungeonCrawler_TriggerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_DUNGEON_CRAWLER_dungeon_crawler_multiplayer_ue_MultiplayerImp_Source_MultiplayerImp_Public_DungeonCrawler_TriggerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTriggerComponent, UTriggerComponent::StaticClass, TEXT("UTriggerComponent"), &Z_Registration_Info_UClass_UTriggerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriggerComponent), 2937215764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_DUNGEON_CRAWLER_dungeon_crawler_multiplayer_ue_MultiplayerImp_Source_MultiplayerImp_Public_DungeonCrawler_TriggerComponent_h_170263646(TEXT("/Script/MultiplayerImp"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_DUNGEON_CRAWLER_dungeon_crawler_multiplayer_ue_MultiplayerImp_Source_MultiplayerImp_Public_DungeonCrawler_TriggerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_DUNGEON_CRAWLER_dungeon_crawler_multiplayer_ue_MultiplayerImp_Source_MultiplayerImp_Public_DungeonCrawler_TriggerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
