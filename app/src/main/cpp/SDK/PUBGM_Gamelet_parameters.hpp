#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Gamelet.Gamelet.UpdateProductConfig
struct UGamelet_UpdateProductConfig_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.StopTick
struct UGamelet_StopTick_Params
{
};

// Function Gamelet.Gamelet.StartTick
struct UGamelet_StartTick_Params
{
};

// Function Gamelet.Gamelet.SetTickIntervalSec
struct UGamelet_SetTickIntervalSec_Params
{
	float                                              TickIntervalSec;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gamelet.Gamelet.SetScriptExternalLoadDir
struct UGamelet_SetScriptExternalLoadDir_Params
{
	struct FString                                     ExternalLoadDir;                                          // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.SetFont
struct UGamelet_SetFont_Params
{
	struct FString                                     FontName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     FontPath;                                                 // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.SetDefaultFont
struct UGamelet_SetDefaultFont_Params
{
	struct FString                                     FontName;                                                 // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.SetBuiltinResConfig
struct UGamelet_SetBuiltinResConfig_Params
{
	struct FString                                     ResConfig;                                                // (Parm, ZeroConstructor)
};

// Function Gamelet.Gamelet.SetAppVisibility
struct UGamelet_SetAppVisibility_Params
{
	struct FString                                     AppID;                                                    // (Parm, ZeroConstructor)
	bool                                               Visible;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.SetAppPageVisibility
struct UGamelet_SetAppPageVisibility_Params
{
	struct FString                                     AppID;                                                    // (Parm, ZeroConstructor)
	struct FString                                     AppPage;                                                  // (Parm, ZeroConstructor)
	bool                                               Visible;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.SendMessageToSdk
struct UGamelet_SendMessageToSdk_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.SendMessageToApp
struct UGamelet_SendMessageToApp_Params
{
	struct FString                                     AppID;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.RefreshUserdata
struct UGamelet_RefreshUserdata_Params
{
	TMap<struct FString, struct FString>               UserData;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.OpenBeforeLogin
struct UGamelet_OpenBeforeLogin_Params
{
	TEnumAsByte<EGameletEnvironment>                   Environment;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.OpenApp
struct UGamelet_OpenApp_Params
{
	struct FString                                     AppID;                                                    // (Parm, ZeroConstructor)
	struct FString                                     OpenArgs;                                                 // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.Open
struct UGamelet_Open_Params
{
	TEnumAsByte<EGameletEnvironment>                   Environment;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               UserData;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.Initialize
struct UGamelet_Initialize_Params
{
	class UGameletSettings*                            Settings;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.GetProductConfig
struct UGamelet_GetProductConfig_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.Gamelet.GetGlobalSettings
struct UGamelet_GetGlobalSettings_Params
{
	class UGameletSettings*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.GetBackTrace
struct UGamelet_GetBackTrace_Params
{
	struct FString                                     TraceInfo;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.Get
struct UGamelet_Get_Params
{
	class UGamelet*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.ExecOnSDKMessage
struct UGamelet_ExecOnSDKMessage_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.ExecOnReportData
struct UGamelet_ExecOnReportData_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FString                                     Data;                                                     // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.ExecOnRefreshUserdata
struct UGamelet_ExecOnRefreshUserdata_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.EnableLog
struct UGamelet_EnableLog_Params
{
	bool                                               Enable;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gamelet.Gamelet.Deinitialize
struct UGamelet_Deinitialize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.CollectPixUILogOutput
struct UGamelet_CollectPixUILogOutput_Params
{
	EPxLogGroups                                       PixUILogType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EPxLogLevels                                       PixUILogLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     logContent;                                               // (Parm, ZeroConstructor)
};

// Function Gamelet.Gamelet.CloseAppPage
struct UGamelet_CloseAppPage_Params
{
	struct FString                                     AppID;                                                    // (Parm, ZeroConstructor)
	struct FString                                     AppPage;                                                  // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.CloseApp
struct UGamelet_CloseApp_Params
{
	struct FString                                     AppID;                                                    // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.Close
struct UGamelet_Close_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.Gamelet.AllAssetsGC
struct UGamelet_AllAssetsGC_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletEnvMgr.OnEnvToGameMessage
struct UGameletEnvMgr_OnEnvToGameMessage_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletEnvMgr.OnEnvToEntryMessage
struct UGameletEnvMgr_OnEnvToEntryMessage_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletEnvMgr.OnEnvReportData
struct UGameletEnvMgr_OnEnvReportData_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FString                                     Data;                                                     // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletEnvMgr.OnEnvRefreshUserdata
struct UGameletEnvMgr_OnEnvRefreshUserdata_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletEnvMgr.OnEnvLoaded
struct UGameletEnvMgr_OnEnvLoaded_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	int                                                ErrorCode;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gamelet.GameletEnvMgr.OnEnvInternalError
struct UGameletEnvMgr_OnEnvInternalError_Params
{
	int                                                ErrorCode;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ErrorMsg;                                                 // (Parm, ZeroConstructor)
};

// Function Gamelet.GameletEnvMgr.GetBackTrace
struct UGameletEnvMgr_GetBackTrace_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletFile.WriteFile
struct UGameletFile_WriteFile_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	struct FGameletArrayBuffer                         ArrayBuffer;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletFile.SaveStringToFile
struct UGameletFile_SaveStringToFile_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Content;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletFile.ReadFile
struct UGameletFile_ReadFile_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	struct FGameletArrayBuffer                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Gamelet.GameletFile.LoadFileToString
struct UGameletFile_LoadFileToString_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletFile.GetFileMd5
struct UGameletFile_GetFileMd5_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletFile.FileSize
struct UGameletFile_FileSize_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletFile.FileExists
struct UGameletFile_FileExists_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletFile.DirectoryExists
struct UGameletFile_DirectoryExists_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletFile.DeleteFile
struct UGameletFile_DeleteFile_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletFile.DeleteDirectory
struct UGameletFile_DeleteDirectory_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletFile.CreateDirectory
struct UGameletFile_CreateDirectory_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletPaths.ToAbsolutePathForWrite
struct UGameletPaths_ToAbsolutePathForWrite_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPaths.ToAbsolutePathForRead
struct UGameletPaths_ToAbsolutePathForRead_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPaths.RootDir
struct UGameletPaths_RootDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPaths.ProjectUserDir
struct UGameletPaths_ProjectUserDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPaths.ProjectSavedDir
struct UGameletPaths_ProjectSavedDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPaths.ProjectModsDir
struct UGameletPaths_ProjectModsDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPaths.ProjectIntermediateDir
struct UGameletPaths_ProjectIntermediateDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPaths.ProjectDir
struct UGameletPaths_ProjectDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPaths.ProjectContentDir
struct UGameletPaths_ProjectContentDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPaths.ProjectConfigDir
struct UGameletPaths_ProjectConfigDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPaths.LaunchDir
struct UGameletPaths_LaunchDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPaths.GetPuertsScriptFolderName
struct UGameletPaths_GetPuertsScriptFolderName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPaths.GetPuertsEntrancePath
struct UGameletPaths_GetPuertsEntrancePath_Params
{
	struct FString                                     PakName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPaths.GetPuertsAppScriptPath
struct UGameletPaths_GetPuertsAppScriptPath_Params
{
	struct FString                                     AppFolderName;                                            // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPaths.GetPuertsAppNameByPakName
struct UGameletPaths_GetPuertsAppNameByPakName_Params
{
	struct FString                                     PakName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPaths.GetPuertsAppIndexPath
struct UGameletPaths_GetPuertsAppIndexPath_Params
{
	struct FString                                     AppFolderName;                                            // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPaths.GameletSavedRoot
struct UGameletPaths_GameletSavedRoot_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPaths.GameletFolderName
struct UGameletPaths_GameletFolderName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPaths.GameletContentRoot
struct UGameletPaths_GameletContentRoot_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPaths.GameletAppArchiveRoot
struct UGameletPaths_GameletAppArchiveRoot_Params
{
	struct FString                                     AppID;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPuertsEnvMgr.OnEnvMessage
struct UGameletPuertsEnvMgr_OnEnvMessage_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
};

// Function Gamelet.GameletPuertsEnvMgr.OnEnvLoaded
struct UGameletPuertsEnvMgr_OnEnvLoaded_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	bool                                               IsSuccess;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gamelet.GameletPuertsEnvMgr.Get
struct UGameletPuertsEnvMgr_Get_Params
{
	class UGameletPuertsEnvMgr*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletPuertsUtilities.UpdateTextureResources
struct UGameletPuertsUtilities_UpdateTextureResources_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gamelet.GameletPuertsUtilities.UnmountPak
struct UGameletPuertsUtilities_UnmountPak_Params
{
	struct FString                                     pakPath;                                                  // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletPuertsUtilities.RemoveUserWidgetFromGame
struct UGameletPuertsUtilities_RemoveUserWidgetFromGame_Params
{
	class UUserWidget*                                 UserWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     PanelInfo;                                                // (Parm, ZeroConstructor)
};

// Function Gamelet.GameletPuertsUtilities.ReleaseTextureResource
struct UGameletPuertsUtilities_ReleaseTextureResource_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gamelet.GameletPuertsUtilities.MountPak
struct UGameletPuertsUtilities_MountPak_Params
{
	struct FString                                     pakPath;                                                  // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletPuertsUtilities.LoadUI
struct UGameletPuertsUtilities_LoadUI_Params
{
	struct FString                                     Ref;                                                      // (Parm, ZeroConstructor)
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Gamelet.GameletPuertsUtilities.LoadImageToTexture2D
struct UGameletPuertsUtilities_LoadImageToTexture2D_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	TEnumAsByte<ETextureGroup>                         LODGroup;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsSRGB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletPuertsUtilities.IsWithEditor
struct UGameletPuertsUtilities_IsWithEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletPuertsUtilities.HelloWorld
struct UGameletPuertsUtilities_HelloWorld_Params
{
};

// Function Gamelet.GameletPuertsUtilities.GetWidgetAnimationByName
struct UGameletPuertsUtilities_GetWidgetAnimationByName_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UWidgetAnimation*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Gamelet.GameletPuertsUtilities.GetSDKVersion
struct UGameletPuertsUtilities_GetSDKVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPuertsUtilities.GetPlatformDesc
struct UGameletPuertsUtilities_GetPlatformDesc_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPuertsUtilities.GetNetWorkType
struct UGameletPuertsUtilities_GetNetWorkType_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletPuertsUtilities.GetHardwareInfo
struct UGameletPuertsUtilities_GetHardwareInfo_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPuertsUtilities.GetEngineVersion
struct UGameletPuertsUtilities_GetEngineVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Gamelet.GameletPuertsUtilities.FlushPuertsVMMessages
struct UGameletPuertsUtilities_FlushPuertsVMMessages_Params
{
};

// Function Gamelet.GameletPuertsUtilities.AddUserWidgetToGame
struct UGameletPuertsUtilities_AddUserWidgetToGame_Params
{
	class UUserWidget*                                 UserWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     PanelInfo;                                                // (Parm, ZeroConstructor)
};

// Function Gamelet.GameletSettings.IsValidSetting
struct UGameletSettings_IsValidSetting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletSettings.Get
struct UGameletSettings_Get_Params
{
	class UGameletSettings*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletWindow.OnPxWidgetScriptStateInit
struct UGameletWindow_OnPxWidgetScriptStateInit_Params
{
};

// Function Gamelet.GameletWindow.OnPxWidgetScriptStateDone
struct UGameletWindow_OnPxWidgetScriptStateDone_Params
{
};

// Function Gamelet.GameletWindow.OnPxWidgetRequestOpen
struct UGameletWindow_OnPxWidgetRequestOpen_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Features;                                                 // (Parm, ZeroConstructor)
	bool                                               bReplace;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gamelet.GameletWindow.OnPxWidgetMessage
struct UGameletWindow_OnPxWidgetMessage_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
};

// Function Gamelet.GameletWindow.OnPxWidgetLoaded
struct UGameletWindow_OnPxWidgetLoaded_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	int                                                ErrorCode;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gamelet.GameletWindow.OnPxWidgetInternalError
struct UGameletWindow_OnPxWidgetInternalError_Params
{
	int                                                ErrorCode;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ErrorMsg;                                                 // (Parm, ZeroConstructor)
};

// Function Gamelet.GameletWindow.OnPxWidgetClose
struct UGameletWindow_OnPxWidgetClose_Params
{
};

}

