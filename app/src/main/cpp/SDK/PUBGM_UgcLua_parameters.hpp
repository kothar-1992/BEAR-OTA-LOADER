#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UgcLua.CreativeLuaVM.Step
struct UCreativeLuaVM_Step_Params
{
};

// Function UgcLua.CreativeLuaVM.SetPerformanceLog
struct UCreativeLuaVM_SetPerformanceLog_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UgcLua.CreativeLuaVM.SetNowRC
struct UCreativeLuaVM_SetNowRC_Params
{
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UgcLua.CreativeLuaVM.SetCodeOutputDelegate
struct UCreativeLuaVM_SetCodeOutputDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, ZeroConstructor)
};

// Function UgcLua.CreativeLuaVM.SetCodeFinishDelegate
struct UCreativeLuaVM_SetCodeFinishDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, ZeroConstructor)
};

// Function UgcLua.CreativeLuaVM.Reset
struct UCreativeLuaVM_Reset_Params
{
};

// Function UgcLua.CreativeLuaVM.RequireMain
struct UCreativeLuaVM_RequireMain_Params
{
};

// Function UgcLua.CreativeLuaVM.RegisterLuaFunctions
struct UCreativeLuaVM_RegisterLuaFunctions_Params
{
	struct FString                                     ModuleName;                                               // (Parm, ZeroConstructor)
	TArray<struct FString>                             OpenFunctions;                                            // (Parm, ZeroConstructor)
};

// Function UgcLua.CreativeLuaVM.RegisterLuaAPIStringValue
struct UCreativeLuaVM_RegisterLuaAPIStringValue_Params
{
	struct FString                                     ModuleName;                                               // (Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function UgcLua.CreativeLuaVM.RegisterLuaAPINumberValue
struct UCreativeLuaVM_RegisterLuaAPINumberValue_Params
{
	struct FString                                     ModuleName;                                               // (Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UgcLua.CreativeLuaVM.RegisterLuaAPIBoolValue
struct UCreativeLuaVM_RegisterLuaAPIBoolValue_Params
{
	struct FString                                     ModuleName;                                               // (Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UgcLua.CreativeLuaVM.RefreshLastCommentInfo
struct UCreativeLuaVM_RefreshLastCommentInfo_Params
{
};

// Function UgcLua.CreativeLuaVM.PostInit
struct UCreativeLuaVM_PostInit_Params
{
};

// Function UgcLua.CreativeLuaVM.LogBlockExecuteTime
struct UCreativeLuaVM_LogBlockExecuteTime_Params
{
	struct FString                                     BlockID;                                                  // (Parm, ZeroConstructor)
};

// Function UgcLua.CreativeLuaVM.KillJob
struct UCreativeLuaVM_KillJob_Params
{
	int                                                JobId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UgcLua.CreativeLuaVM.Init
struct UCreativeLuaVM_Init_Params
{
	int                                                MemLimit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UgcLua.CreativeLuaVM.GetNowRC
struct UCreativeLuaVM_GetNowRC_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UgcLua.CreativeLuaVM.GetMemoryUsed
struct UCreativeLuaVM_GetMemoryUsed_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UgcLua.CreativeLuaVM.GetLastCommentInfo
struct UCreativeLuaVM_GetLastCommentInfo_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UgcLua.CreativeLuaVM.FreezeGameTime
struct UCreativeLuaVM_FreezeGameTime_Params
{
	bool                                               bCond;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UgcLua.CreativeLuaVM.ExtractCurrentCode
struct UCreativeLuaVM_ExtractCurrentCode_Params
{
	int                                                CodeIdx;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     code;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function UgcLua.CreativeLuaVM.EnqueueCode
struct UCreativeLuaVM_EnqueueCode_Params
{
	struct FString                                     RuntimeCode;                                              // (Parm, OutParm, ZeroConstructor)
	int                                                CodeUID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UgcLua.CreativeLuaVM.DescribeLuaThread
struct UCreativeLuaVM_DescribeLuaThread_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UgcLua.CreativeLuaVM.Close
struct UCreativeLuaVM_Close_Params
{
};

// Function UgcLua.CreativeLuaVM.AllowRequire
struct UCreativeLuaVM_AllowRequire_Params
{
	bool                                               bAllow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UgcLua.CreativeEntityInterface.UUID2UObject
struct UCreativeEntityInterface_UUID2UObject_Params
{
	int64_t                                            UUID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UgcLua.CreativeEntityInterface.UUID2Type
struct UCreativeEntityInterface_UUID2Type_Params
{
	int64_t                                            UUID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EEntityType                                        Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UgcLua.CreativeEntityInterface.UUID2Key
struct UCreativeEntityInterface_UUID2Key_Params
{
	int64_t                                            UUID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UgcLua.CreativeEntityInterface.RemoveUUID
struct UCreativeEntityInterface_RemoveUUID_Params
{
	int64_t                                            UUID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UgcLua.CreativeEntityInterface.GetInstanceObjectUUID
struct UCreativeEntityInterface_GetInstanceObjectUUID_Params
{
	int64_t                                            UUID;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UgcLua.CreativeEntityInterface.CreateEntityIfNotExistsFromUObject
struct UCreativeEntityInterface_CreateEntityIfNotExistsFromUObject_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EEntityType                                        Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UgcLua.CreativeEntityInterface.CreateEntityIfNotExistsFromKey
struct UCreativeEntityInterface_CreateEntityIfNotExistsFromKey_Params
{
	uint32_t                                           Key;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EEntityType                                        Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

