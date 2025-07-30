// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pandora.BulletScreen.Stop
// (Final, Native, Public, BlueprintCallable)

void UBulletScreen::Stop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.BulletScreen.Stop");

	UBulletScreen_Stop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Pandora.BulletScreen.Start
// (Final, Native, Public, BlueprintCallable)

void UBulletScreen::Start()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.BulletScreen.Start");

	UBulletScreen_Start_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Pandora.BulletScreen.Resume
// (Final, Native, Public, BlueprintCallable)

void UBulletScreen::Resume()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.BulletScreen.Resume");

	UBulletScreen_Resume_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Pandora.BulletScreen.Pause
// (Final, Native, Public, BlueprintCallable)

void UBulletScreen::Pause()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.BulletScreen.Pause");

	UBulletScreen_Pause_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Pandora.BulletScreen.AddBullets
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBulletScreen::AddBullets(TArray<struct FString> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.BulletScreen.AddBullets");

	UBulletScreen_AddBullets_Params params;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Pandora.BulletScreen.AddBullet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Content                        (Parm, ZeroConstructor)

void UBulletScreen::AddBullet(const struct FString& Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.BulletScreen.AddBullet");

	UBulletScreen_AddBullet_Params params;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Pandora.GameletSDKDelegateHandler.ExecOnViewCreated
// (Final, Native, Public)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 WinInfo                        (Parm, ZeroConstructor)

void UGameletSDKDelegateHandler::ExecOnViewCreated(class UUserWidget* Widget, const struct FString& WinInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.GameletSDKDelegateHandler.ExecOnViewCreated");

	UGameletSDKDelegateHandler_ExecOnViewCreated_Params params;
	params.Widget = Widget;
	params.WinInfo = WinInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Pandora.GameletSDKDelegateHandler.ExecOnViewAboutToDestroy
// (Final, Native, Public)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 WinInfo                        (Parm, ZeroConstructor)

void UGameletSDKDelegateHandler::ExecOnViewAboutToDestroy(class UUserWidget* Widget, const struct FString& WinInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.GameletSDKDelegateHandler.ExecOnViewAboutToDestroy");

	UGameletSDKDelegateHandler_ExecOnViewAboutToDestroy_Params params;
	params.Widget = Widget;
	params.WinInfo = WinInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Pandora.GameletSDKDelegateHandler.ExecOnSDKMessage
// (Final, Native, Public)
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameletSDKDelegateHandler::ExecOnSDKMessage(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.GameletSDKDelegateHandler.ExecOnSDKMessage");

	UGameletSDKDelegateHandler_ExecOnSDKMessage_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.GameletSDKDelegateHandler.ExecOnRefreshUserdata
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameletSDKDelegateHandler::ExecOnRefreshUserdata()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.GameletSDKDelegateHandler.ExecOnRefreshUserdata");

	UGameletSDKDelegateHandler_ExecOnRefreshUserdata_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLatentDelegate.OnLatentCallback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            threadRef                      (Parm, ZeroConstructor, IsPlainOldData)

void UPLatentDelegate::OnLatentCallback(int threadRef)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLatentDelegate.OnLatentCallback");

	UPLatentDelegate_OnLatentCallback_Params params;
	params.threadRef = threadRef;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Pandora.PLuaActor.CallLuaMember
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FPLuaBPVar>      Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPLuaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPLuaBPVar APLuaActor::CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaActor.CallLuaMember");

	APLuaActor_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaPawn.CallLuaMember
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FPLuaBPVar>      Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPLuaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPLuaBPVar APLuaPawn::CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaPawn.CallLuaMember");

	APLuaPawn_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaCharacter.CallLuaMember
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FPLuaBPVar>      Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPLuaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPLuaBPVar APLuaCharacter::CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaCharacter.CallLuaMember");

	APLuaCharacter_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaController.CallLuaMember
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FPLuaBPVar>      Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPLuaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPLuaBPVar APLuaController::CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaController.CallLuaMember");

	APLuaController_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaPlayerController.CallLuaMember
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FPLuaBPVar>      Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPLuaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPLuaBPVar APLuaPlayerController::CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaPlayerController.CallLuaMember");

	APLuaPlayerController_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaActorComponent.CallLuaMember
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FPLuaBPVar>      Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPLuaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPLuaBPVar UPLuaActorComponent::CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaActorComponent.CallLuaMember");

	UPLuaActorComponent_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaGameModeBase.CallLuaMember
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FPLuaBPVar>      Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPLuaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPLuaBPVar APLuaGameModeBase::CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaGameModeBase.CallLuaMember");

	APLuaGameModeBase_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaHUD.CallLuaMember
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FPLuaBPVar>      Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPLuaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPLuaBPVar APLuaHUD::CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaHUD.CallLuaMember");

	APLuaHUD_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaBlueprintLibrary.GetStringFromVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FPLuaBPVar              Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPLuaBlueprintLibrary::GetStringFromVar(const struct FPLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.GetStringFromVar");

	UPLuaBlueprintLibrary_GetStringFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaBlueprintLibrary.GetObjectFromVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FPLuaBPVar              Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UPLuaBlueprintLibrary::GetObjectFromVar(const struct FPLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.GetObjectFromVar");

	UPLuaBlueprintLibrary_GetObjectFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaBlueprintLibrary.GetNumberFromVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FPLuaBPVar              Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPLuaBlueprintLibrary::GetNumberFromVar(const struct FPLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.GetNumberFromVar");

	UPLuaBlueprintLibrary_GetNumberFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaBlueprintLibrary.GetIntFromVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FPLuaBPVar              Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPLuaBlueprintLibrary::GetIntFromVar(const struct FPLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.GetIntFromVar");

	UPLuaBlueprintLibrary_GetIntFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaBlueprintLibrary.GetBoolFromVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FPLuaBPVar              Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPLuaBlueprintLibrary::GetBoolFromVar(const struct FPLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.GetBoolFromVar");

	UPLuaBlueprintLibrary_GetBoolFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaBlueprintLibrary.CreateVarFromString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)
// struct FPLuaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPLuaBPVar UPLuaBlueprintLibrary::CreateVarFromString(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.CreateVarFromString");

	UPLuaBlueprintLibrary_CreateVarFromString_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaBlueprintLibrary.CreateVarFromObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPLuaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPLuaBPVar UPLuaBlueprintLibrary::CreateVarFromObject(class UObject* WorldContextObject, class UObject* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.CreateVarFromObject");

	UPLuaBlueprintLibrary_CreateVarFromObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaBlueprintLibrary.CreateVarFromNumber
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPLuaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPLuaBPVar UPLuaBlueprintLibrary::CreateVarFromNumber(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.CreateVarFromNumber");

	UPLuaBlueprintLibrary_CreateVarFromNumber_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaBlueprintLibrary.CreateVarFromInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPLuaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPLuaBPVar UPLuaBlueprintLibrary::CreateVarFromInt(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.CreateVarFromInt");

	UPLuaBlueprintLibrary_CreateVarFromInt_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaBlueprintLibrary.CreateVarFromBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPLuaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPLuaBPVar UPLuaBlueprintLibrary::CreateVarFromBool(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.CreateVarFromBool");

	UPLuaBlueprintLibrary_CreateVarFromBool_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaBlueprintLibrary.CallToLuaWithArgs
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FPLuaBPVar>      Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 StateName                      (Parm, ZeroConstructor)
// struct FPLuaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPLuaBPVar UPLuaBlueprintLibrary::CallToLuaWithArgs(class UObject* WorldContextObject, const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args, const struct FString& StateName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.CallToLuaWithArgs");

	UPLuaBlueprintLibrary_CallToLuaWithArgs_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FunctionName = FunctionName;
	params.Args = Args;
	params.StateName = StateName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaBlueprintLibrary.CallToLua
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// struct FString                 StateName                      (Parm, ZeroConstructor)
// struct FPLuaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPLuaBPVar UPLuaBlueprintLibrary::CallToLua(class UObject* WorldContextObject, const struct FString& FunctionName, const struct FString& StateName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.CallToLua");

	UPLuaBlueprintLibrary_CallToLua_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FunctionName = FunctionName;
	params.StateName = StateName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PLuaDelegate.EventTrigger
// (Final, Native, Public, BlueprintCallable)

void UPLuaDelegate::EventTrigger()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaDelegate.EventTrigger");

	UPLuaDelegate_EventTrigger_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Pandora.PLuaUserWidget.CallLuaMember
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FPLuaBPVar>      Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FPLuaBPVar              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPLuaBPVar UPLuaUserWidget::CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaUserWidget.CallLuaMember");

	UPLuaUserWidget_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.PPixUILogAdapter.OnPixUILog
// (Final, Native, Private)
// Parameters:
// int                            InLogType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            InLogLevel                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InLogContent                   (Parm, ZeroConstructor)

void UPPixUILogAdapter::OnPixUILog(int InLogType, int InLogLevel, const struct FString& InLogContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PPixUILogAdapter.OnPixUILog");

	UPPixUILogAdapter_OnPixUILog_Params params;
	params.InLogType = InLogType;
	params.InLogLevel = InLogLevel;
	params.InLogContent = InLogContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Pandora.PRichText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)

void UPRichText::SetText(const struct FText& InText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PRichText.SetText");

	UPRichText_SetText_Params params;
	params.InText = InText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Pandora.PRichText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPRichText::GetText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PRichText.GetText");

	UPRichText_GetText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Pandora.WaterfallScrollView.ScrollToStart
// (Final, Native, Public, BlueprintCallable)

void UWaterfallScrollView::ScrollToStart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.WaterfallScrollView.ScrollToStart");

	UWaterfallScrollView_ScrollToStart_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Pandora.WaterfallScrollView.RefreshLayout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UWaterfallScrollView::RefreshLayout(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.WaterfallScrollView.RefreshLayout");

	UWaterfallScrollView_RefreshLayout_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Pandora.WaterfallScrollView.Fill
// (Final, Native, Public, BlueprintCallable)

void UWaterfallScrollView::Fill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.WaterfallScrollView.Fill");

	UWaterfallScrollView_Fill_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Pandora.WaterfallScrollView.Clear
// (Final, Native, Public, BlueprintCallable)

void UWaterfallScrollView::Clear()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.WaterfallScrollView.Clear");

	UWaterfallScrollView_Clear_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

