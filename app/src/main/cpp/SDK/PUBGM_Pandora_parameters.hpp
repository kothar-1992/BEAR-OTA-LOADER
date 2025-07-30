#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Pandora.BulletScreen.Stop
struct UBulletScreen_Stop_Params
{
};

// Function Pandora.BulletScreen.Start
struct UBulletScreen_Start_Params
{
};

// Function Pandora.BulletScreen.Resume
struct UBulletScreen_Resume_Params
{
};

// Function Pandora.BulletScreen.Pause
struct UBulletScreen_Pause_Params
{
};

// Function Pandora.BulletScreen.AddBullets
struct UBulletScreen_AddBullets_Params
{
	TArray<struct FString>                             Content;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Pandora.BulletScreen.AddBullet
struct UBulletScreen_AddBullet_Params
{
	struct FString                                     Content;                                                  // (Parm, ZeroConstructor)
};

// Function Pandora.GameletSDKDelegateHandler.ExecOnViewCreated
struct UGameletSDKDelegateHandler_ExecOnViewCreated_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     WinInfo;                                                  // (Parm, ZeroConstructor)
};

// Function Pandora.GameletSDKDelegateHandler.ExecOnViewAboutToDestroy
struct UGameletSDKDelegateHandler_ExecOnViewAboutToDestroy_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     WinInfo;                                                  // (Parm, ZeroConstructor)
};

// Function Pandora.GameletSDKDelegateHandler.ExecOnSDKMessage
struct UGameletSDKDelegateHandler_ExecOnSDKMessage_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pandora.GameletSDKDelegateHandler.ExecOnRefreshUserdata
struct UGameletSDKDelegateHandler_ExecOnRefreshUserdata_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pandora.PLatentDelegate.OnLatentCallback
struct UPLatentDelegate_OnLatentCallback_Params
{
	int                                                threadRef;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pandora.PLuaActor.CallLuaMember
struct APLuaActor_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FPLuaBPVar>                          Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPLuaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pandora.PLuaPawn.CallLuaMember
struct APLuaPawn_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FPLuaBPVar>                          Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPLuaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pandora.PLuaCharacter.CallLuaMember
struct APLuaCharacter_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FPLuaBPVar>                          Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPLuaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pandora.PLuaController.CallLuaMember
struct APLuaController_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FPLuaBPVar>                          Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPLuaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pandora.PLuaPlayerController.CallLuaMember
struct APLuaPlayerController_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FPLuaBPVar>                          Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPLuaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pandora.PLuaActorComponent.CallLuaMember
struct UPLuaActorComponent_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FPLuaBPVar>                          Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPLuaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pandora.PLuaGameModeBase.CallLuaMember
struct APLuaGameModeBase_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FPLuaBPVar>                          Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPLuaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pandora.PLuaHUD.CallLuaMember
struct APLuaHUD_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FPLuaBPVar>                          Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPLuaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pandora.PLuaBlueprintLibrary.GetStringFromVar
struct UPLuaBlueprintLibrary_GetStringFromVar_Params
{
	struct FPLuaBPVar                                  Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Pandora.PLuaBlueprintLibrary.GetObjectFromVar
struct UPLuaBlueprintLibrary_GetObjectFromVar_Params
{
	struct FPLuaBPVar                                  Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pandora.PLuaBlueprintLibrary.GetNumberFromVar
struct UPLuaBlueprintLibrary_GetNumberFromVar_Params
{
	struct FPLuaBPVar                                  Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pandora.PLuaBlueprintLibrary.GetIntFromVar
struct UPLuaBlueprintLibrary_GetIntFromVar_Params
{
	struct FPLuaBPVar                                  Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pandora.PLuaBlueprintLibrary.GetBoolFromVar
struct UPLuaBlueprintLibrary_GetBoolFromVar_Params
{
	struct FPLuaBPVar                                  Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Pandora.PLuaBlueprintLibrary.CreateVarFromString
struct UPLuaBlueprintLibrary_CreateVarFromString_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	struct FPLuaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pandora.PLuaBlueprintLibrary.CreateVarFromObject
struct UPLuaBlueprintLibrary_CreateVarFromObject_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPLuaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pandora.PLuaBlueprintLibrary.CreateVarFromNumber
struct UPLuaBlueprintLibrary_CreateVarFromNumber_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPLuaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pandora.PLuaBlueprintLibrary.CreateVarFromInt
struct UPLuaBlueprintLibrary_CreateVarFromInt_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPLuaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pandora.PLuaBlueprintLibrary.CreateVarFromBool
struct UPLuaBlueprintLibrary_CreateVarFromBool_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPLuaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pandora.PLuaBlueprintLibrary.CallToLuaWithArgs
struct UPLuaBlueprintLibrary_CallToLuaWithArgs_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FPLuaBPVar>                          Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
	struct FPLuaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pandora.PLuaBlueprintLibrary.CallToLua
struct UPLuaBlueprintLibrary_CallToLua_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
	struct FPLuaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pandora.PLuaDelegate.EventTrigger
struct UPLuaDelegate_EventTrigger_Params
{
};

// Function Pandora.PLuaUserWidget.CallLuaMember
struct UPLuaUserWidget_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FPLuaBPVar>                          Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FPLuaBPVar                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pandora.PPixUILogAdapter.OnPixUILog
struct UPPixUILogAdapter_OnPixUILog_Params
{
	int                                                InLogType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InLogLevel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InLogContent;                                             // (Parm, ZeroConstructor)
};

// Function Pandora.PRichText.SetText
struct UPRichText_SetText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function Pandora.PRichText.GetText
struct UPRichText_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Pandora.WaterfallScrollView.ScrollToStart
struct UWaterfallScrollView_ScrollToStart_Params
{
};

// Function Pandora.WaterfallScrollView.RefreshLayout
struct UWaterfallScrollView_RefreshLayout_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Pandora.WaterfallScrollView.Fill
struct UWaterfallScrollView_Fill_Params
{
};

// Function Pandora.WaterfallScrollView.Clear
struct UWaterfallScrollView_Clear_Params
{
};

}

