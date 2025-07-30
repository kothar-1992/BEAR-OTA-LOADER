// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PixUILog.PxLogMgr.PxLogToggleSwitchLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EPxLogLevels                   eLogLevel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           beOpen                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPxLogMgr::PxLogToggleSwitchLevel(EPxLogLevels eLogLevel, bool beOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUILog.PxLogMgr.PxLogToggleSwitchLevel");

	UPxLogMgr_PxLogToggleSwitchLevel_Params params;
	params.eLogLevel = eLogLevel;
	params.beOpen = beOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUILog.PxLogMgr.PxLogToggleSwitchGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EPxLogGroups                   eLogGroup                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           beOpen                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPxLogMgr::PxLogToggleSwitchGroup(EPxLogGroups eLogGroup, bool beOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUILog.PxLogMgr.PxLogToggleSwitchGroup");

	UPxLogMgr_PxLogToggleSwitchGroup_Params params;
	params.eLogGroup = eLogGroup;
	params.beOpen = beOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUILog.PxLogMgr.PxLogEnable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           beEnable                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPxLogMgr::PxLogEnable(bool beEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUILog.PxLogMgr.PxLogEnable");

	UPxLogMgr_PxLogEnable_Params params;
	params.beEnable = beEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUILog.PxLogMgr.Get
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPxLogMgr*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPxLogMgr* UPxLogMgr::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUILog.PxLogMgr.Get");

	UPxLogMgr_Get_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUILog.PxLogMgr.DispatchLog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EPxLogGroups                   eLogGroup                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EPxLogLevels                   eLogLevel                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 strLogContent                  (Parm, ZeroConstructor)

void UPxLogMgr::DispatchLog(EPxLogGroups eLogGroup, EPxLogLevels eLogLevel, const struct FString& strLogContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUILog.PxLogMgr.DispatchLog");

	UPxLogMgr_DispatchLog_Params params;
	params.eLogGroup = eLogGroup;
	params.eLogLevel = eLogLevel;
	params.strLogContent = strLogContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

