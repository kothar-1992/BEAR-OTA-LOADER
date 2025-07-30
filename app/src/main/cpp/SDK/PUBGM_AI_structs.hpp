#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AI.EAISoundCollectType
enum class EAISoundCollectType : uint8_t
{
	EAISoundCollectType__AISoundCollectType_Step = 0,
	EAISoundCollectType__AISoundCollectType_Weapon = 1,
	EAISoundCollectType__AISoundCollectType_Vehicle = 2,
	EAISoundCollectType__AISoundCollectType_Horn = 3,
	EAISoundCollectType__AISoundCollectType_Grenade = 4,
	EAISoundCollectType__AISoundCollectType_MAX = 5
};


// Enum AI.EObstacleDetectionSpace
enum class EObstacleDetectionSpace : uint8_t
{
	EObstacleDetectionSpace__ObstacleDetection_Box = 0,
	EObstacleDetectionSpace__ObstacleDetection_CapsuleSweep = 1,
	EObstacleDetectionSpace__ObstacleDetection_MAX = 2
};


// Enum AI.EAICheckFlyingStatusType
enum class EAICheckFlyingStatusType : uint8_t
{
	EAICheckFlyingStatusType__FlyingStatus_HasNavigationSystem = 0,
	EAICheckFlyingStatusType__FlyingStatus_NavigationVoxelDataDone = 1,
	EAICheckFlyingStatusType__FlyingStatus_MAX = 2
};


// Enum AI.EAICheckShootingPoseType
enum class EAICheckShootingPoseType : uint8_t
{
	EAICheckShootingPoseType__ShootingPose_Normal = 0,
	EAICheckShootingPoseType__ShootingPose_Stand = 1,
	EAICheckShootingPoseType__ShootingPose_Peek = 2,
	EAICheckShootingPoseType__ShootingPose_WaitVisibilityCheck = 3,
	EAICheckShootingPoseType__ShootingPose_MAX = 4
};


// Enum AI.ECompareLengthType
enum class ECompareLengthType : uint8_t
{
	ELengthGreater                 = 0,
	ELengthLess                    = 1,
	ELengthEequal                  = 2,
	ECompareLengthType_MAX         = 3
};


// Enum AI.EAIDecoratorGeneralLineTraceType
enum class EAIDecoratorGeneralLineTraceType : uint8_t
{
	EAIDecoratorGeneralLineTraceType__LineTraceType_Forward = 0,
	EAIDecoratorGeneralLineTraceType__LineTraceType_MAX = 1
};


// Enum AI.EInSafetyCircleType
enum class EInSafetyCircleType : uint8_t
{
	EInSafetyCircleType__EInSafetyCircleType_None = 0,
	EInSafetyCircleType__EInSafetyCircleType_BlueCircle = 1,
	EInSafetyCircleType__EInSafetyCircleType_WhiteCircle = 2,
	EInSafetyCircleType__EInSafetyCircleType_MAX = 3
};


// Enum AI.EItemNumCheckType
enum class EItemNumCheckType : uint8_t
{
	ItemNumGreater                 = 0,
	ItemNumLess                    = 1,
	ItemNumEequal                  = 2,
	EItemNumCheckType_MAX          = 3
};


// Enum AI.EChooseEnemySearchMethod
enum class EChooseEnemySearchMethod : uint8_t
{
	EChooseEnemySearchMethod__SearchMethod_Nearest = 0,
	EChooseEnemySearchMethod__SearchMethod_MostHP = 1,
	EChooseEnemySearchMethod__SearchMethod_LeastHP = 2,
	EChooseEnemySearchMethod__SearchMethod_ByBlackboardValue = 3,
	EChooseEnemySearchMethod__SearchMethod_MAX = 4
};


// Enum AI.EChooseEnemyType
enum class EChooseEnemyType : uint8_t
{
	EChooseEnemyType__EnemyType_Player = 0,
	EChooseEnemyType__EnemyType_Animal = 1,
	EChooseEnemyType__EnemyType_Zombie = 2,
	EChooseEnemyType__EnemyType_UAV = 3,
	EChooseEnemyType__EnemyType_MAX = 4
};


// Enum AI.EMobAddHPServiceType
enum class EMobAddHPServiceType : uint8_t
{
	EMobAddHPServiceType__LoseTarget = 0,
	EMobAddHPServiceType__EMobAddHPServiceType_MAX = 1
};


// Enum AI.EAISearchEnemyType
enum class EAISearchEnemyType : uint8_t
{
	EAISearchEnemyType__Nearest    = 0,
	EAISearchEnemyType__Random     = 1,
	EAISearchEnemyType__Farthest   = 2,
	EAISearchEnemyType__EAISearchEnemyType_MAX = 3
};


// Enum AI.EAISearchEnemySingleRule
enum class EAISearchEnemySingleRule : uint8_t
{
	EAISearchEnemySingleRule__SingleRule_Hatred = 0,
	EAISearchEnemySingleRule__SingleRule_Random = 1,
	EAISearchEnemySingleRule__SingleRule_Nearest = 2,
	EAISearchEnemySingleRule__SingleRule_Farthest = 3,
	EAISearchEnemySingleRule__SingleRule_MostHP = 4,
	EAISearchEnemySingleRule__SingleRule_PoorHP = 5,
	EAISearchEnemySingleRule__SingleRule_BlackboardValue = 6,
	EAISearchEnemySingleRule__SingleRule_MAX = 7
};


// Enum AI.EAISenseGrenadeType
enum class EAISenseGrenadeType : uint8_t
{
	EAISenseGrenadeType__ExplosionGrenade = 0,
	EAISenseGrenadeType__BurningGrenade = 1,
	EAISenseGrenadeType__SmokingGrenade = 2,
	EAISenseGrenadeType__FlashBomb = 3,
	EAISenseGrenadeType__Grenade_MaxNum = 4,
	EAISenseGrenadeType__EAISenseGrenadeType_MAX = 5
};


// Enum AI.ETargetAngleCheck
enum class ETargetAngleCheck : uint8_t
{
	TargetAngleCheckFocus          = 0,
	TargetAngleCheckFocusFail      = 1,
	TargetAngleCheckFocusSuccess   = 2,
	ETargetAngleCheck_MAX          = 3
};


// Enum AI.EVHQueryEnemyRule
enum class EVHQueryEnemyRule : uint8_t
{
	EVHQueryEnemyRule__Nearest     = 0,
	EVHQueryEnemyRule__Random      = 1,
	EVHQueryEnemyRule__EVHQueryEnemyRule_MAX = 2
};


// Enum AI.EVHEnemyType
enum class EVHEnemyType : uint8_t
{
	EVHEnemyType__EVHEnemyType_Player = 0,
	EVHEnemyType__EVHEnemyType_Car = 1,
	EVHEnemyType__EVHEnemyType_Mob = 2,
	EVHEnemyType__EVHEnemyType_FakePlayer = 3,
	EVHEnemyType__EVHEnemyType_MAX = 4
};


// Enum AI.EAIAdvFindOcclusionPointSearchBestOcclusionMethod
enum class EAIAdvFindOcclusionPointSearchBestOcclusionMethod : uint8_t
{
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_Normal = 0,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_NearToTarget = 1,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_FarToTarget = 2,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_NearToSelf = 3,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_RandomOfSelf = 4,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_MAX = 5
};


// Enum AI.EAIAdvFindOcclusionPointPoseType
enum class EAIAdvFindOcclusionPointPoseType : uint8_t
{
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseProne = 0,
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseCrouch = 1,
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseStand = 2,
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseBush = 3,
	EAIAdvFindOcclusionPointPoseType__Occlusion_MAX = 4
};


// Enum AI.EBioVHMoveType
enum class EBioVHMoveType : uint8_t
{
	EBioVHMoveType__EMoveType_Normal = 0,
	EBioVHMoveType__EMoveType_Backward = 1,
	EBioVHMoveType__EMoveType_Directly = 2,
	EBioVHMoveType__EMoveType_MAX  = 3
};


// Enum AI.EFindFlyingHoverPointOneSideShapeOType
enum class EFindFlyingHoverPointOneSideShapeOType : uint8_t
{
	EFindFlyingHoverPointOneSideShapeOType__OT_RandomSide = 0,
	EFindFlyingHoverPointOneSideShapeOType__OT_LeftSide = 1,
	EFindFlyingHoverPointOneSideShapeOType__OT_RightSide = 2,
	EFindFlyingHoverPointOneSideShapeOType__OT_MAX = 3
};


// Enum AI.EFindFlyingHoverPointHoverType
enum class EFindFlyingHoverPointHoverType : uint8_t
{
	EFindFlyingHoverPointHoverType__HT_OneSideShapeO = 0,
	EFindFlyingHoverPointHoverType__HT_MAX = 1
};


// Enum AI.EFlyToPathfindingThread
enum class EFlyToPathfindingThread : uint8_t
{
	EFlyToPathfindingThread__Sync  = 0,
	EFlyToPathfindingThread__ASync = 1,
	EFlyToPathfindingThread__EFlyToPathfindingThread_MAX = 2
};


// Enum AI.EMobFindAttackablePositionLineTraceType
enum class EMobFindAttackablePositionLineTraceType : uint8_t
{
	EMobFindAttackablePositionLineTraceType__Normal = 0,
	EMobFindAttackablePositionLineTraceType__HalfHeightOffset = 1,
	EMobFindAttackablePositionLineTraceType__CustomHeightOffset = 2,
	EMobFindAttackablePositionLineTraceType__EMobFindAttackablePositionLineTraceType_MAX = 3
};


// Enum AI.ESearchType
enum class ESearchType : uint8_t
{
	ESearchType__CenterInSelfLocation = 0,
	ESearchType__CenterInSpecificLocation = 1,
	ESearchType__ESearchType_MAX   = 2
};


// Enum AI.EAIMoveToOcclusionFinishMovePoseType
enum class EAIMoveToOcclusionFinishMovePoseType : uint8_t
{
	EAIMoveToOcclusionFinishMovePoseType__FinishMovePoseType_Normal = 0,
	EAIMoveToOcclusionFinishMovePoseType__FinishMovePoseType_CrouchIfACrouchOcclusion = 1,
	EAIMoveToOcclusionFinishMovePoseType__FinishMovePoseType_MAX = 2
};


// Enum AI.EAIMoveToOcclusionMovingPoseType
enum class EAIMoveToOcclusionMovingPoseType : uint8_t
{
	EAIMoveToOcclusionMovingPoseType__MovingPoseType_Normal = 0,
	EAIMoveToOcclusionMovingPoseType__MovingPoseType_CrouchSprintIfAlreadyCrouched = 1,
	EAIMoveToOcclusionMovingPoseType__MovingPoseType_MAX = 2
};


// Enum AI.EAIMoveToOcclusionSearchBestOcclusionMethod
enum class EAIMoveToOcclusionSearchBestOcclusionMethod : uint8_t
{
	EAIMoveToOcclusionSearchBestOcclusionMethod__Normal = 0,
	EAIMoveToOcclusionSearchBestOcclusionMethod__NearToTarget = 1,
	EAIMoveToOcclusionSearchBestOcclusionMethod__FarToTarget = 2,
	EAIMoveToOcclusionSearchBestOcclusionMethod__NearToSelf = 3,
	EAIMoveToOcclusionSearchBestOcclusionMethod__RandomOfSelf = 4,
	EAIMoveToOcclusionSearchBestOcclusionMethod__EAIMoveToOcclusionSearchBestOcclusionMethod_MAX = 5
};


// Enum AI.EAIMoveToOcclusionPoseType
enum class EAIMoveToOcclusionPoseType : uint8_t
{
	EAIMoveToOcclusionPoseType__PoseProne = 0,
	EAIMoveToOcclusionPoseType__PoseCrouch = 1,
	EAIMoveToOcclusionPoseType__PoseStand = 2,
	EAIMoveToOcclusionPoseType__PoseBush = 3,
	EAIMoveToOcclusionPoseType__EAIMoveToOcclusionPoseType_MAX = 4
};


// Enum AI.ESeekFlyPointHorizontalAngleType
enum class ESeekFlyPointHorizontalAngleType : uint8_t
{
	ESeekFlyPointHorizontalAngleType__TargetView = 0,
	ESeekFlyPointHorizontalAngleType__TargetToSelf = 1,
	ESeekFlyPointHorizontalAngleType__BornLocationView = 2,
	ESeekFlyPointHorizontalAngleType__ESeekFlyPointHorizontalAngleType_MAX = 3
};


// Enum AI.ESeekFlyPointCenterLocType
enum class ESeekFlyPointCenterLocType : uint8_t
{
	ESeekFlyPointCenterLocType__Target = 0,
	ESeekFlyPointCenterLocType__Self = 1,
	ESeekFlyPointCenterLocType__BornLocation = 2,
	ESeekFlyPointCenterLocType__ESeekFlyPointCenterLocType_MAX = 3
};


// Enum AI.ELocateType
enum class ELocateType : uint8_t
{
	ELocateType__ELocateType_Random = 0,
	ELocateType__ELocateType_Strategy = 1,
	ELocateType__ELocateType_Escape = 2,
	ELocateType__ELocateType_MAX   = 3
};


// Enum AI.EAIVHMoveType
enum class EAIVHMoveType : uint8_t
{
	EAIVHMoveType__ELocateType_Normal = 0,
	EAIVHMoveType__ELocateType_Strategy = 1,
	EAIVHMoveType__ELocateType_Directly = 2,
	EAIVHMoveType__ELocateType_Toward = 3,
	EAIVHMoveType__ELocateType_MAX = 4
};


// Enum AI.EAITaskNodeThrowGrenadeMethod
enum class EAITaskNodeThrowGrenadeMethod : uint8_t
{
	EAITaskNodeThrowGrenadeMethod__ThrowGrenadeMethod_Normal = 0,
	EAITaskNodeThrowGrenadeMethod__ThrowGrenadeMethod_Advanced = 1,
	EAITaskNodeThrowGrenadeMethod__ThrowGrenadeMethod_MAX = 2
};


// Enum AI.ECustomDamageEventReactionType
enum class ECustomDamageEventReactionType : uint8_t
{
	ECustomDamageEventReactionType__SpawnActor = 0,
	ECustomDamageEventReactionType__ActiveParticles = 1,
	ECustomDamageEventReactionType__DetactiveParticles = 2,
	ECustomDamageEventReactionType__HideMesh = 3,
	ECustomDamageEventReactionType__HideMeshInstance = 4,
	ECustomDamageEventReactionType__HideBone = 5,
	ECustomDamageEventReactionType__ApplyPhysicalAnimationProfile = 6,
	ECustomDamageEventReactionType__SetCollisionEnabled = 7,
	ECustomDamageEventReactionType__ECustomDamageEventReactionType_MAX = 8
};


// Enum AI.ECustomDamageEventTriggerType
enum class ECustomDamageEventTriggerType : uint8_t
{
	ECustomDamageEventTriggerType__OnPassedDamageThreshold = 0,
	ECustomDamageEventTriggerType__OnAnyDamage = 1,
	ECustomDamageEventTriggerType__ECustomDamageEventTriggerType_MAX = 2
};


// Enum AI.EMLBotType
enum class EMLBotType : uint8_t
{
	BT                             = 0,
	MLAI                           = 1,
	MLDelivery                     = 2,
	MLTeammate                     = 3,
	EMLBotType_MAX                 = 4
};


// Enum AI.EMLAIJumpingPhase
enum class EMLAIJumpingPhase : uint8_t
{
	EMLAIJumpingPhase__Before      = 0,
	EMLAIJumpingPhase__FreeFalling = 1,
	EMLAIJumpingPhase__OpenParachute = 2,
	EMLAIJumpingPhase__Landing     = 3,
	EMLAIJumpingPhase__EMLAIJumpingPhase_MAX = 4
};


// Enum AI.EStatePlayerType
enum class EStatePlayerType : uint8_t
{
	EStatePlayerType__None         = 0,
	EStatePlayerType__MLAI_Normal  = 1,
	EStatePlayerType__MLAI_Deliver = 2,
	EStatePlayerType__BTAI         = 3,
	EStatePlayerType__Player       = 4,
	EStatePlayerType__MLAI_Teammate = 5,
	EStatePlayerType__CandidateBTAI = 6,
	EStatePlayerType__CandidateMLAI = 7,
	EStatePlayerType__Player_Teammate = 8,
	EStatePlayerType__EStatePlayerType_MAX = 9
};


// Enum AI.ENearItemType
enum class ENearItemType : uint8_t
{
	ENearItemType__Box             = 0,
	ENearItemType__Item            = 1,
	ENearItemType__AirDropBox      = 2,
	ENearItemType__TreasureChest   = 3,
	ENearItemType__Weed            = 4,
	ENearItemType__ENearItemType_MAX = 5
};


// Enum AI.EDiffListIDTag
enum class EDiffListIDTag : uint8_t
{
	EDiffListIDTag__NoDiff         = 0,
	EDiffListIDTag__General        = 1,
	EDiffListIDTag__GeneralDiff    = 2,
	EDiffListIDTag__CCSMLAI        = 3,
	EDiffListIDTag__CCSMLAIDiff    = 4,
	EDiffListIDTag__CCSInPool      = 5,
	EDiffListIDTag__CCSInPoolDiff  = 6,
	EDiffListIDTag__CCSNearbyPlayer = 7,
	EDiffListIDTag__CCSNearbyPlayerDiff = 8,
	EDiffListIDTag__CCSBTAI        = 9,
	EDiffListIDTag__CCSBTAIDiff    = 10,
	EDiffListIDTag__CCSPlayer      = 11,
	EDiffListIDTag__CCSPlayerDiff  = 12,
	EDiffListIDTag__EDiffListIDTag_MAX = 13
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AI.TLogAIShootInfo
// 0x000C
struct FTLogAIShootInfo
{
	int                                                TargetDistance;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TargetType;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WeaponId;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.ChildDynamicItem
// 0x0020
struct FChildDynamicItem
{
	int                                                Category;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     ChildName;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct AI.AIStateInfoBase
// 0x0018
struct FAIStateInfoBase
{
	uint64_t                                           UnChanged;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             IgnoreNames;                                              // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIStateXYZ
// 0x000C
struct FAIStateXYZ
{
	float                                              X;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.SoundState
// 0x0018 (0x0030 - 0x0018)
struct FSoundState : public FAIStateInfoBase
{
	int                                                Type;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Location;                                                 // 0x001C(0x000C)
	uint32_t                                           ID;                                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.CacheSoundState
// 0x0038
struct FCacheSoundState
{
	struct FSoundState                                 SoundState;                                               // 0x0000(0x0030)
	float                                              Time;                                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.UniqueStateInfo
// 0x0008 (0x0020 - 0x0018)
struct FUniqueStateInfo : public FAIStateInfoBase
{
	uint64_t                                           diff_mark_id;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIAttribute
// 0x0008 (0x0028 - 0x0020)
struct FAIAttribute : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIPlayerStateBaseMod
// 0x0108 (0x0120 - 0x0018)
struct FAIPlayerStateBaseMod : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	uint64_t                                           unique_id;                                                // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     player_name;                                              // 0x0028(0x0010) (ZeroConstructor)
	int                                                team_id;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_index;                                               // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0040(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x004C(0x000C)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0058(0x000C)
	float                                              HP;                                                       // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Energy;                                                   // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              dying_hp;                                                 // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              oxygen;                                                   // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                active_weapon_slot;                                       // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                weapon_status;                                            // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_switching;                                             // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	int                                                alive_state;                                              // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kill_count;                                               // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                assist_count;                                             // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Damages;                                                  // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           pawn_states;                                              // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               is_left_probe;                                            // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_right_probe;                                           // 0x0099(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_floating;                                              // 0x009A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x009B(0x0001) MISSED OFFSET
	int                                                using_skill_id;                                           // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                skill_phase_index;                                        // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_pose_acting;                                           // 0x00A4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_picking;                                               // 0x00A5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00A6(0x0002) MISSED OFFSET
	int                                                body_state;                                               // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                location_state;                                           // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_smoke;                                                // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	int                                                player_type;                                              // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ai_level;                                                 // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	TArray<struct FAIAttribute>                        Attributes;                                               // 0x00C0(0x0010) (ZeroConstructor)
	bool                                               is_lost_connection;                                       // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	int                                                ai_kill_count;                                            // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               in_delivery_pool;                                         // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               has_gone;                                                 // 0x00D9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               in_afk;                                                   // 0x00DA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x00DB(0x0001) MISSED OFFSET
	int                                                emote_id;                                                 // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_move_has_collision;                                    // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	float                                              rating_score;                                             // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              real_hidden_score;                                        // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                zone_id;                                                  // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Gender;                                                   // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                high_hp_destroy_bullet_num;                               // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                low_hp_destroy_bullet_num;                                // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                fatal_damage_destroy_bullet_num;                          // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_weapon_near_wall;                                      // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	struct FAIStateXYZ                                 head_position;                                            // 0x0104(0x000C)
	struct FAIStateXYZ                                 muzzle_position;                                          // 0x0110(0x000C)
	uint32_t                                           ally_master_id;                                           // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.CameraState
// 0x0028 (0x0040 - 0x0018)
struct FCameraState : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 Position;                                                 // 0x0018(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0024(0x000C)
	struct FAIStateXYZ                                 view_position;                                            // 0x0030(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIWeaponStateInfo
// 0x0030 (0x0050 - 0x0020)
struct FAIWeaponStateInfo : public FUniqueStateInfo
{
	int                                                slot_id;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Bullet;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              remain_reloading;                                         // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<int>                                        attachments;                                              // 0x0038(0x0010) (ZeroConstructor)
	int                                                bullet_in_backpak;                                        // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           weapon_avatar_id;                                         // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIPlayerWeapon
// 0x0010
struct FAIPlayerWeapon
{
	TArray<struct FAIWeaponStateInfo>                  player_weapon;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIBackpackItem
// 0x0010 (0x0030 - 0x0020)
struct FAIBackpackItem : public FUniqueStateInfo
{
	int                                                Category;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ID;                                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Count;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIPlayerBackpack
// 0x0010
struct FAIPlayerBackpack
{
	TArray<struct FAIBackpackItem>                     backpack_item;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIEquipmentInfo
// 0x0010 (0x0030 - 0x0020)
struct FAIEquipmentInfo : public FUniqueStateInfo
{
	int                                                Category;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ID;                                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Durability;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIPlayerEquipment
// 0x0010
struct FAIPlayerEquipment
{
	TArray<struct FAIEquipmentInfo>                    equipment_item;                                           // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIDamageInfo
// 0x0018 (0x0030 - 0x0018)
struct FAIDamageInfo : public FAIStateInfoBase
{
	uint32_t                                           PlayerKey;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                damage_type;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                damage_weapon_type;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           damage_part;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              damage_before_cal_armor;                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIPlayerInteractInfo
// 0x0040 (0x0058 - 0x0018)
struct FAIPlayerInteractInfo : public FAIStateInfoBase
{
	TArray<struct FAIDamageInfo>                       active_damage;                                            // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FAIDamageInfo>                       passive_damage;                                           // 0x0028(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   kill_list;                                                // 0x0038(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   knock_down_list;                                          // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIHeardSound
// 0x0010
struct FAIHeardSound
{
	TArray<struct FSoundState>                         heard_sound;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIDamageSources
// 0x0030 (0x0048 - 0x0018)
struct FAIDamageSources : public FAIStateInfoBase
{
	TArray<struct FAIStateXYZ>                         damage_source;                                            // 0x0018(0x0010) (ZeroConstructor)
	TArray<int>                                        damage_type;                                              // 0x0028(0x0010) (ZeroConstructor)
	TArray<int>                                        damage_weapon_type;                                       // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DamageSource
// 0x0018 (0x0030 - 0x0018)
struct FDamageSource : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 damage_source;                                            // 0x0018(0x000C)
	int                                                damage_type;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                damage_weapon_type;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           damage_source_id;                                         // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffStateInfoBase
// 0x0000 (0x0018 - 0x0018)
struct FDiffStateInfoBase : public FAIStateInfoBase
{

};

// ScriptStruct AI.ProgressBarState
// 0x0010 (0x0028 - 0x0018)
struct FProgressBarState : public FDiffStateInfoBase
{
	int                                                Type;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              remain_time;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           targetid;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AISimplifyStateBaseMod
// 0x0020 (0x0038 - 0x0018)
struct FAISimplifyStateBaseMod : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_smoke;                                                // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1B];                                      // 0x001D(0x001B) MISSED OFFSET
};

// ScriptStruct AI.AINearbyPlayerBaseMod
// 0x0038 (0x0058 - 0x0020)
struct FAINearbyPlayerBaseMod : public FUniqueStateInfo
{
	struct FAISimplifyStateBaseMod                     State;                                                    // 0x0020(0x0038)
};

// ScriptStruct AI.ItemStateData
// 0x0030 (0x0050 - 0x0020)
struct FItemStateData : public FUniqueStateInfo
{
	int                                                Type;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UID;                                                      // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Durability;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0034(0x000C)
	uint32_t                                           player_id;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	uint64_t                                           unique_id;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AINearbyThrown
// 0x0028 (0x0048 - 0x0020)
struct FAINearbyThrown : public FUniqueStateInfo
{
	int                                                Type;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0024(0x000C)
	float                                              remain_time;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              explode_time;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_own;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_held;                                                  // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	uint32_t                                           actorid;                                                  // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           sourceid;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIPlayerHitInfo
// 0x0018 (0x0030 - 0x0018)
struct FAIPlayerHitInfo : public FAIStateInfoBase
{
	int                                                fire_count;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_count;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_head_count;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_count_filter;                                         // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hit_head_filter;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIBulletHoles
// 0x0020 (0x0038 - 0x0018)
struct FAIBulletHoles : public FAIStateInfoBase
{
	TArray<struct FAIStateXYZ>                         hole_pos;                                                 // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FAIStateXYZ>                         hole_source_pos;                                          // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIBulletHole
// 0x0020 (0x0038 - 0x0018)
struct FAIBulletHole : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 hole_pos;                                                 // 0x0018(0x000C)
	struct FAIStateXYZ                                 hole_source_pos;                                          // 0x0024(0x000C)
	uint32_t                                           hole_source_id;                                           // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIStateConfig
// 0x0008 (0x0020 - 0x0018)
struct FAIStateConfig : public FAIStateInfoBase
{
	int                                                Level;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Style;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DamageRate
// 0x0008 (0x0020 - 0x0018)
struct FDamageRate : public FAIStateInfoBase
{
	float                                              HP;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DamageRateInfo
// 0x0028 (0x0040 - 0x0018)
struct FDamageRateInfo : public FAIStateInfoBase
{
	TArray<struct FDamageRate>                         damage_rate_map;                                          // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FDamageRate>                         revive_damage_rate_map;                                   // 0x0028(0x0010) (ZeroConstructor)
	float                                              near_death_damage_rate;                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.ChatMsgInfo
// 0x0028 (0x0040 - 0x0018)
struct FChatMsgInfo : public FAIStateInfoBase
{
	struct FString                                     msg_content;                                              // 0x0018(0x0010) (ZeroConstructor)
	uint32_t                                           item_id;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           msg_id;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 hit_position;                                             // 0x0030(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.SignMsgInfo
// 0x0018 (0x0030 - 0x0018)
struct FSignMsgInfo : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 hit_pos;                                                  // 0x0018(0x000C)
	uint32_t                                           item_id;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           msg_type;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.MapMarkInfo
// 0x0020 (0x0038 - 0x0018)
struct FMapMarkInfo : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 mapmark_loc;                                              // 0x0018(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FAIStateXYZ>                         mapmultimark_list;                                        // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIAvatarInfo
// 0x0008
struct FAIAvatarInfo
{
	int                                                slot_id;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                item_id;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.SingleDestroyBulletProbInfo
// 0x0010 (0x0028 - 0x0018)
struct FSingleDestroyBulletProbInfo : public FAIStateInfoBase
{
	float                                              max_destroy_time_float;                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                max_destroy_num;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              destroy_cd_float;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              destroy_bullet_prob;                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIDestroyBulletProbInfo
// 0x0080 (0x00A0 - 0x0020)
struct FAIDestroyBulletProbInfo : public FUniqueStateInfo
{
	int                                                bullet_id;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              low_hp_threshold;                                         // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FSingleDestroyBulletProbInfo                low_hp_destroy_bullet_info;                               // 0x0028(0x0028)
	struct FSingleDestroyBulletProbInfo                high_hp_destroy_bullet_info;                              // 0x0050(0x0028)
	struct FSingleDestroyBulletProbInfo                fatal_Damage_destroy_bullet_info;                         // 0x0078(0x0028)
};

// ScriptStruct AI.AIStateInfoBaseMod
// 0x0428 (0x0448 - 0x0020)
struct FAIStateInfoBaseMod : public FUniqueStateInfo
{
	struct FAIPlayerStateBaseMod                       State;                                                    // 0x0020(0x0120)
	struct FCameraState                                Camera;                                                   // 0x0140(0x0040)
	struct FAIPlayerWeapon                             Weapon;                                                   // 0x0180(0x0010)
	struct FAIPlayerBackpack                           BackPack;                                                 // 0x0190(0x0010)
	struct FAIPlayerEquipment                          equipment;                                                // 0x01A0(0x0010)
	uint32_t                                           Key;                                                      // 0x01B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x01B8(0x0058)
	struct FAIHeardSound                               Sound;                                                    // 0x0210(0x0010)
	struct FAIDamageSources                            damage_sources;                                           // 0x0220(0x0048)
	TArray<struct FDamageSource>                       all_damage_source;                                        // 0x0268(0x0010) (ZeroConstructor)
	struct FProgressBarState                           progress_bar;                                             // 0x0278(0x0028)
	TArray<struct FAINearbyPlayerBaseMod>              nearby_player;                                            // 0x02A0(0x0010) (ZeroConstructor)
	TArray<struct FItemStateData>                      nearby_item;                                              // 0x02B0(0x0010) (ZeroConstructor)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x02C0(0x0010) (ZeroConstructor)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x02D0(0x0030)
	struct FAIBulletHoles                              bullet_holes;                                             // 0x0300(0x0038)
	TArray<struct FAIBulletHole>                       all_bullet_hole;                                          // 0x0338(0x0010) (ZeroConstructor)
	uint32_t                                           ai_style;                                                 // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	struct FAIStateConfig                              Config;                                                   // 0x0350(0x0020)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0370(0x0028) MISSED OFFSET
	TArray<uint64_t>                                   nearby_item_index;                                        // 0x0398(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_thrown_index;                                      // 0x03A8(0x0010) (ZeroConstructor)
	struct FDamageRateInfo                             damage_rate_info;                                         // 0x03B8(0x0040)
	TArray<struct FChatMsgInfo>                        chatmsg_info_list;                                        // 0x03F8(0x0010) (ZeroConstructor)
	TArray<struct FSignMsgInfo>                        signmsg_info_list;                                        // 0x0408(0x0010) (ZeroConstructor)
	TArray<struct FMapMarkInfo>                        mapmark_info_list;                                        // 0x0418(0x0010) (ZeroConstructor)
	TArray<struct FAIAvatarInfo>                       avatar_info;                                              // 0x0428(0x0010) (ZeroConstructor)
	TArray<struct FAIDestroyBulletProbInfo>            destroy_bullet_prob_info;                                 // 0x0438(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffUniqueStateInfo
// 0x0008 (0x0020 - 0x0018)
struct FDiffUniqueStateInfo : public FDiffStateInfoBase
{
	uint64_t                                           diff_mark_id;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffAIAttributesGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIAttributesGeneral : public FDiffStateInfoBase
{
	TArray<struct FAIAttribute>                        Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerStateBaseModGeneral
// 0x0128 (0x0140 - 0x0018)
struct FDiffAIPlayerStateBaseModGeneral : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	uint64_t                                           unique_id;                                                // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     player_name;                                              // 0x0028(0x0010) (ZeroConstructor)
	int                                                team_id;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_index;                                               // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0040(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x004C(0x000C)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0058(0x000C)
	float                                              HP;                                                       // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Energy;                                                   // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              dying_hp;                                                 // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              oxygen;                                                   // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                active_weapon_slot;                                       // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                weapon_status;                                            // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_switching;                                             // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	int                                                alive_state;                                              // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kill_count;                                               // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                assist_count;                                             // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Damages;                                                  // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           pawn_states;                                              // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               is_left_probe;                                            // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_right_probe;                                           // 0x0099(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_floating;                                              // 0x009A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x009B(0x0001) MISSED OFFSET
	int                                                using_skill_id;                                           // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                skill_phase_index;                                        // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_pose_acting;                                           // 0x00A4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_picking;                                               // 0x00A5(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_weapon_near_wall;                                      // 0x00A6(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00A7(0x0001) MISSED OFFSET
	int                                                body_state;                                               // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                location_state;                                           // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_smoke;                                                // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	int                                                player_type;                                              // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ai_level;                                                 // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_move_has_collision;                                    // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_lost_connection;                                       // 0x00BD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x00BE(0x0002) MISSED OFFSET
	float                                              rating_score;                                             // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              real_hidden_score;                                        // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                zone_id;                                                  // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               in_delivery_pool;                                         // 0x00CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	struct FDiffAIAttributesGeneral                    Attributes;                                               // 0x00D0(0x0038)
	int                                                ai_kill_count;                                            // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Gender;                                                   // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               has_gone;                                                 // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               in_afk;                                                   // 0x0111(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0112(0x0002) MISSED OFFSET
	int                                                emote_id;                                                 // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                high_hp_destroy_bullet_num;                               // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                low_hp_destroy_bullet_num;                                // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                fatal_damage_destroy_bullet_num;                          // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 head_position;                                            // 0x0124(0x000C)
	struct FAIStateXYZ                                 muzzle_position;                                          // 0x0130(0x000C)
	uint32_t                                           ally_master_id;                                           // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffAIWeaponStateInfoGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIWeaponStateInfoGeneral : public FDiffStateInfoBase
{
	TArray<struct FAIWeaponStateInfo>                  Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerWeaponGeneral
// 0x0038 (0x0050 - 0x0018)
struct FDiffAIPlayerWeaponGeneral : public FDiffStateInfoBase
{
	struct FDiffAIWeaponStateInfoGeneral               player_weapon;                                            // 0x0018(0x0038)
};

// ScriptStruct AI.DiffAIBackpackItemGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIBackpackItemGeneral : public FDiffStateInfoBase
{
	TArray<struct FAIBackpackItem>                     Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerBackpackGeneral
// 0x0038 (0x0050 - 0x0018)
struct FDiffAIPlayerBackpackGeneral : public FDiffStateInfoBase
{
	struct FDiffAIBackpackItemGeneral                  backpack_item;                                            // 0x0018(0x0038)
};

// ScriptStruct AI.DiffAIEquipmentInfoGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIEquipmentInfoGeneral : public FDiffStateInfoBase
{
	TArray<struct FAIEquipmentInfo>                    Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerEquipmentGeneral
// 0x0038 (0x0050 - 0x0018)
struct FDiffAIPlayerEquipmentGeneral : public FDiffStateInfoBase
{
	struct FDiffAIEquipmentInfoGeneral                 equipment_item;                                           // 0x0018(0x0038)
};

// ScriptStruct AI.DiffAINearbyPlayersBaseModGeneral
// 0x0060 (0x0078 - 0x0018)
struct FDiffAINearbyPlayersBaseModGeneral : public FDiffStateInfoBase
{
	TMap<uint32_t, struct FAINearbyPlayerBaseMod>      Values;                                                   // 0x0018(0x0050) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffItemStateDatasGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffItemStateDatasGeneral : public FDiffStateInfoBase
{
	TArray<struct FItemStateData>                      Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAINearbyThrownGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffAINearbyThrownGeneral : public FDiffStateInfoBase
{
	TArray<struct FAINearbyThrown>                     Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIDestroyBulletProbInfoListGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIDestroyBulletProbInfoListGeneral : public FDiffStateInfoBase
{
	TArray<struct FAIDestroyBulletProbInfo>            Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIStateInfoBaseModGeneral
// 0x05A0 (0x05C0 - 0x0020)
struct FDiffAIStateInfoBaseModGeneral : public FDiffUniqueStateInfo
{
	struct FDiffAIPlayerStateBaseModGeneral            State;                                                    // 0x0020(0x0140)
	struct FAIHeardSound                               Sound;                                                    // 0x0160(0x0010)
	struct FAIDamageSources                            damage_sources;                                           // 0x0170(0x0048)
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x01B8(0x0058)
	struct FCameraState                                Camera;                                                   // 0x0210(0x0040)
	struct FDiffAIPlayerWeaponGeneral                  Weapon;                                                   // 0x0250(0x0050)
	struct FDiffAIPlayerBackpackGeneral                BackPack;                                                 // 0x02A0(0x0050)
	struct FDiffAIPlayerEquipmentGeneral               equipment;                                                // 0x02F0(0x0050)
	struct FProgressBarState                           progress_bar;                                             // 0x0340(0x0028)
	struct FDiffAINearbyPlayersBaseModGeneral          nearby_player;                                            // 0x0368(0x0078)
	struct FDiffItemStateDatasGeneral                  nearby_item;                                              // 0x03E0(0x0038)
	TArray<uint64_t>                                   nearby_item_index;                                        // 0x0418(0x0010) (ZeroConstructor)
	struct FDiffAINearbyThrownGeneral                  nearby_thrown;                                            // 0x0428(0x0038)
	TArray<uint64_t>                                   nearby_thrown_index;                                      // 0x0460(0x0010) (ZeroConstructor)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x0470(0x0030)
	uint32_t                                           Key;                                                      // 0x04A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	struct FAIBulletHoles                              bullet_holes;                                             // 0x04A8(0x0038)
	uint32_t                                           ai_style;                                                 // 0x04E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	struct FAIStateConfig                              Config;                                                   // 0x04E8(0x0020)
	struct FDamageRateInfo                             damage_rate_info;                                         // 0x0508(0x0040)
	TArray<struct FChatMsgInfo>                        chatmsg_info_list;                                        // 0x0548(0x0010) (ZeroConstructor)
	TArray<struct FSignMsgInfo>                        signmsg_info_list;                                        // 0x0558(0x0010) (ZeroConstructor)
	TArray<struct FMapMarkInfo>                        mapmark_info_list;                                        // 0x0568(0x0010) (ZeroConstructor)
	TArray<struct FAIAvatarInfo>                       avatar_info;                                              // 0x0578(0x0010) (ZeroConstructor)
	struct FDiffAIDestroyBulletProbInfoListGeneral     destroy_bullet_prob_info;                                 // 0x0588(0x0038)
};

// ScriptStruct AI.DiffStateInfoInt32
// 0x0004
struct FDiffStateInfoInt32
{
	int                                                Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffStateInfoFloat
// 0x0004
struct FDiffStateInfoFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffStateInfoVector
// 0x000C
struct FDiffStateInfoVector
{
	struct FDiffStateInfoFloat                         X;                                                        // 0x0000(0x0004)
	struct FDiffStateInfoFloat                         Y;                                                        // 0x0004(0x0004)
	struct FDiffStateInfoFloat                         Z;                                                        // 0x0008(0x0004)
};

// ScriptStruct AI.DiffStateInfoBool
// 0x0001
struct FDiffStateInfoBool
{
	bool                                               Value;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffStateInfoUInt64
// 0x0008
struct FDiffStateInfoUInt64
{
	uint64_t                                           Value;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffAttribute
// 0x0008 (0x0020 - 0x0018)
struct FDiffAttribute : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoFloat                         Value;                                                    // 0x001C(0x0004)
};

// ScriptStruct AI.DiffAIAttributes
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIAttributes : public FDiffStateInfoBase
{
	TArray<struct FDiffAttribute>                      attribute_state;                                          // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerStateBaseMod
// 0x00F0 (0x0108 - 0x0018)
struct FDiffAIPlayerStateBaseMod : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	uint64_t                                           unique_id;                                                // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoInt32                         team_id;                                                  // 0x0028(0x0004)
	struct FDiffStateInfoVector                        Position;                                                 // 0x002C(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x0038(0x000C)
	struct FDiffStateInfoVector                        Speed;                                                    // 0x0044(0x000C)
	struct FDiffStateInfoFloat                         HP;                                                       // 0x0050(0x0004)
	struct FDiffStateInfoFloat                         Energy;                                                   // 0x0054(0x0004)
	struct FDiffStateInfoFloat                         dying_hp;                                                 // 0x0058(0x0004)
	struct FDiffStateInfoFloat                         oxygen;                                                   // 0x005C(0x0004)
	struct FDiffStateInfoInt32                         active_weapon_slot;                                       // 0x0060(0x0004)
	struct FDiffStateInfoInt32                         weapon_status;                                            // 0x0064(0x0004)
	struct FDiffStateInfoBool                          is_switching;                                             // 0x0068(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         alive_state;                                              // 0x006C(0x0004)
	struct FDiffStateInfoInt32                         kill_count;                                               // 0x0070(0x0004)
	struct FDiffStateInfoInt32                         assist_count;                                             // 0x0074(0x0004)
	struct FDiffStateInfoInt32                         Damages;                                                  // 0x0078(0x0004)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FDiffStateInfoUInt64                        pawn_states;                                              // 0x0080(0x0008)
	struct FDiffStateInfoBool                          is_left_probe;                                            // 0x0088(0x0001)
	struct FDiffStateInfoBool                          is_right_probe;                                           // 0x0089(0x0001)
	struct FDiffStateInfoBool                          is_floating;                                              // 0x008A(0x0001)
	unsigned char                                      UnknownData03[0x1];                                       // 0x008B(0x0001) MISSED OFFSET
	struct FDiffStateInfoInt32                         using_skill_id;                                           // 0x008C(0x0004)
	struct FDiffStateInfoInt32                         skill_phase_index;                                        // 0x0090(0x0004)
	struct FDiffStateInfoBool                          is_pose_acting;                                           // 0x0094(0x0001)
	struct FDiffStateInfoBool                          is_picking;                                               // 0x0095(0x0001)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0096(0x0002) MISSED OFFSET
	struct FDiffStateInfoInt32                         body_state;                                               // 0x0098(0x0004)
	struct FDiffStateInfoInt32                         location_state;                                           // 0x009C(0x0004)
	struct FDiffStateInfoBool                          has_smoke;                                                // 0x00A0(0x0001)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         player_type;                                              // 0x00A4(0x0004)
	struct FDiffStateInfoInt32                         ai_level;                                                 // 0x00A8(0x0004)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FDiffAIAttributes                           Attributes;                                               // 0x00B0(0x0038)
	struct FDiffStateInfoBool                          is_lost_connection;                                       // 0x00E8(0x0001)
	unsigned char                                      UnknownData07[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         ai_kill_count;                                            // 0x00EC(0x0004)
	struct FDiffStateInfoBool                          in_delivery_pool;                                         // 0x00F0(0x0001)
	struct FDiffStateInfoBool                          has_gone;                                                 // 0x00F1(0x0001)
	struct FDiffStateInfoBool                          in_afk;                                                   // 0x00F2(0x0001)
	unsigned char                                      UnknownData08[0x1];                                       // 0x00F3(0x0001) MISSED OFFSET
	struct FDiffStateInfoInt32                         emote_id;                                                 // 0x00F4(0x0004)
	struct FDiffStateInfoBool                          is_move_has_collision;                                    // 0x00F8(0x0001)
	unsigned char                                      UnknownData09[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         high_hp_destroy_bullet_num;                               // 0x00FC(0x0004)
	struct FDiffStateInfoInt32                         low_hp_destroy_bullet_num;                                // 0x0100(0x0004)
	struct FDiffStateInfoInt32                         fatal_damage_destroy_bullet_num;                          // 0x0104(0x0004)
};

// ScriptStruct AI.DiffCameraState
// 0x0028 (0x0040 - 0x0018)
struct FDiffCameraState : public FDiffStateInfoBase
{
	struct FDiffStateInfoVector                        Position;                                                 // 0x0018(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x0024(0x000C)
	struct FDiffStateInfoVector                        view_position;                                            // 0x0030(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAIWeaponStateInfo
// 0x0028 (0x0040 - 0x0018)
struct FDiffAIWeaponStateInfo : public FDiffStateInfoBase
{
	uint32_t                                           slot_id;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoInt32                         Category;                                                 // 0x001C(0x0004)
	struct FDiffStateInfoInt32                         Type;                                                     // 0x0020(0x0004)
	struct FDiffStateInfoInt32                         Bullet;                                                   // 0x0024(0x0004)
	struct FDiffStateInfoFloat                         remain_reloading;                                         // 0x0028(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<int>                                        attachments;                                              // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerWeapon
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIPlayerWeapon : public FDiffStateInfoBase
{
	TArray<struct FDiffAIWeaponStateInfo>              player_weapon;                                            // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffStateInfoUInt32
// 0x0004
struct FDiffStateInfoUInt32
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffAIBackpackItem
// 0x0010 (0x0028 - 0x0018)
struct FDiffAIBackpackItem : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Category;                                                 // 0x0018(0x0004)
	uint32_t                                           ID;                                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoUInt32                        Count;                                                    // 0x0020(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffPlayerBackpack
// 0x0020 (0x0038 - 0x0018)
struct FDiffPlayerBackpack : public FDiffStateInfoBase
{
	TArray<struct FDiffAIBackpackItem>                 backpack_item;                                            // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIEquipmentInfo
// 0x0010 (0x0028 - 0x0018)
struct FDiffAIEquipmentInfo : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Category;                                                 // 0x0018(0x0004)
	uint32_t                                           ID;                                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoFloat                         Durability;                                               // 0x0020(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAIPlayerEquipment
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIPlayerEquipment : public FDiffStateInfoBase
{
	TArray<struct FDiffAIEquipmentInfo>                equipment_item;                                           // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffProgressBarState
// 0x0008 (0x0020 - 0x0018)
struct FDiffProgressBarState : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Type;                                                     // 0x0018(0x0004)
	struct FDiffStateInfoFloat                         remain_time;                                              // 0x001C(0x0004)
};

// ScriptStruct AI.DiffAISimplifyStateBaseMod
// 0x0008 (0x0020 - 0x0018)
struct FDiffAISimplifyStateBaseMod : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoBool                          has_smoke;                                                // 0x001C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct AI.DiffAINearbyPlayerBaseMod
// 0x0020 (0x0038 - 0x0018)
struct FDiffAINearbyPlayerBaseMod : public FDiffStateInfoBase
{
	struct FDiffAISimplifyStateBaseMod                 State;                                                    // 0x0018(0x0020)
};

// ScriptStruct AI.DiffAINearbyPlayersBaseMod
// 0x0020 (0x0038 - 0x0018)
struct FDiffAINearbyPlayersBaseMod : public FDiffStateInfoBase
{
	TArray<struct FDiffAINearbyPlayerBaseMod>          Players;                                                  // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffItemStateData
// 0x0030 (0x0048 - 0x0018)
struct FDiffItemStateData : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Type;                                                     // 0x0018(0x0004)
	struct FDiffStateInfoInt32                         Category;                                                 // 0x001C(0x0004)
	struct FDiffStateInfoUInt32                        ID;                                                       // 0x0020(0x0004)
	int                                                UID;                                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoFloat                         Durability;                                               // 0x0028(0x0004)
	struct FDiffStateInfoVector                        Position;                                                 // 0x002C(0x000C)
	struct FDiffStateInfoUInt32                        player_id;                                                // 0x0038(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FDiffStateInfoUInt64                        unique_id;                                                // 0x0040(0x0008)
};

// ScriptStruct AI.DiffItemStateDatas
// 0x0020 (0x0038 - 0x0018)
struct FDiffItemStateDatas : public FDiffStateInfoBase
{
	TArray<struct FDiffItemStateData>                  Items;                                                    // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIConfig
// 0x0008 (0x0020 - 0x0018)
struct FDiffAIConfig : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Level;                                                    // 0x0018(0x0004)
	struct FDiffStateInfoInt32                         Style;                                                    // 0x001C(0x0004)
};

// ScriptStruct AI.DiffSingleDestroyBulletProbInfo
// 0x0010 (0x0028 - 0x0018)
struct FDiffSingleDestroyBulletProbInfo : public FAIStateInfoBase
{
	struct FDiffStateInfoFloat                         max_destroy_time_float;                                   // 0x0018(0x0004)
	struct FDiffStateInfoInt32                         max_destroy_num;                                          // 0x001C(0x0004)
	struct FDiffStateInfoFloat                         destroy_cd_float;                                         // 0x0020(0x0004)
	struct FDiffStateInfoFloat                         destroy_bullet_prob;                                      // 0x0024(0x0004)
};

// ScriptStruct AI.DiffAIDestroyBulletProbInfo
// 0x0080 (0x0098 - 0x0018)
struct FDiffAIDestroyBulletProbInfo : public FDiffStateInfoBase
{
	int                                                bullet_id;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoFloat                         low_hp_threshold;                                         // 0x001C(0x0004)
	struct FDiffSingleDestroyBulletProbInfo            low_hp_destroy_bullet_info;                               // 0x0020(0x0028)
	struct FDiffSingleDestroyBulletProbInfo            high_hp_destroy_bullet_info;                              // 0x0048(0x0028)
	struct FDiffSingleDestroyBulletProbInfo            fatal_Damage_destroy_bullet_info;                         // 0x0070(0x0028)
};

// ScriptStruct AI.DiffAIDestroyBulletProbInfos
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIDestroyBulletProbInfos : public FDiffStateInfoBase
{
	TArray<struct FDiffAIDestroyBulletProbInfo>        States;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIStateInfoBaseMod
// 0x03C0 (0x03D8 - 0x0018)
struct FDiffAIStateInfoBaseMod : public FDiffStateInfoBase
{
	struct FDiffAIPlayerStateBaseMod                   State;                                                    // 0x0018(0x0108)
	struct FDiffCameraState                            Camera;                                                   // 0x0120(0x0040)
	struct FDiffAIPlayerWeapon                         Weapon;                                                   // 0x0160(0x0038)
	struct FDiffPlayerBackpack                         BackPack;                                                 // 0x0198(0x0038)
	struct FDiffAIPlayerEquipment                      equipment;                                                // 0x01D0(0x0038)
	uint32_t                                           Key;                                                      // 0x0208(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x020C(0x0004) MISSED OFFSET
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x0210(0x0058)
	struct FAIHeardSound                               Sound;                                                    // 0x0268(0x0010)
	TArray<struct FDamageSource>                       all_damage_source;                                        // 0x0278(0x0010) (ZeroConstructor)
	struct FDiffProgressBarState                       progress_bar;                                             // 0x0288(0x0020)
	struct FDiffAINearbyPlayersBaseMod                 nearby_player;                                            // 0x02A8(0x0038)
	struct FDiffItemStateDatas                         nearby_item;                                              // 0x02E0(0x0038)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x0318(0x0010) (ZeroConstructor)
	TArray<struct FItemStateData>                      nearby_box_item;                                          // 0x0328(0x0010) (ZeroConstructor)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x0338(0x0030)
	TArray<struct FAIBulletHole>                       all_bullet_hole;                                          // 0x0368(0x0010) (ZeroConstructor)
	uint32_t                                           ai_style;                                                 // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	struct FDiffAIConfig                               Config;                                                   // 0x0380(0x0020)
	struct FDiffAIDestroyBulletProbInfos               destroy_bullet_prob_info;                                 // 0x03A0(0x0038)
};

// ScriptStruct AI.CacheNearbyItemState
// 0x0020
struct FCacheNearbyItemState
{
	TArray<struct FItemStateData>                      States;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     Position;                                                 // 0x0010(0x000C) (IsPlainOldData)
	bool                                               IsDirty;                                                  // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct AI.ObstacleState
// 0x0030 (0x0050 - 0x0020)
struct FObstacleState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HP;                                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              max_hp;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0034(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0040(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIPlayerStateBRBase
// 0x0050 (0x0068 - 0x0018)
struct FAIPlayerStateBRBase : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_diving;                                                // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                vehicle_role;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                revival_count;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_be_spectated;                                          // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                parallel_world_id;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           related_id;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                revival_type;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           parachute_state;                                          // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           plane_id;                                                 // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               can_parachute_jump;                                       // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	uint32_t                                           follow_state;                                             // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               can_self_revival;                                         // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	uint32_t                                           leader_id;                                                // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           parachute_type;                                           // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                expect_delivery_num;                                      // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                remain_delivery_num;                                      // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 target_position;                                          // 0x005C(0x000C)
};

// ScriptStruct AI.VehicleDamageInfo
// 0x0018 (0x0030 - 0x0018)
struct FVehicleDamageInfo : public FAIStateInfoBase
{
	uint32_t                                           vehicle_id;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                damage_type;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_kill;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct AI.VehicleState
// 0x00B8 (0x00D8 - 0x0020)
struct FVehicleState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0024(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0030(0x000C)
	float                                              HP;                                                       // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              gas;                                                      // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0044(0x000C)
	uint32_t                                           damaged_num;                                              // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Category;                                                 // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_reverse;                                               // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               has_player;                                               // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_full;                                                  // 0x005A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x005B(0x0005) MISSED OFFSET
	struct FCameraState                                Camera;                                                   // 0x0060(0x0040)
	int                                                location_state;                                           // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_attached;                                              // 0x00A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	TArray<float>                                      wheels_hp;                                                // 0x00A8(0x0010) (ZeroConstructor)
	TArray<struct FVehicleDamageInfo>                  damage_info;                                              // 0x00B8(0x0010) (ZeroConstructor)
	bool                                               is_has_collision;                                         // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               is_using_horn;                                            // 0x00C9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00CA(0x0002) MISSED OFFSET
	uint32_t                                           born_island_owner_id;                                     // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           vehicle_avatar_id;                                        // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DoorState
// 0x0020 (0x0040 - 0x0020)
struct FDoorState : public FUniqueStateInfo
{
	struct FAIStateXYZ                                 Position;                                                 // 0x0020(0x000C)
	int                                                State;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ID;                                                       // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0034(0x000C)
};

// ScriptStruct AI.AIRecipients
// 0x0020 (0x0038 - 0x0018)
struct FAIRecipients : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           team_id;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0020(0x000C)
	float                                              HP;                                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Type;                                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.MonsterState
// 0x0038 (0x0058 - 0x0020)
struct FMonsterState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0028(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0034(0x000C)
	struct FAIStateXYZ                                 Speed;                                                    // 0x0040(0x000C)
	float                                              HP;                                                       // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              hp_max;                                                   // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                using_skill_id;                                           // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DynamicItem
// 0x0030 (0x0050 - 0x0020)
struct FDynamicItem : public FUniqueStateInfo
{
	int                                                Category;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ID;                                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Center;                                                   // 0x0028(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0034(0x000C)
	float                                              Durability;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Custom;                                                   // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                parallel_world_id;                                        // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.LandScapeDestroyState
// 0x0018 (0x0038 - 0x0020)
struct FLandScapeDestroyState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Location;                                                 // 0x0024(0x000C)
	int                                                Radius;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Depth;                                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIStateInfoBRBase
// 0x01E8 (0x0208 - 0x0020)
struct FAIStateInfoBRBase : public FUniqueStateInfo
{
	struct FAIPlayerStateBRBase                        State;                                                    // 0x0020(0x0068)
	struct FVehicleState                               vehicle_state;                                            // 0x0088(0x00D8)
	TArray<struct FDoorState>                          nearby_door;                                              // 0x0160(0x0010) (ZeroConstructor)
	TArray<struct FVehicleState>                       nearby_vehicles;                                          // 0x0170(0x0010) (ZeroConstructor)
	TArray<struct FAIRecipients>                       recipients;                                               // 0x0180(0x0010) (ZeroConstructor)
	TArray<struct FMonsterState>                       monster_states;                                           // 0x0190(0x0010) (ZeroConstructor)
	TArray<struct FDynamicItem>                        dynamic_items;                                            // 0x01A0(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_door_index;                                        // 0x01B0(0x0010) (ZeroConstructor)
	uint32_t                                           deliver_target_id;                                        // 0x01C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
	TArray<uint64_t>                                   nearby_vehicles_index;                                    // 0x01C8(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   dynamic_items_index;                                      // 0x01D8(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   monster_states_index;                                     // 0x01E8(0x0010) (ZeroConstructor)
	TArray<struct FLandScapeDestroyState>              landscape_destroy_info;                                   // 0x01F8(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffDoorStateGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffDoorStateGeneral : public FDiffStateInfoBase
{
	TArray<struct FDoorState>                          Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffVehicleStatesGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffVehicleStatesGeneral : public FDiffStateInfoBase
{
	TArray<struct FVehicleState>                       Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffDynamicItemStatesGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffDynamicItemStatesGeneral : public FDiffStateInfoBase
{
	TArray<struct FDynamicItem>                        Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffMonsterStatesGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffMonsterStatesGeneral : public FDiffStateInfoBase
{
	TArray<struct FMonsterState>                       Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIStateInfoBRBaseGeneral
// 0x0278 (0x0298 - 0x0020)
struct FDiffAIStateInfoBRBaseGeneral : public FDiffUniqueStateInfo
{
	struct FAIPlayerStateBRBase                        State;                                                    // 0x0020(0x0068)
	struct FDiffDoorStateGeneral                       nearby_door;                                              // 0x0088(0x0038)
	TArray<uint64_t>                                   nearby_door_index;                                        // 0x00C0(0x0010) (ZeroConstructor)
	struct FVehicleState                               vehicle_state;                                            // 0x00D0(0x00D8)
	struct FDiffVehicleStatesGeneral                   nearby_vehicles;                                          // 0x01A8(0x0038)
	TArray<uint64_t>                                   nearby_vehicles_index;                                    // 0x01E0(0x0010) (ZeroConstructor)
	uint32_t                                           deliver_target_id;                                        // 0x01F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET
	TArray<struct FAIRecipients>                       recipients;                                               // 0x01F8(0x0010) (ZeroConstructor)
	struct FDiffDynamicItemStatesGeneral               dynamic_items;                                            // 0x0208(0x0038)
	TArray<uint64_t>                                   dynamic_items_index;                                      // 0x0240(0x0010) (ZeroConstructor)
	struct FDiffMonsterStatesGeneral                   monster_states;                                           // 0x0250(0x0038)
	TArray<uint64_t>                                   monster_states_index;                                     // 0x0288(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerStateBRBase
// 0x0048 (0x0060 - 0x0018)
struct FDiffAIPlayerStateBRBase : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoBool                          is_diving;                                                // 0x001C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         vehicle_role;                                             // 0x0020(0x0004)
	struct FDiffStateInfoInt32                         revival_count;                                            // 0x0024(0x0004)
	struct FDiffStateInfoBool                          is_be_spectated;                                          // 0x0028(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         parallel_world_id;                                        // 0x002C(0x0004)
	struct FDiffStateInfoUInt32                        related_id;                                               // 0x0030(0x0004)
	struct FDiffStateInfoInt32                         revival_type;                                             // 0x0034(0x0004)
	struct FDiffStateInfoUInt32                        plane_id;                                                 // 0x0038(0x0004)
	struct FDiffStateInfoUInt32                        parachute_state;                                          // 0x003C(0x0004)
	struct FDiffStateInfoBool                          can_parachute_jump;                                       // 0x0040(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FDiffStateInfoUInt32                        follow_state;                                             // 0x0044(0x0004)
	struct FDiffStateInfoUInt32                        leader_id;                                                // 0x0048(0x0004)
	struct FDiffStateInfoUInt32                        parachute_type;                                           // 0x004C(0x0004)
	struct FDiffStateInfoVector                        target_position;                                          // 0x0050(0x000C)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffVehicleState
// 0x0088 (0x00A0 - 0x0018)
struct FDiffVehicleState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoVector                        Position;                                                 // 0x001C(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x0028(0x000C)
	struct FDiffStateInfoFloat                         HP;                                                       // 0x0034(0x0004)
	struct FDiffStateInfoFloat                         gas;                                                      // 0x0038(0x0004)
	struct FDiffStateInfoVector                        Speed;                                                    // 0x003C(0x000C)
	struct FDiffStateInfoUInt32                        damaged_num;                                              // 0x0048(0x0004)
	struct FDiffStateInfoUInt32                        Category;                                                 // 0x004C(0x0004)
	struct FDiffStateInfoBool                          is_reverse;                                               // 0x0050(0x0001)
	struct FDiffStateInfoBool                          has_player;                                               // 0x0051(0x0001)
	struct FDiffStateInfoBool                          is_full;                                                  // 0x0052(0x0001)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0053(0x0005) MISSED OFFSET
	struct FDiffCameraState                            Camera;                                                   // 0x0058(0x0040)
	struct FDiffStateInfoInt32                         location_state;                                           // 0x0098(0x0004)
	struct FDiffStateInfoBool                          is_attached;                                              // 0x009C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
};

// ScriptStruct AI.DiffVehicleStates
// 0x0020 (0x0038 - 0x0018)
struct FDiffVehicleStates : public FDiffStateInfoBase
{
	TArray<struct FDiffVehicleState>                   vehicle_states;                                           // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffMonsterState
// 0x0038 (0x0050 - 0x0018)
struct FDiffMonsterState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoUInt32                        Category;                                                 // 0x001C(0x0004)
	struct FDiffStateInfoVector                        Position;                                                 // 0x0020(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x002C(0x000C)
	struct FDiffStateInfoVector                        Speed;                                                    // 0x0038(0x000C)
	struct FDiffStateInfoFloat                         HP;                                                       // 0x0044(0x0004)
	struct FDiffStateInfoFloat                         hp_max;                                                   // 0x0048(0x0004)
	struct FDiffStateInfoInt32                         using_skill_id;                                           // 0x004C(0x0004)
};

// ScriptStruct AI.DiffMonsterStates
// 0x0020 (0x0038 - 0x0018)
struct FDiffMonsterStates : public FDiffStateInfoBase
{
	TArray<struct FDiffMonsterState>                   States;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffDynamicItem
// 0x0030 (0x0048 - 0x0018)
struct FDiffDynamicItem : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         Category;                                                 // 0x0018(0x0004)
	uint32_t                                           ID;                                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoVector                        Center;                                                   // 0x0020(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x002C(0x000C)
	struct FDiffStateInfoFloat                         Durability;                                               // 0x0038(0x0004)
	struct FDiffStateInfoUInt32                        Custom;                                                   // 0x003C(0x0004)
	struct FDiffStateInfoInt32                         parallel_world_id;                                        // 0x0040(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffDynamicItemStates
// 0x0020 (0x0038 - 0x0018)
struct FDiffDynamicItemStates : public FDiffStateInfoBase
{
	TArray<struct FDiffDynamicItem>                    dynamic_items;                                            // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffLandScapeDestroyState
// 0x0018 (0x0030 - 0x0018)
struct FDiffLandScapeDestroyState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoVector                        Location;                                                 // 0x001C(0x000C)
	struct FDiffStateInfoInt32                         Radius;                                                   // 0x0028(0x0004)
	struct FDiffStateInfoInt32                         Depth;                                                    // 0x002C(0x0004)
};

// ScriptStruct AI.DiffLandScapeDestroyStateInfo
// 0x0020 (0x0038 - 0x0018)
struct FDiffLandScapeDestroyStateInfo : public FDiffStateInfoBase
{
	TArray<struct FDiffLandScapeDestroyState>          States;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIStateInfoBRBase
// 0x0200 (0x0218 - 0x0018)
struct FDiffAIStateInfoBRBase : public FDiffStateInfoBase
{
	struct FDiffAIPlayerStateBRBase                    State;                                                    // 0x0018(0x0060)
	struct FDiffVehicleState                           vehicle_state;                                            // 0x0078(0x00A0)
	TArray<struct FDoorState>                          nearby_door;                                              // 0x0118(0x0010) (ZeroConstructor)
	struct FDiffVehicleStates                          nearby_vehicles;                                          // 0x0128(0x0038)
	TArray<struct FAIRecipients>                       recipients;                                               // 0x0160(0x0010) (ZeroConstructor)
	struct FDiffMonsterStates                          monster_states;                                           // 0x0170(0x0038)
	struct FDiffDynamicItemStates                      dynamic_item_states;                                      // 0x01A8(0x0038)
	struct FDiffLandScapeDestroyStateInfo              landscape_destroy_info;                                   // 0x01E0(0x0038)
};

// ScriptStruct AI.AIPlayerStateMPBase
// 0x0020 (0x0038 - 0x0018)
struct FAIPlayerStateMPBase : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_invincible;                                            // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               in_shoveling;                                             // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	int                                                death_count;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              survive_time;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              kd_ratio;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                continue_kill;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                revenge;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                top_spot_end;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.TeamScoreData
// 0x0008 (0x0028 - 0x0020)
struct FTeamScoreData : public FUniqueStateInfo
{
	int                                                team_id;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_score;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIGameStateMPBase
// 0x0010 (0x0028 - 0x0018)
struct FAIGameStateMPBase : public FAIStateInfoBase
{
	TArray<struct FTeamScoreData>                      team_score_datas;                                         // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIGameModePlayerWeaponSchemeSlotInfo
// 0x0020 (0x0038 - 0x0018)
struct FAIGameModePlayerWeaponSchemeSlotInfo : public FAIStateInfoBase
{
	int                                                slot_index;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                item_id;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<int>                                        attach_list;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIGameModePlayerWeaponSchemeInfo
// 0x0018 (0x0030 - 0x0018)
struct FAIGameModePlayerWeaponSchemeInfo : public FAIStateInfoBase
{
	int                                                scheme_index;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_locked;                                                // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	TArray<struct FAIGameModePlayerWeaponSchemeSlotInfo> slot_list;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DeathMatchAIPlayerEquipment
// 0x0018 (0x0030 - 0x0018)
struct FDeathMatchAIPlayerEquipment : public FAIStateInfoBase
{
	TArray<struct FAIGameModePlayerWeaponSchemeInfo>   weapon_scheme_info_list;                                  // 0x0018(0x0010) (ZeroConstructor)
	int                                                cur_weapon_scheme_index;                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIStateInfoMPBase
// 0x0090 (0x00B0 - 0x0020)
struct FAIStateInfoMPBase : public FUniqueStateInfo
{
	struct FAIPlayerStateMPBase                        State;                                                    // 0x0020(0x0038)
	struct FAIGameStateMPBase                          Game;                                                     // 0x0058(0x0028)
	struct FDeathMatchAIPlayerEquipment                deathmatch_backpack;                                      // 0x0080(0x0030)
};

// ScriptStruct AI.DiffGameScoreDatas
// 0x0020
struct FDiffGameScoreDatas
{
	TArray<struct FTeamScoreData>                      Values;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIGameStateMPBaseGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIGameStateMPBaseGeneral : public FDiffStateInfoBase
{
	struct FDiffGameScoreDatas                         team_score_datas;                                         // 0x0018(0x0020)
};

// ScriptStruct AI.DiffAIStateInfoMPBaseGeneral
// 0x00A0 (0x00C0 - 0x0020)
struct FDiffAIStateInfoMPBaseGeneral : public FDiffUniqueStateInfo
{
	struct FAIPlayerStateMPBase                        State;                                                    // 0x0020(0x0038)
	struct FDiffAIGameStateMPBaseGeneral               Game;                                                     // 0x0058(0x0038)
	struct FDeathMatchAIPlayerEquipment                deathmatch_backpack;                                      // 0x0090(0x0030)
};

// ScriptStruct AI.AIStateInfoTeamDeath
// 0x0030 (0x0050 - 0x0020)
struct FAIStateInfoTeamDeath : public FUniqueStateInfo
{
	struct FDeathMatchAIPlayerEquipment                deathmatch_backpack;                                      // 0x0020(0x0030)
};

// ScriptStruct AI.DiffAIStateInfoTeamDeathGeneral
// 0x0030 (0x0050 - 0x0020)
struct FDiffAIStateInfoTeamDeathGeneral : public FDiffUniqueStateInfo
{
	struct FDeathMatchAIPlayerEquipment                deathmatch_backpack;                                      // 0x0020(0x0030)
};

// ScriptStruct AI.MLAIStateInfoBaseMod
// 0x0178 (0x0198 - 0x0020)
struct FMLAIStateInfoBaseMod : public FUniqueStateInfo
{
	struct FAIHeardSound                               Sound;                                                    // 0x0020(0x0010)
	struct FAIDamageSources                            damage_sources;                                           // 0x0030(0x0048)
	struct FProgressBarState                           progress_bar;                                             // 0x0078(0x0028)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x00A0(0x0030)
	struct FAIStateConfig                              Config;                                                   // 0x00D0(0x0020)
	struct FDamageRateInfo                             damage_rate_info;                                         // 0x00F0(0x0040)
	TArray<struct FAIDestroyBulletProbInfo>            destroy_bullet_prob_info;                                 // 0x0130(0x0010) (ZeroConstructor)
	struct FAIBulletHoles                              bullet_holes;                                             // 0x0140(0x0038)
	TArray<struct FDamageSource>                       all_damage_source;                                        // 0x0178(0x0010) (ZeroConstructor)
	TArray<struct FAIBulletHole>                       all_bullet_hole;                                          // 0x0188(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffMLAIStateInfoBaseModGeneral
// 0x0180 (0x01A0 - 0x0020)
struct FDiffMLAIStateInfoBaseModGeneral : public FUniqueStateInfo
{
	struct FAIHeardSound                               Sound;                                                    // 0x0020(0x0010)
	struct FAIDamageSources                            damage_sources;                                           // 0x0030(0x0048)
	struct FProgressBarState                           progress_bar;                                             // 0x0078(0x0028)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x00A0(0x0030)
	struct FAIStateConfig                              Config;                                                   // 0x00D0(0x0020)
	struct FDamageRateInfo                             damage_rate_info;                                         // 0x00F0(0x0040)
	struct FDiffAIDestroyBulletProbInfoListGeneral     destroy_bullet_prob_info;                                 // 0x0130(0x0038)
	struct FAIBulletHoles                              bullet_holes;                                             // 0x0168(0x0038)
};

// ScriptStruct AI.DiffAllMLAIInfoBaseModGeneral
// 0x00F0 (0x0108 - 0x0018)
struct FDiffAllMLAIInfoBaseModGeneral : public FAIStateInfoBase
{
	TMap<uint32_t, struct FMLAIStateInfoBaseMod>       AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffMLAIStateInfoBaseModGeneral> AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FMLAIStateInfoBaseMod>       DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.DiffMLAIStateInfoBaseMod
// 0x00A0 (0x00C0 - 0x0020)
struct FDiffMLAIStateInfoBaseMod : public FUniqueStateInfo
{
	struct FAIHeardSound                               Sound;                                                    // 0x0020(0x0010)
	struct FDiffProgressBarState                       progress_bar;                                             // 0x0030(0x0020)
	struct FAIPlayerHitInfo                            player_hit_info;                                          // 0x0050(0x0030)
	struct FDiffAIConfig                               Config;                                                   // 0x0080(0x0020)
	TArray<struct FDamageSource>                       all_damage_source;                                        // 0x00A0(0x0010) (ZeroConstructor)
	TArray<struct FAIBulletHole>                       all_bullet_hole;                                          // 0x00B0(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAllMLAIInfoBaseMod
// 0x00A0 (0x00B8 - 0x0018)
struct FDiffAllMLAIInfoBaseMod : public FAIStateInfoBase
{
	TMap<uint32_t, struct FDiffMLAIStateInfoBaseMod>   diff_states;                                              // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FMLAIStateInfoBaseMod>       State;                                                    // 0x0068(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.AIBaseStateInfo
// 0x0238 (0x0258 - 0x0020)
struct FAIBaseStateInfo : public FUniqueStateInfo
{
	struct FAIPlayerStateBaseMod                       State;                                                    // 0x0020(0x0120)
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x0140(0x0058)
	struct FCameraState                                Camera;                                                   // 0x0198(0x0040)
	struct FAIPlayerWeapon                             Weapon;                                                   // 0x01D8(0x0010)
	struct FAIPlayerBackpack                           BackPack;                                                 // 0x01E8(0x0010)
	struct FAIPlayerEquipment                          equipment;                                                // 0x01F8(0x0010)
	uint32_t                                           Key;                                                      // 0x0208(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ai_style;                                                 // 0x020C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FChatMsgInfo>                        chatmsg_info_list;                                        // 0x0210(0x0010) (ZeroConstructor)
	TArray<struct FSignMsgInfo>                        signmsg_info_list;                                        // 0x0220(0x0010) (ZeroConstructor)
	TArray<struct FMapMarkInfo>                        mapmark_info_list;                                        // 0x0230(0x0010) (ZeroConstructor)
	TArray<struct FAIAvatarInfo>                       avatar_info;                                              // 0x0240(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0250(0x0008) MISSED OFFSET
};

// ScriptStruct AI.DiffAIBaseStateInfoGeneral
// 0x0310 (0x0330 - 0x0020)
struct FDiffAIBaseStateInfoGeneral : public FDiffUniqueStateInfo
{
	struct FDiffAIPlayerStateBaseModGeneral            State;                                                    // 0x0020(0x0140)
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x0160(0x0058)
	struct FCameraState                                Camera;                                                   // 0x01B8(0x0040)
	struct FDiffAIPlayerWeaponGeneral                  Weapon;                                                   // 0x01F8(0x0050)
	struct FDiffAIPlayerBackpackGeneral                BackPack;                                                 // 0x0248(0x0050)
	struct FDiffAIPlayerEquipmentGeneral               equipment;                                                // 0x0298(0x0050)
	uint32_t                                           Key;                                                      // 0x02E8(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ai_style;                                                 // 0x02EC(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FChatMsgInfo>                        chatmsg_info_list;                                        // 0x02F0(0x0010) (ZeroConstructor)
	TArray<struct FSignMsgInfo>                        signmsg_info_list;                                        // 0x0300(0x0010) (ZeroConstructor)
	TArray<struct FMapMarkInfo>                        mapmark_info_list;                                        // 0x0310(0x0010) (ZeroConstructor)
	TArray<struct FAIAvatarInfo>                       avatar_info;                                              // 0x0320(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAllPlayerBaseInfoGeneral
// 0x0108 (0x0120 - 0x0018)
struct FDiffAllPlayerBaseInfoGeneral : public FAIStateInfoBase
{
	uint32_t                                           Key;                                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TMap<uint32_t, struct FAIBaseStateInfo>            AllAIStateInfo;                                           // 0x0020(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIBaseStateInfoGeneral> AllDiffAIStateInfo;                                       // 0x0070(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIBaseStateInfo>            DebugAllAIStateInfo;                                      // 0x00C0(0x0050) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0110(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIBaseStateInfo
// 0x0250 (0x0268 - 0x0018)
struct FDiffAIBaseStateInfo : public FDiffStateInfoBase
{
	struct FDiffAIPlayerStateBaseMod                   State;                                                    // 0x0018(0x0108)
	struct FDiffCameraState                            Camera;                                                   // 0x0120(0x0040)
	struct FDiffAIPlayerWeapon                         Weapon;                                                   // 0x0160(0x0038)
	struct FDiffPlayerBackpack                         BackPack;                                                 // 0x0198(0x0038)
	struct FDiffAIPlayerEquipment                      equipment;                                                // 0x01D0(0x0038)
	uint32_t                                           Key;                                                      // 0x0208(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ai_style;                                                 // 0x020C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x0210(0x0058)
};

// ScriptStruct AI.AIGameStateBaseMod
// 0x0048 (0x0060 - 0x0018)
struct FAIGameStateBaseMod : public FAIStateInfoBase
{
	bool                                               is_over;                                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                alive_player_count;                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stage;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_map;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_type;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     game_ds_version;                                          // 0x0030(0x0010) (ZeroConstructor)
	int                                                zone_id;                                                  // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	uint64_t                                           left_time;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           stage_time;                                               // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                can_jump_sky;                                             // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.BattleVoiceRoomInfo
// 0x0018 (0x0038 - 0x0020)
struct FBattleVoiceRoomInfo : public FUniqueStateInfo
{
	uint32_t                                           team_id;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     battle_voice_room_id;                                     // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.GlobalGameBaseState
// 0x0070 (0x0088 - 0x0018)
struct FGlobalGameBaseState : public FAIStateInfoBase
{
	struct FAIGameStateBaseMod                         Game;                                                     // 0x0018(0x0060)
	TArray<struct FBattleVoiceRoomInfo>                voice_room_list;                                          // 0x0078(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIGameStateBaseMod
// 0x0048 (0x0060 - 0x0018)
struct FDiffAIGameStateBaseMod : public FDiffStateInfoBase
{
	struct FDiffStateInfoBool                          is_over;                                                  // 0x0018(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         alive_player_count;                                       // 0x001C(0x0004)
	struct FDiffStateInfoInt32                         Stage;                                                    // 0x0020(0x0004)
	struct FDiffStateInfoUInt32                        mode_map;                                                 // 0x0024(0x0004)
	struct FDiffStateInfoUInt32                        mode_type;                                                // 0x0028(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     game_ds_version;                                          // 0x0030(0x0010) (ZeroConstructor)
	struct FDiffStateInfoInt32                         zone_id;                                                  // 0x0040(0x0004)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FDiffStateInfoUInt64                        left_time;                                                // 0x0048(0x0008)
	struct FDiffStateInfoUInt64                        stage_time;                                               // 0x0050(0x0008)
	struct FDiffStateInfoInt32                         can_jump_sky;                                             // 0x0058(0x0004)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffGlobalGameBaseState
// 0x0060 (0x0078 - 0x0018)
struct FDiffGlobalGameBaseState : public FAIStateInfoBase
{
	struct FDiffAIGameStateBaseMod                     Game;                                                     // 0x0018(0x0060)
};

// ScriptStruct AI.AIPoolPlayerState
// 0x0008 (0x0020 - 0x0018)
struct FAIPoolPlayerState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAIPoolStateInfo
// 0x0028 (0x0040 - 0x0018)
struct FDiffAIPoolStateInfo : public FDiffStateInfoBase
{
	struct FAIPoolPlayerState                          State;                                                    // 0x0018(0x0020)
	uint32_t                                           Key;                                                      // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAllPlayerBaseInfo
// 0x0420 (0x0438 - 0x0018)
struct FDiffAllPlayerBaseInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FDiffAIBaseStateInfo>        diff_states;                                              // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIBaseStateInfo>            State;                                                    // 0x0068(0x0050) (ZeroConstructor)
	struct FGlobalGameBaseState                        global_state;                                             // 0x00B8(0x0088)
	struct FDiffGlobalGameBaseState                    diff_global_state;                                        // 0x0140(0x0078)
	TMap<uint32_t, struct FAIBaseStateInfo>            global_player_states;                                     // 0x01B8(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIBaseStateInfo>        global_player_diff_states;                                // 0x0208(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIBaseStateInfo>            in_pool_states;                                           // 0x0258(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIPoolStateInfo>        in_pool_diff_states;                                      // 0x02A8(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIBaseStateInfo>            near_player_states;                                       // 0x02F8(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIBaseStateInfo>        near_player_diff_states;                                  // 0x0348(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIBaseStateInfo>            global_btai_states;                                       // 0x0398(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIBaseStateInfo>        global_btai_diff_states;                                  // 0x03E8(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIGameStateBaseModGeneral
// 0x0048 (0x0060 - 0x0018)
struct FDiffAIGameStateBaseModGeneral : public FDiffStateInfoBase
{
	bool                                               is_over;                                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                alive_player_count;                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Stage;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_map;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           mode_type;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     game_ds_version;                                          // 0x0030(0x0010) (ZeroConstructor)
	int                                                zone_id;                                                  // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	uint64_t                                           left_time;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           stage_time;                                               // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                can_jump_sky;                                             // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffBattleVoiceRoomInfoListGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffBattleVoiceRoomInfoListGeneral : public FDiffStateInfoBase
{
	TArray<struct FBattleVoiceRoomInfo>                Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffGlobalGameBaseStateGeneral
// 0x0098 (0x00B0 - 0x0018)
struct FDiffGlobalGameBaseStateGeneral : public FAIStateInfoBase
{
	struct FDiffAIGameStateBaseModGeneral              Game;                                                     // 0x0018(0x0060)
	struct FDiffBattleVoiceRoomInfoListGeneral         voice_room_list;                                          // 0x0078(0x0038)
};

// ScriptStruct AI.AIPlayerBRBaseState
// 0x0048 (0x0060 - 0x0018)
struct FAIPlayerBRBaseState : public FAIStateInfoBase
{
	int                                                expect_delivery_num;                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                remain_delivery_num;                                      // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_diving;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                revival_count;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               can_self_revival;                                         // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	uint32_t                                           parachute_state;                                          // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           plane_id;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                parallel_world_id;                                        // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               is_be_spectated;                                          // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	uint32_t                                           related_id;                                               // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               can_parachute_jump;                                       // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	uint32_t                                           follow_state;                                             // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           leader_id;                                                // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           parachute_type;                                           // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                revival_type;                                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 target_position;                                          // 0x0054(0x000C)
};

// ScriptStruct AI.AIBRBaseStateInfo
// 0x0078 (0x0098 - 0x0020)
struct FAIBRBaseStateInfo : public FUniqueStateInfo
{
	struct FAIPlayerBRBaseState                        State;                                                    // 0x0020(0x0060)
	uint32_t                                           deliver_target_id;                                        // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	TArray<struct FAIRecipients>                       recipients;                                               // 0x0088(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAllPlayerBRBaseInfoGeneral
// 0x00F0 (0x0108 - 0x0018)
struct FDiffAllPlayerBRBaseInfoGeneral : public FAIStateInfoBase
{
	TMap<uint32_t, struct FAIBRBaseStateInfo>          AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIBRBaseStateInfo>          AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIBRBaseStateInfo>          DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerBRBaseState
// 0x0040 (0x0058 - 0x0018)
struct FDiffAIPlayerBRBaseState : public FAIStateInfoBase
{
	struct FDiffStateInfoBool                          is_diving;                                                // 0x0018(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         revival_count;                                            // 0x001C(0x0004)
	struct FDiffStateInfoBool                          is_be_spectated;                                          // 0x0020(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FDiffStateInfoInt32                         parallel_world_id;                                        // 0x0024(0x0004)
	struct FDiffStateInfoUInt32                        related_id;                                               // 0x0028(0x0004)
	struct FDiffStateInfoInt32                         revival_type;                                             // 0x002C(0x0004)
	struct FDiffStateInfoUInt32                        plane_id;                                                 // 0x0030(0x0004)
	struct FDiffStateInfoUInt32                        parachute_state;                                          // 0x0034(0x0004)
	struct FDiffStateInfoBool                          can_parachute_jump;                                       // 0x0038(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FDiffStateInfoUInt32                        follow_state;                                             // 0x003C(0x0004)
	struct FDiffStateInfoUInt32                        leader_id;                                                // 0x0040(0x0004)
	struct FDiffStateInfoUInt32                        parachute_type;                                           // 0x0044(0x0004)
	struct FDiffStateInfoVector                        target_position;                                          // 0x0048(0x000C)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAIBRBaseStateInfo
// 0x0068 (0x0080 - 0x0018)
struct FDiffAIBRBaseStateInfo : public FDiffStateInfoBase
{
	struct FDiffAIPlayerBRBaseState                    State;                                                    // 0x0018(0x0058)
	TArray<struct FAIRecipients>                       recipients;                                               // 0x0070(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AirDropBoxState
// 0x0018 (0x0038 - 0x0020)
struct FAirDropBoxState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0028(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.SpecialZoneState
// 0x0040 (0x0060 - 0x0020)
struct FSpecialZoneState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Center;                                                   // 0x0024(0x000C)
	float                                              Radius;                                                   // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Type;                                                     // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0038(0x000C)
	struct FAIStateXYZ                                 Rotation;                                                 // 0x0044(0x000C)
	int                                                custom_state;                                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Scale;                                                    // 0x0054(0x000C)
};

// ScriptStruct AI.RedZoneState
// 0x0018 (0x0030 - 0x0018)
struct FRedZoneState : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 Center;                                                   // 0x0018(0x000C)
	float                                              Radius;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              remain_time;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              start_time;                                               // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.SafetyAreaState
// 0x0030 (0x0048 - 0x0018)
struct FSafetyAreaState : public FAIStateInfoBase
{
	int                                                State;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Center;                                                   // 0x001C(0x000C)
	float                                              Radius;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 next_center;                                              // 0x002C(0x000C)
	float                                              next_radius;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Time;                                                     // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_time;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                circle_index;                                             // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.FlightInfo
// 0x0038 (0x0050 - 0x0018)
struct FFlightInfo : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 start_loc;                                                // 0x0018(0x000C)
	struct FAIStateXYZ                                 end_loc;                                                  // 0x0024(0x000C)
	struct FAIStateXYZ                                 can_jump_loc;                                             // 0x0030(0x000C)
	struct FAIStateXYZ                                 force_jump_loc;                                           // 0x003C(0x000C)
	int                                                player_num;                                               // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.PlaneInfo
// 0x0068 (0x0088 - 0x0020)
struct FPlaneInfo : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Type;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAIStateXYZ                                 Position;                                                 // 0x0028(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FFlightInfo                                 flight_info;                                              // 0x0038(0x0050)
};

// ScriptStruct AI.GlobalControlInfo
// 0x0008 (0x0020 - 0x0018)
struct FGlobalControlInfo : public FAIStateInfoBase
{
	int                                                airdrop_tag;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.GlobalGameBRBaseState
// 0x00E0 (0x00F8 - 0x0018)
struct FGlobalGameBRBaseState : public FAIStateInfoBase
{
	TArray<struct FAirDropBoxState>                    air_drop_box_states;                                      // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FSpecialZoneState>                   special_zones;                                            // 0x0028(0x0010) (ZeroConstructor)
	struct FRedZoneState                               red_zone;                                                 // 0x0038(0x0030)
	struct FSafetyAreaState                            safety_area;                                              // 0x0068(0x0048)
	TArray<struct FPlaneInfo>                          airplane_list;                                            // 0x00B0(0x0010) (ZeroConstructor)
	struct FGlobalControlInfo                          control_info;                                             // 0x00C0(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	TArray<uint32_t>                                   silent_list;                                              // 0x00E8(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAirDropBoxState
// 0x0018 (0x0030 - 0x0018)
struct FDiffAirDropBoxState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoInt32                         Type;                                                     // 0x001C(0x0004)
	struct FDiffStateInfoVector                        Position;                                                 // 0x0020(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAirDropBoxStates
// 0x0020 (0x0038 - 0x0018)
struct FDiffAirDropBoxStates : public FDiffStateInfoBase
{
	TArray<struct FDiffAirDropBoxState>                States;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffSpecialZoneState
// 0x0040 (0x0058 - 0x0018)
struct FDiffSpecialZoneState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoVector                        Center;                                                   // 0x001C(0x000C)
	struct FDiffStateInfoFloat                         Radius;                                                   // 0x0028(0x0004)
	struct FDiffStateInfoUInt32                        Type;                                                     // 0x002C(0x0004)
	struct FDiffStateInfoVector                        Position;                                                 // 0x0030(0x000C)
	struct FDiffStateInfoVector                        Rotation;                                                 // 0x003C(0x000C)
	struct FDiffStateInfoInt32                         custom_state;                                             // 0x0048(0x0004)
	struct FDiffStateInfoVector                        Scale;                                                    // 0x004C(0x000C)
};

// ScriptStruct AI.DiffSpecialZone
// 0x0020 (0x0038 - 0x0018)
struct FDiffSpecialZone : public FDiffStateInfoBase
{
	TArray<struct FDiffSpecialZoneState>               State;                                                    // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffRedZoneState
// 0x0018 (0x0030 - 0x0018)
struct FDiffRedZoneState : public FDiffStateInfoBase
{
	struct FDiffStateInfoVector                        Center;                                                   // 0x0018(0x000C)
	struct FDiffStateInfoFloat                         Radius;                                                   // 0x0024(0x0004)
	struct FDiffStateInfoFloat                         remain_time;                                              // 0x0028(0x0004)
	struct FDiffStateInfoFloat                         start_time;                                               // 0x002C(0x0004)
};

// ScriptStruct AI.DiffSafetyAreaState
// 0x0030 (0x0048 - 0x0018)
struct FDiffSafetyAreaState : public FDiffStateInfoBase
{
	struct FDiffStateInfoInt32                         State;                                                    // 0x0018(0x0004)
	struct FDiffStateInfoVector                        Center;                                                   // 0x001C(0x000C)
	struct FDiffStateInfoFloat                         Radius;                                                   // 0x0028(0x0004)
	struct FDiffStateInfoVector                        next_center;                                              // 0x002C(0x000C)
	struct FDiffStateInfoFloat                         next_radius;                                              // 0x0038(0x0004)
	struct FDiffStateInfoInt32                         Time;                                                     // 0x003C(0x0004)
	struct FDiffStateInfoInt32                         total_time;                                               // 0x0040(0x0004)
	struct FDiffStateInfoInt32                         circle_index;                                             // 0x0044(0x0004)
};

// ScriptStruct AI.DiffFlightInfo
// 0x0038 (0x0050 - 0x0018)
struct FDiffFlightInfo : public FDiffStateInfoBase
{
	struct FDiffStateInfoVector                        start_loc;                                                // 0x0018(0x000C)
	struct FDiffStateInfoVector                        end_loc;                                                  // 0x0024(0x000C)
	struct FDiffStateInfoVector                        can_jump_loc;                                             // 0x0030(0x000C)
	struct FDiffStateInfoVector                        force_jump_loc;                                           // 0x003C(0x000C)
	struct FDiffStateInfoInt32                         player_num;                                               // 0x0048(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffPlaneInfoState
// 0x0068 (0x0080 - 0x0018)
struct FDiffPlaneInfoState : public FDiffStateInfoBase
{
	uint32_t                                           ID;                                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDiffStateInfoUInt32                        Type;                                                     // 0x001C(0x0004)
	struct FDiffStateInfoVector                        Position;                                                 // 0x0020(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FDiffFlightInfo                             flight_info;                                              // 0x0030(0x0050)
};

// ScriptStruct AI.DiffPlaneInfo
// 0x0020 (0x0038 - 0x0018)
struct FDiffPlaneInfo : public FDiffStateInfoBase
{
	TArray<struct FDiffPlaneInfoState>                 States;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffGlobalGameBRBaseState
// 0x0130 (0x0148 - 0x0018)
struct FDiffGlobalGameBRBaseState : public FAIStateInfoBase
{
	struct FDiffAirDropBoxStates                       air_drop_box_states;                                      // 0x0018(0x0038)
	struct FDiffSpecialZone                            special_zones;                                            // 0x0050(0x0038)
	struct FDiffRedZoneState                           red_zone;                                                 // 0x0088(0x0030)
	struct FDiffSafetyAreaState                        safety_area;                                              // 0x00B8(0x0048)
	struct FDiffPlaneInfo                              airplane_list;                                            // 0x0100(0x0038)
	TArray<uint32_t>                                   silent_list;                                              // 0x0138(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAllPlayerBRBaseInfo
// 0x04C0 (0x04D8 - 0x0018)
struct FDiffAllPlayerBRBaseInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FDiffAIBRBaseStateInfo>      diff_states;                                              // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIBRBaseStateInfo>          State;                                                    // 0x0068(0x0050) (ZeroConstructor)
	struct FGlobalGameBRBaseState                      global_state;                                             // 0x00B8(0x00F8)
	struct FDiffGlobalGameBRBaseState                  diff_global_state;                                        // 0x01B0(0x0148)
	TMap<uint32_t, struct FAIBRBaseStateInfo>          global_player_states;                                     // 0x02F8(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIBRBaseStateInfo>      global_player_diff_states;                                // 0x0348(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIBRBaseStateInfo>          near_player_states;                                       // 0x0398(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIBRBaseStateInfo>      near_player_diff_states;                                  // 0x03E8(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIBRBaseStateInfo>          global_btai_states;                                       // 0x0438(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIBRBaseStateInfo>      global_btai_diff_states;                                  // 0x0488(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.DiffAirDropBoxStatesGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffAirDropBoxStatesGeneral : public FDiffStateInfoBase
{
	TArray<struct FAirDropBoxState>                    Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffSpecialZoneGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffSpecialZoneGeneral : public FDiffStateInfoBase
{
	TArray<struct FSpecialZoneState>                   Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffPlaneInfoGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffPlaneInfoGeneral : public FDiffStateInfoBase
{
	TArray<struct FPlaneInfo>                          Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffGlobalGameBRBaseStateGeneral
// 0x0150 (0x0168 - 0x0018)
struct FDiffGlobalGameBRBaseStateGeneral : public FAIStateInfoBase
{
	struct FDiffAirDropBoxStatesGeneral                air_drop_box_states;                                      // 0x0018(0x0038)
	struct FDiffSpecialZoneGeneral                     special_zones;                                            // 0x0050(0x0038)
	struct FRedZoneState                               red_zone;                                                 // 0x0088(0x0030)
	struct FSafetyAreaState                            safety_area;                                              // 0x00B8(0x0048)
	struct FDiffPlaneInfoGeneral                       airplane_list;                                            // 0x0100(0x0038)
	struct FGlobalControlInfo                          control_info;                                             // 0x0138(0x0020)
	TArray<uint32_t>                                   silent_list;                                              // 0x0158(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.WeaponType2Range
// 0x000C
struct FWeaponType2Range
{
	TEnumAsByte<EWeaponTypeNew>                        WeaponType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Range;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NightRange;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.WeaponTypeToRange
// 0x0008
struct FWeaponTypeToRange
{
	TEnumAsByte<EWeaponTypeNew>                        WeaponType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Range;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.WeatherToRange
// 0x0010
struct FWeatherToRange
{
	TArray<struct FWeaponTypeToRange>                  Ranges;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AI.ShapeRangeParam
// 0x000C
struct FShapeRangeParam
{
	float                                              CircleR;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SectorR;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SectorDegree;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.WeaponTypeToRangeWithPawnState
// 0x0058
struct FWeaponTypeToRangeWithPawnState
{
	TEnumAsByte<EWeaponTypeNew>                        WeaponType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TMap<EPawnState, struct FShapeRangeParam>          StateRange;                                               // 0x0008(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct AI.SightFanInfo
// 0x0008
struct FSightFanInfo
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.InTroubleTeleportConfig
// 0x0010
struct FInTroubleTeleportConfig
{
	float                                              SrcCheckRadius;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DstCheckRadius;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           TryFindDstLocNum;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTeleportToLand;                                       // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct AI.AIDistantJudgeNoftify
// 0x0030
struct FAIDistantJudgeNoftify
{
	float                                              RightValue;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SetBBValue;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      NotifyBlackBoardKey;                                      // 0x0008(0x0028) (Edit)
};

// ScriptStruct AI.BPAISenseGrenadeDistanceConfig
// 0x0008
struct FBPAISenseGrenadeDistanceConfig
{
	EAISenseGrenadeType                                GrenadeType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              GrenadeSenseDistance;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AISenseGrenadeClassConfig
// 0x0010
struct FAISenseGrenadeClassConfig
{
	TArray<class UClass*>                              IncludeClassArray;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AI.AISenseGrenadeBBKeyInfo
// 0x0030
struct FAISenseGrenadeBBKeyInfo
{
	EAISenseGrenadeType                                GrenadeType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BBKeyGrenadeActor;                                        // 0x0008(0x0028) (Edit)
};

// ScriptStruct AI.TaskAddItem
// 0x0008
struct FTaskAddItem
{
	int                                                ItemId;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemCount;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DifficultyTimeConfig
// 0x0008
struct FDifficultyTimeConfig
{
	float                                              WaitTime;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomDeviation;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.GeneralRandLocationRetryRule
// 0x000C
struct FGeneralRandLocationRetryRule
{
	float                                              AngleRangeMin;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleRangeMax;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScanStep;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.MobRandLocationRetryRule
// 0x000C
struct FMobRandLocationRetryRule
{
	float                                              AngleRangeMin;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleRangeMax;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RetryTimes;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.LocationRetryRule
// 0x000C
struct FLocationRetryRule
{
	float                                              AngleRangeMin;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleRangeMax;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScanStep;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AITaskNodeThrowGrenadeTargetLocRandomableConfig
// 0x0008
struct FAITaskNodeThrowGrenadeTargetLocRandomableConfig
{
	float                                              RandomRange;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RandomTimes;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.FindBuildingRatingConfig
// 0x0008
struct FFindBuildingRatingConfig
{
	int                                                Rating;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SearchRadius;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.CustomDamageEventRow
// 0x00E0 (0x00E8 - 0x0008)
struct FCustomDamageEventRow : public FTableRowBase
{
	bool                                               bProcessedLocally;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FGuid                                       EventID;                                                  // 0x000C(0x0010) (Edit, EditConst, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bClientOnly;                                              // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicate;                                               // 0x001E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyReplicateWhenRelevant;                               // 0x001F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EventTriggerType;                                         // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              TriggerCooldown;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HealthPercentageThreshold;                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerWhenDead;                                         // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EventReactionType;                                        // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	unsigned char                                      UnknownData03[0x28];                                      // 0x002E(0x0028) UNKNOWN PROPERTY: SoftClassProperty AI.CustomDamageEventRow.ActorClassToSpawn
	bool                                               bTriggersGlobalCooldown;                                  // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLockedByGlobalCooldown;                                  // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData05[0x28];                                      // 0x005A(0x0028) UNKNOWN PROPERTY: SoftClassProperty AI.CustomDamageEventRow.OnCooldownActorClassToSpawn
	bool                                               bDestroySpawnedParticlesWithOwner;                        // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FName                                       AttachComponentTag;                                       // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SpawnSocketName;                                          // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CustomSpawnTransformTag;                                  // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnAtRandomPointInBoundingBox;                         // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomSpawnRotation;                                  // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MinToSpawn;                                               // 0x00AA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxToSpawn;                                               // 0x00AB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FName                                       ActorSpawnTag;                                            // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       MeshComponentTag;                                         // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MeshInstanceIndex;                                        // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PhysicsAssetProfileName;                                  // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CollisionPrimitiveTag;                                    // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
};

// ScriptStruct AI.TriggeredCustomDamageEvent
// 0x00F0
struct FTriggeredCustomDamageEvent
{
	struct FCustomDamageEventRow                       Event;                                                    // 0x0000(0x00E8)
	float                                              TimeTriggered;                                            // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIDynamicItemStateInfo
// 0x0020 (0x0040 - 0x0020)
struct FAIDynamicItemStateInfo : public FUniqueStateInfo
{
	TArray<struct FDynamicItem>                        dynamic_items;                                            // 0x0020(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   dynamic_items_index;                                      // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIDynamicItemStateInfoGeneral
// 0x0048 (0x0068 - 0x0020)
struct FDiffAIDynamicItemStateInfoGeneral : public FUniqueStateInfo
{
	struct FDiffDynamicItemStatesGeneral               dynamic_items;                                            // 0x0020(0x0038)
	TArray<uint64_t>                                   dynamic_items_index;                                      // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAllPlayerDynamicItemInfoGeneral
// 0x00F0 (0x0108 - 0x0018)
struct FDiffAllPlayerDynamicItemInfoGeneral : public FAIStateInfoBase
{
	TMap<uint32_t, struct FAIDynamicItemStateInfo>     AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIDynamicItemStateInfoGeneral> AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIDynamicItemStateInfo>     DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIDynamicItemStateInfo
// 0x0038 (0x0050 - 0x0018)
struct FDiffAIDynamicItemStateInfo : public FAIStateInfoBase
{
	struct FDiffDynamicItemStates                      dynamic_item_states;                                      // 0x0018(0x0038)
};

// ScriptStruct AI.GlobalNearbyDynamicItemInfo
// 0x0010 (0x0028 - 0x0018)
struct FGlobalNearbyDynamicItemInfo : public FAIStateInfoBase
{
	TArray<struct FDynamicItem>                        dynamic_items;                                            // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.GlobalDynamicItemState
// 0x0028 (0x0040 - 0x0018)
struct FGlobalDynamicItemState : public FAIStateInfoBase
{
	struct FGlobalNearbyDynamicItemInfo                global_nearby_info;                                       // 0x0018(0x0028)
};

// ScriptStruct AI.DiffGlobalNearbyDynamicItemInfo
// 0x0038 (0x0050 - 0x0018)
struct FDiffGlobalNearbyDynamicItemInfo : public FAIStateInfoBase
{
	struct FDiffDynamicItemStates                      dynamic_item_states;                                      // 0x0018(0x0038)
};

// ScriptStruct AI.DiffGlobalDynamicItemState
// 0x0050 (0x0068 - 0x0018)
struct FDiffGlobalDynamicItemState : public FAIStateInfoBase
{
	struct FDiffGlobalNearbyDynamicItemInfo            global_nearby_info;                                       // 0x0018(0x0050)
};

// ScriptStruct AI.DiffAllPlayerDynamicItemInfo
// 0x0148 (0x0160 - 0x0018)
struct FDiffAllPlayerDynamicItemInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FDiffAIDynamicItemStateInfo> diff_states;                                              // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIDynamicItemStateInfo>     State;                                                    // 0x0068(0x0050) (ZeroConstructor)
	struct FGlobalDynamicItemState                     global_state;                                             // 0x00B8(0x0040)
	struct FDiffGlobalDynamicItemState                 diff_global_state;                                        // 0x00F8(0x0068)
};

// ScriptStruct AI.DiffGlobalNearbyDynamicItemInfoGeneral
// 0x0038 (0x0050 - 0x0018)
struct FDiffGlobalNearbyDynamicItemInfoGeneral : public FAIStateInfoBase
{
	struct FDiffDynamicItemStatesGeneral               dynamic_items;                                            // 0x0018(0x0038)
};

// ScriptStruct AI.DiffGlobalDynamicItemStateGeneral
// 0x0050 (0x0068 - 0x0018)
struct FDiffGlobalDynamicItemStateGeneral : public FAIStateInfoBase
{
	struct FDiffGlobalNearbyDynamicItemInfoGeneral     global_nearby_info;                                       // 0x0018(0x0050)
};

// ScriptStruct AI.AILandScapeDestroyInfo
// 0x0010 (0x0030 - 0x0020)
struct FAILandScapeDestroyInfo : public FUniqueStateInfo
{
	TArray<struct FLandScapeDestroyState>              landscape_destroy_info;                                   // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAILandScapeDestroyInfo
// 0x0038 (0x0050 - 0x0018)
struct FDiffAILandScapeDestroyInfo : public FAIStateInfoBase
{
	struct FDiffLandScapeDestroyStateInfo              landscape_destroy_info;                                   // 0x0018(0x0038)
};

// ScriptStruct AI.DiffAllPlayerLandScapeDestroyInfo
// 0x00A0 (0x00B8 - 0x0018)
struct FDiffAllPlayerLandScapeDestroyInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FDiffAILandScapeDestroyInfo> diff_states;                                              // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAILandScapeDestroyInfo>     State;                                                    // 0x0068(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.LandScapeChange
// 0x0028 (0x0048 - 0x0020)
struct FLandScapeChange : public FUniqueStateInfo
{
	int                                                component_index_x;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                component_index_y;                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                component_x1;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                component_y1;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                component_x2;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                component_y2;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<uint16_t>                                   heights_data;                                             // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.LandScapeChangeState
// 0x0018 (0x0038 - 0x0020)
struct FLandScapeChangeState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FLandScapeChange>                    changes;                                                  // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.GlobalLandScapeChangeInfo
// 0x0010 (0x0028 - 0x0018)
struct FGlobalLandScapeChangeInfo : public FAIStateInfoBase
{
	TArray<struct FLandScapeChangeState>               landscape_change_info;                                    // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffLandScapeChangeStateGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffLandScapeChangeStateGeneral : public FDiffStateInfoBase
{
	TArray<struct FLandScapeChangeState>               Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffGlobalLandScapeChangeInfoGeneral
// 0x0038 (0x0050 - 0x0018)
struct FDiffGlobalLandScapeChangeInfoGeneral : public FAIStateInfoBase
{
	struct FDiffLandScapeChangeStateGeneral            landscape_change_info;                                    // 0x0018(0x0038)
};

// ScriptStruct AI.AIDoorStateInfo
// 0x0020 (0x0040 - 0x0020)
struct FAIDoorStateInfo : public FUniqueStateInfo
{
	TArray<struct FDoorState>                          nearby_door;                                              // 0x0020(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_door_index;                                        // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIDoorStateInfoGeneral
// 0x0048 (0x0068 - 0x0020)
struct FDiffAIDoorStateInfoGeneral : public FUniqueStateInfo
{
	struct FDiffDoorStateGeneral                       nearby_door;                                              // 0x0020(0x0038)
	TArray<uint64_t>                                   nearby_door_index;                                        // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAllPlayerDoorInfoGeneral
// 0x00F0 (0x0108 - 0x0018)
struct FDiffAllPlayerDoorInfoGeneral : public FAIStateInfoBase
{
	TMap<uint32_t, struct FAIDoorStateInfo>            AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIDoorStateInfoGeneral> AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIDoorStateInfo>            DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.GlobalNearbyDoorInfo
// 0x0010 (0x0028 - 0x0018)
struct FGlobalNearbyDoorInfo : public FAIStateInfoBase
{
	TArray<struct FDoorState>                          nearby_door;                                              // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.GlobalDoorState
// 0x0028 (0x0040 - 0x0018)
struct FGlobalDoorState : public FAIStateInfoBase
{
	struct FGlobalNearbyDoorInfo                       global_nearby_info;                                       // 0x0018(0x0028)
};

// ScriptStruct AI.DiffGlobalNearbyDoorInfo
// 0x0038 (0x0050 - 0x0018)
struct FDiffGlobalNearbyDoorInfo : public FAIStateInfoBase
{
	struct FDiffDoorStateGeneral                       nearby_door;                                              // 0x0018(0x0038)
};

// ScriptStruct AI.DiffGlobalDoorState
// 0x0050 (0x0068 - 0x0018)
struct FDiffGlobalDoorState : public FAIStateInfoBase
{
	struct FDiffGlobalNearbyDoorInfo                   global_nearby_info;                                       // 0x0018(0x0050)
};

// ScriptStruct AI.DiffAllPlayerDoorInfo
// 0x0148 (0x0160 - 0x0018)
struct FDiffAllPlayerDoorInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FAIDoorStateInfo>            diff_states;                                              // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIDoorStateInfo>            State;                                                    // 0x0068(0x0050) (ZeroConstructor)
	struct FGlobalDoorState                            global_state;                                             // 0x00B8(0x0040)
	struct FDiffGlobalDoorState                        diff_global_state;                                        // 0x00F8(0x0068)
};

// ScriptStruct AI.DiffGlobalNearbyDoorStateGeneral
// 0x0038 (0x0050 - 0x0018)
struct FDiffGlobalNearbyDoorStateGeneral : public FAIStateInfoBase
{
	struct FDiffDoorStateGeneral                       nearby_door;                                              // 0x0018(0x0038)
};

// ScriptStruct AI.DiffGlobalDoorStateGeneral
// 0x0050 (0x0068 - 0x0018)
struct FDiffGlobalDoorStateGeneral : public FAIStateInfoBase
{
	struct FDiffGlobalNearbyDoorStateGeneral           global_nearby_info;                                       // 0x0018(0x0050)
};

// ScriptStruct AI.AINearbyMonsterStateInfo
// 0x0020 (0x0040 - 0x0020)
struct FAINearbyMonsterStateInfo : public FUniqueStateInfo
{
	TArray<struct FMonsterState>                       monster_states;                                           // 0x0020(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   monster_states_index;                                     // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAINearbyMonsterStateInfoGeneral
// 0x0048 (0x0068 - 0x0020)
struct FDiffAINearbyMonsterStateInfoGeneral : public FUniqueStateInfo
{
	struct FDiffMonsterStatesGeneral                   monster_states;                                           // 0x0020(0x0038)
	TArray<uint64_t>                                   monster_states_index;                                     // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAllPlayerNearbyMonsterGeneral
// 0x00F0 (0x0108 - 0x0018)
struct FDiffAllPlayerNearbyMonsterGeneral : public FAIStateInfoBase
{
	TMap<uint32_t, struct FAINearbyMonsterStateInfo>   AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAINearbyMonsterStateInfoGeneral> AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAINearbyMonsterStateInfo>   DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.DiffAINearbyMonsterStateInfo
// 0x0038 (0x0050 - 0x0018)
struct FDiffAINearbyMonsterStateInfo : public FAIStateInfoBase
{
	struct FDiffMonsterStates                          monster_states;                                           // 0x0018(0x0038)
};

// ScriptStruct AI.GlobalNearbyMonsterInfo
// 0x0010 (0x0028 - 0x0018)
struct FGlobalNearbyMonsterInfo : public FAIStateInfoBase
{
	TArray<struct FMonsterState>                       monster_states;                                           // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.GlobalMonsterState
// 0x0028 (0x0040 - 0x0018)
struct FGlobalMonsterState : public FAIStateInfoBase
{
	struct FGlobalNearbyMonsterInfo                    global_nearby_info;                                       // 0x0018(0x0028)
};

// ScriptStruct AI.DiffGlobalNearbyMonsterInfo
// 0x0038 (0x0050 - 0x0018)
struct FDiffGlobalNearbyMonsterInfo : public FAIStateInfoBase
{
	struct FDiffMonsterStates                          monster_states;                                           // 0x0018(0x0038)
};

// ScriptStruct AI.DiffGlobalMonsterState
// 0x0050 (0x0068 - 0x0018)
struct FDiffGlobalMonsterState : public FAIStateInfoBase
{
	struct FDiffGlobalNearbyMonsterInfo                global_nearby_info;                                       // 0x0018(0x0050)
};

// ScriptStruct AI.DiffAllPlayerNearbyMonsterInfo
// 0x0148 (0x0160 - 0x0018)
struct FDiffAllPlayerNearbyMonsterInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FDiffAINearbyMonsterStateInfo> diff_states;                                              // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAINearbyMonsterStateInfo>   State;                                                    // 0x0068(0x0050) (ZeroConstructor)
	struct FGlobalMonsterState                         global_state;                                             // 0x00B8(0x0040)
	struct FDiffGlobalMonsterState                     diff_global_state;                                        // 0x00F8(0x0068)
};

// ScriptStruct AI.DiffGlobalNearbyMonsterInfoGeneral
// 0x0038 (0x0050 - 0x0018)
struct FDiffGlobalNearbyMonsterInfoGeneral : public FAIStateInfoBase
{
	struct FDiffMonsterStatesGeneral                   monster_states;                                           // 0x0018(0x0038)
};

// ScriptStruct AI.DiffGlobalMonsterStateGeneral
// 0x0050 (0x0068 - 0x0018)
struct FDiffGlobalMonsterStateGeneral : public FAIStateInfoBase
{
	struct FDiffGlobalNearbyMonsterInfoGeneral         global_nearby_info;                                       // 0x0018(0x0050)
};

// ScriptStruct AI.AINearbyPlayerStateInfo
// 0x0010 (0x0030 - 0x0020)
struct FAINearbyPlayerStateInfo : public FUniqueStateInfo
{
	TArray<struct FAINearbyPlayerBaseMod>              nearby_player;                                            // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAINearbyPlayerStateInfoGeneral
// 0x0078 (0x0098 - 0x0020)
struct FDiffAINearbyPlayerStateInfoGeneral : public FUniqueStateInfo
{
	struct FDiffAINearbyPlayersBaseModGeneral          nearby_player;                                            // 0x0020(0x0078)
};

// ScriptStruct AI.DiffAllPlayerNearbyPlayerInfoGeneral
// 0x00F0 (0x0108 - 0x0018)
struct FDiffAllPlayerNearbyPlayerInfoGeneral : public FAIStateInfoBase
{
	TMap<uint32_t, struct FAINearbyPlayerStateInfo>    AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAINearbyPlayerStateInfoGeneral> AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAINearbyPlayerStateInfo>    DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.DiffAINearbyPlayerStateInfo
// 0x0038 (0x0058 - 0x0020)
struct FDiffAINearbyPlayerStateInfo : public FUniqueStateInfo
{
	struct FDiffAINearbyPlayersBaseMod                 nearby_player;                                            // 0x0020(0x0038)
};

// ScriptStruct AI.DiffAllPlayerNearbyPlayerInfo
// 0x00A0 (0x00B8 - 0x0018)
struct FDiffAllPlayerNearbyPlayerInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FDiffAINearbyPlayerStateInfo> diff_states;                                              // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAINearbyPlayerStateInfo>    State;                                                    // 0x0068(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.MLAINearbyStateInfoBaseMod
// 0x0068 (0x0088 - 0x0020)
struct FMLAINearbyStateInfoBaseMod : public FUniqueStateInfo
{
	TArray<struct FItemStateData>                      nearby_item;                                              // 0x0020(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_item_index;                                        // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x0068(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_thrown_index;                                      // 0x0078(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffMLAINearbyStateInfoBaseModGeneral
// 0x0090 (0x00B0 - 0x0020)
struct FDiffMLAINearbyStateInfoBaseModGeneral : public FUniqueStateInfo
{
	struct FDiffItemStateDatasGeneral                  nearby_item;                                              // 0x0020(0x0038)
	TArray<uint64_t>                                   nearby_item_index;                                        // 0x0058(0x0010) (ZeroConstructor)
	struct FDiffAINearbyThrownGeneral                  nearby_thrown;                                            // 0x0068(0x0038)
	TArray<uint64_t>                                   nearby_thrown_index;                                      // 0x00A0(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAllMLAINearbyInfoBaseModGeneral
// 0x00F0 (0x0108 - 0x0018)
struct FDiffAllMLAINearbyInfoBaseModGeneral : public FAIStateInfoBase
{
	TMap<uint32_t, struct FMLAINearbyStateInfoBaseMod> AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffMLAINearbyStateInfoBaseModGeneral> AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FMLAINearbyStateInfoBaseMod> DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.DiffMLAINearbyStateInfoBaseMod
// 0x0078 (0x0098 - 0x0020)
struct FDiffMLAINearbyStateInfoBaseMod : public FUniqueStateInfo
{
	struct FDiffItemStateDatas                         nearby_item;                                              // 0x0020(0x0038)
	TArray<uint64_t>                                   nearby_item_index;                                        // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x0068(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_thrown_index;                                      // 0x0078(0x0010) (ZeroConstructor)
	TArray<struct FItemStateData>                      nearby_box_item;                                          // 0x0088(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.GlobalNearbyInfoBaseMod
// 0x0020 (0x0038 - 0x0018)
struct FGlobalNearbyInfoBaseMod : public FAIStateInfoBase
{
	TArray<struct FItemStateData>                      nearby_item;                                              // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.GlobalNearbyStateBaseMod
// 0x0038 (0x0050 - 0x0018)
struct FGlobalNearbyStateBaseMod : public FAIStateInfoBase
{
	struct FGlobalNearbyInfoBaseMod                    global_nearby_info;                                       // 0x0018(0x0038)
};

// ScriptStruct AI.DiffGlobalNearbyInfoBaseMod
// 0x0048 (0x0060 - 0x0018)
struct FDiffGlobalNearbyInfoBaseMod : public FAIStateInfoBase
{
	struct FDiffItemStateDatas                         nearby_item;                                              // 0x0018(0x0038)
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffGlobalNearbyStateBaseMod
// 0x0060 (0x0078 - 0x0018)
struct FDiffGlobalNearbyStateBaseMod : public FAIStateInfoBase
{
	struct FDiffGlobalNearbyInfoBaseMod                global_nearby_info;                                       // 0x0018(0x0060)
};

// ScriptStruct AI.DiffAllMLAINearbyInfoBaseMod
// 0x0168 (0x0180 - 0x0018)
struct FDiffAllMLAINearbyInfoBaseMod : public FAIStateInfoBase
{
	TMap<uint32_t, struct FDiffMLAINearbyStateInfoBaseMod> diff_states;                                              // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FMLAINearbyStateInfoBaseMod> State;                                                    // 0x0068(0x0050) (ZeroConstructor)
	struct FGlobalNearbyStateBaseMod                   global_state;                                             // 0x00B8(0x0050)
	struct FDiffGlobalNearbyStateBaseMod               diff_global_state;                                        // 0x0108(0x0078)
};

// ScriptStruct AI.DiffGlobalNearbyInfoBaseModGeneral
// 0x0070 (0x0088 - 0x0018)
struct FDiffGlobalNearbyInfoBaseModGeneral : public FAIStateInfoBase
{
	struct FDiffItemStateDatasGeneral                  nearby_item;                                              // 0x0018(0x0038)
	struct FDiffAINearbyThrownGeneral                  nearby_thrown;                                            // 0x0050(0x0038)
};

// ScriptStruct AI.DiffGlobalNearbyStateBaseModGeneral
// 0x0088 (0x00A0 - 0x0018)
struct FDiffGlobalNearbyStateBaseModGeneral : public FAIStateInfoBase
{
	struct FDiffGlobalNearbyInfoBaseModGeneral         global_nearby_info;                                       // 0x0018(0x0088)
};

// ScriptStruct AI.DiffListIDMap
// 0x0050
struct FDiffListIDMap
{
	TMap<uint64_t, uint32_t>                           ListIDMap;                                                // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.PropertyNameListIDMap
// 0x0050
struct FPropertyNameListIDMap
{
	TMap<struct FString, struct FDiffListIDMap>        PropertyNameListIDMap;                                    // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.CollectorInitInfo
// 0x0020
struct FCollectorInitInfo
{
	struct FString                                     CollectorName;                                            // 0x0000(0x0010) (ZeroConstructor)
	TArray<EStatePlayerType>                           CollectPlayerType;                                        // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.VehicleDamageInfoContainer
// 0x0010
struct FVehicleDamageInfoContainer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AI.BulletHole
// 0x0018
struct FBulletHole
{
	struct FVector                                     ImpactPoint;                                              // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     SourcePoint;                                              // 0x000C(0x000C) (IsPlainOldData)
};

// ScriptStruct AI.BulletHoleRecordInfo
// 0x0010 (0x0028 - 0x0018)
struct FBulletHoleRecordInfo : public FBulletHole
{
	class APawn*                                       ShootPawn;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ShooterId;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct AI.GlobalNearbyInfoBRBase
// 0x0040 (0x0058 - 0x0018)
struct FGlobalNearbyInfoBRBase : public FAIStateInfoBase
{
	TArray<struct FDoorState>                          nearby_door;                                              // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FVehicleState>                       nearby_vehicles;                                          // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FDynamicItem>                        dynamic_items;                                            // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FMonsterState>                       monster_states;                                           // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.GlobalGameStateBRBase
// 0x0158 (0x0170 - 0x0018)
struct FGlobalGameStateBRBase : public FAIStateInfoBase
{
	TArray<struct FAirDropBoxState>                    air_drop_box_states;                                      // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FSpecialZoneState>                   special_zones;                                            // 0x0028(0x0010) (ZeroConstructor)
	struct FRedZoneState                               red_zone;                                                 // 0x0038(0x0030)
	struct FSafetyAreaState                            safety_area;                                              // 0x0068(0x0048)
	TArray<struct FPlaneInfo>                          airplane_list;                                            // 0x00B0(0x0010) (ZeroConstructor)
	struct FGlobalNearbyInfoBRBase                     global_nearby_info;                                       // 0x00C0(0x0058)
	struct FGlobalControlInfo                          control_info;                                             // 0x0118(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET
	TArray<struct FAIStateXYZ>                         vehicle_spot_position;                                    // 0x0140(0x0010) (ZeroConstructor)
	TArray<struct FLandScapeChangeState>               landscape_change_info;                                    // 0x0150(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   silent_list;                                              // 0x0160(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.GlobalGameStateBaseMod
// 0x00A8 (0x00C0 - 0x0018)
struct FGlobalGameStateBaseMod : public FAIStateInfoBase
{
	struct FAIGameStateBaseMod                         Game;                                                     // 0x0018(0x0060)
	struct FGlobalNearbyInfoBaseMod                    global_nearby_info;                                       // 0x0078(0x0038)
	TArray<struct FBattleVoiceRoomInfo>                voice_room_list;                                          // 0x00B0(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffGlobalGameStateBaseMod
// 0x0060 (0x0078 - 0x0018)
struct FDiffGlobalGameStateBaseMod : public FAIStateInfoBase
{
	struct FDiffAIGameStateBaseMod                     Game;                                                     // 0x0018(0x0060)
};

// ScriptStruct AI.DiffGlobalGameStateBaseModGeneral
// 0x0120 (0x0138 - 0x0018)
struct FDiffGlobalGameStateBaseModGeneral : public FAIStateInfoBase
{
	struct FDiffAIGameStateBaseModGeneral              Game;                                                     // 0x0018(0x0060)
	struct FDiffGlobalNearbyInfoBaseModGeneral         global_nearby_info;                                       // 0x0078(0x0088)
	struct FDiffBattleVoiceRoomInfoListGeneral         voice_room_list;                                          // 0x0100(0x0038)
};

// ScriptStruct AI.DiffAllPlayerInfoBaseModGeneral
// 0x0088 (0x00A0 - 0x0018)
struct FDiffAllPlayerInfoBaseModGeneral : public FAIStateInfoBase
{
	uint32_t                                           Key;                                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FAIStateInfoBaseMod>                 AllAIStateInfo;                                           // 0x0020(0x0010) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIStateInfoBaseModGeneral> AllDiffAIStateInfo;                                       // 0x0030(0x0050) (ZeroConstructor)
	TArray<struct FAIStateInfoBaseMod>                 DebugAllAIStateInfo;                                      // 0x0080(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0090(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffBTAIAndPlayerStateInfoBaseMod
// 0x0250 (0x0268 - 0x0018)
struct FDiffBTAIAndPlayerStateInfoBaseMod : public FDiffStateInfoBase
{
	struct FDiffAIPlayerStateBaseMod                   State;                                                    // 0x0018(0x0108)
	struct FDiffCameraState                            Camera;                                                   // 0x0120(0x0040)
	struct FDiffAIPlayerWeapon                         Weapon;                                                   // 0x0160(0x0038)
	struct FDiffPlayerBackpack                         BackPack;                                                 // 0x0198(0x0038)
	struct FDiffAIPlayerEquipment                      equipment;                                                // 0x01D0(0x0038)
	uint32_t                                           Key;                                                      // 0x0208(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x020C(0x0004) MISSED OFFSET
	struct FAIPlayerInteractInfo                       player_interact_info;                                     // 0x0210(0x0058)
};

// ScriptStruct AI.DiffAllPlayerInfoBaseMod
// 0x01D8 (0x01F0 - 0x0018)
struct FDiffAllPlayerInfoBaseMod : public FAIStateInfoBase
{
	TArray<struct FDiffAIStateInfoBaseMod>             diff_states;                                              // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FAIStateInfoBaseMod>                 State;                                                    // 0x0028(0x0010) (ZeroConstructor)
	struct FGlobalGameStateBaseMod                     global_state;                                             // 0x0038(0x00C0)
	struct FDiffGlobalGameStateBaseMod                 diff_global_state;                                        // 0x00F8(0x0078)
	TArray<struct FAIStateInfoBaseMod>                 global_player_states;                                     // 0x0170(0x0010) (ZeroConstructor)
	TArray<struct FDiffBTAIAndPlayerStateInfoBaseMod>  global_player_diff_states;                                // 0x0180(0x0010) (ZeroConstructor)
	TArray<struct FAIStateInfoBaseMod>                 in_pool_states;                                           // 0x0190(0x0010) (ZeroConstructor)
	TArray<struct FDiffAIPoolStateInfo>                in_pool_diff_states;                                      // 0x01A0(0x0010) (ZeroConstructor)
	TArray<struct FAIStateInfoBaseMod>                 near_player_states;                                       // 0x01B0(0x0010) (ZeroConstructor)
	TArray<struct FDiffBTAIAndPlayerStateInfoBaseMod>  near_player_diff_states;                                  // 0x01C0(0x0010) (ZeroConstructor)
	TArray<struct FAIStateInfoBaseMod>                 global_btai_states;                                       // 0x01D0(0x0010) (ZeroConstructor)
	TArray<struct FDiffBTAIAndPlayerStateInfoBaseMod>  global_btai_diff_states;                                  // 0x01E0(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffGlobalGameStateBRBase
// 0x0130 (0x0148 - 0x0018)
struct FDiffGlobalGameStateBRBase : public FAIStateInfoBase
{
	struct FDiffAirDropBoxStates                       air_drop_box_states;                                      // 0x0018(0x0038)
	struct FDiffSpecialZone                            special_zones;                                            // 0x0050(0x0038)
	struct FDiffRedZoneState                           red_zone;                                                 // 0x0088(0x0030)
	struct FDiffSafetyAreaState                        safety_area;                                              // 0x00B8(0x0048)
	struct FDiffPlaneInfo                              airplane_list;                                            // 0x0100(0x0038)
	TArray<uint32_t>                                   silent_list;                                              // 0x0138(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffGlobalNearbyInfoBRBaseGeneral
// 0x00E0 (0x00F8 - 0x0018)
struct FDiffGlobalNearbyInfoBRBaseGeneral : public FAIStateInfoBase
{
	struct FDiffDoorStateGeneral                       nearby_door;                                              // 0x0018(0x0038)
	struct FDiffVehicleStatesGeneral                   nearby_vehicles;                                          // 0x0050(0x0038)
	struct FDiffDynamicItemStatesGeneral               dynamic_items;                                            // 0x0088(0x0038)
	struct FDiffMonsterStatesGeneral                   monster_states;                                           // 0x00C0(0x0038)
};

// ScriptStruct AI.DiffGlobalGameStateBRBaseGeneral
// 0x0290 (0x02A8 - 0x0018)
struct FDiffGlobalGameStateBRBaseGeneral : public FAIStateInfoBase
{
	struct FDiffAirDropBoxStatesGeneral                air_drop_box_states;                                      // 0x0018(0x0038)
	struct FDiffSpecialZoneGeneral                     special_zones;                                            // 0x0050(0x0038)
	struct FRedZoneState                               red_zone;                                                 // 0x0088(0x0030)
	struct FSafetyAreaState                            safety_area;                                              // 0x00B8(0x0048)
	struct FDiffPlaneInfoGeneral                       airplane_list;                                            // 0x0100(0x0038)
	struct FDiffGlobalNearbyInfoBRBaseGeneral          global_nearby_info;                                       // 0x0138(0x00F8)
	struct FGlobalControlInfo                          control_info;                                             // 0x0230(0x0020)
	TArray<struct FAIStateXYZ>                         vehicle_spot_position;                                    // 0x0250(0x0010) (ZeroConstructor)
	struct FDiffLandScapeChangeStateGeneral            landscape_change_info;                                    // 0x0260(0x0038)
	TArray<uint32_t>                                   silent_list;                                              // 0x0298(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAllPlayerInfoBRBaseGeneral
// 0x0080 (0x0098 - 0x0018)
struct FDiffAllPlayerInfoBRBaseGeneral : public FAIStateInfoBase
{
	TArray<struct FAIStateInfoBRBase>                  AllAIStateInfo;                                           // 0x0018(0x0010) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIStateInfoBRBaseGeneral> AllDiffAIStateInfo;                                       // 0x0028(0x0050) (ZeroConstructor)
	TArray<struct FAIStateInfoBRBase>                  DebugAllAIStateInfo;                                      // 0x0078(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0088(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffBTAIAndPlayerStateInfoBRBase
// 0x0100 (0x0118 - 0x0018)
struct FDiffBTAIAndPlayerStateInfoBRBase : public FDiffStateInfoBase
{
	struct FDiffAIPlayerStateBRBase                    State;                                                    // 0x0018(0x0060)
	struct FDiffVehicleState                           vehicle_state;                                            // 0x0078(0x00A0)
};

// ScriptStruct AI.DiffAllPlayerInfoBRBase
// 0x0338 (0x0350 - 0x0018)
struct FDiffAllPlayerInfoBRBase : public FAIStateInfoBase
{
	TArray<struct FDiffAIStateInfoBRBase>              diff_states;                                              // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FAIStateInfoBRBase>                  State;                                                    // 0x0028(0x0010) (ZeroConstructor)
	struct FGlobalGameStateBRBase                      global_state;                                             // 0x0038(0x0170)
	struct FDiffGlobalGameStateBRBase                  diff_global_state;                                        // 0x01A8(0x0148)
	TArray<struct FAIStateInfoBRBase>                  global_player_states;                                     // 0x02F0(0x0010) (ZeroConstructor)
	TArray<struct FDiffBTAIAndPlayerStateInfoBRBase>   global_player_diff_states;                                // 0x0300(0x0010) (ZeroConstructor)
	TArray<struct FAIStateInfoBRBase>                  near_player_states;                                       // 0x0310(0x0010) (ZeroConstructor)
	TArray<struct FDiffBTAIAndPlayerStateInfoBRBase>   near_player_diff_states;                                  // 0x0320(0x0010) (ZeroConstructor)
	TArray<struct FAIStateInfoBRBase>                  global_btai_states;                                       // 0x0330(0x0010) (ZeroConstructor)
	TArray<struct FDiffBTAIAndPlayerStateInfoBRBase>   global_btai_diff_states;                                  // 0x0340(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.GlobalGameStateMPBase
// 0x0028 (0x0040 - 0x0018)
struct FGlobalGameStateMPBase : public FDiffStateInfoBase
{
	struct FAIGameStateMPBase                          Game;                                                     // 0x0018(0x0028)
};

// ScriptStruct AI.DiffGlobalGameStateMPBaseGeneral
// 0x0038 (0x0050 - 0x0018)
struct FDiffGlobalGameStateMPBaseGeneral : public FAIStateInfoBase
{
	struct FDiffAIGameStateMPBaseGeneral               Game;                                                     // 0x0018(0x0038)
};

// ScriptStruct AI.DiffAllPlayerInfoMPBaseGeneral
// 0x0080 (0x0098 - 0x0018)
struct FDiffAllPlayerInfoMPBaseGeneral : public FAIStateInfoBase
{
	TArray<struct FAIStateInfoMPBase>                  AllAIStateInfo;                                           // 0x0018(0x0010) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIStateInfoMPBaseGeneral> AllDiffAIStateInfo;                                       // 0x0028(0x0050) (ZeroConstructor)
	TArray<struct FAIStateInfoMPBase>                  DebugAllAIStateInfo;                                      // 0x0078(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0088(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIMPStateInfo
// 0x0068 (0x0088 - 0x0020)
struct FAIMPStateInfo : public FUniqueStateInfo
{
	struct FAIPlayerStateMPBase                        State;                                                    // 0x0020(0x0038)
	struct FDeathMatchAIPlayerEquipment                deathmatch_backpack;                                      // 0x0058(0x0030)
};

// ScriptStruct AI.AIPlayerMPState
// 0x0020 (0x0038 - 0x0018)
struct FAIPlayerMPState : public FAIStateInfoBase
{
	bool                                               is_invincible;                                            // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               in_shoveling;                                             // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                death_count;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              survive_time;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              kd_ratio;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                continue_kill;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                revenge;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                top_spot_end;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAIMPStateInfoGeneral
// 0x0068 (0x0088 - 0x0020)
struct FDiffAIMPStateInfoGeneral : public FDiffUniqueStateInfo
{
	struct FAIPlayerMPState                            State;                                                    // 0x0020(0x0038)
	struct FDeathMatchAIPlayerEquipment                deathmatch_backpack;                                      // 0x0058(0x0030)
};

// ScriptStruct AI.DiffAllPlayerMPBaseInfoGeneral
// 0x0100 (0x0118 - 0x0018)
struct FDiffAllPlayerMPBaseInfoGeneral : public FAIStateInfoBase
{
	TMap<uint32_t, struct FAIMPStateInfo>              AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIMPStateInfoGeneral>   AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIMPStateInfo>              DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0108(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.GlobalGameMPState
// 0x0028 (0x0040 - 0x0018)
struct FGlobalGameMPState : public FAIStateInfoBase
{
	struct FAIGameStateMPBase                          Game;                                                     // 0x0018(0x0028)
};

// ScriptStruct AI.DiffGlobalGameMPBaseStateGeneral
// 0x0038 (0x0050 - 0x0018)
struct FDiffGlobalGameMPBaseStateGeneral : public FAIStateInfoBase
{
	struct FDiffAIGameStateMPBaseGeneral               Game;                                                     // 0x0018(0x0038)
};

// ScriptStruct AI.AIVehicleStateData
// 0x0080
struct FAIVehicleStateData
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct AI.AIPlayerVehicleStateInfo
// 0x0008 (0x0020 - 0x0018)
struct FAIPlayerVehicleStateInfo : public FAIStateInfoBase
{
	int                                                vehicle_role;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.AIVehicleStateInfo
// 0x0118 (0x0138 - 0x0020)
struct FAIVehicleStateInfo : public FUniqueStateInfo
{
	struct FAIPlayerVehicleStateInfo                   State;                                                    // 0x0020(0x0020)
	struct FVehicleState                               vehicle_state;                                            // 0x0040(0x00D8)
	TArray<struct FVehicleState>                       nearby_vehicles;                                          // 0x0118(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   nearby_vehicles_index;                                    // 0x0128(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIVehicleStateInfoGeneral
// 0x0140 (0x0160 - 0x0020)
struct FDiffAIVehicleStateInfoGeneral : public FUniqueStateInfo
{
	struct FAIPlayerVehicleStateInfo                   State;                                                    // 0x0020(0x0020)
	struct FVehicleState                               vehicle_state;                                            // 0x0040(0x00D8)
	struct FDiffVehicleStatesGeneral                   nearby_vehicles;                                          // 0x0118(0x0038)
	TArray<uint64_t>                                   nearby_vehicles_index;                                    // 0x0150(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAllPlayerVehicleInfoGeneral
// 0x00F0 (0x0108 - 0x0018)
struct FDiffAllPlayerVehicleInfoGeneral : public FAIStateInfoBase
{
	TMap<uint32_t, struct FAIVehicleStateInfo>         AllAIStateInfo;                                           // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIVehicleStateInfoGeneral> AllDiffAIStateInfo;                                       // 0x0068(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIVehicleStateInfo>         DebugAllAIStateInfo;                                      // 0x00B8(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerVehicleStateInfo
// 0x0008 (0x0020 - 0x0018)
struct FDiffAIPlayerVehicleStateInfo : public FAIStateInfoBase
{
	struct FDiffStateInfoInt32                         vehicle_role;                                             // 0x0018(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAIVehicleStateInfo
// 0x00F8 (0x0118 - 0x0020)
struct FDiffAIVehicleStateInfo : public FUniqueStateInfo
{
	struct FDiffAIPlayerVehicleStateInfo               State;                                                    // 0x0020(0x0020)
	struct FDiffVehicleState                           vehicle_state;                                            // 0x0040(0x00A0)
	struct FDiffVehicleStates                          nearby_vehicles;                                          // 0x00E0(0x0038)
};

// ScriptStruct AI.GlobalNearbyVehicleInfo
// 0x0010 (0x0028 - 0x0018)
struct FGlobalNearbyVehicleInfo : public FAIStateInfoBase
{
	TArray<struct FVehicleState>                       nearby_vehicles;                                          // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.GlobalVehicleState
// 0x0038 (0x0050 - 0x0018)
struct FGlobalVehicleState : public FAIStateInfoBase
{
	struct FGlobalNearbyVehicleInfo                    global_nearby_info;                                       // 0x0018(0x0028)
	TArray<struct FAIStateXYZ>                         vehicle_spot_position;                                    // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffGlobalNearbyVehicleState
// 0x0038 (0x0050 - 0x0018)
struct FDiffGlobalNearbyVehicleState : public FAIStateInfoBase
{
	struct FDiffVehicleStates                          nearby_vehicles;                                          // 0x0018(0x0038)
};

// ScriptStruct AI.DiffGlobalVehicleState
// 0x0050 (0x0068 - 0x0018)
struct FDiffGlobalVehicleState : public FAIStateInfoBase
{
	struct FDiffGlobalNearbyVehicleState               global_nearby_info;                                       // 0x0018(0x0050)
};

// ScriptStruct AI.DiffAllPlayerVehicleInfo
// 0x0338 (0x0350 - 0x0018)
struct FDiffAllPlayerVehicleInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FDiffAIVehicleStateInfo>     diff_states;                                              // 0x0018(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIVehicleStateInfo>         State;                                                    // 0x0068(0x0050) (ZeroConstructor)
	struct FGlobalVehicleState                         global_state;                                             // 0x00B8(0x0050)
	struct FDiffGlobalVehicleState                     diff_global_state;                                        // 0x0108(0x0068)
	TMap<uint32_t, struct FAIVehicleStateInfo>         global_player_states;                                     // 0x0170(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIVehicleStateInfo>     global_player_diff_states;                                // 0x01C0(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIVehicleStateInfo>         near_player_states;                                       // 0x0210(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIVehicleStateInfo>     near_player_diff_states;                                  // 0x0260(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FAIVehicleStateInfo>         global_btai_states;                                       // 0x02B0(0x0050) (ZeroConstructor)
	TMap<uint32_t, struct FDiffAIVehicleStateInfo>     global_btai_diff_states;                                  // 0x0300(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.DiffGlobalNearbyVehicleStateGeneral
// 0x0038 (0x0050 - 0x0018)
struct FDiffGlobalNearbyVehicleStateGeneral : public FAIStateInfoBase
{
	struct FDiffVehicleStatesGeneral                   nearby_vehicles;                                          // 0x0018(0x0038)
};

// ScriptStruct AI.DiffGlobalVehicleStateGeneral
// 0x0060 (0x0078 - 0x0018)
struct FDiffGlobalVehicleStateGeneral : public FAIStateInfoBase
{
	struct FDiffGlobalNearbyVehicleStateGeneral        global_nearby_info;                                       // 0x0018(0x0050)
	TArray<struct FAIStateXYZ>                         vehicle_spot_position;                                    // 0x0068(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.ActionMoveData
// 0x0010
struct FActionMoveData
{
	bool                                               IsStop;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsRun;                                                    // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              DirectionX;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DirectionY;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DirectionZ;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIVehicleHatredInfo
// 0x000C
struct FAIVehicleHatredInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTTaskMobOnceMemory
// 0x0004
struct FBTTaskMobOnceMemory
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct AI.ShootingAimConfig
// 0x0014
struct FShootingAimConfig
{
	EAIWeaponShootType                                 WeaponShotType;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AimDeviationScale;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinAimDeviationScale;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RandomShootFreqRange;                                     // 0x000C(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct AI.ShootingAimConfigContainer
// 0x0050
struct FShootingAimConfigContainer
{
	TMap<float, struct FShootingAimConfig>             AimConfig;                                                // 0x0000(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct AI.DifficultyShootingConfig
// 0x0010
struct FDifficultyShootingConfig
{
	EAIWeaponShootType                                 WeaponShotType;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DeviationScale;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RandomShootFreqRange;                                     // 0x0008(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct AI.BTAICheckInAIBehaviorRegionMemory
// 0x002C
struct FBTAICheckInAIBehaviorRegionMemory
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FVector                                     SpawnLocation;                                            // 0x0004(0x000C) (IsPlainOldData)
	struct FBox                                        MaxMoveDistanceVolumeBox;                                 // 0x0010(0x001C) (IsPlainOldData)
};

// ScriptStruct AI.BTAICheckMaxDistanceFromSpawnPointMemory
// 0x002C
struct FBTAICheckMaxDistanceFromSpawnPointMemory
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FVector                                     SpawnLocation;                                            // 0x0004(0x000C) (IsPlainOldData)
	struct FBox                                        MaxMoveDistanceVolumeBox;                                 // 0x0010(0x001C) (IsPlainOldData)
};

// ScriptStruct AI.BTFlyingChooseEnemyMemory
// 0x000C
struct FBTFlyingChooseEnemyMemory
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTMobAddHpMemory
// 0x0001
struct FBTMobAddHpMemory
{
	bool                                               HPBuffAdded;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTMobCheckLoseTargetMemory
// 0x0008
struct FBTMobCheckLoseTargetMemory
{
	bool                                               LastLoseTarget;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LoseTargetElapsedTime;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTMobHearingMemory
// 0x0028
struct FBTMobHearingMemory
{
	struct FNoiseInfo                                  LastChosenNoiseInfo;                                      // 0x0000(0x0024)
	float                                              LockNoiseElapsedTime;                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTMobMoveBlockTimerMemory
// 0x0004
struct FBTMobMoveBlockTimerMemory
{
	float                                              BlockElapsedTime;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTAISenseGrenadeMemory
// 0x0260
struct FBTAISenseGrenadeMemory
{
	TMap<EAISenseGrenadeType, float>                   GrenadeSensedDistance;                                    // 0x0000(0x0050) (ZeroConstructor)
	TMap<EAISenseGrenadeType, float>                   GrenadeSensedDistanceSquared;                             // 0x0050(0x0050) (ZeroConstructor)
	float                                              fMaxSenseDistance;                                        // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x11C];                                     // 0x00A4(0x011C) MISSED OFFSET
	TMap<EAISenseGrenadeType, struct FAISenseGrenadeBBKeyInfo> GrenadeBBKeyInfo;                                         // 0x01C0(0x0050) (ZeroConstructor)
	TMap<class UClass*, EAISenseGrenadeType>           GrenadeClassesMap;                                        // 0x0210(0x0050) (ZeroConstructor)
};

// ScriptStruct AI.BTTaskCrowdMoveMemory
// 0x0078
struct FBTTaskCrowdMoveMemory
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct AI.BTTaskFlyAlongSplineMemory
// 0x001C
struct FBTTaskFlyAlongSplineMemory
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct AI.BTTaskForceIdleMemory
// 0x000C
struct FBTTaskForceIdleMemory
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTLaunchMoveSpeedCurve
// 0x0004
struct FBTLaunchMoveSpeedCurve
{
	float                                              DistanceThreshold;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.BTTaskMobExplodeMemory
// 0x0001
struct FBTTaskMobExplodeMemory
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AI.BTTaskGetNearDeathCharNearbyMemory
// 0x000C
struct FBTTaskGetNearDeathCharNearbyMemory
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTTaskMobGetRandomAttackTargetInRadius
// 0x0008
struct FBTTaskMobGetRandomAttackTargetInRadius
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AI.BTTaskGetVehicleNearbyMemory
// 0x000C
struct FBTTaskGetVehicleNearbyMemory
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AI.BTTaskMoveAroundMemory
// 0x00A0
struct FBTTaskMoveAroundMemory
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
	class AActor*                                      FocusActor;                                               // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0070(0x0030) MISSED OFFSET
};

// ScriptStruct AI.BTTaskRotateToTargetMemory
// 0x0008
struct FBTTaskRotateToTargetMemory
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AI.BTAICharacterCastSkillMemory
// 0x0034
struct FBTAICharacterCastSkillMemory
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FVector                                     FocusLocation;                                            // 0x0004(0x000C) (IsPlainOldData)
	TWeakObjectPtr<class AActor>                       FocusActor;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TossTargetLoc;                                            // 0x0018(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FVector                                     GrenadeThrowStartLoc;                                     // 0x0028(0x000C) (IsPlainOldData)
};

// ScriptStruct AI.BTTaskParachuteJumpBaseMemory
// 0x0020
struct FBTTaskParachuteJumpBaseMemory
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AI.DebugAIParamConfig
// 0x0018
struct FDebugAIParamConfig
{
	int                                                DistMin;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DistMax;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     NameAndDegree;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIWinnerState
// 0x0008 (0x0020 - 0x0018)
struct FAIWinnerState : public FDiffStateInfoBase
{
	int                                                team_id;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                player_id;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.DiffCmd
// 0x0040
struct FDiffCmd
{
	class UProperty*                                   Property;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UProperty*                                   DiffProperty;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UProperty*                                   ValueProperty;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UProperty*                                   DelItemProperty;                                          // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UProperty*                                   UnChangedProperty;                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UProperty*                                   DiffUnChangedProperty;                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct AI.DiffStateInfoUInt16
// 0x0002
struct FDiffStateInfoUInt16
{
	uint16_t                                           Value;                                                    // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AI.AIAttribute_CastEnergyWithCount
// 0x001C
struct FAIAttribute_CastEnergyWithCount
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct AI.DiffAIGameMPStateGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIGameMPStateGeneral : public FDiffStateInfoBase
{
	struct FDiffGameScoreDatas                         team_score_datas;                                         // 0x0018(0x0020)
};

// ScriptStruct AI.DiffGlobalGameMPState
// 0x0028 (0x0040 - 0x0018)
struct FDiffGlobalGameMPState : public FDiffStateInfoBase
{
	struct FAIGameStateMPBase                          Game;                                                     // 0x0018(0x0028)
};

// ScriptStruct AI.DiffAIGameMPState
// 0x0010 (0x0028 - 0x0018)
struct FDiffAIGameMPState : public FAIStateInfoBase
{
	TArray<struct FTeamScoreData>                      team_score_datas;                                         // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.AIGameMPState
// 0x0010 (0x0028 - 0x0018)
struct FAIGameMPState : public FAIStateInfoBase
{
	TArray<struct FTeamScoreData>                      team_score_datas;                                         // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIPlayerMPState
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIPlayerMPState : public FAIStateInfoBase
{
	struct FDiffStateInfoBool                          is_invincible;                                            // 0x0018(0x0001)
	struct FDiffStateInfoBool                          in_shoveling;                                             // 0x0019(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	struct FDiffStateInfoInt32                         death_count;                                              // 0x001C(0x0004)
	struct FDiffStateInfoFloat                         survive_time;                                             // 0x0020(0x0004)
	struct FDiffStateInfoFloat                         kd_ratio;                                                 // 0x0024(0x0004)
	struct FDiffStateInfoInt32                         continue_kill;                                            // 0x0028(0x0004)
	struct FDiffStateInfoInt32                         revenge;                                                  // 0x002C(0x0004)
	struct FDiffStateInfoInt32                         top_spot_end;                                             // 0x0030(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAIGameModePlayerWeaponSchemeSlotInfo
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIGameModePlayerWeaponSchemeSlotInfo : public FAIStateInfoBase
{
	struct FDiffStateInfoInt32                         slot_index;                                               // 0x0018(0x0004)
	struct FDiffStateInfoInt32                         item_id;                                                  // 0x001C(0x0004)
	struct FDiffStateInfoInt32                         Count;                                                    // 0x0020(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<int>                                        attach_list;                                              // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIGameModePlayerWeaponSchemeSlotInfoList
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIGameModePlayerWeaponSchemeSlotInfoList : public FAIStateInfoBase
{
	TArray<struct FDiffAIGameModePlayerWeaponSchemeSlotInfo> slot_info;                                                // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffAIGameModePlayerWeaponSchemeInfo
// 0x0040 (0x0058 - 0x0018)
struct FDiffAIGameModePlayerWeaponSchemeInfo : public FAIStateInfoBase
{
	struct FDiffStateInfoInt32                         scheme_index;                                             // 0x0018(0x0004)
	struct FDiffStateInfoBool                          is_locked;                                                // 0x001C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FDiffAIGameModePlayerWeaponSchemeSlotInfoList slot_list;                                                // 0x0020(0x0038)
};

// ScriptStruct AI.DiffAIGameModePlayerWeaponSchemeInfoList
// 0x0020 (0x0038 - 0x0018)
struct FDiffAIGameModePlayerWeaponSchemeInfoList : public FAIStateInfoBase
{
	TArray<struct FDiffAIGameModePlayerWeaponSchemeInfo> weapon_scheme_info;                                       // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   item_state;                                               // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct AI.DiffDeathMatchAIPlayerEquipment
// 0x0040 (0x0058 - 0x0018)
struct FDiffDeathMatchAIPlayerEquipment : public FAIStateInfoBase
{
	struct FDiffAIGameModePlayerWeaponSchemeInfoList   weapon_scheme_info_list;                                  // 0x0018(0x0038)
	struct FDiffStateInfoInt32                         cur_weapon_scheme_index;                                  // 0x0050(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct AI.DiffAIMPStateInfo
// 0x0090 (0x00B0 - 0x0020)
struct FDiffAIMPStateInfo : public FUniqueStateInfo
{
	struct FDiffAIPlayerMPState                        State;                                                    // 0x0020(0x0038)
	struct FDiffDeathMatchAIPlayerEquipment            deathmatch_backpack;                                      // 0x0058(0x0058)
};

// ScriptStruct AI.DiffGlobalNearbyInfoBRBase
// 0x00B8 (0x00D0 - 0x0018)
struct FDiffGlobalNearbyInfoBRBase : public FAIStateInfoBase
{
	TArray<struct FDoorState>                          nearby_door;                                              // 0x0018(0x0010) (ZeroConstructor)
	struct FDiffVehicleStates                          nearby_vehicles;                                          // 0x0028(0x0038)
	struct FDiffDynamicItemStates                      dynamic_item_states;                                      // 0x0060(0x0038)
	struct FDiffMonsterStates                          monster_states;                                           // 0x0098(0x0038)
};

// ScriptStruct AI.DiffObstacleStateGeneral
// 0x0020 (0x0038 - 0x0018)
struct FDiffObstacleStateGeneral : public FDiffStateInfoBase
{
	TArray<struct FObstacleState>                      Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<uint64_t>                                   del_item_id;                                              // 0x0028(0x0010) (ZeroConstructor)
};

}

