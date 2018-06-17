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
	};
}
const FBlueprintDependencyObjectRef& F__NativeDependencies::Get(int16 Index)
{
static const FBlueprintDependencyObjectRef& NullObjectRef = FBlueprintDependencyObjectRef();
if (Index == -1) { return NullObjectRef; }
	check((Index >= 0) && (Index < 15));
	return ::NativizedCodeDependenties[Index];
};
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
