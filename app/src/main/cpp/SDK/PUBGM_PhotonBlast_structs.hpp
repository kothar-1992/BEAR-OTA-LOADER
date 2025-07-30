#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PhotonBlast.EDestructionDamageType
enum class EDestructionDamageType : uint8_t
{
	EDestructionDamageType__EDestructionDamage_ShootWeapon = 0,
	EDestructionDamageType__EDestructionDamage_Projectile = 1,
	EDestructionDamageType__EDestructionDamage_Melee = 2,
	EDestructionDamageType__EDestructionDamage_Grenade = 3,
	EDestructionDamageType__EDestructionDamage_Vehicle = 4,
	EDestructionDamageType__EDestructionDamage_VehicleTrigger = 5,
	EDestructionDamageType__EDestructionDamage_VehicleExplosion = 6,
	EDestructionDamageType__EDestructionDamage_DropActor = 7,
	EDestructionDamageType__EDestructionDamage_GasLineExplosion = 8,
	EDestructionDamageType__EDestructionDamage_Other = 9,
	EDestructionDamageType__EDestructionDamage_Max = 10
};


// Enum PhotonBlast.EEffectType
enum class EEffectType : uint8_t
{
	None_Type                      = 0,
	BrokenEffect                   = 1,
	SimulationEffect               = 2,
	AnimationEffect                = 3,
	EEffectType_MAX                = 4
};


// Enum PhotonBlast.EPhotonFracturedMeshFragmentState
enum class EPhotonFracturedMeshFragmentState : uint8_t
{
	EPhotonFracturedMeshFragmentState__PhotonFracturedMesh_Initial = 0,
	EPhotonFracturedMeshFragmentState__PhotonFracturedMesh_UnderDestruction = 1,
	EPhotonFracturedMeshFragmentState__PhotonFracturedMesh_Damaged = 2,
	EPhotonFracturedMeshFragmentState__PhotonFractureMesh_DamagedByCollapse = 3,
	EPhotonFracturedMeshFragmentState__EPhotonFracturedMeshFragmentState_MAX = 4
};


// Enum PhotonBlast.ESlicedAxis
enum class ESlicedAxis : uint8_t
{
	SlicedAxis_X                   = 0,
	SlicedAxis_Y                   = 1,
	SlicedAxis_Z                   = 2,
	SlicedAxis_NX                  = 3,
	SlicedAxis_NY                  = 4,
	SlicedAxis_NZ                  = 5,
	SlicedAxis_MAX                 = 6
};


// Enum PhotonBlast.EPhotonCollisionType
enum class EPhotonCollisionType : uint8_t
{
	PhotonCollisionType_Simple     = 0,
	PhotonCollisionType_Complex    = 1,
	PhotonCollisionType_MAX        = 2
};


// Enum PhotonBlast.EPhotonDestructibleAction
enum class EPhotonDestructibleAction : uint8_t
{
	PhotonDestructibleAction_Hide  = 0,
	PhotonDestructibleAction_Detach = 1,
	PhotonDestructibleAction_Slide = 2,
	PhotonDestructibleAction_MAX   = 3
};


// Enum PhotonBlast.EPhotonDestructibleState
enum class EPhotonDestructibleState : uint8_t
{
	EPhotonDestructibleState__PhotonPDState_UnBroken = 0,
	EPhotonDestructibleState__PhotonPDState_Broken = 1,
	EPhotonDestructibleState__PhotonPDState_AllHidden = 2,
	EPhotonDestructibleState__PhotonPDState_Collapse = 3,
	EPhotonDestructibleState__PhotonPDState_Recovery = 4,
	EPhotonDestructibleState__PhotonPDState_Invalid = 5,
	EPhotonDestructibleState__PhotonPDState_MAX = 6
};


// Enum PhotonBlast.EPhotonMeshFragmentType
enum class EPhotonMeshFragmentType : uint8_t
{
	EPhotonMeshFragmentType__Indestructible = 0,
	EPhotonMeshFragmentType__Disappear = 1,
	EPhotonMeshFragmentType__Collapse = 2,
	EPhotonMeshFragmentType__EPhotonMeshFragmentType_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PhotonBlast.PhotonDestructibleImpactParam
// 0x0008
struct FPhotonDestructibleImpactParam
{
	float                                              ImpactDamageHp;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactDamageSpreadRadius;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PhotonBlast.PhotonHideReplicationData
// 0x0030
struct FPhotonHideReplicationData
{
	struct FVector_NetQuantize10                       LocalImpactPoint;                                         // 0x0000(0x000C) (Transient)
	struct FVector_NetQuantize10                       LocalImpactVelocity;                                      // 0x000C(0x000C) (Transient)
	TArray<EPhotonFracturedMeshFragmentState>          TargetFragmentsState;                                     // 0x0018(0x0010) (ZeroConstructor)
	float                                              ImpactTime;                                               // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct PhotonBlast.PhotonDetachReplicationData
// 0x0030
struct FPhotonDetachReplicationData
{
	struct FVector4                                    LocalImpactPointAndSpreadStrength;                        // 0x0000(0x0010) (IsPlainOldData)
	struct FVector4                                    LocalImpactVelocityAndRotateStrength;                     // 0x0010(0x0010) (IsPlainOldData)
	EPhotonFracturedMeshFragmentState                  FragmentState;                                            // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
};

// ScriptStruct PhotonBlast.ChunkTransformData
// 0x0034
struct FChunkTransformData
{
	struct FVector_NetQuantize100                      LinearVelocity;                                           // 0x0000(0x000C) (Transient)
	struct FVector_NetQuantize100                      AngularVelocity;                                          // 0x000C(0x000C) (Transient)
	struct FVector_NetQuantize100                      Location;                                                 // 0x0018(0x000C) (Transient)
	struct FRotator                                    Rotation;                                                 // 0x0024(0x000C) (Transient, IsPlainOldData)
	bool                                               ReplicateVelocity;                                        // 0x0030(0x0001) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
};

// ScriptStruct PhotonBlast.PhotonSlideReplicationData
// 0x0028
struct FPhotonSlideReplicationData
{
	TArray<struct FChunkTransformData>                 ChunkTransformData;                                       // 0x0000(0x0010) (ZeroConstructor)
	EPhotonDestructibleState                           TargetDestructibleState;                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<EPhotonFracturedMeshFragmentState>          TargetFragmentsState;                                     // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct PhotonBlast.PhotonDestructibleFragmentStateData
// 0x0030
struct FPhotonDestructibleFragmentStateData
{
	struct FVector_NetQuantize10                       LocalImpactPoint;                                         // 0x0000(0x000C)
	struct FVector_NetQuantize10                       LocalImpactVelocity;                                      // 0x000C(0x000C)
	float                                              ImpactTime;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<EPhotonFracturedMeshFragmentState>          TargetFragmentsState;                                     // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct PhotonBlast.PhotonDestructibleImpactData
// 0x0040
struct FPhotonDestructibleImpactData
{
	struct FVector4                                    LocalImpactPointAndSpreadSpeed;                           // 0x0000(0x0010) (IsPlainOldData)
	bool                                               Visible;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0011(0x000F) MISSED OFFSET
	struct FVector4                                    LocalImpactVelocityAndRotateSpeed;                        // 0x0020(0x0010) (IsPlainOldData)
	EPhotonFracturedMeshFragmentState                  TargetFragmentsState;                                     // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0031(0x000F) MISSED OFFSET
};

// ScriptStruct PhotonBlast.ClusterReplicationProxy
// 0x0010
struct FClusterReplicationProxy
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct PhotonBlast.PhotonDestructibleMeshPhysicsDetachData
// 0x0028
struct FPhotonDestructibleMeshPhysicsDetachData
{
	float                                              TimeSpeed;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // 0x0004(0x000C) (Edit, IsPlainOldData)
	float                                              SpreadSpeed;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VelocitySpeed;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationSpeed;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VisibleTime;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SlideSmallestChunks;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlideRemoveSmallestSize;                                  // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PhotonBlast.EdgeNode
// 0x0018
struct FEdgeNode
{
	TArray<int>                                        Edges;                                                    // 0x0000(0x0010) (ZeroConstructor)
	int                                                Size;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct PhotonBlast.SupportGraph
// 0x0018
struct FSupportGraph
{
	TArray<struct FEdgeNode>                           EdgeDatas;                                                // 0x0000(0x0010) (ZeroConstructor)
	int                                                Size;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct PhotonBlast.FragmentConvexElem
// 0x0010
struct FFragmentConvexElem
{
	TArray<struct FKConvexElem>                        ConvexElem;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct PhotonBlast.PhotonInstanceImpactData
// 0x0010
struct FPhotonInstanceImpactData
{
	struct FVector_NetQuantize10                       WorldImpactVelocity;                                      // 0x0000(0x000C)
	EPhotonFracturedMeshFragmentState                  TargetFragmentsState;                                     // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct PhotonBlast.ReplicationEvent
// 0x0018
struct FReplicationEvent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

