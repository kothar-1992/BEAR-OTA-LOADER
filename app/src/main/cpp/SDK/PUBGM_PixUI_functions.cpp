// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PixUI.PixUIBPLibrary.PixUI_Version
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIBPLibrary::PixUI_Version()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_Version");

	UPixUIBPLibrary_PixUI_Version_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_Tick
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          fDeltaTime                     (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_Tick(float fDeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_Tick");

	UPixUIBPLibrary_PixUI_Tick_Params params;
	params.fDeltaTime = fDeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_StartupEx
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strCachePathForWrite           (Parm, ZeroConstructor)
// bool                           bSupportAsyncModel             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_StartupEx(const struct FString& strCachePathForWrite, bool bSupportAsyncModel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_StartupEx");

	UPixUIBPLibrary_PixUI_StartupEx_Params params;
	params.strCachePathForWrite = strCachePathForWrite;
	params.bSupportAsyncModel = bSupportAsyncModel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_Startup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strCachePathForWrite           (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_Startup(const struct FString& strCachePathForWrite)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_Startup");

	UPixUIBPLibrary_PixUI_Startup_Params params;
	params.strCachePathForWrite = strCachePathForWrite;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_Shutdown
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_Shutdown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_Shutdown");

	UPixUIBPLibrary_PixUI_Shutdown_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetTickIntervalSec
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          fTickIntervalSec               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetTickIntervalSec(float fTickIntervalSec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetTickIntervalSec");

	UPixUIBPLibrary_PixUI_SetTickIntervalSec_Params params;
	params.fTickIntervalSec = fTickIntervalSec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetSupportTextShape
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           beSupportTextShape             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetSupportTextShape(bool beSupportTextShape)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetSupportTextShape");

	UPixUIBPLibrary_PixUI_SetSupportTextShape_Params params;
	params.beSupportTextShape = beSupportTextShape;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetSupportEngineFont
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bSupportEngineFont             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetSupportEngineFont(bool bSupportEngineFont)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetSupportEngineFont");

	UPixUIBPLibrary_PixUI_SetSupportEngineFont_Params params;
	params.bSupportEngineFont = bSupportEngineFont;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetSecretKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strSecretKey                   (Parm, ZeroConstructor)

void UPixUIBPLibrary::PixUI_SetSecretKey(const struct FString& strSecretKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetSecretKey");

	UPixUIBPLibrary_PixUI_SetSecretKey_Params params;
	params.strSecretKey = strSecretKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetPxLibDefaultVersionTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            nNewPxLibVersionTag            (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetPxLibDefaultVersionTag(int nNewPxLibVersionTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetPxLibDefaultVersionTag");

	UPixUIBPLibrary_PixUI_SetPxLibDefaultVersionTag_Params params;
	params.nNewPxLibVersionTag = nNewPxLibVersionTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxLayerId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            nMaxLayerId                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetPixUIMaxLayerId(int nMaxLayerId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxLayerId");

	UPixUIBPLibrary_PixUI_SetPixUIMaxLayerId_Params params;
	params.nMaxLayerId = nMaxLayerId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxDynamicTextureTotalSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            nMaxDynamicTextureTotalSize    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetPixUIMaxDynamicTextureTotalSize(int nMaxDynamicTextureTotalSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxDynamicTextureTotalSize");

	UPixUIBPLibrary_PixUI_SetPixUIMaxDynamicTextureTotalSize_Params params;
	params.nMaxDynamicTextureTotalSize = nMaxDynamicTextureTotalSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxDynamicTextureGCSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            nMaxDynamicTextureGCSize       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetPixUIMaxDynamicTextureGCSize(int nMaxDynamicTextureGCSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxDynamicTextureGCSize");

	UPixUIBPLibrary_PixUI_SetPixUIMaxDynamicTextureGCSize_Params params;
	params.nMaxDynamicTextureGCSize = nMaxDynamicTextureGCSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxDynamicTextureGCRate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          fMaxGCRate                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetPixUIMaxDynamicTextureGCRate(float fMaxGCRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxDynamicTextureGCRate");

	UPixUIBPLibrary_PixUI_SetPixUIMaxDynamicTextureGCRate_Params params;
	params.fMaxGCRate = fMaxGCRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetMobileUseTouchEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bUseTouchEvent                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetMobileUseTouchEvent(bool bUseTouchEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetMobileUseTouchEvent");

	UPixUIBPLibrary_PixUI_SetMobileUseTouchEvent_Params params;
	params.bUseTouchEvent = bUseTouchEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetMatRootPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strMatRootPath                 (Parm, ZeroConstructor)

void UPixUIBPLibrary::PixUI_SetMatRootPath(const struct FString& strMatRootPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetMatRootPath");

	UPixUIBPLibrary_PixUI_SetMatRootPath_Params params;
	params.strMatRootPath = strMatRootPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetMatBasePath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strMatBasePath                 (Parm, ZeroConstructor)

void UPixUIBPLibrary::PixUI_SetMatBasePath(const struct FString& strMatBasePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetMatBasePath");

	UPixUIBPLibrary_PixUI_SetMatBasePath_Params params;
	params.strMatBasePath = strMatBasePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetMatAsyncLoad
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bMatAsyncLoad                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetMatAsyncLoad(bool bMatAsyncLoad)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetMatAsyncLoad");

	UPixUIBPLibrary_PixUI_SetMatAsyncLoad_Params params;
	params.bMatAsyncLoad = bMatAsyncLoad;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetFontTypeFaceName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strFontName                    (Parm, ZeroConstructor)
// EPxFontFaceType                ePxFontTypeFace                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 strFontTypeFaceName            (Parm, ZeroConstructor)

void UPixUIBPLibrary::PixUI_SetFontTypeFaceName(const struct FString& strFontName, EPxFontFaceType ePxFontTypeFace, const struct FString& strFontTypeFaceName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetFontTypeFaceName");

	UPixUIBPLibrary_PixUI_SetFontTypeFaceName_Params params;
	params.strFontName = strFontName;
	params.ePxFontTypeFace = ePxFontTypeFace;
	params.strFontTypeFaceName = strFontTypeFaceName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetExternalInterface
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UPixUIExternalInterface> scriptInterfaceExternal        (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetExternalInterface(const TScriptInterface<class UPixUIExternalInterface>& scriptInterfaceExternal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetExternalInterface");

	UPixUIBPLibrary_PixUI_SetExternalInterface_Params params;
	params.scriptInterfaceExternal = scriptInterfaceExternal;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetExtBpCallSupportThrowException
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bSupportThrowExceptio          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetExtBpCallSupportThrowException(bool bSupportThrowExceptio)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetExtBpCallSupportThrowException");

	UPixUIBPLibrary_PixUI_SetExtBpCallSupportThrowException_Params params;
	params.bSupportThrowExceptio = bSupportThrowExceptio;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetDynamicTextureUpdateMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EPxDynamicTextureUpdateMode    eUpdateMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetDynamicTextureUpdateMode(EPxDynamicTextureUpdateMode eUpdateMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetDynamicTextureUpdateMode");

	UPixUIBPLibrary_PixUI_SetDynamicTextureUpdateMode_Params params;
	params.eUpdateMode = eUpdateMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetDynamicTextureFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ETextureFilter>    eTextureFilter                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetDynamicTextureFilter(TEnumAsByte<ETextureFilter> eTextureFilter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetDynamicTextureFilter");

	UPixUIBPLibrary_PixUI_SetDynamicTextureFilter_Params params;
	params.eTextureFilter = eTextureFilter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetDynamicFixFontSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bOpenDynamicFix                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetDynamicFixFontSize(bool bOpenDynamicFix)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetDynamicFixFontSize");

	UPixUIBPLibrary_PixUI_SetDynamicFixFontSize_Params params;
	params.bOpenDynamicFix = bOpenDynamicFix;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetDrawEffectNoPixelSnapping
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bNoPixelSnapping               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetDrawEffectNoPixelSnapping(bool bNoPixelSnapping)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetDrawEffectNoPixelSnapping");

	UPixUIBPLibrary_PixUI_SetDrawEffectNoPixelSnapping_Params params;
	params.bNoPixelSnapping = bNoPixelSnapping;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetDefaultFontSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            nFontSize                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetDefaultFontSize(int nFontSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetDefaultFontSize");

	UPixUIBPLibrary_PixUI_SetDefaultFontSize_Params params;
	params.nFontSize = nFontSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetDefaultFont
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strFontName                    (Parm, ZeroConstructor)

void UPixUIBPLibrary::PixUI_SetDefaultFont(const struct FString& strFontName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetDefaultFont");

	UPixUIBPLibrary_PixUI_SetDefaultFont_Params params;
	params.strFontName = strFontName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetCoreTickDuration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            nDurationCount                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetCoreTickDuration(int nDurationCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetCoreTickDuration");

	UPixUIBPLibrary_PixUI_SetCoreTickDuration_Params params;
	params.nDurationCount = nDurationCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetAutoTick
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bAutoTick                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetAutoTick(bool bAutoTick)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetAutoTick");

	UPixUIBPLibrary_PixUI_SetAutoTick_Params params;
	params.bAutoTick = bAutoTick;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetAsyncMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           beRunAsyncMode                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetAsyncMode(bool beRunAsyncMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetAsyncMode");

	UPixUIBPLibrary_PixUI_SetAsyncMode_Params params;
	params.beRunAsyncMode = beRunAsyncMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_SetAsyncBpCallWaitOutTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          fTimeOutSecond                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_SetAsyncBpCallWaitOutTime(float fTimeOutSecond)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_SetAsyncBpCallWaitOutTime");

	UPixUIBPLibrary_PixUI_SetAsyncBpCallWaitOutTime_Params params;
	params.fTimeOutSecond = fTimeOutSecond;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_RHIShaderPlatform
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIBPLibrary::PixUI_RHIShaderPlatform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_RHIShaderPlatform");

	UPixUIBPLibrary_PixUI_RHIShaderPlatform_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_RHIShaderLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIBPLibrary::PixUI_RHIShaderLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_RHIShaderLevel");

	UPixUIBPLibrary_PixUI_RHIShaderLevel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_RemoveSystemFont
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strFontName                    (Parm, ZeroConstructor)

void UPixUIBPLibrary::PixUI_RemoveSystemFont(const struct FString& strFontName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_RemoveSystemFont");

	UPixUIBPLibrary_PixUI_RemoveSystemFont_Params params;
	params.strFontName = strFontName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_PrintProfilerInfo
// (Final, Native, Static, Public, BlueprintCallable)

void UPixUIBPLibrary::PixUI_PrintProfilerInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_PrintProfilerInfo");

	UPixUIBPLibrary_PixUI_PrintProfilerInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_PlatformOSVersionCode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPixUIBPLibrary::PixUI_PlatformOSVersionCode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_PlatformOSVersionCode");

	UPixUIBPLibrary_PixUI_PlatformOSVersionCode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_PlatformOSVersion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIBPLibrary::PixUI_PlatformOSVersion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_PlatformOSVersion");

	UPixUIBPLibrary_PixUI_PlatformOSVersion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_PlatformCode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIBPLibrary::PixUI_PlatformCode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_PlatformCode");

	UPixUIBPLibrary_PixUI_PlatformCode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_Platform
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIBPLibrary::PixUI_Platform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_Platform");

	UPixUIBPLibrary_PixUI_Platform_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsSupportTextShape
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsSupportTextShape()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsSupportTextShape");

	UPixUIBPLibrary_PixUI_IsSupportTextShape_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsStartUp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsStartUp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsStartUp");

	UPixUIBPLibrary_PixUI_IsStartUp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderVulkan
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsRHIShaderVulkan()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderVulkan");

	UPixUIBPLibrary_PixUI_IsRHIShaderVulkan_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderOpenGLES2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsRHIShaderOpenGLES2()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderOpenGLES2");

	UPixUIBPLibrary_PixUI_IsRHIShaderOpenGLES2_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderOpenGL
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsRHIShaderOpenGL()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderOpenGL");

	UPixUIBPLibrary_PixUI_IsRHIShaderOpenGL_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderMetal
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsRHIShaderMetal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderMetal");

	UPixUIBPLibrary_PixUI_IsRHIShaderMetal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderDX
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsRHIShaderDX()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderDX");

	UPixUIBPLibrary_PixUI_IsRHIShaderDX_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsOsBit64
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsOsBit64()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsOsBit64");

	UPixUIBPLibrary_PixUI_IsOsBit64_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsOsBit32
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsOsBit32()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsOsBit32");

	UPixUIBPLibrary_PixUI_IsOsBit32_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsMobileUseTouchEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsMobileUseTouchEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsMobileUseTouchEvent");

	UPixUIBPLibrary_PixUI_IsMobileUseTouchEvent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsDynamicFixFontSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsDynamicFixFontSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsDynamicFixFontSize");

	UPixUIBPLibrary_PixUI_IsDynamicFixFontSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_IsAutoTick
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_IsAutoTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_IsAutoTick");

	UPixUIBPLibrary_PixUI_IsAutoTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetWindowSlotObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            nWindowID                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 strTagId                       (Parm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UPixUIBPLibrary::PixUI_GetWindowSlotObject(int nWindowID, const struct FString& strTagId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetWindowSlotObject");

	UPixUIBPLibrary_PixUI_GetWindowSlotObject_Params params;
	params.nWindowID = nWindowID;
	params.strTagId = strTagId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetTotalFontCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIBPLibrary::PixUI_GetTotalFontCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetTotalFontCount");

	UPixUIBPLibrary_PixUI_GetTotalFontCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetTickIntervalSec
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPixUIBPLibrary::PixUI_GetTickIntervalSec()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetTickIntervalSec");

	UPixUIBPLibrary_PixUI_GetTickIntervalSec_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetSupportPxLibVersionTagArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    arraySupportPxLibVersionTag    (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPixUIBPLibrary::PixUI_GetSupportPxLibVersionTagArray(TArray<int>* arraySupportPxLibVersionTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetSupportPxLibVersionTagArray");

	UPixUIBPLibrary_PixUI_GetSupportPxLibVersionTagArray_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (arraySupportPxLibVersionTag != nullptr)
		*arraySupportPxLibVersionTag = params.arraySupportPxLibVersionTag;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetSupportEngineFont
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_GetSupportEngineFont()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetSupportEngineFont");

	UPixUIBPLibrary_PixUI_GetSupportEngineFont_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetPxLibDefaultVersionTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIBPLibrary::PixUI_GetPxLibDefaultVersionTag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetPxLibDefaultVersionTag");

	UPixUIBPLibrary_PixUI_GetPxLibDefaultVersionTag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetPixUIWidgetSlotObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            nPxWidgetID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 strSlotTagId                   (Parm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UPixUIBPLibrary::PixUI_GetPixUIWidgetSlotObject(int nPxWidgetID, const struct FString& strSlotTagId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetPixUIWidgetSlotObject");

	UPixUIBPLibrary_PixUI_GetPixUIWidgetSlotObject_Params params;
	params.nPxWidgetID = nPxWidgetID;
	params.strSlotTagId = strSlotTagId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetPixUIWidgetByID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            nPxWidgetID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UPixUIWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPixUIWidget* UPixUIBPLibrary::PixUI_GetPixUIWidgetByID(int nPxWidgetID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetPixUIWidgetByID");

	UPixUIBPLibrary_PixUI_GetPixUIWidgetByID_Params params;
	params.nPxWidgetID = nPxWidgetID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxLayerId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIBPLibrary::PixUI_GetPixUIMaxLayerId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxLayerId");

	UPixUIBPLibrary_PixUI_GetPixUIMaxLayerId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxDynamicTextureTotalSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIBPLibrary::PixUI_GetPixUIMaxDynamicTextureTotalSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxDynamicTextureTotalSize");

	UPixUIBPLibrary_PixUI_GetPixUIMaxDynamicTextureTotalSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxDynamicTextureGCSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIBPLibrary::PixUI_GetPixUIMaxDynamicTextureGCSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxDynamicTextureGCSize");

	UPixUIBPLibrary_PixUI_GetPixUIMaxDynamicTextureGCSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxDynamicTextureGCRate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPixUIBPLibrary::PixUI_GetPixUIMaxDynamicTextureGCRate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxDynamicTextureGCRate");

	UPixUIBPLibrary_PixUI_GetPixUIMaxDynamicTextureGCRate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetMatRootPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIBPLibrary::PixUI_GetMatRootPath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetMatRootPath");

	UPixUIBPLibrary_PixUI_GetMatRootPath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetMatBasePath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIBPLibrary::PixUI_GetMatBasePath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetMatBasePath");

	UPixUIBPLibrary_PixUI_GetMatBasePath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetMatAsyncLoad
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_GetMatAsyncLoad()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetMatAsyncLoad");

	UPixUIBPLibrary_PixUI_GetMatAsyncLoad_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetFontTypeFaceName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strFontName                    (Parm, ZeroConstructor)
// EPxFontFaceType                ePxFontTypeFace                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIBPLibrary::PixUI_GetFontTypeFaceName(const struct FString& strFontName, EPxFontFaceType ePxFontTypeFace)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetFontTypeFaceName");

	UPixUIBPLibrary_PixUI_GetFontTypeFaceName_Params params;
	params.strFontName = strFontName;
	params.ePxFontTypeFace = ePxFontTypeFace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetFontPathByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            nIndex                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIBPLibrary::PixUI_GetFontPathByIndex(int nIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetFontPathByIndex");

	UPixUIBPLibrary_PixUI_GetFontPathByIndex_Params params;
	params.nIndex = nIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetFontPath
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 strFontName                    (Parm, ZeroConstructor)
// struct FString                 strOutFontPath                 (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_GetFontPath(const struct FString& strFontName, struct FString* strOutFontPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetFontPath");

	UPixUIBPLibrary_PixUI_GetFontPath_Params params;
	params.strFontName = strFontName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (strOutFontPath != nullptr)
		*strOutFontPath = params.strOutFontPath;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetFontNameByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            nIndex                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIBPLibrary::PixUI_GetFontNameByIndex(int nIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetFontNameByIndex");

	UPixUIBPLibrary_PixUI_GetFontNameByIndex_Params params;
	params.nIndex = nIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetExtBpCallSupportThrowException
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_GetExtBpCallSupportThrowException()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetExtBpCallSupportThrowException");

	UPixUIBPLibrary_PixUI_GetExtBpCallSupportThrowException_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetDynamicTextureUpdateMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EPxDynamicTextureUpdateMode    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPxDynamicTextureUpdateMode UPixUIBPLibrary::PixUI_GetDynamicTextureUpdateMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetDynamicTextureUpdateMode");

	UPixUIBPLibrary_PixUI_GetDynamicTextureUpdateMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetDynamicTextureFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ETextureFilter>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ETextureFilter> UPixUIBPLibrary::PixUI_GetDynamicTextureFilter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetDynamicTextureFilter");

	UPixUIBPLibrary_PixUI_GetDynamicTextureFilter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetDrawEffectNoPixelSnapping
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_GetDrawEffectNoPixelSnapping()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetDrawEffectNoPixelSnapping");

	UPixUIBPLibrary_PixUI_GetDrawEffectNoPixelSnapping_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetDefaultFontSize
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            nOutFontSize                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_GetDefaultFontSize(int* nOutFontSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetDefaultFontSize");

	UPixUIBPLibrary_PixUI_GetDefaultFontSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (nOutFontSize != nullptr)
		*nOutFontSize = params.nOutFontSize;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetDefaultFont
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 strFontName                    (Parm, OutParm, ZeroConstructor)

void UPixUIBPLibrary::PixUI_GetDefaultFont(struct FString* strFontName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetDefaultFont");

	UPixUIBPLibrary_PixUI_GetDefaultFont_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (strFontName != nullptr)
		*strFontName = params.strFontName;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetCoreTickDuration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIBPLibrary::PixUI_GetCoreTickDuration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetCoreTickDuration");

	UPixUIBPLibrary_PixUI_GetCoreTickDuration_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetCachePath
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 strOutCachePath                (Parm, OutParm, ZeroConstructor)

void UPixUIBPLibrary::PixUI_GetCachePath(struct FString* strOutCachePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetCachePath");

	UPixUIBPLibrary_PixUI_GetCachePath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (strOutCachePath != nullptr)
		*strOutCachePath = params.strOutCachePath;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetAsyncMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_GetAsyncMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetAsyncMode");

	UPixUIBPLibrary_PixUI_GetAsyncMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_GetAsyncBpCallWaitOutTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPixUIBPLibrary::PixUI_GetAsyncBpCallWaitOutTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_GetAsyncBpCallWaitOutTime");

	UPixUIBPLibrary_PixUI_GetAsyncBpCallWaitOutTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_FindByWindowID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            nWindowID                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UPixUIWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPixUIWidget* UPixUIBPLibrary::PixUI_FindByWindowID(int nWindowID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_FindByWindowID");

	UPixUIBPLibrary_PixUI_FindByWindowID_Params params;
	params.nWindowID = nWindowID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_DebugInfoSwitch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EPxDebugInfo                   EPxDebugInfo                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOpen                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIBPLibrary::PixUI_DebugInfoSwitch(EPxDebugInfo EPxDebugInfo, bool bOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_DebugInfoSwitch");

	UPixUIBPLibrary_PixUI_DebugInfoSwitch_Params params;
	params.EPxDebugInfo = EPxDebugInfo;
	params.bOpen = bOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_CreateWidget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPixUIWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPixUIWidget* UPixUIBPLibrary::PixUI_CreateWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_CreateWidget");

	UPixUIBPLibrary_PixUI_CreateWidget_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortWidget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPixUIViewPortWidget*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPixUIViewPortWidget* UPixUIBPLibrary::PixUI_CreateViewPortWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortWidget");

	UPixUIBPLibrary_PixUI_CreateViewPortWidget_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortAddToCanvasEx
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCanvasPanel*            pParentCanvas                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPixUIViewPortWidget*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPixUIViewPortWidget* UPixUIBPLibrary::PixUI_CreateViewPortAddToCanvasEx(class UCanvasPanel* pParentCanvas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortAddToCanvasEx");

	UPixUIBPLibrary_PixUI_CreateViewPortAddToCanvasEx_Params params;
	params.pParentCanvas = pParentCanvas;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortAddToCanvas
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCanvasPanel*            pParentCanvas                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FAnchors                Anchors                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FMargin                 Margin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UPixUIViewPortWidget*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPixUIViewPortWidget* UPixUIBPLibrary::PixUI_CreateViewPortAddToCanvas(class UCanvasPanel* pParentCanvas, const struct FAnchors& Anchors, const struct FMargin& Margin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortAddToCanvas");

	UPixUIBPLibrary_PixUI_CreateViewPortAddToCanvas_Params params;
	params.pParentCanvas = pParentCanvas;
	params.Anchors = Anchors;
	params.Margin = Margin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_CreateScriptVM
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPixUIScriptVM*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPixUIScriptVM* UPixUIBPLibrary::PixUI_CreateScriptVM()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_CreateScriptVM");

	UPixUIBPLibrary_PixUI_CreateScriptVM_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_CreateAddToCanvasEx
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCanvasPanel*            pParentCanvas                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPixUIWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPixUIWidget* UPixUIBPLibrary::PixUI_CreateAddToCanvasEx(class UCanvasPanel* pParentCanvas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_CreateAddToCanvasEx");

	UPixUIBPLibrary_PixUI_CreateAddToCanvasEx_Params params;
	params.pParentCanvas = pParentCanvas;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_CreateAddToCanvas
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCanvasPanel*            p_ParentCanvas                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FAnchors                Anchors                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FMargin                 Margin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UPixUIWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPixUIWidget* UPixUIBPLibrary::PixUI_CreateAddToCanvas(class UCanvasPanel* p_ParentCanvas, const struct FAnchors& Anchors, const struct FMargin& Margin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_CreateAddToCanvas");

	UPixUIBPLibrary_PixUI_CreateAddToCanvas_Params params;
	params.p_ParentCanvas = p_ParentCanvas;
	params.Anchors = Anchors;
	params.Margin = Margin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_ClearCacheFile
// (Final, Native, Static, Public, BlueprintCallable)

void UPixUIBPLibrary::PixUI_ClearCacheFile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_ClearCacheFile");

	UPixUIBPLibrary_PixUI_ClearCacheFile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIBPLibrary.PixUI_CallPixUIAssetGC
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            nViewId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_CallPixUIAssetGC(int nViewId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_CallPixUIAssetGC");

	UPixUIBPLibrary_PixUI_CallPixUIAssetGC_Params params;
	params.nViewId = nViewId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_BeDebugInfoOpen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EPxDebugInfo                   EPxDebugInfo                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIBPLibrary::PixUI_BeDebugInfoOpen(EPxDebugInfo EPxDebugInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_BeDebugInfoOpen");

	UPixUIBPLibrary_PixUI_BeDebugInfoOpen_Params params;
	params.EPxDebugInfo = EPxDebugInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIBPLibrary.PixUI_AddSystemFont
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strFontName                    (Parm, ZeroConstructor)
// struct FString                 strFontPath                    (Parm, ZeroConstructor)

void UPixUIBPLibrary::PixUI_AddSystemFont(const struct FString& strFontName, const struct FString& strFontPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIBPLibrary.PixUI_AddSystemFont");

	UPixUIBPLibrary_PixUI_AddSystemFont_Params params;
	params.strFontName = strFontName;
	params.strFontPath = strFontPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIExternalInterface.OnWidgetLoad
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 strWidgetPath                  (Parm, ZeroConstructor)
// struct FString                 strWidgetTag                   (Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UPixUIExternalInterface::OnWidgetLoad(const struct FString& strWidgetPath, const struct FString& strWidgetTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIExternalInterface.OnWidgetLoad");

	UPixUIExternalInterface_OnWidgetLoad_Params params;
	params.strWidgetPath = strWidgetPath;
	params.strWidgetTag = strWidgetTag;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIExternalInterface.OnSlateBrushLoad
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 strBrushPath                   (Parm, ZeroConstructor)
// class UPixUIBrushWrapper*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPixUIBrushWrapper* UPixUIExternalInterface::OnSlateBrushLoad(const struct FString& strBrushPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIExternalInterface.OnSlateBrushLoad");

	UPixUIExternalInterface_OnSlateBrushLoad_Params params;
	params.strBrushPath = strBrushPath;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIExternalInterface.OnFileLoad
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 StrFilePath                    (Parm, ZeroConstructor)
// struct FScriptDelegate         callDelegate                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIExternalInterface::OnFileLoad(const struct FString& StrFilePath, const struct FScriptDelegate& callDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIExternalInterface.OnFileLoad");

	UPixUIExternalInterface_OnFileLoad_Params params;
	params.StrFilePath = StrFilePath;
	params.callDelegate = callDelegate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIInput.OnInputText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strInsert                      (Parm, ZeroConstructor)
// bool                           bEndInput                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLostFocus                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplace                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIInput::OnInputText(const struct FString& strInsert, bool bEndInput, bool bLostFocus, bool bReplace)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIInput.OnInputText");

	UPixUIInput_OnInputText_Params params;
	params.strInsert = strInsert;
	params.bEndInput = bEndInput;
	params.bLostFocus = bLostFocus;
	params.bReplace = bReplace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIInput.Get
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPixUIInput*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPixUIInput* UPixUIInput::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIInput.Get");

	UPixUIInput_Get_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIRenderTarget.SetExternalRenderTarget2D
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*  pTextureRenderTarget           (Parm, ZeroConstructor, IsPlainOldData)

void UPixUIRenderTarget::SetExternalRenderTarget2D(class UTextureRenderTarget2D* pTextureRenderTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.SetExternalRenderTarget2D");

	UPixUIRenderTarget_SetExternalRenderTarget2D_Params params;
	params.pTextureRenderTarget = pTextureRenderTarget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIRenderTarget.SetBeSupportEventCallNested
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSupportEventCallNested        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIRenderTarget::SetBeSupportEventCallNested(bool bSupportEventCallNested)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.SetBeSupportEventCallNested");

	UPixUIRenderTarget_SetBeSupportEventCallNested_Params params;
	params.bSupportEventCallNested = bSupportEventCallNested;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIRenderTarget.SetBeDelayCallMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDelayMessage                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIRenderTarget::SetBeDelayCallMessage(bool bDelayMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.SetBeDelayCallMessage");

	UPixUIRenderTarget_SetBeDelayCallMessage_Params params;
	params.bDelayMessage = bDelayMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIRenderTarget.SendPxMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strMessage                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIRenderTarget::SendPxMessage(const struct FString& strMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.SendPxMessage");

	UPixUIRenderTarget_SendPxMessage_Params params;
	params.strMessage = strMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIRenderTarget.ReSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nNewWidth                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            nNewHeight                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIRenderTarget::ReSize(int nNewWidth, int nNewHeight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.ReSize");

	UPixUIRenderTarget_ReSize_Params params;
	params.nNewWidth = nNewWidth;
	params.nNewHeight = nNewHeight;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIRenderTarget.ReScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          fScale                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIRenderTarget::ReScale(float fScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.ReScale");

	UPixUIRenderTarget_ReScale_Params params;
	params.fScale = fScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIRenderTarget.PostPxMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strMessage                     (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIRenderTarget::PostPxMessage(const struct FString& strMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.PostPxMessage");

	UPixUIRenderTarget_PostPxMessage_Params params;
	params.strMessage = strMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIRenderTarget.OnExternalTouchEvent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               v2dPosTouch                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            nPointerIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EPxTouchType                   ETouchType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIRenderTarget::OnExternalTouchEvent(const struct FVector2D& v2dPosTouch, int nPointerIndex, EPxTouchType ETouchType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.OnExternalTouchEvent");

	UPixUIRenderTarget_OnExternalTouchEvent_Params params;
	params.v2dPosTouch = v2dPosTouch;
	params.nPointerIndex = nPointerIndex;
	params.ETouchType = ETouchType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIRenderTarget.OnExternalTextInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strNewInput                    (Parm, ZeroConstructor)
// bool                           beEndInput                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           beLostFocus                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           beReplace                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIRenderTarget::OnExternalTextInput(const struct FString& strNewInput, bool beEndInput, bool beLostFocus, bool beReplace)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.OnExternalTextInput");

	UPixUIRenderTarget_OnExternalTextInput_Params params;
	params.strNewInput = strNewInput;
	params.beEndInput = beEndInput;
	params.beLostFocus = beLostFocus;
	params.beReplace = beReplace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIRenderTarget.OnExternalMouseEvent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               v2dPosMouse                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               v2dOffsetWheel                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// EPxMouseType                   eMouseType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EPxKeyEventType                uEvent                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIRenderTarget::OnExternalMouseEvent(const struct FVector2D& v2dPosMouse, const struct FVector2D& v2dOffsetWheel, EPxMouseType eMouseType, EPxKeyEventType uEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.OnExternalMouseEvent");

	UPixUIRenderTarget_OnExternalMouseEvent_Params params;
	params.v2dPosMouse = v2dPosMouse;
	params.v2dOffsetWheel = v2dOffsetWheel;
	params.eMouseType = eMouseType;
	params.uEvent = uEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIRenderTarget.OnExternalKeyBoardEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FKeyEvent               KeyEvent                       (ConstParm, Parm, OutParm, ReferenceParm)
// EPxKeyEventType                eEventType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIRenderTarget::OnExternalKeyBoardEvent(const struct FKeyEvent& KeyEvent, EPxKeyEventType eEventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.OnExternalKeyBoardEvent");

	UPixUIRenderTarget_OnExternalKeyBoardEvent_Params params;
	params.KeyEvent = KeyEvent;
	params.eEventType = eEventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIRenderTarget.LoadPageFromUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strUrl                         (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIRenderTarget::LoadPageFromUrl(const struct FString& strUrl)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.LoadPageFromUrl");

	UPixUIRenderTarget_LoadPageFromUrl_Params params;
	params.strUrl = strUrl;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIRenderTarget.LoadPageFromGameAssetPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strAssetPath                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIRenderTarget::LoadPageFromGameAssetPath(const struct FString& strAssetPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.LoadPageFromGameAssetPath");

	UPixUIRenderTarget_LoadPageFromGameAssetPath_Params params;
	params.strAssetPath = strAssetPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIRenderTarget.LoadPageFromData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          arrayData                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 strBasePath                    (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIRenderTarget::LoadPageFromData(const struct FString& strBasePath, TArray<unsigned char>* arrayData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.LoadPageFromData");

	UPixUIRenderTarget_LoadPageFromData_Params params;
	params.strBasePath = strBasePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (arrayData != nullptr)
		*arrayData = params.arrayData;

	return params.ReturnValue;
}


// Function PixUI.PixUIRenderTarget.HistoryGo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nStep                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIRenderTarget::HistoryGo(int nStep)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.HistoryGo");

	UPixUIRenderTarget_HistoryGo_Params params;
	params.nStep = nStep;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIRenderTarget.GetRenderTarget2DWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIRenderTarget::GetRenderTarget2DWidth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.GetRenderTarget2DWidth");

	UPixUIRenderTarget_GetRenderTarget2DWidth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIRenderTarget.GetRenderTarget2DHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIRenderTarget::GetRenderTarget2DHeight()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.GetRenderTarget2DHeight");

	UPixUIRenderTarget_GetRenderTarget2DHeight_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIRenderTarget.GetRenderTarget2D
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTextureRenderTarget2D* UPixUIRenderTarget::GetRenderTarget2D()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.GetRenderTarget2D");

	UPixUIRenderTarget_GetRenderTarget2D_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIRenderTarget.DestroyPage
// (Final, Native, Public, BlueprintCallable)

void UPixUIRenderTarget::DestroyPage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.DestroyPage");

	UPixUIRenderTarget_DestroyPage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIRenderTarget.Create
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nWidth                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            nHeight                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          fScale                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAsyncMode                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bGammaSpace                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAntiAliasing                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIRenderTarget::Create(int nWidth, int nHeight, float fScale, bool bAsyncMode, bool bGammaSpace, bool bAntiAliasing)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.Create");

	UPixUIRenderTarget_Create_Params params;
	params.nWidth = nWidth;
	params.nHeight = nHeight;
	params.fScale = fScale;
	params.bAsyncMode = bAsyncMode;
	params.bGammaSpace = bGammaSpace;
	params.bAntiAliasing = bAntiAliasing;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIRenderTarget.ClosePage
// (Final, Native, Public, BlueprintCallable)

void UPixUIRenderTarget::ClosePage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIRenderTarget.ClosePage");

	UPixUIRenderTarget_ClosePage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIScriptVM.SetScriptGlobalString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StrName                        (Parm, ZeroConstructor)
// struct FString                 strKey                         (Parm, ZeroConstructor)
// struct FString                 strValue                       (Parm, ZeroConstructor)

void UPixUIScriptVM::SetScriptGlobalString(const struct FString& StrName, const struct FString& strKey, const struct FString& strValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.SetScriptGlobalString");

	UPixUIScriptVM_SetScriptGlobalString_Params params;
	params.StrName = StrName;
	params.strKey = strKey;
	params.strValue = strValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIScriptVM.SetScriptGlobalNumber
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StrName                        (Parm, ZeroConstructor)
// struct FString                 strKey                         (Parm, ZeroConstructor)
// float                          fValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIScriptVM::SetScriptGlobalNumber(const struct FString& StrName, const struct FString& strKey, float fValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.SetScriptGlobalNumber");

	UPixUIScriptVM_SetScriptGlobalNumber_Params params;
	params.StrName = StrName;
	params.strKey = strKey;
	params.fValue = fValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIScriptVM.SetScriptGlobalBoolean
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StrName                        (Parm, ZeroConstructor)
// struct FString                 strKey                         (Parm, ZeroConstructor)
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIScriptVM::SetScriptGlobalBoolean(const struct FString& StrName, const struct FString& strKey, bool bValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.SetScriptGlobalBoolean");

	UPixUIScriptVM_SetScriptGlobalBoolean_Params params;
	params.StrName = StrName;
	params.strKey = strKey;
	params.bValue = bValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIScriptVM.SetBeSupportEventCallNested
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSupportEventCallNested        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIScriptVM::SetBeSupportEventCallNested(bool bSupportEventCallNested)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.SetBeSupportEventCallNested");

	UPixUIScriptVM_SetBeSupportEventCallNested_Params params;
	params.bSupportEventCallNested = bSupportEventCallNested;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIScriptVM.SetBeDelayCallMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDelayMessage                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIScriptVM::SetBeDelayCallMessage(bool bDelayMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.SetBeDelayCallMessage");

	UPixUIScriptVM_SetBeDelayCallMessage_Params params;
	params.bDelayMessage = bDelayMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIScriptVM.SendPxMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strMessage                     (Parm, ZeroConstructor)
// int                            nWaitMS                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIScriptVM::SendPxMessage(const struct FString& strMessage, int nWaitMS)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.SendPxMessage");

	UPixUIScriptVM_SendPxMessage_Params params;
	params.strMessage = strMessage;
	params.nWaitMS = nWaitMS;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIScriptVM.PostPxMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strMessage                     (Parm, ZeroConstructor)
// int                            nWaitMS                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIScriptVM::PostPxMessage(const struct FString& strMessage, int nWaitMS)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.PostPxMessage");

	UPixUIScriptVM_PostPxMessage_Params params;
	params.strMessage = strMessage;
	params.nWaitMS = nWaitMS;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIScriptVM.LoadURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strUrl                         (Parm, ZeroConstructor)
// int                            nWaitMS                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIScriptVM::LoadURL(const struct FString& strUrl, int nWaitMS)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.LoadURL");

	UPixUIScriptVM_LoadURL_Params params;
	params.strUrl = strUrl;
	params.nWaitMS = nWaitMS;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIScriptVM.IsValid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIScriptVM::IsValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.IsValid");

	UPixUIScriptVM_IsValid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIScriptVM.GetScriptGlobalString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StrName                        (Parm, ZeroConstructor)
// struct FString                 strKey                         (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIScriptVM::GetScriptGlobalString(const struct FString& StrName, const struct FString& strKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.GetScriptGlobalString");

	UPixUIScriptVM_GetScriptGlobalString_Params params;
	params.StrName = StrName;
	params.strKey = strKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIScriptVM.GetScriptGlobalNumber
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StrName                        (Parm, ZeroConstructor)
// struct FString                 strKey                         (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPixUIScriptVM::GetScriptGlobalNumber(const struct FString& StrName, const struct FString& strKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.GetScriptGlobalNumber");

	UPixUIScriptVM_GetScriptGlobalNumber_Params params;
	params.StrName = StrName;
	params.strKey = strKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIScriptVM.GetScriptGlobalBoolean
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StrName                        (Parm, ZeroConstructor)
// struct FString                 strKey                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIScriptVM::GetScriptGlobalBoolean(const struct FString& StrName, const struct FString& strKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.GetScriptGlobalBoolean");

	UPixUIScriptVM_GetScriptGlobalBoolean_Params params;
	params.StrName = StrName;
	params.strKey = strKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIScriptVM.GetPxVMId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIScriptVM::GetPxVMId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.GetPxVMId");

	UPixUIScriptVM_GetPxVMId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIScriptVM.DoFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StrFilePath                    (Parm, ZeroConstructor)
// int                            nWaitMS                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIScriptVM::DoFile(const struct FString& StrFilePath, int nWaitMS)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.DoFile");

	UPixUIScriptVM_DoFile_Params params;
	params.StrFilePath = StrFilePath;
	params.nWaitMS = nWaitMS;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIScriptVM.DoBufferByAssetPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strAssetPath                   (Parm, ZeroConstructor)
// struct FString                 StrName                        (Parm, ZeroConstructor)
// struct FString                 strModuleName                  (Parm, ZeroConstructor)
// int                            nWaitMS                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIScriptVM::DoBufferByAssetPath(const struct FString& strAssetPath, const struct FString& StrName, const struct FString& strModuleName, int nWaitMS)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.DoBufferByAssetPath");

	UPixUIScriptVM_DoBufferByAssetPath_Params params;
	params.strAssetPath = strAssetPath;
	params.StrName = StrName;
	params.strModuleName = strModuleName;
	params.nWaitMS = nWaitMS;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIScriptVM.DoBuffer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          arrayData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 strBasePath                    (Parm, ZeroConstructor)
// struct FString                 StrName                        (Parm, ZeroConstructor)
// struct FString                 strModuleName                  (Parm, ZeroConstructor)
// int                            nWaitMS                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIScriptVM::DoBuffer(TArray<unsigned char> arrayData, const struct FString& strBasePath, const struct FString& StrName, const struct FString& strModuleName, int nWaitMS)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.DoBuffer");

	UPixUIScriptVM_DoBuffer_Params params;
	params.arrayData = arrayData;
	params.strBasePath = strBasePath;
	params.StrName = StrName;
	params.strModuleName = strModuleName;
	params.nWaitMS = nWaitMS;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIScriptVM.DestroyVM
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nWaitMS                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIScriptVM::DestroyVM(int nWaitMS)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.DestroyVM");

	UPixUIScriptVM_DestroyVM_Params params;
	params.nWaitMS = nWaitMS;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIScriptVM.CreateScriptGlobal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StrName                        (Parm, ZeroConstructor)

void UPixUIScriptVM::CreateScriptGlobal(const struct FString& StrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.CreateScriptGlobal");

	UPixUIScriptVM_CreateScriptGlobal_Params params;
	params.StrName = StrName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIScriptVM.Create
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAsyncMode                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            nWaitMS                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIScriptVM::Create(bool bAsyncMode, int nWaitMS)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.Create");

	UPixUIScriptVM_Create_Params params;
	params.bAsyncMode = bAsyncMode;
	params.nWaitMS = nWaitMS;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIScriptVM.CloseVM
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nWaitMS                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIScriptVM::CloseVM(int nWaitMS)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIScriptVM.CloseVM");

	UPixUIScriptVM_CloseVM_Params params;
	params.nWaitMS = nWaitMS;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.SendPxMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strMessage                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIViewPortWidget::SendPxMessage(const struct FString& strMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.SendPxMessage");

	UPixUIViewPortWidget_SendPxMessage_Params params;
	params.strMessage = strMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.PostPxViewMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strMessage                     (Parm, ZeroConstructor)

void UPixUIViewPortWidget::PostPxViewMessage(const struct FString& strMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.PostPxViewMessage");

	UPixUIViewPortWidget_PostPxViewMessage_Params params;
	params.strMessage = strMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIViewPortWidget.PostPxMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strMessage                     (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIViewPortWidget::PostPxMessage(const struct FString& strMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.PostPxMessage");

	UPixUIViewPortWidget_PostPxMessage_Params params;
	params.strMessage = strMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.OnPixUITransformDelegate
// (Final, Native, Public)
// Parameters:
// EPxWidgetTransformType         EPxWidgetTransformType         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            nParam1                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            nParam2                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIViewPortWidget::OnPixUITransformDelegate(EPxWidgetTransformType EPxWidgetTransformType, int nParam1, int nParam2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.OnPixUITransformDelegate");

	UPixUIViewPortWidget_OnPixUITransformDelegate_Params params;
	params.EPxWidgetTransformType = EPxWidgetTransformType;
	params.nParam1 = nParam1;
	params.nParam2 = nParam2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIViewPortWidget.OnPixUIPromptDelegate
// (Final, Native, Public)
// Parameters:
// struct FString                 strTip                         (Parm, ZeroConstructor)
// struct FString                 strDefault                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIViewPortWidget::OnPixUIPromptDelegate(const struct FString& strTip, const struct FString& strDefault)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.OnPixUIPromptDelegate");

	UPixUIViewPortWidget_OnPixUIPromptDelegate_Params params;
	params.strTip = strTip;
	params.strDefault = strDefault;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.OnPixUIOpenDelegate
// (Final, Native, Public)
// Parameters:
// struct FString                 strUrl                         (Parm, ZeroConstructor)
// struct FString                 StrName                        (Parm, ZeroConstructor)
// struct FString                 strFeatures                    (Parm, ZeroConstructor)
// bool                           bReplace                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIViewPortWidget::OnPixUIOpenDelegate(const struct FString& strUrl, const struct FString& StrName, const struct FString& strFeatures, bool bReplace)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.OnPixUIOpenDelegate");

	UPixUIViewPortWidget_OnPixUIOpenDelegate_Params params;
	params.strUrl = strUrl;
	params.StrName = StrName;
	params.strFeatures = strFeatures;
	params.bReplace = bReplace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.OnPixUIConfirmDelegate
// (Final, Native, Public)
// Parameters:
// struct FString                 strConfirmMsg                  (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIViewPortWidget::OnPixUIConfirmDelegate(const struct FString& strConfirmMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.OnPixUIConfirmDelegate");

	UPixUIViewPortWidget_OnPixUIConfirmDelegate_Params params;
	params.strConfirmMsg = strConfirmMsg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.LoadPxViewFromUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strUrl                         (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIViewPortWidget::LoadPxViewFromUrl(const struct FString& strUrl)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.LoadPxViewFromUrl");

	UPixUIViewPortWidget_LoadPxViewFromUrl_Params params;
	params.strUrl = strUrl;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.LoadPxViewFromGameAssetPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strAssetPath                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIViewPortWidget::LoadPxViewFromGameAssetPath(const struct FString& strAssetPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.LoadPxViewFromGameAssetPath");

	UPixUIViewPortWidget_LoadPxViewFromGameAssetPath_Params params;
	params.strAssetPath = strAssetPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.LoadPxViewFromData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          arrayData                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 strRootPath                    (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIViewPortWidget::LoadPxViewFromData(const struct FString& strRootPath, TArray<unsigned char>* arrayData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.LoadPxViewFromData");

	UPixUIViewPortWidget_LoadPxViewFromData_Params params;
	params.strRootPath = strRootPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (arrayData != nullptr)
		*arrayData = params.arrayData;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.LoadPageFromUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strUrl                         (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIViewPortWidget::LoadPageFromUrl(const struct FString& strUrl)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.LoadPageFromUrl");

	UPixUIViewPortWidget_LoadPageFromUrl_Params params;
	params.strUrl = strUrl;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.LoadPageFromGameAssetPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strAssetPath                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIViewPortWidget::LoadPageFromGameAssetPath(const struct FString& strAssetPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.LoadPageFromGameAssetPath");

	UPixUIViewPortWidget_LoadPageFromGameAssetPath_Params params;
	params.strAssetPath = strAssetPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.LoadPageFromData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          arrayData                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 strRootPath                    (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIViewPortWidget::LoadPageFromData(const struct FString& strRootPath, TArray<unsigned char>* arrayData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.LoadPageFromData");

	UPixUIViewPortWidget_LoadPageFromData_Params params;
	params.strRootPath = strRootPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (arrayData != nullptr)
		*arrayData = params.arrayData;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.GetPixUIWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPixUIWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPixUIWidget* UPixUIViewPortWidget::GetPixUIWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.GetPixUIWidget");

	UPixUIViewPortWidget_GetPixUIWidget_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIViewPortWidget.ClosePxView
// (Final, Native, Public, BlueprintCallable)

void UPixUIViewPortWidget::ClosePxView()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.ClosePxView");

	UPixUIViewPortWidget_ClosePxView_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIViewPortWidget.ClosePage
// (Final, Native, Public, BlueprintCallable)

void UPixUIViewPortWidget::ClosePage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIViewPortWidget.ClosePage");

	UPixUIViewPortWidget_ClosePage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.ShowNextDrawItem
// (Final, Native, Public, BlueprintCallable)

void UPixUIWidget::ShowNextDrawItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.ShowNextDrawItem");

	UPixUIWidget_ShowNextDrawItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.ShowNextDrawBatch
// (Final, Native, Public, BlueprintCallable)

void UPixUIWidget::ShowNextDrawBatch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.ShowNextDrawBatch");

	UPixUIWidget_ShowNextDrawBatch_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.ShowAllDrawItem
// (Final, Native, Public, BlueprintCallable)

void UPixUIWidget::ShowAllDrawItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.ShowAllDrawItem");

	UPixUIWidget_ShowAllDrawItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.ShowAllDrawBatch
// (Final, Native, Public, BlueprintCallable)

void UPixUIWidget::ShowAllDrawBatch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.ShowAllDrawBatch");

	UPixUIWidget_ShowAllDrawBatch_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.SetScriptGlobalString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StrName                        (Parm, ZeroConstructor)
// struct FString                 strKey                         (Parm, ZeroConstructor)
// struct FString                 strValue                       (Parm, ZeroConstructor)

void UPixUIWidget::SetScriptGlobalString(const struct FString& StrName, const struct FString& strKey, const struct FString& strValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.SetScriptGlobalString");

	UPixUIWidget_SetScriptGlobalString_Params params;
	params.StrName = StrName;
	params.strKey = strKey;
	params.strValue = strValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.SetScriptGlobalNumber
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StrName                        (Parm, ZeroConstructor)
// struct FString                 strKey                         (Parm, ZeroConstructor)
// float                          fValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidget::SetScriptGlobalNumber(const struct FString& StrName, const struct FString& strKey, float fValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.SetScriptGlobalNumber");

	UPixUIWidget_SetScriptGlobalNumber_Params params;
	params.StrName = StrName;
	params.strKey = strKey;
	params.fValue = fValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.SetScriptGlobalBoolean
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StrName                        (Parm, ZeroConstructor)
// struct FString                 strKey                         (Parm, ZeroConstructor)
// bool                           bValue                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidget::SetScriptGlobalBoolean(const struct FString& StrName, const struct FString& strKey, bool bValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.SetScriptGlobalBoolean");

	UPixUIWidget_SetScriptGlobalBoolean_Params params;
	params.StrName = StrName;
	params.strKey = strKey;
	params.bValue = bValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.SetBeSupportEventCallNested
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSupportEventCallNested        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidget::SetBeSupportEventCallNested(bool bSupportEventCallNested)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.SetBeSupportEventCallNested");

	UPixUIWidget_SetBeSupportEventCallNested_Params params;
	params.bSupportEventCallNested = bSupportEventCallNested;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.SetBeDelayCallMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDelayMessage                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidget::SetBeDelayCallMessage(bool bDelayMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.SetBeDelayCallMessage");

	UPixUIWidget_SetBeDelayCallMessage_Params params;
	params.bDelayMessage = bDelayMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.SetBackgroundBlur
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          fBlurStrength                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidget::SetBackgroundBlur(float fBlurStrength)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.SetBackgroundBlur");

	UPixUIWidget_SetBackgroundBlur_Params params;
	params.fBlurStrength = fBlurStrength;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.SetAutoTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAutoTransform                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidget::SetAutoTransform(bool bAutoTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.SetAutoTransform");

	UPixUIWidget_SetAutoTransform_Params params;
	params.bAutoTransform = bAutoTransform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.SendPxMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strMessage                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIWidget::SendPxMessage(const struct FString& strMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.SendPxMessage");

	UPixUIWidget_SendPxMessage_Params params;
	params.strMessage = strMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.PostPxMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strMessage                     (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIWidget::PostPxMessage(const struct FString& strMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.PostPxMessage");

	UPixUIWidget_PostPxMessage_Params params;
	params.strMessage = strMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.OpenPageFromUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strUrl                         (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIWidget::OpenPageFromUrl(const struct FString& strUrl)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.OpenPageFromUrl");

	UPixUIWidget_OpenPageFromUrl_Params params;
	params.strUrl = strUrl;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.OpenPageFromGameAssetPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strAssetPath                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIWidget::OpenPageFromGameAssetPath(const struct FString& strAssetPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.OpenPageFromGameAssetPath");

	UPixUIWidget_OpenPageFromGameAssetPath_Params params;
	params.strAssetPath = strAssetPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.OpenPageFromData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          arrayData                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 strBasePath                    (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIWidget::OpenPageFromData(const struct FString& strBasePath, TArray<unsigned char>* arrayData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.OpenPageFromData");

	UPixUIWidget_OpenPageFromData_Params params;
	params.strBasePath = strBasePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (arrayData != nullptr)
		*arrayData = params.arrayData;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.OnExternalTouchEvent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               v2dPosTouch                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            nPointerIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EPxTouchType                   ETouchType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidget::OnExternalTouchEvent(const struct FVector2D& v2dPosTouch, int nPointerIndex, EPxTouchType ETouchType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.OnExternalTouchEvent");

	UPixUIWidget_OnExternalTouchEvent_Params params;
	params.v2dPosTouch = v2dPosTouch;
	params.nPointerIndex = nPointerIndex;
	params.ETouchType = ETouchType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.OnExternalTextInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strNewInput                    (Parm, ZeroConstructor)
// bool                           beEndInput                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           beLostFocus                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           beReplace                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidget::OnExternalTextInput(const struct FString& strNewInput, bool beEndInput, bool beLostFocus, bool beReplace)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.OnExternalTextInput");

	UPixUIWidget_OnExternalTextInput_Params params;
	params.strNewInput = strNewInput;
	params.beEndInput = beEndInput;
	params.beLostFocus = beLostFocus;
	params.beReplace = beReplace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.OnExternalMouseEvent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               v2dPosMouse                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               v2dOffsetWheel                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// EPxMouseType                   eMouseType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EPxKeyEventType                uEvent                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidget::OnExternalMouseEvent(const struct FVector2D& v2dPosMouse, const struct FVector2D& v2dOffsetWheel, EPxMouseType eMouseType, EPxKeyEventType uEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.OnExternalMouseEvent");

	UPixUIWidget_OnExternalMouseEvent_Params params;
	params.v2dPosMouse = v2dPosMouse;
	params.v2dOffsetWheel = v2dOffsetWheel;
	params.eMouseType = eMouseType;
	params.uEvent = uEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.OnExternalKeyBoardEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FKeyEvent               KeyEvent                       (ConstParm, Parm, OutParm, ReferenceParm)
// EPxKeyEventType                eEventType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidget::OnExternalKeyBoardEvent(const struct FKeyEvent& KeyEvent, EPxKeyEventType eEventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.OnExternalKeyBoardEvent");

	UPixUIWidget_OnExternalKeyBoardEvent_Params params;
	params.KeyEvent = KeyEvent;
	params.eEventType = eEventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.LoadPageFromUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strUrl                         (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIWidget::LoadPageFromUrl(const struct FString& strUrl)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.LoadPageFromUrl");

	UPixUIWidget_LoadPageFromUrl_Params params;
	params.strUrl = strUrl;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.LoadPageFromGameAssetPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strAssetPath                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIWidget::LoadPageFromGameAssetPath(const struct FString& strAssetPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.LoadPageFromGameAssetPath");

	UPixUIWidget_LoadPageFromGameAssetPath_Params params;
	params.strAssetPath = strAssetPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.LoadPageFromData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          arrayData                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 strBasePath                    (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIWidget::LoadPageFromData(const struct FString& strBasePath, TArray<unsigned char>* arrayData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.LoadPageFromData");

	UPixUIWidget_LoadPageFromData_Params params;
	params.strBasePath = strBasePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (arrayData != nullptr)
		*arrayData = params.arrayData;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.HistoryGo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nStep                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPixUIWidget::HistoryGo(int nStep)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.HistoryGo");

	UPixUIWidget_HistoryGo_Params params;
	params.nStep = nStep;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.GetSlotObjectByTagId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strSlotTagId                   (Parm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UPixUIWidget::GetSlotObjectByTagId(const struct FString& strSlotTagId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.GetSlotObjectByTagId");

	UPixUIWidget_GetSlotObjectByTagId_Params params;
	params.strSlotTagId = strSlotTagId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.GetScriptGlobalString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StrName                        (Parm, ZeroConstructor)
// struct FString                 strKey                         (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPixUIWidget::GetScriptGlobalString(const struct FString& StrName, const struct FString& strKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.GetScriptGlobalString");

	UPixUIWidget_GetScriptGlobalString_Params params;
	params.StrName = StrName;
	params.strKey = strKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.GetScriptGlobalNumber
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StrName                        (Parm, ZeroConstructor)
// struct FString                 strKey                         (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPixUIWidget::GetScriptGlobalNumber(const struct FString& StrName, const struct FString& strKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.GetScriptGlobalNumber");

	UPixUIWidget_GetScriptGlobalNumber_Params params;
	params.StrName = StrName;
	params.strKey = strKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.GetScriptGlobalBoolean
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StrName                        (Parm, ZeroConstructor)
// struct FString                 strKey                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPixUIWidget::GetScriptGlobalBoolean(const struct FString& StrName, const struct FString& strKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.GetScriptGlobalBoolean");

	UPixUIWidget_GetScriptGlobalBoolean_Params params;
	params.StrName = StrName;
	params.strKey = strKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.GetPxWinId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPixUIWidget::GetPxWinId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.GetPxWinId");

	UPixUIWidget_GetPxWinId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.GetCtrlWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UPixUIWidget::GetCtrlWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.GetCtrlWidget");

	UPixUIWidget_GetCtrlWidget_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PixUIWidget.DestroyPage
// (Final, Native, Public, BlueprintCallable)

void UPixUIWidget::DestroyPage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.DestroyPage");

	UPixUIWidget_DestroyPage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.CreateScriptGlobal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StrName                        (Parm, ZeroConstructor)

void UPixUIWidget::CreateScriptGlobal(const struct FString& StrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.CreateScriptGlobal");

	UPixUIWidget_CreateScriptGlobal_Params params;
	params.StrName = StrName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PixUIWidget.ClosePage
// (Final, Native, Public, BlueprintCallable)

void UPixUIWidget::ClosePage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PixUIWidget.ClosePage");

	UPixUIWidget_ClosePage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PxCustomDelegate.OnPxCustomDelegate
// (Final, Native, Public)

void UPxCustomDelegate::OnPxCustomDelegate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PxCustomDelegate.OnPxCustomDelegate");

	UPxCustomDelegate_OnPxCustomDelegate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PixUI.PxCustomDelegate.MakeCustomDelegate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strCustomDelegateName          (Parm, ZeroConstructor)
// class UPxCustomDelegate*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPxCustomDelegate* UPxCustomDelegate::MakeCustomDelegate(const struct FString& strCustomDelegateName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PxCustomDelegate.MakeCustomDelegate");

	UPxCustomDelegate_MakeCustomDelegate_Params params;
	params.strCustomDelegateName = strCustomDelegateName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PxCustomInterfaceDyImp.MakeCustomInterface
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 strCustomInterfaceName         (Parm, ZeroConstructor)
// class UClass*                  pOverrideBaseClass             (Parm, ZeroConstructor, IsPlainOldData)
// class UPxCustomInterfaceDyImp* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPxCustomInterfaceDyImp* UPxCustomInterfaceDyImp::MakeCustomInterface(const struct FString& strCustomInterfaceName, class UClass* pOverrideBaseClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PxCustomInterfaceDyImp.MakeCustomInterface");

	UPxCustomInterfaceDyImp_MakeCustomInterface_Params params;
	params.strCustomInterfaceName = strCustomInterfaceName;
	params.pOverrideBaseClass = pOverrideBaseClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PixUI.PxFileLoad.OnFileLoad
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          arrayFileData                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPxFileLoad::OnFileLoad(TArray<unsigned char> arrayFileData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUI.PxFileLoad.OnFileLoad");

	UPxFileLoad_OnFileLoad_Params params;
	params.arrayFileData = arrayFileData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

