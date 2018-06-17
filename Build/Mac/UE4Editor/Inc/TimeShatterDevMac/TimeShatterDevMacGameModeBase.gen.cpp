// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TimeShatterDevMacGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeShatterDevMacGameModeBase() {}
// Cross Module References
	TIMESHATTERDEVMAC_API UClass* Z_Construct_UClass_ATimeShatterDevMacGameModeBase_NoRegister();
	TIMESHATTERDEVMAC_API UClass* Z_Construct_UClass_ATimeShatterDevMacGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TimeShatterDevMac();
// End Cross Module References
	void ATimeShatterDevMacGameModeBase::StaticRegisterNativesATimeShatterDevMacGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATimeShatterDevMacGameModeBase_NoRegister()
	{
		return ATimeShatterDevMacGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ATimeShatterDevMacGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_TimeShatterDevMac,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "TimeShatterDevMacGameModeBase.h" },
				{ "ModuleRelativePath", "TimeShatterDevMacGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATimeShatterDevMacGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATimeShatterDevMacGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATimeShatterDevMacGameModeBase, 3169395845);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimeShatterDevMacGameModeBase(Z_Construct_UClass_ATimeShatterDevMacGameModeBase, &ATimeShatterDevMacGameModeBase::StaticClass, TEXT("/Script/TimeShatterDevMac"), TEXT("ATimeShatterDevMacGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeShatterDevMacGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
