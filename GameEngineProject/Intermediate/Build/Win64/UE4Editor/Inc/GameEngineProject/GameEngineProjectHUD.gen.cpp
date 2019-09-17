// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameEngineProject/GameEngineProjectHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameEngineProjectHUD() {}
// Cross Module References
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_AGameEngineProjectHUD_NoRegister();
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_AGameEngineProjectHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_GameEngineProject();
// End Cross Module References
	void AGameEngineProjectHUD::StaticRegisterNativesAGameEngineProjectHUD()
	{
	}
	UClass* Z_Construct_UClass_AGameEngineProjectHUD_NoRegister()
	{
		return AGameEngineProjectHUD::StaticClass();
	}
	struct Z_Construct_UClass_AGameEngineProjectHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameEngineProjectHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_GameEngineProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEngineProjectHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "GameEngineProjectHUD.h" },
		{ "ModuleRelativePath", "GameEngineProjectHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameEngineProjectHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameEngineProjectHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameEngineProjectHUD_Statics::ClassParams = {
		&AGameEngineProjectHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameEngineProjectHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGameEngineProjectHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameEngineProjectHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameEngineProjectHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameEngineProjectHUD, 3422992155);
	template<> GAMEENGINEPROJECT_API UClass* StaticClass<AGameEngineProjectHUD>()
	{
		return AGameEngineProjectHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameEngineProjectHUD(Z_Construct_UClass_AGameEngineProjectHUD, &AGameEngineProjectHUD::StaticClass, TEXT("/Script/GameEngineProject"), TEXT("AGameEngineProjectHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameEngineProjectHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
