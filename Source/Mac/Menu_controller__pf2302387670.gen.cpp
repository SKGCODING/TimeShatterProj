// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Menu_controller__pf2302387670.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenu_controller__pf2302387670() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMenu_controller_C__pf2302387670_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMenu_controller_C__pf2302387670();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
// End Cross Module References
	void AMenu_controller_C__pf2302387670::StaticRegisterNativesAMenu_controller_C__pf2302387670()
	{
	}
	UClass* Z_Construct_UClass_AMenu_controller_C__pf2302387670_NoRegister()
	{
		return AMenu_controller_C__pf2302387670::StaticClass();
	}
	UClass* Z_Construct_UClass_AMenu_controller_C__pf2302387670()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/GameMenu/Menu_controller"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Menu_controller_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Menu_controller__pf2302387670.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Menu_controller__pf2302387670.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "OverrideNativeName", "Menu_controller_C" },
				{ "ReplaceConverted", "/Game/GameMenu/Menu_controller.Menu_controller_C" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMenu_controller_C__pf2302387670>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMenu_controller_C__pf2302387670::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800284u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AMenu_controller_C__pf2302387670, TEXT("Menu_controller_C"), 1696669222);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMenu_controller_C__pf2302387670(Z_Construct_UClass_AMenu_controller_C__pf2302387670, &AMenu_controller_C__pf2302387670::StaticClass, TEXT("/Game/GameMenu/Menu_controller"), TEXT("Menu_controller_C"), true, TEXT("/Game/GameMenu/Menu_controller"), TEXT("/Game/GameMenu/Menu_controller.Menu_controller_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMenu_controller_C__pf2302387670);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
