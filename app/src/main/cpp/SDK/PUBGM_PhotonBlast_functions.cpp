// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PhotonBlast.PhotonReplicationStaticMeshComponent.UnRegistLuaTick
// (Final, Native, Public, BlueprintCallable)

void UPhotonReplicationStaticMeshComponent::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.UnRegistLuaTick");

	UPhotonReplicationStaticMeshComponent_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationStaticMeshComponent.UnRegisterFromCluster
// (Final, Native, Public, BlueprintCallable)

void UPhotonReplicationStaticMeshComponent::UnRegisterFromCluster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.UnRegisterFromCluster");

	UPhotonReplicationStaticMeshComponent_UnRegisterFromCluster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetMoveable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationStaticMeshComponent::SetMoveable(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetMoveable");

	UPhotonReplicationStaticMeshComponent_SetMoveable_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetClusterUniqueID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InClusterID                    (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationStaticMeshComponent::SetClusterUniqueID(int InClusterID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetClusterUniqueID");

	UPhotonReplicationStaticMeshComponent_SetClusterUniqueID_Params params;
	params.InClusterID = InClusterID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetClusterEntityState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EClusterEntityState            EntityState                    (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationStaticMeshComponent::SetClusterEntityState(EClusterEntityState EntityState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetClusterEntityState");

	UPhotonReplicationStaticMeshComponent_SetClusterEntityState_Params params;
	params.EntityState = EntityState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationStaticMeshComponent.RegistLuaTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationStaticMeshComponent::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.RegistLuaTick");

	UPhotonReplicationStaticMeshComponent_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationStaticMeshComponent.RegisterToCluster
// (Final, Native, Public, BlueprintCallable)

void UPhotonReplicationStaticMeshComponent::RegisterToCluster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.RegisterToCluster");

	UPhotonReplicationStaticMeshComponent_RegisterToCluster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationStaticMeshComponent.MarkPropDirty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PropIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationStaticMeshComponent::MarkPropDirty(int PropIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.MarkPropDirty");

	UPhotonReplicationStaticMeshComponent_MarkPropDirty_Params params;
	params.PropIndex = PropIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.SetupFragmentsMaxHp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          HP                             (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonDestructibleMeshComponent::SetupFragmentsMaxHp(float HP)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.SetupFragmentsMaxHp");

	UPhotonDestructibleMeshComponent_SetupFragmentsMaxHp_Params params;
	params.HP = HP;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.SetServerDamagedDelegate
// (Final, Native, Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, ZeroConstructor)

void UPhotonDestructibleMeshComponent::SetServerDamagedDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.SetServerDamagedDelegate");

	UPhotonDestructibleMeshComponent_SetServerDamagedDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.SetFracturedMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPhotonDestructibleMesh* InFracturedMesh                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonDestructibleMeshComponent::SetFracturedMesh(class UPhotonDestructibleMesh* InFracturedMesh, bool Force)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.SetFracturedMesh");

	UPhotonDestructibleMeshComponent_SetFracturedMesh_Params params;
	params.InFracturedMesh = InFracturedMesh;
	params.Force = Force;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.Server_OnComponentHitAction
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UPhotonDestructibleMeshComponent::Server_OnComponentHitAction(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.Server_OnComponentHitAction");

	UPhotonDestructibleMeshComponent_Server_OnComponentHitAction_Params params;
	params.HitComp = HitComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.Server_DamageFragmentsByRadius
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector4                WorldImpactVelocityAndRotateStrength (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector4                WorldImpactPointAndSpreadStrength (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          HP                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Attenuation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonDestructibleMeshComponent::Server_DamageFragmentsByRadius(const struct FVector4& WorldImpactVelocityAndRotateStrength, const struct FVector4& WorldImpactPointAndSpreadStrength, float HP, float Radius, bool Attenuation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.Server_DamageFragmentsByRadius");

	UPhotonDestructibleMeshComponent_Server_DamageFragmentsByRadius_Params params;
	params.WorldImpactVelocityAndRotateStrength = WorldImpactVelocityAndRotateStrength;
	params.WorldImpactPointAndSpreadStrength = WorldImpactPointAndSpreadStrength;
	params.HP = HP;
	params.Radius = Radius;
	params.Attenuation = Attenuation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.Server_DamageFragmentsByHp
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<int>                    FragmentsIndex                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  HP                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector4                WorldImpactPointAndSpreadStrength (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector4                WorldImpactVelocityAndRotateSpeed (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonDestructibleMeshComponent::Server_DamageFragmentsByHp(TArray<int> FragmentsIndex, TArray<float> HP, const struct FVector4& WorldImpactPointAndSpreadStrength, const struct FVector4& WorldImpactVelocityAndRotateSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.Server_DamageFragmentsByHp");

	UPhotonDestructibleMeshComponent_Server_DamageFragmentsByHp_Params params;
	params.FragmentsIndex = FragmentsIndex;
	params.HP = HP;
	params.WorldImpactPointAndSpreadStrength = WorldImpactPointAndSpreadStrength;
	params.WorldImpactVelocityAndRotateSpeed = WorldImpactVelocityAndRotateSpeed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_SlideData
// (Final, Native, Public)

void UPhotonDestructibleMeshComponent::OnRep_SlideData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_SlideData");

	UPhotonDestructibleMeshComponent_OnRep_SlideData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_ImpactData
// (Final, Native, Public)

void UPhotonDestructibleMeshComponent::OnRep_ImpactData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_ImpactData");

	UPhotonDestructibleMeshComponent_OnRep_ImpactData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_FragmentsState
// (Final, Native, Public)

void UPhotonDestructibleMeshComponent::OnRep_FragmentsState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_FragmentsState");

	UPhotonDestructibleMeshComponent_OnRep_FragmentsState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.IsFragmentCanDestroy
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            FragmentItemIndex              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonDestructibleMeshComponent::IsFragmentCanDestroy(int FragmentItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.IsFragmentCanDestroy");

	UPhotonDestructibleMeshComponent_IsFragmentCanDestroy_Params params;
	params.FragmentItemIndex = FragmentItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.IsFragmentCanBeDamaged
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            FragmentItemIndex              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonDestructibleMeshComponent::IsFragmentCanBeDamaged(int FragmentItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.IsFragmentCanBeDamaged");

	UPhotonDestructibleMeshComponent_IsFragmentCanBeDamaged_Params params;
	params.FragmentItemIndex = FragmentItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.GetPhotonDestructibleMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPhotonDestructibleMesh* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPhotonDestructibleMesh* UPhotonDestructibleMeshComponent::GetPhotonDestructibleMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetPhotonDestructibleMesh");

	UPhotonDestructibleMeshComponent_GetPhotonDestructibleMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            FragmentIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           WorldSpace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonDestructibleMeshComponent::GetFragmentTransform(int FragmentIndex, bool WorldSpace, struct FTransform* OutTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentTransform");

	UPhotonDestructibleMeshComponent_GetFragmentTransform_Params params;
	params.FragmentIndex = FragmentIndex;
	params.WorldSpace = WorldSpace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsWorldPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            FragmentIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FragmentPosition               (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonDestructibleMeshComponent::GetFragmentsWorldPosition(int FragmentIndex, struct FVector* FragmentPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsWorldPosition");

	UPhotonDestructibleMeshComponent_GetFragmentsWorldPosition_Params params;
	params.FragmentIndex = FragmentIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FragmentPosition != nullptr)
		*FragmentPosition = params.FragmentPosition;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsNotDamaged
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    Fragments                      (Parm, OutParm, ZeroConstructor)
// bool                           IsReturnNotDestroyedFragments  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonDestructibleMeshComponent::GetFragmentsNotDamaged(bool IsReturnNotDestroyedFragments, TArray<int>* Fragments)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsNotDamaged");

	UPhotonDestructibleMeshComponent_GetFragmentsNotDamaged_Params params;
	params.IsReturnNotDestroyedFragments = IsReturnNotDestroyedFragments;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Fragments != nullptr)
		*Fragments = params.Fragments;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsDamaged
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    Fragments                      (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonDestructibleMeshComponent::GetFragmentsDamaged(TArray<int>* Fragments)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsDamaged");

	UPhotonDestructibleMeshComponent_GetFragmentsDamaged_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Fragments != nullptr)
		*Fragments = params.Fragments;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsByRadius
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 HitPoint                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Radius                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    FragmentsIndex                 (Parm, OutParm, ZeroConstructor)
// TArray<float>                  ImpactDistance                 (Parm, OutParm, ZeroConstructor)
// int                            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonDestructibleMeshComponent::GetFragmentsByRadius(const struct FVector& HitPoint, float Radius, int DamageType, TArray<int>* FragmentsIndex, TArray<float>* ImpactDistance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsByRadius");

	UPhotonDestructibleMeshComponent_GetFragmentsByRadius_Params params;
	params.HitPoint = HitPoint;
	params.Radius = Radius;
	params.DamageType = DamageType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FragmentsIndex != nullptr)
		*FragmentsIndex = params.FragmentsIndex;
	if (ImpactDistance != nullptr)
		*ImpactDistance = params.ImpactDistance;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentItemCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPhotonDestructibleMeshComponent::GetFragmentItemCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentItemCount");

	UPhotonDestructibleMeshComponent_GetFragmentItemCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentBounds
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            FragmentIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FBox                    OutBox                         (Parm, OutParm, IsPlainOldData)
// bool                           WorldSpace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonDestructibleMeshComponent::GetFragmentBounds(int FragmentIndex, bool WorldSpace, struct FBox* OutBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentBounds");

	UPhotonDestructibleMeshComponent_GetFragmentBounds_Params params;
	params.FragmentIndex = FragmentIndex;
	params.WorldSpace = WorldSpace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutBox != nullptr)
		*OutBox = params.OutBox;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.GetFracturedMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPhotonFracturedMesh*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPhotonFracturedMesh* UPhotonDestructibleMeshComponent::GetFracturedMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFracturedMesh");

	UPhotonDestructibleMeshComponent_GetFracturedMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonDestructibleMeshComponent.ClientDamageAndInitalFragments
// (Native, Public, HasOutParms)
// Parameters:
// TArray<int>                    DamagedFragmentItemIndex       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    InitialFragmentItemIndex       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPhotonDestructibleMeshComponent::ClientDamageAndInitalFragments(TArray<int> DamagedFragmentItemIndex, TArray<int> InitialFragmentItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.ClientDamageAndInitalFragments");

	UPhotonDestructibleMeshComponent_ClientDamageAndInitalFragments_Params params;
	params.DamagedFragmentItemIndex = DamagedFragmentItemIndex;
	params.InitialFragmentItemIndex = InitialFragmentItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.UnRegistLuaTick
// (Final, Native, Public, BlueprintCallable)

void UPhotonReplicationInstancedStaticMeshComponent::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.UnRegistLuaTick");

	UPhotonReplicationInstancedStaticMeshComponent_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.UnRegisterFromCluster
// (Final, Native, Public, BlueprintCallable)

void UPhotonReplicationInstancedStaticMeshComponent::UnRegisterFromCluster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.UnRegisterFromCluster");

	UPhotonReplicationInstancedStaticMeshComponent_UnRegisterFromCluster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetMoveable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationInstancedStaticMeshComponent::SetMoveable(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetMoveable");

	UPhotonReplicationInstancedStaticMeshComponent_SetMoveable_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetClusterUniqueID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InClusterID                    (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationInstancedStaticMeshComponent::SetClusterUniqueID(int InClusterID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetClusterUniqueID");

	UPhotonReplicationInstancedStaticMeshComponent_SetClusterUniqueID_Params params;
	params.InClusterID = InClusterID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetClusterEntityState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EClusterEntityState            EntityState                    (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationInstancedStaticMeshComponent::SetClusterEntityState(EClusterEntityState EntityState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetClusterEntityState");

	UPhotonReplicationInstancedStaticMeshComponent_SetClusterEntityState_Params params;
	params.EntityState = EntityState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.RegistLuaTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationInstancedStaticMeshComponent::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.RegistLuaTick");

	UPhotonReplicationInstancedStaticMeshComponent_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.RegisterToCluster
// (Final, Native, Public, BlueprintCallable)

void UPhotonReplicationInstancedStaticMeshComponent::RegisterToCluster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.RegisterToCluster");

	UPhotonReplicationInstancedStaticMeshComponent_RegisterToCluster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.MarkPropDirty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PropIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationInstancedStaticMeshComponent::MarkPropDirty(int PropIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.MarkPropDirty");

	UPhotonReplicationInstancedStaticMeshComponent_MarkPropDirty_Params params;
	params.PropIndex = PropIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetupFragmentsMaxHp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          HP                             (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonInstancedDestructibleMeshComponent::SetupFragmentsMaxHp(float HP)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetupFragmentsMaxHp");

	UPhotonInstancedDestructibleMeshComponent_SetupFragmentsMaxHp_Params params;
	params.HP = HP;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetServerDamagedDelegate
// (Final, Native, Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, ZeroConstructor)

void UPhotonInstancedDestructibleMeshComponent::SetServerDamagedDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetServerDamagedDelegate");

	UPhotonInstancedDestructibleMeshComponent_SetServerDamagedDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetPhysMaterialOverride
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPhysicalMaterial*       NewPhysMaterial                (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonInstancedDestructibleMeshComponent::SetPhysMaterialOverride(class UPhysicalMaterial* NewPhysMaterial)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetPhysMaterialOverride");

	UPhotonInstancedDestructibleMeshComponent_SetPhysMaterialOverride_Params params;
	params.NewPhysMaterial = NewPhysMaterial;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetFracturedMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPhotonDestructibleMesh* InFracturedMesh                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonInstancedDestructibleMeshComponent::SetFracturedMesh(class UPhotonDestructibleMesh* InFracturedMesh, bool Force)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetFracturedMesh");

	UPhotonInstancedDestructibleMeshComponent_SetFracturedMesh_Params params;
	params.InFracturedMesh = InFracturedMesh;
	params.Force = Force;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.Server_OnComponentHitAction
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UPhotonInstancedDestructibleMeshComponent::Server_OnComponentHitAction(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.Server_OnComponentHitAction");

	UPhotonInstancedDestructibleMeshComponent_Server_OnComponentHitAction_Params params;
	params.HitComp = HitComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.Server_DamageFragmentsByRadius
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector4                WorldImpactVelocity            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector4                WorldHitPointAndSpreadSpeed    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          HP                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Attenuation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonInstancedDestructibleMeshComponent::Server_DamageFragmentsByRadius(const struct FVector4& WorldImpactVelocity, const struct FVector4& WorldHitPointAndSpreadSpeed, float HP, float Radius, bool Attenuation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.Server_DamageFragmentsByRadius");

	UPhotonInstancedDestructibleMeshComponent_Server_DamageFragmentsByRadius_Params params;
	params.WorldImpactVelocity = WorldImpactVelocity;
	params.WorldHitPointAndSpreadSpeed = WorldHitPointAndSpreadSpeed;
	params.HP = HP;
	params.Radius = Radius;
	params.Attenuation = Attenuation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.ReplaceAllInstances
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FTransform>      InstanceTransforms             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bShouldReturnIndices           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UPhotonInstancedDestructibleMeshComponent::ReplaceAllInstances(TArray<struct FTransform> InstanceTransforms, bool bShouldReturnIndices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.ReplaceAllInstances");

	UPhotonInstancedDestructibleMeshComponent_ReplaceAllInstances_Params params;
	params.InstanceTransforms = InstanceTransforms;
	params.bShouldReturnIndices = bShouldReturnIndices;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.OnRep_ImpactData
// (Final, Native, Public)

void UPhotonInstancedDestructibleMeshComponent::OnRep_ImpactData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.OnRep_ImpactData");

	UPhotonInstancedDestructibleMeshComponent_OnRep_ImpactData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.OnRep_FragmentsState
// (Final, Native, Public)

void UPhotonInstancedDestructibleMeshComponent::OnRep_FragmentsState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.OnRep_FragmentsState");

	UPhotonInstancedDestructibleMeshComponent_OnRep_FragmentsState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.IsFragmentCanDestroy
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            FragmentItemIndex              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonInstancedDestructibleMeshComponent::IsFragmentCanDestroy(int InstanceIndex, int FragmentItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.IsFragmentCanDestroy");

	UPhotonInstancedDestructibleMeshComponent_IsFragmentCanDestroy_Params params;
	params.InstanceIndex = InstanceIndex;
	params.FragmentItemIndex = FragmentItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetPhotonDestructibleMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPhotonDestructibleMesh* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPhotonDestructibleMesh* UPhotonInstancedDestructibleMeshComponent::GetPhotonDestructibleMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetPhotonDestructibleMesh");

	UPhotonInstancedDestructibleMeshComponent_GetPhotonDestructibleMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetInstancesOverlappingSphere
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Center                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSphereInWorldSpace            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UPhotonInstancedDestructibleMeshComponent::GetInstancesOverlappingSphere(const struct FVector& Center, float Radius, bool bSphereInWorldSpace)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetInstancesOverlappingSphere");

	UPhotonInstancedDestructibleMeshComponent_GetInstancesOverlappingSphere_Params params;
	params.Center = Center;
	params.Radius = Radius;
	params.bSphereInWorldSpace = bSphereInWorldSpace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetInstanceItemCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPhotonInstancedDestructibleMeshComponent::GetInstanceItemCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetInstanceItemCount");

	UPhotonInstancedDestructibleMeshComponent_GetInstanceItemCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InstanceIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            FragmentIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           WorldSpace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonInstancedDestructibleMeshComponent::GetFragmentTransform(int InstanceIndex, int FragmentIndex, bool WorldSpace, struct FTransform* OutTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentTransform");

	UPhotonInstancedDestructibleMeshComponent_GetFragmentTransform_Params params;
	params.InstanceIndex = InstanceIndex;
	params.FragmentIndex = FragmentIndex;
	params.WorldSpace = WorldSpace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentsWorldPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            InstanceIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            FragmentIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FragmentPosition               (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonInstancedDestructibleMeshComponent::GetFragmentsWorldPosition(int InstanceIndex, int FragmentIndex, struct FVector* FragmentPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentsWorldPosition");

	UPhotonInstancedDestructibleMeshComponent_GetFragmentsWorldPosition_Params params;
	params.InstanceIndex = InstanceIndex;
	params.FragmentIndex = FragmentIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FragmentPosition != nullptr)
		*FragmentPosition = params.FragmentPosition;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentsNotDamaged
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            InstanceIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    FragmentsNoDamaged             (Parm, OutParm, ZeroConstructor)
// bool                           IsReturnNotDestroyedFragments  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonInstancedDestructibleMeshComponent::GetFragmentsNotDamaged(int InstanceIndex, bool IsReturnNotDestroyedFragments, TArray<int>* FragmentsNoDamaged)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentsNotDamaged");

	UPhotonInstancedDestructibleMeshComponent_GetFragmentsNotDamaged_Params params;
	params.InstanceIndex = InstanceIndex;
	params.IsReturnNotDestroyedFragments = IsReturnNotDestroyedFragments;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FragmentsNoDamaged != nullptr)
		*FragmentsNoDamaged = params.FragmentsNoDamaged;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentsDamaged
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            InstanceIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    FragmentsDamaged               (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonInstancedDestructibleMeshComponent::GetFragmentsDamaged(int InstanceIndex, TArray<int>* FragmentsDamaged)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentsDamaged");

	UPhotonInstancedDestructibleMeshComponent_GetFragmentsDamaged_Params params;
	params.InstanceIndex = InstanceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FragmentsDamaged != nullptr)
		*FragmentsDamaged = params.FragmentsDamaged;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentItemCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPhotonInstancedDestructibleMeshComponent::GetFragmentItemCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentItemCount");

	UPhotonInstancedDestructibleMeshComponent_GetFragmentItemCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentBounds
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            InstanceIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            FragmentIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FBox                    OutBox                         (Parm, OutParm, IsPlainOldData)
// bool                           WorldSpace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonInstancedDestructibleMeshComponent::GetFragmentBounds(int InstanceIndex, int FragmentIndex, bool WorldSpace, struct FBox* OutBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentBounds");

	UPhotonInstancedDestructibleMeshComponent_GetFragmentBounds_Params params;
	params.InstanceIndex = InstanceIndex;
	params.FragmentIndex = FragmentIndex;
	params.WorldSpace = WorldSpace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutBox != nullptr)
		*OutBox = params.OutBox;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFracturedMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPhotonFracturedMesh*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPhotonFracturedMesh* UPhotonInstancedDestructibleMeshComponent::GetFracturedMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFracturedMesh");

	UPhotonInstancedDestructibleMeshComponent_GetFracturedMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstanceWorldSpace
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              WorldTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPhotonInstancedDestructibleMeshComponent::AddInstanceWorldSpace(const struct FTransform& WorldTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstanceWorldSpace");

	UPhotonInstancedDestructibleMeshComponent_AddInstanceWorldSpace_Params params;
	params.WorldTransform = WorldTransform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstances
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FTransform>      InstanceTransforms             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bShouldReturnIndices           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMarkRenderStateDirty          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UPhotonInstancedDestructibleMeshComponent::AddInstances(TArray<struct FTransform> InstanceTransforms, bool bShouldReturnIndices, bool bMarkRenderStateDirty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstances");

	UPhotonInstancedDestructibleMeshComponent_AddInstances_Params params;
	params.InstanceTransforms = InstanceTransforms;
	params.bShouldReturnIndices = bShouldReturnIndices;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstance
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              InstanceTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPhotonInstancedDestructibleMeshComponent::AddInstance(const struct FTransform& InstanceTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstance");

	UPhotonInstancedDestructibleMeshComponent_AddInstance_Params params;
	params.InstanceTransform = InstanceTransform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonHierarchicalInstancedDestructibleMeshComponent.ShowInstances
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    InstanceIndices                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FTransform>      InstanceTransforms             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonHierarchicalInstancedDestructibleMeshComponent::ShowInstances(TArray<int> InstanceIndices, TArray<struct FTransform> InstanceTransforms)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedDestructibleMeshComponent.ShowInstances");

	UPhotonHierarchicalInstancedDestructibleMeshComponent_ShowInstances_Params params;
	params.InstanceIndices = InstanceIndices;
	params.InstanceTransforms = InstanceTransforms;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonHierarchicalInstancedDestructibleMeshComponent.RemoveInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    InstancesToRemove              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonHierarchicalInstancedDestructibleMeshComponent::RemoveInstances(TArray<int> InstancesToRemove)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedDestructibleMeshComponent.RemoveInstances");

	UPhotonHierarchicalInstancedDestructibleMeshComponent_RemoveInstances_Params params;
	params.InstancesToRemove = InstancesToRemove;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.UpdatePickupAndDeadBoxInRange
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)

void UPhotonHierarchicalInstancedStaticMeshComponent::UpdatePickupAndDeadBoxInRange(const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.UpdatePickupAndDeadBoxInRange");

	UPhotonHierarchicalInstancedStaticMeshComponent_UpdatePickupAndDeadBoxInRange_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.SetFracturedMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPhotonDestructibleMesh* InPhotonDestructibleMesh       (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonHierarchicalInstancedStaticMeshComponent::SetFracturedMesh(class UPhotonDestructibleMesh* InPhotonDestructibleMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.SetFracturedMesh");

	UPhotonHierarchicalInstancedStaticMeshComponent_SetFracturedMesh_Params params;
	params.InPhotonDestructibleMesh = InPhotonDestructibleMesh;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.ServerGetInstanceIndexsNotDamaged
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    InstancesNoDamaged             (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonHierarchicalInstancedStaticMeshComponent::ServerGetInstanceIndexsNotDamaged(TArray<int>* InstancesNoDamaged)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.ServerGetInstanceIndexsNotDamaged");

	UPhotonHierarchicalInstancedStaticMeshComponent_ServerGetInstanceIndexsNotDamaged_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstancesNoDamaged != nullptr)
		*InstancesNoDamaged = params.InstancesNoDamaged;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.ServerGetInstanceIndexsDamaged
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    InstancesDamaged               (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonHierarchicalInstancedStaticMeshComponent::ServerGetInstanceIndexsDamaged(TArray<int>* InstancesDamaged)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.ServerGetInstanceIndexsDamaged");

	UPhotonHierarchicalInstancedStaticMeshComponent_ServerGetInstanceIndexsDamaged_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstancesDamaged != nullptr)
		*InstancesDamaged = params.InstancesDamaged;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.Server_InstanceByHp
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// TArray<int>                    InstancedIndex                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  DamagesHp                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 WorldImpactVelocity            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// EDestructionDamageType         DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonHierarchicalInstancedStaticMeshComponent::Server_InstanceByHp(TArray<int> InstancedIndex, TArray<float> DamagesHp, const struct FVector& WorldImpactVelocity, EDestructionDamageType DamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.Server_InstanceByHp");

	UPhotonHierarchicalInstancedStaticMeshComponent_Server_InstanceByHp_Params params;
	params.InstancedIndex = InstancedIndex;
	params.DamagesHp = DamagesHp;
	params.WorldImpactVelocity = WorldImpactVelocity;
	params.DamageType = DamageType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.Server_InstanceAndWorldVelocityByHp
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// TArray<int>                    InstancedIndex                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  DamagesHp                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 WorldImpactPoint               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// EDestructionDamageType         DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonHierarchicalInstancedStaticMeshComponent::Server_InstanceAndWorldVelocityByHp(TArray<int> InstancedIndex, TArray<float> DamagesHp, const struct FVector& WorldImpactPoint, EDestructionDamageType DamageType, float Strength)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.Server_InstanceAndWorldVelocityByHp");

	UPhotonHierarchicalInstancedStaticMeshComponent_Server_InstanceAndWorldVelocityByHp_Params params;
	params.InstancedIndex = InstancedIndex;
	params.DamagesHp = DamagesHp;
	params.WorldImpactPoint = WorldImpactPoint;
	params.DamageType = DamageType;
	params.Strength = Strength;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.Server_DamageFragmentsByRadius
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 WorldImpactVelocity            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 WorldHitPointAndSpreadSpeed    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          HP                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonHierarchicalInstancedStaticMeshComponent::Server_DamageFragmentsByRadius(const struct FVector& WorldImpactVelocity, const struct FVector& WorldHitPointAndSpreadSpeed, float HP, float Radius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.Server_DamageFragmentsByRadius");

	UPhotonHierarchicalInstancedStaticMeshComponent_Server_DamageFragmentsByRadius_Params params;
	params.WorldImpactVelocity = WorldImpactVelocity;
	params.WorldHitPointAndSpreadSpeed = WorldHitPointAndSpreadSpeed;
	params.HP = HP;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnTriggerServerEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults)
// Parameters:
// class ASTExtraVehicleBase*     VehicleActor                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HitComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPhotonHierarchicalInstancedStaticMeshComponent* MeshComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 DesPos                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            TriggerIndex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPhotonHierarchicalInstancedStaticMeshComponent::OnTriggerServerEvent__DelegateSignature(class ASTExtraVehicleBase* VehicleActor, class UPrimitiveComponent* HitComp, class UPhotonHierarchicalInstancedStaticMeshComponent* MeshComponent, const struct FVector& DesPos, int TriggerIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnTriggerServerEvent__DelegateSignature");

	UPhotonHierarchicalInstancedStaticMeshComponent_OnTriggerServerEvent__DelegateSignature_Params params;
	params.VehicleActor = VehicleActor;
	params.HitComp = HitComp;
	params.MeshComponent = MeshComponent;
	params.DesPos = DesPos;
	params.TriggerIndex = TriggerIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnTriggeredByComp
// (Final, Native, Public, HasOutParms)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTriggerEvent           TriggerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void UPhotonHierarchicalInstancedStaticMeshComponent::OnTriggeredByComp(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FTriggerEvent& TriggerEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnTriggeredByComp");

	UPhotonHierarchicalInstancedStaticMeshComponent_OnTriggeredByComp_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.TriggerEvent = TriggerEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnTriggerClientEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults)
// Parameters:
// class ASTExtraVehicleBase*     VehicleActor                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HitComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPhotonHierarchicalInstancedStaticMeshComponent* MeshComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 DesPos                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            TriggerIndex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPhotonHierarchicalInstancedStaticMeshComponent::OnTriggerClientEvent__DelegateSignature(class ASTExtraVehicleBase* VehicleActor, class UPrimitiveComponent* HitComp, class UPhotonHierarchicalInstancedStaticMeshComponent* MeshComponent, const struct FVector& DesPos, int TriggerIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnTriggerClientEvent__DelegateSignature");

	UPhotonHierarchicalInstancedStaticMeshComponent_OnTriggerClientEvent__DelegateSignature_Params params;
	params.VehicleActor = VehicleActor;
	params.HitComp = HitComp;
	params.MeshComponent = MeshComponent;
	params.DesPos = DesPos;
	params.TriggerIndex = TriggerIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnRep_ImpactData
// (Final, Native, Public)

void UPhotonHierarchicalInstancedStaticMeshComponent::OnRep_ImpactData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnRep_ImpactData");

	UPhotonHierarchicalInstancedStaticMeshComponent_OnRep_ImpactData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnLocalVehicleHit
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// TArray<int>                    InstanceIndex                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector4                WorldImpactPointAndSpreadSpeed (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector4                WorldImpactVelocityAndRotateSpeed (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UPhotonHierarchicalInstancedStaticMeshComponent::OnLocalVehicleHit(TArray<int> InstanceIndex, const struct FVector4& WorldImpactPointAndSpreadSpeed, const struct FVector4& WorldImpactVelocityAndRotateSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnLocalVehicleHit");

	UPhotonHierarchicalInstancedStaticMeshComponent_OnLocalVehicleHit_Params params;
	params.InstanceIndex = InstanceIndex;
	params.WorldImpactPointAndSpreadSpeed = WorldImpactPointAndSpreadSpeed;
	params.WorldImpactVelocityAndRotateSpeed = WorldImpactVelocityAndRotateSpeed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GetPhotonDestructibleMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPhotonDestructibleMesh* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPhotonDestructibleMesh* UPhotonHierarchicalInstancedStaticMeshComponent::GetPhotonDestructibleMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GetPhotonDestructibleMesh");

	UPhotonHierarchicalInstancedStaticMeshComponent_GetPhotonDestructibleMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GetInstanceByRadius
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 HitPoint                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Radius                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    InstancedIndex                 (Parm, OutParm, ZeroConstructor)
// EDestructionDamageType         DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPhotonHierarchicalInstancedStaticMeshComponent::GetInstanceByRadius(const struct FVector& HitPoint, float Radius, EDestructionDamageType DamageType, TArray<int>* InstancedIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GetInstanceByRadius");

	UPhotonHierarchicalInstancedStaticMeshComponent_GetInstanceByRadius_Params params;
	params.HitPoint = HitPoint;
	params.Radius = Radius;
	params.DamageType = DamageType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstancedIndex != nullptr)
		*InstancedIndex = params.InstancedIndex;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GetFracturedMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPhotonFracturedMesh*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPhotonFracturedMesh* UPhotonHierarchicalInstancedStaticMeshComponent::GetFracturedMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GetFracturedMesh");

	UPhotonHierarchicalInstancedStaticMeshComponent_GetFracturedMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GenerateEffectInstanceWorldSpace
// (Native, Public, HasOutParms)
// Parameters:
// TArray<int>                    InstanceIndex                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         WorldImpactVelocityAndRotateSpeed (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPhotonHierarchicalInstancedStaticMeshComponent::GenerateEffectInstanceWorldSpace(TArray<int> InstanceIndex, TArray<struct FVector> WorldImpactVelocityAndRotateSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GenerateEffectInstanceWorldSpace");

	UPhotonHierarchicalInstancedStaticMeshComponent_GenerateEffectInstanceWorldSpace_Params params;
	params.InstanceIndex = InstanceIndex;
	params.WorldImpactVelocityAndRotateSpeed = WorldImpactVelocityAndRotateSpeed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GenerateEffectInstanceLocalSpace
// (Native, Public, HasOutParms)
// Parameters:
// TArray<int>                    InstanceIndex                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         LocalImpactVelocityAndRotateSpeed (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPhotonHierarchicalInstancedStaticMeshComponent::GenerateEffectInstanceLocalSpace(TArray<int> InstanceIndex, TArray<struct FVector> LocalImpactVelocityAndRotateSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GenerateEffectInstanceLocalSpace");

	UPhotonHierarchicalInstancedStaticMeshComponent_GenerateEffectInstanceLocalSpace_Params params;
	params.InstanceIndex = InstanceIndex;
	params.LocalImpactVelocityAndRotateSpeed = LocalImpactVelocityAndRotateSpeed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.ClientCorrectVehicleHit
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<int>                    InstanceIndex                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPhotonHierarchicalInstancedStaticMeshComponent::ClientCorrectVehicleHit(TArray<int> InstanceIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.ClientCorrectVehicleHit");

	UPhotonHierarchicalInstancedStaticMeshComponent_ClientCorrectVehicleHit_Params params;
	params.InstanceIndex = InstanceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.UnRegistLuaTick
// (Final, Native, Public, BlueprintCallable)

void UPhotonReplicationSkeletalMeshComponent::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.UnRegistLuaTick");

	UPhotonReplicationSkeletalMeshComponent_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.UnRegisterFromCluster
// (Final, Native, Public, BlueprintCallable)

void UPhotonReplicationSkeletalMeshComponent::UnRegisterFromCluster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.UnRegisterFromCluster");

	UPhotonReplicationSkeletalMeshComponent_UnRegisterFromCluster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetMoveable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationSkeletalMeshComponent::SetMoveable(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetMoveable");

	UPhotonReplicationSkeletalMeshComponent_SetMoveable_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetClusterUniqueID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InClusterID                    (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationSkeletalMeshComponent::SetClusterUniqueID(int InClusterID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetClusterUniqueID");

	UPhotonReplicationSkeletalMeshComponent_SetClusterUniqueID_Params params;
	params.InClusterID = InClusterID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetClusterEntityState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EClusterEntityState            EntityState                    (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationSkeletalMeshComponent::SetClusterEntityState(EClusterEntityState EntityState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetClusterEntityState");

	UPhotonReplicationSkeletalMeshComponent_SetClusterEntityState_Params params;
	params.EntityState = EntityState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.RegistLuaTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationSkeletalMeshComponent::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.RegistLuaTick");

	UPhotonReplicationSkeletalMeshComponent_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.RegisterToCluster
// (Final, Native, Public, BlueprintCallable)

void UPhotonReplicationSkeletalMeshComponent::RegisterToCluster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.RegisterToCluster");

	UPhotonReplicationSkeletalMeshComponent_RegisterToCluster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.MarkPropDirty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PropIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonReplicationSkeletalMeshComponent::MarkPropDirty(int PropIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.MarkPropDirty");

	UPhotonReplicationSkeletalMeshComponent_MarkPropDirty_Params params;
	params.PropIndex = PropIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.ReusableStaticMeshActor.OnSpawn
// (Native, Protected)

void AReusableStaticMeshActor::OnSpawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.ReusableStaticMeshActor.OnSpawn");

	AReusableStaticMeshActor_OnSpawn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.ReusableStaticMeshActor.OnRecycle
// (Native, Protected)

void AReusableStaticMeshActor::OnRecycle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.ReusableStaticMeshActor.OnRecycle");

	AReusableStaticMeshActor_OnRecycle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.ReusableSkeletalMeshActor.OnSpawn
// (Native, Protected)

void AReusableSkeletalMeshActor::OnSpawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.ReusableSkeletalMeshActor.OnSpawn");

	AReusableSkeletalMeshActor_OnSpawn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.ReusableSkeletalMeshActor.OnRecycle
// (Native, Protected)

void AReusableSkeletalMeshActor::OnRecycle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.ReusableSkeletalMeshActor.OnRecycle");

	AReusableSkeletalMeshActor_OnRecycle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.ReusableDestructibleMeshActor.OnSpawn
// (Native, Protected)

void AReusableDestructibleMeshActor::OnSpawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.ReusableDestructibleMeshActor.OnSpawn");

	AReusableDestructibleMeshActor_OnSpawn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.ReusableDestructibleMeshActor.OnRecycle
// (Native, Protected)

void AReusableDestructibleMeshActor::OnRecycle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.ReusableDestructibleMeshActor.OnRecycle");

	AReusableDestructibleMeshActor_OnRecycle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonStaticMeshComponent.SetFracturedMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPhotonDestructibleMesh* InPhotonDestructibleMesh       (Parm, ZeroConstructor, IsPlainOldData)

void UPhotonStaticMeshComponent::SetFracturedMesh(class UPhotonDestructibleMesh* InPhotonDestructibleMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonStaticMeshComponent.SetFracturedMesh");

	UPhotonStaticMeshComponent_SetFracturedMesh_Params params;
	params.InPhotonDestructibleMesh = InPhotonDestructibleMesh;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhotonBlast.PhotonStaticMeshComponent.GetPhotonDestructibleMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPhotonDestructibleMesh* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPhotonDestructibleMesh* UPhotonStaticMeshComponent::GetPhotonDestructibleMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonStaticMeshComponent.GetPhotonDestructibleMesh");

	UPhotonStaticMeshComponent_GetPhotonDestructibleMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhotonBlast.PhotonStaticMeshComponent.GetFracturedMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPhotonFracturedMesh*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPhotonFracturedMesh* UPhotonStaticMeshComponent::GetFracturedMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonStaticMeshComponent.GetFracturedMesh");

	UPhotonStaticMeshComponent_GetFracturedMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

