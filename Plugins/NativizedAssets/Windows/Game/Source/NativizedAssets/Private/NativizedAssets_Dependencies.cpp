#include "NativizedAssets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
namespace
{
	static const FBlueprintDependencyObjectRef NativizedCodeDependenties[] =
	{
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Actor"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Texture2D"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FBX/Character"), TEXT("CharacterInGame"), TEXT("CharacterInGame_C"), TEXT("/Script/Engine"), TEXT("BlueprintGeneratedClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SceneComponent"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("GameModeBase"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("GameSession"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("GameStateBase"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PlayerState"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("HUD"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/FBX/Character"), TEXT("CharacterInGame"), TEXT("Default__CharacterInGame_C"), TEXT("/Game/FBX/Character/CharacterInGame"), TEXT("CharacterInGame_C"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SpectatorPawn"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PlayerController"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ServerStatReplicator"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/GameMenu"), TEXT("Menu_controller"), TEXT("Menu_controller_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("CheatManager"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/GameMenu/MainMenuImageResources"), TEXT("arrow_arrow"), TEXT("arrow_arrow"), TEXT("/Script/Engine"), TEXT("Texture2D"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/GameMenu/Savedata"), TEXT("MenuSaver"), TEXT("MenuSaver_C"), TEXT("/Script/Engine"), TEXT("BlueprintGeneratedClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineFonts"), TEXT("Roboto"), TEXT("Roboto"), TEXT("/Script/Engine"), TEXT("Font"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("CanvasPanel"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("Button"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("HorizontalBox"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PointerToUberGraphFrame"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/GameMenu/Savedata"), TEXT("MenuSaver"), TEXT("Default__MenuSaver_C"), TEXT("/Game/GameMenu/Savedata/MenuSaver"), TEXT("MenuSaver_C"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SaveGame"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("GameplayStatics"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetMathLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/GameMenu"), TEXT("MainMenu"), TEXT("MainMenu_C"), TEXT("/Script/UMG"), TEXT("WidgetBlueprintGeneratedClass"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Game/GameMenu"), TEXT("MainMenu"), TEXT("Default__MainMenu_C"), TEXT("/Game/GameMenu/MainMenu"), TEXT("MainMenu_C"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetSystemLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("UserWidget"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("WidgetAnimation"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("SlateCore"), TEXT("SlateBrush"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("SlateCore"), TEXT("Margin"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("SlateCore"), TEXT("SlateColor"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("CircularThrobber"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("Image"), TEXT("/Script/CoreUObject"), TEXT("Class"), TEXT("")),
	};
}
const FBlueprintDependencyObjectRef& F__NativeDependencies::Get(int16 Index)
{
static const FBlueprintDependencyObjectRef& NullObjectRef = FBlueprintDependencyObjectRef();
if (Index == -1) { return NullObjectRef; }
	check((Index >= 0) && (Index < 36));
	return ::NativizedCodeDependenties[Index];
};
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
