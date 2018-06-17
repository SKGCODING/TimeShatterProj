// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/InventoryStruct__pf745123665.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryStruct__pf745123665() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryStruct__pf745123665();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FInventoryStruct__pf745123665::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/DisplayWidgets/UMG_UI_Inventory/InterfaceController/InventoryStruct"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("InventoryStruct")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FInventoryStruct__pf745123665_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryStruct__pf745123665, StructPackage, TEXT("InventoryStruct"), sizeof(FInventoryStruct__pf745123665), Get_Z_Construct_UScriptStruct_FInventoryStruct__pf745123665_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInventoryStruct__pf745123665(FInventoryStruct__pf745123665::StaticStruct, TEXT("/Game/DisplayWidgets/UMG_UI_Inventory/InterfaceController/InventoryStruct"), TEXT("InventoryStruct"), true, TEXT("/Game/DisplayWidgets/UMG_UI_Inventory/InterfaceController/InventoryStruct"), TEXT("/Game/DisplayWidgets/UMG_UI_Inventory/InterfaceController/InventoryStruct.InventoryStruct"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFInventoryStruct__pf745123665
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFInventoryStruct__pf745123665()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InventoryStruct")),new UScriptStruct::TCppStructOps<FInventoryStruct__pf745123665>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFInventoryStruct__pf745123665;
	UScriptStruct* Z_Construct_UScriptStruct_FInventoryStruct__pf745123665()
	{
		extern uint32 Get_Z_Construct_UScriptStruct_FInventoryStruct__pf745123665_CRC();
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/DisplayWidgets/UMG_UI_Inventory/InterfaceController/InventoryStruct"));
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InventoryStruct"), sizeof(FInventoryStruct__pf745123665), Get_Z_Construct_UScriptStruct_FInventoryStruct__pf745123665_CRC(), true);
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/InventoryStruct__pf745123665.h" },
				{ "OverrideNativeName", "InventoryStruct" },
				{ "ReplaceConverted", "/Game/DisplayWidgets/UMG_UI_Inventory/InterfaceController/InventoryStruct.InventoryStruct" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryStruct__pf745123665>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ActionText_11_FB5A2FD77E454844B15AD2A818134C79__pf_MetaData[] = {
				{ "Category", "InventoryStruct__pf745123665" },
				{ "DisplayName", "ActionText" },
				{ "ModuleRelativePath", "Public/InventoryStruct__pf745123665.h" },
				{ "OverrideNativeName", "ActionText_11_FB5A2FD77E454844B15AD2A818134C79" },
				{ "Tooltip", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__ActionText_11_FB5A2FD77E454844B15AD2A818134C79__pf = { UE4CodeGen_Private::EPropertyClass::Text, "ActionText_11_FB5A2FD77E454844B15AD2A818134C79", RF_Public|RF_Transient, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInventoryStruct__pf745123665, bpv__ActionText_11_FB5A2FD77E454844B15AD2A818134C79__pf), METADATA_PARAMS(NewProp_bpv__ActionText_11_FB5A2FD77E454844B15AD2A818134C79__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ActionText_11_FB5A2FD77E454844B15AD2A818134C79__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PickupText_10_BD668CE4CB44E64C10CEE5978DECE184__pf_MetaData[] = {
				{ "Category", "InventoryStruct__pf745123665" },
				{ "DisplayName", "PickupText" },
				{ "ModuleRelativePath", "Public/InventoryStruct__pf745123665.h" },
				{ "OverrideNativeName", "PickupText_10_BD668CE4CB44E64C10CEE5978DECE184" },
				{ "Tooltip", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__PickupText_10_BD668CE4CB44E64C10CEE5978DECE184__pf = { UE4CodeGen_Private::EPropertyClass::Text, "PickupText_10_BD668CE4CB44E64C10CEE5978DECE184", RF_Public|RF_Transient, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInventoryStruct__pf745123665, bpv__PickupText_10_BD668CE4CB44E64C10CEE5978DECE184__pf), METADATA_PARAMS(NewProp_bpv__PickupText_10_BD668CE4CB44E64C10CEE5978DECE184__pf_MetaData, ARRAY_COUNT(NewProp_bpv__PickupText_10_BD668CE4CB44E64C10CEE5978DECE184__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ItemImage_7_714E14D627476A655A7FD392AC3D579B__pf_MetaData[] = {
				{ "Category", "InventoryStruct__pf745123665" },
				{ "DisplayName", "ItemImage" },
				{ "ModuleRelativePath", "Public/InventoryStruct__pf745123665.h" },
				{ "OverrideNativeName", "ItemImage_7_714E14D627476A655A7FD392AC3D579B" },
				{ "Tooltip", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ItemImage_7_714E14D627476A655A7FD392AC3D579B__pf = { UE4CodeGen_Private::EPropertyClass::Object, "ItemImage_7_714E14D627476A655A7FD392AC3D579B", RF_Public|RF_Transient, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInventoryStruct__pf745123665, bpv__ItemImage_7_714E14D627476A655A7FD392AC3D579B__pf), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_bpv__ItemImage_7_714E14D627476A655A7FD392AC3D579B__pf_MetaData, ARRAY_COUNT(NewProp_bpv__ItemImage_7_714E14D627476A655A7FD392AC3D579B__pf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Item_5_3C3F173F784CEEC390BF3181900E08F4__pf_MetaData[] = {
				{ "Category", "InventoryStruct__pf745123665" },
				{ "DisplayName", "Item" },
				{ "ModuleRelativePath", "Public/InventoryStruct__pf745123665.h" },
				{ "OverrideNativeName", "Item_5_3C3F173F784CEEC390BF3181900E08F4" },
				{ "Tooltip", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Item_5_3C3F173F784CEEC390BF3181900E08F4__pf = { UE4CodeGen_Private::EPropertyClass::Object, "Item_5_3C3F173F784CEEC390BF3181900E08F4", RF_Public|RF_Transient, 0x0010000000000805, 1, nullptr, STRUCT_OFFSET(FInventoryStruct__pf745123665, bpv__Item_5_3C3F173F784CEEC390BF3181900E08F4__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_bpv__Item_5_3C3F173F784CEEC390BF3181900E08F4__pf_MetaData, ARRAY_COUNT(NewProp_bpv__Item_5_3C3F173F784CEEC390BF3181900E08F4__pf_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ActionText_11_FB5A2FD77E454844B15AD2A818134C79__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__PickupText_10_BD668CE4CB44E64C10CEE5978DECE184__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__ItemImage_7_714E14D627476A655A7FD392AC3D579B__pf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bpv__Item_5_3C3F173F784CEEC390BF3181900E08F4__pf,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/DisplayWidgets/UMG_UI_Inventory/InterfaceController/InventoryStruct")); },
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"InventoryStruct",
				RF_Public|RF_Transient,
				EStructFlags(0x00000001),
				sizeof(FInventoryStruct__pf745123665),
				alignof(FInventoryStruct__pf745123665),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInventoryStruct__pf745123665_CRC() { return 1806140595U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
