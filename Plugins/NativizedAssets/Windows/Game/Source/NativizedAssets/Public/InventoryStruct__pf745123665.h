#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class UTexture2D;
class AActor;
#include "InventoryStruct__pf745123665.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/DisplayWidgets/UMG_UI_Inventory/InterfaceController/InventoryStruct.InventoryStruct", OverrideNativeName="InventoryStruct"))
struct FInventoryStruct__pf745123665
{
public:
	GENERATED_BODY()
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Item", Tooltip, OverrideNativeName="Item_5_3C3F173F784CEEC390BF3181900E08F4"))
	AActor* bpv__Item_5_3C3F173F784CEEC390BF3181900E08F4__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ItemImage", Tooltip, OverrideNativeName="ItemImage_7_714E14D627476A655A7FD392AC3D579B"))
	UTexture2D* bpv__ItemImage_7_714E14D627476A655A7FD392AC3D579B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PickupText", Tooltip, OverrideNativeName="PickupText_10_BD668CE4CB44E64C10CEE5978DECE184"))
	FText bpv__PickupText_10_BD668CE4CB44E64C10CEE5978DECE184__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ActionText", Tooltip, OverrideNativeName="ActionText_11_FB5A2FD77E454844B15AD2A818134C79"))
	FText bpv__ActionText_11_FB5A2FD77E454844B15AD2A818134C79__pf;
	FInventoryStruct__pf745123665();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FInventoryStruct__pf745123665& __Other) const
	{
		return FInventoryStruct__pf745123665::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
