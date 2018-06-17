#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class USaveGame;
class UUserWidget;
class UButton;
class UImage;
class UCircularThrobber;
class UWidgetAnimation;
#include "Settings__pf2302387670.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/GameMenu/Settings.Settings_C", OverrideNativeName="Settings_C"))
class USettings_C__pf2302387670 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Export, meta=(Category="Animations", OverrideNativeName="Saving"))
	UWidgetAnimation* bpv__Saving__pf;
	UPROPERTY(BlueprintReadOnly, Export, meta=(Category="Animations", OverrideNativeName="Window2"))
	UWidgetAnimation* bpv__Window2__pf;
	UPROPERTY(BlueprintReadOnly, Export, meta=(Category="Animations", OverrideNativeName="Window1"))
	UWidgetAnimation* bpv__Window1__pf;
	UPROPERTY(BlueprintReadOnly, Export, meta=(Category="Animations", OverrideNativeName="Quality4"))
	UWidgetAnimation* bpv__Quality4__pf;
	UPROPERTY(BlueprintReadOnly, Export, meta=(Category="Animations", OverrideNativeName="Quality3"))
	UWidgetAnimation* bpv__Quality3__pf;
	UPROPERTY(BlueprintReadOnly, Export, meta=(Category="Animations", OverrideNativeName="Quality2"))
	UWidgetAnimation* bpv__Quality2__pf;
	UPROPERTY(BlueprintReadOnly, Export, meta=(Category="Animations", OverrideNativeName="Quality1"))
	UWidgetAnimation* bpv__Quality1__pf;
	UPROPERTY(BlueprintReadOnly, Export, meta=(Category="Animations", OverrideNativeName="Enter"))
	UWidgetAnimation* bpv__Enter__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Best", Category="Settings", OverrideNativeName="Best"))
	UButton* bpv__Best__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_72", Category="Settings", OverrideNativeName="Button_72"))
	UButton* bpv__Button_72__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CircularThrobber_0", Category="Settings", OverrideNativeName="CircularThrobber_0"))
	UCircularThrobber* bpv__CircularThrobber_0__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Fullscreen", Category="Settings", OverrideNativeName="Fullscreen"))
	UButton* bpv__Fullscreen__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="High", Category="Settings", OverrideNativeName="High"))
	UButton* bpv__High__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_30", Category="Settings", OverrideNativeName="Image_30"))
	UImage* bpv__Image_30__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_102", Category="Settings", OverrideNativeName="Image_102"))
	UImage* bpv__Image_102__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_157", Category="Settings", OverrideNativeName="Image_157"))
	UImage* bpv__Image_157__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Low", Category="Settings", OverrideNativeName="Low"))
	UButton* bpv__Low__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Medium", Category="Settings", OverrideNativeName="Medium"))
	UButton* bpv__Medium__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Windowed", Category="Settings", OverrideNativeName="Windowed"))
	UButton* bpv__Windowed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Color Fullscreen", Category="Default", OverrideNativeName="ColorFullscreen"))
	FSlateColor bpv__ColorFullscreen__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Checked Fullscreen", Category="Default", OverrideNativeName="Checked fullscreen"))
	FSlateColor bpv__Checkedxfullscreen__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Main Menu", Category="Default", OverrideNativeName="Main Menu"))
	UUserWidget* bpv__MainxMenu__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Low Active", Category="Default", OverrideNativeName="Low active"))
	bool bpv__Lowxactive__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Medium Active", Category="Default", OverrideNativeName="Medium Active"))
	bool bpv__MediumxActive__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="High Active", Category="Default", OverrideNativeName="High Active"))
	bool bpv__HighxActive__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Best Active", Category="Default", OverrideNativeName="Best Active"))
	bool bpv__BestxActive__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fullscreen Active", Category="Default", OverrideNativeName="Fullscreen Active"))
	bool bpv__FullscreenxActive__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Windowed Active", Category="Default", OverrideNativeName="Windowed Active"))
	bool bpv__WindowedxActive__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Saver Ref", Category="Default", OverrideNativeName="SaverRef"))
	USaveGame* bpv__SaverRef__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SaveGameToSlot_ReturnValue"))
	bool b0l__CallFunc_SaveGameToSlot_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SaveGameToSlot_ReturnValue1"))
	bool b0l__CallFunc_SaveGameToSlot_ReturnValue1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SaveGameToSlot_ReturnValue2"))
	bool b0l__CallFunc_SaveGameToSlot_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SaveGameToSlot_ReturnValue3"))
	bool b0l__CallFunc_SaveGameToSlot_ReturnValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_Saver"))
	USaveGame* b0l__K2Node_DynamicCast_AsMenu_Saver__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SaveGameToSlot_ReturnValue4"))
	bool b0l__CallFunc_SaveGameToSlot_ReturnValue4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SaveGameToSlot_ReturnValue5"))
	bool b0l__CallFunc_SaveGameToSlot_ReturnValue5__pf;
	USettings_C__pf2302387670(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Settings__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Settings__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Settings__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Settings__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Settings__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Settings__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Settings__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Settings__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Windowed Event"))
	virtual void bpf__WindowedxEvent__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Best Event"))
	virtual void bpf__BestxEvent__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Medium Event"))
	virtual void bpf__MediumxEvent__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Low Event"))
	virtual void bpf__LowxEvent__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Fullscreen Event"))
	virtual void bpf__FullscreenxEvent__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HighEvent"))
	virtual void bpf__HighEvent__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_72_K2Node_ComponentBoundEvent_145_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_72_K2Node_ComponentBoundEvent_145_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Windowed_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Windowed_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Fullscreen_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Fullscreen_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Best_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Best_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__High_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__High_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Medium_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Medium_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Low_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Low_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetBrush_0"))
	virtual FSlateBrush  bpf__GetBrush_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
