#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Creative.CreativeAbilitySystemComponent.UpdateGridGhostBuildingLocation
struct UCreativeAbilitySystemComponent_UpdateGridGhostBuildingLocation_Params
{
	float                                              X;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.UpdateGhostBuildingTransform
struct UCreativeAbilitySystemComponent_UpdateGhostBuildingTransform_Params
{
};

// Function Creative.CreativeAbilitySystemComponent.SetSnapTargetTransform
struct UCreativeAbilitySystemComponent_SetSnapTargetTransform_Params
{
	struct FTransform                                  SnapTargetTransform;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.SetOverrideBuild
struct UCreativeAbilitySystemComponent_SetOverrideBuild_Params
{
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformScale
struct UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformScale_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformRotation
struct UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformRotation_Params
{
	float                                              Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformLocation
struct UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformLocation_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.LuaGhostBuildingInstaUpdate
struct UCreativeAbilitySystemComponent_LuaGhostBuildingInstaUpdate_Params
{
};

// Function Creative.CreativeAbilitySystemComponent.GetSnappedLocAxisZ
struct UCreativeAbilitySystemComponent_GetSnappedLocAxisZ_Params
{
	float                                              Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Base;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.GetSnappedLocAxis
struct UCreativeAbilitySystemComponent_GetSnappedLocAxis_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AxisType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.GetSetupBuildingID
struct UCreativeAbilitySystemComponent_GetSetupBuildingID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.GetPlayerController
struct UCreativeAbilitySystemComponent_GetPlayerController_Params
{
	class ASTExtraPlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.GetLuaSnapTargetTransform
struct UCreativeAbilitySystemComponent_GetLuaSnapTargetTransform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.GetLuaInstanceBoundingBox
struct UCreativeAbilitySystemComponent_GetLuaInstanceBoundingBox_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.GetGhostBuildingTransform
struct UCreativeAbilitySystemComponent_GetGhostBuildingTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.GetBuildingInstanceID
struct UCreativeAbilitySystemComponent_GetBuildingInstanceID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeAbilitySystemComponent.GetBuildDistance
struct UCreativeAbilitySystemComponent_GetBuildDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAbilitySystemComponent.ClearOverrideBuild
struct UCreativeAbilitySystemComponent_ClearOverrideBuild_Params
{
};

// Function Creative.CreativeModeActorInteractionComponent.SortCanEditParamsObjs
struct UCreativeModeActorInteractionComponent_SortCanEditParamsObjs_Params
{
};

// Function Creative.CreativeModeActorInteractionComponent.SetCrossHairTransformObjInstanceID
struct UCreativeModeActorInteractionComponent_SetCrossHairTransformObjInstanceID_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeActorInteractionComponent.SetCrossHairSelectedObjInstanceID
struct UCreativeModeActorInteractionComponent_SetCrossHairSelectedObjInstanceID_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeActorInteractionComponent.SetCrossHairPickActor
struct UCreativeModeActorInteractionComponent_SetCrossHairPickActor_Params
{
	class AActor*                                      PickActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckIntervalCfg
struct UCreativeModeActorInteractionComponent_GetSectorCheckIntervalCfg_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckDistance
struct UCreativeModeActorInteractionComponent_GetSectorCheckDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckAngle
struct UCreativeModeActorInteractionComponent_GetSectorCheckAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.GetPlayerHalfHeight
struct UCreativeModeActorInteractionComponent_GetPlayerHalfHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.GetPlayerController
struct UCreativeModeActorInteractionComponent_GetPlayerController_Params
{
	class ASTExtraPlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.GetCrossHairTransformDistanceCfg
struct UCreativeModeActorInteractionComponent_GetCrossHairTransformDistanceCfg_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.GetCrossHairPickDistanceCfg
struct UCreativeModeActorInteractionComponent_GetCrossHairPickDistanceCfg_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckIntervalCfg
struct UCreativeModeActorInteractionComponent_GetCrossHairCheckIntervalCfg_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckDistanceCfg
struct UCreativeModeActorInteractionComponent_GetCrossHairCheckDistanceCfg_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeActorInteractionComponent.ClearCanEditParamsObjs
struct UCreativeModeActorInteractionComponent_ClearCanEditParamsObjs_Params
{
};

// Function Creative.CreativeModeActorInteractionComponent.AddCanEditObject
struct UCreativeModeActorInteractionComponent_AddCanEditObject_Params
{
	class UObject*                                     uCanEditObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAdaptiveSchedulManager.SetObjectProfile
struct UCreativeAdaptiveSchedulManager_SetObjectProfile_Params
{
	bool                                               bOpen;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAdaptiveSchedulManager.SetLuaProfile
struct UCreativeAdaptiveSchedulManager_SetLuaProfile_Params
{
	bool                                               bOpen;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAdaptiveSchedulManager.RecordFunctionStart
struct UCreativeAdaptiveSchedulManager_RecordFunctionStart_Params
{
	struct FString                                     ClassName;                                                // (Parm, ZeroConstructor)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAdaptiveSchedulManager.RecordFunctionEnd
struct UCreativeAdaptiveSchedulManager_RecordFunctionEnd_Params
{
	struct FString                                     ClassName;                                                // (Parm, ZeroConstructor)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	int                                                Cycles;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAdaptiveSchedulManager.LuaPath2Tag
struct UCreativeAdaptiveSchedulManager_LuaPath2Tag_Params
{
	struct FString                                     luaPath;                                                  // (Parm, ZeroConstructor)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAdaptiveSchedulManager.LogOutputObjectMemoryInfo
struct UCreativeAdaptiveSchedulManager_LogOutputObjectMemoryInfo_Params
{
	bool                                               bClear;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAdaptiveSchedulManager.LogOutputLuaFunctionCallInfo
struct UCreativeAdaptiveSchedulManager_LogOutputLuaFunctionCallInfo_Params
{
	bool                                               bClear;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAdaptiveSchedulManager.LogoutLuaRecord
struct UCreativeAdaptiveSchedulManager_LogoutLuaRecord_Params
{
	TMap<int, int64_t>                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeAdaptiveSchedulManager.LLMEnabled
struct UCreativeAdaptiveSchedulManager_LLMEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAdaptiveSchedulManager.InitTagIfNotExist
struct UCreativeAdaptiveSchedulManager_InitTagIfNotExist_Params
{
	struct FString                                     TagName;                                                  // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAdaptiveSchedulManager.InitNewLuaPath2Tag
struct UCreativeAdaptiveSchedulManager_InitNewLuaPath2Tag_Params
{
	struct FString                                     luaPath;                                                  // (Parm, ZeroConstructor)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAdaptiveSchedulManager.GetPureLuaUsedBytes
struct UCreativeAdaptiveSchedulManager_GetPureLuaUsedBytes_Params
{
	uint64_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAdaptiveSchedulManager.GetLuaUsedBytes
struct UCreativeAdaptiveSchedulManager_GetLuaUsedBytes_Params
{
	uint64_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAdaptiveSchedulManager.Get
struct UCreativeAdaptiveSchedulManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeAdaptiveSchedulManager*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAdaptiveSchedulManager.AfterDead
struct UCreativeAdaptiveSchedulManager_AfterDead_Params
{
	int                                                SpecType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeLuaSignalObjectBase.TryBeginPlay
struct UCreativeLuaSignalObjectBase_TryBeginPlay_Params
{
};

// Function Creative.CreativeLuaSignalObjectBase.SetLuaFilePath
struct UCreativeLuaSignalObjectBase_SetLuaFilePath_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
};

// Function Creative.CreativeLuaSignalObjectBase.RemoveCommonEvent
struct UCreativeLuaSignalObjectBase_RemoveCommonEvent_Params
{
	int                                                EventHandle;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeLuaSignalObjectBase.ReceivePostBeginPlay
struct UCreativeLuaSignalObjectBase_ReceivePostBeginPlay_Params
{
};

// Function Creative.CreativeLuaSignalObjectBase.ReceiveBeginPlay
struct UCreativeLuaSignalObjectBase_ReceiveBeginPlay_Params
{
};

// Function Creative.CreativeLuaSignalObjectBase.ClearAllCommonEvent
struct UCreativeLuaSignalObjectBase_ClearAllCommonEvent_Params
{
};

// Function Creative.CreativeLuaSignalObjectBase.AddCommonEvent
struct UCreativeLuaSignalObjectBase_AddCommonEvent_Params
{
	struct FString                                     EventType;                                                // (Parm, ZeroConstructor)
	struct FString                                     EventID;                                                  // (Parm, ZeroConstructor)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function Creative.CreativeApiObject.SetModuleName
struct UCreativeApiObject_SetModuleName_Params
{
	struct FString                                     NewName;                                                  // (Parm, ZeroConstructor)
};

// Function Creative.CreativeApiObject.GetModuleName
struct UCreativeApiObject_GetModuleName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeAssetManager.ReceiveOnGameStateBeginPlay
struct UCreativeAssetManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAssetManager.ReceiveInitAssetInfo
struct UCreativeAssetManager_ReceiveInitAssetInfo_Params
{
	int                                                AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAssetManager.OnGameStateBeginPlay
struct UCreativeAssetManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeAssetManager.GetObbyMeshPath
struct UCreativeAssetManager_GetObbyMeshPath_Params
{
	int                                                AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeAssetManager.GetMaterialPath
struct UCreativeAssetManager_GetMaterialPath_Params
{
	int                                                MaterialID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeAssetManager.Get
struct UCreativeAssetManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeAssetManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeAssetManager.AddAssetInfo
struct UCreativeAssetManager_AddAssetInfo_Params
{
	int                                                AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FCreativeAssetInfo                          AssetInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Creative.CreativeAutoGenComponent.GetNodeSegmentContent
struct UCreativeAutoGenComponent_GetNodeSegmentContent_Params
{
	struct FCreativeAutoGenItemDataSegment             Segment;                                                  // (Parm, OutParm)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeAutoGenComponent.AddInstanceDataContent
struct UCreativeAutoGenComponent_AddInstanceDataContent_Params
{
	struct FCreativeAutoGenDataSegment                 Segment;                                                  // (Parm, OutParm)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBackpackUtils.ResCanAddToBackpackNum
struct UCreativeModeBackpackUtils_ResCanAddToBackpackNum_Params
{
	class UBackpackComponent*                          BackpackComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                resID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBackpackUtils.GetItemMaxCount
struct UCreativeModeBackpackUtils_GetItemMaxCount_Params
{
	class UBackpackComponent*                          BackpackComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                resID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBackpackUtils.AddAIAvatarItem
struct UCreativeModeBackpackUtils_AddAIAvatarItem_Params
{
	class UBackpackComponent*                          BackpackComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Pattern;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeBinaryDataManager.SetInitBinaryDataSize
struct UCreativeBinaryDataManager_SetInitBinaryDataSize_Params
{
	uint32_t                                           DataSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeBinaryDataManager.ReceiveOnPreLoadMap
struct UCreativeBinaryDataManager_ReceiveOnPreLoadMap_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function Creative.CreativeBinaryDataManager.ReceiveOnPostSetLuaEventBridgeInstance
struct UCreativeBinaryDataManager_ReceiveOnPostSetLuaEventBridgeInstance_Params
{
};

// Function Creative.CreativeBinaryDataManager.ReceiveOnPostLoadMapWithWorld
struct UCreativeBinaryDataManager_ReceiveOnPostLoadMapWithWorld_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeBinaryDataManager.OnRep_InitBinaryDataSize
struct UCreativeBinaryDataManager_OnRep_InitBinaryDataSize_Params
{
};

// Function Creative.CreativeBinaryDataManager.OnPreLoadMap
struct UCreativeBinaryDataManager_OnPreLoadMap_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function Creative.CreativeBinaryDataManager.OnPostSetLuaEventBridgeInstance
struct UCreativeBinaryDataManager_OnPostSetLuaEventBridgeInstance_Params
{
};

// Function Creative.CreativeBinaryDataManager.OnPostLoadMapWithWorld
struct UCreativeBinaryDataManager_OnPostLoadMapWithWorld_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeBinaryDataManager.GetInitBinaryDataSize
struct UCreativeBinaryDataManager_GetInitBinaryDataSize_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeBinaryDataManager.Get
struct UCreativeBinaryDataManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeBinaryDataManager*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeBlockyLuaManager.SetRTLOffsetY
struct UCreativeBlockyLuaManager_SetRTLOffsetY_Params
{
	float                                              Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeBlockyLuaManager.SetLTROffsetY
struct UCreativeBlockyLuaManager_SetLTROffsetY_Params
{
	float                                              Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeBlockyLuaManager.SetFontSize
struct UCreativeBlockyLuaManager_SetFontSize_Params
{
	int                                                FontSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeBlockyLuaManager.SetBlockIdFromSlotString
struct UCreativeBlockyLuaManager_SetBlockIdFromSlotString_Params
{
	struct FBlockySlotString                           SlotString;                                               // (Parm, OutParm)
	struct FString                                     BlockID;                                                  // (Parm, ZeroConstructor)
};

// Function Creative.CreativeBlockyLuaManager.ReturnPresetDescsToCache
struct UCreativeBlockyLuaManager_ReturnPresetDescsToCache_Params
{
	TArray<class UPresetDesc*>                         ReturnDescs;                                              // (Parm, ZeroConstructor)
};

// Function Creative.CreativeBlockyLuaManager.RemoveDynamicPresetDescs
struct UCreativeBlockyLuaManager_RemoveDynamicPresetDescs_Params
{
	TArray<class UPresetDesc*>                         PresetDescs;                                              // (Parm, ZeroConstructor)
};

// Function Creative.CreativeBlockyLuaManager.RegisterNameCache
struct UCreativeBlockyLuaManager_RegisterNameCache_Params
{
	class UBlockyGraphData*                            GraphData;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeBlockyLuaManager.RefreshBlockyFont
struct UCreativeBlockyLuaManager_RefreshBlockyFont_Params
{
	struct FSlateFontInfo                              DefaultFont;                                              // (Parm, OutParm)
};

// Function Creative.CreativeBlockyLuaManager.ReceivePresetFromCustomSelection
struct UCreativeBlockyLuaManager_ReceivePresetFromCustomSelection_Params
{
	class UObjectDesc*                                 Desc;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeBlockyLuaManager.ReceiveOpenGuide
struct UCreativeBlockyLuaManager_ReceiveOpenGuide_Params
{
};

// Function Creative.CreativeBlockyLuaManager.ReceiveOnGameStateBeginPlay
struct UCreativeBlockyLuaManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeBlockyLuaManager.ReceivedGetLocalizeResStrHandleFailed
struct UCreativeBlockyLuaManager_ReceivedGetLocalizeResStrHandleFailed_Params
{
	struct FString                                     IdOrStr;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeBlockyLuaManager.ReceiveCheckStringValidFunction
struct UCreativeBlockyLuaManager_ReceiveCheckStringValidFunction_Params
{
	struct FString                                     CheckString;                                              // (Parm, ZeroConstructor)
	struct FCheckStringHandleData                      Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Creative.CreativeBlockyLuaManager.ReceiveCheckStringResult
struct UCreativeBlockyLuaManager_ReceiveCheckStringResult_Params
{
	bool                                               Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ValidString;                                              // (Parm, ZeroConstructor)
	struct FCheckStringHandleData                      Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Creative.CreativeBlockyLuaManager.OnReceiveMessageData
struct UCreativeBlockyLuaManager_OnReceiveMessageData_Params
{
	TArray<struct FMessageDataWrapper>                 MessageDatas;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeBlockyLuaManager.OnReceiveInitDisableFunc
struct UCreativeBlockyLuaManager_OnReceiveInitDisableFunc_Params
{
};

// Function Creative.CreativeBlockyLuaManager.OnInitBlockyLuaConfig
struct UCreativeBlockyLuaManager_OnInitBlockyLuaConfig_Params
{
};

// Function Creative.CreativeBlockyLuaManager.OnGameTypePreChanged
struct UCreativeBlockyLuaManager_OnGameTypePreChanged_Params
{
	unsigned char                                      LastGameType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CurrentGameType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeBlockyLuaManager.OnGameStateBeginPlay
struct UCreativeBlockyLuaManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeBlockyLuaManager.IsLTRLanguage
struct UCreativeBlockyLuaManager_IsLTRLanguage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeBlockyLuaManager.IsLTR
struct UCreativeBlockyLuaManager_IsLTR_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeBlockyLuaManager.InitDisableFunction
struct UCreativeBlockyLuaManager_InitDisableFunction_Params
{
	TArray<struct FString>                             funcs;                                                    // (Parm, ZeroConstructor)
};

// Function Creative.CreativeBlockyLuaManager.GetPresetDescs
struct UCreativeBlockyLuaManager_GetPresetDescs_Params
{
	struct FString                                     TypeName;                                                 // (Parm, OutParm, ZeroConstructor)
	int                                                GetCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPresetDesc*>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeBlockyLuaManager.GetPresetDesc
struct UCreativeBlockyLuaManager_GetPresetDesc_Params
{
	struct FString                                     TypeName;                                                 // (Parm, OutParm, ZeroConstructor)
	class UPresetDesc*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeBlockyLuaManager.GetGraphDataObjectFormContent
struct UCreativeBlockyLuaManager_GetGraphDataObjectFormContent_Params
{
	TArray<unsigned char>                              GrapbAstContent;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              GlobalVarAstContent;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               CallLoadFinish;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UBlockyGraphData*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeBlockyLuaManager.GetDynamicPresetDescsByKey
struct UCreativeBlockyLuaManager_GetDynamicPresetDescsByKey_Params
{
	struct FString                                     KeyName;                                                  // (Parm, ZeroConstructor)
	class UPresetDesc*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeBlockyLuaManager.GetBlockyLuaConfig
struct UCreativeBlockyLuaManager_GetBlockyLuaConfig_Params
{
	class UBlockyLuaConfig*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeBlockyLuaManager.GetBlockNameByStr
struct UCreativeBlockyLuaManager_GetBlockNameByStr_Params
{
	struct FString                                     BlockyId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeBlockyLuaManager.GetBlockIdFromSlotString
struct UCreativeBlockyLuaManager_GetBlockIdFromSlotString_Params
{
	struct FBlockySlotString                           SlotString;                                               // (Parm, OutParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeBlockyLuaManager.Get
struct UCreativeBlockyLuaManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeBlockyLuaManager*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeBlockyLuaManager.GenerateLuaCodeFormJson
struct UCreativeBlockyLuaManager_GenerateLuaCodeFormJson_Params
{
	struct FString                                     JsonText;                                                 // (Parm, ZeroConstructor)
	struct FString                                     GlobalVarJsonText;                                        // (Parm, ZeroConstructor)
	bool                                               GenGlobalVarLua;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeBlockyLuaManager.GenerateLuaCodeFormContent
struct UCreativeBlockyLuaManager_GenerateLuaCodeFormContent_Params
{
	TArray<unsigned char>                              GrapbAstContent;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              GlobalVarAstContent;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               GenGlobalVarLua;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CallLoadFinish;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeBlockyLuaManager.ClearNameIndexCache
struct UCreativeBlockyLuaManager_ClearNameIndexCache_Params
{
};

// Function Creative.CreativeBlockyLuaManager.ClearDynamicPresetDescs
struct UCreativeBlockyLuaManager_ClearDynamicPresetDescs_Params
{
	TArray<class UPresetDesc*>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeBlockyLuaManager.ClearCacheObjects
struct UCreativeBlockyLuaManager_ClearCacheObjects_Params
{
	bool                                               CallBeginDestroy;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeBlockyLuaManager.ClearBlockyLuaHotfixUtility
struct UCreativeBlockyLuaManager_ClearBlockyLuaHotfixUtility_Params
{
};

// Function Creative.CreativeBlockyLuaManager.BlockyluaPresetSoundFunctionHandle
struct UCreativeBlockyLuaManager_BlockyluaPresetSoundFunctionHandle_Params
{
	struct FString                                     SoundPath;                                                // (Parm, ZeroConstructor)
};

// Function Creative.CreativeBlockyLuaManager.BlockyluaModifyTipHandle
struct UCreativeBlockyLuaManager_BlockyluaModifyTipHandle_Params
{
	struct FText                                       OriginalTip;                                              // (Parm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeBlockyLuaManager.BlockyluaMessageDataHandle
struct UCreativeBlockyLuaManager_BlockyluaMessageDataHandle_Params
{
	TArray<struct FMessageDataStruct>                  MessageDatas;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeBlockyLuaManager.BlockyluaGetLocalizeResStrHandle
struct UCreativeBlockyLuaManager_BlockyluaGetLocalizeResStrHandle_Params
{
	struct FString                                     IdOrStr;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeBlockyLuaManager.BlockyluaCustomInputHandle
struct UCreativeBlockyLuaManager_BlockyluaCustomInputHandle_Params
{
	struct FString                                     CustomClickType;                                          // (Parm, ZeroConstructor)
	class UObjectDesc*                                 Desc;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObjectDesc*>                         followers;                                                // (Parm, ZeroConstructor)
};

// Function Creative.CreativeBlockyLuaManager.BlockyluaCheckShowPresetFitlerBtnHandle
struct UCreativeBlockyLuaManager_BlockyluaCheckShowPresetFitlerBtnHandle_Params
{
	struct FString                                     TypeName;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeBlockyLuaManager.BlockyluaCheckShowCustomInputHandle
struct UCreativeBlockyLuaManager_BlockyluaCheckShowCustomInputHandle_Params
{
	struct FString                                     CustomClickType;                                          // (Parm, ZeroConstructor)
	class UObjectDesc*                                 Desc;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObjectDesc*>                         followers;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeBlockyLuaManager.BindBlockyLuaStubFunc
struct UCreativeBlockyLuaManager_BindBlockyLuaStubFunc_Params
{
	struct FString                                     BindFuncName;                                             // (Parm, ZeroConstructor)
	struct FString                                     OverrdeFuncName;                                          // (Parm, ZeroConstructor)
};

// Function Creative.CreativeBlockyLuaManager.AddDynamicPresetDescs
struct UCreativeBlockyLuaManager_AddDynamicPresetDescs_Params
{
	TArray<class UPresetDesc*>                         PresetDescs;                                              // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.ZSTDDecompressData
struct UCreativeModeBlueprintLibrary_ZSTDDecompressData_Params
{
	TArray<unsigned char>                              CompressedData;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              DecompressedData;                                         // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.ZSTDCompressData
struct UCreativeModeBlueprintLibrary_ZSTDCompressData_Params
{
	TArray<unsigned char>                              UncompressedData;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              CompressedData;                                           // (Parm, OutParm, ZeroConstructor)
	int                                                CompressionLevel;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.WidgetAbsoluteSizeToLocalSize
struct UCreativeModeBlueprintLibrary_WidgetAbsoluteSizeToLocalSize_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   AbsoluteSize;                                             // (Parm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.UObjSnapshot
struct UCreativeModeBlueprintLibrary_UObjSnapshot_Params
{
	class UWorld*                                      MyWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.TransformRevert
struct UCreativeModeBlueprintLibrary_TransformRevert_Params
{
	struct FTransform                                  TransformRelative;                                        // (Parm, OutParm, IsPlainOldData)
	struct FTransform                                  TransformB;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.TransformMultiplyBy
struct UCreativeModeBlueprintLibrary_TransformMultiplyBy_Params
{
	struct FTransform                                  Source;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FTransform                                  M;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.TransformBounds
struct UCreativeModeBlueprintLibrary_TransformBounds_Params
{
	struct FBoxSphereBounds                            Bounds;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FTransform                                  M;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.ToMilliseconds64
struct UCreativeModeBlueprintLibrary_ToMilliseconds64_Params
{
	uint64_t                                           Cycles;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.TakeSnapshot
struct UCreativeModeBlueprintLibrary_TakeSnapshot_Params
{
	class UWidget*                                     WindowWidget;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                X1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                x2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                y2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               bUseCrop;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFillRect;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.SynchronizePropertiesWidget
struct UCreativeModeBlueprintLibrary_SynchronizePropertiesWidget_Params
{
	class UWidget*                                     TargetWidget;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.ShouldCreatePhysicsState
struct UCreativeModeBlueprintLibrary_ShouldCreatePhysicsState_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.SetWorldGravityZ
struct UCreativeModeBlueprintLibrary_SetWorldGravityZ_Params
{
	float                                              GravityZ;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.SetWidgetVisiblePass
struct UCreativeModeBlueprintLibrary_SetWidgetVisiblePass_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bVisiblePass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.SetStaticMeshMobility
struct UCreativeModeBlueprintLibrary_SetStaticMeshMobility_Params
{
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    NewMobility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.SetSpeedOverLimit
struct UCreativeModeBlueprintLibrary_SetSpeedOverLimit_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.SetRelativeCamRotation
struct UCreativeModeBlueprintLibrary_SetRelativeCamRotation_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.SetParticleCullingDistance
struct UCreativeModeBlueprintLibrary_SetParticleCullingDistance_Params
{
	class UParticleSystemComponent*                    ParticleSystemComponent;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.SetInstanceValue
struct UCreativeModeBlueprintLibrary_SetInstanceValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.SetCommandLineValue
struct UCreativeModeBlueprintLibrary_SetCommandLineValue_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     NewValue;                                                 // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.SetCollisionMobility
struct UCreativeModeBlueprintLibrary_SetCollisionMobility_Params
{
	class UShapeComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    NewMobility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.SaveStringToFile
struct UCreativeModeBlueprintLibrary_SaveStringToFile_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.SaveAssetStringToFile
struct UCreativeModeBlueprintLibrary_SaveAssetStringToFile_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.RotatorCrossInverse
struct UCreativeModeBlueprintLibrary_RotatorCrossInverse_Params
{
	struct FRotator                                    Rot1;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rot2;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.RotatorCross
struct UCreativeModeBlueprintLibrary_RotatorCross_Params
{
	struct FRotator                                    Rot1;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rot2;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.Rotation2Vector
struct UCreativeModeBlueprintLibrary_Rotation2Vector_Params
{
	struct FRotator                                    Rotator;                                                  // (Parm, IsPlainOldData)
	int                                                Axis;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.RenameObject
struct UCreativeModeBlueprintLibrary_RenameObject_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NewName;                                                  // (ConstParm, Parm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.RecreatePhysicsState
struct UCreativeModeBlueprintLibrary_RecreatePhysicsState_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.QuatCrossInverse
struct UCreativeModeBlueprintLibrary_QuatCrossInverse_Params
{
	struct FQuat                                       Quat1;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FQuat                                       Quat2;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.QuatCross
struct UCreativeModeBlueprintLibrary_QuatCross_Params
{
	struct FQuat                                       Quat1;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FQuat                                       Quat2;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.ProjectSavedDir
struct UCreativeModeBlueprintLibrary_ProjectSavedDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.ProjectContentDir
struct UCreativeModeBlueprintLibrary_ProjectContentDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.PopulateParticleProperties
struct UCreativeModeBlueprintLibrary_PopulateParticleProperties_Params
{
	class UParticleSystemComponent*                    ParticleSystemComponent;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.MinAreaRectangle
struct UCreativeModeBlueprintLibrary_MinAreaRectangle_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             InPoints;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     SampleSurfaceNormal;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutRectCenter;                                            // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    OutRectRotation;                                          // (Parm, OutParm, IsPlainOldData)
	float                                              OutRectLengthX;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutRectLengthY;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDraw;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        PolyVertIndices;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.MD5HashByteArray
struct UCreativeModeBlueprintLibrary_MD5HashByteArray_Params
{
	TArray<unsigned char>                              inArray;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.MD5HashAnsiString
struct UCreativeModeBlueprintLibrary_MD5HashAnsiString_Params
{
	struct FString                                     str;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.Lz4DecompressData
struct UCreativeModeBlueprintLibrary_Lz4DecompressData_Params
{
	TArray<unsigned char>                              CompressedData;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              DecompressedData;                                         // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.Lz4CompressData
struct UCreativeModeBlueprintLibrary_Lz4CompressData_Params
{
	TArray<unsigned char>                              UncompressedData;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              CompressedData;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.LoadFileToStringByFullPath
struct UCreativeModeBlueprintLibrary_LoadFileToStringByFullPath_Params
{
	struct FString                                     FullPathName;                                             // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.LoadFileToArrayByFullPath
struct UCreativeModeBlueprintLibrary_LoadFileToArrayByFullPath_Params
{
	struct FString                                     FullPathName;                                             // (Parm, ZeroConstructor)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.LoadAssetFileToString
struct UCreativeModeBlueprintLibrary_LoadAssetFileToString_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.LineTraceTouchComponent
struct UCreativeModeBlueprintLibrary_LineTraceTouchComponent_Params
{
	struct FVector2D                                   TouchPos;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TouchHitLoc;                                              // (Parm, OutParm, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, ZeroConstructor)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.LineTraceTouchAxis
struct UCreativeModeBlueprintLibrary_LineTraceTouchAxis_Params
{
	struct FVector2D                                   TouchPos;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TouchHitLoc;                                              // (Parm, OutParm, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.LineTraceInstance
struct UCreativeModeBlueprintLibrary_LineTraceInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.IsPointWithinRotatedBounds
struct UCreativeModeBlueprintLibrary_IsPointWithinRotatedBounds_Params
{
	struct FVector                                     BoxCenter;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              YawDegrees;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.IsPhysicsStateCreated
struct UCreativeModeBlueprintLibrary_IsPhysicsStateCreated_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.IsPersistentModeEnabled
struct UCreativeModeBlueprintLibrary_IsPersistentModeEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.IsOfflineBuild
struct UCreativeModeBlueprintLibrary_IsOfflineBuild_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.IsMCPModeEnabled
struct UCreativeModeBlueprintLibrary_IsMCPModeEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.IsLLMEnabled
struct UCreativeModeBlueprintLibrary_IsLLMEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.IsCreativeMode
struct UCreativeModeBlueprintLibrary_IsCreativeMode_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.IsBoxOverlapWithRotatedBox
struct UCreativeModeBlueprintLibrary_IsBoxOverlapWithRotatedBox_Params
{
	struct FVector                                     StaticBoxCenter;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     StaticBoxExtent;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RotatedBoxCenter;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RotatedBoxExtent;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              RotatedBoxYaw;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.IgnoreClientMovementErrorChecksAndCorrection
struct UCreativeModeBlueprintLibrary_IgnoreClientMovementErrorChecksAndCorrection_Params
{
	class ACharacter*                                  Charcter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsIgnore;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetWidgetRect
struct UCreativeModeBlueprintLibrary_GetWidgetRect_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                X1;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Y1;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                x2;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                y2;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetUrlValue
struct UCreativeModeBlueprintLibrary_GetUrlValue_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.GetUObjAssetPath
struct UCreativeModeBlueprintLibrary_GetUObjAssetPath_Params
{
	class UObject*                                     Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.GetRTValidMaxArea
struct UCreativeModeBlueprintLibrary_GetRTValidMaxArea_Params
{
	class UTextureRenderTarget2D*                      TextureTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetReplicateAddDataArrayVaildNum
struct UCreativeModeBlueprintLibrary_GetReplicateAddDataArrayVaildNum_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FReplicateAddDataArray                      ReplicateAddDataArray;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                StartIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetPlatformSeconds
struct UCreativeModeBlueprintLibrary_GetPlatformSeconds_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetObjectScreenPos
struct UCreativeModeBlueprintLibrary_GetObjectScreenPos_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FVector2D                                   Pos;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetObjectMap
struct UCreativeModeBlueprintLibrary_GetObjectMap_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, class UObject*>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.GetLastInteractionElapsedTime
struct UCreativeModeBlueprintLibrary_GetLastInteractionElapsedTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetInstanceSpaceBoundingBox
struct UCreativeModeBlueprintLibrary_GetInstanceSpaceBoundingBox_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeAbilitySystemComponent*             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetGroupInstanceSpaceBoundingBox
struct UCreativeModeBlueprintLibrary_GetGroupInstanceSpaceBoundingBox_Params
{
	struct FString                                     GroupID;                                                  // (Parm, ZeroConstructor)
	TArray<struct FString>                             ChildrenIds;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TMap<struct FString, struct FTransform>            ChildrenTransforms;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeAbilitySystemComponent*             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetGameWorld
struct UCreativeModeBlueprintLibrary_GetGameWorld_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetGameTypeAsString
struct UCreativeModeBlueprintLibrary_GetGameTypeAsString_Params
{
	ECreativeModeGameType                              GameType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.GetDataConttentByInstanceDataContent
struct UCreativeModeBlueprintLibrary_GetDataConttentByInstanceDataContent_Params
{
	struct FCreativeInstanceDataContent                InstanceDataContent;                                      // (Parm, OutParm)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.GetCurFrameNumber
struct UCreativeModeBlueprintLibrary_GetCurFrameNumber_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetCurFrameCounter
struct UCreativeModeBlueprintLibrary_GetCurFrameCounter_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetCubeTouchAxisFace
struct UCreativeModeBlueprintLibrary_GetCubeTouchAxisFace_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (Parm, OutParm, IsPlainOldData)
	float                                              Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetLocation;                                           // (Parm, OutParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetContentPatchData
struct UCreativeModeBlueprintLibrary_GetContentPatchData_Params
{
	TArray<unsigned char>                              OldData;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              DiffData;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              outNewData;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetContentDiffData
struct UCreativeModeBlueprintLibrary_GetContentDiffData_Params
{
	TArray<unsigned char>                              OldData;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              NewData;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              outDiffData;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetCommandLineValue
struct UCreativeModeBlueprintLibrary_GetCommandLineValue_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.GetBoundingBoxOfInstances
struct UCreativeModeBlueprintLibrary_GetBoundingBoxOfInstances_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Ids;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetBoundingBoxOfActors
struct UCreativeModeBlueprintLibrary_GetBoundingBoxOfActors_Params
{
	TArray<class AActor*>                              Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GetBigUObject
struct UCreativeModeBlueprintLibrary_GetBigUObject_Params
{
	int                                                MaxN;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.GetBigLuaValue
struct UCreativeModeBlueprintLibrary_GetBigLuaValue_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.GetAllInstanceInScreenBox
struct UCreativeModeBlueprintLibrary_GetAllInstanceInScreenBox_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                CheckDistance;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CountLimit;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.GetAllInstanceInBox
struct UCreativeModeBlueprintLibrary_GetAllInstanceInBox_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rotator;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.GetActorMeshBoundsByTag
struct UCreativeModeBlueprintLibrary_GetActorMeshBoundsByTag_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, IsPlainOldData)
	struct FString                                     IgnoreTag;                                                // (Parm, ZeroConstructor)
	struct FString                                     IncludeTag;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.GenerateUIntGuid
struct UCreativeModeBlueprintLibrary_GenerateUIntGuid_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.GenerateGuid
struct UCreativeModeBlueprintLibrary_GenerateGuid_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.FindAttachedActorByName
struct UCreativeModeBlueprintLibrary_FindAttachedActorByName_Params
{
	class AActor*                                      ParentActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PartialName;                                              // (Parm, ZeroConstructor)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.FindActorByName
struct UCreativeModeBlueprintLibrary_FindActorByName_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PartialName;                                              // (Parm, ZeroConstructor)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.EncryptToBase64
struct UCreativeModeBlueprintLibrary_EncryptToBase64_Params
{
	TArray<unsigned char>                              inArray;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.DumpActorNetReplicate
struct UCreativeModeBlueprintLibrary_DumpActorNetReplicate_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeBlueprintLibrary.DrawLine
struct UCreativeModeBlueprintLibrary_DrawLine_Params
{
	struct FPaintContext                               InContext;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector2D                                   Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                LayerOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LineThickness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAntiAlias;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.DrawGrids
struct UCreativeModeBlueprintLibrary_DrawGrids_Params
{
	struct FPaintContext                               InContext;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              CellSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellCountX;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellCountY;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosOffsetX;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosOffsetY;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              LineThickness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAntiAlias;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.DrawGridCell
struct UCreativeModeBlueprintLibrary_DrawGridCell_Params
{
	struct FPaintContext                               InContext;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              CellSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellIndexX;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellIndexY;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosOffsetX;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosOffsetY;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                LayerOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.DestroyInstance
struct UCreativeModeBlueprintLibrary_DestroyInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.DecryptFromBase64
struct UCreativeModeBlueprintLibrary_DecryptFromBase64_Params
{
	struct FString                                     inString;                                                 // (Parm, ZeroConstructor)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.CreativeInstanceDataContent
struct UCreativeModeBlueprintLibrary_CreativeInstanceDataContent_Params
{
	TArray<unsigned char>                              DataContent;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FCreativeInstanceDataContent                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.CreateCreativeMovingAudio
struct UCreativeModeBlueprintLibrary_CreateCreativeMovingAudio_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Sequence;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ConfigId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowMark;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCreativeMovingAudio                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeModeBlueprintLibrary.ClearGrassByMaskTexture
struct UCreativeModeBlueprintLibrary_ClearGrassByMaskTexture_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MaskTexture;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   WorldStart;                                               // (Parm, IsPlainOldData)
	struct FVector2D                                   WorldEnd;                                                 // (Parm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.CaptureWidget
struct UCreativeModeBlueprintLibrary_CaptureWidget_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
	int                                                X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               FlipY;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.BoxOverlapComponents
struct UCreativeModeBlueprintLibrary_BoxOverlapComponents_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxPos;                                                   // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, IsPlainOldData)
	TArray<int>                                        ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      CompClassFilter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimitiveComponent*>                 OutComps;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.BoxOverlapActors
struct UCreativeModeBlueprintLibrary_BoxOverlapActors_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxPos;                                                   // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, IsPlainOldData)
	TArray<int>                                        ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      ActorClassFilter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.BeginDeferredActorSpawnWithName
struct UCreativeModeBlueprintLibrary_BeginDeferredActorSpawnWithName_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	ESpawnActorCollisionHandlingMethod                 CollisionHandlingOverride;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.AttachOutlineBox
struct UCreativeModeBlueprintLibrary_AttachOutlineBox_Params
{
	class AActor*                                      AttachedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OutlineBox;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.AttachInstanceOutlineBox
struct UCreativeModeBlueprintLibrary_AttachInstanceOutlineBox_Params
{
	struct FString                                     AttachedId;                                               // (Parm, ZeroConstructor)
	bool                                               bGridEnable;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OutlineBox;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.AttachGroupOutlineBox
struct UCreativeModeBlueprintLibrary_AttachGroupOutlineBox_Params
{
	class AActor*                                      GroupObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              AttachedActors;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OutlineBox;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.AttachGroupInstanceOutlineBox
struct UCreativeModeBlueprintLibrary_AttachGroupInstanceOutlineBox_Params
{
	struct FString                                     GroupID;                                                  // (Parm, ZeroConstructor)
	TArray<struct FString>                             ChildrenIds;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TMap<struct FString, struct FTransform>            ChildrenTransforms;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bGridEnable;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OutlineBox;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeBlueprintLibrary.AddOnScreenDebugMessage
struct UCreativeModeBlueprintLibrary_AddOnScreenDebugMessage_Params
{
	struct FString                                     Msg;                                                      // (ConstParm, Parm, ZeroConstructor)
};

// Function Creative.CreativeModeLuaSpectatorPawn.UnRegistLuaTick
struct ACreativeModeLuaSpectatorPawn_UnRegistLuaTick_Params
{
};

// Function Creative.CreativeModeLuaSpectatorPawn.SetController
struct ACreativeModeLuaSpectatorPawn_SetController_Params
{
	class APlayerController*                           InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeLuaSpectatorPawn.SetAbilitySystemComponentAvatar
struct ACreativeModeLuaSpectatorPawn_SetAbilitySystemComponentAvatar_Params
{
};

// Function Creative.CreativeModeLuaSpectatorPawn.RegistLuaTick
struct ACreativeModeLuaSpectatorPawn_RegistLuaTick_Params
{
	float                                              TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeLuaSpectatorPawn.MoveRight
struct ACreativeModeLuaSpectatorPawn_MoveRight_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeLuaSpectatorPawn.MoveForward
struct ACreativeModeLuaSpectatorPawn_MoveForward_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeLuaSpectatorPawn.GetActiveSpringArm
struct ACreativeModeLuaSpectatorPawn_GetActiveSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Creative.CreativeCameraDeviceActor.UpdateFollowStatus
struct ACreativeCameraDeviceActor_UpdateFollowStatus_Params
{
};

// Function Creative.CreativeCameraDeviceActor.UpdateFollowPos
struct ACreativeCameraDeviceActor_UpdateFollowPos_Params
{
};

// Function Creative.CreativeCameraDeviceActor.RotCamera
struct ACreativeCameraDeviceActor_RotCamera_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeCameraDeviceActor.OnEndViewTarget
struct ACreativeCameraDeviceActor_OnEndViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeCameraDeviceActor.OnBecomeViewTarget
struct ACreativeCameraDeviceActor_OnBecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeCameraDeviceActor.MoveUp
struct ACreativeCameraDeviceActor_MoveUp_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeCameraDeviceActor.MoveRight
struct ACreativeCameraDeviceActor_MoveRight_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeCameraDeviceActor.MoveForward
struct ACreativeCameraDeviceActor_MoveForward_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeCameraDeviceActor.LerpToTarget
struct ACreativeCameraDeviceActor_LerpToTarget_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeCameraDeviceActor.LerpActor
struct ACreativeCameraDeviceActor_LerpActor_Params
{
	float                                              BlendPct;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeCameraDeviceActor.IsVecInvalid
struct ACreativeCameraDeviceActor_IsVecInvalid_Params
{
	struct FVector                                     Vect;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeCameraDeviceActor.IsRotInvalid
struct ACreativeCameraDeviceActor_IsRotInvalid_Params
{
	struct FRotator                                    Rot;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeCameraDeviceActor.InterpolateToSpringRotation
struct ACreativeCameraDeviceActor_InterpolateToSpringRotation_Params
{
	float                                              LerpValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeCameraDeviceActor.InitStartPoint
struct ACreativeCameraDeviceActor_InitStartPoint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeCameraDeviceActor.GetSpringArmForCamera
struct ACreativeCameraDeviceActor_GetSpringArmForCamera_Params
{
	class UCameraComponent*                            Camera;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Creative.CreativeCameraDeviceActor.GetLerpTime
struct ACreativeCameraDeviceActor_GetLerpTime_Params
{
	float                                              BlendTimeToGo;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeCameraDeviceActor.GetCameraPointPosition
struct ACreativeCameraDeviceActor_GetCameraPointPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeCameraDeviceActor.GetActiveCamera
struct ACreativeCameraDeviceActor_GetActiveCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Creative.CreativeCameraGetter.GetCameraLocation
struct UCreativeCameraGetter_GetCameraLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeCustomCameraComponent.InterpolateToTargetRotation
struct UCreativeCustomCameraComponent_InterpolateToTargetRotation_Params
{
	float                                              LerpValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeCustomCameraComponent.InterpolateToTargetFOV
struct UCreativeCustomCameraComponent_InterpolateToTargetFOV_Params
{
	float                                              LerpValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeCustomParameterManager.RemoveCustomParameter
struct UCreativeCustomParameterManager_RemoveCustomParameter_Params
{
	uint32_t                                           ParameterID;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeCustomParameterManager.ReceiveOnGameStateBeginPlay
struct UCreativeCustomParameterManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeCustomParameterManager.OnGameStateBeginPlay
struct UCreativeCustomParameterManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeCustomParameterManager.GetCustomParameterDataNodes
struct UCreativeCustomParameterManager_GetCustomParameterDataNodes_Params
{
	uint32_t                                           ParameterID;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCreativeCustomParameterDataNode>    OutCustomParameterDataNodes;                              // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeCustomParameterManager.Get
struct UCreativeCustomParameterManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeCustomParameterManager*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeCustomParameterManager.ChangeCustomParameter
struct UCreativeCustomParameterManager_ChangeCustomParameter_Params
{
	uint32_t                                           ParameterID;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int8_t                                             TeamID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              DataContent;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeCustomParameterManager.AddCustomParameter
struct UCreativeCustomParameterManager_AddCustomParameter_Params
{
	uint32_t                                           ParameterID;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int8_t                                             TeamID;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              DataContent;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bPropagateToChildren;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeCustomPrefabComponent.GetNodeSegmentContent
struct UCreativeCustomPrefabComponent_GetNodeSegmentContent_Params
{
	struct FCreativePrefabDataSegment                  Segment;                                                  // (Parm, OutParm)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeCustomPrefabComponent.AddInstanceDataContent
struct UCreativeCustomPrefabComponent_AddInstanceDataContent_Params
{
	struct FCreativeCustomPrefabDataSegment            Segment;                                                  // (Parm, OutParm)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeDestructibleMeshActor.SetDamageEnable
struct ACreativeDestructibleMeshActor_SetDamageEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeDestructibleMeshActor.OnHit
struct ACreativeDestructibleMeshActor_OnHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativeDestructibleMeshActor.InitHP
struct ACreativeDestructibleMeshActor_InitHP_Params
{
	float                                              fHP;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeDestructibleMeshActor.GetFracturedComponent
struct ACreativeDestructibleMeshActor_GetFracturedComponent_Params
{
	class UPhotonDestructibleMeshComponent*            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Creative.CreativeDestructibleMeshActor.AddCanDamageWeapon
struct ACreativeDestructibleMeshActor_AddCanDamageWeapon_Params
{
	struct FString                                     Weapon;                                                   // (Parm, ZeroConstructor)
};

// Function Creative.CreativeDestructibleMeshBatchActor.RemoveAllCacheReplicationData
struct ACreativeDestructibleMeshBatchActor_RemoveAllCacheReplicationData_Params
{
};

// Function Creative.CreativeModeLiteComponent.OnReturnToPool
struct UCreativeModeLiteComponent_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RecycledSeq;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeLiteComponent.GetObjectFromPool
struct UCreativeModeLiteComponent_GetObjectFromPool_Params
{
	int                                                PoolId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, OutParm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameModeBaseComponent.SetGameStateComponent
struct UCreativeModeGameModeBaseComponent_SetGameStateComponent_Params
{
	class UCreativeModeGameStateBaseComponent*         NewGameStateComponent;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameModeBaseComponent.ReceivePostInitializeComponents
struct UCreativeModeGameModeBaseComponent_ReceivePostInitializeComponents_Params
{
};

// Function Creative.CreativeModeGameModeBaseComponent.GetGameType
struct UCreativeModeGameModeBaseComponent_GetGameType_Params
{
	ECreativeModeGameType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameModeBaseComponent.GetGameMode
struct UCreativeModeGameModeBaseComponent_GetGameMode_Params
{
	class ACreativeModeGameMode*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameModeBaseComponent.FindPlayerStartOverride
struct UCreativeModeGameModeBaseComponent_FindPlayerStartOverride_Params
{
	class AController*                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     IncomingName;                                             // (Parm, ZeroConstructor)
	bool                                               bIsRevive;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.UnregisterLiteComponent
struct ACreativeModeEditorObject_UnregisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Destroy;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.ShowSelectedEffect
struct ACreativeModeEditorObject_ShowSelectedEffect_Params
{
	bool                                               ShowEff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutlineColor;                                             // (Parm, IsPlainOldData)
	float                                              OutlineThickness;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.ShowOutlineEffect
struct ACreativeModeEditorObject_ShowOutlineEffect_Params
{
	bool                                               ShowEff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     IgnoreTag;                                                // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeEditorObject.SetPhotographyMode
struct ACreativeModeEditorObject_SetPhotographyMode_Params
{
	bool                                               bIsCapturing;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.SetLiteComponentTickEnable
struct ACreativeModeEditorObject_SetLiteComponentTickEnable_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.SetActorState
struct ACreativeModeEditorObject_SetActorState_Params
{
	ECreativeModeActorState                            NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.ReturnObjectToPool
struct ACreativeModeEditorObject_ReturnObjectToPool_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.ReturnObjectsToPool
struct ACreativeModeEditorObject_ReturnObjectsToPool_Params
{
	TArray<class UObject*>                             Objs;                                                     // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeEditorObject.RegisterLiteComponent
struct ACreativeModeEditorObject_RegisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.ReceivePostBeginPlay
struct ACreativeModeEditorObject_ReceivePostBeginPlay_Params
{
};

// Function Creative.CreativeModeEditorObject.ReceiveIsDedicatedServer
struct ACreativeModeEditorObject_ReceiveIsDedicatedServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.ReceiveInitializeLiteComponent
struct ACreativeModeEditorObject_ReceiveInitializeLiteComponent_Params
{
};

// Function Creative.CreativeModeEditorObject.ReceiveInitCanEditFlag
struct ACreativeModeEditorObject_ReceiveInitCanEditFlag_Params
{
};

// Function Creative.CreativeModeEditorObject.ReceiveHasAuthority
struct ACreativeModeEditorObject_ReceiveHasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.OnRepActorStateOverride
struct ACreativeModeEditorObject_OnRepActorStateOverride_Params
{
	ECreativeModeActorState                            NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.OnRep_ActorState
struct ACreativeModeEditorObject_OnRep_ActorState_Params
{
	ECreativeModeActorState                            LastState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.InCollisionState
struct ACreativeModeEditorObject_InCollisionState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.GetObjectsFromPool
struct ACreativeModeEditorObject_GetObjectsFromPool_Params
{
	TArray<struct FCreativePoolGetObjectParamInfo>     ObjectParams;                                             // (Parm, OutParm, ZeroConstructor)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeEditorObject.GetObjectFromPool
struct ACreativeModeEditorObject_GetObjectFromPool_Params
{
	int                                                PoolId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, OutParm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.GetActorState
struct ACreativeModeEditorObject_GetActorState_Params
{
	ECreativeModeActorState                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeEditorObject.FindLiteComponentByClass
struct ACreativeModeEditorObject_FindLiteComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ULiteComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameStateBaseComponent.ReceivePostInitializeComponents
struct UCreativeModeGameStateBaseComponent_ReceivePostInitializeComponents_Params
{
};

// Function Creative.CreativeModeGameStateBaseComponent.GetPlayState
struct UCreativeModeGameStateBaseComponent_GetPlayState_Params
{
	ECreativeModePlayState                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameStateBaseComponent.GetGameType
struct UCreativeModeGameStateBaseComponent_GetGameType_Params
{
	ECreativeModeGameType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameStateBaseComponent.GetGameState
struct UCreativeModeGameStateBaseComponent_GetGameState_Params
{
	class ACreativeModeGameState*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeEventObject.ReHookObject
struct UCreativeEventObject_ReHookObject_Params
{
};

// Function Creative.CreativeEventObject.EventObjectConditionalBeginDestroy
struct UCreativeEventObject_EventObjectConditionalBeginDestroy_Params
{
};

// Function Creative.CreativeGameAPIObject.GetPlayersInSphere
struct UCreativeGameAPIObject_GetPlayersInSphere_Params
{
	struct FVector                                     SphereCenter;                                             // (Parm, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FilterNonPlayable;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int64_t>                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeGameAPIObject.GetPlayersInRectangle
struct UCreativeGameAPIObject_GetPlayersInRectangle_Params
{
	struct FVector                                     RectangleCenter;                                          // (Parm, IsPlainOldData)
	float                                              RectangleX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RectangleY;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RectangleZ;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FilterNonPlayable;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int64_t>                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeGameMode.UnregisterLiteComponent
struct ACreativeModeGameMode_UnregisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.SetLiteComponentTickEnable
struct ACreativeModeGameMode_SetLiteComponentTickEnable_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.SetItemGenerate
struct ACreativeModeGameMode_SetItemGenerate_Params
{
	bool                                               bIsOpen;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.SetCurrentGameType
struct ACreativeModeGameMode_SetCurrentGameType_Params
{
	ECreativeModeGameType                              NewGameType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.ReInitItemGenerate
struct ACreativeModeGameMode_ReInitItemGenerate_Params
{
	struct FString                                     NewItemClassPath;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeGameMode.RegisterLiteComponent
struct ACreativeModeGameMode_RegisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.ReceiveInitializeLiteComponent
struct ACreativeModeGameMode_ReceiveInitializeLiteComponent_Params
{
};

// Function Creative.CreativeModeGameMode.IsStandAloneGameMode
struct ACreativeModeGameMode_IsStandAloneGameMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.IsRestartPlayerUsePawnRotation
struct ACreativeModeGameMode_IsRestartPlayerUsePawnRotation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.GetCurrentModeComponent
struct ACreativeModeGameMode_GetCurrentModeComponent_Params
{
	class UCreativeModeGameModeBaseComponent*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamNum
struct ACreativeModeGameMode_GetCreativeModeRealTeamNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamIDs
struct ACreativeModeGameMode_GetCreativeModeRealTeamIDs_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeGameMode.FindLiteComponentByClass
struct ACreativeModeGameMode_FindLiteComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ULiteComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameMode.DSPlayerKickOut
struct ACreativeModeGameMode_DSPlayerKickOut_Params
{
	uint64_t                                           UID;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ExitReason;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeGameMode.CreativeModeFindPlayerStart
struct ACreativeModeGameMode_CreativeModeFindPlayerStart_Params
{
	class AController*                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     IncomingName;                                             // (Parm, ZeroConstructor)
	bool                                               bIsRevive;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameModeComponent.ReceiveCallPlayStateFunction
struct UCreativeModeGameModeComponent_ReceiveCallPlayStateFunction_Params
{
};

// Function Creative.CreativeModeGameObject.UnregisterLiteComponent
struct UCreativeModeGameObject_UnregisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Destroy;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameObject.ReturnObjectToPool
struct UCreativeModeGameObject_ReturnObjectToPool_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameObject.ReturnObjectsToPool
struct UCreativeModeGameObject_ReturnObjectsToPool_Params
{
	TArray<class UObject*>                             Objs;                                                     // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeGameObject.RegisterLiteComponent
struct UCreativeModeGameObject_RegisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameObject.ReceivePostBeginPlay
struct UCreativeModeGameObject_ReceivePostBeginPlay_Params
{
};

// Function Creative.CreativeModeGameObject.ReceiveIsDedicatedServer
struct UCreativeModeGameObject_ReceiveIsDedicatedServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameObject.ReceiveHasAuthority
struct UCreativeModeGameObject_ReceiveHasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameObject.ReceiveEndPlay
struct UCreativeModeGameObject_ReceiveEndPlay_Params
{
};

// Function Creative.CreativeModeGameObject.ReceiveBeginPlay
struct UCreativeModeGameObject_ReceiveBeginPlay_Params
{
};

// Function Creative.CreativeModeGameObject.GetObjectsFromPool
struct UCreativeModeGameObject_GetObjectsFromPool_Params
{
	TArray<struct FCreativePoolGetObjectParamInfo>     ObjectParams;                                             // (Parm, OutParm, ZeroConstructor)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeGameObject.GetObjectFromPool
struct UCreativeModeGameObject_GetObjectFromPool_Params
{
	int                                                PoolId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, OutParm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGameParameterManager.SetGameParameterResumeNodes
struct UCreativeGameParameterManager_SetGameParameterResumeNodes_Params
{
	TArray<struct FCreativeGameParameter>              GameParameterNodes;                                       // (Parm, ZeroConstructor)
};

// Function Creative.CreativeGameParameterManager.RemoveGameParameter
struct UCreativeGameParameterManager_RemoveGameParameter_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (ConstParm, Parm, ZeroConstructor)
};

// Function Creative.CreativeGameParameterManager.ReceiveOnGameStateBeginPlay
struct UCreativeGameParameterManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeGameParameterManager.OnReceivePreGameParameterRemove
struct UCreativeGameParameterManager_OnReceivePreGameParameterRemove_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeGameParameterManager.OnReceivePostGameParameterChange
struct UCreativeGameParameterManager_OnReceivePostGameParameterChange_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeGameParameterManager.OnReceivePostGameParameterAdd
struct UCreativeGameParameterManager_OnReceivePostGameParameterAdd_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeGameParameterManager.OnGameStateBeginPlay
struct UCreativeGameParameterManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeGameParameterManager.GetGameParameterResumeNodes
struct UCreativeGameParameterManager_GetGameParameterResumeNodes_Params
{
	TArray<uint32_t>                                   ParameterHeadHashs;                                       // (Parm, ZeroConstructor)
	TArray<struct FCreativeGameParameter>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeGameParameterManager.GetGameParameterContent
struct UCreativeGameParameterManager_GetGameParameterContent_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (ConstParm, Parm, ZeroConstructor)
	TArray<unsigned char>                              OutContent;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGameParameterManager.Get
struct UCreativeGameParameterManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeGameParameterManager*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGameParameterManager.ChangeGameParameter
struct UCreativeGameParameterManager_ChangeGameParameter_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (ConstParm, Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeGameParameterManager.AddGameParameter
struct UCreativeGameParameterManager_AddGameParameter_Params
{
	struct FString                                     ParameterKey;                                             // (Parm, ZeroConstructor)
	struct FString                                     TemplateID;                                               // (ConstParm, Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeModeGameState.UnregisterLiteComponent
struct ACreativeModeGameState_UnregisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.SetLiteComponentTickEnable
struct ACreativeModeGameState_SetLiteComponentTickEnable_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.SetCurrentGameType
struct ACreativeModeGameState_SetCurrentGameType_Params
{
	ECreativeModeGameType                              NewGameType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.RPC_Replay_SetInstanceDataContent
struct ACreativeModeGameState_RPC_Replay_SetInstanceDataContent_Params
{
	uint32_t                                           InstanceID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCreativeInstanceDataContent                InstanceDataContent;                                      // (Parm)
};

// Function Creative.CreativeModeGameState.RegisterLiteComponent
struct ACreativeModeGameState_RegisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.ReceiveInitializeLiteComponent
struct ACreativeModeGameState_ReceiveInitializeLiteComponent_Params
{
};

// Function Creative.CreativeModeGameState.ReceiveCreativeCollectGarbage
struct ACreativeModeGameState_ReceiveCreativeCollectGarbage_Params
{
};

// Function Creative.CreativeModeGameState.ReceiveAddContextDataToCrashKit
struct ACreativeModeGameState_ReceiveAddContextDataToCrashKit_Params
{
};

// Function Creative.CreativeModeGameState.OnViewportSizeChanged
struct ACreativeModeGameState_OnViewportSizeChanged_Params
{
	struct FVector2D                                   OldViewportSize;                                          // (Parm, IsPlainOldData)
	struct FVector2D                                   NewViewportSize;                                          // (Parm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.OnRep_InitializeGameType
struct ACreativeModeGameState_OnRep_InitializeGameType_Params
{
	ECreativeModeGameType                              LastInitializeGameType;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.OnRep_CurrentStateComponent
struct ACreativeModeGameState_OnRep_CurrentStateComponent_Params
{
	class UCreativeModeGameStateBaseComponent*         LastComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.OnRep_CreativeModTemplateId
struct ACreativeModeGameState_OnRep_CreativeModTemplateId_Params
{
	int                                                LastCreativeModTemplateId;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.OnRep_CreativeModID
struct ACreativeModeGameState_OnRep_CreativeModID_Params
{
	int                                                LastCreativeModID;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.OnRep_BlockySlotStrings
struct ACreativeModeGameState_OnRep_BlockySlotStrings_Params
{
	TArray<struct FBlockySlotString>                   BlockySlotStrings;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeGameState.OnClientRecordingStateChange
struct ACreativeModeGameState_OnClientRecordingStateChange_Params
{
	EClientRecordingType                               Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.IsOfficialGame
struct ACreativeModeGameState_IsOfficialGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.IsEditorMode
struct ACreativeModeGameState_IsEditorMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.IsDemoGame
struct ACreativeModeGameState_IsDemoGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.IsCreativeMode
struct ACreativeModeGameState_IsCreativeMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.IsCreativeEditor
struct ACreativeModeGameState_IsCreativeEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.InitCreativeModID
struct ACreativeModeGameState_InitCreativeModID_Params
{
	int                                                ModID;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TemplateID;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetPlayState
struct ACreativeModeGameState_GetPlayState_Params
{
	ECreativeModePlayState                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetInitializeGameType
struct ACreativeModeGameState_GetInitializeGameType_Params
{
	ECreativeModeGameType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetDisableDistanceLevelsOutsideBox
struct ACreativeModeGameState_GetDisableDistanceLevelsOutsideBox_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                W;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                L;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotationAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFilter;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeGameState.GetCurrentStateComponent
struct ACreativeModeGameState_GetCurrentStateComponent_Params
{
	class UCreativeModeGameStateBaseComponent*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetCurrentGameType
struct ACreativeModeGameState_GetCurrentGameType_Params
{
	ECreativeModeGameType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetCurCreativeType
struct ACreativeModeGameState_GetCurCreativeType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetCurCreativeModResList
struct ACreativeModeGameState_GetCurCreativeModResList_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeGameState.GetCurCreativeModMapID
struct ACreativeModeGameState_GetCurCreativeModMapID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeGameState.GetCreativeModTemplateId
struct ACreativeModeGameState_GetCreativeModTemplateId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.GetCreativeModID
struct ACreativeModeGameState_GetCreativeModID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.FindLiteComponentByClass
struct ACreativeModeGameState_FindLiteComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ULiteComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.FilterLevelByName
struct ACreativeModeGameState_FilterLevelByName_Params
{
	struct FName                                       LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeGameState.ClearInstance
struct ACreativeModeGameState_ClearInstance_Params
{
};

// Function Creative.CreativeModeGameState.ClearAndReImportInstance
struct ACreativeModeGameState_ClearAndReImportInstance_Params
{
};

// Function Creative.CreativeModeGameStateComponent.SetPlayState
struct UCreativeModeGameStateComponent_SetPlayState_Params
{
	ECreativeModePlayState                             newPlayState;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeGameStateComponent.OnRep_RuntimePlayerBattleDataObject
struct UCreativeModeGameStateComponent_OnRep_RuntimePlayerBattleDataObject_Params
{
};

// Function Creative.CreativeModeGameStateComponent.OnRep_IntegralMechanismComponent
struct UCreativeModeGameStateComponent_OnRep_IntegralMechanismComponent_Params
{
};

// Function Creative.CreativeModeGameStateComponent.OnRep_CurPlayState
struct UCreativeModeGameStateComponent_OnRep_CurPlayState_Params
{
};

// Function Creative.CreativeModeGameStateComponent.GetPlayState
struct UCreativeModeGameStateComponent_GetPlayState_Params
{
	ECreativeModePlayState                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGlobalApiObject.Print
struct UCreativeGlobalApiObject_Print_Params
{
	struct FString                                     LogText;                                                  // (Parm, ZeroConstructor)
};

// Function Creative.CreativeGlobalApiObject.CPPExecutionConsumptionTest
struct UCreativeGlobalApiObject_CPPExecutionConsumptionTest_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             C;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.UpdateBatchActorInstances
struct UCreativeGridLevelsManager_UpdateBatchActorInstances_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	int                                                AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaterialID;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceAll;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.UnLoadGridLevelsBatchActor
struct UCreativeGridLevelsManager_UnLoadGridLevelsBatchActor_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  CellIndex;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.StaticMeshObjectRelieveBatch
struct UCreativeGridLevelsManager_StaticMeshObjectRelieveBatch_Params
{
	struct FString                                     InstanceID;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeGridLevelsManager.StaticMeshObjectReBatch
struct UCreativeGridLevelsManager_StaticMeshObjectReBatch_Params
{
	struct FString                                     InstanceID;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeGridLevelsManager.RemoveObject
struct UCreativeGridLevelsManager_RemoveObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.ReceiveRegistInstanceValueListener
struct UCreativeGridLevelsManager_ReceiveRegistInstanceValueListener_Params
{
};

// Function Creative.CreativeGridLevelsManager.ReceiveDelayUpdateBatchActorInstances
struct UCreativeGridLevelsManager_ReceiveDelayUpdateBatchActorInstances_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	int                                                AssetId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaterialID;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceAll;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MoveForwardTimeStamp;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.ReceiveClearAllData
struct UCreativeGridLevelsManager_ReceiveClearAllData_Params
{
};

// Function Creative.CreativeGridLevelsManager.ReceiveCheckObjectCanBatch
struct UCreativeGridLevelsManager_ReceiveCheckObjectCanBatch_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.ObjectAddToGridCellMap
struct UCreativeGridLevelsManager_ObjectAddToGridCellMap_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  Index;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FString                                     InstanceID;                                               // (ConstParm, Parm, ZeroConstructor)
};

// Function Creative.CreativeGridLevelsManager.LoadGridLevelsBatchActor
struct UCreativeGridLevelsManager_LoadGridLevelsBatchActor_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  CellIndex;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.IsCreativeEidtMode
struct UCreativeGridLevelsManager_IsCreativeEidtMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GridCellMapRemoveObject
struct UCreativeGridLevelsManager_GridCellMapRemoveObject_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  Index;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FString                                     InstanceID;                                               // (ConstParm, Parm, ZeroConstructor)
};

// Function Creative.CreativeGridLevelsManager.GetStaticMeshBatchActorPath
struct UCreativeGridLevelsManager_GetStaticMeshBatchActorPath_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeGridLevelsManager.GetSingleDestructibleMeshBatchActor
struct UCreativeGridLevelsManager_GetSingleDestructibleMeshBatchActor_Params
{
	class ACreativeDestructibleMeshBatchActor*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetSingleBatchActor
struct UCreativeGridLevelsManager_GetSingleBatchActor_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	class ACreativeModeStaticMeshBatchActor*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetRelieveBatchDistance
struct UCreativeGridLevelsManager_GetRelieveBatchDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetReBatchDistance
struct UCreativeGridLevelsManager_GetReBatchDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetOnCellIndex
struct UCreativeGridLevelsManager_GetOnCellIndex_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FIntVector                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetObjectTransform
struct UCreativeGridLevelsManager_GetObjectTransform_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetObjectStreamingType
struct UCreativeGridLevelsManager_GetObjectStreamingType_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	ECreativeModeActorStreamingType                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetObjectRuntimeGrid
struct UCreativeGridLevelsManager_GetObjectRuntimeGrid_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeGridLevelsManager.GetObjectOnCellIndexByLocation
struct UCreativeGridLevelsManager_GetObjectOnCellIndexByLocation_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FIntVector                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetObjectOnCellIndex
struct UCreativeGridLevelsManager_GetObjectOnCellIndex_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FIntVector                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetObjectIsPrefab
struct UCreativeGridLevelsManager_GetObjectIsPrefab_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetObjectAssetID
struct UCreativeGridLevelsManager_GetObjectAssetID_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetGridLoadingRange
struct UCreativeGridLevelsManager_GetGridLoadingRange_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetGridList
struct UCreativeGridLevelsManager_GetGridList_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeGridLevelsManager.GetDestructibleMeshBatchActorPath
struct UCreativeGridLevelsManager_GetDestructibleMeshBatchActorPath_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeGridLevelsManager.GetDefaultGridName
struct UCreativeGridLevelsManager_GetDefaultGridName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeGridLevelsManager.GetCellWidthHeight
struct UCreativeGridLevelsManager_GetCellWidthHeight_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetCellCenterLocation
struct UCreativeGridLevelsManager_GetCellCenterLocation_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  CellIndex;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.GetAxisIndex
struct UCreativeGridLevelsManager_GetAxisIndex_Params
{
	float                                              Pos;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlockLenght;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.Get
struct UCreativeGridLevelsManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeGridLevelsManager*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.CheckObjectBeRelieveBatch
struct UCreativeGridLevelsManager_CheckObjectBeRelieveBatch_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.CheckObjectBeBatch
struct UCreativeGridLevelsManager_CheckObjectBeBatch_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.CheckAndRemoveObjectForBatchData
struct UCreativeGridLevelsManager_CheckAndRemoveObjectForBatchData_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.CheckAndAddObjectToBatchData
struct UCreativeGridLevelsManager_CheckAndAddObjectToBatchData_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.ChangeObjectTransform
struct UCreativeGridLevelsManager_ChangeObjectTransform_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.ChangeObjectStreamingType
struct UCreativeGridLevelsManager_ChangeObjectStreamingType_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	ECreativeModeActorStreamingType                    NewStremaingType;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.ChangeObjectMaterialIds
struct UCreativeGridLevelsManager_ChangeObjectMaterialIds_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.ChangeObjectMaterialId
struct UCreativeGridLevelsManager_ChangeObjectMaterialId_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.ChangeObjectIsPrefab
struct UCreativeGridLevelsManager_ChangeObjectIsPrefab_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               bIsPrefab;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.AddObjectToGridLevels
struct UCreativeGridLevelsManager_AddObjectToGridLevels_Params
{
	struct FString                                     InstanceID;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGridLevelsManager.ActivateAllAlwaysLoadCellIndex
struct UCreativeGridLevelsManager_ActivateAllAlwaysLoadCellIndex_Params
{
};

// Function Creative.CreativeGroupManager.Get
struct UCreativeGroupManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeGroupManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGuideComponent.SweepSingleByChannel
struct UCreativeGuideComponent_SweepSingleByChannel_Params
{
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGuideComponent.GenereateSplineMeshes
struct UCreativeGuideComponent_GenereateSplineMeshes_Params
{
	TArray<struct FVector>                             Points;                                                   // (Parm, ZeroConstructor)
};

// Function Creative.CreativeGuideMeshComponent.OnReturnToPool
struct UCreativeGuideMeshComponent_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RecycledSeq;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeGuideMeshComponent.OnPickFromPool
struct UCreativeGuideMeshComponent_OnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModeInGameManagerCenter.GetIsBeginPlayEnded
struct ACreativeModeInGameManagerCenter_GetIsBeginPlayEnded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.UpdateModBinInstanceCount
struct UCreativeInstanceManager_UpdateModBinInstanceCount_Params
{
};

// Function Creative.CreativeInstanceManager.SetModBinInstanceCount
struct UCreativeInstanceManager_SetModBinInstanceCount_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.SetInstanceValue
struct UCreativeInstanceManager_SetInstanceValue_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.SetInstanceDataContents
struct UCreativeInstanceManager_SetInstanceDataContents_Params
{
	uint16_t                                           Seq;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCreativeInstanceDataContent>        InstanceDataContents;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeInstanceManager.SetInstanceContainerContent
struct UCreativeInstanceManager_SetInstanceContainerContent_Params
{
	TArray<unsigned char>                              ContainerContent;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	uint32_t                                           NewSeq;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.SendModBinaryDataToReplay
struct UCreativeInstanceManager_SendModBinaryDataToReplay_Params
{
	TArray<unsigned char>                              InBinaryData;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeInstanceManager.ReqInstanceContainerContentTimeoutCheck
struct UCreativeInstanceManager_ReqInstanceContainerContentTimeoutCheck_Params
{
};

// Function Creative.CreativeInstanceManager.ReqInstanceContainerContentEnd
struct UCreativeInstanceManager_ReqInstanceContainerContentEnd_Params
{
	bool                                               IsTimeout;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.RemoveInstance
struct UCreativeInstanceManager_RemoveInstance_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               bSkipCheck;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.RemoveCppInstanceNode
struct UCreativeInstanceManager_RemoveCppInstanceNode_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.RecordAllInstanceDataByRPC
struct UCreativeInstanceManager_RecordAllInstanceDataByRPC_Params
{
};

// Function Creative.CreativeInstanceManager.ReceiveOnGameStateBeginPlay
struct UCreativeInstanceManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.OnRep_RPCReplicatedInstanceContainerSeq
struct UCreativeInstanceManager_OnRep_RPCReplicatedInstanceContainerSeq_Params
{
};

// Function Creative.CreativeInstanceManager.OnRep_ModBinInstanceCount
struct UCreativeInstanceManager_OnRep_ModBinInstanceCount_Params
{
};

// Function Creative.CreativeInstanceManager.OnReceivePreInstanceRemove
struct UCreativeInstanceManager_OnReceivePreInstanceRemove_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               IsRollback;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.OnReceivePostInstanceChange
struct UCreativeInstanceManager_OnReceivePostInstanceChange_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsRollback;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.OnReceivePostInstanceAdd
struct UCreativeInstanceManager_OnReceivePostInstanceAdd_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsRollback;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.OnReceiveClearNotReplicatedData
struct UCreativeInstanceManager_OnReceiveClearNotReplicatedData_Params
{
};

// Function Creative.CreativeInstanceManager.OnReadyToAddInstance
struct UCreativeInstanceManager_OnReadyToAddInstance_Params
{
};

// Function Creative.CreativeInstanceManager.OnPlayerControllerBeginPlay
struct UCreativeInstanceManager_OnPlayerControllerBeginPlay_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.OnGameTypeChanged
struct UCreativeInstanceManager_OnGameTypeChanged_Params
{
	unsigned char                                      LastGameType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CurrentGameType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.OnGameStateBeginPlay
struct UCreativeInstanceManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.IsInstanceReplicatTreeReplicateComplete
struct UCreativeInstanceManager_IsInstanceReplicatTreeReplicateComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.IsInstanceDataTreeReplicateComplete
struct UCreativeInstanceManager_IsInstanceDataTreeReplicateComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.IsAssetRuntimeObjectBox
struct UCreativeInstanceManager_IsAssetRuntimeObjectBox_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.InitExpiredAndDebugAssetID
struct UCreativeInstanceManager_InitExpiredAndDebugAssetID_Params
{
	TArray<int>                                        ExpiredAssets;                                            // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        DebugAssets;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeInstanceManager.HasReadyToAddInstance
struct UCreativeInstanceManager_HasReadyToAddInstance_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.HasAuthorityOrReplay
struct UCreativeInstanceManager_HasAuthorityOrReplay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.GetObjectAssetPath
struct UCreativeInstanceManager_GetObjectAssetPath_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeInstanceManager.GetModBinInstanceCount
struct UCreativeInstanceManager_GetModBinInstanceCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.GetModBinaryDataFromReplay
struct UCreativeInstanceManager_GetModBinaryDataFromReplay_Params
{
	TArray<unsigned char>                              InBinaryData;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.GetInstanceIsDestructible
struct UCreativeInstanceManager_GetInstanceIsDestructible_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.GetInstanceIsCustomUI
struct UCreativeInstanceManager_GetInstanceIsCustomUI_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.GetInstanceDataTreeCount
struct UCreativeInstanceManager_GetInstanceDataTreeCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.GetInstanceDataContents
struct UCreativeInstanceManager_GetInstanceDataContents_Params
{
	TArray<uint32_t>                                   InstanceIDs;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FCreativeInstanceRespondPullDataSegment> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeInstanceManager.GetInstanceDataContent
struct UCreativeInstanceManager_GetInstanceDataContent_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeInstanceManager.GetInstanceContainerCount
struct UCreativeInstanceManager_GetInstanceContainerCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.GetInstanceContainerContent
struct UCreativeInstanceManager_GetInstanceContainerContent_Params
{
	uint32_t                                           BaseSeq;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           OutSeq;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeInstanceManager.GetInstanceBox
struct UCreativeInstanceManager_GetInstanceBox_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FBox                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.GetCppInstanceNode
struct UCreativeInstanceManager_GetCppInstanceNode_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FCreativeInstanceNode                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeInstanceManager.GetAssetBox
struct UCreativeInstanceManager_GetAssetBox_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FBox                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.Get
struct UCreativeInstanceManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeInstanceManager*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.GenerateDestructionUniqueID
struct UCreativeInstanceManager_GenerateDestructionUniqueID_Params
{
	uint32_t                                           ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.DestroyInstance
struct UCreativeInstanceManager_DestroyInstance_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeInstanceManager.ClientPreAddInstance
struct UCreativeInstanceManager_ClientPreAddInstance_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeInstanceManager.ClearInstanceTree
struct UCreativeInstanceManager_ClearInstanceTree_Params
{
};

// Function Creative.CreativeInstanceManager.CheckAndReqRPCReplicatedInstanceContainerContent
struct UCreativeInstanceManager_CheckAndReqRPCReplicatedInstanceContainerContent_Params
{
};

// Function Creative.CreativeInstanceManager.ChangeInstance
struct UCreativeInstanceManager_ChangeInstance_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bCallReceiveChange;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeInstanceManager.ChangeCppInstanceNode
struct UCreativeInstanceManager_ChangeCppInstanceNode_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FCreativeInstanceNode                       Node;                                                     // (Parm, OutParm)
};

// Function Creative.CreativeInstanceManager.AddInstance
struct UCreativeInstanceManager_AddInstance_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeInstanceManager.AddCppInstanceNode
struct UCreativeInstanceManager_AddCppInstanceNode_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FCreativeInstanceNode                       Node;                                                     // (Parm, OutParm)
};

// Function Creative.CreativeInstanceManager.AddBuildingFlag
struct UCreativeInstanceManager_AddBuildingFlag_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Creative.CreativeInstanceStaticMeshComponent.UpdateAllInstanceByRelativeLocation
struct UCreativeInstanceStaticMeshComponent_UpdateAllInstanceByRelativeLocation_Params
{
	TArray<struct FVector>                             RelativeLocations;                                        // (Parm, ZeroConstructor)
	struct FVector                                     Scale;                                                    // (Parm, IsPlainOldData)
};

// Function Creative.CreativeInstanceStaticMeshComponent.UnInitInstancedStaticMeshComponntByGroupBuild
struct UCreativeInstanceStaticMeshComponent_UnInitInstancedStaticMeshComponntByGroupBuild_Params
{
};

// Function Creative.CreativeInstanceStaticMeshComponent.SetISMMaterial
struct UCreativeInstanceStaticMeshComponent_SetISMMaterial_Params
{
	class UMaterialInterface*                          NewMaterial;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeInstanceStaticMeshComponent.OnStaticMeshAsyncLoaded
struct UCreativeInstanceStaticMeshComponent_OnStaticMeshAsyncLoaded_Params
{
	struct FSoftObjectPath                             SoftObjectPath;                                           // (Parm)
};

// Function Creative.CreativeInstanceStaticMeshComponent.OnReturnToPool
struct UCreativeInstanceStaticMeshComponent_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RecycledSeq;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeInstanceStaticMeshComponent.OnPickFromPool
struct UCreativeInstanceStaticMeshComponent_OnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function Creative.CreativeInstanceStaticMeshComponent.InitInstancedStaticMeshComponntByGroupBuild
struct UCreativeInstanceStaticMeshComponent_InitInstancedStaticMeshComponntByGroupBuild_Params
{
	class USceneComponent*                             Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FTransform>                          InstanceTransforms;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     MeshPath;                                                 // (Parm, ZeroConstructor)
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeIntegralMechanismComponent.SetPlayerIntegral
struct UCreativeModeIntegralMechanismComponent_SetPlayerIntegral_Params
{
	struct FString                                     UID;                                                      // (Parm, ZeroConstructor)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curIntegral;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curStageIntegral;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                integralAddSeq;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeIntegralMechanismComponent.OnRepPlayerIntegralsOverride
struct UCreativeModeIntegralMechanismComponent_OnRepPlayerIntegralsOverride_Params
{
};

// Function Creative.CreativeModeIntegralMechanismComponent.OnRep_PlayerIntegrals
struct UCreativeModeIntegralMechanismComponent_OnRep_PlayerIntegrals_Params
{
};

// Function Creative.CreativeModeIntegralMechanismComponent.ClearPlayerIntegrals
struct UCreativeModeIntegralMechanismComponent_ClearPlayerIntegrals_Params
{
};

// Function Creative.CreativeModeIntegralMechanismLiteComponent.SetPlayerIntegral
struct UCreativeModeIntegralMechanismLiteComponent_SetPlayerIntegral_Params
{
	struct FString                                     UID;                                                      // (Parm, ZeroConstructor)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curIntegral;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curStageIntegral;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                integralAddSeq;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeIntegralMechanismLiteComponent.PlayerIntegralContains
struct UCreativeModeIntegralMechanismLiteComponent_PlayerIntegralContains_Params
{
	struct FString                                     UID;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRepPlayerIntegralsOverride
struct UCreativeModeIntegralMechanismLiteComponent_OnRepPlayerIntegralsOverride_Params
{
};

// Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_TestIndex
struct UCreativeModeIntegralMechanismLiteComponent_OnRep_TestIndex_Params
{
	int                                                LastIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_PlayerIntegrals
struct UCreativeModeIntegralMechanismLiteComponent_OnRep_PlayerIntegrals_Params
{
};

// Function Creative.CreativeModeIntegralMechanismLiteComponent.ClearPlayerIntegrals
struct UCreativeModeIntegralMechanismLiteComponent_ClearPlayerIntegrals_Params
{
};

// Function Creative.CreativeItemGeneratorComponent.SetWeightMul
struct UCreativeItemGeneratorComponent_SetWeightMul_Params
{
	TMap<struct FString, int>                          Weight;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeItemGeneratorComponent.SetAddSpotPercentMul
struct UCreativeItemGeneratorComponent_SetAddSpotPercentMul_Params
{
	float                                              percent;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeItemGeneratorComponent.ClearWeightMul
struct UCreativeItemGeneratorComponent_ClearWeightMul_Params
{
};

// Function Creative.CreativeLoadManager.UnloadSomeObjects
struct UCreativeLoadManager_UnloadSomeObjects_Params
{
	TArray<struct FString>                             InstanceIDs;                                              // (Parm, ZeroConstructor)
	bool                                               bRemovePhysicsObject;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeLoadManager.UnloadObject
struct UCreativeLoadManager_UnloadObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               bRemovePhysicsObject;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeLoadManager.LoadSomeObjects
struct UCreativeLoadManager_LoadSomeObjects_Params
{
	TArray<struct FString>                             InstanceIDs;                                              // (Parm, ZeroConstructor)
	bool                                               bLoadImmediately;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeLoadManager.LoadObject
struct UCreativeLoadManager_LoadObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeLoadManager.Get
struct UCreativeLoadManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeLoadManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLoadManager.AddObject
struct UCreativeLoadManager_AddObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FCreativeInstanceNode                       InstanceNode;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Creative.CreativeLuaCodeManager.ReceiveOnGameStateBeginPlay
struct UCreativeLuaCodeManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeLuaCodeManager.OnPreCreativeLuaVMUnLoad
struct UCreativeLuaCodeManager_OnPreCreativeLuaVMUnLoad_Params
{
};

// Function Creative.CreativeLuaCodeManager.OnGameStateBeginPlay
struct UCreativeLuaCodeManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeLuaCodeManager.OnCreativeLuaInitialized
struct UCreativeLuaCodeManager_OnCreativeLuaInitialized_Params
{
};

// Function Creative.CreativeLuaCodeManager.Get
struct UCreativeLuaCodeManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeLuaCodeManager*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLuaEntityManager.UUID2UObject
struct UCreativeLuaEntityManager_UUID2UObject_Params
{
	int64_t                                            UUID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLuaEntityManager.UUID2Type
struct UCreativeLuaEntityManager_UUID2Type_Params
{
	int64_t                                            UUID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EEntityType                                        Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLuaEntityManager.UUID2Key
struct UCreativeLuaEntityManager_UUID2Key_Params
{
	int64_t                                            UUID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLuaEntityManager.ResetAll
struct UCreativeLuaEntityManager_ResetAll_Params
{
};

// Function Creative.CreativeLuaEntityManager.RemoveUUID
struct UCreativeLuaEntityManager_RemoveUUID_Params
{
	int64_t                                            UUID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeLuaEntityManager.LuaUUID2UObject
struct UCreativeLuaEntityManager_LuaUUID2UObject_Params
{
	struct FString                                     UUID;                                                     // (Parm, OutParm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLuaEntityManager.LuaUUID2Type
struct UCreativeLuaEntityManager_LuaUUID2Type_Params
{
	struct FString                                     UUID;                                                     // (Parm, OutParm, ZeroConstructor)
	EEntityType                                        Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLuaEntityManager.LuaUUID2Key
struct UCreativeLuaEntityManager_LuaUUID2Key_Params
{
	struct FString                                     UUID;                                                     // (Parm, OutParm, ZeroConstructor)
	EEntityType                                        Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeLuaEntityManager.LuaRemoveUUID
struct UCreativeLuaEntityManager_LuaRemoveUUID_Params
{
	struct FString                                     UUID;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeLuaEntityManager.LuaCreateEntityIfNotExistsFromUObject
struct UCreativeLuaEntityManager_LuaCreateEntityIfNotExistsFromUObject_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EEntityType                                        Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeLuaEntityManager.GetInstanceObjectUUID
struct UCreativeLuaEntityManager_GetInstanceObjectUUID_Params
{
	int64_t                                            UUID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLuaEntityManager.Get
struct UCreativeLuaEntityManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeLuaEntityManager*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLuaEntityManager.GenUUID
struct UCreativeLuaEntityManager_GenUUID_Params
{
	struct FString                                     Key;                                                      // (Parm, OutParm, ZeroConstructor)
	EEntityType                                        Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLuaEntityManager.CreateEntityIfNotExistsFromUObject
struct UCreativeLuaEntityManager_CreateEntityIfNotExistsFromUObject_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EEntityType                                        Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLuaEntityManager.CreateEntityIfNotExistsFromKey
struct UCreativeLuaEntityManager_CreateEntityIfNotExistsFromKey_Params
{
	uint32_t                                           Key;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EEntityType                                        Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLuaSignalManager.SpawnApiObjectsByConfig
struct UCreativeLuaSignalManager_SpawnApiObjectsByConfig_Params
{
};

// Function Creative.CreativeLuaSignalManager.RegisterObject
struct UCreativeLuaSignalManager_RegisterObject_Params
{
	class UCreativeApiObject*                          NewObject;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeLuaSignalManager.OnPreCreativeLuaVMUnLoad
struct UCreativeLuaSignalManager_OnPreCreativeLuaVMUnLoad_Params
{
};

// Function Creative.CreativeLuaSignalManager.OnCreativeLuaVMLoaded
struct UCreativeLuaSignalManager_OnCreativeLuaVMLoaded_Params
{
};

// Function Creative.CreativeLuaSignalManager.GetObject
struct UCreativeLuaSignalManager_GetObject_Params
{
	struct FString                                     ModuleName;                                               // (Parm, ZeroConstructor)
	class UCreativeApiObject*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLuaSignalManager.GetCreativeLuaVM
struct UCreativeLuaSignalManager_GetCreativeLuaVM_Params
{
	class UCreativeBridgeLuaVM*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLuaSignalManager.Get
struct UCreativeLuaSignalManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeLuaSignalManager*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLuaSignalManager.ExecuteAPI
struct UCreativeLuaSignalManager_ExecuteAPI_Params
{
	class UCreativeBridgeLuaVM*                        VM;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ModuleName;                                               // (Parm, OutParm, ZeroConstructor)
	struct FString                                     FuncName;                                                 // (Parm, OutParm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLuaSignalManager.ClearAllObjects
struct UCreativeLuaSignalManager_ClearAllObjects_Params
{
};

// Function Creative.CreativeLuaTraitManager.GetSupportEntitiesByTraits
struct UCreativeLuaTraitManager_GetSupportEntitiesByTraits_Params
{
	TArray<struct FString>                             TraitNames;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeLuaTraitManager.GetSupportEntitiesByTrait
struct UCreativeLuaTraitManager_GetSupportEntitiesByTrait_Params
{
	struct FString                                     TraitName;                                                // (Parm, ZeroConstructor)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeLuaTraitManager.Get
struct UCreativeLuaTraitManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeLuaTraitManager*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLuaVMManager.UnRegisterGameTypePreChangedDelegate
struct UCreativeLuaVMManager_UnRegisterGameTypePreChangedDelegate_Params
{
};

// Function Creative.CreativeLuaVMManager.RegisterGameTypePreChangedDelegate
struct UCreativeLuaVMManager_RegisterGameTypePreChangedDelegate_Params
{
};

// Function Creative.CreativeLuaVMManager.ReceiveOnGameStateBeginPlay
struct UCreativeLuaVMManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeLuaVMManager.ReceiveCheckAndLoadLuaVM
struct UCreativeLuaVMManager_ReceiveCheckAndLoadLuaVM_Params
{
};

// Function Creative.CreativeLuaVMManager.OnLuaVMAtPanic
struct UCreativeLuaVMManager_OnLuaVMAtPanic_Params
{
	struct FString                                     ErrMsg;                                                   // (Parm, ZeroConstructor)
};

// Function Creative.CreativeLuaVMManager.OnGameTypePreChanged
struct UCreativeLuaVMManager_OnGameTypePreChanged_Params
{
	unsigned char                                      LastGameType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CurrentGameType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeLuaVMManager.OnGameStateBeginPlay
struct UCreativeLuaVMManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeLuaVMManager.LoadLuaVM
struct UCreativeLuaVMManager_LoadLuaVM_Params
{
};

// Function Creative.CreativeLuaVMManager.GetCreativeLuaVM
struct UCreativeLuaVMManager_GetCreativeLuaVM_Params
{
	class UCreativeBridgeLuaVM*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLuaVMManager.Get
struct UCreativeLuaVMManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeLuaVMManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLuaVMManager.CreativeLuaVMLoaded
struct UCreativeLuaVMManager_CreativeLuaVMLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeLuaVMManager.CreativeLuaInitialized
struct UCreativeLuaVMManager_CreativeLuaInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeModDataCheckManager.ReceiveOnPreAddInstance
struct UCreativeModeModDataCheckManager_ReceiveOnPreAddInstance_Params
{
};

// Function Creative.CreativeModeModDataCheckManager.ReceiveOnPostAddInstance
struct UCreativeModeModDataCheckManager_ReceiveOnPostAddInstance_Params
{
};

// Function Creative.CreativeModeModDataCheckManager.OnPreAddInstance
struct UCreativeModeModDataCheckManager_OnPreAddInstance_Params
{
};

// Function Creative.CreativeModeModDataCheckManager.OnPostAddInstance
struct UCreativeModeModDataCheckManager_OnPostAddInstance_Params
{
};

// Function Creative.CreativeModeModDataCheckManager.Get
struct UCreativeModeModDataCheckManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeModeModDataCheckManager*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeChatBubbleUI.TickLua
struct UCreativeModeChatBubbleUI_TickLua_Params
{
};

// Function Creative.CreativeModeChatBubbleUI.ForceUpdatePosition
struct UCreativeModeChatBubbleUI_ForceUpdatePosition_Params
{
};

// Function Creative.CreativeModeGlobalManagerCenter.OnCreativeDelegateCreated
struct UCreativeModeGlobalManagerCenter_OnCreativeDelegateCreated_Params
{
};

// Function Creative.CreativeModeStaticMeshBatchActor.SetISMStaticMeshAndMaterials
struct ACreativeModeStaticMeshBatchActor_SetISMStaticMeshAndMaterials_Params
{
	class UInstancedStaticMeshComponent*               InstancedStaticMeshComponent;                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                AssetId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StaticMeshIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaterialID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeTouchWidget.OnHandleTouchStart
struct UCreativeModeTouchWidget_OnHandleTouchStart_Params
{
	struct FGeometry                                   MyGeometry;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeModeTouchWidget.OnHandleTouchMove
struct UCreativeModeTouchWidget_OnHandleTouchMove_Params
{
	struct FGeometry                                   MyGeometry;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeModeTouchWidget.OnHandleTouchEnd
struct UCreativeModeTouchWidget_OnHandleTouchEnd_Params
{
	struct FGeometry                                   MyGeometry;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeModeTouchWidget.OnHandleTouch
struct UCreativeModeTouchWidget_OnHandleTouch_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Pos;                                                      // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.SetTimeSliceConfig
struct UCreativeModeNavigationManager_SetTimeSliceConfig_Params
{
	int                                                MaxTaskPerSlice;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SliceTimeLen;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.SetNavmeshBuildPolicy
struct UCreativeModeNavigationManager_SetNavmeshBuildPolicy_Params
{
	int                                                PolicyVal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.SetDynamicModeEnable
struct UCreativeModeNavigationManager_SetDynamicModeEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.SetDebugOutputEnable
struct UCreativeModeNavigationManager_SetDebugOutputEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.SetConcurrentTaskNum
struct UCreativeModeNavigationManager_SetConcurrentTaskNum_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.SerializeDynamicTileToByteArr
struct UCreativeModeNavigationManager_SerializeDynamicTileToByteArr_Params
{
	int                                                MaxFileSize;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxTileToAdd;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeNavigationManager.RevokePendingBuildingTasks
struct UCreativeModeNavigationManager_RevokePendingBuildingTasks_Params
{
};

// Function Creative.CreativeModeNavigationManager.ReceiveOnUnInit
struct UCreativeModeNavigationManager_ReceiveOnUnInit_Params
{
};

// Function Creative.CreativeModeNavigationManager.ReceiveOnInit
struct UCreativeModeNavigationManager_ReceiveOnInit_Params
{
};

// Function Creative.CreativeModeNavigationManager.RebuildDynamicTilesByCoord
struct UCreativeModeNavigationManager_RebuildDynamicTilesByCoord_Params
{
	TArray<struct FIntPoint>                           DynamicTiles;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeNavigationManager.RebuildDynamicTiles
struct UCreativeModeNavigationManager_RebuildDynamicTiles_Params
{
	TArray<class AActor*>                              Actors;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeNavigationManager.IsBuildingInProgress
struct UCreativeModeNavigationManager_IsBuildingInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.ImportDynamicTile
struct UCreativeModeNavigationManager_ImportDynamicTile_Params
{
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeNavigationManager.GetDynamicTilesCount
struct UCreativeModeNavigationManager_GetDynamicTilesCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.GetDynamicTileMemCost
struct UCreativeModeNavigationManager_GetDynamicTileMemCost_Params
{
	int                                                Total;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OctTree;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TileCache;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                DynamicTile;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                DynamicTileCount;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.GetDynamicTileCoordByPos
struct UCreativeModeNavigationManager_GetDynamicTileCoordByPos_Params
{
	struct FVector                                     Pos;                                                      // (Parm, IsPlainOldData)
	struct FIntPoint                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.GetAllAssociateActors
struct UCreativeModeNavigationManager_GetAllAssociateActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeNavigationManager.Get
struct UCreativeModeNavigationManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeModeNavigationManager*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeNavigationManager.ExportDynamicTile
struct UCreativeModeNavigationManager_ExportDynamicTile_Params
{
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeNavigationManager.DeserializeDynamicTileFromByteArr
struct UCreativeModeNavigationManager_DeserializeDynamicTileFromByteArr_Params
{
	TArray<unsigned char>                              ByteArr;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativeModeNavigationManager.ClearNavCollision
struct UCreativeModeNavigationManager_ClearNavCollision_Params
{
};

// Function Creative.CreativeModeNavigationManager.ClearDynamicOctreeData
struct UCreativeModeNavigationManager_ClearDynamicOctreeData_Params
{
};

// Function Creative.CreativeModeNavigationManager.ClearDynamicNavMesh
struct UCreativeModeNavigationManager_ClearDynamicNavMesh_Params
{
};

// Function Creative.CreativeModeNavigationManager.ClearAssociateActors
struct UCreativeModeNavigationManager_ClearAssociateActors_Params
{
};

// Function Creative.CreativeModeNavigationManager.CalSamplePointsInBoxLegacy
struct UCreativeModeNavigationManager_CalSamplePointsInBoxLegacy_Params
{
	struct FVector                                     BoxMin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     BoxMax;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              StepSize;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxPoints;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeNavigationManager.CalSamplePointsInBox
struct UCreativeModeNavigationManager_CalSamplePointsInBox_Params
{
	struct FVector                                     BoxMin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     BoxMax;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              StepSize;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxPoints;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeNavigationManager.CalSamplePoints
struct UCreativeModeNavigationManager_CalSamplePoints_Params
{
	struct FVector                                     StartPos;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              StepSize;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxPoints;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModeNavigationManager.AddNavAffectedObjects
struct UCreativeModeNavigationManager_AddNavAffectedObjects_Params
{
	TArray<class AActor*>                              Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeModeNavigationManager.AddNavAffectedObject
struct UCreativeModeNavigationManager_AddNavAffectedObject_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeObjectEditAxisActor.StartEdit
struct ACreativeObjectEditAxisActor_StartEdit_Params
{
	int                                                Axis;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Pos;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitPos;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativeObjectEditAxisActor.SetForceHideAxis
struct ACreativeObjectEditAxisActor_SetForceHideAxis_Params
{
	struct FVector                                     State;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativeObjectEditAxisActor.SetFixedAxisSize
struct ACreativeObjectEditAxisActor_SetFixedAxisSize_Params
{
	float                                              FixedSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeObjectEditAxisActor.SetEditType
struct ACreativeObjectEditAxisActor_SetEditType_Params
{
	int                                                InEditType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InEditSubType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeObjectEditAxisActor.SetComponentVisible
struct ACreativeObjectEditAxisActor_SetComponentVisible_Params
{
	class USceneComponent*                             comp;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeObjectEditAxisActor.SetAxisState
struct ACreativeObjectEditAxisActor_SetAxisState_Params
{
	struct FVector                                     State;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativeObjectEditAxisActor.MarkEditing
struct ACreativeObjectEditAxisActor_MarkEditing_Params
{
	bool                                               bDoing;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeObjectEditAxisActor.CalScale
struct ACreativeObjectEditAxisActor_CalScale_Params
{
	struct FVector2D                                   Pos;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutScale;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function Creative.CreativeObjectEditAxisActor.CalRotation
struct ACreativeObjectEditAxisActor_CalRotation_Params
{
	struct FVector2D                                   Pos;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    OutRot;                                                   // (Parm, OutParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectEditAxisActor.CalLocation
struct ACreativeObjectEditAxisActor_CalLocation_Params
{
	struct FVector2D                                   Pos;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutLoc;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function Creative.CreativeModeObjectInterface.ReceiveOnPostSetInstanceId
struct UCreativeModeObjectInterface_ReceiveOnPostSetInstanceId_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeObjectLocalAxisActor.SetAxisComponents
struct ACreativeObjectLocalAxisActor_SetAxisComponents_Params
{
	class USceneComponent*                             Axis;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Grid;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Creative.CreativeObjectLocalAxisActor.NeedUpdate
struct ACreativeObjectLocalAxisActor_NeedUpdate_Params
{
};

// Function Creative.CreativeObjectManager.SpawnObjectForStreaming
struct UCreativeObjectManager_SpawnObjectForStreaming_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeObjectManager.SpawnObject
struct UCreativeObjectManager_SpawnObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.SetObjectTempStreamingType
struct UCreativeObjectManager_SetObjectTempStreamingType_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	ECreativeModeActorStreamingType                    TempStreamingType;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.ResetObjectStreamingType
struct UCreativeObjectManager_ResetObjectStreamingType_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.RemoveSpawnObjectInfoFormQueue
struct UCreativeObjectManager_RemoveSpawnObjectInfoFormQueue_Params
{
	struct FString                                     InstanceID;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.RemovePhysicsObject
struct UCreativeObjectManager_RemovePhysicsObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeObjectManager.RemoveObject
struct UCreativeObjectManager_RemoveObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               bRemovePhysicsObject;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.RemoveDestroyObjectInfoFormQueue
struct UCreativeObjectManager_RemoveDestroyObjectInfoFormQueue_Params
{
	struct FString                                     InstanceID;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.ReceiveUnregisterObject
struct UCreativeObjectManager_ReceiveUnregisterObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class UObject*                                     NewObject;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.ReceiveRegisterObject
struct UCreativeObjectManager_ReceiveRegisterObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class UObject*                                     NewObject;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.ReceiveOnPostLoadMapWithWorld
struct UCreativeObjectManager_ReceiveOnPostLoadMapWithWorld_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.ReceiveClearAllObjects
struct UCreativeObjectManager_ReceiveClearAllObjects_Params
{
};

// Function Creative.CreativeObjectManager.OnPostLoadMapWithWorld
struct UCreativeObjectManager_OnPostLoadMapWithWorld_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.OnObjectSpawnComplete
struct UCreativeObjectManager_OnObjectSpawnComplete_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Creative.CreativeObjectManager.IsLogicObject
struct UCreativeObjectManager_IsLogicObject_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.IsGroupObject
struct UCreativeObjectManager_IsGroupObject_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.IsCanBatchObject
struct UCreativeObjectManager_IsCanBatchObject_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.GetObjectTransform
struct UCreativeObjectManager_GetObjectTransform_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.GetObjectNum
struct UCreativeObjectManager_GetObjectNum_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.GetObjectAssetPath
struct UCreativeObjectManager_GetObjectAssetPath_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeObjectManager.GetObjectAssetID
struct UCreativeObjectManager_GetObjectAssetID_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.GetObject
struct UCreativeObjectManager_GetObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.GetActiveObjectNum
struct UCreativeObjectManager_GetActiveObjectNum_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.Get
struct UCreativeObjectManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeObjectManager*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.DestroyObjectForStreaming
struct UCreativeObjectManager_DestroyObjectForStreaming_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeObjectManager.DestroyObject
struct UCreativeObjectManager_DestroyObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.CheckObjectBeBatch
struct UCreativeObjectManager_CheckObjectBeBatch_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.ChangeObjectTransform
struct UCreativeObjectManager_ChangeObjectTransform_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.AddSpawnObjectToQueue
struct UCreativeObjectManager_AddSpawnObjectToQueue_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.AddObject
struct UCreativeObjectManager_AddObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FCreativeModeStreamingParameters            StreamingParameters;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeObjectManager.AddDestroyObjectToQueue
struct UCreativeObjectManager_AddDestroyObjectToQueue_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeObjectStateManager.ReceiveOnGameStateBeginPlay
struct UCreativeObjectStateManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeObjectStateManager.OnGameStateBeginPlay
struct UCreativeObjectStateManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeObjectStateManager.Get
struct UCreativeObjectStateManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeObjectStateManager*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeOfflineBuildManager.ReceiveOnPostSetLuaEventBridgeInstance
struct UCreativeOfflineBuildManager_ReceiveOnPostSetLuaEventBridgeInstance_Params
{
};

// Function Creative.CreativeOfflineBuildManager.OnPostSetLuaEventBridgeInstance
struct UCreativeOfflineBuildManager_OnPostSetLuaEventBridgeInstance_Params
{
};

// Function Creative.CreativeOfflineBuildManager.Get
struct UCreativeOfflineBuildManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeOfflineBuildManager*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePerfManager.ReceiveOnGameStateBeginPlay
struct UCreativePerfManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePerfManager.OnGameStateBeginPlay
struct UCreativePerfManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePerfManager.GetUObjectMemoryUsage
struct UCreativePerfManager_GetUObjectMemoryUsage_Params
{
	TMap<struct FName, float>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativePerfManager.GetResult
struct UCreativePerfManager_GetResult_Params
{
	TArray<struct FCreaitvePerfDataMap>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativePerfManager.GetNetData
struct UCreativePerfManager_GetNetData_Params
{
	struct FCreativeNetData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativePerfManager.GetMemoryData
struct UCreativePerfManager_GetMemoryData_Params
{
	struct FCreativeMemoryData                         ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePerfManager.GetCPUUsage
struct UCreativePerfManager_GetCPUUsage_Params
{
	float                                              OutCPUTimePct;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutCPUTimePctRelative;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePerfManager.Get
struct UCreativePerfManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativePerfManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePerfManager.EndSample
struct UCreativePerfManager_EndSample_Params
{
};

// Function Creative.CreativePerfManager.BeginSample
struct UCreativePerfManager_BeginSample_Params
{
};

// Function Creative.CreativePerfManager.AddActorToRecord
struct UCreativePerfManager_AddActorToRecord_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AssetId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ScopeName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhotonDestructibleMeshComponent.SetInstanceActive
struct UCreativePhotonDestructibleMeshComponent_SetInstanceActive_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhotonDestructibleMeshComponent.SetDestructionParam
struct UCreativePhotonDestructibleMeshComponent_SetDestructionParam_Params
{
	struct FPhotonDestructionParam                     Param;                                                    // (Parm)
};

// Function Creative.CreativePhotonDestructibleMeshComponent.SetCreativeServerDamagedDelegate
struct UCreativePhotonDestructibleMeshComponent_SetCreativeServerDamagedDelegate_Params
{
	struct FScriptDelegate                             del;                                                      // (Parm, ZeroConstructor)
};

// Function Creative.CreativePhotonDestructibleMeshComponent.SetCreativeClientFragmentStateChangedDelegate
struct UCreativePhotonDestructibleMeshComponent_SetCreativeClientFragmentStateChangedDelegate_Params
{
	struct FScriptDelegate                             del;                                                      // (Parm, ZeroConstructor)
};

// Function Creative.CreativePhotonDestructibleMeshComponent.RebornOneFragment
struct UCreativePhotonDestructibleMeshComponent_RebornOneFragment_Params
{
	int                                                FragmentIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhotonDestructibleMeshComponent.RebornInstance
struct UCreativePhotonDestructibleMeshComponent_RebornInstance_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhotonDestructibleMeshComponent.RandomRecoverOneFragment
struct UCreativePhotonDestructibleMeshComponent_RandomRecoverOneFragment_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhotonDestructibleMeshComponent.RandomDestroyOneFragment
struct UCreativePhotonDestructibleMeshComponent_RandomDestroyOneFragment_Params
{
};

// Function Creative.CreativePhotonDestructibleMeshComponent.DestroyInstance
struct UCreativePhotonDestructibleMeshComponent_DestroyInstance_Params
{
};

// Function Creative.CreativePhotonDestructibleMeshComponent.CheckFragmentOverlap
struct UCreativePhotonDestructibleMeshComponent_CheckFragmentOverlap_Params
{
	int                                                FragmentIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetServerDamagedInstancedDelegate
struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_SetServerDamagedInstancedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetInstanceMaxHp
struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_SetInstanceMaxHp_Params
{
	int                                                InstanceIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxHP;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetInstanceActive
struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_SetInstanceActive_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetDestructionParam
struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_SetDestructionParam_Params
{
	TArray<int>                                        InstanceIndex;                                            // (Parm, ZeroConstructor)
	TArray<struct FPhotonDestructionParam>             DestructionParams;                                        // (Parm, ZeroConstructor)
};

// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RebornOneFragment
struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_RebornOneFragment_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	int                                                FragmentIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RebornInstance
struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_RebornInstance_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RandomRecoverOneFragment
struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_RandomRecoverOneFragment_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RandomDestroyOneFragment
struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_RandomDestroyOneFragment_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.OnClientInitial
struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_OnClientInitial_Params
{
	int                                                InstanceIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ImpactFragmentItemIndex;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.OnClientDamaged
struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_OnClientDamaged_Params
{
	int                                                InstanceIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ImpactFragmentItemIndex;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     LocalImpactPoint;                                         // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     LocalVelocity;                                            // (ConstParm, Parm, IsPlainOldData)
	int                                                HitType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.GetUGCInstanceID
struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_GetUGCInstanceID_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.DestroyInstance
struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_DestroyInstance_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.CheckFragmentOverlap
struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_CheckFragmentOverlap_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FragmentIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetServerDamagedInstancedDelegate
struct UCreativePhotonInstancedDestructibleMeshComponent_SetServerDamagedInstancedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetInstanceMaxHp
struct UCreativePhotonInstancedDestructibleMeshComponent_SetInstanceMaxHp_Params
{
	int                                                InstanceIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxHP;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetInstanceActive
struct UCreativePhotonInstancedDestructibleMeshComponent_SetInstanceActive_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetDestructionParam
struct UCreativePhotonInstancedDestructibleMeshComponent_SetDestructionParam_Params
{
	TArray<int>                                        InstanceIndex;                                            // (Parm, ZeroConstructor)
	TArray<struct FPhotonDestructionParam>             DestructionParams;                                        // (Parm, ZeroConstructor)
};

// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RebornOneFragment
struct UCreativePhotonInstancedDestructibleMeshComponent_RebornOneFragment_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	int                                                FragmentIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RebornInstance
struct UCreativePhotonInstancedDestructibleMeshComponent_RebornInstance_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RandomRecoverOneFragment
struct UCreativePhotonInstancedDestructibleMeshComponent_RandomRecoverOneFragment_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RandomDestroyOneFragment
struct UCreativePhotonInstancedDestructibleMeshComponent_RandomDestroyOneFragment_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.OnClientInitial
struct UCreativePhotonInstancedDestructibleMeshComponent_OnClientInitial_Params
{
	int                                                InstanceIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ImpactFragmentItemIndex;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.OnClientDamaged
struct UCreativePhotonInstancedDestructibleMeshComponent_OnClientDamaged_Params
{
	int                                                InstanceIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ImpactFragmentItemIndex;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     LocalImpactPoint;                                         // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     LocalVelocity;                                            // (ConstParm, Parm, IsPlainOldData)
	int                                                HitType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.GetUGCInstanceID
struct UCreativePhotonInstancedDestructibleMeshComponent_GetUGCInstanceID_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.DestroyInstance
struct UCreativePhotonInstancedDestructibleMeshComponent_DestroyInstance_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.CheckFragmentOverlap
struct UCreativePhotonInstancedDestructibleMeshComponent_CheckFragmentOverlap_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FragmentIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsBatchActor.UpdatePhysicsComponentMaterial
struct ACreativePhysicsBatchActor_UpdatePhysicsComponentMaterial_Params
{
	struct FString                                     ComponentID;                                              // (Parm, OutParm, ZeroConstructor)
	struct FString                                     MaterialPath;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Creative.CreativePhysicsBatchActor.UpdatePhysicsComponent
struct ACreativePhysicsBatchActor_UpdatePhysicsComponent_Params
{
	struct FString                                     ComponentID;                                              // (Parm, OutParm, ZeroConstructor)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhysicsBatchActor.UnRegisterPhysicsComponent
struct ACreativePhysicsBatchActor_UnRegisterPhysicsComponent_Params
{
	struct FString                                     ComponentID;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsBatchActor.SetPhysicsComponentEnabled
struct ACreativePhysicsBatchActor_SetPhysicsComponentEnabled_Params
{
	struct FString                                     ComponentID;                                              // (Parm, OutParm, ZeroConstructor)
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhysicsBatchActor.RegisterPhysicsComponentByMesh
struct ACreativePhysicsBatchActor_RegisterPhysicsComponentByMesh_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     ComponentID;                                              // (Parm, ZeroConstructor)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	struct FString                                     MeshPath;                                                 // (Parm, ZeroConstructor)
	struct FName                                       CollisionProfileName;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhysicsBatchActor.OnLoadMeshSuccessByPath
struct ACreativePhysicsBatchActor_OnLoadMeshSuccessByPath_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ComponentID;                                              // (Parm, ZeroConstructor)
};

// Function Creative.CreativePhysicsBatchActor.OnLoadMeshSuccess
struct ACreativePhysicsBatchActor_OnLoadMeshSuccess_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ComponentID;                                              // (Parm, ZeroConstructor)
};

// Function Creative.CreativePhysicsBatchActor.IsLoadFinish
struct ACreativePhysicsBatchActor_IsLoadFinish_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsBatchActor.GetRegisterNum
struct ACreativePhysicsBatchActor_GetRegisterNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsBatchActor.GetPhysicsComponent
struct ACreativePhysicsBatchActor_GetPhysicsComponent_Params
{
	struct FString                                     ComponentID;                                              // (Parm, OutParm, ZeroConstructor)
	class UCreativePhysicsComponent*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Creative.CreativePhysicsBatchActor.ClearAllPhysicsComponent
struct ACreativePhysicsBatchActor_ClearAllPhysicsComponent_Params
{
};

// Function Creative.CreativePhysicsComponent.SetIsReplicatedOnly
struct UCreativePhysicsComponent_SetIsReplicatedOnly_Params
{
	bool                                               ShouldReplicate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhysicsComponent.OnLoadMaterialSuccess
struct UCreativePhysicsComponent_OnLoadMaterialSuccess_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
};

// Function Creative.CreativePhysicsManager.UpdatePhysicsObjectCellInfo
struct UCreativePhysicsManager_UpdatePhysicsObjectCellInfo_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  CellIndex;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.SetStreamingEnable
struct UCreativePhysicsManager_SetStreamingEnable_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.SetPhysicsActorVisible
struct UCreativePhysicsManager_SetPhysicsActorVisible_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  CellIndex;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.RemovePhysicsObject
struct UCreativePhysicsManager_RemovePhysicsObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativePhysicsManager.PreAddPhysicsObjectCheck
struct UCreativePhysicsManager_PreAddPhysicsObjectCheck_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.OnPhysicsBatchActorLoadFinish
struct UCreativePhysicsManager_OnPhysicsBatchActorLoadFinish_Params
{
};

// Function Creative.CreativePhysicsManager.IsPhysicsActorVisible
struct UCreativePhysicsManager_IsPhysicsActorVisible_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  CellIndex;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.GetPhysicsBatchActorByInstanceID
struct UCreativePhysicsManager_GetPhysicsBatchActorByInstanceID_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class ACreativePhysicsBatchActor*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.GetPhysicsBatchActor
struct UCreativePhysicsManager_GetPhysicsBatchActor_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  Index;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class ACreativePhysicsBatchActor*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.GetGlobalPhysicsBatchActor
struct UCreativePhysicsManager_GetGlobalPhysicsBatchActor_Params
{
	class ACreativePhysicsBatchActor*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.GetAllPhysicsActor
struct UCreativePhysicsManager_GetAllPhysicsActor_Params
{
	TArray<class ACreativePhysicsBatchActor*>          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativePhysicsManager.Get
struct UCreativePhysicsManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativePhysicsManager*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.ClearAllPhysicsBatchActor
struct UCreativePhysicsManager_ClearAllPhysicsBatchActor_Params
{
};

// Function Creative.CreativePhysicsManager.ChangePhysicsObjectIsPrefab
struct UCreativePhysicsManager_ChangePhysicsObjectIsPrefab_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	bool                                               bIsPrefab;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePhysicsManager.AddPhysicsObject
struct UCreativePhysicsManager_AddPhysicsObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FIntVector                                  CellIndex;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativePlayerAPIObject.SetPlayerDirection
struct UCreativePlayerAPIObject_SetPlayerDirection_Params
{
	int64_t                                            PlayerUUID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePlayerAPIObject.GetPlayerTeamIndex
struct UCreativePlayerAPIObject_GetPlayerTeamIndex_Params
{
	int64_t                                            PlayerUUID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePlayerAPIObject.GetPlayerTeamIDAndTeamIndexFromCPP
struct UCreativePlayerAPIObject_GetPlayerTeamIDAndTeamIndexFromCPP_Params
{
	int64_t                                            PlayerUUID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutTeamID;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutTeamIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePlayerAPIObject.GetPlayerTeamID
struct UCreativePlayerAPIObject_GetPlayerTeamID_Params
{
	int64_t                                            PlayerUUID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePlayerAPIObject.GetPlayerMaxHealth
struct UCreativePlayerAPIObject_GetPlayerMaxHealth_Params
{
	int64_t                                            PlayerUUID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePlayerAPIObject.GetPlayerLocation
struct UCreativePlayerAPIObject_GetPlayerLocation_Params
{
	int64_t                                            PlayerUUID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePlayerAPIObject.GetPlayerHealth
struct UCreativePlayerAPIObject_GetPlayerHealth_Params
{
	int64_t                                            PlayerUUID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePlayerAPIObject.GetPlayerDirection
struct UCreativePlayerAPIObject_GetPlayerDirection_Params
{
	int64_t                                            PlayerUUID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePlayerAPIObject.AddPlayerHealth
struct UCreativePlayerAPIObject_AddPlayerHealth_Params
{
	int64_t                                            PlayerUUID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AddHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModePlayerState.ServerRemoveInstance
struct ACreativeModePlayerState_ServerRemoveInstance_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeModePlayerState.ServerReceiveModifyContent
struct ACreativeModePlayerState_ServerReceiveModifyContent_Params
{
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                idx;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeModePlayerState.ServerAddInstanceAdvance
struct ACreativeModePlayerState_ServerAddInstanceAdvance_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	int                                                idx;                                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Creative.CreativeModePlayerState.ServerAddInstance
struct ACreativeModePlayerState_ServerAddInstance_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativePoolInterface.SetRecycleTime
struct UCreativePoolInterface_SetRecycleTime_Params
{
	float                                              RecycleTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePoolInterface.SetIsRecycled
struct UCreativePoolInterface_SetIsRecycled_Params
{
	bool                                               IsRecycled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePoolInterface.ReceiveOnReturnToPool
struct UCreativePoolInterface_ReceiveOnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RecycledSeq;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePoolInterface.ReceiveOnPickFromPool
struct UCreativePoolInterface_ReceiveOnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function Creative.CreativePoolInterface.OnReturnToPool
struct UCreativePoolInterface_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RecycledSeq;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolInterface.OnPickFromPool
struct UCreativePoolInterface_OnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function Creative.CreativePoolInterface.GetUnusedComponentName
struct UCreativePoolInterface_GetUnusedComponentName_Params
{
	class UObject*                                     InOuter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NamePrefix;                                               // (Parm, OutParm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativePoolInterface.GetRecycleTime
struct UCreativePoolInterface_GetRecycleTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolInterface.CheckIsRecycled
struct UCreativePoolInterface_CheckIsRecycled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolManager.SetPoolManagerEnable
struct UCreativePoolManager_SetPoolManagerEnable_Params
{
	bool                                               bPoolManagerEnable;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePoolManager.ReturnObject
struct UCreativePoolManager_ReturnObject_Params
{
	int                                                PoolId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePoolManager.OnReceivePickObjectHandle
struct UCreativePoolManager_OnReceivePickObjectHandle_Params
{
	int                                                ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     InObj;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePoolManager.OnReceiveObjectReturnHandle
struct UCreativePoolManager_OnReceiveObjectReturnHandle_Params
{
	int                                                ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     InObj;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativePoolManager.OnReceiveDestroyHandle
struct UCreativePoolManager_OnReceiveDestroyHandle_Params
{
	int                                                ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     InObj;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolManager.OnReceiveCreateHandle
struct UCreativePoolManager_OnReceiveCreateHandle_Params
{
	int                                                ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolManager.InitPool
struct UCreativePoolManager_InitPool_Params
{
	int                                                PoolId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCreativeObjectPoolClassConfig              PoolConfig;                                               // (Parm, OutParm)
	bool                                               bPoolEnable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolManager.GetUnusedComponentName
struct UCreativePoolManager_GetUnusedComponentName_Params
{
	class UObject*                                     InOuter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NamePrefix;                                               // (Parm, OutParm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativePoolManager.GetObject
struct UCreativePoolManager_GetObject_Params
{
	int                                                PoolId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolManager.Get
struct UCreativePoolManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativePoolManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativePoolManager.ClearPoolObject
struct UCreativePoolManager_ClearPoolObject_Params
{
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.SetTeamGameOutcomeCondition
struct ACreativeRuntimePlayerBattleDataObject_SetTeamGameOutcomeCondition_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimeTeamGameOutcomeConditionInfo        TeamGameOutcomeCondition;                                 // (Parm, OutParm)
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.SetPlayerBattleData
struct ACreativeRuntimePlayerBattleDataObject_SetPlayerBattleData_Params
{
	uint64_t                                           UID;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimePlayerBattleDataInfo                PlayerBattleData;                                         // (Parm, OutParm)
	bool                                               bPropagateToChildren;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.ResetCurRoundPlayerBattleDataList
struct ACreativeRuntimePlayerBattleDataObject_ResetCurRoundPlayerBattleDataList_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepTeamGameOutcomeConditionInfo
struct ACreativeRuntimePlayerBattleDataObject_OnRepTeamGameOutcomeConditionInfo_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepCurRoundPlayerBattleDataInfo
struct ACreativeRuntimePlayerBattleDataObject_OnRepCurRoundPlayerBattleDataInfo_Params
{
	uint64_t                                           PlayerUID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChangeTeamID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.GetTeamGameOutcomeCondition
struct ACreativeRuntimePlayerBattleDataObject_GetTeamGameOutcomeCondition_Params
{
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimeTeamGameOutcomeConditionInfo        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundPlayerBattleData
struct ACreativeRuntimePlayerBattleDataObject_GetCurRoundPlayerBattleData_Params
{
	uint64_t                                           PlayerUID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimePlayerBattleDataInfo                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundAllPlayerBattleData
struct ACreativeRuntimePlayerBattleDataObject_GetCurRoundAllPlayerBattleData_Params
{
	TArray<struct FRuntimePlayerBattleDataInfo>        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundPlayerBattleData
struct ACreativeRuntimePlayerBattleDataObject_GetCacheRoundPlayerBattleData_Params
{
	int                                                RoundIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           PlayerUID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimePlayerBattleDataInfo                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundBattleData
struct ACreativeRuntimePlayerBattleDataObject_GetCacheRoundBattleData_Params
{
	int                                                RoundIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimeCacheRoundBattleDataInfo            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.GetAllRoundPlayerBattleData
struct ACreativeRuntimePlayerBattleDataObject_GetAllRoundPlayerBattleData_Params
{
	uint64_t                                           PlayerUID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRuntimePlayerBattleDataInfo                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Creative.CreativeRuntimePlayerBattleDataObject.CacheCurRoundBattleData
struct ACreativeRuntimePlayerBattleDataObject_CacheCurRoundBattleData_Params
{
	int                                                RoundIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSceneQueryManager.RemoveReplicateObject
struct UCreativeSceneQueryManager_RemoveReplicateObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSceneQueryManager.RemoveReplicateData
struct UCreativeSceneQueryManager_RemoveReplicateData_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
};

// Function Creative.CreativeSceneQueryManager.OnReceivePreReplicateDataRemove
struct UCreativeSceneQueryManager_OnReceivePreReplicateDataRemove_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function Creative.CreativeSceneQueryManager.OnReceivePostReplicateDataChange
struct UCreativeSceneQueryManager_OnReceivePostReplicateDataChange_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	TArray<class UObject*>                             Objects;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeSceneQueryManager.OnReceivePostReplicateDataAdd
struct UCreativeSceneQueryManager_OnReceivePostReplicateDataAdd_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	TArray<class UObject*>                             Objects;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Creative.CreativeSceneQueryManager.GetReplicatedObjects
struct UCreativeSceneQueryManager_GetReplicatedObjects_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeSceneQueryManager.Get
struct UCreativeSceneQueryManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeSceneQueryManager*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeSceneQueryManager.AddReplicateObjectPostDeferred
struct UCreativeSceneQueryManager_AddReplicateObjectPostDeferred_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
	class UObject*                                     ReplicatedObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSceneQueryManager.AddReplicateObjectDeferred
struct UCreativeSceneQueryManager_AddReplicateObjectDeferred_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class UClass*                                      ObjectClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
	ESpawnActorCollisionHandlingMethod                 CollisionHandlingOverride;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeSceneQueryManager.AddReplicateObject
struct UCreativeSceneQueryManager_AddReplicateObject_Params
{
	struct FString                                     InstanceID;                                               // (Parm, ZeroConstructor)
	class UClass*                                      ObjectClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FTransform                                  SpawnTransform;                                           // (Parm, IsPlainOldData)
	ESpawnActorCollisionHandlingMethod                 CollisionHandlingOverride;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeScreenCaptureWidget.OnPanelInitialized
struct UCreativeScreenCaptureWidget_OnPanelInitialized_Params
{
};

// Function Creative.CreativeModeSoftComponentManager.Get
struct UCreativeModeSoftComponentManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeModeSoftComponentManager*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeModeSoftComponentManager.ClearAllLoading
struct UCreativeModeSoftComponentManager_ClearAllLoading_Params
{
};

// Function Creative.SoftStaticMeshComponent.SetSoftStaticMeshAsync
struct USoftStaticMeshComponent_SetSoftStaticMeshAsync_Params
{
	struct FString                                     NewMeshPath;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.SoftStaticMeshComponent.SetSoftStaticMesh
struct USoftStaticMeshComponent_SetSoftStaticMesh_Params
{
	class UStaticMesh*                                 NewMesh;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetStaticMesh;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.SoftStaticMeshComponent.SetComponentOnlyRender
struct USoftStaticMeshComponent_SetComponentOnlyRender_Params
{
	bool                                               bOnlyRender;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.SoftStaticMeshComponent.OnClientAsyncLoaded
struct USoftStaticMeshComponent_OnClientAsyncLoaded_Params
{
	struct FSoftObjectPath                             SoftObjectPath;                                           // (Parm)
};

// Function Creative.SoftStaticMeshComponent.LoadSoftStaticMeshImmediately
struct USoftStaticMeshComponent_LoadSoftStaticMeshImmediately_Params
{
};

// Function Creative.CreativeSoftStaticMeshComponent.OnReturnToPool
struct UCreativeSoftStaticMeshComponent_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RecycledSeq;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeSoftStaticMeshComponent.OnPickFromPool
struct UCreativeSoftStaticMeshComponent_OnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function Creative.CreativeSpawnManager.SpawnTower
struct UCreativeSpawnManager_SpawnTower_Params
{
	int                                                ConfigId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Campid;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParamsID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeSpawnManager.SpawnHumanBot
struct UCreativeSpawnManager_SpawnHumanBot_Params
{
	int                                                ConfigId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Campid;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParamsID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeSpawnManager.SpawnAIPlayer
struct UCreativeSpawnManager_SpawnAIPlayer_Params
{
	int                                                ConfigId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Campid;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParamsID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeSpawnManager.OnUnitSpawned
struct UCreativeSpawnManager_OnUnitSpawned_Params
{
	class AActor*                                      NewUnit;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	ESpecType                                          SpecType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSpawnManager.OnOwnedTowerDead
struct UCreativeSpawnManager_OnOwnedTowerDead_Params
{
	class ASTExtraBaseCharacter*                       DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  KillingHitInfo;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     KillingHitImpulseDir;                                     // (Parm, IsPlainOldData)
	class UClass*                                      KillingHitDamageType;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSpawnManager.OnOwnedFakePlayerDead
struct UCreativeSpawnManager_OnOwnedFakePlayerDead_Params
{
	class ASTExtraBaseCharacter*                       DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  KillingHitInfo;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     KillingHitImpulseDir;                                     // (Parm, IsPlainOldData)
	class UClass*                                      KillingHitDamageType;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSpawnManager.OnOwnedAIPlayerDead
struct UCreativeSpawnManager_OnOwnedAIPlayerDead_Params
{
	class ASTExtraBaseCharacter*                       DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  KillingHitInfo;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     KillingHitImpulseDir;                                     // (Parm, IsPlainOldData)
	class UClass*                                      KillingHitDamageType;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSpawnManager.OnMonsterUnitDead
struct UCreativeSpawnManager_OnMonsterUnitDead_Params
{
	class ASTExtraSimpleCharacter*                     DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  KillingHitInfo;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     KillingHitImpulseDir;                                     // (Parm, IsPlainOldData)
	class UClass*                                      KillingHitDamageType;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSpawnManager.OnDeadWithCategory
struct UCreativeSpawnManager_OnDeadWithCategory_Params
{
	ESpecType                                          Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeSpawnManager.Get
struct UCreativeSpawnManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeSpawnManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeStaticMeshComponent.OnReturnToPool
struct UCreativeStaticMeshComponent_OnReturnToPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RecycledSeq;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeStaticMeshComponent.OnPickFromPool
struct UCreativeStaticMeshComponent_OnPickFromPool_Params
{
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function Creative.CreativeStreamingManager.UnregisterStreamingSource
struct UCreativeStreamingManager_UnregisterStreamingSource_Params
{
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeStreamingManager.StreamingManagerEnable
struct UCreativeStreamingManager_StreamingManagerEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeStreamingManager.RemoveStreamingObject
struct UCreativeStreamingManager_RemoveStreamingObject_Params
{
	struct FString                                     InstanceID;                                               // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeStreamingManager.RegisterStreamingSource
struct UCreativeStreamingManager_RegisterStreamingSource_Params
{
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeStreamingManager.GetOnGridCellIndex
struct UCreativeStreamingManager_GetOnGridCellIndex_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FIntVector                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeStreamingManager.GetGridLoadingRange
struct UCreativeStreamingManager_GetGridLoadingRange_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeStreamingManager.GetGridList
struct UCreativeStreamingManager_GetGridList_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeStreamingManager.GetGridCellWidthHeight
struct UCreativeStreamingManager_GetGridCellWidthHeight_Params
{
	struct FString                                     GridName;                                                 // (Parm, ZeroConstructor)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeStreamingManager.GetCreativeModeStreamingSourceList
struct UCreativeStreamingManager_GetCreativeModeStreamingSourceList_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeStreamingManager.Get
struct UCreativeStreamingManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeStreamingManager*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeStreamingManager.ChangeStreamingObjectStreamingType
struct UCreativeStreamingManager_ChangeStreamingObjectStreamingType_Params
{
	struct FString                                     InstanceID;                                               // (ConstParm, Parm, ZeroConstructor)
	ECreativeModeActorStreamingType                    NewStremaingType;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ECreativeModeActorStreamingType                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeStreamingManager.AddStreamingObject
struct UCreativeStreamingManager_AddStreamingObject_Params
{
	struct FString                                     InstanceID;                                               // (ConstParm, Parm, ZeroConstructor)
	struct FCreativeModeStreamingParameters            StreamingParameters;                                      // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeTimerApiObject.Clear
struct UCreativeTimerApiObject_Clear_Params
{
};

// Function Creative.CreativeTriggerAreaActor.OnTakeDamage
struct ACreativeTriggerAreaActor_OnTakeDamage_Params
{
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeWebSocketManager.SendMessage
struct UCreativeWebSocketManager_SendMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Creative.CreativeWebSocketManager.ReceiveOnPostSetLuaEventBridgeInstance
struct UCreativeWebSocketManager_ReceiveOnPostSetLuaEventBridgeInstance_Params
{
};

// Function Creative.CreativeWebSocketManager.OnTickTimer
struct UCreativeWebSocketManager_OnTickTimer_Params
{
};

// Function Creative.CreativeWebSocketManager.OnReceiveConnected
struct UCreativeWebSocketManager_OnReceiveConnected_Params
{
};

// Function Creative.CreativeWebSocketManager.OnPostSetLuaEventBridgeInstance
struct UCreativeWebSocketManager_OnPostSetLuaEventBridgeInstance_Params
{
};

// Function Creative.CreativeWebSocketManager.OnMessageSent
struct UCreativeWebSocketManager_OnMessageSent_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeWebSocketManager.OnMessageReceived
struct UCreativeWebSocketManager_OnMessageReceived_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeWebSocketManager.IsConnected
struct UCreativeWebSocketManager_IsConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeWebSocketManager.Get
struct UCreativeWebSocketManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeWebSocketManager*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeWebSocketManager.ConnectServer
struct UCreativeWebSocketManager_ConnectServer_Params
{
	struct FString                                     ServerURL;                                                // (Parm, ZeroConstructor)
	struct FString                                     ServerProtocol;                                           // (Parm, ZeroConstructor)
};

// Function Creative.CreativeWidgetObject.UnregisterLiteComponent
struct UCreativeWidgetObject_UnregisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Destroy;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeWidgetObject.ReturnObjectToPool
struct UCreativeWidgetObject_ReturnObjectToPool_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeWidgetObject.ReturnObjectsToPool
struct UCreativeWidgetObject_ReturnObjectsToPool_Params
{
	TArray<class UObject*>                             Objs;                                                     // (Parm, ZeroConstructor)
};

// Function Creative.CreativeWidgetObject.RegisterLiteComponent
struct UCreativeWidgetObject_RegisterLiteComponent_Params
{
	class ULiteComponent*                              Component;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeWidgetObject.ReceivePostBeginPlay
struct UCreativeWidgetObject_ReceivePostBeginPlay_Params
{
};

// Function Creative.CreativeWidgetObject.ReceiveIsDedicatedServer
struct UCreativeWidgetObject_ReceiveIsDedicatedServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeWidgetObject.ReceiveHasAuthority
struct UCreativeWidgetObject_ReceiveHasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeWidgetObject.ReceiveEndPlay
struct UCreativeWidgetObject_ReceiveEndPlay_Params
{
};

// Function Creative.CreativeWidgetObject.ReceiveBeginPlay
struct UCreativeWidgetObject_ReceiveBeginPlay_Params
{
};

// Function Creative.CreativeWidgetObject.GetObjectsFromPool
struct UCreativeWidgetObject_GetObjectsFromPool_Params
{
	TArray<struct FCreativePoolGetObjectParamInfo>     ObjectParams;                                             // (Parm, OutParm, ZeroConstructor)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Creative.CreativeWidgetObject.GetObjectFromPool
struct UCreativeWidgetObject_GetObjectFromPool_Params
{
	int                                                PoolId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     NewOuter;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // (Parm, OutParm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeWorldSubSystem.GetManagerCenter
struct UCreativeWorldSubSystem_GetManagerCenter_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeWoWInactiveCheckComponent.ServerMarkPlayerActive
struct UCreativeWoWInactiveCheckComponent_ServerMarkPlayerActive_Params
{
};

// Function Creative.CreativeWoWInactiveCheckComponent.MarkPlayerActive
struct UCreativeWoWInactiveCheckComponent_MarkPlayerActive_Params
{
};

// Function Creative.CreativeWoWInactiveCheckComponent.KickOutPlayer
struct UCreativeWoWInactiveCheckComponent_KickOutPlayer_Params
{
};

// Function Creative.CreativeWoWInactiveCheckComponent.ClientShowKickOutTip
struct UCreativeWoWInactiveCheckComponent_ClientShowKickOutTip_Params
{
	float                                              RemainTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeWoWInactiveCheckComponent.ClientCachedActiveState
struct UCreativeWoWInactiveCheckComponent_ClientCachedActiveState_Params
{
};

// Function Creative.CreativeWoWInactiveCheckComponent.CheckForMovement
struct UCreativeWoWInactiveCheckComponent_CheckForMovement_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.CreativeWoWInactiveCheckComponent.CheckForInactive
struct UCreativeWoWInactiveCheckComponent_CheckForInactive_Params
{
};

// Function Creative.CreativeWoWManager.ReceiveOnGameStateBeginPlay
struct UCreativeWoWManager_ReceiveOnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeWoWManager.OnGameStateBeginPlay
struct UCreativeWoWManager_OnGameStateBeginPlay_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.CreativeWoWManager.Get
struct UCreativeWoWManager_Get_Params
{
	class UObject*                                     WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UCreativeWoWManager*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.DancerDeviceActor.OnRep_SyncPlayerCharacter
struct ADancerDeviceActor_OnRep_SyncPlayerCharacter_Params
{
};

// Function Creative.GameModeStateFighting_CreativeMode.SetToInfinityTime
struct UGameModeStateFighting_CreativeMode_SetToInfinityTime_Params
{
};

// Function Creative.GameModeStateFighting_CreativeMode.PlayersInfoRecord
struct UGameModeStateFighting_CreativeMode_PlayersInfoRecord_Params
{
};

// Function Creative.GameProcessEventObject.ReceivePostEvent
struct UGameProcessEventObject_ReceivePostEvent_Params
{
	int                                                ProcessType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Round;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.GameProcessEventObject.OnEnterPlayProcess
struct UGameProcessEventObject_OnEnterPlayProcess_Params
{
};

// Function Creative.PlayerListenerEventObject.OnCppRemovePlayerListener
struct UPlayerListenerEventObject_OnCppRemovePlayerListener_Params
{
	class UObject*                                     Content;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.PlayerListenerEventObject.OnCppAddPlayerListener
struct UPlayerListenerEventObject_OnCppAddPlayerListener_Params
{
	class UObject*                                     Content;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.PlayerAttachedToVehicleEventObject.OnOwnerAttachedToVehicle
struct UPlayerAttachedToVehicleEventObject_OnOwnerAttachedToVehicle_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.PlayerAttachedToVehicleEventObject.OnCppRemovePlayerListener
struct UPlayerAttachedToVehicleEventObject_OnCppRemovePlayerListener_Params
{
	class UObject*                                     Content;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.PlayerAttachedToVehicleEventObject.OnCppAddPlayerListener
struct UPlayerAttachedToVehicleEventObject_OnCppAddPlayerListener_Params
{
	class UObject*                                     Content;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.PlayerAttachedProxy.OnProxyAttachedToVehicle
struct UPlayerAttachedProxy_OnProxyAttachedToVehicle_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.ShowAllPlayerManagerActor.TriggerRefresh
struct AShowAllPlayerManagerActor_TriggerRefresh_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.ShowAllPlayerManagerActor.RefreshTeamPoseData
struct AShowAllPlayerManagerActor_RefreshTeamPoseData_Params
{
};

// Function Creative.ShowAllPlayerManagerActor.RefreshMapMarkData
struct AShowAllPlayerManagerActor_RefreshMapMarkData_Params
{
};

// Function Creative.ShowAllPlayerManagerActor.OnTeamPosDataChange
struct AShowAllPlayerManagerActor_OnTeamPosDataChange_Params
{
};

// Function Creative.ShowAllPlayerManagerActor.OnRep_TeamPosData
struct AShowAllPlayerManagerActor_OnRep_TeamPosData_Params
{
};

// Function Creative.ShowAllPlayerManagerActor.IsCharacterValidForShow
struct AShowAllPlayerManagerActor_IsCharacterValidForShow_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Creative.ShowAllPlayerManagerActor.FlushBatchData
struct AShowAllPlayerManagerActor_FlushBatchData_Params
{
	int                                                BatchSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurExtraSize;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.ShowAllPlayerManagerActor.EnableRefresh
struct AShowAllPlayerManagerActor_EnableRefresh_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative.ShowAllPlayerManagerActor.ClearAllMark
struct AShowAllPlayerManagerActor_ClearAllMark_Params
{
};

}

