// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gamelet.Gamelet.UpdateProductConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::UpdateProductConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.UpdateProductConfig");

	UGamelet_UpdateProductConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.StopTick
// (Final, Native, Static, Public, BlueprintCallable)

void UGamelet::StopTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.StopTick");

	UGamelet_StopTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.Gamelet.StartTick
// (Final, Native, Static, Public, BlueprintCallable)

void UGamelet::StartTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.StartTick");

	UGamelet_StartTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.Gamelet.SetTickIntervalSec
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          TickIntervalSec                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGamelet::SetTickIntervalSec(float TickIntervalSec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SetTickIntervalSec");

	UGamelet_SetTickIntervalSec_Params params;
	params.TickIntervalSec = TickIntervalSec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.Gamelet.SetScriptExternalLoadDir
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ExternalLoadDir                (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::SetScriptExternalLoadDir(const struct FString& ExternalLoadDir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SetScriptExternalLoadDir");

	UGamelet_SetScriptExternalLoadDir_Params params;
	params.ExternalLoadDir = ExternalLoadDir;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.SetFont
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 FontName                       (Parm, ZeroConstructor)
// struct FString                 FontPath                       (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::SetFont(const struct FString& FontName, const struct FString& FontPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SetFont");

	UGamelet_SetFont_Params params;
	params.FontName = FontName;
	params.FontPath = FontPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.SetDefaultFont
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 FontName                       (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::SetDefaultFont(const struct FString& FontName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SetDefaultFont");

	UGamelet_SetDefaultFont_Params params;
	params.FontName = FontName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.SetBuiltinResConfig
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FString                 ResConfig                      (Parm, ZeroConstructor)

void UGamelet::SetBuiltinResConfig(const struct FString& ResConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SetBuiltinResConfig");

	UGamelet_SetBuiltinResConfig_Params params;
	params.ResConfig = ResConfig;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.Gamelet.SetAppVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 AppID                          (Parm, ZeroConstructor)
// bool                           Visible                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::SetAppVisibility(const struct FString& AppID, bool Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SetAppVisibility");

	UGamelet_SetAppVisibility_Params params;
	params.AppID = AppID;
	params.Visible = Visible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.SetAppPageVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 AppID                          (Parm, ZeroConstructor)
// struct FString                 AppPage                        (Parm, ZeroConstructor)
// bool                           Visible                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::SetAppPageVisibility(const struct FString& AppID, const struct FString& AppPage, bool Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SetAppPageVisibility");

	UGamelet_SetAppPageVisibility_Params params;
	params.AppID = AppID;
	params.AppPage = AppPage;
	params.Visible = Visible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.SendMessageToSdk
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::SendMessageToSdk(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SendMessageToSdk");

	UGamelet_SendMessageToSdk_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.SendMessageToApp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 AppID                          (Parm, ZeroConstructor)
// struct FString                 Msg                            (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::SendMessageToApp(const struct FString& AppID, const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SendMessageToApp");

	UGamelet_SendMessageToApp_Params params;
	params.AppID = AppID;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.RefreshUserdata
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<struct FString, struct FString> UserData                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::RefreshUserdata(TMap<struct FString, struct FString> UserData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.RefreshUserdata");

	UGamelet_RefreshUserdata_Params params;
	params.UserData = UserData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.OpenBeforeLogin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EGameletEnvironment> Environment                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::OpenBeforeLogin(TEnumAsByte<EGameletEnvironment> Environment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.OpenBeforeLogin");

	UGamelet_OpenBeforeLogin_Params params;
	params.Environment = Environment;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.OpenApp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 AppID                          (Parm, ZeroConstructor)
// struct FString                 OpenArgs                       (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::OpenApp(const struct FString& AppID, const struct FString& OpenArgs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.OpenApp");

	UGamelet_OpenApp_Params params;
	params.AppID = AppID;
	params.OpenArgs = OpenArgs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.Open
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EGameletEnvironment> Environment                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FString, struct FString> UserData                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::Open(TEnumAsByte<EGameletEnvironment> Environment, TMap<struct FString, struct FString> UserData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.Open");

	UGamelet_Open_Params params;
	params.Environment = Environment;
	params.UserData = UserData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameletSettings*        Settings                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::Initialize(class UGameletSettings* Settings)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.Initialize");

	UGamelet_Initialize_Params params;
	params.Settings = Settings;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.GetProductConfig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGamelet::GetProductConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.GetProductConfig");

	UGamelet_GetProductConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.GetGlobalSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameletSettings*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameletSettings* UGamelet::GetGlobalSettings()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.GetGlobalSettings");

	UGamelet_GetGlobalSettings_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.GetBackTrace
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 TraceInfo                      (Parm, OutParm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::GetBackTrace(struct FString* TraceInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.GetBackTrace");

	UGamelet_GetBackTrace_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TraceInfo != nullptr)
		*TraceInfo = params.TraceInfo;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.Get
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGamelet*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGamelet* UGamelet::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.Get");

	UGamelet_Get_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.ExecOnSDKMessage
// (Final, Native, Private)
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::ExecOnSDKMessage(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.ExecOnSDKMessage");

	UGamelet_ExecOnSDKMessage_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.ExecOnReportData
// (Final, Native, Private)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// struct FString                 Data                           (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::ExecOnReportData(const struct FString& EventName, const struct FString& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.ExecOnReportData");

	UGamelet_ExecOnReportData_Params params;
	params.EventName = EventName;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.ExecOnRefreshUserdata
// (Final, Native, Private)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::ExecOnRefreshUserdata()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.ExecOnRefreshUserdata");

	UGamelet_ExecOnRefreshUserdata_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.EnableLog
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                           Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGamelet::EnableLog(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.EnableLog");

	UGamelet_EnableLog_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.Gamelet.Deinitialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::Deinitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.Deinitialize");

	UGamelet_Deinitialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.CollectPixUILogOutput
// (Final, Native, Private)
// Parameters:
// EPxLogGroups                   PixUILogType                   (Parm, ZeroConstructor, IsPlainOldData)
// EPxLogLevels                   PixUILogLevel                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 logContent                     (Parm, ZeroConstructor)

void UGamelet::CollectPixUILogOutput(EPxLogGroups PixUILogType, EPxLogLevels PixUILogLevel, const struct FString& logContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.CollectPixUILogOutput");

	UGamelet_CollectPixUILogOutput_Params params;
	params.PixUILogType = PixUILogType;
	params.PixUILogLevel = PixUILogLevel;
	params.logContent = logContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.Gamelet.CloseAppPage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 AppID                          (Parm, ZeroConstructor)
// struct FString                 AppPage                        (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::CloseAppPage(const struct FString& AppID, const struct FString& AppPage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.CloseAppPage");

	UGamelet_CloseAppPage_Params params;
	params.AppID = AppID;
	params.AppPage = AppPage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.CloseApp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 AppID                          (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::CloseApp(const struct FString& AppID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.CloseApp");

	UGamelet_CloseApp_Params params;
	params.AppID = AppID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.Close
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::Close()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.Close");

	UGamelet_Close_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.Gamelet.AllAssetsGC
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGamelet::AllAssetsGC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.AllAssetsGC");

	UGamelet_AllAssetsGC_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletEnvMgr.OnEnvToGameMessage
// (Final, Native, Public)
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameletEnvMgr::OnEnvToGameMessage(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletEnvMgr.OnEnvToGameMessage");

	UGameletEnvMgr_OnEnvToGameMessage_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletEnvMgr.OnEnvToEntryMessage
// (Final, Native, Public)
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameletEnvMgr::OnEnvToEntryMessage(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletEnvMgr.OnEnvToEntryMessage");

	UGameletEnvMgr_OnEnvToEntryMessage_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletEnvMgr.OnEnvReportData
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// struct FString                 Data                           (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameletEnvMgr::OnEnvReportData(const struct FString& EventName, const struct FString& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletEnvMgr.OnEnvReportData");

	UGameletEnvMgr_OnEnvReportData_Params params;
	params.EventName = EventName;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletEnvMgr.OnEnvRefreshUserdata
// (Final, Native, Public, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameletEnvMgr::OnEnvRefreshUserdata()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletEnvMgr.OnEnvRefreshUserdata");

	UGameletEnvMgr_OnEnvRefreshUserdata_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletEnvMgr.OnEnvLoaded
// (Final, Native, Public)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// int                            ErrorCode                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGameletEnvMgr::OnEnvLoaded(const struct FString& URL, int ErrorCode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletEnvMgr.OnEnvLoaded");

	UGameletEnvMgr_OnEnvLoaded_Params params;
	params.URL = URL;
	params.ErrorCode = ErrorCode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletEnvMgr.OnEnvInternalError
// (Final, Native, Public, Const)
// Parameters:
// int                            ErrorCode                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ErrorMsg                       (Parm, ZeroConstructor)

void UGameletEnvMgr::OnEnvInternalError(int ErrorCode, const struct FString& ErrorMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletEnvMgr.OnEnvInternalError");

	UGameletEnvMgr_OnEnvInternalError_Params params;
	params.ErrorCode = ErrorCode;
	params.ErrorMsg = ErrorMsg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletEnvMgr.GetBackTrace
// (Final, Native, Public, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletEnvMgr::GetBackTrace()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletEnvMgr.GetBackTrace");

	UGameletEnvMgr_GetBackTrace_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletFile.WriteFile
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// struct FGameletArrayBuffer     ArrayBuffer                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameletFile::WriteFile(const struct FString& Path, const struct FGameletArrayBuffer& ArrayBuffer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.WriteFile");

	UGameletFile_WriteFile_Params params;
	params.Path = Path;
	params.ArrayBuffer = ArrayBuffer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletFile.SaveStringToFile
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// struct FString                 Content                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameletFile::SaveStringToFile(const struct FString& Path, const struct FString& Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.SaveStringToFile");

	UGameletFile_SaveStringToFile_Params params;
	params.Path = Path;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletFile.ReadFile
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// struct FGameletArrayBuffer     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameletArrayBuffer UGameletFile::ReadFile(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.ReadFile");

	UGameletFile_ReadFile_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletFile.LoadFileToString
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletFile::LoadFileToString(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.LoadFileToString");

	UGameletFile_LoadFileToString_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletFile.GetFileMd5
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletFile::GetFileMd5(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.GetFileMd5");

	UGameletFile_GetFileMd5_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletFile.FileSize
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UGameletFile::FileSize(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.FileSize");

	UGameletFile_FileSize_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletFile.FileExists
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameletFile::FileExists(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.FileExists");

	UGameletFile_FileExists_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletFile.DirectoryExists
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameletFile::DirectoryExists(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.DirectoryExists");

	UGameletFile_DirectoryExists_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletFile.DeleteFile
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameletFile::DeleteFile(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.DeleteFile");

	UGameletFile_DeleteFile_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletFile.DeleteDirectory
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameletFile::DeleteDirectory(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.DeleteDirectory");

	UGameletFile_DeleteDirectory_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletFile.CreateDirectory
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameletFile::CreateDirectory(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.CreateDirectory");

	UGameletFile_CreateDirectory_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.ToAbsolutePathForWrite
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::ToAbsolutePathForWrite(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.ToAbsolutePathForWrite");

	UGameletPaths_ToAbsolutePathForWrite_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.ToAbsolutePathForRead
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::ToAbsolutePathForRead(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.ToAbsolutePathForRead");

	UGameletPaths_ToAbsolutePathForRead_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.RootDir
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::RootDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.RootDir");

	UGameletPaths_RootDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.ProjectUserDir
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::ProjectUserDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.ProjectUserDir");

	UGameletPaths_ProjectUserDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.ProjectSavedDir
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::ProjectSavedDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.ProjectSavedDir");

	UGameletPaths_ProjectSavedDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.ProjectModsDir
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::ProjectModsDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.ProjectModsDir");

	UGameletPaths_ProjectModsDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.ProjectIntermediateDir
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::ProjectIntermediateDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.ProjectIntermediateDir");

	UGameletPaths_ProjectIntermediateDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.ProjectDir
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::ProjectDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.ProjectDir");

	UGameletPaths_ProjectDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.ProjectContentDir
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::ProjectContentDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.ProjectContentDir");

	UGameletPaths_ProjectContentDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.ProjectConfigDir
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::ProjectConfigDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.ProjectConfigDir");

	UGameletPaths_ProjectConfigDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.LaunchDir
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::LaunchDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.LaunchDir");

	UGameletPaths_LaunchDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.GetPuertsScriptFolderName
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::GetPuertsScriptFolderName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.GetPuertsScriptFolderName");

	UGameletPaths_GetPuertsScriptFolderName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.GetPuertsEntrancePath
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 PakName                        (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::GetPuertsEntrancePath(const struct FString& PakName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.GetPuertsEntrancePath");

	UGameletPaths_GetPuertsEntrancePath_Params params;
	params.PakName = PakName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.GetPuertsAppScriptPath
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 AppFolderName                  (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::GetPuertsAppScriptPath(const struct FString& AppFolderName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.GetPuertsAppScriptPath");

	UGameletPaths_GetPuertsAppScriptPath_Params params;
	params.AppFolderName = AppFolderName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.GetPuertsAppNameByPakName
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 PakName                        (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::GetPuertsAppNameByPakName(const struct FString& PakName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.GetPuertsAppNameByPakName");

	UGameletPaths_GetPuertsAppNameByPakName_Params params;
	params.PakName = PakName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.GetPuertsAppIndexPath
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 AppFolderName                  (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::GetPuertsAppIndexPath(const struct FString& AppFolderName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.GetPuertsAppIndexPath");

	UGameletPaths_GetPuertsAppIndexPath_Params params;
	params.AppFolderName = AppFolderName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.GameletSavedRoot
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::GameletSavedRoot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.GameletSavedRoot");

	UGameletPaths_GameletSavedRoot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.GameletFolderName
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::GameletFolderName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.GameletFolderName");

	UGameletPaths_GameletFolderName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.GameletContentRoot
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::GameletContentRoot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.GameletContentRoot");

	UGameletPaths_GameletContentRoot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPaths.GameletAppArchiveRoot
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 AppID                          (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPaths::GameletAppArchiveRoot(const struct FString& AppID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.GameletAppArchiveRoot");

	UGameletPaths_GameletAppArchiveRoot_Params params;
	params.AppID = AppID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPuertsEnvMgr.OnEnvMessage
// (Final, Native, Public)
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor)

void UGameletPuertsEnvMgr::OnEnvMessage(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsEnvMgr.OnEnvMessage");

	UGameletPuertsEnvMgr_OnEnvMessage_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletPuertsEnvMgr.OnEnvLoaded
// (Final, Native, Public)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// bool                           IsSuccess                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGameletPuertsEnvMgr::OnEnvLoaded(const struct FString& URL, bool IsSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsEnvMgr.OnEnvLoaded");

	UGameletPuertsEnvMgr_OnEnvLoaded_Params params;
	params.URL = URL;
	params.IsSuccess = IsSuccess;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletPuertsEnvMgr.Get
// (Final, Native, Static, Public)
// Parameters:
// class UGameletPuertsEnvMgr*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameletPuertsEnvMgr* UGameletPuertsEnvMgr::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsEnvMgr.Get");

	UGameletPuertsEnvMgr_Get_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPuertsUtilities.UpdateTextureResources
// (Final, Native, Static, Public)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UGameletPuertsUtilities::UpdateTextureResources(class UTexture2D* Texture)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.UpdateTextureResources");

	UGameletPuertsUtilities_UpdateTextureResources_Params params;
	params.Texture = Texture;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletPuertsUtilities.UnmountPak
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 pakPath                        (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameletPuertsUtilities::UnmountPak(const struct FString& pakPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.UnmountPak");

	UGameletPuertsUtilities_UnmountPak_Params params;
	params.pakPath = pakPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPuertsUtilities.RemoveUserWidgetFromGame
// (Final, Native, Static, Public)
// Parameters:
// class UUserWidget*             UserWidget                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 PanelInfo                      (Parm, ZeroConstructor)

void UGameletPuertsUtilities::RemoveUserWidgetFromGame(class UUserWidget* UserWidget, const struct FString& PanelInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.RemoveUserWidgetFromGame");

	UGameletPuertsUtilities_RemoveUserWidgetFromGame_Params params;
	params.UserWidget = UserWidget;
	params.PanelInfo = PanelInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletPuertsUtilities.ReleaseTextureResource
// (Final, Native, Static, Public)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UGameletPuertsUtilities::ReleaseTextureResource(class UTexture2D* Texture)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.ReleaseTextureResource");

	UGameletPuertsUtilities_ReleaseTextureResource_Params params;
	params.Texture = Texture;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletPuertsUtilities.MountPak
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 pakPath                        (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameletPuertsUtilities::MountPak(const struct FString& pakPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.MountPak");

	UGameletPuertsUtilities_MountPak_Params params;
	params.pakPath = pakPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPuertsUtilities.LoadUI
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Ref                            (Parm, ZeroConstructor)
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUserWidget* UGameletPuertsUtilities::LoadUI(const struct FString& Ref, class UObject* Obj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.LoadUI");

	UGameletPuertsUtilities_LoadUI_Params params;
	params.Ref = Ref;
	params.Obj = Obj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPuertsUtilities.LoadImageToTexture2D
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// TEnumAsByte<ETextureGroup>     LODGroup                       (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  IsSRGB                         (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UGameletPuertsUtilities::LoadImageToTexture2D(const struct FString& Path, TEnumAsByte<ETextureGroup> LODGroup, unsigned char IsSRGB)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.LoadImageToTexture2D");

	UGameletPuertsUtilities_LoadImageToTexture2D_Params params;
	params.Path = Path;
	params.LODGroup = LODGroup;
	params.IsSRGB = IsSRGB;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPuertsUtilities.IsWithEditor
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameletPuertsUtilities::IsWithEditor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.IsWithEditor");

	UGameletPuertsUtilities_IsWithEditor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPuertsUtilities.HelloWorld
// (Final, Native, Static, Public)

void UGameletPuertsUtilities::HelloWorld()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.HelloWorld");

	UGameletPuertsUtilities_HelloWorld_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletPuertsUtilities.GetWidgetAnimationByName
// (Final, Native, Static, Public)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UWidgetAnimation*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidgetAnimation* UGameletPuertsUtilities::GetWidgetAnimationByName(class UUserWidget* Widget, const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.GetWidgetAnimationByName");

	UGameletPuertsUtilities_GetWidgetAnimationByName_Params params;
	params.Widget = Widget;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPuertsUtilities.GetSDKVersion
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPuertsUtilities::GetSDKVersion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.GetSDKVersion");

	UGameletPuertsUtilities_GetSDKVersion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPuertsUtilities.GetPlatformDesc
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPuertsUtilities::GetPlatformDesc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.GetPlatformDesc");

	UGameletPuertsUtilities_GetPlatformDesc_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPuertsUtilities.GetNetWorkType
// (Final, Native, Static, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UGameletPuertsUtilities::GetNetWorkType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.GetNetWorkType");

	UGameletPuertsUtilities_GetNetWorkType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPuertsUtilities.GetHardwareInfo
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPuertsUtilities::GetHardwareInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.GetHardwareInfo");

	UGameletPuertsUtilities_GetHardwareInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPuertsUtilities.GetEngineVersion
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameletPuertsUtilities::GetEngineVersion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.GetEngineVersion");

	UGameletPuertsUtilities_GetEngineVersion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletPuertsUtilities.FlushPuertsVMMessages
// (Final, Native, Static, Public)

void UGameletPuertsUtilities::FlushPuertsVMMessages()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.FlushPuertsVMMessages");

	UGameletPuertsUtilities_FlushPuertsVMMessages_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletPuertsUtilities.AddUserWidgetToGame
// (Final, Native, Static, Public)
// Parameters:
// class UUserWidget*             UserWidget                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 PanelInfo                      (Parm, ZeroConstructor)

void UGameletPuertsUtilities::AddUserWidgetToGame(class UUserWidget* UserWidget, const struct FString& PanelInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.AddUserWidgetToGame");

	UGameletPuertsUtilities_AddUserWidgetToGame_Params params;
	params.UserWidget = UserWidget;
	params.PanelInfo = PanelInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletSettings.IsValidSetting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameletSettings::IsValidSetting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletSettings.IsValidSetting");

	UGameletSettings_IsValidSetting_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletSettings.Get
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameletSettings*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameletSettings* UGameletSettings::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletSettings.Get");

	UGameletSettings_Get_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletWindow.OnPxWidgetScriptStateInit
// (Final, Native, Private)

void UGameletWindow::OnPxWidgetScriptStateInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWindow.OnPxWidgetScriptStateInit");

	UGameletWindow_OnPxWidgetScriptStateInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletWindow.OnPxWidgetScriptStateDone
// (Final, Native, Private)

void UGameletWindow::OnPxWidgetScriptStateDone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWindow.OnPxWidgetScriptStateDone");

	UGameletWindow_OnPxWidgetScriptStateDone_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletWindow.OnPxWidgetRequestOpen
// (Final, Native, Private, Const)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 Features                       (Parm, ZeroConstructor)
// bool                           bReplace                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameletWindow::OnPxWidgetRequestOpen(const struct FString& URL, const struct FString& Name, const struct FString& Features, bool bReplace)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWindow.OnPxWidgetRequestOpen");

	UGameletWindow_OnPxWidgetRequestOpen_Params params;
	params.URL = URL;
	params.Name = Name;
	params.Features = Features;
	params.bReplace = bReplace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gamelet.GameletWindow.OnPxWidgetMessage
// (Final, Native, Private, Const)
// Parameters:
// struct FString                 Msg                            (Parm, ZeroConstructor)

void UGameletWindow::OnPxWidgetMessage(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWindow.OnPxWidgetMessage");

	UGameletWindow_OnPxWidgetMessage_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletWindow.OnPxWidgetLoaded
// (Final, Native, Private, Const)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// int                            ErrorCode                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGameletWindow::OnPxWidgetLoaded(const struct FString& URL, int ErrorCode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWindow.OnPxWidgetLoaded");

	UGameletWindow_OnPxWidgetLoaded_Params params;
	params.URL = URL;
	params.ErrorCode = ErrorCode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletWindow.OnPxWidgetInternalError
// (Final, Native, Private, Const)
// Parameters:
// int                            ErrorCode                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ErrorMsg                       (Parm, ZeroConstructor)

void UGameletWindow::OnPxWidgetInternalError(int ErrorCode, const struct FString& ErrorMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWindow.OnPxWidgetInternalError");

	UGameletWindow_OnPxWidgetInternalError_Params params;
	params.ErrorCode = ErrorCode;
	params.ErrorMsg = ErrorMsg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Gamelet.GameletWindow.OnPxWidgetClose
// (Final, Native, Private, Const)

void UGameletWindow::OnPxWidgetClose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWindow.OnPxWidgetClose");

	UGameletWindow_OnPxWidgetClose_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

