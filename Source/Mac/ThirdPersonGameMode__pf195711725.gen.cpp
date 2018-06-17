// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/ThirdPersonGameMode__pf195711725.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonGameMode__pf195711725() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AThirdPersonGameMode_C__pf195711725_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AThirdPersonGameMode_C__pf195711725();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AThirdPersonGameMode_C__pf195711725::StaticRegisterNativesAThirdPersonGameMode_C__pf195711725()
	{
	}
	UClass* Z_Construct_UClass_AThirdPersonGameMode_C__pf195711725_NoRegister()
	{
		return AThirdPersonGameMode_C__pf195711725::StaticClass();
	}
	UClass* Z_Construct_UClass_AThirdPersonGameMode_C__pf195711725()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/FBX/Character/ThirdPersonGameMode"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("ThirdPersonGameMode_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "ThirdPersonGameMode__pf195711725.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/ThirdPersonGameMode__pf195711725.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "ThirdPersonGameMode_C" },
				{ "ReplaceConverted", "/Game/FBX/Character/ThirdPersonGameMode.ThirdPersonGameMode_C" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/ThirdPersonGameMode__pf195711725.h" },
				{ "OverrideNativeName", "DefaultSceneRoot" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSceneRoot", RF_Public|RF_Transient, 0x001000040008000c, 1, nullptr, STRUCT_OFFSET(AThirdPersonGameMode_C__pf195711725, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_bpv__DefaultSceneRoot__pf_MetaData, ARRAY_COUNT(NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__DefaultSceneRoot__pf,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AThirdPersonGameMode_C__pf195711725>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AThirdPersonGameMode_C__pf195711725::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800288u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AThirdPersonGameMode_C__pf195711725, TEXT("ThirdPersonGameMode_C"), 554640128);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThirdPersonGameMode_C__pf195711725(Z_Construct_UClass_AThirdPersonGameMode_C__pf195711725, &AThirdPersonGameMode_C__pf195711725::StaticClass, TEXT("/Game/FBX/Character/ThirdPersonGameMode"), TEXT("ThirdPersonGameMode_C"), true, TEXT("/Game/FBX/Character/ThirdPersonGameMode"), TEXT("/Game/FBX/Character/ThirdPersonGameMode.ThirdPersonGameMode_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonGameMode_C__pf195711725);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
