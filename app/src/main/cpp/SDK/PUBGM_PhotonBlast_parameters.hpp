#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PhotonBlast.PhotonReplicationStaticMeshComponent.UnRegistLuaTick
struct UPhotonReplicationStaticMeshComponent_UnRegistLuaTick_Params
{
};

// Function PhotonBlast.PhotonReplicationStaticMeshComponent.UnRegisterFromCluster
struct UPhotonReplicationStaticMeshComponent_UnRegisterFromCluster_Params
{
};

// Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetMoveable
struct UPhotonReplicationStaticMeshComponent_SetMoveable_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetClusterUniqueID
struct UPhotonReplicationStaticMeshComponent_SetClusterUniqueID_Params
{
	int                                                InClusterID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetClusterEntityState
struct UPhotonReplicationStaticMeshComponent_SetClusterEntityState_Params
{
	EClusterEntityState                                EntityState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationStaticMeshComponent.RegistLuaTick
struct UPhotonReplicationStaticMeshComponent_RegistLuaTick_Params
{
	float                                              TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationStaticMeshComponent.RegisterToCluster
struct UPhotonReplicationStaticMeshComponent_RegisterToCluster_Params
{
};

// Function PhotonBlast.PhotonReplicationStaticMeshComponent.MarkPropDirty
struct UPhotonReplicationStaticMeshComponent_MarkPropDirty_Params
{
	int                                                PropIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.SetupFragmentsMaxHp
struct UPhotonDestructibleMeshComponent_SetupFragmentsMaxHp_Params
{
	float                                              HP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.SetServerDamagedDelegate
struct UPhotonDestructibleMeshComponent_SetServerDamagedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, ZeroConstructor)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.SetFracturedMesh
struct UPhotonDestructibleMeshComponent_SetFracturedMesh_Params
{
	class UPhotonDestructibleMesh*                     InFracturedMesh;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.Server_OnComponentHitAction
struct UPhotonDestructibleMeshComponent_Server_OnComponentHitAction_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.Server_DamageFragmentsByRadius
struct UPhotonDestructibleMeshComponent_Server_DamageFragmentsByRadius_Params
{
	struct FVector4                                    WorldImpactVelocityAndRotateStrength;                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector4                                    WorldImpactPointAndSpreadStrength;                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              HP;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Attenuation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.Server_DamageFragmentsByHp
struct UPhotonDestructibleMeshComponent_Server_DamageFragmentsByHp_Params
{
	TArray<int>                                        FragmentsIndex;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      HP;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector4                                    WorldImpactPointAndSpreadStrength;                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector4                                    WorldImpactVelocityAndRotateSpeed;                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_SlideData
struct UPhotonDestructibleMeshComponent_OnRep_SlideData_Params
{
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_ImpactData
struct UPhotonDestructibleMeshComponent_OnRep_ImpactData_Params
{
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_FragmentsState
struct UPhotonDestructibleMeshComponent_OnRep_FragmentsState_Params
{
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.IsFragmentCanDestroy
struct UPhotonDestructibleMeshComponent_IsFragmentCanDestroy_Params
{
	int                                                FragmentItemIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.IsFragmentCanBeDamaged
struct UPhotonDestructibleMeshComponent_IsFragmentCanBeDamaged_Params
{
	int                                                FragmentItemIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.GetPhotonDestructibleMesh
struct UPhotonDestructibleMeshComponent_GetPhotonDestructibleMesh_Params
{
	class UPhotonDestructibleMesh*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentTransform
struct UPhotonDestructibleMeshComponent_GetFragmentTransform_Params
{
	int                                                FragmentIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               WorldSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsWorldPosition
struct UPhotonDestructibleMeshComponent_GetFragmentsWorldPosition_Params
{
	int                                                FragmentIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FragmentPosition;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsNotDamaged
struct UPhotonDestructibleMeshComponent_GetFragmentsNotDamaged_Params
{
	TArray<int>                                        Fragments;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               IsReturnNotDestroyedFragments;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsDamaged
struct UPhotonDestructibleMeshComponent_GetFragmentsDamaged_Params
{
	TArray<int>                                        Fragments;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsByRadius
struct UPhotonDestructibleMeshComponent_GetFragmentsByRadius_Params
{
	struct FVector                                     HitPoint;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        FragmentsIndex;                                           // (Parm, OutParm, ZeroConstructor)
	TArray<float>                                      ImpactDistance;                                           // (Parm, OutParm, ZeroConstructor)
	int                                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentItemCount
struct UPhotonDestructibleMeshComponent_GetFragmentItemCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentBounds
struct UPhotonDestructibleMeshComponent_GetFragmentBounds_Params
{
	int                                                FragmentIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FBox                                        OutBox;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               WorldSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFracturedMesh
struct UPhotonDestructibleMeshComponent_GetFracturedMesh_Params
{
	class UPhotonFracturedMesh*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonDestructibleMeshComponent.ClientDamageAndInitalFragments
struct UPhotonDestructibleMeshComponent_ClientDamageAndInitalFragments_Params
{
	TArray<int>                                        DamagedFragmentItemIndex;                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        InitialFragmentItemIndex;                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.UnRegistLuaTick
struct UPhotonReplicationInstancedStaticMeshComponent_UnRegistLuaTick_Params
{
};

// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.UnRegisterFromCluster
struct UPhotonReplicationInstancedStaticMeshComponent_UnRegisterFromCluster_Params
{
};

// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetMoveable
struct UPhotonReplicationInstancedStaticMeshComponent_SetMoveable_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetClusterUniqueID
struct UPhotonReplicationInstancedStaticMeshComponent_SetClusterUniqueID_Params
{
	int                                                InClusterID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetClusterEntityState
struct UPhotonReplicationInstancedStaticMeshComponent_SetClusterEntityState_Params
{
	EClusterEntityState                                EntityState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.RegistLuaTick
struct UPhotonReplicationInstancedStaticMeshComponent_RegistLuaTick_Params
{
	float                                              TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.RegisterToCluster
struct UPhotonReplicationInstancedStaticMeshComponent_RegisterToCluster_Params
{
};

// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.MarkPropDirty
struct UPhotonReplicationInstancedStaticMeshComponent_MarkPropDirty_Params
{
	int                                                PropIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetupFragmentsMaxHp
struct UPhotonInstancedDestructibleMeshComponent_SetupFragmentsMaxHp_Params
{
	float                                              HP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetServerDamagedDelegate
struct UPhotonInstancedDestructibleMeshComponent_SetServerDamagedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, ZeroConstructor)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetPhysMaterialOverride
struct UPhotonInstancedDestructibleMeshComponent_SetPhysMaterialOverride_Params
{
	class UPhysicalMaterial*                           NewPhysMaterial;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetFracturedMesh
struct UPhotonInstancedDestructibleMeshComponent_SetFracturedMesh_Params
{
	class UPhotonDestructibleMesh*                     InFracturedMesh;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.Server_OnComponentHitAction
struct UPhotonInstancedDestructibleMeshComponent_Server_OnComponentHitAction_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.Server_DamageFragmentsByRadius
struct UPhotonInstancedDestructibleMeshComponent_Server_DamageFragmentsByRadius_Params
{
	struct FVector4                                    WorldImpactVelocity;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector4                                    WorldHitPointAndSpreadSpeed;                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              HP;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Attenuation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.ReplaceAllInstances
struct UPhotonInstancedDestructibleMeshComponent_ReplaceAllInstances_Params
{
	TArray<struct FTransform>                          InstanceTransforms;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bShouldReturnIndices;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.OnRep_ImpactData
struct UPhotonInstancedDestructibleMeshComponent_OnRep_ImpactData_Params
{
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.OnRep_FragmentsState
struct UPhotonInstancedDestructibleMeshComponent_OnRep_FragmentsState_Params
{
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.IsFragmentCanDestroy
struct UPhotonInstancedDestructibleMeshComponent_IsFragmentCanDestroy_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FragmentItemIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetPhotonDestructibleMesh
struct UPhotonInstancedDestructibleMeshComponent_GetPhotonDestructibleMesh_Params
{
	class UPhotonDestructibleMesh*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetInstancesOverlappingSphere
struct UPhotonInstancedDestructibleMeshComponent_GetInstancesOverlappingSphere_Params
{
	struct FVector                                     Center;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSphereInWorldSpace;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetInstanceItemCount
struct UPhotonInstancedDestructibleMeshComponent_GetInstanceItemCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentTransform
struct UPhotonInstancedDestructibleMeshComponent_GetFragmentTransform_Params
{
	int                                                InstanceIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FragmentIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               WorldSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentsWorldPosition
struct UPhotonInstancedDestructibleMeshComponent_GetFragmentsWorldPosition_Params
{
	int                                                InstanceIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FragmentIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FragmentPosition;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentsNotDamaged
struct UPhotonInstancedDestructibleMeshComponent_GetFragmentsNotDamaged_Params
{
	int                                                InstanceIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        FragmentsNoDamaged;                                       // (Parm, OutParm, ZeroConstructor)
	bool                                               IsReturnNotDestroyedFragments;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentsDamaged
struct UPhotonInstancedDestructibleMeshComponent_GetFragmentsDamaged_Params
{
	int                                                InstanceIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        FragmentsDamaged;                                         // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentItemCount
struct UPhotonInstancedDestructibleMeshComponent_GetFragmentItemCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentBounds
struct UPhotonInstancedDestructibleMeshComponent_GetFragmentBounds_Params
{
	int                                                InstanceIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FragmentIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FBox                                        OutBox;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               WorldSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFracturedMesh
struct UPhotonInstancedDestructibleMeshComponent_GetFracturedMesh_Params
{
	class UPhotonFracturedMesh*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstanceWorldSpace
struct UPhotonInstancedDestructibleMeshComponent_AddInstanceWorldSpace_Params
{
	struct FTransform                                  WorldTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstances
struct UPhotonInstancedDestructibleMeshComponent_AddInstances_Params
{
	TArray<struct FTransform>                          InstanceTransforms;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bShouldReturnIndices;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMarkRenderStateDirty;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstance
struct UPhotonInstancedDestructibleMeshComponent_AddInstance_Params
{
	struct FTransform                                  InstanceTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonHierarchicalInstancedDestructibleMeshComponent.ShowInstances
struct UPhotonHierarchicalInstancedDestructibleMeshComponent_ShowInstances_Params
{
	TArray<int>                                        InstanceIndices;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FTransform>                          InstanceTransforms;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonHierarchicalInstancedDestructibleMeshComponent.RemoveInstances
struct UPhotonHierarchicalInstancedDestructibleMeshComponent_RemoveInstances_Params
{
	TArray<int>                                        InstancesToRemove;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.UpdatePickupAndDeadBoxInRange
struct UPhotonHierarchicalInstancedStaticMeshComponent_UpdatePickupAndDeadBoxInRange_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.SetFracturedMesh
struct UPhotonHierarchicalInstancedStaticMeshComponent_SetFracturedMesh_Params
{
	class UPhotonDestructibleMesh*                     InPhotonDestructibleMesh;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.ServerGetInstanceIndexsNotDamaged
struct UPhotonHierarchicalInstancedStaticMeshComponent_ServerGetInstanceIndexsNotDamaged_Params
{
	TArray<int>                                        InstancesNoDamaged;                                       // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.ServerGetInstanceIndexsDamaged
struct UPhotonHierarchicalInstancedStaticMeshComponent_ServerGetInstanceIndexsDamaged_Params
{
	TArray<int>                                        InstancesDamaged;                                         // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.Server_InstanceByHp
struct UPhotonHierarchicalInstancedStaticMeshComponent_Server_InstanceByHp_Params
{
	TArray<int>                                        InstancedIndex;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      DamagesHp;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     WorldImpactVelocity;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EDestructionDamageType                             DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.Server_InstanceAndWorldVelocityByHp
struct UPhotonHierarchicalInstancedStaticMeshComponent_Server_InstanceAndWorldVelocityByHp_Params
{
	TArray<int>                                        InstancedIndex;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      DamagesHp;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     WorldImpactPoint;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EDestructionDamageType                             DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.Server_DamageFragmentsByRadius
struct UPhotonHierarchicalInstancedStaticMeshComponent_Server_DamageFragmentsByRadius_Params
{
	struct FVector                                     WorldImpactVelocity;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     WorldHitPointAndSpreadSpeed;                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              HP;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnTriggerServerEvent__DelegateSignature
struct UPhotonHierarchicalInstancedStaticMeshComponent_OnTriggerServerEvent__DelegateSignature_Params
{
	class ASTExtraVehicleBase*                         VehicleActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhotonHierarchicalInstancedStaticMeshComponent* MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     DesPos;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                TriggerIndex;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnTriggeredByComp
struct UPhotonHierarchicalInstancedStaticMeshComponent_OnTriggeredByComp_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTriggerEvent                               TriggerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnTriggerClientEvent__DelegateSignature
struct UPhotonHierarchicalInstancedStaticMeshComponent_OnTriggerClientEvent__DelegateSignature_Params
{
	class ASTExtraVehicleBase*                         VehicleActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhotonHierarchicalInstancedStaticMeshComponent* MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     DesPos;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                TriggerIndex;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnRep_ImpactData
struct UPhotonHierarchicalInstancedStaticMeshComponent_OnRep_ImpactData_Params
{
};

// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnLocalVehicleHit
struct UPhotonHierarchicalInstancedStaticMeshComponent_OnLocalVehicleHit_Params
{
	TArray<int>                                        InstanceIndex;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector4                                    WorldImpactPointAndSpreadSpeed;                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector4                                    WorldImpactVelocityAndRotateSpeed;                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GetPhotonDestructibleMesh
struct UPhotonHierarchicalInstancedStaticMeshComponent_GetPhotonDestructibleMesh_Params
{
	class UPhotonDestructibleMesh*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GetInstanceByRadius
struct UPhotonHierarchicalInstancedStaticMeshComponent_GetInstanceByRadius_Params
{
	struct FVector                                     HitPoint;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        InstancedIndex;                                           // (Parm, OutParm, ZeroConstructor)
	EDestructionDamageType                             DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GetFracturedMesh
struct UPhotonHierarchicalInstancedStaticMeshComponent_GetFracturedMesh_Params
{
	class UPhotonFracturedMesh*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GenerateEffectInstanceWorldSpace
struct UPhotonHierarchicalInstancedStaticMeshComponent_GenerateEffectInstanceWorldSpace_Params
{
	TArray<int>                                        InstanceIndex;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             WorldImpactVelocityAndRotateSpeed;                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GenerateEffectInstanceLocalSpace
struct UPhotonHierarchicalInstancedStaticMeshComponent_GenerateEffectInstanceLocalSpace_Params
{
	TArray<int>                                        InstanceIndex;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             LocalImpactVelocityAndRotateSpeed;                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.ClientCorrectVehicleHit
struct UPhotonHierarchicalInstancedStaticMeshComponent_ClientCorrectVehicleHit_Params
{
	TArray<int>                                        InstanceIndex;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.UnRegistLuaTick
struct UPhotonReplicationSkeletalMeshComponent_UnRegistLuaTick_Params
{
};

// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.UnRegisterFromCluster
struct UPhotonReplicationSkeletalMeshComponent_UnRegisterFromCluster_Params
{
};

// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetMoveable
struct UPhotonReplicationSkeletalMeshComponent_SetMoveable_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetClusterUniqueID
struct UPhotonReplicationSkeletalMeshComponent_SetClusterUniqueID_Params
{
	int                                                InClusterID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetClusterEntityState
struct UPhotonReplicationSkeletalMeshComponent_SetClusterEntityState_Params
{
	EClusterEntityState                                EntityState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.RegistLuaTick
struct UPhotonReplicationSkeletalMeshComponent_RegistLuaTick_Params
{
	float                                              TickInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.RegisterToCluster
struct UPhotonReplicationSkeletalMeshComponent_RegisterToCluster_Params
{
};

// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.MarkPropDirty
struct UPhotonReplicationSkeletalMeshComponent_MarkPropDirty_Params
{
	int                                                PropIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.ReusableStaticMeshActor.OnSpawn
struct AReusableStaticMeshActor_OnSpawn_Params
{
};

// Function PhotonBlast.ReusableStaticMeshActor.OnRecycle
struct AReusableStaticMeshActor_OnRecycle_Params
{
};

// Function PhotonBlast.ReusableSkeletalMeshActor.OnSpawn
struct AReusableSkeletalMeshActor_OnSpawn_Params
{
};

// Function PhotonBlast.ReusableSkeletalMeshActor.OnRecycle
struct AReusableSkeletalMeshActor_OnRecycle_Params
{
};

// Function PhotonBlast.ReusableDestructibleMeshActor.OnSpawn
struct AReusableDestructibleMeshActor_OnSpawn_Params
{
};

// Function PhotonBlast.ReusableDestructibleMeshActor.OnRecycle
struct AReusableDestructibleMeshActor_OnRecycle_Params
{
};

// Function PhotonBlast.PhotonStaticMeshComponent.SetFracturedMesh
struct UPhotonStaticMeshComponent_SetFracturedMesh_Params
{
	class UPhotonDestructibleMesh*                     InPhotonDestructibleMesh;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhotonBlast.PhotonStaticMeshComponent.GetPhotonDestructibleMesh
struct UPhotonStaticMeshComponent_GetPhotonDestructibleMesh_Params
{
	class UPhotonDestructibleMesh*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhotonBlast.PhotonStaticMeshComponent.GetFracturedMesh
struct UPhotonStaticMeshComponent_GetFracturedMesh_Params
{
	class UPhotonFracturedMesh*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

