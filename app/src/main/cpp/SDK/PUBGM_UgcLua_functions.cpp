// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UgcLua.CreativeLuaVM.Step
// (Final, Native, Public, BlueprintCallable)

void UCreativeLuaVM::Step()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.Step");

	UCreativeLuaVM_Step_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.SetPerformanceLog
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVM::SetPerformanceLog(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.SetPerformanceLog");

	UCreativeLuaVM_SetPerformanceLog_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.SetNowRC
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVM::SetNowRC(int idx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.SetNowRC");

	UCreativeLuaVM_SetNowRC_Params params;
	params.idx = idx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.SetCodeOutputDelegate
// (Final, Native, Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, ZeroConstructor)

void UCreativeLuaVM::SetCodeOutputDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.SetCodeOutputDelegate");

	UCreativeLuaVM_SetCodeOutputDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.SetCodeFinishDelegate
// (Final, Native, Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, ZeroConstructor)

void UCreativeLuaVM::SetCodeFinishDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.SetCodeFinishDelegate");

	UCreativeLuaVM_SetCodeFinishDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.Reset
// (Final, Native, Public, BlueprintCallable)

void UCreativeLuaVM::Reset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.Reset");

	UCreativeLuaVM_Reset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.RequireMain
// (Final, Native, Public, BlueprintCallable)

void UCreativeLuaVM::RequireMain()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.RequireMain");

	UCreativeLuaVM_RequireMain_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.RegisterLuaFunctions
// (Final, Native, Public)
// Parameters:
// struct FString                 ModuleName                     (Parm, ZeroConstructor)
// TArray<struct FString>         OpenFunctions                  (Parm, ZeroConstructor)

void UCreativeLuaVM::RegisterLuaFunctions(const struct FString& ModuleName, TArray<struct FString> OpenFunctions)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.RegisterLuaFunctions");

	UCreativeLuaVM_RegisterLuaFunctions_Params params;
	params.ModuleName = ModuleName;
	params.OpenFunctions = OpenFunctions;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.RegisterLuaAPIStringValue
// (Final, Native, Public)
// Parameters:
// struct FString                 ModuleName                     (Parm, ZeroConstructor)
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UCreativeLuaVM::RegisterLuaAPIStringValue(const struct FString& ModuleName, const struct FString& Name, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.RegisterLuaAPIStringValue");

	UCreativeLuaVM_RegisterLuaAPIStringValue_Params params;
	params.ModuleName = ModuleName;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.RegisterLuaAPINumberValue
// (Final, Native, Public)
// Parameters:
// struct FString                 ModuleName                     (Parm, ZeroConstructor)
// struct FString                 Name                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVM::RegisterLuaAPINumberValue(const struct FString& ModuleName, const struct FString& Name, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.RegisterLuaAPINumberValue");

	UCreativeLuaVM_RegisterLuaAPINumberValue_Params params;
	params.ModuleName = ModuleName;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.RegisterLuaAPIBoolValue
// (Final, Native, Public)
// Parameters:
// struct FString                 ModuleName                     (Parm, ZeroConstructor)
// struct FString                 Name                           (Parm, ZeroConstructor)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVM::RegisterLuaAPIBoolValue(const struct FString& ModuleName, const struct FString& Name, bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.RegisterLuaAPIBoolValue");

	UCreativeLuaVM_RegisterLuaAPIBoolValue_Params params;
	params.ModuleName = ModuleName;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.RefreshLastCommentInfo
// (Final, Native, Public, BlueprintCallable)

void UCreativeLuaVM::RefreshLastCommentInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.RefreshLastCommentInfo");

	UCreativeLuaVM_RefreshLastCommentInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.PostInit
// (Native, Public, BlueprintCallable)

void UCreativeLuaVM::PostInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.PostInit");

	UCreativeLuaVM_PostInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.LogBlockExecuteTime
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 BlockID                        (Parm, ZeroConstructor)

void UCreativeLuaVM::LogBlockExecuteTime(const struct FString& BlockID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.LogBlockExecuteTime");

	UCreativeLuaVM_LogBlockExecuteTime_Params params;
	params.BlockID = BlockID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.KillJob
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            JobId                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVM::KillJob(int JobId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.KillJob");

	UCreativeLuaVM_KillJob_Params params;
	params.JobId = JobId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MemLimit                       (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVM::Init(int MemLimit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.Init");

	UCreativeLuaVM_Init_Params params;
	params.MemLimit = MemLimit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.GetNowRC
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeLuaVM::GetNowRC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.GetNowRC");

	UCreativeLuaVM_GetNowRC_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UgcLua.CreativeLuaVM.GetMemoryUsed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeLuaVM::GetMemoryUsed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.GetMemoryUsed");

	UCreativeLuaVM_GetMemoryUsed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UgcLua.CreativeLuaVM.GetLastCommentInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeLuaVM::GetLastCommentInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.GetLastCommentInfo");

	UCreativeLuaVM_GetLastCommentInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UgcLua.CreativeLuaVM.FreezeGameTime
// (Final, Native, Public)
// Parameters:
// bool                           bCond                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVM::FreezeGameTime(bool bCond)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.FreezeGameTime");

	UCreativeLuaVM_FreezeGameTime_Params params;
	params.bCond = bCond;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.ExtractCurrentCode
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            CodeIdx                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 code                           (Parm, OutParm, ZeroConstructor)

void UCreativeLuaVM::ExtractCurrentCode(int* CodeIdx, struct FString* code)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.ExtractCurrentCode");

	UCreativeLuaVM_ExtractCurrentCode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CodeIdx != nullptr)
		*CodeIdx = params.CodeIdx;
	if (code != nullptr)
		*code = params.code;
}


// Function UgcLua.CreativeLuaVM.EnqueueCode
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 RuntimeCode                    (Parm, OutParm, ZeroConstructor)
// int                            CodeUID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeLuaVM::EnqueueCode(struct FString* RuntimeCode, int* CodeUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.EnqueueCode");

	UCreativeLuaVM_EnqueueCode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (RuntimeCode != nullptr)
		*RuntimeCode = params.RuntimeCode;
	if (CodeUID != nullptr)
		*CodeUID = params.CodeUID;

	return params.ReturnValue;
}


// Function UgcLua.CreativeLuaVM.DescribeLuaThread
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeLuaVM::DescribeLuaThread()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.DescribeLuaThread");

	UCreativeLuaVM_DescribeLuaThread_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UgcLua.CreativeLuaVM.Close
// (Final, Native, Public, BlueprintCallable)

void UCreativeLuaVM::Close()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.Close");

	UCreativeLuaVM_Close_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeLuaVM.AllowRequire
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAllow                         (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVM::AllowRequire(bool bAllow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.AllowRequire");

	UCreativeLuaVM_AllowRequire_Params params;
	params.bAllow = bAllow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UgcLua.CreativeEntityInterface.UUID2UObject
// (Native, Public, HasOutParms)
// Parameters:
// int64_t                        UUID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativeEntityInterface::UUID2UObject(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.UUID2UObject");

	UCreativeEntityInterface_UUID2UObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;

	return params.ReturnValue;
}


// Function UgcLua.CreativeEntityInterface.UUID2Type
// (Native, Public, HasOutParms)
// Parameters:
// int64_t                        UUID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EEntityType                    Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SubType                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeEntityInterface::UUID2Type(int64_t* UUID, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.UUID2Type");

	UCreativeEntityInterface_UUID2Type_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;
	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}


// Function UgcLua.CreativeEntityInterface.UUID2Key
// (Native, Public, HasOutParms)
// Parameters:
// int64_t                        UUID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UCreativeEntityInterface::UUID2Key(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.UUID2Key");

	UCreativeEntityInterface_UUID2Key_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;

	return params.ReturnValue;
}


// Function UgcLua.CreativeEntityInterface.RemoveUUID
// (Native, Public, HasOutParms)
// Parameters:
// int64_t                        UUID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreativeEntityInterface::RemoveUUID(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.RemoveUUID");

	UCreativeEntityInterface_RemoveUUID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;
}


// Function UgcLua.CreativeEntityInterface.GetInstanceObjectUUID
// (Native, Public, HasOutParms)
// Parameters:
// int64_t                        UUID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UCreativeEntityInterface::GetInstanceObjectUUID(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.GetInstanceObjectUUID");

	UCreativeEntityInterface_GetInstanceObjectUUID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;

	return params.ReturnValue;
}


// Function UgcLua.CreativeEntityInterface.CreateEntityIfNotExistsFromUObject
// (Native, Public, HasOutParms)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// EEntityType                    Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SubType                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UCreativeEntityInterface::CreateEntityIfNotExistsFromUObject(class UObject* Object, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.CreateEntityIfNotExistsFromUObject");

	UCreativeEntityInterface_CreateEntityIfNotExistsFromUObject_Params params;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}


// Function UgcLua.CreativeEntityInterface.CreateEntityIfNotExistsFromKey
// (Native, Public, HasOutParms)
// Parameters:
// uint32_t                       Key                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EEntityType                    Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SubType                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UCreativeEntityInterface::CreateEntityIfNotExistsFromKey(uint32_t* Key, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.CreateEntityIfNotExistsFromKey");

	UCreativeEntityInterface_CreateEntityIfNotExistsFromKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}


}

