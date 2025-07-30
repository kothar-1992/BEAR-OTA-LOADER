#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PixUI.PixUIBPLibrary.PixUI_Version
struct UPixUIBPLibrary_PixUI_Version_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIBPLibrary.PixUI_Tick
struct UPixUIBPLibrary_PixUI_Tick_Params
{
	float                                              fDeltaTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_StartupEx
struct UPixUIBPLibrary_PixUI_StartupEx_Params
{
	struct FString                                     strCachePathForWrite;                                     // (Parm, ZeroConstructor)
	bool                                               bSupportAsyncModel;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_Startup
struct UPixUIBPLibrary_PixUI_Startup_Params
{
	struct FString                                     strCachePathForWrite;                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_Shutdown
struct UPixUIBPLibrary_PixUI_Shutdown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetTickIntervalSec
struct UPixUIBPLibrary_PixUI_SetTickIntervalSec_Params
{
	float                                              fTickIntervalSec;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetSupportTextShape
struct UPixUIBPLibrary_PixUI_SetSupportTextShape_Params
{
	bool                                               beSupportTextShape;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetSupportEngineFont
struct UPixUIBPLibrary_PixUI_SetSupportEngineFont_Params
{
	bool                                               bSupportEngineFont;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetSecretKey
struct UPixUIBPLibrary_PixUI_SetSecretKey_Params
{
	struct FString                                     strSecretKey;                                             // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetPxLibDefaultVersionTag
struct UPixUIBPLibrary_PixUI_SetPxLibDefaultVersionTag_Params
{
	int                                                nNewPxLibVersionTag;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxLayerId
struct UPixUIBPLibrary_PixUI_SetPixUIMaxLayerId_Params
{
	int                                                nMaxLayerId;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxDynamicTextureTotalSize
struct UPixUIBPLibrary_PixUI_SetPixUIMaxDynamicTextureTotalSize_Params
{
	int                                                nMaxDynamicTextureTotalSize;                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxDynamicTextureGCSize
struct UPixUIBPLibrary_PixUI_SetPixUIMaxDynamicTextureGCSize_Params
{
	int                                                nMaxDynamicTextureGCSize;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxDynamicTextureGCRate
struct UPixUIBPLibrary_PixUI_SetPixUIMaxDynamicTextureGCRate_Params
{
	float                                              fMaxGCRate;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetMobileUseTouchEvent
struct UPixUIBPLibrary_PixUI_SetMobileUseTouchEvent_Params
{
	bool                                               bUseTouchEvent;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetMatRootPath
struct UPixUIBPLibrary_PixUI_SetMatRootPath_Params
{
	struct FString                                     strMatRootPath;                                           // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetMatBasePath
struct UPixUIBPLibrary_PixUI_SetMatBasePath_Params
{
	struct FString                                     strMatBasePath;                                           // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetMatAsyncLoad
struct UPixUIBPLibrary_PixUI_SetMatAsyncLoad_Params
{
	bool                                               bMatAsyncLoad;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetFontTypeFaceName
struct UPixUIBPLibrary_PixUI_SetFontTypeFaceName_Params
{
	struct FString                                     strFontName;                                              // (Parm, ZeroConstructor)
	EPxFontFaceType                                    ePxFontTypeFace;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     strFontTypeFaceName;                                      // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetExternalInterface
struct UPixUIBPLibrary_PixUI_SetExternalInterface_Params
{
	TScriptInterface<class UPixUIExternalInterface>    scriptInterfaceExternal;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetExtBpCallSupportThrowException
struct UPixUIBPLibrary_PixUI_SetExtBpCallSupportThrowException_Params
{
	bool                                               bSupportThrowExceptio;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetDynamicTextureUpdateMode
struct UPixUIBPLibrary_PixUI_SetDynamicTextureUpdateMode_Params
{
	EPxDynamicTextureUpdateMode                        eUpdateMode;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetDynamicTextureFilter
struct UPixUIBPLibrary_PixUI_SetDynamicTextureFilter_Params
{
	TEnumAsByte<ETextureFilter>                        eTextureFilter;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetDynamicFixFontSize
struct UPixUIBPLibrary_PixUI_SetDynamicFixFontSize_Params
{
	bool                                               bOpenDynamicFix;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetDrawEffectNoPixelSnapping
struct UPixUIBPLibrary_PixUI_SetDrawEffectNoPixelSnapping_Params
{
	bool                                               bNoPixelSnapping;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetDefaultFontSize
struct UPixUIBPLibrary_PixUI_SetDefaultFontSize_Params
{
	int                                                nFontSize;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetDefaultFont
struct UPixUIBPLibrary_PixUI_SetDefaultFont_Params
{
	struct FString                                     strFontName;                                              // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetCoreTickDuration
struct UPixUIBPLibrary_PixUI_SetCoreTickDuration_Params
{
	int                                                nDurationCount;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetAutoTick
struct UPixUIBPLibrary_PixUI_SetAutoTick_Params
{
	bool                                               bAutoTick;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetAsyncMode
struct UPixUIBPLibrary_PixUI_SetAsyncMode_Params
{
	bool                                               beRunAsyncMode;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_SetAsyncBpCallWaitOutTime
struct UPixUIBPLibrary_PixUI_SetAsyncBpCallWaitOutTime_Params
{
	float                                              fTimeOutSecond;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_RHIShaderPlatform
struct UPixUIBPLibrary_PixUI_RHIShaderPlatform_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_RHIShaderLevel
struct UPixUIBPLibrary_PixUI_RHIShaderLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_RemoveSystemFont
struct UPixUIBPLibrary_PixUI_RemoveSystemFont_Params
{
	struct FString                                     strFontName;                                              // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIBPLibrary.PixUI_PrintProfilerInfo
struct UPixUIBPLibrary_PixUI_PrintProfilerInfo_Params
{
};

// Function PixUI.PixUIBPLibrary.PixUI_PlatformOSVersionCode
struct UPixUIBPLibrary_PixUI_PlatformOSVersionCode_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_PlatformOSVersion
struct UPixUIBPLibrary_PixUI_PlatformOSVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIBPLibrary.PixUI_PlatformCode
struct UPixUIBPLibrary_PixUI_PlatformCode_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_Platform
struct UPixUIBPLibrary_PixUI_Platform_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsSupportTextShape
struct UPixUIBPLibrary_PixUI_IsSupportTextShape_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsStartUp
struct UPixUIBPLibrary_PixUI_IsStartUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderVulkan
struct UPixUIBPLibrary_PixUI_IsRHIShaderVulkan_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderOpenGLES2
struct UPixUIBPLibrary_PixUI_IsRHIShaderOpenGLES2_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderOpenGL
struct UPixUIBPLibrary_PixUI_IsRHIShaderOpenGL_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderMetal
struct UPixUIBPLibrary_PixUI_IsRHIShaderMetal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsRHIShaderDX
struct UPixUIBPLibrary_PixUI_IsRHIShaderDX_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsOsBit64
struct UPixUIBPLibrary_PixUI_IsOsBit64_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsOsBit32
struct UPixUIBPLibrary_PixUI_IsOsBit32_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsMobileUseTouchEvent
struct UPixUIBPLibrary_PixUI_IsMobileUseTouchEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsDynamicFixFontSize
struct UPixUIBPLibrary_PixUI_IsDynamicFixFontSize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_IsAutoTick
struct UPixUIBPLibrary_PixUI_IsAutoTick_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetWindowSlotObject
struct UPixUIBPLibrary_PixUI_GetWindowSlotObject_Params
{
	int                                                nWindowID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     strTagId;                                                 // (Parm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetTotalFontCount
struct UPixUIBPLibrary_PixUI_GetTotalFontCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetTickIntervalSec
struct UPixUIBPLibrary_PixUI_GetTickIntervalSec_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetSupportPxLibVersionTagArray
struct UPixUIBPLibrary_PixUI_GetSupportPxLibVersionTagArray_Params
{
	TArray<int>                                        arraySupportPxLibVersionTag;                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetSupportEngineFont
struct UPixUIBPLibrary_PixUI_GetSupportEngineFont_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetPxLibDefaultVersionTag
struct UPixUIBPLibrary_PixUI_GetPxLibDefaultVersionTag_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetPixUIWidgetSlotObject
struct UPixUIBPLibrary_PixUI_GetPixUIWidgetSlotObject_Params
{
	int                                                nPxWidgetID;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     strSlotTagId;                                             // (Parm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetPixUIWidgetByID
struct UPixUIBPLibrary_PixUI_GetPixUIWidgetByID_Params
{
	int                                                nPxWidgetID;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UPixUIWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxLayerId
struct UPixUIBPLibrary_PixUI_GetPixUIMaxLayerId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxDynamicTextureTotalSize
struct UPixUIBPLibrary_PixUI_GetPixUIMaxDynamicTextureTotalSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxDynamicTextureGCSize
struct UPixUIBPLibrary_PixUI_GetPixUIMaxDynamicTextureGCSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxDynamicTextureGCRate
struct UPixUIBPLibrary_PixUI_GetPixUIMaxDynamicTextureGCRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetMatRootPath
struct UPixUIBPLibrary_PixUI_GetMatRootPath_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetMatBasePath
struct UPixUIBPLibrary_PixUI_GetMatBasePath_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetMatAsyncLoad
struct UPixUIBPLibrary_PixUI_GetMatAsyncLoad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetFontTypeFaceName
struct UPixUIBPLibrary_PixUI_GetFontTypeFaceName_Params
{
	struct FString                                     strFontName;                                              // (Parm, ZeroConstructor)
	EPxFontFaceType                                    ePxFontTypeFace;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetFontPathByIndex
struct UPixUIBPLibrary_PixUI_GetFontPathByIndex_Params
{
	int                                                nIndex;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetFontPath
struct UPixUIBPLibrary_PixUI_GetFontPath_Params
{
	struct FString                                     strFontName;                                              // (Parm, ZeroConstructor)
	struct FString                                     strOutFontPath;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetFontNameByIndex
struct UPixUIBPLibrary_PixUI_GetFontNameByIndex_Params
{
	int                                                nIndex;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetExtBpCallSupportThrowException
struct UPixUIBPLibrary_PixUI_GetExtBpCallSupportThrowException_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetDynamicTextureUpdateMode
struct UPixUIBPLibrary_PixUI_GetDynamicTextureUpdateMode_Params
{
	EPxDynamicTextureUpdateMode                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetDynamicTextureFilter
struct UPixUIBPLibrary_PixUI_GetDynamicTextureFilter_Params
{
	TEnumAsByte<ETextureFilter>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetDrawEffectNoPixelSnapping
struct UPixUIBPLibrary_PixUI_GetDrawEffectNoPixelSnapping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetDefaultFontSize
struct UPixUIBPLibrary_PixUI_GetDefaultFontSize_Params
{
	int                                                nOutFontSize;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetDefaultFont
struct UPixUIBPLibrary_PixUI_GetDefaultFont_Params
{
	struct FString                                     strFontName;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetCoreTickDuration
struct UPixUIBPLibrary_PixUI_GetCoreTickDuration_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetCachePath
struct UPixUIBPLibrary_PixUI_GetCachePath_Params
{
	struct FString                                     strOutCachePath;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetAsyncMode
struct UPixUIBPLibrary_PixUI_GetAsyncMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_GetAsyncBpCallWaitOutTime
struct UPixUIBPLibrary_PixUI_GetAsyncBpCallWaitOutTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_FindByWindowID
struct UPixUIBPLibrary_PixUI_FindByWindowID_Params
{
	int                                                nWindowID;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UPixUIWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_DebugInfoSwitch
struct UPixUIBPLibrary_PixUI_DebugInfoSwitch_Params
{
	EPxDebugInfo                                       EPxDebugInfo;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOpen;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_CreateWidget
struct UPixUIBPLibrary_PixUI_CreateWidget_Params
{
	class UPixUIWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortWidget
struct UPixUIBPLibrary_PixUI_CreateViewPortWidget_Params
{
	class UPixUIViewPortWidget*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortAddToCanvasEx
struct UPixUIBPLibrary_PixUI_CreateViewPortAddToCanvasEx_Params
{
	class UCanvasPanel*                                pParentCanvas;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPixUIViewPortWidget*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_CreateViewPortAddToCanvas
struct UPixUIBPLibrary_PixUI_CreateViewPortAddToCanvas_Params
{
	class UCanvasPanel*                                pParentCanvas;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAnchors                                    Anchors;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FMargin                                     Margin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UPixUIViewPortWidget*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_CreateScriptVM
struct UPixUIBPLibrary_PixUI_CreateScriptVM_Params
{
	class UPixUIScriptVM*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_CreateAddToCanvasEx
struct UPixUIBPLibrary_PixUI_CreateAddToCanvasEx_Params
{
	class UCanvasPanel*                                pParentCanvas;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPixUIWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_CreateAddToCanvas
struct UPixUIBPLibrary_PixUI_CreateAddToCanvas_Params
{
	class UCanvasPanel*                                p_ParentCanvas;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAnchors                                    Anchors;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FMargin                                     Margin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UPixUIWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_ClearCacheFile
struct UPixUIBPLibrary_PixUI_ClearCacheFile_Params
{
};

// Function PixUI.PixUIBPLibrary.PixUI_CallPixUIAssetGC
struct UPixUIBPLibrary_PixUI_CallPixUIAssetGC_Params
{
	int                                                nViewId;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_BeDebugInfoOpen
struct UPixUIBPLibrary_PixUI_BeDebugInfoOpen_Params
{
	EPxDebugInfo                                       EPxDebugInfo;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIBPLibrary.PixUI_AddSystemFont
struct UPixUIBPLibrary_PixUI_AddSystemFont_Params
{
	struct FString                                     strFontName;                                              // (Parm, ZeroConstructor)
	struct FString                                     strFontPath;                                              // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIExternalInterface.OnWidgetLoad
struct UPixUIExternalInterface_OnWidgetLoad_Params
{
	struct FString                                     strWidgetPath;                                            // (Parm, ZeroConstructor)
	struct FString                                     strWidgetTag;                                             // (Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PixUI.PixUIExternalInterface.OnSlateBrushLoad
struct UPixUIExternalInterface_OnSlateBrushLoad_Params
{
	struct FString                                     strBrushPath;                                             // (Parm, ZeroConstructor)
	class UPixUIBrushWrapper*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIExternalInterface.OnFileLoad
struct UPixUIExternalInterface_OnFileLoad_Params
{
	struct FString                                     StrFilePath;                                              // (Parm, ZeroConstructor)
	struct FScriptDelegate                             callDelegate;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIInput.OnInputText
struct UPixUIInput_OnInputText_Params
{
	struct FString                                     strInsert;                                                // (Parm, ZeroConstructor)
	bool                                               bEndInput;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLostFocus;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplace;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIInput.Get
struct UPixUIInput_Get_Params
{
	class UPixUIInput*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIRenderTarget.SetExternalRenderTarget2D
struct UPixUIRenderTarget_SetExternalRenderTarget2D_Params
{
	class UTextureRenderTarget2D*                      pTextureRenderTarget;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIRenderTarget.SetBeSupportEventCallNested
struct UPixUIRenderTarget_SetBeSupportEventCallNested_Params
{
	bool                                               bSupportEventCallNested;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIRenderTarget.SetBeDelayCallMessage
struct UPixUIRenderTarget_SetBeDelayCallMessage_Params
{
	bool                                               bDelayMessage;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIRenderTarget.SendPxMessage
struct UPixUIRenderTarget_SendPxMessage_Params
{
	struct FString                                     strMessage;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIRenderTarget.ReSize
struct UPixUIRenderTarget_ReSize_Params
{
	int                                                nNewWidth;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                nNewHeight;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIRenderTarget.ReScale
struct UPixUIRenderTarget_ReScale_Params
{
	float                                              fScale;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIRenderTarget.PostPxMessage
struct UPixUIRenderTarget_PostPxMessage_Params
{
	struct FString                                     strMessage;                                               // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIRenderTarget.OnExternalTouchEvent
struct UPixUIRenderTarget_OnExternalTouchEvent_Params
{
	struct FVector2D                                   v2dPosTouch;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                nPointerIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EPxTouchType                                       ETouchType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIRenderTarget.OnExternalTextInput
struct UPixUIRenderTarget_OnExternalTextInput_Params
{
	struct FString                                     strNewInput;                                              // (Parm, ZeroConstructor)
	bool                                               beEndInput;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               beLostFocus;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               beReplace;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIRenderTarget.OnExternalMouseEvent
struct UPixUIRenderTarget_OnExternalMouseEvent_Params
{
	struct FVector2D                                   v2dPosMouse;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   v2dOffsetWheel;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EPxMouseType                                       eMouseType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EPxKeyEventType                                    uEvent;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIRenderTarget.OnExternalKeyBoardEvent
struct UPixUIRenderTarget_OnExternalKeyBoardEvent_Params
{
	struct FKeyEvent                                   KeyEvent;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	EPxKeyEventType                                    eEventType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIRenderTarget.LoadPageFromUrl
struct UPixUIRenderTarget_LoadPageFromUrl_Params
{
	struct FString                                     strUrl;                                                   // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIRenderTarget.LoadPageFromGameAssetPath
struct UPixUIRenderTarget_LoadPageFromGameAssetPath_Params
{
	struct FString                                     strAssetPath;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIRenderTarget.LoadPageFromData
struct UPixUIRenderTarget_LoadPageFromData_Params
{
	TArray<unsigned char>                              arrayData;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     strBasePath;                                              // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIRenderTarget.HistoryGo
struct UPixUIRenderTarget_HistoryGo_Params
{
	int                                                nStep;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIRenderTarget.GetRenderTarget2DWidth
struct UPixUIRenderTarget_GetRenderTarget2DWidth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIRenderTarget.GetRenderTarget2DHeight
struct UPixUIRenderTarget_GetRenderTarget2DHeight_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIRenderTarget.GetRenderTarget2D
struct UPixUIRenderTarget_GetRenderTarget2D_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIRenderTarget.DestroyPage
struct UPixUIRenderTarget_DestroyPage_Params
{
};

// Function PixUI.PixUIRenderTarget.Create
struct UPixUIRenderTarget_Create_Params
{
	int                                                nWidth;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                nHeight;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              fScale;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAsyncMode;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGammaSpace;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAntiAliasing;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIRenderTarget.ClosePage
struct UPixUIRenderTarget_ClosePage_Params
{
};

// Function PixUI.PixUIScriptVM.SetScriptGlobalString
struct UPixUIScriptVM_SetScriptGlobalString_Params
{
	struct FString                                     StrName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     strKey;                                                   // (Parm, ZeroConstructor)
	struct FString                                     strValue;                                                 // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIScriptVM.SetScriptGlobalNumber
struct UPixUIScriptVM_SetScriptGlobalNumber_Params
{
	struct FString                                     StrName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     strKey;                                                   // (Parm, ZeroConstructor)
	float                                              fValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIScriptVM.SetScriptGlobalBoolean
struct UPixUIScriptVM_SetScriptGlobalBoolean_Params
{
	struct FString                                     StrName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     strKey;                                                   // (Parm, ZeroConstructor)
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIScriptVM.SetBeSupportEventCallNested
struct UPixUIScriptVM_SetBeSupportEventCallNested_Params
{
	bool                                               bSupportEventCallNested;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIScriptVM.SetBeDelayCallMessage
struct UPixUIScriptVM_SetBeDelayCallMessage_Params
{
	bool                                               bDelayMessage;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIScriptVM.SendPxMessage
struct UPixUIScriptVM_SendPxMessage_Params
{
	struct FString                                     strMessage;                                               // (Parm, ZeroConstructor)
	int                                                nWaitMS;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIScriptVM.PostPxMessage
struct UPixUIScriptVM_PostPxMessage_Params
{
	struct FString                                     strMessage;                                               // (Parm, ZeroConstructor)
	int                                                nWaitMS;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIScriptVM.LoadURL
struct UPixUIScriptVM_LoadURL_Params
{
	struct FString                                     strUrl;                                                   // (Parm, ZeroConstructor)
	int                                                nWaitMS;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIScriptVM.IsValid
struct UPixUIScriptVM_IsValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIScriptVM.GetScriptGlobalString
struct UPixUIScriptVM_GetScriptGlobalString_Params
{
	struct FString                                     StrName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     strKey;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIScriptVM.GetScriptGlobalNumber
struct UPixUIScriptVM_GetScriptGlobalNumber_Params
{
	struct FString                                     StrName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     strKey;                                                   // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIScriptVM.GetScriptGlobalBoolean
struct UPixUIScriptVM_GetScriptGlobalBoolean_Params
{
	struct FString                                     StrName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     strKey;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIScriptVM.GetPxVMId
struct UPixUIScriptVM_GetPxVMId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIScriptVM.DoFile
struct UPixUIScriptVM_DoFile_Params
{
	struct FString                                     StrFilePath;                                              // (Parm, ZeroConstructor)
	int                                                nWaitMS;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIScriptVM.DoBufferByAssetPath
struct UPixUIScriptVM_DoBufferByAssetPath_Params
{
	struct FString                                     strAssetPath;                                             // (Parm, ZeroConstructor)
	struct FString                                     StrName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     strModuleName;                                            // (Parm, ZeroConstructor)
	int                                                nWaitMS;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIScriptVM.DoBuffer
struct UPixUIScriptVM_DoBuffer_Params
{
	TArray<unsigned char>                              arrayData;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     strBasePath;                                              // (Parm, ZeroConstructor)
	struct FString                                     StrName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     strModuleName;                                            // (Parm, ZeroConstructor)
	int                                                nWaitMS;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIScriptVM.DestroyVM
struct UPixUIScriptVM_DestroyVM_Params
{
	int                                                nWaitMS;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIScriptVM.CreateScriptGlobal
struct UPixUIScriptVM_CreateScriptGlobal_Params
{
	struct FString                                     StrName;                                                  // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIScriptVM.Create
struct UPixUIScriptVM_Create_Params
{
	bool                                               bAsyncMode;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                nWaitMS;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIScriptVM.CloseVM
struct UPixUIScriptVM_CloseVM_Params
{
	int                                                nWaitMS;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIViewPortWidget.SendPxMessage
struct UPixUIViewPortWidget_SendPxMessage_Params
{
	struct FString                                     strMessage;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIViewPortWidget.PostPxViewMessage
struct UPixUIViewPortWidget_PostPxViewMessage_Params
{
	struct FString                                     strMessage;                                               // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIViewPortWidget.PostPxMessage
struct UPixUIViewPortWidget_PostPxMessage_Params
{
	struct FString                                     strMessage;                                               // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIViewPortWidget.OnPixUITransformDelegate
struct UPixUIViewPortWidget_OnPixUITransformDelegate_Params
{
	EPxWidgetTransformType                             EPxWidgetTransformType;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                nParam1;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                nParam2;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIViewPortWidget.OnPixUIPromptDelegate
struct UPixUIViewPortWidget_OnPixUIPromptDelegate_Params
{
	struct FString                                     strTip;                                                   // (Parm, ZeroConstructor)
	struct FString                                     strDefault;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIViewPortWidget.OnPixUIOpenDelegate
struct UPixUIViewPortWidget_OnPixUIOpenDelegate_Params
{
	struct FString                                     strUrl;                                                   // (Parm, ZeroConstructor)
	struct FString                                     StrName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     strFeatures;                                              // (Parm, ZeroConstructor)
	bool                                               bReplace;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIViewPortWidget.OnPixUIConfirmDelegate
struct UPixUIViewPortWidget_OnPixUIConfirmDelegate_Params
{
	struct FString                                     strConfirmMsg;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIViewPortWidget.LoadPxViewFromUrl
struct UPixUIViewPortWidget_LoadPxViewFromUrl_Params
{
	struct FString                                     strUrl;                                                   // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIViewPortWidget.LoadPxViewFromGameAssetPath
struct UPixUIViewPortWidget_LoadPxViewFromGameAssetPath_Params
{
	struct FString                                     strAssetPath;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIViewPortWidget.LoadPxViewFromData
struct UPixUIViewPortWidget_LoadPxViewFromData_Params
{
	TArray<unsigned char>                              arrayData;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     strRootPath;                                              // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIViewPortWidget.LoadPageFromUrl
struct UPixUIViewPortWidget_LoadPageFromUrl_Params
{
	struct FString                                     strUrl;                                                   // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIViewPortWidget.LoadPageFromGameAssetPath
struct UPixUIViewPortWidget_LoadPageFromGameAssetPath_Params
{
	struct FString                                     strAssetPath;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIViewPortWidget.LoadPageFromData
struct UPixUIViewPortWidget_LoadPageFromData_Params
{
	TArray<unsigned char>                              arrayData;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     strRootPath;                                              // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIViewPortWidget.GetPixUIWidget
struct UPixUIViewPortWidget_GetPixUIWidget_Params
{
	class UPixUIWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PixUI.PixUIViewPortWidget.ClosePxView
struct UPixUIViewPortWidget_ClosePxView_Params
{
};

// Function PixUI.PixUIViewPortWidget.ClosePage
struct UPixUIViewPortWidget_ClosePage_Params
{
};

// Function PixUI.PixUIWidget.ShowNextDrawItem
struct UPixUIWidget_ShowNextDrawItem_Params
{
};

// Function PixUI.PixUIWidget.ShowNextDrawBatch
struct UPixUIWidget_ShowNextDrawBatch_Params
{
};

// Function PixUI.PixUIWidget.ShowAllDrawItem
struct UPixUIWidget_ShowAllDrawItem_Params
{
};

// Function PixUI.PixUIWidget.ShowAllDrawBatch
struct UPixUIWidget_ShowAllDrawBatch_Params
{
};

// Function PixUI.PixUIWidget.SetScriptGlobalString
struct UPixUIWidget_SetScriptGlobalString_Params
{
	struct FString                                     StrName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     strKey;                                                   // (Parm, ZeroConstructor)
	struct FString                                     strValue;                                                 // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIWidget.SetScriptGlobalNumber
struct UPixUIWidget_SetScriptGlobalNumber_Params
{
	struct FString                                     StrName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     strKey;                                                   // (Parm, ZeroConstructor)
	float                                              fValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIWidget.SetScriptGlobalBoolean
struct UPixUIWidget_SetScriptGlobalBoolean_Params
{
	struct FString                                     StrName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     strKey;                                                   // (Parm, ZeroConstructor)
	bool                                               bValue;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIWidget.SetBeSupportEventCallNested
struct UPixUIWidget_SetBeSupportEventCallNested_Params
{
	bool                                               bSupportEventCallNested;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIWidget.SetBeDelayCallMessage
struct UPixUIWidget_SetBeDelayCallMessage_Params
{
	bool                                               bDelayMessage;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIWidget.SetBackgroundBlur
struct UPixUIWidget_SetBackgroundBlur_Params
{
	float                                              fBlurStrength;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIWidget.SetAutoTransform
struct UPixUIWidget_SetAutoTransform_Params
{
	bool                                               bAutoTransform;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIWidget.SendPxMessage
struct UPixUIWidget_SendPxMessage_Params
{
	struct FString                                     strMessage;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIWidget.PostPxMessage
struct UPixUIWidget_PostPxMessage_Params
{
	struct FString                                     strMessage;                                               // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidget.OpenPageFromUrl
struct UPixUIWidget_OpenPageFromUrl_Params
{
	struct FString                                     strUrl;                                                   // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidget.OpenPageFromGameAssetPath
struct UPixUIWidget_OpenPageFromGameAssetPath_Params
{
	struct FString                                     strAssetPath;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidget.OpenPageFromData
struct UPixUIWidget_OpenPageFromData_Params
{
	TArray<unsigned char>                              arrayData;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     strBasePath;                                              // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidget.OnExternalTouchEvent
struct UPixUIWidget_OnExternalTouchEvent_Params
{
	struct FVector2D                                   v2dPosTouch;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                nPointerIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EPxTouchType                                       ETouchType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIWidget.OnExternalTextInput
struct UPixUIWidget_OnExternalTextInput_Params
{
	struct FString                                     strNewInput;                                              // (Parm, ZeroConstructor)
	bool                                               beEndInput;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               beLostFocus;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               beReplace;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIWidget.OnExternalMouseEvent
struct UPixUIWidget_OnExternalMouseEvent_Params
{
	struct FVector2D                                   v2dPosMouse;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   v2dOffsetWheel;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EPxMouseType                                       eMouseType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EPxKeyEventType                                    uEvent;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIWidget.OnExternalKeyBoardEvent
struct UPixUIWidget_OnExternalKeyBoardEvent_Params
{
	struct FKeyEvent                                   KeyEvent;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	EPxKeyEventType                                    eEventType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIWidget.LoadPageFromUrl
struct UPixUIWidget_LoadPageFromUrl_Params
{
	struct FString                                     strUrl;                                                   // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidget.LoadPageFromGameAssetPath
struct UPixUIWidget_LoadPageFromGameAssetPath_Params
{
	struct FString                                     strAssetPath;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidget.LoadPageFromData
struct UPixUIWidget_LoadPageFromData_Params
{
	TArray<unsigned char>                              arrayData;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     strBasePath;                                              // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidget.HistoryGo
struct UPixUIWidget_HistoryGo_Params
{
	int                                                nStep;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUI.PixUIWidget.GetSlotObjectByTagId
struct UPixUIWidget_GetSlotObjectByTagId_Params
{
	struct FString                                     strSlotTagId;                                             // (Parm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidget.GetScriptGlobalString
struct UPixUIWidget_GetScriptGlobalString_Params
{
	struct FString                                     StrName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     strKey;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PixUI.PixUIWidget.GetScriptGlobalNumber
struct UPixUIWidget_GetScriptGlobalNumber_Params
{
	struct FString                                     StrName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     strKey;                                                   // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidget.GetScriptGlobalBoolean
struct UPixUIWidget_GetScriptGlobalBoolean_Params
{
	struct FString                                     StrName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     strKey;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidget.GetPxWinId
struct UPixUIWidget_GetPxWinId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PixUIWidget.GetCtrlWidget
struct UPixUIWidget_GetCtrlWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PixUI.PixUIWidget.DestroyPage
struct UPixUIWidget_DestroyPage_Params
{
};

// Function PixUI.PixUIWidget.CreateScriptGlobal
struct UPixUIWidget_CreateScriptGlobal_Params
{
	struct FString                                     StrName;                                                  // (Parm, ZeroConstructor)
};

// Function PixUI.PixUIWidget.ClosePage
struct UPixUIWidget_ClosePage_Params
{
};

// Function PixUI.PxCustomDelegate.OnPxCustomDelegate
struct UPxCustomDelegate_OnPxCustomDelegate_Params
{
};

// Function PixUI.PxCustomDelegate.MakeCustomDelegate
struct UPxCustomDelegate_MakeCustomDelegate_Params
{
	struct FString                                     strCustomDelegateName;                                    // (Parm, ZeroConstructor)
	class UPxCustomDelegate*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PxCustomInterfaceDyImp.MakeCustomInterface
struct UPxCustomInterfaceDyImp_MakeCustomInterface_Params
{
	struct FString                                     strCustomInterfaceName;                                   // (Parm, ZeroConstructor)
	class UClass*                                      pOverrideBaseClass;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPxCustomInterfaceDyImp*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUI.PxFileLoad.OnFileLoad
struct UPxFileLoad_OnFileLoad_Params
{
	TArray<unsigned char>                              arrayFileData;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

