#include "NativizedAssets.h"
#include "Settings__pf2302387670.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/BackgroundBlur.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/Spacer.h"
#include "Runtime/UMG/Public/Components/CircularThrobber.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/Engine/Public/IAmbisonicsMixer.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollision.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationSystem.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/AI/Navigation/CrowdManagerBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavMeshBoundsVolume.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationPath.h"
#include "Runtime/AIModule/Classes/Navigation/CrowdManager.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformTrack.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformSection.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneColorTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneColorSection.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneFloatTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneFloatSection.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/UMG/Private/Animation/MovieScene2DTransformTemplate.h"
#include "Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneColorTemplate.h"
#include "Runtime/MovieSceneTracks/Private/Evaluation/MovieScenePropertyTemplates.h"

#include "MenuSaver__pf1473906957.h"
#include "MainMenu__pf2302387670.h"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
USettings_C__pf2302387670::USettings_C__pf2302387670(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (USettings_C__pf2302387670::StaticClass() == GetClass()))
	{
		USettings_C__pf2302387670::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Saving__pf = nullptr;
	bpv__Window2__pf = nullptr;
	bpv__Window1__pf = nullptr;
	bpv__Quality4__pf = nullptr;
	bpv__Quality3__pf = nullptr;
	bpv__Quality2__pf = nullptr;
	bpv__Quality1__pf = nullptr;
	bpv__Enter__pf = nullptr;
	bpv__Best__pf = nullptr;
	bpv__Button_72__pf = nullptr;
	bpv__CircularThrobber_0__pf = nullptr;
	bpv__Fullscreen__pf = nullptr;
	bpv__High__pf = nullptr;
	bpv__Image_30__pf = nullptr;
	bpv__Image_102__pf = nullptr;
	bpv__Image_157__pf = nullptr;
	bpv__Low__pf = nullptr;
	bpv__Medium__pf = nullptr;
	bpv__Windowed__pf = nullptr;
	bpv__MainxMenu__pfT = nullptr;
	bpv__Lowxactive__pfT = false;
	bpv__MediumxActive__pfT = false;
	bpv__HighxActive__pfT = false;
	bpv__BestxActive__pfT = false;
	bpv__FullscreenxActive__pfT = false;
	bpv__WindowedxActive__pfT = false;
	bpv__SaverRef__pf = nullptr;
	bCanEverTick = false;
	bCanEverPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void USettings_C__pf2302387670::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void USettings_C__pf2302387670::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("Enter_INST"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__2);
	auto __Local__3 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("Quality1_INST"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__3);
	auto __Local__4 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("Quality2_INST"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__4);
	auto __Local__5 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("Quality3_INST"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__5);
	auto __Local__6 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("Quality4_INST"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__6);
	auto __Local__7 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("Window1_INST"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__7);
	auto __Local__8 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("Window2_INST"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__8);
	auto __Local__9 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("Saving_INST"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__9);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(7);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 7);
	auto& __Local__10 = __Local__0->ComponentDelegateBindings[0];
	__Local__10.ComponentPropertyName = FName(TEXT("Button_72"));
	__Local__10.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__10.FunctionNameToBind = FName(TEXT("BndEvt__Button_72_K2Node_ComponentBoundEvent_145_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__11 = __Local__0->ComponentDelegateBindings[1];
	__Local__11.ComponentPropertyName = FName(TEXT("Windowed"));
	__Local__11.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__11.FunctionNameToBind = FName(TEXT("BndEvt__Windowed_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__12 = __Local__0->ComponentDelegateBindings[2];
	__Local__12.ComponentPropertyName = FName(TEXT("Fullscreen"));
	__Local__12.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__12.FunctionNameToBind = FName(TEXT("BndEvt__Fullscreen_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__13 = __Local__0->ComponentDelegateBindings[3];
	__Local__13.ComponentPropertyName = FName(TEXT("Best"));
	__Local__13.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__13.FunctionNameToBind = FName(TEXT("BndEvt__Best_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__14 = __Local__0->ComponentDelegateBindings[4];
	__Local__14.ComponentPropertyName = FName(TEXT("High"));
	__Local__14.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__14.FunctionNameToBind = FName(TEXT("BndEvt__High_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__15 = __Local__0->ComponentDelegateBindings[5];
	__Local__15.ComponentPropertyName = FName(TEXT("Medium"));
	__Local__15.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__15.FunctionNameToBind = FName(TEXT("BndEvt__Medium_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__16 = __Local__0->ComponentDelegateBindings[6];
	__Local__16.ComponentPropertyName = FName(TEXT("Low"));
	__Local__16.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__16.FunctionNameToBind = FName(TEXT("BndEvt__Low_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__17 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__18 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__17), UPanelWidget::__PPO__Slots() )));
	__Local__18 = TArray<UPanelSlot*> ();
	__Local__18.Reserve(11);
	auto __Local__19 = NewObject<UCanvasPanelSlot>(__Local__17, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_12"));
	__Local__19->LayoutData.Offsets.Right = 1931.831787f;
	__Local__19->LayoutData.Offsets.Bottom = 1109.079102f;
	__Local__19->Parent = __Local__17;
	auto __Local__20 = NewObject<UBackgroundBlur>(__Local__1, UBackgroundBlur::StaticClass(), TEXT("BackgroundBlur_0"));
	__Local__20->Padding.Left = 30.000000f;
	__Local__20->Padding.Top = 30.000000f;
	__Local__20->Padding.Right = 30.000000f;
	__Local__20->Padding.Bottom = 30.000000f;
	__Local__20->BlurStrength = 10.000000f;
	__Local__20->Slot = __Local__19;
	__Local__19->Content = __Local__20;
	__Local__18.Add(__Local__19);
	auto __Local__21 = NewObject<UCanvasPanelSlot>(__Local__17, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_5"));
	__Local__21->LayoutData.Offsets.Left = -21.249390f;
	__Local__21->LayoutData.Offsets.Top = -7.276276f;
	__Local__21->LayoutData.Offsets.Right = -9.785400f;
	__Local__21->LayoutData.Offsets.Bottom = -25.795898f;
	__Local__21->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__21->Parent = __Local__17;
	auto __Local__22 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_30"));
	__Local__22->Brush.ImageSize = FVector2D(16.000000, 16.000000);
	auto& __Local__23 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__22->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__23 = FLinearColor(0.000000, 0.000000, 0.000000, 0.314000);
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__18.Add(__Local__21);
	auto __Local__24 = NewObject<UCanvasPanelSlot>(__Local__17, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_2"));
	__Local__24->LayoutData.Offsets.Left = -336.345764f;
	__Local__24->LayoutData.Offsets.Top = 4.000000f;
	__Local__24->LayoutData.Offsets.Right = 151.000000f;
	__Local__24->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__24->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.000000);
	__Local__24->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.000000);
	__Local__24->bAutoSize = true;
	__Local__24->Parent = __Local__17;
	auto __Local__25 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_38"));
	__Local__25->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("SETTINGS"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("071450825545BF0C173101AF9BC1ABF2") /* Key */
	);
	__Local__25->Font.Size = 100;
	auto& __Local__26 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__25), UTextLayoutWidget::__PPO__Justification() )));
	__Local__26 = ETextJustify::Type::Center;
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__18.Add(__Local__24);
	auto __Local__27 = NewObject<UCanvasPanelSlot>(__Local__17, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_13"));
	__Local__27->LayoutData.Offsets.Left = -352.691528f;
	__Local__27->LayoutData.Offsets.Top = -192.432251f;
	__Local__27->LayoutData.Offsets.Right = 311.743896f;
	__Local__27->LayoutData.Offsets.Bottom = 183.224670f;
	__Local__27->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__27->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__27->Parent = __Local__17;
	auto __Local__28 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Button_72"));
	__Local__28->WidgetStyle.Normal.ImageSize = FVector2D(434.000000, 214.000000);
	auto& __Local__29 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->WidgetStyle.Normal), FSlateBrush::__PPO__ResourceObject() )));
	__Local__29 = CastChecked<UObject>(CastChecked<UDynamicClass>(USettings_C__pf2302387670::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__28->WidgetStyle.Normal.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__28->WidgetStyle.Hovered.ImageSize = FVector2D(434.000000, 214.000000);
	auto& __Local__30 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__30 = CastChecked<UObject>(CastChecked<UDynamicClass>(USettings_C__pf2302387670::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__28->WidgetStyle.Hovered.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__28->WidgetStyle.Pressed.ImageSize = FVector2D(434.000000, 214.000000);
	auto& __Local__31 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->WidgetStyle.Pressed), FSlateBrush::__PPO__ResourceObject() )));
	__Local__31 = CastChecked<UObject>(CastChecked<UDynamicClass>(USettings_C__pf2302387670::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__28->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__28->WidgetStyle.Disabled.ImageSize = FVector2D(434.000000, 214.000000);
	auto& __Local__32 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->WidgetStyle.Disabled), FSlateBrush::__PPO__ResourceObject() )));
	__Local__32 = CastChecked<UObject>(CastChecked<UDynamicClass>(USettings_C__pf2302387670::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__28->WidgetStyle.Disabled.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__18.Add(__Local__27);
	auto __Local__33 = NewObject<UCanvasPanelSlot>(__Local__17, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__33->LayoutData.Offsets.Left = 384.000000f;
	__Local__33->LayoutData.Offsets.Top = -292.540527f;
	__Local__33->LayoutData.Offsets.Right = 466.950928f;
	__Local__33->LayoutData.Offsets.Bottom = 420.380371f;
	__Local__33->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__33->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.500000);
	__Local__33->Parent = __Local__17;
	auto __Local__34 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_102"));
	__Local__34->ColorAndOpacity = FLinearColor(0.000000, 0.000000, 0.000000, 0.500000);
	__Local__34->Slot = __Local__33;
	__Local__33->Content = __Local__34;
	__Local__18.Add(__Local__33);
	auto __Local__35 = NewObject<UCanvasPanelSlot>(__Local__17, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_1"));
	__Local__35->LayoutData.Offsets.Left = 416.000000f;
	__Local__35->LayoutData.Offsets.Top = 288.000000f;
	__Local__35->LayoutData.Offsets.Right = 499.014893f;
	__Local__35->LayoutData.Offsets.Bottom = 444.762756f;
	__Local__35->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__35->Parent = __Local__17;
	auto __Local__36 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_0"));
	auto& __Local__37 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__36), UPanelWidget::__PPO__Slots() )));
	__Local__37 = TArray<UPanelSlot*> ();
	__Local__37.Reserve(2);
	auto __Local__38 = NewObject<UVerticalBoxSlot>(__Local__36, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_0"));
	__Local__38->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__38->Parent = __Local__36;
	auto __Local__39 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_0"));
	auto& __Local__40 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__39), UPanelWidget::__PPO__Slots() )));
	__Local__40 = TArray<UPanelSlot*> ();
	__Local__40.Reserve(2);
	auto __Local__41 = NewObject<UHorizontalBoxSlot>(__Local__39, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__41->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__41->Parent = __Local__39;
	auto __Local__42 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Low"));
	__Local__42->BackgroundColor = FLinearColor(0.416667, 0.346937, 0.069444, 0.000000);
	auto& __Local__43 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__42), UPanelWidget::__PPO__Slots() )));
	__Local__43 = TArray<UPanelSlot*> ();
	__Local__43.Reserve(1);
	auto __Local__44 = NewObject<UButtonSlot>(__Local__42, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__44->Parent = __Local__42;
	auto __Local__45 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_0"));
	__Local__45->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Low"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("927D519449F904451577E6A5AF2364E5") /* Key */
	);
	__Local__45->Font.TypefaceFontName = FName(TEXT("Bold Italic"));
	auto& __Local__46 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__45), UTextLayoutWidget::__PPO__Justification() )));
	__Local__46 = ETextJustify::Type::Center;
	__Local__45->Slot = __Local__44;
	__Local__44->Content = __Local__45;
	__Local__43.Add(__Local__44);
	__Local__42->Slot = __Local__41;
	__Local__41->Content = __Local__42;
	__Local__40.Add(__Local__41);
	auto __Local__47 = NewObject<UHorizontalBoxSlot>(__Local__39, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_7"));
	__Local__47->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__47->Parent = __Local__39;
	auto __Local__48 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Medium"));
	__Local__48->BackgroundColor = FLinearColor(0.416667, 0.346937, 0.069444, 0.000000);
	auto& __Local__49 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__48), UPanelWidget::__PPO__Slots() )));
	__Local__49 = TArray<UPanelSlot*> ();
	__Local__49.Reserve(1);
	auto __Local__50 = NewObject<UButtonSlot>(__Local__48, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__50->Parent = __Local__48;
	auto __Local__51 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_1"));
	__Local__51->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Medium"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("CC72E8F04D0E0BB0B7C5EBB0AB4E4518") /* Key */
	);
	__Local__51->Font.TypefaceFontName = FName(TEXT("Bold Italic"));
	__Local__51->Slot = __Local__50;
	__Local__50->Content = __Local__51;
	__Local__49.Add(__Local__50);
	__Local__48->Slot = __Local__47;
	__Local__47->Content = __Local__48;
	__Local__40.Add(__Local__47);
	__Local__39->Slot = __Local__38;
	__Local__38->Content = __Local__39;
	__Local__37.Add(__Local__38);
	auto __Local__52 = NewObject<UVerticalBoxSlot>(__Local__36, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_1"));
	__Local__52->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__52->Parent = __Local__36;
	auto __Local__53 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_1"));
	auto& __Local__54 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__53), UPanelWidget::__PPO__Slots() )));
	__Local__54 = TArray<UPanelSlot*> ();
	__Local__54.Reserve(2);
	auto __Local__55 = NewObject<UHorizontalBoxSlot>(__Local__53, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_8"));
	__Local__55->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__55->Parent = __Local__53;
	auto __Local__56 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("High"));
	__Local__56->BackgroundColor = FLinearColor(0.416667, 0.346937, 0.069444, 0.000000);
	auto& __Local__57 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__56), UPanelWidget::__PPO__Slots() )));
	__Local__57 = TArray<UPanelSlot*> ();
	__Local__57.Reserve(1);
	auto __Local__58 = NewObject<UButtonSlot>(__Local__56, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__58->Parent = __Local__56;
	auto __Local__59 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_2"));
	__Local__59->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("High"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("BBFBE2BD41FD3EB80D6634A6CC1A7D9D") /* Key */
	);
	__Local__59->Font.TypefaceFontName = FName(TEXT("Bold Italic"));
	__Local__59->Slot = __Local__58;
	__Local__58->Content = __Local__59;
	__Local__57.Add(__Local__58);
	__Local__56->Slot = __Local__55;
	__Local__55->Content = __Local__56;
	__Local__54.Add(__Local__55);
	auto __Local__60 = NewObject<UHorizontalBoxSlot>(__Local__53, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_9"));
	__Local__60->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__60->Parent = __Local__53;
	auto __Local__61 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Best"));
	__Local__61->BackgroundColor = FLinearColor(0.416667, 0.346937, 0.069444, 0.000000);
	auto& __Local__62 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__61), UPanelWidget::__PPO__Slots() )));
	__Local__62 = TArray<UPanelSlot*> ();
	__Local__62.Reserve(1);
	auto __Local__63 = NewObject<UButtonSlot>(__Local__61, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__63->Parent = __Local__61;
	auto __Local__64 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_3"));
	__Local__64->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Best"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("D479E5BB4271012B492829833EA810E1") /* Key */
	);
	__Local__64->Font.TypefaceFontName = FName(TEXT("Bold Italic"));
	__Local__64->Slot = __Local__63;
	__Local__63->Content = __Local__64;
	__Local__62.Add(__Local__63);
	__Local__61->Slot = __Local__60;
	__Local__60->Content = __Local__61;
	__Local__54.Add(__Local__60);
	__Local__53->Slot = __Local__52;
	__Local__52->Content = __Local__53;
	__Local__37.Add(__Local__52);
	__Local__36->Slot = __Local__35;
	__Local__35->Content = __Local__36;
	__Local__18.Add(__Local__35);
	auto __Local__65 = NewObject<UCanvasPanelSlot>(__Local__17, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_4"));
	__Local__65->LayoutData.Offsets.Left = -196.960938f;
	__Local__65->LayoutData.Offsets.Top = 176.000000f;
	__Local__65->LayoutData.Offsets.Right = 151.000000f;
	__Local__65->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__65->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.000000);
	__Local__65->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.000000);
	__Local__65->Parent = __Local__17;
	auto __Local__66 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_198"));
	__Local__66->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Graphics Quality"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("98891BB240108B3BA6661D977E0C1201") /* Key */
	);
	__Local__66->Font.Size = 32;
	__Local__66->Slot = __Local__65;
	__Local__65->Content = __Local__66;
	__Local__18.Add(__Local__65);
	auto __Local__67 = NewObject<UCanvasPanelSlot>(__Local__17, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_6"));
	__Local__67->LayoutData.Offsets.Left = 384.003998f;
	__Local__67->LayoutData.Offsets.Top = 770.022034f;
	__Local__67->LayoutData.Offsets.Right = 468.948853f;
	__Local__67->LayoutData.Offsets.Bottom = 92.880859f;
	__Local__67->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__67->Parent = __Local__17;
	auto __Local__68 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_157"));
	__Local__68->ColorAndOpacity = FLinearColor(0.000000, 0.000000, 0.000000, 0.500000);
	__Local__68->Slot = __Local__67;
	__Local__67->Content = __Local__68;
	__Local__18.Add(__Local__67);
	auto __Local__69 = NewObject<UCanvasPanelSlot>(__Local__17, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_7"));
	__Local__69->LayoutData.Offsets.Left = 832.000000f;
	__Local__69->LayoutData.Offsets.Top = 147.459473f;
	__Local__69->LayoutData.Offsets.Right = 938.921875f;
	__Local__69->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__69->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__69->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.500000);
	__Local__69->Parent = __Local__17;
	auto __Local__70 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_366"));
	__Local__70->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Screen"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("239C36804B326B2947A7978D68B3F00E") /* Key */
	);
	__Local__70->Font.Size = 32;
	auto& __Local__71 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__70), UTextLayoutWidget::__PPO__Justification() )));
	__Local__71 = ETextJustify::Type::Center;
	__Local__70->Slot = __Local__69;
	__Local__69->Content = __Local__70;
	__Local__18.Add(__Local__69);
	auto __Local__72 = NewObject<UCanvasPanelSlot>(__Local__17, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_8"));
	__Local__72->LayoutData.Offsets.Left = 416.000000f;
	__Local__72->LayoutData.Offsets.Top = 800.000000f;
	__Local__72->LayoutData.Offsets.Right = 501.016968f;
	__Local__72->LayoutData.Offsets.Bottom = 128.968933f;
	__Local__72->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__72->Parent = __Local__17;
	auto __Local__73 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_211"));
	auto& __Local__74 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__73), UPanelWidget::__PPO__Slots() )));
	__Local__74 = TArray<UPanelSlot*> ();
	__Local__74.Reserve(2);
	auto __Local__75 = NewObject<UHorizontalBoxSlot>(__Local__73, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_10"));
	__Local__75->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__75->Parent = __Local__73;
	auto __Local__76 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Fullscreen"));
	__Local__76->BackgroundColor = FLinearColor(0.416667, 0.346937, 0.069444, 0.000000);
	auto& __Local__77 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__76), UPanelWidget::__PPO__Slots() )));
	__Local__77 = TArray<UPanelSlot*> ();
	__Local__77.Reserve(1);
	auto __Local__78 = NewObject<UButtonSlot>(__Local__76, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__78->Parent = __Local__76;
	auto __Local__79 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_367"));
	__Local__79->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Fullscreen"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("AF245D24473532FEFCDA5E9F4280AEED") /* Key */
	);
	__Local__79->Font.TypefaceFontName = FName(TEXT("Bold Italic"));
	auto& __Local__80 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__79), UTextLayoutWidget::__PPO__Justification() )));
	__Local__80 = ETextJustify::Type::Center;
	__Local__79->Slot = __Local__78;
	__Local__78->Content = __Local__79;
	__Local__77.Add(__Local__78);
	__Local__76->Slot = __Local__75;
	__Local__75->Content = __Local__76;
	__Local__74.Add(__Local__75);
	auto __Local__81 = NewObject<UHorizontalBoxSlot>(__Local__73, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_11"));
	__Local__81->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__81->Parent = __Local__73;
	auto __Local__82 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Windowed"));
	__Local__82->BackgroundColor = FLinearColor(0.416667, 0.346937, 0.069444, 0.000000);
	auto& __Local__83 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__82), UPanelWidget::__PPO__Slots() )));
	__Local__83 = TArray<UPanelSlot*> ();
	__Local__83.Reserve(1);
	auto __Local__84 = NewObject<UButtonSlot>(__Local__82, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__84->Parent = __Local__82;
	auto __Local__85 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_368"));
	__Local__85->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Windowed"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("0113740B4D25FECE35CFFC8279A02025") /* Key */
	);
	__Local__85->Font.TypefaceFontName = FName(TEXT("Bold Italic"));
	auto& __Local__86 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__85), UTextLayoutWidget::__PPO__Justification() )));
	__Local__86 = ETextJustify::Type::Center;
	__Local__85->Slot = __Local__84;
	__Local__84->Content = __Local__85;
	__Local__83.Add(__Local__84);
	__Local__82->Slot = __Local__81;
	__Local__81->Content = __Local__82;
	__Local__74.Add(__Local__81);
	__Local__73->Slot = __Local__72;
	__Local__72->Content = __Local__73;
	__Local__18.Add(__Local__72);
	auto __Local__87 = NewObject<UCanvasPanelSlot>(__Local__17, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_3"));
	__Local__87->LayoutData.Offsets.Top = 996.000000f;
	__Local__87->LayoutData.Offsets.Right = 1553.024048f;
	__Local__87->LayoutData.Offsets.Bottom = 0.305786f;
	__Local__87->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__87->Parent = __Local__17;
	auto __Local__88 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_101"));
	auto& __Local__89 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__88), UPanelWidget::__PPO__Slots() )));
	__Local__89 = TArray<UPanelSlot*> ();
	__Local__89.Reserve(3);
	auto __Local__90 = NewObject<UHorizontalBoxSlot>(__Local__88, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__90->Parent = __Local__88;
	auto __Local__91 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_0"));
	__Local__91->Size = FVector2D(50.000000, 1.000000);
	__Local__91->Slot = __Local__90;
	__Local__90->Content = __Local__91;
	__Local__89.Add(__Local__90);
	auto __Local__92 = NewObject<UHorizontalBoxSlot>(__Local__88, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__92->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__92->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__92->Parent = __Local__88;
	auto __Local__93 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_4"));
	__Local__93->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Saving..."), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("95C27F296C4C19C5F3777A928DAC3965") /* Key */
	);
	__Local__93->Slot = __Local__92;
	__Local__92->Content = __Local__93;
	__Local__89.Add(__Local__92);
	auto __Local__94 = NewObject<UHorizontalBoxSlot>(__Local__88, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__94->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__94->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__94->Parent = __Local__88;
	auto __Local__95 = NewObject<UCircularThrobber>(__Local__1, UCircularThrobber::StaticClass(), TEXT("CircularThrobber_0"));
	__Local__95->Slot = __Local__94;
	__Local__94->Content = __Local__95;
	__Local__89.Add(__Local__94);
	__Local__88->Slot = __Local__87;
	__Local__88->RenderOpacity = 0.000000f;
	__Local__87->Content = __Local__88;
	__Local__18.Add(__Local__87);
	__Local__1->RootWidget = __Local__17;
	auto __Local__96 = NewObject<UMovieScene>(__Local__2, UMovieScene::StaticClass(), TEXT("Enter"));
	auto& __Local__97 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__96), UMovieScene::__PPO__Possessables() )));
	__Local__97 = TArray<FMovieScenePossessable> ();
	__Local__97.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__97.GetData(), 1);
	auto& __Local__98 = __Local__97[0];
	auto& __Local__99 = (*(AccessPrivateProperty<FGuid >(&(__Local__98), FMovieScenePossessable::__PPO__Guid() )));
	__Local__99 = FGuid(0x731FE5FD, 0x4AABFD5C, 0x14D063AB, 0xEF4CA1CB);
	auto& __Local__100 = (*(AccessPrivateProperty<FString >(&(__Local__98), FMovieScenePossessable::__PPO__Name() )));
	__Local__100 = FString(TEXT("CanvasPanel_0"));
	auto& __Local__101 = (*(AccessPrivateProperty<UClass* >(&(__Local__98), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__101 = UCanvasPanel::StaticClass();
	auto& __Local__102 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__96), UMovieScene::__PPO__ObjectBindings() )));
	__Local__102 = TArray<FMovieSceneBinding> ();
	__Local__102.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__102.GetData(), 1);
	auto& __Local__103 = __Local__102[0];
	auto& __Local__104 = (*(AccessPrivateProperty<FGuid >(&(__Local__103), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__104 = FGuid(0x731FE5FD, 0x4AABFD5C, 0x14D063AB, 0xEF4CA1CB);
	auto& __Local__105 = (*(AccessPrivateProperty<FString >(&(__Local__103), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__105 = FString(TEXT("CanvasPanel_0"));
	auto& __Local__106 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__103), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__106 = TArray<UMovieSceneTrack*> ();
	__Local__106.Reserve(1);
	auto __Local__107 = NewObject<UMovieScene2DTransformTrack>(__Local__96, UMovieScene2DTransformTrack::StaticClass(), TEXT("MovieScene2DTransformTrack_0"));
	auto& __Local__108 = (*(AccessPrivateProperty<FName >((__Local__107), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__108 = FName(TEXT("RenderTransform"));
	auto& __Local__109 = (*(AccessPrivateProperty<FString >((__Local__107), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__109 = FString(TEXT("RenderTransform"));
	auto& __Local__110 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__107), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__110 = TArray<UMovieSceneSection*> ();
	__Local__110.Reserve(1);
	auto __Local__111 = NewObject<UMovieScene2DTransformSection>(__Local__107, UMovieScene2DTransformSection::StaticClass(), TEXT("MovieScene2DTransformSection_0"));
	auto& __Local__112 = (*(AccessPrivateProperty<FRichCurve >((__Local__111), UMovieScene2DTransformSection::__PPO__Translation() )));
	__Local__112.Keys = TArray<FRichCurveKey> ();
	__Local__112.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__112.Keys.GetData(), 1);
	auto& __Local__113 = __Local__112.Keys[0];
	__Local__113.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__113.Time = -0.050000f;
	auto& __Local__114 = (*(AccessPrivateProperty<FRichCurve >((__Local__111), UMovieScene2DTransformSection::__PPO__Translation() , sizeof(FRichCurve ), 1)));
	__Local__114.Keys = TArray<FRichCurveKey> ();
	__Local__114.Keys.AddUninitialized(3);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__114.Keys.GetData(), 3);
	auto& __Local__115 = __Local__114.Keys[0];
	__Local__115.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__115.Time = -0.050000f;
	__Local__115.Value = -1200.000000f;
	auto& __Local__116 = __Local__114.Keys[1];
	__Local__116.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__116.Value = -1200.000000f;
	__Local__116.ArriveTangent = 1142.857178f;
	__Local__116.LeaveTangent = 1142.857178f;
	auto& __Local__117 = __Local__114.Keys[2];
	__Local__117.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__117.Time = 1.000000f;
	auto& __Local__118 = (*(AccessPrivateProperty<FRichCurve >((__Local__111), UMovieScene2DTransformSection::__PPO__Rotation() )));
	__Local__118.Keys = TArray<FRichCurveKey> ();
	__Local__118.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__118.Keys.GetData(), 1);
	auto& __Local__119 = __Local__118.Keys[0];
	__Local__119.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__119.Time = -0.050000f;
	auto& __Local__120 = (*(AccessPrivateProperty<FRichCurve >((__Local__111), UMovieScene2DTransformSection::__PPO__Scale() )));
	__Local__120.Keys = TArray<FRichCurveKey> ();
	__Local__120.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__120.Keys.GetData(), 1);
	auto& __Local__121 = __Local__120.Keys[0];
	__Local__121.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__121.Time = -0.050000f;
	__Local__121.Value = 1.000000f;
	auto& __Local__122 = (*(AccessPrivateProperty<FRichCurve >((__Local__111), UMovieScene2DTransformSection::__PPO__Scale() , sizeof(FRichCurve ), 1)));
	__Local__122.Keys = TArray<FRichCurveKey> ();
	__Local__122.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__122.Keys.GetData(), 1);
	auto& __Local__123 = __Local__122.Keys[0];
	__Local__123.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__123.Time = -0.050000f;
	__Local__123.Value = 1.000000f;
	auto& __Local__124 = (*(AccessPrivateProperty<FRichCurve >((__Local__111), UMovieScene2DTransformSection::__PPO__Shear() )));
	__Local__124.Keys = TArray<FRichCurveKey> ();
	__Local__124.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__124.Keys.GetData(), 1);
	auto& __Local__125 = __Local__124.Keys[0];
	__Local__125.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__125.Time = -0.050000f;
	auto& __Local__126 = (*(AccessPrivateProperty<FRichCurve >((__Local__111), UMovieScene2DTransformSection::__PPO__Shear() , sizeof(FRichCurve ), 1)));
	__Local__126.Keys = TArray<FRichCurveKey> ();
	__Local__126.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__126.Keys.GetData(), 1);
	auto& __Local__127 = __Local__126.Keys[0];
	__Local__127.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__127.Time = -0.050000f;
	__Local__111->EvalOptions.CompletionMode = EMovieSceneCompletionMode::RestoreState;
	auto __Local__128 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__111, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__128->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__111->Easing.EaseIn = __Local__128;
	auto __Local__129 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__111, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__129->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__111->Easing.EaseOut = __Local__129;
	auto& __Local__130 = (*(AccessPrivateProperty<float >((__Local__111), UMovieSceneSection::__PPO__StartTime() )));
	__Local__130 = -0.050000f;
	auto& __Local__131 = (*(AccessPrivateProperty<float >((__Local__111), UMovieSceneSection::__PPO__EndTime() )));
	__Local__131 = 1.000000f;
	auto& __Local__132 = (*(AccessPrivateProperty<FGuid >((__Local__111), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__132 = FGuid(0xFD563716, 0x4A6C552D, 0x99792180, 0x5CE4620B);
	__Local__110.Add(__Local__111);
	auto& __Local__133 = (*(AccessPrivateProperty<FGuid >((__Local__107), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__133 = FGuid(0x596B8B27, 0x436BE15E, 0x6F3B33AB, 0x9EF2A3DD);
	__Local__106.Add(__Local__107);
	auto& __Local__134 = (*(AccessPrivateProperty<FFloatRange >((__Local__96), UMovieScene::__PPO__PlaybackRange() )));
	__Local__134 = FFloatRange(FFloatRangeBound::Inclusive(-0.050000), FFloatRangeBound::Inclusive(1.000000));
	auto& __Local__135 = (*(AccessPrivateProperty<float >((__Local__96), UMovieScene::__PPO__FixedFrameInterval() )));
	__Local__135 = 0.050000f;
	auto& __Local__136 = (*(AccessPrivateProperty<FGuid >((__Local__96), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__136 = FGuid(0x363B2DA0, 0x434BBAF4, 0x2478DB94, 0xB33ECDAB);
	__Local__2->MovieScene = __Local__96;
	__Local__2->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__2->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__2->AnimationBindings.GetData(), 1);
	auto& __Local__137 = __Local__2->AnimationBindings[0];
	__Local__137.WidgetName = FName(TEXT("CanvasPanel_0"));
	__Local__137.AnimationGuid = FGuid(0x731FE5FD, 0x4AABFD5C, 0x14D063AB, 0xEF4CA1CB);
	auto& __Local__138 = (*(AccessPrivateProperty<TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack> >(&(__Local__2->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__Tracks() )));
	__Local__138 = {};
	__Local__138.Reserve(1);
	static TWeakObjectPtr<UProperty> __Local__141{};
	const UProperty* __Local__140 = __Local__141.Get();
	if (nullptr == __Local__140)
	{
		__Local__140 = (FMovieSceneEvaluationTemplate::StaticStruct())->FindPropertyByName(FName(TEXT("Tracks")));
		check(__Local__140);
		__Local__141 = __Local__140;
	}
	FScriptMapHelper __Local__139(CastChecked<UMapProperty>(__Local__140), &__Local__138);
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__142 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__139.GetPairPtr(__Local__139.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__143 = (*(AccessPrivateProperty<uint32 >(&(__Local__142.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__143 = 0;
	auto& __Local__144 = (*(AccessPrivateProperty<FGuid >(&(__Local__142.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__144 = FGuid(0x731FE5FD, 0x4AABFD5C, 0x14D063AB, 0xEF4CA1CB);
	auto& __Local__145 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__142.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__146 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__145), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__146 = TArray<int32> ();
	__Local__146.Reserve(1);
	__Local__146.Add(0);
	auto& __Local__147 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__145), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__147 = TArray<FMovieSceneSegment> ();
	__Local__147.Reserve(1);
	__Local__147.Add(FMovieSceneSegment(FFloatRange(FFloatRangeBound::Inclusive(-0.050000), FFloatRangeBound::Inclusive(1.000000)), {FSectionEvaluationData(0, -340282346638528859811704183484516925440.000000)}));
	auto& __Local__148 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__142.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__148 = __Local__107;
	auto& __Local__149 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__142.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__149 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__149.Reserve(1);
	__Local__149.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieScene2DTransformSectionTemplate::StaticStruct()));
	auto& __Local__150 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__149[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Translation() )));
	__Local__150.Keys = TArray<FRichCurveKey> ();
	__Local__150.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__150.Keys.GetData(), 1);
	auto& __Local__151 = __Local__150.Keys[0];
	__Local__151.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__151.Time = -0.050000f;
	auto& __Local__152 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__149[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Translation() , sizeof(FRichCurve ), 1)));
	__Local__152.Keys = TArray<FRichCurveKey> ();
	__Local__152.Keys.AddUninitialized(3);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__152.Keys.GetData(), 3);
	auto& __Local__153 = __Local__152.Keys[0];
	__Local__153.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__153.Time = -0.050000f;
	__Local__153.Value = -1200.000000f;
	auto& __Local__154 = __Local__152.Keys[1];
	__Local__154.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__154.Value = -1200.000000f;
	__Local__154.ArriveTangent = 1142.857178f;
	__Local__154.LeaveTangent = 1142.857178f;
	auto& __Local__155 = __Local__152.Keys[2];
	__Local__155.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__155.Time = 1.000000f;
	auto& __Local__156 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__149[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Rotation() )));
	__Local__156.Keys = TArray<FRichCurveKey> ();
	__Local__156.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__156.Keys.GetData(), 1);
	auto& __Local__157 = __Local__156.Keys[0];
	__Local__157.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__157.Time = -0.050000f;
	auto& __Local__158 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__149[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Scale() )));
	__Local__158.Keys = TArray<FRichCurveKey> ();
	__Local__158.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__158.Keys.GetData(), 1);
	auto& __Local__159 = __Local__158.Keys[0];
	__Local__159.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__159.Time = -0.050000f;
	__Local__159.Value = 1.000000f;
	auto& __Local__160 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__149[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Scale() , sizeof(FRichCurve ), 1)));
	__Local__160.Keys = TArray<FRichCurveKey> ();
	__Local__160.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__160.Keys.GetData(), 1);
	auto& __Local__161 = __Local__160.Keys[0];
	__Local__161.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__161.Time = -0.050000f;
	__Local__161.Value = 1.000000f;
	auto& __Local__162 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__149[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Shear() )));
	__Local__162.Keys = TArray<FRichCurveKey> ();
	__Local__162.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__162.Keys.GetData(), 1);
	auto& __Local__163 = __Local__162.Keys[0];
	__Local__163.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__163.Time = -0.050000f;
	auto& __Local__164 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__149[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Shear() , sizeof(FRichCurve ), 1)));
	__Local__164.Keys = TArray<FRichCurveKey> ();
	__Local__164.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__164.Keys.GetData(), 1);
	auto& __Local__165 = __Local__164.Keys[0];
	__Local__165.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__165.Time = -0.050000f;
	auto& __Local__166 = (*(AccessPrivateProperty<EMovieSceneBlendType >((((FMovieScene2DTransformSectionTemplate*)__Local__149[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__BlendType() )));
	__Local__166 = EMovieSceneBlendType::Absolute;
	auto& __Local__167 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieScene2DTransformSectionTemplate*)__Local__149[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__167.PropertyName = FName(TEXT("RenderTransform"));
	__Local__167.PropertyPath = FString(TEXT("RenderTransform"));
	auto& __Local__168 = (*(AccessPrivateProperty<EMovieSceneCompletionMode >((((FMovieScene2DTransformSectionTemplate*)__Local__149[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__CompletionMode() )));
	__Local__168 = EMovieSceneCompletionMode::RestoreState;
	auto& __Local__169 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieScene2DTransformSectionTemplate*)__Local__149[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__169 = __Local__111;
	static TWeakObjectPtr<UProperty> __Local__171{};
	const UProperty* __Local__170 = __Local__171.Get();
	if (nullptr == __Local__170)
	{
		__Local__170 = (FMovieSceneEvaluationTrack::StaticStruct())->FindPropertyByName(FName(TEXT("bEvaluateInPreroll")));
		check(__Local__170);
		__Local__171 = __Local__170;
	}
	(((UBoolProperty*)__Local__170)->SetPropertyValue_InContainer(&(__Local__142.Value), false, 0));
	static TWeakObjectPtr<UProperty> __Local__173{};
	const UProperty* __Local__172 = __Local__173.Get();
	if (nullptr == __Local__172)
	{
		__Local__172 = (FMovieSceneEvaluationTrack::StaticStruct())->FindPropertyByName(FName(TEXT("bEvaluateInPostroll")));
		check(__Local__172);
		__Local__173 = __Local__172;
	}
	(((UBoolProperty*)__Local__172)->SetPropertyValue_InContainer(&(__Local__142.Value), false, 0));
	__Local__139.Rehash();
	auto& __Local__174 = (*(AccessPrivateProperty<FGuid >(&(__Local__2->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Signature() )));
	__Local__174 = FGuid(0x73CE4D87, 0x46102038, 0xCF518D95, 0x193AF111);
	auto& __Local__175 = (*(AccessPrivateProperty<TArray<FFloatRange> >(&(__Local__2->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Ranges() )));
	__Local__175 = TArray<FFloatRange> ();
	__Local__175.Reserve(3);
	__Local__175.Add(FFloatRange(FFloatRangeBound::Open(), FFloatRangeBound::Exclusive(-0.050000)));
	__Local__175.Add(FFloatRange(FFloatRangeBound::Inclusive(-0.050000), FFloatRangeBound::Inclusive(1.000000)));
	__Local__175.Add(FFloatRange(FFloatRangeBound::Exclusive(1.000000), FFloatRangeBound::Open()));
	auto& __Local__176 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationGroup> >(&(__Local__2->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Groups() )));
	__Local__176 = TArray<FMovieSceneEvaluationGroup> ();
	__Local__176.AddUninitialized(3);
	FMovieSceneEvaluationGroup::StaticStruct()->InitializeStruct(__Local__176.GetData(), 3);
	auto& __Local__177 = __Local__176[0];
	auto& __Local__178 = __Local__176[1];
	__Local__178.LUTIndices = TArray<FMovieSceneEvaluationGroupLUTIndex> ();
	__Local__178.LUTIndices.AddUninitialized(1);
	FMovieSceneEvaluationGroupLUTIndex::StaticStruct()->InitializeStruct(__Local__178.LUTIndices.GetData(), 1);
	auto& __Local__179 = __Local__178.LUTIndices[0];
	__Local__179.NumEvalPtrs = 1;
	__Local__178.SegmentPtrLUT = TArray<FMovieSceneEvaluationFieldSegmentPtr> ();
	__Local__178.SegmentPtrLUT.AddUninitialized(1);
	FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()->InitializeStruct(__Local__178.SegmentPtrLUT.GetData(), 1);
	auto& __Local__180 = __Local__178.SegmentPtrLUT[0];
	auto& __Local__181 = (*(AccessPrivateProperty<int32 >(&(__Local__180.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__181 = 0;
	auto& __Local__182 = (*(AccessPrivateProperty<uint32 >(&(__Local__180.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__182 = 0;
	auto& __Local__183 = (*(AccessPrivateProperty<uint32 >(&(__Local__180.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__183 = 0;
	auto& __Local__184 = __Local__176[2];
	auto& __Local__185 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationMetaData> >(&(__Local__2->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__MetaData() )));
	__Local__185 = TArray<FMovieSceneEvaluationMetaData> ();
	__Local__185.AddUninitialized(3);
	FMovieSceneEvaluationMetaData::StaticStruct()->InitializeStruct(__Local__185.GetData(), 3);
	auto& __Local__186 = __Local__185[0];
	__Local__186.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__186.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__186.ActiveSequences.GetData(), 1);
	auto& __Local__187 = __Local__186.ActiveSequences[0];
	auto& __Local__188 = (*(AccessPrivateProperty<uint32 >(&(__Local__187), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__188 = 0;
	auto& __Local__189 = __Local__185[1];
	__Local__189.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__189.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__189.ActiveSequences.GetData(), 1);
	auto& __Local__190 = __Local__189.ActiveSequences[0];
	auto& __Local__191 = (*(AccessPrivateProperty<uint32 >(&(__Local__190), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__191 = 0;
	__Local__189.ActiveEntities = TArray<FMovieSceneOrderedEvaluationKey> ();
	__Local__189.ActiveEntities.AddUninitialized(2);
	FMovieSceneOrderedEvaluationKey::StaticStruct()->InitializeStruct(__Local__189.ActiveEntities.GetData(), 2);
	auto& __Local__192 = __Local__189.ActiveEntities[0];
	auto& __Local__193 = (*(AccessPrivateProperty<uint32 >(&(__Local__192.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__193 = 0;
	auto& __Local__194 = (*(AccessPrivateProperty<uint32 >(&(__Local__192.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__194 = 0;
	__Local__192.Key.SectionIndex = 0;
	__Local__192.EvaluationIndex = 1;
	auto& __Local__195 = __Local__189.ActiveEntities[1];
	auto& __Local__196 = (*(AccessPrivateProperty<uint32 >(&(__Local__195.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__196 = 0;
	auto& __Local__197 = (*(AccessPrivateProperty<uint32 >(&(__Local__195.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__197 = 0;
	auto& __Local__198 = __Local__185[2];
	__Local__198.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__198.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__198.ActiveSequences.GetData(), 1);
	auto& __Local__199 = __Local__198.ActiveSequences[0];
	auto& __Local__200 = (*(AccessPrivateProperty<uint32 >(&(__Local__199), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__200 = 0;
	__Local__2->PrecompiledEvaluationTemplate.SequenceSignature = FGuid(0x7B1C88F9, 0x428C3B0A, 0x04CCEC86, 0x66359CDF);
	auto& __Local__201 = (*(AccessPrivateProperty<FMovieSceneTemplateGenerationLedger >(&(__Local__2->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__TemplateLedger() )));
	auto& __Local__202 = (*(AccessPrivateProperty<uint32 >(&(__Local__201.LastTrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__202 = 0;
	__Local__201.TrackSignatureToTrackIdentifier = {};
	__Local__201.TrackSignatureToTrackIdentifier.Reserve(1);
	static TWeakObjectPtr<UProperty> __Local__205{};
	const UProperty* __Local__204 = __Local__205.Get();
	if (nullptr == __Local__204)
	{
		__Local__204 = (FMovieSceneTemplateGenerationLedger::StaticStruct())->FindPropertyByName(FName(TEXT("TrackSignatureToTrackIdentifier")));
		check(__Local__204);
		__Local__205 = __Local__204;
	}
	FScriptMapHelper __Local__203(CastChecked<UMapProperty>(__Local__204), &__Local__201.TrackSignatureToTrackIdentifier);
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__206 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__203.GetPairPtr(__Local__203.AddDefaultValue_Invalid_NeedsRehash());
	__Local__206.Key.A = 1500220199;
	__Local__206.Key.B = 1131143518;
	__Local__206.Key.C = 1866150827;
	__Local__206.Key.D = -1628265507;
	auto& __Local__207 = (*(AccessPrivateProperty<uint32 >(&(__Local__206.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__207 = 0;
	__Local__203.Rehash();
	__Local__2->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__208 = (*(AccessPrivateProperty<FGuid >((__Local__2), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__208 = FGuid(0x7B1C88F9, 0x428C3B0A, 0x04CCEC86, 0x66359CDF);
	auto __Local__209 = NewObject<UMovieScene>(__Local__3, UMovieScene::StaticClass(), TEXT("Quality1"));
	auto& __Local__210 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__209), UMovieScene::__PPO__Possessables() )));
	__Local__210 = TArray<FMovieScenePossessable> ();
	__Local__210.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__210.GetData(), 1);
	auto& __Local__211 = __Local__210[0];
	auto& __Local__212 = (*(AccessPrivateProperty<FGuid >(&(__Local__211), FMovieScenePossessable::__PPO__Guid() )));
	__Local__212 = FGuid(0x0B35EFA7, 0x4F2C3D0E, 0x8C8B30B1, 0x5E724885);
	auto& __Local__213 = (*(AccessPrivateProperty<FString >(&(__Local__211), FMovieScenePossessable::__PPO__Name() )));
	__Local__213 = FString(TEXT("Low"));
	auto& __Local__214 = (*(AccessPrivateProperty<UClass* >(&(__Local__211), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__214 = UButton::StaticClass();
	auto& __Local__215 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__209), UMovieScene::__PPO__ObjectBindings() )));
	__Local__215 = TArray<FMovieSceneBinding> ();
	__Local__215.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__215.GetData(), 1);
	auto& __Local__216 = __Local__215[0];
	auto& __Local__217 = (*(AccessPrivateProperty<FGuid >(&(__Local__216), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__217 = FGuid(0x0B35EFA7, 0x4F2C3D0E, 0x8C8B30B1, 0x5E724885);
	auto& __Local__218 = (*(AccessPrivateProperty<FString >(&(__Local__216), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__218 = FString(TEXT("Low"));
	auto& __Local__219 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__216), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__219 = TArray<UMovieSceneTrack*> ();
	__Local__219.Reserve(1);
	auto __Local__220 = NewObject<UMovieSceneColorTrack>(__Local__209, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_0"));
	auto& __Local__221 = (*(AccessPrivateProperty<FName >((__Local__220), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__221 = FName(TEXT("BackgroundColor"));
	auto& __Local__222 = (*(AccessPrivateProperty<FString >((__Local__220), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__222 = FString(TEXT("BackgroundColor"));
	auto& __Local__223 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__220), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__223 = TArray<UMovieSceneSection*> ();
	__Local__223.Reserve(1);
	auto __Local__224 = NewObject<UMovieSceneColorSection>(__Local__220, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_0"));
	auto& __Local__225 = (*(AccessPrivateProperty<FRichCurve >((__Local__224), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__225.Keys = TArray<FRichCurveKey> ();
	__Local__225.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__225.Keys.GetData(), 1);
	auto& __Local__226 = __Local__225.Keys[0];
	__Local__226.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__226.Value = 0.416667f;
	auto& __Local__227 = (*(AccessPrivateProperty<FRichCurve >((__Local__224), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__227.Keys = TArray<FRichCurveKey> ();
	__Local__227.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__227.Keys.GetData(), 1);
	auto& __Local__228 = __Local__227.Keys[0];
	__Local__228.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__228.Value = 0.346937f;
	auto& __Local__229 = (*(AccessPrivateProperty<FRichCurve >((__Local__224), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__229.Keys = TArray<FRichCurveKey> ();
	__Local__229.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__229.Keys.GetData(), 1);
	auto& __Local__230 = __Local__229.Keys[0];
	__Local__230.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__230.Value = 0.069444f;
	auto& __Local__231 = (*(AccessPrivateProperty<FRichCurve >((__Local__224), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__231.Keys = TArray<FRichCurveKey> ();
	__Local__231.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__231.Keys.GetData(), 2);
	auto& __Local__232 = __Local__231.Keys[0];
	__Local__232.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__233 = __Local__231.Keys[1];
	__Local__233.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__233.Time = 0.300000f;
	__Local__233.Value = 0.500000f;
	auto __Local__234 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__224, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__234->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__224->Easing.EaseIn = __Local__234;
	auto __Local__235 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__224, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__235->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__224->Easing.EaseOut = __Local__235;
	auto& __Local__236 = (*(AccessPrivateProperty<float >((__Local__224), UMovieSceneSection::__PPO__EndTime() )));
	__Local__236 = 0.300000f;
	auto& __Local__237 = (*(AccessPrivateProperty<FGuid >((__Local__224), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__237 = FGuid(0x3F518F48, 0x412DFD36, 0x56FEF6AA, 0xFF36ACAB);
	__Local__223.Add(__Local__224);
	auto& __Local__238 = (*(AccessPrivateProperty<FGuid >((__Local__220), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__238 = FGuid(0xFF539564, 0x44E37763, 0x901F7F8E, 0x80B252E6);
	__Local__219.Add(__Local__220);
	auto& __Local__239 = (*(AccessPrivateProperty<FFloatRange >((__Local__209), UMovieScene::__PPO__PlaybackRange() )));
	__Local__239 = FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000));
	auto& __Local__240 = (*(AccessPrivateProperty<float >((__Local__209), UMovieScene::__PPO__FixedFrameInterval() )));
	__Local__240 = 0.050000f;
	auto& __Local__241 = (*(AccessPrivateProperty<FGuid >((__Local__209), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__241 = FGuid(0xB8BEE5B9, 0x456F6F7E, 0x409788A6, 0xC17BA7A4);
	__Local__3->MovieScene = __Local__209;
	__Local__3->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__3->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__3->AnimationBindings.GetData(), 1);
	auto& __Local__242 = __Local__3->AnimationBindings[0];
	__Local__242.WidgetName = FName(TEXT("Low"));
	__Local__242.AnimationGuid = FGuid(0x0B35EFA7, 0x4F2C3D0E, 0x8C8B30B1, 0x5E724885);
	auto& __Local__243 = (*(AccessPrivateProperty<TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack> >(&(__Local__3->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__Tracks() )));
	__Local__243 = {};
	__Local__243.Reserve(1);
	FScriptMapHelper __Local__244(CastChecked<UMapProperty>(__Local__140), &__Local__243);
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__245 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__244.GetPairPtr(__Local__244.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__246 = (*(AccessPrivateProperty<uint32 >(&(__Local__245.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__246 = 0;
	auto& __Local__247 = (*(AccessPrivateProperty<FGuid >(&(__Local__245.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__247 = FGuid(0x0B35EFA7, 0x4F2C3D0E, 0x8C8B30B1, 0x5E724885);
	auto& __Local__248 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__245.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__249 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__248), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__249 = TArray<int32> ();
	__Local__249.Reserve(1);
	__Local__249.Add(0);
	auto& __Local__250 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__248), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__250 = TArray<FMovieSceneSegment> ();
	__Local__250.Reserve(1);
	__Local__250.Add(FMovieSceneSegment(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000)), {FSectionEvaluationData(0, -340282346638528859811704183484516925440.000000)}));
	auto& __Local__251 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__245.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__251 = __Local__220;
	auto& __Local__252 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__245.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__252 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__252.Reserve(1);
	__Local__252.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneColorSectionTemplate::StaticStruct()));
	((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())->Curves[0].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())->Curves[0].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())->Curves[0].Keys.GetData(), 1);
	auto& __Local__253 = ((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())->Curves[0].Keys[0];
	__Local__253.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__253.Value = 0.416667f;
	((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())->Curves[1].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())->Curves[1].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())->Curves[1].Keys.GetData(), 1);
	auto& __Local__254 = ((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())->Curves[1].Keys[0];
	__Local__254.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__254.Value = 0.346937f;
	((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())->Curves[2].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())->Curves[2].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())->Curves[2].Keys.GetData(), 1);
	auto& __Local__255 = ((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())->Curves[2].Keys[0];
	__Local__255.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__255.Value = 0.069444f;
	((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())->Curves[3].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())->Curves[3].Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())->Curves[3].Keys.GetData(), 2);
	auto& __Local__256 = ((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())->Curves[3].Keys[0];
	__Local__256.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__257 = ((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())->Curves[3].Keys[1];
	__Local__257.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__257.Time = 0.300000f;
	__Local__257.Value = 0.500000f;
	((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())->BlendType = EMovieSceneBlendType::Absolute;
	auto& __Local__258 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__258.PropertyName = FName(TEXT("BackgroundColor"));
	__Local__258.PropertyPath = FString(TEXT("BackgroundColor"));
	auto& __Local__259 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneColorSectionTemplate*)__Local__252[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__259 = __Local__224;
	(((UBoolProperty*)__Local__170)->SetPropertyValue_InContainer(&(__Local__245.Value), false, 0));
	(((UBoolProperty*)__Local__172)->SetPropertyValue_InContainer(&(__Local__245.Value), false, 0));
	__Local__244.Rehash();
	auto& __Local__260 = (*(AccessPrivateProperty<FGuid >(&(__Local__3->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Signature() )));
	__Local__260 = FGuid(0xE4AA59D9, 0x4851BC20, 0x36AFD890, 0xDA007A94);
	auto& __Local__261 = (*(AccessPrivateProperty<TArray<FFloatRange> >(&(__Local__3->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Ranges() )));
	__Local__261 = TArray<FFloatRange> ();
	__Local__261.Reserve(3);
	__Local__261.Add(FFloatRange(FFloatRangeBound::Open(), FFloatRangeBound::Exclusive(0.000000)));
	__Local__261.Add(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000)));
	__Local__261.Add(FFloatRange(FFloatRangeBound::Exclusive(0.300000), FFloatRangeBound::Open()));
	auto& __Local__262 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationGroup> >(&(__Local__3->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Groups() )));
	__Local__262 = TArray<FMovieSceneEvaluationGroup> ();
	__Local__262.AddUninitialized(3);
	FMovieSceneEvaluationGroup::StaticStruct()->InitializeStruct(__Local__262.GetData(), 3);
	auto& __Local__263 = __Local__262[0];
	auto& __Local__264 = __Local__262[1];
	__Local__264.LUTIndices = TArray<FMovieSceneEvaluationGroupLUTIndex> ();
	__Local__264.LUTIndices.AddUninitialized(1);
	FMovieSceneEvaluationGroupLUTIndex::StaticStruct()->InitializeStruct(__Local__264.LUTIndices.GetData(), 1);
	auto& __Local__265 = __Local__264.LUTIndices[0];
	__Local__265.NumEvalPtrs = 1;
	__Local__264.SegmentPtrLUT = TArray<FMovieSceneEvaluationFieldSegmentPtr> ();
	__Local__264.SegmentPtrLUT.AddUninitialized(1);
	FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()->InitializeStruct(__Local__264.SegmentPtrLUT.GetData(), 1);
	auto& __Local__266 = __Local__264.SegmentPtrLUT[0];
	auto& __Local__267 = (*(AccessPrivateProperty<int32 >(&(__Local__266.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__267 = 0;
	auto& __Local__268 = (*(AccessPrivateProperty<uint32 >(&(__Local__266.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__268 = 0;
	auto& __Local__269 = (*(AccessPrivateProperty<uint32 >(&(__Local__266.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__269 = 0;
	auto& __Local__270 = __Local__262[2];
	auto& __Local__271 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationMetaData> >(&(__Local__3->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__MetaData() )));
	__Local__271 = TArray<FMovieSceneEvaluationMetaData> ();
	__Local__271.AddUninitialized(3);
	FMovieSceneEvaluationMetaData::StaticStruct()->InitializeStruct(__Local__271.GetData(), 3);
	auto& __Local__272 = __Local__271[0];
	__Local__272.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__272.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__272.ActiveSequences.GetData(), 1);
	auto& __Local__273 = __Local__272.ActiveSequences[0];
	auto& __Local__274 = (*(AccessPrivateProperty<uint32 >(&(__Local__273), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__274 = 0;
	auto& __Local__275 = __Local__271[1];
	__Local__275.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__275.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__275.ActiveSequences.GetData(), 1);
	auto& __Local__276 = __Local__275.ActiveSequences[0];
	auto& __Local__277 = (*(AccessPrivateProperty<uint32 >(&(__Local__276), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__277 = 0;
	__Local__275.ActiveEntities = TArray<FMovieSceneOrderedEvaluationKey> ();
	__Local__275.ActiveEntities.AddUninitialized(2);
	FMovieSceneOrderedEvaluationKey::StaticStruct()->InitializeStruct(__Local__275.ActiveEntities.GetData(), 2);
	auto& __Local__278 = __Local__275.ActiveEntities[0];
	auto& __Local__279 = (*(AccessPrivateProperty<uint32 >(&(__Local__278.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__279 = 0;
	auto& __Local__280 = (*(AccessPrivateProperty<uint32 >(&(__Local__278.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__280 = 0;
	__Local__278.Key.SectionIndex = 0;
	__Local__278.EvaluationIndex = 1;
	auto& __Local__281 = __Local__275.ActiveEntities[1];
	auto& __Local__282 = (*(AccessPrivateProperty<uint32 >(&(__Local__281.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__282 = 0;
	auto& __Local__283 = (*(AccessPrivateProperty<uint32 >(&(__Local__281.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__283 = 0;
	auto& __Local__284 = __Local__271[2];
	__Local__284.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__284.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__284.ActiveSequences.GetData(), 1);
	auto& __Local__285 = __Local__284.ActiveSequences[0];
	auto& __Local__286 = (*(AccessPrivateProperty<uint32 >(&(__Local__285), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__286 = 0;
	__Local__3->PrecompiledEvaluationTemplate.SequenceSignature = FGuid(0x642FBC07, 0x4FDB11C0, 0xB63D1FAA, 0x1F15457C);
	auto& __Local__287 = (*(AccessPrivateProperty<FMovieSceneTemplateGenerationLedger >(&(__Local__3->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__TemplateLedger() )));
	auto& __Local__288 = (*(AccessPrivateProperty<uint32 >(&(__Local__287.LastTrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__288 = 0;
	__Local__287.TrackSignatureToTrackIdentifier = {};
	__Local__287.TrackSignatureToTrackIdentifier.Reserve(1);
	FScriptMapHelper __Local__289(CastChecked<UMapProperty>(__Local__204), &__Local__287.TrackSignatureToTrackIdentifier);
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__290 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__289.GetPairPtr(__Local__289.AddDefaultValue_Invalid_NeedsRehash());
	__Local__290.Key.A = -11299484;
	__Local__290.Key.B = 1155757923;
	__Local__290.Key.C = -1876983922;
	__Local__290.Key.D = -2135797018;
	auto& __Local__291 = (*(AccessPrivateProperty<uint32 >(&(__Local__290.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__291 = 0;
	__Local__289.Rehash();
	__Local__3->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__292 = (*(AccessPrivateProperty<FGuid >((__Local__3), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__292 = FGuid(0x642FBC07, 0x4FDB11C0, 0xB63D1FAA, 0x1F15457C);
	auto __Local__293 = NewObject<UMovieScene>(__Local__4, UMovieScene::StaticClass(), TEXT("Quality2"));
	auto& __Local__294 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__293), UMovieScene::__PPO__Possessables() )));
	__Local__294 = TArray<FMovieScenePossessable> ();
	__Local__294.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__294.GetData(), 1);
	auto& __Local__295 = __Local__294[0];
	auto& __Local__296 = (*(AccessPrivateProperty<FGuid >(&(__Local__295), FMovieScenePossessable::__PPO__Guid() )));
	__Local__296 = FGuid(0x6D9E0793, 0x442F6BC7, 0x8D51B4AB, 0x4050814E);
	auto& __Local__297 = (*(AccessPrivateProperty<FString >(&(__Local__295), FMovieScenePossessable::__PPO__Name() )));
	__Local__297 = FString(TEXT("Medium"));
	auto& __Local__298 = (*(AccessPrivateProperty<UClass* >(&(__Local__295), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__298 = UButton::StaticClass();
	auto& __Local__299 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__293), UMovieScene::__PPO__ObjectBindings() )));
	__Local__299 = TArray<FMovieSceneBinding> ();
	__Local__299.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__299.GetData(), 1);
	auto& __Local__300 = __Local__299[0];
	auto& __Local__301 = (*(AccessPrivateProperty<FGuid >(&(__Local__300), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__301 = FGuid(0x6D9E0793, 0x442F6BC7, 0x8D51B4AB, 0x4050814E);
	auto& __Local__302 = (*(AccessPrivateProperty<FString >(&(__Local__300), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__302 = FString(TEXT("Medium"));
	auto& __Local__303 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__300), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__303 = TArray<UMovieSceneTrack*> ();
	__Local__303.Reserve(1);
	auto __Local__304 = NewObject<UMovieSceneColorTrack>(__Local__293, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_1"));
	auto& __Local__305 = (*(AccessPrivateProperty<FName >((__Local__304), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__305 = FName(TEXT("BackgroundColor"));
	auto& __Local__306 = (*(AccessPrivateProperty<FString >((__Local__304), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__306 = FString(TEXT("BackgroundColor"));
	auto& __Local__307 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__304), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__307 = TArray<UMovieSceneSection*> ();
	__Local__307.Reserve(1);
	auto __Local__308 = NewObject<UMovieSceneColorSection>(__Local__304, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_1"));
	auto& __Local__309 = (*(AccessPrivateProperty<FRichCurve >((__Local__308), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__309.Keys = TArray<FRichCurveKey> ();
	__Local__309.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__309.Keys.GetData(), 1);
	auto& __Local__310 = __Local__309.Keys[0];
	__Local__310.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__310.Value = 0.416667f;
	auto& __Local__311 = (*(AccessPrivateProperty<FRichCurve >((__Local__308), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__311.Keys = TArray<FRichCurveKey> ();
	__Local__311.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__311.Keys.GetData(), 1);
	auto& __Local__312 = __Local__311.Keys[0];
	__Local__312.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__312.Value = 0.346937f;
	auto& __Local__313 = (*(AccessPrivateProperty<FRichCurve >((__Local__308), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__313.Keys = TArray<FRichCurveKey> ();
	__Local__313.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__313.Keys.GetData(), 1);
	auto& __Local__314 = __Local__313.Keys[0];
	__Local__314.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__314.Value = 0.069444f;
	auto& __Local__315 = (*(AccessPrivateProperty<FRichCurve >((__Local__308), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__315.Keys = TArray<FRichCurveKey> ();
	__Local__315.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__315.Keys.GetData(), 2);
	auto& __Local__316 = __Local__315.Keys[0];
	__Local__316.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__317 = __Local__315.Keys[1];
	__Local__317.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__317.Time = 0.300000f;
	__Local__317.Value = 0.300000f;
	auto __Local__318 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__308, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__318->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__308->Easing.EaseIn = __Local__318;
	auto __Local__319 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__308, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__319->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__308->Easing.EaseOut = __Local__319;
	auto& __Local__320 = (*(AccessPrivateProperty<float >((__Local__308), UMovieSceneSection::__PPO__EndTime() )));
	__Local__320 = 0.300000f;
	auto& __Local__321 = (*(AccessPrivateProperty<FGuid >((__Local__308), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__321 = FGuid(0xEA5E78B8, 0x4AE89805, 0x3C3278AB, 0xFEAB99A2);
	__Local__307.Add(__Local__308);
	auto& __Local__322 = (*(AccessPrivateProperty<FGuid >((__Local__304), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__322 = FGuid(0x538425F9, 0x4EDF5F13, 0x6FEFD695, 0x240F286D);
	__Local__303.Add(__Local__304);
	auto& __Local__323 = (*(AccessPrivateProperty<FFloatRange >((__Local__293), UMovieScene::__PPO__PlaybackRange() )));
	__Local__323 = FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000));
	auto& __Local__324 = (*(AccessPrivateProperty<float >((__Local__293), UMovieScene::__PPO__FixedFrameInterval() )));
	__Local__324 = 0.050000f;
	auto& __Local__325 = (*(AccessPrivateProperty<FGuid >((__Local__293), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__325 = FGuid(0xC2FA59D2, 0x4742F62E, 0x92B1F79A, 0x6FA6B0D8);
	__Local__4->MovieScene = __Local__293;
	__Local__4->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__4->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__4->AnimationBindings.GetData(), 1);
	auto& __Local__326 = __Local__4->AnimationBindings[0];
	__Local__326.WidgetName = FName(TEXT("Medium"));
	__Local__326.AnimationGuid = FGuid(0x6D9E0793, 0x442F6BC7, 0x8D51B4AB, 0x4050814E);
	auto& __Local__327 = (*(AccessPrivateProperty<TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack> >(&(__Local__4->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__Tracks() )));
	__Local__327 = {};
	__Local__327.Reserve(1);
	FScriptMapHelper __Local__328(CastChecked<UMapProperty>(__Local__140), &__Local__327);
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__329 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__328.GetPairPtr(__Local__328.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__330 = (*(AccessPrivateProperty<uint32 >(&(__Local__329.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__330 = 0;
	auto& __Local__331 = (*(AccessPrivateProperty<FGuid >(&(__Local__329.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__331 = FGuid(0x6D9E0793, 0x442F6BC7, 0x8D51B4AB, 0x4050814E);
	auto& __Local__332 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__329.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__333 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__332), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__333 = TArray<int32> ();
	__Local__333.Reserve(1);
	__Local__333.Add(0);
	auto& __Local__334 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__332), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__334 = TArray<FMovieSceneSegment> ();
	__Local__334.Reserve(1);
	__Local__334.Add(FMovieSceneSegment(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000)), {FSectionEvaluationData(0, -340282346638528859811704183484516925440.000000)}));
	auto& __Local__335 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__329.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__335 = __Local__304;
	auto& __Local__336 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__329.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__336 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__336.Reserve(1);
	__Local__336.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneColorSectionTemplate::StaticStruct()));
	((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())->Curves[0].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())->Curves[0].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())->Curves[0].Keys.GetData(), 1);
	auto& __Local__337 = ((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())->Curves[0].Keys[0];
	__Local__337.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__337.Value = 0.416667f;
	((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())->Curves[1].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())->Curves[1].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())->Curves[1].Keys.GetData(), 1);
	auto& __Local__338 = ((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())->Curves[1].Keys[0];
	__Local__338.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__338.Value = 0.346937f;
	((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())->Curves[2].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())->Curves[2].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())->Curves[2].Keys.GetData(), 1);
	auto& __Local__339 = ((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())->Curves[2].Keys[0];
	__Local__339.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__339.Value = 0.069444f;
	((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())->Curves[3].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())->Curves[3].Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())->Curves[3].Keys.GetData(), 2);
	auto& __Local__340 = ((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())->Curves[3].Keys[0];
	__Local__340.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__341 = ((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())->Curves[3].Keys[1];
	__Local__341.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__341.Time = 0.300000f;
	__Local__341.Value = 0.300000f;
	((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())->BlendType = EMovieSceneBlendType::Absolute;
	auto& __Local__342 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__342.PropertyName = FName(TEXT("BackgroundColor"));
	__Local__342.PropertyPath = FString(TEXT("BackgroundColor"));
	auto& __Local__343 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneColorSectionTemplate*)__Local__336[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__343 = __Local__308;
	(((UBoolProperty*)__Local__170)->SetPropertyValue_InContainer(&(__Local__329.Value), false, 0));
	(((UBoolProperty*)__Local__172)->SetPropertyValue_InContainer(&(__Local__329.Value), false, 0));
	__Local__328.Rehash();
	auto& __Local__344 = (*(AccessPrivateProperty<FGuid >(&(__Local__4->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Signature() )));
	__Local__344 = FGuid(0xB23FF0BA, 0x4972E85D, 0x0CC83C8D, 0x9D901ADA);
	auto& __Local__345 = (*(AccessPrivateProperty<TArray<FFloatRange> >(&(__Local__4->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Ranges() )));
	__Local__345 = TArray<FFloatRange> ();
	__Local__345.Reserve(3);
	__Local__345.Add(FFloatRange(FFloatRangeBound::Open(), FFloatRangeBound::Exclusive(0.000000)));
	__Local__345.Add(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000)));
	__Local__345.Add(FFloatRange(FFloatRangeBound::Exclusive(0.300000), FFloatRangeBound::Open()));
	auto& __Local__346 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationGroup> >(&(__Local__4->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Groups() )));
	__Local__346 = TArray<FMovieSceneEvaluationGroup> ();
	__Local__346.AddUninitialized(3);
	FMovieSceneEvaluationGroup::StaticStruct()->InitializeStruct(__Local__346.GetData(), 3);
	auto& __Local__347 = __Local__346[0];
	auto& __Local__348 = __Local__346[1];
	__Local__348.LUTIndices = TArray<FMovieSceneEvaluationGroupLUTIndex> ();
	__Local__348.LUTIndices.AddUninitialized(1);
	FMovieSceneEvaluationGroupLUTIndex::StaticStruct()->InitializeStruct(__Local__348.LUTIndices.GetData(), 1);
	auto& __Local__349 = __Local__348.LUTIndices[0];
	__Local__349.NumEvalPtrs = 1;
	__Local__348.SegmentPtrLUT = TArray<FMovieSceneEvaluationFieldSegmentPtr> ();
	__Local__348.SegmentPtrLUT.AddUninitialized(1);
	FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()->InitializeStruct(__Local__348.SegmentPtrLUT.GetData(), 1);
	auto& __Local__350 = __Local__348.SegmentPtrLUT[0];
	auto& __Local__351 = (*(AccessPrivateProperty<int32 >(&(__Local__350.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__351 = 0;
	auto& __Local__352 = (*(AccessPrivateProperty<uint32 >(&(__Local__350.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__352 = 0;
	auto& __Local__353 = (*(AccessPrivateProperty<uint32 >(&(__Local__350.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__353 = 0;
	auto& __Local__354 = __Local__346[2];
	auto& __Local__355 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationMetaData> >(&(__Local__4->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__MetaData() )));
	__Local__355 = TArray<FMovieSceneEvaluationMetaData> ();
	__Local__355.AddUninitialized(3);
	FMovieSceneEvaluationMetaData::StaticStruct()->InitializeStruct(__Local__355.GetData(), 3);
	auto& __Local__356 = __Local__355[0];
	__Local__356.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__356.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__356.ActiveSequences.GetData(), 1);
	auto& __Local__357 = __Local__356.ActiveSequences[0];
	auto& __Local__358 = (*(AccessPrivateProperty<uint32 >(&(__Local__357), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__358 = 0;
	auto& __Local__359 = __Local__355[1];
	__Local__359.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__359.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__359.ActiveSequences.GetData(), 1);
	auto& __Local__360 = __Local__359.ActiveSequences[0];
	auto& __Local__361 = (*(AccessPrivateProperty<uint32 >(&(__Local__360), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__361 = 0;
	__Local__359.ActiveEntities = TArray<FMovieSceneOrderedEvaluationKey> ();
	__Local__359.ActiveEntities.AddUninitialized(2);
	FMovieSceneOrderedEvaluationKey::StaticStruct()->InitializeStruct(__Local__359.ActiveEntities.GetData(), 2);
	auto& __Local__362 = __Local__359.ActiveEntities[0];
	auto& __Local__363 = (*(AccessPrivateProperty<uint32 >(&(__Local__362.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__363 = 0;
	auto& __Local__364 = (*(AccessPrivateProperty<uint32 >(&(__Local__362.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__364 = 0;
	__Local__362.Key.SectionIndex = 0;
	__Local__362.EvaluationIndex = 1;
	auto& __Local__365 = __Local__359.ActiveEntities[1];
	auto& __Local__366 = (*(AccessPrivateProperty<uint32 >(&(__Local__365.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__366 = 0;
	auto& __Local__367 = (*(AccessPrivateProperty<uint32 >(&(__Local__365.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__367 = 0;
	auto& __Local__368 = __Local__355[2];
	__Local__368.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__368.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__368.ActiveSequences.GetData(), 1);
	auto& __Local__369 = __Local__368.ActiveSequences[0];
	auto& __Local__370 = (*(AccessPrivateProperty<uint32 >(&(__Local__369), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__370 = 0;
	__Local__4->PrecompiledEvaluationTemplate.SequenceSignature = FGuid(0x0ED22BB7, 0x45247AB5, 0x04078F89, 0x78706DE3);
	auto& __Local__371 = (*(AccessPrivateProperty<FMovieSceneTemplateGenerationLedger >(&(__Local__4->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__TemplateLedger() )));
	auto& __Local__372 = (*(AccessPrivateProperty<uint32 >(&(__Local__371.LastTrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__372 = 0;
	__Local__371.TrackSignatureToTrackIdentifier = {};
	__Local__371.TrackSignatureToTrackIdentifier.Reserve(1);
	FScriptMapHelper __Local__373(CastChecked<UMapProperty>(__Local__204), &__Local__371.TrackSignatureToTrackIdentifier);
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__374 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__373.GetPairPtr(__Local__373.AddDefaultValue_Invalid_NeedsRehash());
	__Local__374.Key.A = 1401169401;
	__Local__374.Key.B = 1323261715;
	__Local__374.Key.C = 1877989013;
	__Local__374.Key.D = 604973165;
	auto& __Local__375 = (*(AccessPrivateProperty<uint32 >(&(__Local__374.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__375 = 0;
	__Local__373.Rehash();
	__Local__4->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__376 = (*(AccessPrivateProperty<FGuid >((__Local__4), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__376 = FGuid(0x0ED22BB7, 0x45247AB5, 0x04078F89, 0x78706DE3);
	auto __Local__377 = NewObject<UMovieScene>(__Local__5, UMovieScene::StaticClass(), TEXT("Quality3"));
	auto& __Local__378 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__377), UMovieScene::__PPO__Possessables() )));
	__Local__378 = TArray<FMovieScenePossessable> ();
	__Local__378.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__378.GetData(), 1);
	auto& __Local__379 = __Local__378[0];
	auto& __Local__380 = (*(AccessPrivateProperty<FGuid >(&(__Local__379), FMovieScenePossessable::__PPO__Guid() )));
	__Local__380 = FGuid(0xE4DB2954, 0x4C2AFC0E, 0x3F198EA1, 0x274E110F);
	auto& __Local__381 = (*(AccessPrivateProperty<FString >(&(__Local__379), FMovieScenePossessable::__PPO__Name() )));
	__Local__381 = FString(TEXT("High"));
	auto& __Local__382 = (*(AccessPrivateProperty<UClass* >(&(__Local__379), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__382 = UButton::StaticClass();
	auto& __Local__383 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__377), UMovieScene::__PPO__ObjectBindings() )));
	__Local__383 = TArray<FMovieSceneBinding> ();
	__Local__383.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__383.GetData(), 1);
	auto& __Local__384 = __Local__383[0];
	auto& __Local__385 = (*(AccessPrivateProperty<FGuid >(&(__Local__384), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__385 = FGuid(0xE4DB2954, 0x4C2AFC0E, 0x3F198EA1, 0x274E110F);
	auto& __Local__386 = (*(AccessPrivateProperty<FString >(&(__Local__384), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__386 = FString(TEXT("High"));
	auto& __Local__387 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__384), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__387 = TArray<UMovieSceneTrack*> ();
	__Local__387.Reserve(1);
	auto __Local__388 = NewObject<UMovieSceneColorTrack>(__Local__377, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_2"));
	auto& __Local__389 = (*(AccessPrivateProperty<FName >((__Local__388), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__389 = FName(TEXT("BackgroundColor"));
	auto& __Local__390 = (*(AccessPrivateProperty<FString >((__Local__388), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__390 = FString(TEXT("BackgroundColor"));
	auto& __Local__391 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__388), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__391 = TArray<UMovieSceneSection*> ();
	__Local__391.Reserve(1);
	auto __Local__392 = NewObject<UMovieSceneColorSection>(__Local__388, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_2"));
	auto& __Local__393 = (*(AccessPrivateProperty<FRichCurve >((__Local__392), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__393.Keys = TArray<FRichCurveKey> ();
	__Local__393.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__393.Keys.GetData(), 1);
	auto& __Local__394 = __Local__393.Keys[0];
	__Local__394.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__394.Value = 0.416667f;
	auto& __Local__395 = (*(AccessPrivateProperty<FRichCurve >((__Local__392), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__395.Keys = TArray<FRichCurveKey> ();
	__Local__395.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__395.Keys.GetData(), 1);
	auto& __Local__396 = __Local__395.Keys[0];
	__Local__396.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__396.Value = 0.346937f;
	auto& __Local__397 = (*(AccessPrivateProperty<FRichCurve >((__Local__392), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__397.Keys = TArray<FRichCurveKey> ();
	__Local__397.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__397.Keys.GetData(), 1);
	auto& __Local__398 = __Local__397.Keys[0];
	__Local__398.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__398.Value = 0.069444f;
	auto& __Local__399 = (*(AccessPrivateProperty<FRichCurve >((__Local__392), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__399.Keys = TArray<FRichCurveKey> ();
	__Local__399.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__399.Keys.GetData(), 2);
	auto& __Local__400 = __Local__399.Keys[0];
	__Local__400.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__401 = __Local__399.Keys[1];
	__Local__401.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__401.Time = 0.300000f;
	__Local__401.Value = 0.500000f;
	auto __Local__402 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__392, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__402->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__392->Easing.EaseIn = __Local__402;
	auto __Local__403 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__392, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__403->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__392->Easing.EaseOut = __Local__403;
	auto& __Local__404 = (*(AccessPrivateProperty<float >((__Local__392), UMovieSceneSection::__PPO__EndTime() )));
	__Local__404 = 0.300000f;
	auto& __Local__405 = (*(AccessPrivateProperty<FGuid >((__Local__392), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__405 = FGuid(0x777009FE, 0x48DF4029, 0x2E10E2AA, 0xADF03D30);
	__Local__391.Add(__Local__392);
	auto& __Local__406 = (*(AccessPrivateProperty<FGuid >((__Local__388), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__406 = FGuid(0x6A46474C, 0x4886F107, 0x6A2E5589, 0x8FD13193);
	__Local__387.Add(__Local__388);
	auto& __Local__407 = (*(AccessPrivateProperty<FFloatRange >((__Local__377), UMovieScene::__PPO__PlaybackRange() )));
	__Local__407 = FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000));
	auto& __Local__408 = (*(AccessPrivateProperty<float >((__Local__377), UMovieScene::__PPO__FixedFrameInterval() )));
	__Local__408 = 0.050000f;
	auto& __Local__409 = (*(AccessPrivateProperty<FGuid >((__Local__377), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__409 = FGuid(0x20057EE8, 0x4E0F41DA, 0xF3494E81, 0x7FBD84A2);
	__Local__5->MovieScene = __Local__377;
	__Local__5->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__5->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__5->AnimationBindings.GetData(), 1);
	auto& __Local__410 = __Local__5->AnimationBindings[0];
	__Local__410.WidgetName = FName(TEXT("High"));
	__Local__410.AnimationGuid = FGuid(0xE4DB2954, 0x4C2AFC0E, 0x3F198EA1, 0x274E110F);
	auto& __Local__411 = (*(AccessPrivateProperty<TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack> >(&(__Local__5->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__Tracks() )));
	__Local__411 = {};
	__Local__411.Reserve(1);
	FScriptMapHelper __Local__412(CastChecked<UMapProperty>(__Local__140), &__Local__411);
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__413 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__412.GetPairPtr(__Local__412.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__414 = (*(AccessPrivateProperty<uint32 >(&(__Local__413.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__414 = 0;
	auto& __Local__415 = (*(AccessPrivateProperty<FGuid >(&(__Local__413.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__415 = FGuid(0xE4DB2954, 0x4C2AFC0E, 0x3F198EA1, 0x274E110F);
	auto& __Local__416 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__413.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__417 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__416), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__417 = TArray<int32> ();
	__Local__417.Reserve(1);
	__Local__417.Add(0);
	auto& __Local__418 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__416), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__418 = TArray<FMovieSceneSegment> ();
	__Local__418.Reserve(1);
	__Local__418.Add(FMovieSceneSegment(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000)), {FSectionEvaluationData(0, -340282346638528859811704183484516925440.000000)}));
	auto& __Local__419 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__413.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__419 = __Local__388;
	auto& __Local__420 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__413.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__420 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__420.Reserve(1);
	__Local__420.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneColorSectionTemplate::StaticStruct()));
	((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())->Curves[0].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())->Curves[0].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())->Curves[0].Keys.GetData(), 1);
	auto& __Local__421 = ((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())->Curves[0].Keys[0];
	__Local__421.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__421.Value = 0.416667f;
	((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())->Curves[1].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())->Curves[1].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())->Curves[1].Keys.GetData(), 1);
	auto& __Local__422 = ((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())->Curves[1].Keys[0];
	__Local__422.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__422.Value = 0.346937f;
	((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())->Curves[2].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())->Curves[2].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())->Curves[2].Keys.GetData(), 1);
	auto& __Local__423 = ((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())->Curves[2].Keys[0];
	__Local__423.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__423.Value = 0.069444f;
	((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())->Curves[3].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())->Curves[3].Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())->Curves[3].Keys.GetData(), 2);
	auto& __Local__424 = ((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())->Curves[3].Keys[0];
	__Local__424.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__425 = ((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())->Curves[3].Keys[1];
	__Local__425.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__425.Time = 0.300000f;
	__Local__425.Value = 0.500000f;
	((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())->BlendType = EMovieSceneBlendType::Absolute;
	auto& __Local__426 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__426.PropertyName = FName(TEXT("BackgroundColor"));
	__Local__426.PropertyPath = FString(TEXT("BackgroundColor"));
	auto& __Local__427 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneColorSectionTemplate*)__Local__420[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__427 = __Local__392;
	(((UBoolProperty*)__Local__170)->SetPropertyValue_InContainer(&(__Local__413.Value), false, 0));
	(((UBoolProperty*)__Local__172)->SetPropertyValue_InContainer(&(__Local__413.Value), false, 0));
	__Local__412.Rehash();
	auto& __Local__428 = (*(AccessPrivateProperty<FGuid >(&(__Local__5->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Signature() )));
	__Local__428 = FGuid(0xFC65DCCC, 0x4955CDBD, 0x8E8F8592, 0x2DBF0798);
	auto& __Local__429 = (*(AccessPrivateProperty<TArray<FFloatRange> >(&(__Local__5->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Ranges() )));
	__Local__429 = TArray<FFloatRange> ();
	__Local__429.Reserve(3);
	__Local__429.Add(FFloatRange(FFloatRangeBound::Open(), FFloatRangeBound::Exclusive(0.000000)));
	__Local__429.Add(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000)));
	__Local__429.Add(FFloatRange(FFloatRangeBound::Exclusive(0.300000), FFloatRangeBound::Open()));
	auto& __Local__430 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationGroup> >(&(__Local__5->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Groups() )));
	__Local__430 = TArray<FMovieSceneEvaluationGroup> ();
	__Local__430.AddUninitialized(3);
	FMovieSceneEvaluationGroup::StaticStruct()->InitializeStruct(__Local__430.GetData(), 3);
	auto& __Local__431 = __Local__430[0];
	auto& __Local__432 = __Local__430[1];
	__Local__432.LUTIndices = TArray<FMovieSceneEvaluationGroupLUTIndex> ();
	__Local__432.LUTIndices.AddUninitialized(1);
	FMovieSceneEvaluationGroupLUTIndex::StaticStruct()->InitializeStruct(__Local__432.LUTIndices.GetData(), 1);
	auto& __Local__433 = __Local__432.LUTIndices[0];
	__Local__433.NumEvalPtrs = 1;
	__Local__432.SegmentPtrLUT = TArray<FMovieSceneEvaluationFieldSegmentPtr> ();
	__Local__432.SegmentPtrLUT.AddUninitialized(1);
	FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()->InitializeStruct(__Local__432.SegmentPtrLUT.GetData(), 1);
	auto& __Local__434 = __Local__432.SegmentPtrLUT[0];
	auto& __Local__435 = (*(AccessPrivateProperty<int32 >(&(__Local__434.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__435 = 0;
	auto& __Local__436 = (*(AccessPrivateProperty<uint32 >(&(__Local__434.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__436 = 0;
	auto& __Local__437 = (*(AccessPrivateProperty<uint32 >(&(__Local__434.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__437 = 0;
	auto& __Local__438 = __Local__430[2];
	auto& __Local__439 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationMetaData> >(&(__Local__5->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__MetaData() )));
	__Local__439 = TArray<FMovieSceneEvaluationMetaData> ();
	__Local__439.AddUninitialized(3);
	FMovieSceneEvaluationMetaData::StaticStruct()->InitializeStruct(__Local__439.GetData(), 3);
	auto& __Local__440 = __Local__439[0];
	__Local__440.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__440.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__440.ActiveSequences.GetData(), 1);
	auto& __Local__441 = __Local__440.ActiveSequences[0];
	auto& __Local__442 = (*(AccessPrivateProperty<uint32 >(&(__Local__441), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__442 = 0;
	auto& __Local__443 = __Local__439[1];
	__Local__443.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__443.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__443.ActiveSequences.GetData(), 1);
	auto& __Local__444 = __Local__443.ActiveSequences[0];
	auto& __Local__445 = (*(AccessPrivateProperty<uint32 >(&(__Local__444), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__445 = 0;
	__Local__443.ActiveEntities = TArray<FMovieSceneOrderedEvaluationKey> ();
	__Local__443.ActiveEntities.AddUninitialized(2);
	FMovieSceneOrderedEvaluationKey::StaticStruct()->InitializeStruct(__Local__443.ActiveEntities.GetData(), 2);
	auto& __Local__446 = __Local__443.ActiveEntities[0];
	auto& __Local__447 = (*(AccessPrivateProperty<uint32 >(&(__Local__446.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__447 = 0;
	auto& __Local__448 = (*(AccessPrivateProperty<uint32 >(&(__Local__446.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__448 = 0;
	__Local__446.Key.SectionIndex = 0;
	__Local__446.EvaluationIndex = 1;
	auto& __Local__449 = __Local__443.ActiveEntities[1];
	auto& __Local__450 = (*(AccessPrivateProperty<uint32 >(&(__Local__449.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__450 = 0;
	auto& __Local__451 = (*(AccessPrivateProperty<uint32 >(&(__Local__449.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__451 = 0;
	auto& __Local__452 = __Local__439[2];
	__Local__452.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__452.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__452.ActiveSequences.GetData(), 1);
	auto& __Local__453 = __Local__452.ActiveSequences[0];
	auto& __Local__454 = (*(AccessPrivateProperty<uint32 >(&(__Local__453), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__454 = 0;
	__Local__5->PrecompiledEvaluationTemplate.SequenceSignature = FGuid(0x0946329F, 0x45225DF8, 0xE2459386, 0x0E7DA71E);
	auto& __Local__455 = (*(AccessPrivateProperty<FMovieSceneTemplateGenerationLedger >(&(__Local__5->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__TemplateLedger() )));
	auto& __Local__456 = (*(AccessPrivateProperty<uint32 >(&(__Local__455.LastTrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__456 = 0;
	__Local__455.TrackSignatureToTrackIdentifier = {};
	__Local__455.TrackSignatureToTrackIdentifier.Reserve(1);
	FScriptMapHelper __Local__457(CastChecked<UMapProperty>(__Local__204), &__Local__455.TrackSignatureToTrackIdentifier);
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__458 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__457.GetPairPtr(__Local__457.AddDefaultValue_Invalid_NeedsRehash());
	__Local__458.Key.A = 1782990668;
	__Local__458.Key.B = 1216803079;
	__Local__458.Key.C = 1781421449;
	__Local__458.Key.D = -1882115693;
	auto& __Local__459 = (*(AccessPrivateProperty<uint32 >(&(__Local__458.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__459 = 0;
	__Local__457.Rehash();
	__Local__5->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__460 = (*(AccessPrivateProperty<FGuid >((__Local__5), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__460 = FGuid(0x0946329F, 0x45225DF8, 0xE2459386, 0x0E7DA71E);
	auto __Local__461 = NewObject<UMovieScene>(__Local__6, UMovieScene::StaticClass(), TEXT("Quality4"));
	auto& __Local__462 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__461), UMovieScene::__PPO__Possessables() )));
	__Local__462 = TArray<FMovieScenePossessable> ();
	__Local__462.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__462.GetData(), 1);
	auto& __Local__463 = __Local__462[0];
	auto& __Local__464 = (*(AccessPrivateProperty<FGuid >(&(__Local__463), FMovieScenePossessable::__PPO__Guid() )));
	__Local__464 = FGuid(0x2A0AFB02, 0x4A7F32D4, 0xE4F73F88, 0x9CD5A827);
	auto& __Local__465 = (*(AccessPrivateProperty<FString >(&(__Local__463), FMovieScenePossessable::__PPO__Name() )));
	__Local__465 = FString(TEXT("Best"));
	auto& __Local__466 = (*(AccessPrivateProperty<UClass* >(&(__Local__463), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__466 = UButton::StaticClass();
	auto& __Local__467 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__461), UMovieScene::__PPO__ObjectBindings() )));
	__Local__467 = TArray<FMovieSceneBinding> ();
	__Local__467.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__467.GetData(), 1);
	auto& __Local__468 = __Local__467[0];
	auto& __Local__469 = (*(AccessPrivateProperty<FGuid >(&(__Local__468), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__469 = FGuid(0x2A0AFB02, 0x4A7F32D4, 0xE4F73F88, 0x9CD5A827);
	auto& __Local__470 = (*(AccessPrivateProperty<FString >(&(__Local__468), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__470 = FString(TEXT("Best"));
	auto& __Local__471 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__468), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__471 = TArray<UMovieSceneTrack*> ();
	__Local__471.Reserve(1);
	auto __Local__472 = NewObject<UMovieSceneColorTrack>(__Local__461, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_3"));
	auto& __Local__473 = (*(AccessPrivateProperty<FName >((__Local__472), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__473 = FName(TEXT("BackgroundColor"));
	auto& __Local__474 = (*(AccessPrivateProperty<FString >((__Local__472), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__474 = FString(TEXT("BackgroundColor"));
	auto& __Local__475 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__472), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__475 = TArray<UMovieSceneSection*> ();
	__Local__475.Reserve(1);
	auto __Local__476 = NewObject<UMovieSceneColorSection>(__Local__472, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_3"));
	auto& __Local__477 = (*(AccessPrivateProperty<FRichCurve >((__Local__476), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__477.Keys = TArray<FRichCurveKey> ();
	__Local__477.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__477.Keys.GetData(), 1);
	auto& __Local__478 = __Local__477.Keys[0];
	__Local__478.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__478.Value = 0.416667f;
	auto& __Local__479 = (*(AccessPrivateProperty<FRichCurve >((__Local__476), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__479.Keys = TArray<FRichCurveKey> ();
	__Local__479.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__479.Keys.GetData(), 1);
	auto& __Local__480 = __Local__479.Keys[0];
	__Local__480.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__480.Value = 0.346937f;
	auto& __Local__481 = (*(AccessPrivateProperty<FRichCurve >((__Local__476), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__481.Keys = TArray<FRichCurveKey> ();
	__Local__481.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__481.Keys.GetData(), 1);
	auto& __Local__482 = __Local__481.Keys[0];
	__Local__482.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__482.Value = 0.069444f;
	auto& __Local__483 = (*(AccessPrivateProperty<FRichCurve >((__Local__476), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__483.Keys = TArray<FRichCurveKey> ();
	__Local__483.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__483.Keys.GetData(), 2);
	auto& __Local__484 = __Local__483.Keys[0];
	__Local__484.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__485 = __Local__483.Keys[1];
	__Local__485.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__485.Time = 0.300000f;
	__Local__485.Value = 0.500000f;
	auto __Local__486 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__476, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__486->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__476->Easing.EaseIn = __Local__486;
	auto __Local__487 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__476, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__487->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__476->Easing.EaseOut = __Local__487;
	auto& __Local__488 = (*(AccessPrivateProperty<float >((__Local__476), UMovieSceneSection::__PPO__EndTime() )));
	__Local__488 = 0.300000f;
	auto& __Local__489 = (*(AccessPrivateProperty<FGuid >((__Local__476), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__489 = FGuid(0x47462151, 0x45C38454, 0x289D02B2, 0xCF606F06);
	__Local__475.Add(__Local__476);
	auto& __Local__490 = (*(AccessPrivateProperty<FGuid >((__Local__472), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__490 = FGuid(0x2C870A1E, 0x47CEA29A, 0x93121090, 0x61C2E162);
	__Local__471.Add(__Local__472);
	auto& __Local__491 = (*(AccessPrivateProperty<FFloatRange >((__Local__461), UMovieScene::__PPO__PlaybackRange() )));
	__Local__491 = FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000));
	auto& __Local__492 = (*(AccessPrivateProperty<float >((__Local__461), UMovieScene::__PPO__FixedFrameInterval() )));
	__Local__492 = 0.050000f;
	auto& __Local__493 = (*(AccessPrivateProperty<FGuid >((__Local__461), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__493 = FGuid(0xF5E6F3D9, 0x40FC1143, 0xE835BE85, 0xD42FBE26);
	__Local__6->MovieScene = __Local__461;
	__Local__6->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__6->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__6->AnimationBindings.GetData(), 1);
	auto& __Local__494 = __Local__6->AnimationBindings[0];
	__Local__494.WidgetName = FName(TEXT("Best"));
	__Local__494.AnimationGuid = FGuid(0x2A0AFB02, 0x4A7F32D4, 0xE4F73F88, 0x9CD5A827);
	auto& __Local__495 = (*(AccessPrivateProperty<TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack> >(&(__Local__6->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__Tracks() )));
	__Local__495 = {};
	__Local__495.Reserve(1);
	FScriptMapHelper __Local__496(CastChecked<UMapProperty>(__Local__140), &__Local__495);
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__497 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__496.GetPairPtr(__Local__496.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__498 = (*(AccessPrivateProperty<uint32 >(&(__Local__497.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__498 = 0;
	auto& __Local__499 = (*(AccessPrivateProperty<FGuid >(&(__Local__497.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__499 = FGuid(0x2A0AFB02, 0x4A7F32D4, 0xE4F73F88, 0x9CD5A827);
	auto& __Local__500 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__497.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__501 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__500), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__501 = TArray<int32> ();
	__Local__501.Reserve(1);
	__Local__501.Add(0);
	auto& __Local__502 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__500), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__502 = TArray<FMovieSceneSegment> ();
	__Local__502.Reserve(1);
	__Local__502.Add(FMovieSceneSegment(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000)), {FSectionEvaluationData(0, -340282346638528859811704183484516925440.000000)}));
	auto& __Local__503 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__497.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__503 = __Local__472;
	auto& __Local__504 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__497.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__504 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__504.Reserve(1);
	__Local__504.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneColorSectionTemplate::StaticStruct()));
	((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[0].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[0].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[0].Keys.GetData(), 1);
	auto& __Local__505 = ((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[0].Keys[0];
	__Local__505.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__505.Value = 0.416667f;
	((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[1].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[1].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[1].Keys.GetData(), 1);
	auto& __Local__506 = ((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[1].Keys[0];
	__Local__506.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__506.Value = 0.346937f;
	((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[2].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[2].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[2].Keys.GetData(), 1);
	auto& __Local__507 = ((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[2].Keys[0];
	__Local__507.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__507.Value = 0.069444f;
	((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[3].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[3].Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[3].Keys.GetData(), 2);
	auto& __Local__508 = ((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[3].Keys[0];
	__Local__508.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__509 = ((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->Curves[3].Keys[1];
	__Local__509.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__509.Time = 0.300000f;
	__Local__509.Value = 0.500000f;
	((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())->BlendType = EMovieSceneBlendType::Absolute;
	auto& __Local__510 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__510.PropertyName = FName(TEXT("BackgroundColor"));
	__Local__510.PropertyPath = FString(TEXT("BackgroundColor"));
	auto& __Local__511 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneColorSectionTemplate*)__Local__504[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__511 = __Local__476;
	(((UBoolProperty*)__Local__170)->SetPropertyValue_InContainer(&(__Local__497.Value), false, 0));
	(((UBoolProperty*)__Local__172)->SetPropertyValue_InContainer(&(__Local__497.Value), false, 0));
	__Local__496.Rehash();
	auto& __Local__512 = (*(AccessPrivateProperty<FGuid >(&(__Local__6->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Signature() )));
	__Local__512 = FGuid(0x67267D23, 0x4F0C8760, 0x48DBD98B, 0x84E64974);
	auto& __Local__513 = (*(AccessPrivateProperty<TArray<FFloatRange> >(&(__Local__6->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Ranges() )));
	__Local__513 = TArray<FFloatRange> ();
	__Local__513.Reserve(3);
	__Local__513.Add(FFloatRange(FFloatRangeBound::Open(), FFloatRangeBound::Exclusive(0.000000)));
	__Local__513.Add(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000)));
	__Local__513.Add(FFloatRange(FFloatRangeBound::Exclusive(0.300000), FFloatRangeBound::Open()));
	auto& __Local__514 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationGroup> >(&(__Local__6->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Groups() )));
	__Local__514 = TArray<FMovieSceneEvaluationGroup> ();
	__Local__514.AddUninitialized(3);
	FMovieSceneEvaluationGroup::StaticStruct()->InitializeStruct(__Local__514.GetData(), 3);
	auto& __Local__515 = __Local__514[0];
	auto& __Local__516 = __Local__514[1];
	__Local__516.LUTIndices = TArray<FMovieSceneEvaluationGroupLUTIndex> ();
	__Local__516.LUTIndices.AddUninitialized(1);
	FMovieSceneEvaluationGroupLUTIndex::StaticStruct()->InitializeStruct(__Local__516.LUTIndices.GetData(), 1);
	auto& __Local__517 = __Local__516.LUTIndices[0];
	__Local__517.NumEvalPtrs = 1;
	__Local__516.SegmentPtrLUT = TArray<FMovieSceneEvaluationFieldSegmentPtr> ();
	__Local__516.SegmentPtrLUT.AddUninitialized(1);
	FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()->InitializeStruct(__Local__516.SegmentPtrLUT.GetData(), 1);
	auto& __Local__518 = __Local__516.SegmentPtrLUT[0];
	auto& __Local__519 = (*(AccessPrivateProperty<int32 >(&(__Local__518.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__519 = 0;
	auto& __Local__520 = (*(AccessPrivateProperty<uint32 >(&(__Local__518.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__520 = 0;
	auto& __Local__521 = (*(AccessPrivateProperty<uint32 >(&(__Local__518.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__521 = 0;
	auto& __Local__522 = __Local__514[2];
	auto& __Local__523 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationMetaData> >(&(__Local__6->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__MetaData() )));
	__Local__523 = TArray<FMovieSceneEvaluationMetaData> ();
	__Local__523.AddUninitialized(3);
	FMovieSceneEvaluationMetaData::StaticStruct()->InitializeStruct(__Local__523.GetData(), 3);
	auto& __Local__524 = __Local__523[0];
	__Local__524.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__524.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__524.ActiveSequences.GetData(), 1);
	auto& __Local__525 = __Local__524.ActiveSequences[0];
	auto& __Local__526 = (*(AccessPrivateProperty<uint32 >(&(__Local__525), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__526 = 0;
	auto& __Local__527 = __Local__523[1];
	__Local__527.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__527.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__527.ActiveSequences.GetData(), 1);
	auto& __Local__528 = __Local__527.ActiveSequences[0];
	auto& __Local__529 = (*(AccessPrivateProperty<uint32 >(&(__Local__528), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__529 = 0;
	__Local__527.ActiveEntities = TArray<FMovieSceneOrderedEvaluationKey> ();
	__Local__527.ActiveEntities.AddUninitialized(2);
	FMovieSceneOrderedEvaluationKey::StaticStruct()->InitializeStruct(__Local__527.ActiveEntities.GetData(), 2);
	auto& __Local__530 = __Local__527.ActiveEntities[0];
	auto& __Local__531 = (*(AccessPrivateProperty<uint32 >(&(__Local__530.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__531 = 0;
	auto& __Local__532 = (*(AccessPrivateProperty<uint32 >(&(__Local__530.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__532 = 0;
	__Local__530.Key.SectionIndex = 0;
	__Local__530.EvaluationIndex = 1;
	auto& __Local__533 = __Local__527.ActiveEntities[1];
	auto& __Local__534 = (*(AccessPrivateProperty<uint32 >(&(__Local__533.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__534 = 0;
	auto& __Local__535 = (*(AccessPrivateProperty<uint32 >(&(__Local__533.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__535 = 0;
	auto& __Local__536 = __Local__523[2];
	__Local__536.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__536.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__536.ActiveSequences.GetData(), 1);
	auto& __Local__537 = __Local__536.ActiveSequences[0];
	auto& __Local__538 = (*(AccessPrivateProperty<uint32 >(&(__Local__537), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__538 = 0;
	__Local__6->PrecompiledEvaluationTemplate.SequenceSignature = FGuid(0x23F9C404, 0x458B1E80, 0x5123CA97, 0x4FEB0CD3);
	auto& __Local__539 = (*(AccessPrivateProperty<FMovieSceneTemplateGenerationLedger >(&(__Local__6->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__TemplateLedger() )));
	auto& __Local__540 = (*(AccessPrivateProperty<uint32 >(&(__Local__539.LastTrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__540 = 0;
	__Local__539.TrackSignatureToTrackIdentifier = {};
	__Local__539.TrackSignatureToTrackIdentifier.Reserve(1);
	FScriptMapHelper __Local__541(CastChecked<UMapProperty>(__Local__204), &__Local__539.TrackSignatureToTrackIdentifier);
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__542 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__541.GetPairPtr(__Local__541.AddDefaultValue_Invalid_NeedsRehash());
	__Local__542.Key.A = 747047454;
	__Local__542.Key.B = 1204724378;
	__Local__542.Key.C = -1827532656;
	__Local__542.Key.D = 1640161634;
	auto& __Local__543 = (*(AccessPrivateProperty<uint32 >(&(__Local__542.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__543 = 0;
	__Local__541.Rehash();
	__Local__6->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__544 = (*(AccessPrivateProperty<FGuid >((__Local__6), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__544 = FGuid(0x23F9C404, 0x458B1E80, 0x5123CA97, 0x4FEB0CD3);
	auto __Local__545 = NewObject<UMovieScene>(__Local__7, UMovieScene::StaticClass(), TEXT("Window1"));
	auto& __Local__546 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__545), UMovieScene::__PPO__Possessables() )));
	__Local__546 = TArray<FMovieScenePossessable> ();
	__Local__546.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__546.GetData(), 1);
	auto& __Local__547 = __Local__546[0];
	auto& __Local__548 = (*(AccessPrivateProperty<FGuid >(&(__Local__547), FMovieScenePossessable::__PPO__Guid() )));
	__Local__548 = FGuid(0xF4BAC291, 0x48734A58, 0xC8D1F3BF, 0x6BB5B3AA);
	auto& __Local__549 = (*(AccessPrivateProperty<FString >(&(__Local__547), FMovieScenePossessable::__PPO__Name() )));
	__Local__549 = FString(TEXT("Fullscreen"));
	auto& __Local__550 = (*(AccessPrivateProperty<UClass* >(&(__Local__547), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__550 = UButton::StaticClass();
	auto& __Local__551 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__545), UMovieScene::__PPO__ObjectBindings() )));
	__Local__551 = TArray<FMovieSceneBinding> ();
	__Local__551.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__551.GetData(), 1);
	auto& __Local__552 = __Local__551[0];
	auto& __Local__553 = (*(AccessPrivateProperty<FGuid >(&(__Local__552), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__553 = FGuid(0xF4BAC291, 0x48734A58, 0xC8D1F3BF, 0x6BB5B3AA);
	auto& __Local__554 = (*(AccessPrivateProperty<FString >(&(__Local__552), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__554 = FString(TEXT("Fullscreen"));
	auto& __Local__555 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__552), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__555 = TArray<UMovieSceneTrack*> ();
	__Local__555.Reserve(1);
	auto __Local__556 = NewObject<UMovieSceneColorTrack>(__Local__545, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_4"));
	auto& __Local__557 = (*(AccessPrivateProperty<FName >((__Local__556), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__557 = FName(TEXT("BackgroundColor"));
	auto& __Local__558 = (*(AccessPrivateProperty<FString >((__Local__556), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__558 = FString(TEXT("BackgroundColor"));
	auto& __Local__559 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__556), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__559 = TArray<UMovieSceneSection*> ();
	__Local__559.Reserve(1);
	auto __Local__560 = NewObject<UMovieSceneColorSection>(__Local__556, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_4"));
	auto& __Local__561 = (*(AccessPrivateProperty<FRichCurve >((__Local__560), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__561.Keys = TArray<FRichCurveKey> ();
	__Local__561.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__561.Keys.GetData(), 1);
	auto& __Local__562 = __Local__561.Keys[0];
	__Local__562.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__562.Time = 0.300000f;
	__Local__562.Value = 0.416667f;
	auto& __Local__563 = (*(AccessPrivateProperty<FRichCurve >((__Local__560), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__563.Keys = TArray<FRichCurveKey> ();
	__Local__563.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__563.Keys.GetData(), 1);
	auto& __Local__564 = __Local__563.Keys[0];
	__Local__564.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__564.Time = 0.300000f;
	__Local__564.Value = 0.346937f;
	auto& __Local__565 = (*(AccessPrivateProperty<FRichCurve >((__Local__560), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__565.Keys = TArray<FRichCurveKey> ();
	__Local__565.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__565.Keys.GetData(), 1);
	auto& __Local__566 = __Local__565.Keys[0];
	__Local__566.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__566.Time = 0.300000f;
	__Local__566.Value = 0.069444f;
	auto& __Local__567 = (*(AccessPrivateProperty<FRichCurve >((__Local__560), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__567.Keys = TArray<FRichCurveKey> ();
	__Local__567.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__567.Keys.GetData(), 2);
	auto& __Local__568 = __Local__567.Keys[0];
	__Local__568.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__569 = __Local__567.Keys[1];
	__Local__569.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__569.Time = 0.300000f;
	__Local__569.Value = 0.500000f;
	auto __Local__570 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__560, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__570->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__560->Easing.EaseIn = __Local__570;
	auto __Local__571 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__560, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__571->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__560->Easing.EaseOut = __Local__571;
	auto& __Local__572 = (*(AccessPrivateProperty<float >((__Local__560), UMovieSceneSection::__PPO__EndTime() )));
	__Local__572 = 0.300000f;
	auto& __Local__573 = (*(AccessPrivateProperty<FGuid >((__Local__560), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__573 = FGuid(0x898B4937, 0x4771E35A, 0x31C7679A, 0x5FA45D71);
	__Local__559.Add(__Local__560);
	auto& __Local__574 = (*(AccessPrivateProperty<FGuid >((__Local__556), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__574 = FGuid(0xC175E7F9, 0x46F6AB5A, 0xA375B3A5, 0x93E5482F);
	__Local__555.Add(__Local__556);
	auto& __Local__575 = (*(AccessPrivateProperty<FFloatRange >((__Local__545), UMovieScene::__PPO__PlaybackRange() )));
	__Local__575 = FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000));
	auto& __Local__576 = (*(AccessPrivateProperty<float >((__Local__545), UMovieScene::__PPO__FixedFrameInterval() )));
	__Local__576 = 0.050000f;
	auto& __Local__577 = (*(AccessPrivateProperty<FGuid >((__Local__545), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__577 = FGuid(0x30DFB091, 0x41C6119C, 0x3DD9FAAB, 0x7ED899E8);
	__Local__7->MovieScene = __Local__545;
	__Local__7->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__7->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__7->AnimationBindings.GetData(), 1);
	auto& __Local__578 = __Local__7->AnimationBindings[0];
	__Local__578.WidgetName = FName(TEXT("Fullscreen"));
	__Local__578.AnimationGuid = FGuid(0xF4BAC291, 0x48734A58, 0xC8D1F3BF, 0x6BB5B3AA);
	auto& __Local__579 = (*(AccessPrivateProperty<TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack> >(&(__Local__7->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__Tracks() )));
	__Local__579 = {};
	__Local__579.Reserve(1);
	FScriptMapHelper __Local__580(CastChecked<UMapProperty>(__Local__140), &__Local__579);
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__581 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__580.GetPairPtr(__Local__580.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__582 = (*(AccessPrivateProperty<uint32 >(&(__Local__581.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__582 = 0;
	auto& __Local__583 = (*(AccessPrivateProperty<FGuid >(&(__Local__581.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__583 = FGuid(0xF4BAC291, 0x48734A58, 0xC8D1F3BF, 0x6BB5B3AA);
	auto& __Local__584 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__581.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__585 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__584), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__585 = TArray<int32> ();
	__Local__585.Reserve(1);
	__Local__585.Add(0);
	auto& __Local__586 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__584), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__586 = TArray<FMovieSceneSegment> ();
	__Local__586.Reserve(1);
	__Local__586.Add(FMovieSceneSegment(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000)), {FSectionEvaluationData(0, -340282346638528859811704183484516925440.000000)}));
	auto& __Local__587 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__581.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__587 = __Local__556;
	auto& __Local__588 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__581.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__588 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__588.Reserve(1);
	__Local__588.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneColorSectionTemplate::StaticStruct()));
	((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())->Curves[0].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())->Curves[0].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())->Curves[0].Keys.GetData(), 1);
	auto& __Local__589 = ((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())->Curves[0].Keys[0];
	__Local__589.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__589.Time = 0.300000f;
	__Local__589.Value = 0.416667f;
	((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())->Curves[1].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())->Curves[1].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())->Curves[1].Keys.GetData(), 1);
	auto& __Local__590 = ((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())->Curves[1].Keys[0];
	__Local__590.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__590.Time = 0.300000f;
	__Local__590.Value = 0.346937f;
	((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())->Curves[2].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())->Curves[2].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())->Curves[2].Keys.GetData(), 1);
	auto& __Local__591 = ((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())->Curves[2].Keys[0];
	__Local__591.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__591.Time = 0.300000f;
	__Local__591.Value = 0.069444f;
	((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())->Curves[3].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())->Curves[3].Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())->Curves[3].Keys.GetData(), 2);
	auto& __Local__592 = ((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())->Curves[3].Keys[0];
	__Local__592.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__593 = ((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())->Curves[3].Keys[1];
	__Local__593.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__593.Time = 0.300000f;
	__Local__593.Value = 0.500000f;
	((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())->BlendType = EMovieSceneBlendType::Absolute;
	auto& __Local__594 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__594.PropertyName = FName(TEXT("BackgroundColor"));
	__Local__594.PropertyPath = FString(TEXT("BackgroundColor"));
	auto& __Local__595 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneColorSectionTemplate*)__Local__588[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__595 = __Local__560;
	(((UBoolProperty*)__Local__170)->SetPropertyValue_InContainer(&(__Local__581.Value), false, 0));
	(((UBoolProperty*)__Local__172)->SetPropertyValue_InContainer(&(__Local__581.Value), false, 0));
	__Local__580.Rehash();
	auto& __Local__596 = (*(AccessPrivateProperty<FGuid >(&(__Local__7->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Signature() )));
	__Local__596 = FGuid(0x2271EBCC, 0x4B352E6C, 0xA9D4708E, 0x4EC8E709);
	auto& __Local__597 = (*(AccessPrivateProperty<TArray<FFloatRange> >(&(__Local__7->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Ranges() )));
	__Local__597 = TArray<FFloatRange> ();
	__Local__597.Reserve(3);
	__Local__597.Add(FFloatRange(FFloatRangeBound::Open(), FFloatRangeBound::Exclusive(0.000000)));
	__Local__597.Add(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000)));
	__Local__597.Add(FFloatRange(FFloatRangeBound::Exclusive(0.300000), FFloatRangeBound::Open()));
	auto& __Local__598 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationGroup> >(&(__Local__7->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Groups() )));
	__Local__598 = TArray<FMovieSceneEvaluationGroup> ();
	__Local__598.AddUninitialized(3);
	FMovieSceneEvaluationGroup::StaticStruct()->InitializeStruct(__Local__598.GetData(), 3);
	auto& __Local__599 = __Local__598[0];
	auto& __Local__600 = __Local__598[1];
	__Local__600.LUTIndices = TArray<FMovieSceneEvaluationGroupLUTIndex> ();
	__Local__600.LUTIndices.AddUninitialized(1);
	FMovieSceneEvaluationGroupLUTIndex::StaticStruct()->InitializeStruct(__Local__600.LUTIndices.GetData(), 1);
	auto& __Local__601 = __Local__600.LUTIndices[0];
	__Local__601.NumEvalPtrs = 1;
	__Local__600.SegmentPtrLUT = TArray<FMovieSceneEvaluationFieldSegmentPtr> ();
	__Local__600.SegmentPtrLUT.AddUninitialized(1);
	FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()->InitializeStruct(__Local__600.SegmentPtrLUT.GetData(), 1);
	auto& __Local__602 = __Local__600.SegmentPtrLUT[0];
	auto& __Local__603 = (*(AccessPrivateProperty<int32 >(&(__Local__602.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__603 = 0;
	auto& __Local__604 = (*(AccessPrivateProperty<uint32 >(&(__Local__602.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__604 = 0;
	auto& __Local__605 = (*(AccessPrivateProperty<uint32 >(&(__Local__602.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__605 = 0;
	auto& __Local__606 = __Local__598[2];
	auto& __Local__607 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationMetaData> >(&(__Local__7->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__MetaData() )));
	__Local__607 = TArray<FMovieSceneEvaluationMetaData> ();
	__Local__607.AddUninitialized(3);
	FMovieSceneEvaluationMetaData::StaticStruct()->InitializeStruct(__Local__607.GetData(), 3);
	auto& __Local__608 = __Local__607[0];
	__Local__608.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__608.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__608.ActiveSequences.GetData(), 1);
	auto& __Local__609 = __Local__608.ActiveSequences[0];
	auto& __Local__610 = (*(AccessPrivateProperty<uint32 >(&(__Local__609), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__610 = 0;
	auto& __Local__611 = __Local__607[1];
	__Local__611.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__611.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__611.ActiveSequences.GetData(), 1);
	auto& __Local__612 = __Local__611.ActiveSequences[0];
	auto& __Local__613 = (*(AccessPrivateProperty<uint32 >(&(__Local__612), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__613 = 0;
	__Local__611.ActiveEntities = TArray<FMovieSceneOrderedEvaluationKey> ();
	__Local__611.ActiveEntities.AddUninitialized(2);
	FMovieSceneOrderedEvaluationKey::StaticStruct()->InitializeStruct(__Local__611.ActiveEntities.GetData(), 2);
	auto& __Local__614 = __Local__611.ActiveEntities[0];
	auto& __Local__615 = (*(AccessPrivateProperty<uint32 >(&(__Local__614.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__615 = 0;
	auto& __Local__616 = (*(AccessPrivateProperty<uint32 >(&(__Local__614.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__616 = 0;
	__Local__614.Key.SectionIndex = 0;
	__Local__614.EvaluationIndex = 1;
	auto& __Local__617 = __Local__611.ActiveEntities[1];
	auto& __Local__618 = (*(AccessPrivateProperty<uint32 >(&(__Local__617.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__618 = 0;
	auto& __Local__619 = (*(AccessPrivateProperty<uint32 >(&(__Local__617.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__619 = 0;
	auto& __Local__620 = __Local__607[2];
	__Local__620.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__620.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__620.ActiveSequences.GetData(), 1);
	auto& __Local__621 = __Local__620.ActiveSequences[0];
	auto& __Local__622 = (*(AccessPrivateProperty<uint32 >(&(__Local__621), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__622 = 0;
	__Local__7->PrecompiledEvaluationTemplate.SequenceSignature = FGuid(0x1622E48A, 0x427EC023, 0xCDF45BB5, 0x2E0AAC41);
	auto& __Local__623 = (*(AccessPrivateProperty<FMovieSceneTemplateGenerationLedger >(&(__Local__7->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__TemplateLedger() )));
	auto& __Local__624 = (*(AccessPrivateProperty<uint32 >(&(__Local__623.LastTrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__624 = 0;
	__Local__623.TrackSignatureToTrackIdentifier = {};
	__Local__623.TrackSignatureToTrackIdentifier.Reserve(1);
	FScriptMapHelper __Local__625(CastChecked<UMapProperty>(__Local__204), &__Local__623.TrackSignatureToTrackIdentifier);
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__626 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__625.GetPairPtr(__Local__625.AddDefaultValue_Invalid_NeedsRehash());
	__Local__626.Key.A = -1049237511;
	__Local__626.Key.B = 1190570842;
	__Local__626.Key.C = -1552567387;
	__Local__626.Key.D = -1813690321;
	auto& __Local__627 = (*(AccessPrivateProperty<uint32 >(&(__Local__626.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__627 = 0;
	__Local__625.Rehash();
	__Local__7->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__628 = (*(AccessPrivateProperty<FGuid >((__Local__7), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__628 = FGuid(0x1622E48A, 0x427EC023, 0xCDF45BB5, 0x2E0AAC41);
	auto __Local__629 = NewObject<UMovieScene>(__Local__8, UMovieScene::StaticClass(), TEXT("Window2"));
	auto& __Local__630 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__629), UMovieScene::__PPO__Possessables() )));
	__Local__630 = TArray<FMovieScenePossessable> ();
	__Local__630.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__630.GetData(), 1);
	auto& __Local__631 = __Local__630[0];
	auto& __Local__632 = (*(AccessPrivateProperty<FGuid >(&(__Local__631), FMovieScenePossessable::__PPO__Guid() )));
	__Local__632 = FGuid(0xE7097311, 0x48F177EE, 0x1309159B, 0x2F995BAD);
	auto& __Local__633 = (*(AccessPrivateProperty<FString >(&(__Local__631), FMovieScenePossessable::__PPO__Name() )));
	__Local__633 = FString(TEXT("Windowed"));
	auto& __Local__634 = (*(AccessPrivateProperty<UClass* >(&(__Local__631), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__634 = UButton::StaticClass();
	auto& __Local__635 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__629), UMovieScene::__PPO__ObjectBindings() )));
	__Local__635 = TArray<FMovieSceneBinding> ();
	__Local__635.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__635.GetData(), 1);
	auto& __Local__636 = __Local__635[0];
	auto& __Local__637 = (*(AccessPrivateProperty<FGuid >(&(__Local__636), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__637 = FGuid(0xE7097311, 0x48F177EE, 0x1309159B, 0x2F995BAD);
	auto& __Local__638 = (*(AccessPrivateProperty<FString >(&(__Local__636), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__638 = FString(TEXT("Windowed"));
	auto& __Local__639 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__636), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__639 = TArray<UMovieSceneTrack*> ();
	__Local__639.Reserve(1);
	auto __Local__640 = NewObject<UMovieSceneColorTrack>(__Local__629, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_5"));
	auto& __Local__641 = (*(AccessPrivateProperty<FName >((__Local__640), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__641 = FName(TEXT("BackgroundColor"));
	auto& __Local__642 = (*(AccessPrivateProperty<FString >((__Local__640), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__642 = FString(TEXT("BackgroundColor"));
	auto& __Local__643 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__640), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__643 = TArray<UMovieSceneSection*> ();
	__Local__643.Reserve(1);
	auto __Local__644 = NewObject<UMovieSceneColorSection>(__Local__640, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_5"));
	auto& __Local__645 = (*(AccessPrivateProperty<FRichCurve >((__Local__644), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__645.Keys = TArray<FRichCurveKey> ();
	__Local__645.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__645.Keys.GetData(), 1);
	auto& __Local__646 = __Local__645.Keys[0];
	__Local__646.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__646.Value = 0.416667f;
	auto& __Local__647 = (*(AccessPrivateProperty<FRichCurve >((__Local__644), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__647.Keys = TArray<FRichCurveKey> ();
	__Local__647.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__647.Keys.GetData(), 1);
	auto& __Local__648 = __Local__647.Keys[0];
	__Local__648.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__648.Value = 0.346937f;
	auto& __Local__649 = (*(AccessPrivateProperty<FRichCurve >((__Local__644), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__649.Keys = TArray<FRichCurveKey> ();
	__Local__649.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__649.Keys.GetData(), 1);
	auto& __Local__650 = __Local__649.Keys[0];
	__Local__650.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__650.Value = 0.069444f;
	auto& __Local__651 = (*(AccessPrivateProperty<FRichCurve >((__Local__644), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__651.Keys = TArray<FRichCurveKey> ();
	__Local__651.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__651.Keys.GetData(), 2);
	auto& __Local__652 = __Local__651.Keys[0];
	__Local__652.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__653 = __Local__651.Keys[1];
	__Local__653.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__653.Time = 0.300000f;
	__Local__653.Value = 0.500000f;
	auto __Local__654 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__644, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__654->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__644->Easing.EaseIn = __Local__654;
	auto __Local__655 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__644, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__655->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__644->Easing.EaseOut = __Local__655;
	auto& __Local__656 = (*(AccessPrivateProperty<float >((__Local__644), UMovieSceneSection::__PPO__EndTime() )));
	__Local__656 = 0.300000f;
	auto& __Local__657 = (*(AccessPrivateProperty<FGuid >((__Local__644), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__657 = FGuid(0x867FFD37, 0x4372B012, 0x956F95BD, 0xFDF77471);
	__Local__643.Add(__Local__644);
	auto& __Local__658 = (*(AccessPrivateProperty<FGuid >((__Local__640), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__658 = FGuid(0x934B3F72, 0x4406D7DB, 0xF8E75297, 0x0E4F45ED);
	__Local__639.Add(__Local__640);
	auto& __Local__659 = (*(AccessPrivateProperty<FFloatRange >((__Local__629), UMovieScene::__PPO__PlaybackRange() )));
	__Local__659 = FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000));
	auto& __Local__660 = (*(AccessPrivateProperty<float >((__Local__629), UMovieScene::__PPO__FixedFrameInterval() )));
	__Local__660 = 0.050000f;
	auto& __Local__661 = (*(AccessPrivateProperty<FGuid >((__Local__629), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__661 = FGuid(0x6EB88E6A, 0x431CA910, 0xF42D4C81, 0x72050E52);
	__Local__8->MovieScene = __Local__629;
	__Local__8->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__8->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__8->AnimationBindings.GetData(), 1);
	auto& __Local__662 = __Local__8->AnimationBindings[0];
	__Local__662.WidgetName = FName(TEXT("Windowed"));
	__Local__662.AnimationGuid = FGuid(0xE7097311, 0x48F177EE, 0x1309159B, 0x2F995BAD);
	auto& __Local__663 = (*(AccessPrivateProperty<TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack> >(&(__Local__8->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__Tracks() )));
	__Local__663 = {};
	__Local__663.Reserve(1);
	FScriptMapHelper __Local__664(CastChecked<UMapProperty>(__Local__140), &__Local__663);
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__665 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__664.GetPairPtr(__Local__664.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__666 = (*(AccessPrivateProperty<uint32 >(&(__Local__665.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__666 = 0;
	auto& __Local__667 = (*(AccessPrivateProperty<FGuid >(&(__Local__665.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__667 = FGuid(0xE7097311, 0x48F177EE, 0x1309159B, 0x2F995BAD);
	auto& __Local__668 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__665.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__669 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__668), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__669 = TArray<int32> ();
	__Local__669.Reserve(1);
	__Local__669.Add(0);
	auto& __Local__670 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__668), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__670 = TArray<FMovieSceneSegment> ();
	__Local__670.Reserve(1);
	__Local__670.Add(FMovieSceneSegment(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000)), {FSectionEvaluationData(0, -340282346638528859811704183484516925440.000000)}));
	auto& __Local__671 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__665.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__671 = __Local__640;
	auto& __Local__672 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__665.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__672 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__672.Reserve(1);
	__Local__672.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneColorSectionTemplate::StaticStruct()));
	((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())->Curves[0].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())->Curves[0].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())->Curves[0].Keys.GetData(), 1);
	auto& __Local__673 = ((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())->Curves[0].Keys[0];
	__Local__673.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__673.Value = 0.416667f;
	((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())->Curves[1].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())->Curves[1].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())->Curves[1].Keys.GetData(), 1);
	auto& __Local__674 = ((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())->Curves[1].Keys[0];
	__Local__674.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__674.Value = 0.346937f;
	((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())->Curves[2].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())->Curves[2].Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())->Curves[2].Keys.GetData(), 1);
	auto& __Local__675 = ((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())->Curves[2].Keys[0];
	__Local__675.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__675.Value = 0.069444f;
	((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())->Curves[3].Keys = TArray<FRichCurveKey> ();
	((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())->Curves[3].Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())->Curves[3].Keys.GetData(), 2);
	auto& __Local__676 = ((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())->Curves[3].Keys[0];
	__Local__676.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__677 = ((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())->Curves[3].Keys[1];
	__Local__677.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__677.Time = 0.300000f;
	__Local__677.Value = 0.500000f;
	((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())->BlendType = EMovieSceneBlendType::Absolute;
	auto& __Local__678 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__678.PropertyName = FName(TEXT("BackgroundColor"));
	__Local__678.PropertyPath = FString(TEXT("BackgroundColor"));
	auto& __Local__679 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneColorSectionTemplate*)__Local__672[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__679 = __Local__644;
	(((UBoolProperty*)__Local__170)->SetPropertyValue_InContainer(&(__Local__665.Value), false, 0));
	(((UBoolProperty*)__Local__172)->SetPropertyValue_InContainer(&(__Local__665.Value), false, 0));
	__Local__664.Rehash();
	auto& __Local__680 = (*(AccessPrivateProperty<FGuid >(&(__Local__8->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Signature() )));
	__Local__680 = FGuid(0x99CF0E2E, 0x4F91ED47, 0x38F4D483, 0xEF726544);
	auto& __Local__681 = (*(AccessPrivateProperty<TArray<FFloatRange> >(&(__Local__8->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Ranges() )));
	__Local__681 = TArray<FFloatRange> ();
	__Local__681.Reserve(3);
	__Local__681.Add(FFloatRange(FFloatRangeBound::Open(), FFloatRangeBound::Exclusive(0.000000)));
	__Local__681.Add(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.300000)));
	__Local__681.Add(FFloatRange(FFloatRangeBound::Exclusive(0.300000), FFloatRangeBound::Open()));
	auto& __Local__682 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationGroup> >(&(__Local__8->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Groups() )));
	__Local__682 = TArray<FMovieSceneEvaluationGroup> ();
	__Local__682.AddUninitialized(3);
	FMovieSceneEvaluationGroup::StaticStruct()->InitializeStruct(__Local__682.GetData(), 3);
	auto& __Local__683 = __Local__682[0];
	auto& __Local__684 = __Local__682[1];
	__Local__684.LUTIndices = TArray<FMovieSceneEvaluationGroupLUTIndex> ();
	__Local__684.LUTIndices.AddUninitialized(1);
	FMovieSceneEvaluationGroupLUTIndex::StaticStruct()->InitializeStruct(__Local__684.LUTIndices.GetData(), 1);
	auto& __Local__685 = __Local__684.LUTIndices[0];
	__Local__685.NumEvalPtrs = 1;
	__Local__684.SegmentPtrLUT = TArray<FMovieSceneEvaluationFieldSegmentPtr> ();
	__Local__684.SegmentPtrLUT.AddUninitialized(1);
	FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()->InitializeStruct(__Local__684.SegmentPtrLUT.GetData(), 1);
	auto& __Local__686 = __Local__684.SegmentPtrLUT[0];
	auto& __Local__687 = (*(AccessPrivateProperty<int32 >(&(__Local__686.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__687 = 0;
	auto& __Local__688 = (*(AccessPrivateProperty<uint32 >(&(__Local__686.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__688 = 0;
	auto& __Local__689 = (*(AccessPrivateProperty<uint32 >(&(__Local__686.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__689 = 0;
	auto& __Local__690 = __Local__682[2];
	auto& __Local__691 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationMetaData> >(&(__Local__8->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__MetaData() )));
	__Local__691 = TArray<FMovieSceneEvaluationMetaData> ();
	__Local__691.AddUninitialized(3);
	FMovieSceneEvaluationMetaData::StaticStruct()->InitializeStruct(__Local__691.GetData(), 3);
	auto& __Local__692 = __Local__691[0];
	__Local__692.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__692.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__692.ActiveSequences.GetData(), 1);
	auto& __Local__693 = __Local__692.ActiveSequences[0];
	auto& __Local__694 = (*(AccessPrivateProperty<uint32 >(&(__Local__693), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__694 = 0;
	auto& __Local__695 = __Local__691[1];
	__Local__695.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__695.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__695.ActiveSequences.GetData(), 1);
	auto& __Local__696 = __Local__695.ActiveSequences[0];
	auto& __Local__697 = (*(AccessPrivateProperty<uint32 >(&(__Local__696), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__697 = 0;
	__Local__695.ActiveEntities = TArray<FMovieSceneOrderedEvaluationKey> ();
	__Local__695.ActiveEntities.AddUninitialized(2);
	FMovieSceneOrderedEvaluationKey::StaticStruct()->InitializeStruct(__Local__695.ActiveEntities.GetData(), 2);
	auto& __Local__698 = __Local__695.ActiveEntities[0];
	auto& __Local__699 = (*(AccessPrivateProperty<uint32 >(&(__Local__698.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__699 = 0;
	auto& __Local__700 = (*(AccessPrivateProperty<uint32 >(&(__Local__698.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__700 = 0;
	__Local__698.Key.SectionIndex = 0;
	__Local__698.EvaluationIndex = 1;
	auto& __Local__701 = __Local__695.ActiveEntities[1];
	auto& __Local__702 = (*(AccessPrivateProperty<uint32 >(&(__Local__701.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__702 = 0;
	auto& __Local__703 = (*(AccessPrivateProperty<uint32 >(&(__Local__701.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__703 = 0;
	auto& __Local__704 = __Local__691[2];
	__Local__704.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__704.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__704.ActiveSequences.GetData(), 1);
	auto& __Local__705 = __Local__704.ActiveSequences[0];
	auto& __Local__706 = (*(AccessPrivateProperty<uint32 >(&(__Local__705), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__706 = 0;
	__Local__8->PrecompiledEvaluationTemplate.SequenceSignature = FGuid(0xD10DCBC4, 0x4D0FE30F, 0xAAA392BF, 0xAAC98DE9);
	auto& __Local__707 = (*(AccessPrivateProperty<FMovieSceneTemplateGenerationLedger >(&(__Local__8->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__TemplateLedger() )));
	auto& __Local__708 = (*(AccessPrivateProperty<uint32 >(&(__Local__707.LastTrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__708 = 0;
	__Local__707.TrackSignatureToTrackIdentifier = {};
	__Local__707.TrackSignatureToTrackIdentifier.Reserve(1);
	FScriptMapHelper __Local__709(CastChecked<UMapProperty>(__Local__204), &__Local__707.TrackSignatureToTrackIdentifier);
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__710 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__709.GetPairPtr(__Local__709.AddDefaultValue_Invalid_NeedsRehash());
	__Local__710.Key.A = -1823785102;
	__Local__710.Key.B = 1141299163;
	__Local__710.Key.C = -119057769;
	__Local__710.Key.D = 240076269;
	auto& __Local__711 = (*(AccessPrivateProperty<uint32 >(&(__Local__710.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__711 = 0;
	__Local__709.Rehash();
	__Local__8->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__712 = (*(AccessPrivateProperty<FGuid >((__Local__8), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__712 = FGuid(0xD10DCBC4, 0x4D0FE30F, 0xAAA392BF, 0xAAC98DE9);
	auto __Local__713 = NewObject<UMovieScene>(__Local__9, UMovieScene::StaticClass(), TEXT("Saving"));
	auto& __Local__714 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__713), UMovieScene::__PPO__Possessables() )));
	__Local__714 = TArray<FMovieScenePossessable> ();
	__Local__714.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__714.GetData(), 1);
	auto& __Local__715 = __Local__714[0];
	auto& __Local__716 = (*(AccessPrivateProperty<FGuid >(&(__Local__715), FMovieScenePossessable::__PPO__Guid() )));
	__Local__716 = FGuid(0xD53F8E1F, 0x1B4B10C9, 0x26820786, 0x8FD5B7F6);
	auto& __Local__717 = (*(AccessPrivateProperty<FString >(&(__Local__715), FMovieScenePossessable::__PPO__Name() )));
	__Local__717 = FString(TEXT("HorizontalBox_101"));
	auto& __Local__718 = (*(AccessPrivateProperty<UClass* >(&(__Local__715), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__718 = UHorizontalBox::StaticClass();
	auto& __Local__719 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__713), UMovieScene::__PPO__ObjectBindings() )));
	__Local__719 = TArray<FMovieSceneBinding> ();
	__Local__719.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__719.GetData(), 1);
	auto& __Local__720 = __Local__719[0];
	auto& __Local__721 = (*(AccessPrivateProperty<FGuid >(&(__Local__720), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__721 = FGuid(0xD53F8E1F, 0x1B4B10C9, 0x26820786, 0x8FD5B7F6);
	auto& __Local__722 = (*(AccessPrivateProperty<FString >(&(__Local__720), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__722 = FString(TEXT("HorizontalBox_101"));
	auto& __Local__723 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__720), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__723 = TArray<UMovieSceneTrack*> ();
	__Local__723.Reserve(2);
	auto __Local__724 = NewObject<UMovieScene2DTransformTrack>(__Local__713, UMovieScene2DTransformTrack::StaticClass(), TEXT("MovieScene2DTransformTrack_0"));
	auto& __Local__725 = (*(AccessPrivateProperty<FName >((__Local__724), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__725 = FName(TEXT("RenderTransform"));
	auto& __Local__726 = (*(AccessPrivateProperty<FString >((__Local__724), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__726 = FString(TEXT("RenderTransform"));
	auto& __Local__727 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__724), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__727 = TArray<UMovieSceneSection*> ();
	__Local__727.Reserve(1);
	auto __Local__728 = NewObject<UMovieScene2DTransformSection>(__Local__724, UMovieScene2DTransformSection::StaticClass(), TEXT("MovieScene2DTransformSection_0"));
	auto& __Local__729 = (*(AccessPrivateProperty<FRichCurve >((__Local__728), UMovieScene2DTransformSection::__PPO__Translation() )));
	__Local__729.Keys = TArray<FRichCurveKey> ();
	__Local__729.Keys.AddUninitialized(4);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__729.Keys.GetData(), 4);
	auto& __Local__730 = __Local__729.Keys[0];
	__Local__730.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__730.Value = -500.000000f;
	auto& __Local__731 = __Local__729.Keys[1];
	__Local__731.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__731.Time = 0.200000f;
	__Local__731.ArriveTangent = 454.545441f;
	__Local__731.LeaveTangent = 454.545441f;
	auto& __Local__732 = __Local__729.Keys[2];
	__Local__732.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__732.Time = 1.100000f;
	__Local__732.ArriveTangent = -454.545441f;
	__Local__732.LeaveTangent = -454.545441f;
	auto& __Local__733 = __Local__729.Keys[3];
	__Local__733.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__733.Time = 1.300000f;
	__Local__733.Value = -500.000000f;
	auto& __Local__734 = (*(AccessPrivateProperty<FRichCurve >((__Local__728), UMovieScene2DTransformSection::__PPO__Translation() , sizeof(FRichCurve ), 1)));
	__Local__734.Keys = TArray<FRichCurveKey> ();
	__Local__734.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__734.Keys.GetData(), 1);
	auto& __Local__735 = __Local__734.Keys[0];
	__Local__735.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__736 = (*(AccessPrivateProperty<FRichCurve >((__Local__728), UMovieScene2DTransformSection::__PPO__Rotation() )));
	__Local__736.Keys = TArray<FRichCurveKey> ();
	__Local__736.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__736.Keys.GetData(), 1);
	auto& __Local__737 = __Local__736.Keys[0];
	__Local__737.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__738 = (*(AccessPrivateProperty<FRichCurve >((__Local__728), UMovieScene2DTransformSection::__PPO__Scale() )));
	__Local__738.Keys = TArray<FRichCurveKey> ();
	__Local__738.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__738.Keys.GetData(), 1);
	auto& __Local__739 = __Local__738.Keys[0];
	__Local__739.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__739.Value = 1.000000f;
	auto& __Local__740 = (*(AccessPrivateProperty<FRichCurve >((__Local__728), UMovieScene2DTransformSection::__PPO__Scale() , sizeof(FRichCurve ), 1)));
	__Local__740.Keys = TArray<FRichCurveKey> ();
	__Local__740.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__740.Keys.GetData(), 1);
	auto& __Local__741 = __Local__740.Keys[0];
	__Local__741.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__741.Value = 1.000000f;
	auto& __Local__742 = (*(AccessPrivateProperty<FRichCurve >((__Local__728), UMovieScene2DTransformSection::__PPO__Shear() )));
	__Local__742.Keys = TArray<FRichCurveKey> ();
	__Local__742.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__742.Keys.GetData(), 1);
	auto& __Local__743 = __Local__742.Keys[0];
	__Local__743.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__744 = (*(AccessPrivateProperty<FRichCurve >((__Local__728), UMovieScene2DTransformSection::__PPO__Shear() , sizeof(FRichCurve ), 1)));
	__Local__744.Keys = TArray<FRichCurveKey> ();
	__Local__744.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__744.Keys.GetData(), 1);
	auto& __Local__745 = __Local__744.Keys[0];
	__Local__745.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto __Local__746 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__728, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__746->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__728->Easing.EaseIn = __Local__746;
	auto __Local__747 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__728, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__747->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__728->Easing.EaseOut = __Local__747;
	auto& __Local__748 = (*(AccessPrivateProperty<float >((__Local__728), UMovieSceneSection::__PPO__EndTime() )));
	__Local__748 = 1.300000f;
	auto& __Local__749 = (*(AccessPrivateProperty<FGuid >((__Local__728), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__749 = FGuid(0xB85A5F34, 0x914A2CC8, 0x525B29B3, 0x5943B883);
	__Local__727.Add(__Local__728);
	auto& __Local__750 = (*(AccessPrivateProperty<FGuid >((__Local__724), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__750 = FGuid(0x98039DB2, 0xBF4FA791, 0x46AFE7B9, 0x724D5B3B);
	__Local__723.Add(__Local__724);
	auto __Local__751 = NewObject<UMovieSceneFloatTrack>(__Local__713, UMovieSceneFloatTrack::StaticClass(), TEXT("MovieSceneFloatTrack_0"));
	auto& __Local__752 = (*(AccessPrivateProperty<FName >((__Local__751), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__752 = FName(TEXT("RenderOpacity"));
	auto& __Local__753 = (*(AccessPrivateProperty<FString >((__Local__751), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__753 = FString(TEXT("RenderOpacity"));
	auto& __Local__754 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__751), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__754 = TArray<UMovieSceneSection*> ();
	__Local__754.Reserve(1);
	auto __Local__755 = NewObject<UMovieSceneFloatSection>(__Local__751, UMovieSceneFloatSection::StaticClass(), TEXT("MovieSceneFloatSection_0"));
	auto& __Local__756 = (*(AccessPrivateProperty<FRichCurve >((__Local__755), UMovieSceneFloatSection::__PPO__FloatCurve() )));
	__Local__756.Keys = TArray<FRichCurveKey> ();
	__Local__756.Keys.AddUninitialized(4);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__756.Keys.GetData(), 4);
	auto& __Local__757 = __Local__756.Keys[0];
	__Local__757.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__758 = __Local__756.Keys[1];
	__Local__758.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__758.Time = 0.300000f;
	__Local__758.Value = 1.000000f;
	__Local__758.ArriveTangent = 1.000000f;
	__Local__758.LeaveTangent = 1.000000f;
	auto& __Local__759 = __Local__756.Keys[2];
	__Local__759.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__759.Time = 1.000000f;
	__Local__759.Value = 1.000000f;
	__Local__759.ArriveTangent = -1.000000f;
	__Local__759.LeaveTangent = -1.000000f;
	auto& __Local__760 = __Local__756.Keys[3];
	__Local__760.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__760.Time = 1.300000f;
	auto __Local__761 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__755, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseInFunction"));
	__Local__761->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__755->Easing.EaseIn = __Local__761;
	auto __Local__762 = NewObject<UMovieSceneBuiltInEasingFunction>(__Local__755, UMovieSceneBuiltInEasingFunction::StaticClass(), TEXT("EaseOutFunction"));
	__Local__762->Type = EMovieSceneBuiltInEasing::CubicInOut;
	__Local__755->Easing.EaseOut = __Local__762;
	auto& __Local__763 = (*(AccessPrivateProperty<float >((__Local__755), UMovieSceneSection::__PPO__EndTime() )));
	__Local__763 = 1.300000f;
	auto& __Local__764 = (*(AccessPrivateProperty<FGuid >((__Local__755), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__764 = FGuid(0x6F2747EF, 0x1E43EAD8, 0x2B1FC9AD, 0xF805307A);
	__Local__754.Add(__Local__755);
	auto& __Local__765 = (*(AccessPrivateProperty<FGuid >((__Local__751), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__765 = FGuid(0x8641CAF0, 0x71453CC5, 0xBC99D597, 0xC8858346);
	__Local__723.Add(__Local__751);
	auto& __Local__766 = (*(AccessPrivateProperty<FFloatRange >((__Local__713), UMovieScene::__PPO__PlaybackRange() )));
	__Local__766 = FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(1.300000));
	auto& __Local__767 = (*(AccessPrivateProperty<float >((__Local__713), UMovieScene::__PPO__FixedFrameInterval() )));
	__Local__767 = 0.050000f;
	auto& __Local__768 = (*(AccessPrivateProperty<FGuid >((__Local__713), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__768 = FGuid(0x2C0DAB57, 0x544D4F27, 0x69389E93, 0x270B512F);
	__Local__9->MovieScene = __Local__713;
	__Local__9->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__9->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__9->AnimationBindings.GetData(), 1);
	auto& __Local__769 = __Local__9->AnimationBindings[0];
	__Local__769.WidgetName = FName(TEXT("HorizontalBox_101"));
	__Local__769.AnimationGuid = FGuid(0xD53F8E1F, 0x1B4B10C9, 0x26820786, 0x8FD5B7F6);
	auto& __Local__770 = (*(AccessPrivateProperty<TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack> >(&(__Local__9->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__Tracks() )));
	__Local__770 = {};
	__Local__770.Reserve(2);
	FScriptMapHelper __Local__771(CastChecked<UMapProperty>(__Local__140), &__Local__770);
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__772 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__771.GetPairPtr(__Local__771.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__773 = (*(AccessPrivateProperty<uint32 >(&(__Local__772.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__773 = 0;
	auto& __Local__774 = (*(AccessPrivateProperty<FGuid >(&(__Local__772.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__774 = FGuid(0xD53F8E1F, 0x1B4B10C9, 0x26820786, 0x8FD5B7F6);
	auto& __Local__775 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__772.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__776 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__775), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__776 = TArray<int32> ();
	__Local__776.Reserve(1);
	__Local__776.Add(0);
	auto& __Local__777 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__775), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__777 = TArray<FMovieSceneSegment> ();
	__Local__777.Reserve(1);
	__Local__777.Add(FMovieSceneSegment(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(1.300000)), {FSectionEvaluationData(0, -340282346638528859811704183484516925440.000000)}));
	auto& __Local__778 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__772.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__778 = __Local__724;
	auto& __Local__779 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__772.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__779 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__779.Reserve(1);
	__Local__779.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieScene2DTransformSectionTemplate::StaticStruct()));
	auto& __Local__780 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__779[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Translation() )));
	__Local__780.Keys = TArray<FRichCurveKey> ();
	__Local__780.Keys.AddUninitialized(4);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__780.Keys.GetData(), 4);
	auto& __Local__781 = __Local__780.Keys[0];
	__Local__781.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__781.Value = -500.000000f;
	auto& __Local__782 = __Local__780.Keys[1];
	__Local__782.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__782.Time = 0.200000f;
	__Local__782.ArriveTangent = 454.545441f;
	__Local__782.LeaveTangent = 454.545441f;
	auto& __Local__783 = __Local__780.Keys[2];
	__Local__783.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__783.Time = 1.100000f;
	__Local__783.ArriveTangent = -454.545441f;
	__Local__783.LeaveTangent = -454.545441f;
	auto& __Local__784 = __Local__780.Keys[3];
	__Local__784.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__784.Time = 1.300000f;
	__Local__784.Value = -500.000000f;
	auto& __Local__785 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__779[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Translation() , sizeof(FRichCurve ), 1)));
	__Local__785.Keys = TArray<FRichCurveKey> ();
	__Local__785.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__785.Keys.GetData(), 1);
	auto& __Local__786 = __Local__785.Keys[0];
	__Local__786.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__787 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__779[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Rotation() )));
	__Local__787.Keys = TArray<FRichCurveKey> ();
	__Local__787.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__787.Keys.GetData(), 1);
	auto& __Local__788 = __Local__787.Keys[0];
	__Local__788.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__789 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__779[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Scale() )));
	__Local__789.Keys = TArray<FRichCurveKey> ();
	__Local__789.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__789.Keys.GetData(), 1);
	auto& __Local__790 = __Local__789.Keys[0];
	__Local__790.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__790.Value = 1.000000f;
	auto& __Local__791 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__779[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Scale() , sizeof(FRichCurve ), 1)));
	__Local__791.Keys = TArray<FRichCurveKey> ();
	__Local__791.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__791.Keys.GetData(), 1);
	auto& __Local__792 = __Local__791.Keys[0];
	__Local__792.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__792.Value = 1.000000f;
	auto& __Local__793 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__779[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Shear() )));
	__Local__793.Keys = TArray<FRichCurveKey> ();
	__Local__793.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__793.Keys.GetData(), 1);
	auto& __Local__794 = __Local__793.Keys[0];
	__Local__794.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__795 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__779[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Shear() , sizeof(FRichCurve ), 1)));
	__Local__795.Keys = TArray<FRichCurveKey> ();
	__Local__795.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__795.Keys.GetData(), 1);
	auto& __Local__796 = __Local__795.Keys[0];
	__Local__796.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__797 = (*(AccessPrivateProperty<EMovieSceneBlendType >((((FMovieScene2DTransformSectionTemplate*)__Local__779[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__BlendType() )));
	__Local__797 = EMovieSceneBlendType::Absolute;
	auto& __Local__798 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieScene2DTransformSectionTemplate*)__Local__779[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__798.PropertyName = FName(TEXT("RenderTransform"));
	__Local__798.PropertyPath = FString(TEXT("RenderTransform"));
	auto& __Local__799 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieScene2DTransformSectionTemplate*)__Local__779[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__799 = __Local__728;
	(((UBoolProperty*)__Local__170)->SetPropertyValue_InContainer(&(__Local__772.Value), false, 0));
	(((UBoolProperty*)__Local__172)->SetPropertyValue_InContainer(&(__Local__772.Value), false, 0));
	TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType& __Local__800 = *(TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>::ElementType*)__Local__771.GetPairPtr(__Local__771.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__801 = (*(AccessPrivateProperty<uint32 >(&(__Local__800.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__801 = 1;
	auto& __Local__802 = (*(AccessPrivateProperty<FGuid >(&(__Local__800.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__802 = FGuid(0xD53F8E1F, 0x1B4B10C9, 0x26820786, 0x8FD5B7F6);
	auto& __Local__803 = (*(AccessPrivateProperty<FMovieSceneEvaluationTrackSegments >(&(__Local__800.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	auto& __Local__804 = (*(AccessPrivateProperty<TArray<int32> >(&(__Local__803), FMovieSceneEvaluationTrackSegments::__PPO__SegmentIdentifierToIndex() )));
	__Local__804 = TArray<int32> ();
	__Local__804.Reserve(1);
	__Local__804.Add(0);
	auto& __Local__805 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__803), FMovieSceneEvaluationTrackSegments::__PPO__SortedSegments() )));
	__Local__805 = TArray<FMovieSceneSegment> ();
	__Local__805.Reserve(1);
	__Local__805.Add(FMovieSceneSegment(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(1.300000)), {FSectionEvaluationData(0, -340282346638528859811704183484516925440.000000)}));
	auto& __Local__806 = (*(AccessPrivateProperty<UMovieSceneTrack* >(&(__Local__800.Value), FMovieSceneEvaluationTrack::__PPO__SourceTrack() )));
	__Local__806 = __Local__751;
	auto& __Local__807 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__800.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__807 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__807.Reserve(1);
	__Local__807.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneFloatPropertySectionTemplate::StaticStruct()));
	auto& __Local__808 = (*(AccessPrivateProperty<FRichCurve >((((FMovieSceneFloatPropertySectionTemplate*)__Local__807[0].GetPtr())), FMovieSceneFloatPropertySectionTemplate::__PPO__FloatCurve() )));
	__Local__808.Keys = TArray<FRichCurveKey> ();
	__Local__808.Keys.AddUninitialized(4);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__808.Keys.GetData(), 4);
	auto& __Local__809 = __Local__808.Keys[0];
	__Local__809.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__810 = __Local__808.Keys[1];
	__Local__810.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__810.Time = 0.300000f;
	__Local__810.Value = 1.000000f;
	__Local__810.ArriveTangent = 1.000000f;
	__Local__810.LeaveTangent = 1.000000f;
	auto& __Local__811 = __Local__808.Keys[2];
	__Local__811.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__811.Time = 1.000000f;
	__Local__811.Value = 1.000000f;
	__Local__811.ArriveTangent = -1.000000f;
	__Local__811.LeaveTangent = -1.000000f;
	auto& __Local__812 = __Local__808.Keys[3];
	__Local__812.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__812.Time = 1.300000f;
	auto& __Local__813 = (*(AccessPrivateProperty<EMovieSceneBlendType >((((FMovieSceneFloatPropertySectionTemplate*)__Local__807[0].GetPtr())), FMovieSceneFloatPropertySectionTemplate::__PPO__BlendType() )));
	__Local__813 = EMovieSceneBlendType::Absolute;
	auto& __Local__814 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneFloatPropertySectionTemplate*)__Local__807[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__814.PropertyName = FName(TEXT("RenderOpacity"));
	__Local__814.PropertyPath = FString(TEXT("RenderOpacity"));
	auto& __Local__815 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneFloatPropertySectionTemplate*)__Local__807[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__815 = __Local__755;
	(((UBoolProperty*)__Local__170)->SetPropertyValue_InContainer(&(__Local__800.Value), false, 0));
	(((UBoolProperty*)__Local__172)->SetPropertyValue_InContainer(&(__Local__800.Value), false, 0));
	__Local__771.Rehash();
	auto& __Local__816 = (*(AccessPrivateProperty<FGuid >(&(__Local__9->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Signature() )));
	__Local__816 = FGuid(0xF6FC5A43, 0x4B01EF5F, 0xCCC34EBD, 0xBE1D6A41);
	auto& __Local__817 = (*(AccessPrivateProperty<TArray<FFloatRange> >(&(__Local__9->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Ranges() )));
	__Local__817 = TArray<FFloatRange> ();
	__Local__817.Reserve(3);
	__Local__817.Add(FFloatRange(FFloatRangeBound::Open(), FFloatRangeBound::Exclusive(0.000000)));
	__Local__817.Add(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(1.300000)));
	__Local__817.Add(FFloatRange(FFloatRangeBound::Exclusive(1.300000), FFloatRangeBound::Open()));
	auto& __Local__818 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationGroup> >(&(__Local__9->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__Groups() )));
	__Local__818 = TArray<FMovieSceneEvaluationGroup> ();
	__Local__818.AddUninitialized(3);
	FMovieSceneEvaluationGroup::StaticStruct()->InitializeStruct(__Local__818.GetData(), 3);
	auto& __Local__819 = __Local__818[0];
	auto& __Local__820 = __Local__818[1];
	__Local__820.LUTIndices = TArray<FMovieSceneEvaluationGroupLUTIndex> ();
	__Local__820.LUTIndices.AddUninitialized(1);
	FMovieSceneEvaluationGroupLUTIndex::StaticStruct()->InitializeStruct(__Local__820.LUTIndices.GetData(), 1);
	auto& __Local__821 = __Local__820.LUTIndices[0];
	__Local__821.NumEvalPtrs = 2;
	__Local__820.SegmentPtrLUT = TArray<FMovieSceneEvaluationFieldSegmentPtr> ();
	__Local__820.SegmentPtrLUT.AddUninitialized(2);
	FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()->InitializeStruct(__Local__820.SegmentPtrLUT.GetData(), 2);
	auto& __Local__822 = __Local__820.SegmentPtrLUT[0];
	auto& __Local__823 = (*(AccessPrivateProperty<int32 >(&(__Local__822.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__823 = 0;
	auto& __Local__824 = (*(AccessPrivateProperty<uint32 >(&(__Local__822.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__824 = 0;
	auto& __Local__825 = (*(AccessPrivateProperty<uint32 >(&(__Local__822.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__825 = 1;
	auto& __Local__826 = __Local__820.SegmentPtrLUT[1];
	auto& __Local__827 = (*(AccessPrivateProperty<int32 >(&(__Local__826.SegmentID), FMovieSceneSegmentIdentifier::__PPO__IdentifierIndex() )));
	__Local__827 = 0;
	auto& __Local__828 = (*(AccessPrivateProperty<uint32 >(&(__Local__826.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__828 = 0;
	auto& __Local__829 = (*(AccessPrivateProperty<uint32 >(&(__Local__826.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__829 = 0;
	auto& __Local__830 = __Local__818[2];
	auto& __Local__831 = (*(AccessPrivateProperty<TArray<FMovieSceneEvaluationMetaData> >(&(__Local__9->PrecompiledEvaluationTemplate.EvaluationField), FMovieSceneEvaluationField::__PPO__MetaData() )));
	__Local__831 = TArray<FMovieSceneEvaluationMetaData> ();
	__Local__831.AddUninitialized(3);
	FMovieSceneEvaluationMetaData::StaticStruct()->InitializeStruct(__Local__831.GetData(), 3);
	auto& __Local__832 = __Local__831[0];
	__Local__832.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__832.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__832.ActiveSequences.GetData(), 1);
	auto& __Local__833 = __Local__832.ActiveSequences[0];
	auto& __Local__834 = (*(AccessPrivateProperty<uint32 >(&(__Local__833), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__834 = 0;
	auto& __Local__835 = __Local__831[1];
	__Local__835.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__835.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__835.ActiveSequences.GetData(), 1);
	auto& __Local__836 = __Local__835.ActiveSequences[0];
	auto& __Local__837 = (*(AccessPrivateProperty<uint32 >(&(__Local__836), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__837 = 0;
	__Local__835.ActiveEntities = TArray<FMovieSceneOrderedEvaluationKey> ();
	__Local__835.ActiveEntities.AddUninitialized(4);
	FMovieSceneOrderedEvaluationKey::StaticStruct()->InitializeStruct(__Local__835.ActiveEntities.GetData(), 4);
	auto& __Local__838 = __Local__835.ActiveEntities[0];
	auto& __Local__839 = (*(AccessPrivateProperty<uint32 >(&(__Local__838.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__839 = 0;
	auto& __Local__840 = (*(AccessPrivateProperty<uint32 >(&(__Local__838.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__840 = 0;
	__Local__838.Key.SectionIndex = 0;
	__Local__838.EvaluationIndex = 3;
	auto& __Local__841 = __Local__835.ActiveEntities[1];
	auto& __Local__842 = (*(AccessPrivateProperty<uint32 >(&(__Local__841.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__842 = 0;
	auto& __Local__843 = (*(AccessPrivateProperty<uint32 >(&(__Local__841.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__843 = 0;
	__Local__841.EvaluationIndex = 2;
	auto& __Local__844 = __Local__835.ActiveEntities[2];
	auto& __Local__845 = (*(AccessPrivateProperty<uint32 >(&(__Local__844.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__845 = 0;
	auto& __Local__846 = (*(AccessPrivateProperty<uint32 >(&(__Local__844.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__846 = 1;
	__Local__844.Key.SectionIndex = 0;
	__Local__844.EvaluationIndex = 1;
	auto& __Local__847 = __Local__835.ActiveEntities[3];
	auto& __Local__848 = (*(AccessPrivateProperty<uint32 >(&(__Local__847.Key.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__848 = 0;
	auto& __Local__849 = (*(AccessPrivateProperty<uint32 >(&(__Local__847.Key.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__849 = 1;
	auto& __Local__850 = __Local__831[2];
	__Local__850.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__850.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__850.ActiveSequences.GetData(), 1);
	auto& __Local__851 = __Local__850.ActiveSequences[0];
	auto& __Local__852 = (*(AccessPrivateProperty<uint32 >(&(__Local__851), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__852 = 0;
	__Local__9->PrecompiledEvaluationTemplate.SequenceSignature = FGuid(0x3AFF7C54, 0xC64EFF38, 0x182AA280, 0x4A6AF0E0);
	auto& __Local__853 = (*(AccessPrivateProperty<FMovieSceneTemplateGenerationLedger >(&(__Local__9->PrecompiledEvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__TemplateLedger() )));
	auto& __Local__854 = (*(AccessPrivateProperty<uint32 >(&(__Local__853.LastTrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__854 = 1;
	__Local__853.TrackSignatureToTrackIdentifier = {};
	__Local__853.TrackSignatureToTrackIdentifier.Reserve(2);
	FScriptMapHelper __Local__855(CastChecked<UMapProperty>(__Local__204), &__Local__853.TrackSignatureToTrackIdentifier);
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__856 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__855.GetPairPtr(__Local__855.AddDefaultValue_Invalid_NeedsRehash());
	__Local__856.Key.A = -1744593486;
	__Local__856.Key.B = -1085298799;
	__Local__856.Key.C = 1185933241;
	__Local__856.Key.D = 1917672251;
	auto& __Local__857 = (*(AccessPrivateProperty<uint32 >(&(__Local__856.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__857 = 0;
	TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType& __Local__858 = *(TMap<FGuid,FMovieSceneTrackIdentifier>::ElementType*)__Local__855.GetPairPtr(__Local__855.AddDefaultValue_Invalid_NeedsRehash());
	__Local__858.Key.A = -2042508560;
	__Local__858.Key.B = 1900362949;
	__Local__858.Key.C = -1130769001;
	__Local__858.Key.D = -930774202;
	auto& __Local__859 = (*(AccessPrivateProperty<uint32 >(&(__Local__858.Value), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__859 = 1;
	__Local__855.Rehash();
	__Local__9->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__860 = (*(AccessPrivateProperty<FGuid >((__Local__9), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__860 = FGuid(0x3AFF7C54, 0xC64EFF38, 0x182AA280, 0x4A6AF0E0);
}
PRAGMA_ENABLE_OPTIMIZATION
void USettings_C__pf2302387670::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__861;
	SlotNames.Append(__Local__861);
}
void USettings_C__pf2302387670::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__862;
	__Local__862.Reserve(8);
	__Local__862.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(USettings_C__pf2302387670::StaticClass())->MiscConvertedSubobjects[1]));
	__Local__862.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(USettings_C__pf2302387670::StaticClass())->MiscConvertedSubobjects[2]));
	__Local__862.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(USettings_C__pf2302387670::StaticClass())->MiscConvertedSubobjects[3]));
	__Local__862.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(USettings_C__pf2302387670::StaticClass())->MiscConvertedSubobjects[4]));
	__Local__862.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(USettings_C__pf2302387670::StaticClass())->MiscConvertedSubobjects[5]));
	__Local__862.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(USettings_C__pf2302387670::StaticClass())->MiscConvertedSubobjects[6]));
	__Local__862.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(USettings_C__pf2302387670::StaticClass())->MiscConvertedSubobjects[7]));
	__Local__862.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(USettings_C__pf2302387670::StaticClass())->MiscConvertedSubobjects[8]));
	TArray<FDelegateRuntimeBinding>  __Local__863;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(USettings_C__pf2302387670::StaticClass())->MiscConvertedSubobjects[0]), __Local__862, __Local__863);
}
void USettings_C__pf2302387670::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void USettings_C__pf2302387670::bpf__ExecuteUbergraph_Settings__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 105:
			{
				__CurrentState = 106;
				break;
			}
		case 106:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.ScreenPercentage 100")), ((APlayerController*)nullptr));
			}
		case 107:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.ViewDistanceScale 100")), ((APlayerController*)nullptr));
			}
		case 108:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.PostProcessAAQuality 6")), ((APlayerController*)nullptr));
			}
		case 109:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.PostProcessQuality 3")), ((APlayerController*)nullptr));
			}
		case 110:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.ShadowQuality 3")), ((APlayerController*)nullptr));
			}
		case 111:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.TextureQuality 3")), ((APlayerController*)nullptr));
			}
		case 112:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.EffectsQuality 3")), ((APlayerController*)nullptr));
			}
		case 113:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.DetailMode 3")), ((APlayerController*)nullptr));
			}
		case 114:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.SkeletalMeshLODBias")), ((APlayerController*)nullptr));
			}
		case 115:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("FoliageQuality 3")), ((APlayerController*)nullptr));
			}
		case 116:
			{
				if (!bpv__MediumxActive__pfT)
				{
					__CurrentState = 118;
					break;
				}
			}
		case 117:
			{
				UUserWidget::PlayAnimation(bpv__Quality2__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.000000);
			}
		case 118:
			{
				if (!bpv__HighxActive__pfT)
				{
					__CurrentState = 120;
					break;
				}
			}
		case 119:
			{
				UUserWidget::PlayAnimation(bpv__Quality3__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.000000);
			}
		case 120:
			{
				if (!bpv__Lowxactive__pfT)
				{
					__CurrentState = 122;
					break;
				}
			}
		case 121:
			{
				UUserWidget::PlayAnimation(bpv__Quality1__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.000000);
			}
		case 122:
			{
				UUserWidget::PlayAnimation(bpv__Quality4__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
			}
		case 123:
			{
				bpv__Lowxactive__pfT = false;
			}
		case 124:
			{
				bpv__MediumxActive__pfT = false;
			}
		case 125:
			{
				bpv__HighxActive__pfT = false;
			}
		case 126:
			{
				bpv__BestxActive__pfT = true;
			}
		case 127:
			{
				if(::IsValid(bpv__SaverRef__pf))
				{
					FUnconvertedWrapper__UMenuSaver_C__pf1473906957(bpv__SaverRef__pf).GetRef__ResolutionScale__pf() = 3;
				}
			}
		case 128:
			{
				b0l__CallFunc_SaveGameToSlot_ReturnValue3__pf = UGameplayStatics::SaveGameToSlot(bpv__SaverRef__pf, FString(TEXT("Settings")), 0);
			}
		case 129:
			{
				if (!b0l__CallFunc_SaveGameToSlot_ReturnValue3__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 130:
			{
				UUserWidget::PlayAnimation(bpv__Saving__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
				__CurrentState = -1;
				break;
			}
		case 159:
			{
				__CurrentState = 106;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void USettings_C__pf2302387670::bpf__ExecuteUbergraph_Settings__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 79:
			{
				__CurrentState = 80;
				break;
			}
		case 80:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.ScreenPercentage 80")), ((APlayerController*)nullptr));
			}
		case 81:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.ViewDistanceScale 75")), ((APlayerController*)nullptr));
			}
		case 82:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.PostProcessAAQuality 4")), ((APlayerController*)nullptr));
			}
		case 83:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.PostProcessQuality 2")), ((APlayerController*)nullptr));
			}
		case 84:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.ShadowQuality 2")), ((APlayerController*)nullptr));
			}
		case 85:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.TextureQuality 2")), ((APlayerController*)nullptr));
			}
		case 86:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.EffectsQuality 2")), ((APlayerController*)nullptr));
			}
		case 87:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.DetailMode 2")), ((APlayerController*)nullptr));
			}
		case 88:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.SkeletalMeshLODBias")), ((APlayerController*)nullptr));
			}
		case 89:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("FoliageQuality 2")), ((APlayerController*)nullptr));
			}
		case 90:
			{
				if (!bpv__MediumxActive__pfT)
				{
					__CurrentState = 92;
					break;
				}
			}
		case 91:
			{
				UUserWidget::PlayAnimation(bpv__Quality2__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.000000);
			}
		case 92:
			{
				if (!bpv__Lowxactive__pfT)
				{
					__CurrentState = 94;
					break;
				}
			}
		case 93:
			{
				UUserWidget::PlayAnimation(bpv__Quality1__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.000000);
			}
		case 94:
			{
				if (!bpv__BestxActive__pfT)
				{
					__CurrentState = 96;
					break;
				}
			}
		case 95:
			{
				UUserWidget::PlayAnimation(bpv__Quality4__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.000000);
			}
		case 96:
			{
				UUserWidget::PlayAnimation(bpv__Quality3__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
			}
		case 97:
			{
				bpv__Lowxactive__pfT = false;
			}
		case 98:
			{
				bpv__MediumxActive__pfT = false;
			}
		case 99:
			{
				bpv__HighxActive__pfT = true;
			}
		case 100:
			{
				bpv__BestxActive__pfT = false;
			}
		case 101:
			{
				if(::IsValid(bpv__SaverRef__pf))
				{
					FUnconvertedWrapper__UMenuSaver_C__pf1473906957(bpv__SaverRef__pf).GetRef__ResolutionScale__pf() = 2;
				}
			}
		case 102:
			{
				b0l__CallFunc_SaveGameToSlot_ReturnValue2__pf = UGameplayStatics::SaveGameToSlot(bpv__SaverRef__pf, FString(TEXT("Settings")), 0);
			}
		case 103:
			{
				if (!b0l__CallFunc_SaveGameToSlot_ReturnValue2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 104:
			{
				UUserWidget::PlayAnimation(bpv__Saving__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
				__CurrentState = -1;
				break;
			}
		case 155:
			{
				__CurrentState = 80;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void USettings_C__pf2302387670::bpf__ExecuteUbergraph_Settings__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 53:
			{
				__CurrentState = 54;
				break;
			}
		case 54:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.ScreenPercentage 60")), ((APlayerController*)nullptr));
			}
		case 55:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.ViewDistanceScale 50")), ((APlayerController*)nullptr));
			}
		case 56:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.PostProcessAAQuality 2")), ((APlayerController*)nullptr));
			}
		case 57:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.PostProcessQuality 1")), ((APlayerController*)nullptr));
			}
		case 58:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.ShadowQuality 1")), ((APlayerController*)nullptr));
			}
		case 59:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.TextureQuality 1")), ((APlayerController*)nullptr));
			}
		case 60:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.EffectsQuality 1")), ((APlayerController*)nullptr));
			}
		case 61:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.DetailMode 1")), ((APlayerController*)nullptr));
			}
		case 62:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.SkeletalMeshLODBias")), ((APlayerController*)nullptr));
			}
		case 63:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("FoliageQuality 1")), ((APlayerController*)nullptr));
			}
		case 64:
			{
				if (!bpv__Lowxactive__pfT)
				{
					__CurrentState = 66;
					break;
				}
			}
		case 65:
			{
				UUserWidget::PlayAnimation(bpv__Quality1__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.000000);
			}
		case 66:
			{
				if (!bpv__HighxActive__pfT)
				{
					__CurrentState = 68;
					break;
				}
			}
		case 67:
			{
				UUserWidget::PlayAnimation(bpv__Quality3__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.000000);
			}
		case 68:
			{
				if (!bpv__BestxActive__pfT)
				{
					__CurrentState = 70;
					break;
				}
			}
		case 69:
			{
				UUserWidget::PlayAnimation(bpv__Quality4__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.000000);
			}
		case 70:
			{
				UUserWidget::PlayAnimation(bpv__Quality2__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
			}
		case 71:
			{
				bpv__Lowxactive__pfT = false;
			}
		case 72:
			{
				bpv__MediumxActive__pfT = true;
			}
		case 73:
			{
				bpv__HighxActive__pfT = false;
			}
		case 74:
			{
				bpv__BestxActive__pfT = false;
			}
		case 75:
			{
				if(::IsValid(bpv__SaverRef__pf))
				{
					FUnconvertedWrapper__UMenuSaver_C__pf1473906957(bpv__SaverRef__pf).GetRef__ResolutionScale__pf() = 1;
				}
			}
		case 76:
			{
				b0l__CallFunc_SaveGameToSlot_ReturnValue1__pf = UGameplayStatics::SaveGameToSlot(bpv__SaverRef__pf, FString(TEXT("Settings")), 0);
			}
		case 77:
			{
				if (!b0l__CallFunc_SaveGameToSlot_ReturnValue1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 78:
			{
				UUserWidget::PlayAnimation(bpv__Saving__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
				__CurrentState = -1;
				break;
			}
		case 158:
			{
				__CurrentState = 54;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void USettings_C__pf2302387670::bpf__ExecuteUbergraph_Settings__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 27:
			{
				__CurrentState = 28;
				break;
			}
		case 28:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.ScreenPercentage 40")), ((APlayerController*)nullptr));
			}
		case 29:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.ViewDistanceScale 25")), ((APlayerController*)nullptr));
			}
		case 30:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.PostProcessAAQuality 0")), ((APlayerController*)nullptr));
			}
		case 31:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.PostProcessQuality 0")), ((APlayerController*)nullptr));
			}
		case 32:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.ShadowQuality 0")), ((APlayerController*)nullptr));
			}
		case 33:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.TextureQuality 0")), ((APlayerController*)nullptr));
			}
		case 34:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("sg.EffectsQuality 0")), ((APlayerController*)nullptr));
			}
		case 35:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.DetailMode 0")), ((APlayerController*)nullptr));
			}
		case 36:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.SkeletalMeshLODBias")), ((APlayerController*)nullptr));
			}
		case 37:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("FoliageQuality 0")), ((APlayerController*)nullptr));
			}
		case 38:
			{
				if (!bpv__MediumxActive__pfT)
				{
					__CurrentState = 40;
					break;
				}
			}
		case 39:
			{
				UUserWidget::PlayAnimation(bpv__Quality2__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.000000);
			}
		case 40:
			{
				if (!bpv__HighxActive__pfT)
				{
					__CurrentState = 42;
					break;
				}
			}
		case 41:
			{
				UUserWidget::PlayAnimation(bpv__Quality3__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.000000);
			}
		case 42:
			{
				if (!bpv__BestxActive__pfT)
				{
					__CurrentState = 44;
					break;
				}
			}
		case 43:
			{
				UUserWidget::PlayAnimation(bpv__Quality4__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.000000);
			}
		case 44:
			{
				UUserWidget::PlayAnimation(bpv__Quality1__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
			}
		case 45:
			{
				bpv__Lowxactive__pfT = true;
			}
		case 46:
			{
				bpv__MediumxActive__pfT = false;
			}
		case 47:
			{
				bpv__HighxActive__pfT = false;
			}
		case 48:
			{
				bpv__BestxActive__pfT = false;
			}
		case 49:
			{
				if(::IsValid(bpv__SaverRef__pf))
				{
					FUnconvertedWrapper__UMenuSaver_C__pf1473906957(bpv__SaverRef__pf).GetRef__ResolutionScale__pf() = 0;
				}
			}
		case 50:
			{
				b0l__CallFunc_SaveGameToSlot_ReturnValue__pf = UGameplayStatics::SaveGameToSlot(bpv__SaverRef__pf, FString(TEXT("Settings")), 0);
			}
		case 51:
			{
				if (!b0l__CallFunc_SaveGameToSlot_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 52:
			{
				UUserWidget::PlayAnimation(bpv__Saving__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
				__CurrentState = -1;
				break;
			}
		case 157:
			{
				__CurrentState = 28;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void USettings_C__pf2302387670::bpf__ExecuteUbergraph_Settings__pf_4(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	USaveGame* bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue1__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	bool bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 3:
			{
				__CurrentState = 4;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue__pf->bShowMouseCursor = true;
				}
			}
		case 5:
			{
				bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf = UGameplayStatics::CreateSaveGameObject(CastChecked<UClass>(CastChecked<UDynamicClass>(USettings_C__pf2302387670::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
			}
		case 6:
			{
				bpv__SaverRef__pf = bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf;
			}
		case 7:
			{
				bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf = UGameplayStatics::DoesSaveGameExist(FString(TEXT("Settings")), 0);
			}
		case 8:
			{
				if (!bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf)
				{
					__CurrentState = 15;
					break;
				}
			}
		case 9:
			{
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf = UGameplayStatics::LoadGameFromSlot(FString(TEXT("Settings")), 0);
			}
		case 10:
			{
				b0l__K2Node_DynamicCast_AsMenu_Saver__pf = NoNativeCast<USaveGame>(CastChecked<UClass>(CastChecked<UDynamicClass>(USettings_C__pf2302387670::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsMenu_Saver__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 11:
			{
				int32  __Local__864 = 0;
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_Saver__pf)) ? (FUnconvertedWrapper__UMenuSaver_C__pf1473906957(b0l__K2Node_DynamicCast_AsMenu_Saver__pf).GetRef__ResolutionScale__pf()) : (__Local__864)), 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 12:
			{
				bpf__LowxEvent__pfT();
			}
		case 13:
			{
				bool  __Local__865 = false;
				if (!((::IsValid(b0l__K2Node_DynamicCast_AsMenu_Saver__pf)) ? (FUnconvertedWrapper__UMenuSaver_C__pf1473906957(b0l__K2Node_DynamicCast_AsMenu_Saver__pf).GetRef__FullscreenEnabled__pf()) : (__Local__865)))
				{
					__CurrentState = 22;
					break;
				}
			}
		case 14:
			{
				bpf__FullscreenxEvent__pfT();
				__CurrentState = -1;
				break;
			}
		case 15:
			{
				bpf__HighEvent__pf();
			}
		case 16:
			{
				bpf__FullscreenxEvent__pfT();
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				int32  __Local__866 = 0;
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue1__pf = UKismetMathLibrary::EqualEqual_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_Saver__pf)) ? (FUnconvertedWrapper__UMenuSaver_C__pf1473906957(b0l__K2Node_DynamicCast_AsMenu_Saver__pf).GetRef__ResolutionScale__pf()) : (__Local__866)), 1);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue1__pf)
				{
					__CurrentState = 19;
					break;
				}
			}
		case 18:
			{
				bpf__MediumxEvent__pfT();
				__CurrentState = 13;
				break;
			}
		case 19:
			{
				int32  __Local__867 = 0;
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsMenu_Saver__pf)) ? (FUnconvertedWrapper__UMenuSaver_C__pf1473906957(b0l__K2Node_DynamicCast_AsMenu_Saver__pf).GetRef__ResolutionScale__pf()) : (__Local__867)), 2);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 20:
			{
				bpf__HighEvent__pf();
				__CurrentState = 13;
				break;
			}
		case 21:
			{
				bpf__BestxEvent__pfT();
				__CurrentState = 13;
				break;
			}
		case 22:
			{
				bpf__WindowedxEvent__pfT();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void USettings_C__pf2302387670::bpf__ExecuteUbergraph_Settings__pf_5(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 142:
			{
				__CurrentState = 143;
				break;
			}
		case 143:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("fullscreen")), ((APlayerController*)nullptr));
			}
		case 144:
			{
				bool  __Local__868 = false;
				if (!((::IsValid(bpv__SaverRef__pf)) ? (FUnconvertedWrapper__UMenuSaver_C__pf1473906957(bpv__SaverRef__pf).GetRef__FullscreenEnabled__pf()) : (__Local__868)))
				{
					__CurrentState = -1;
					break;
				}
			}
		case 145:
			{
				if (!bpv__FullscreenxActive__pfT)
				{
					__CurrentState = 147;
					break;
				}
			}
		case 146:
			{
				UUserWidget::PlayAnimation(bpv__Window1__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.000000);
			}
		case 147:
			{
				bpv__FullscreenxActive__pfT = false;
			}
		case 148:
			{
				bpv__WindowedxActive__pfT = true;
			}
		case 149:
			{
				UUserWidget::PlayAnimation(bpv__Window2__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
			}
		case 150:
			{
				if(::IsValid(bpv__SaverRef__pf))
				{
					FUnconvertedWrapper__UMenuSaver_C__pf1473906957(bpv__SaverRef__pf).GetRef__FullscreenEnabled__pf() = false;
				}
			}
		case 151:
			{
				b0l__CallFunc_SaveGameToSlot_ReturnValue5__pf = UGameplayStatics::SaveGameToSlot(bpv__SaverRef__pf, FString(TEXT("Settings")), 0);
			}
		case 152:
			{
				if (!b0l__CallFunc_SaveGameToSlot_ReturnValue5__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 153:
			{
				UUserWidget::PlayAnimation(bpv__Saving__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
				__CurrentState = -1;
				break;
			}
		case 160:
			{
				__CurrentState = 143;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void USettings_C__pf2302387670::bpf__ExecuteUbergraph_Settings__pf_6(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 131:
			{
				__CurrentState = 132;
				break;
			}
		case 132:
			{
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("fullscreen")), ((APlayerController*)nullptr));
			}
		case 133:
			{
				if (!bpv__WindowedxActive__pfT)
				{
					__CurrentState = 135;
					break;
				}
			}
		case 134:
			{
				UUserWidget::PlayAnimation(bpv__Window2__pf, 0.000000, 1, EUMGSequencePlayMode::Reverse, 1.000000);
			}
		case 135:
			{
				bpv__FullscreenxActive__pfT = true;
			}
		case 136:
			{
				bpv__WindowedxActive__pfT = false;
			}
		case 137:
			{
				UUserWidget::PlayAnimation(bpv__Window1__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
			}
		case 138:
			{
				if(::IsValid(bpv__SaverRef__pf))
				{
					FUnconvertedWrapper__UMenuSaver_C__pf1473906957(bpv__SaverRef__pf).GetRef__FullscreenEnabled__pf() = true;
				}
			}
		case 139:
			{
				b0l__CallFunc_SaveGameToSlot_ReturnValue4__pf = UGameplayStatics::SaveGameToSlot(bpv__SaverRef__pf, FString(TEXT("Settings")), 0);
			}
		case 140:
			{
				if (!b0l__CallFunc_SaveGameToSlot_ReturnValue4__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 141:
			{
				UUserWidget::PlayAnimation(bpv__Saving__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
				__CurrentState = -1;
				break;
			}
		case 156:
			{
				__CurrentState = 133;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void USettings_C__pf2302387670::bpf__ExecuteUbergraph_Settings__pf_7(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_SetGamePaused_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue1__pf{};
	check(bpp__EntryPoint__pf == 154);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__MainxMenu__pfT))
	{
		FUnconvertedWrapper__UMainMenu_C__pf2302387670(bpv__MainxMenu__pfT).GetRef__MenuxCursorxEnable__pfTT() = true;
	}
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__MainxMenu__pfT))
	{
		FUnconvertedWrapper__UMainMenu_C__pf2302387670(bpv__MainxMenu__pfT).bpf__Enabled__pf();
	}
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue1__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue1__pf))
	{
		bpfv__CallFunc_GetPlayerController_ReturnValue1__pf->bShowMouseCursor = false;
	}
	if(::IsValid(bpv__MainxMenu__pfT))
	{
		FUnconvertedWrapper__UMainMenu_C__pf2302387670(bpv__MainxMenu__pfT).GetRef__SettingsxonxViewportx__pfTTzy() = false;
	}
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_SetGamePaused_ReturnValue__pf = UGameplayStatics::SetGamePaused(this, false);
	RemoveFromParent();
	return; // KCST_GotoReturn
}
void USettings_C__pf2302387670::bpf__WindowedxEvent__pfT()
{
	bpf__ExecuteUbergraph_Settings__pf_5(160);
}
void USettings_C__pf2302387670::bpf__BestxEvent__pfT()
{
	bpf__ExecuteUbergraph_Settings__pf_0(159);
}
void USettings_C__pf2302387670::bpf__MediumxEvent__pfT()
{
	bpf__ExecuteUbergraph_Settings__pf_2(158);
}
void USettings_C__pf2302387670::bpf__LowxEvent__pfT()
{
	bpf__ExecuteUbergraph_Settings__pf_3(157);
}
void USettings_C__pf2302387670::bpf__FullscreenxEvent__pfT()
{
	bpf__ExecuteUbergraph_Settings__pf_6(156);
}
void USettings_C__pf2302387670::bpf__HighEvent__pf()
{
	bpf__ExecuteUbergraph_Settings__pf_1(155);
}
void USettings_C__pf2302387670::bpf__BndEvt__Button_72_K2Node_ComponentBoundEvent_145_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Settings__pf_7(154);
}
void USettings_C__pf2302387670::bpf__BndEvt__Windowed_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Settings__pf_5(142);
}
void USettings_C__pf2302387670::bpf__BndEvt__Fullscreen_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Settings__pf_6(131);
}
void USettings_C__pf2302387670::bpf__BndEvt__Best_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Settings__pf_0(105);
}
void USettings_C__pf2302387670::bpf__BndEvt__High_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Settings__pf_1(79);
}
void USettings_C__pf2302387670::bpf__BndEvt__Medium_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Settings__pf_2(53);
}
void USettings_C__pf2302387670::bpf__BndEvt__Low_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Settings__pf_3(27);
}
void USettings_C__pf2302387670::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_Settings__pf_4(3);
}
FSlateBrush  USettings_C__pf2302387670::bpf__GetBrush_0__pf()
{
	FSlateBrush bpp__ReturnValue__pf{};
	auto __Local__869 = FSlateBrush{};
	bpp__ReturnValue__pf = __Local__869;
	return bpp__ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void USettings_C__pf2302387670::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/GameMenu/MainMenuImageResources/arrow_arrow.arrow_arrow 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/GameMenu/Savedata/MenuSaver.MenuSaver_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void USettings_C__pf2302387670::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.CanvasPanel 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.HorizontalBox 
		{21, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MenuSaver_C /Game/GameMenu/Savedata/MenuSaver.Default__MenuSaver_C 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/GameMenu/MainMenu.MainMenu_C 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MainMenu_C /Game/GameMenu/MainMenu.Default__MainMenu_C 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{29, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetAnimation 
		{31, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{33, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.CircularThrobber 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__USettings_C__pf2302387670
{
	FRegisterHelper__USettings_C__pf2302387670()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/GameMenu/Settings"), &USettings_C__pf2302387670::__StaticDependenciesAssets);
	}
	static FRegisterHelper__USettings_C__pf2302387670 Instance;
};
FRegisterHelper__USettings_C__pf2302387670 FRegisterHelper__USettings_C__pf2302387670::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
