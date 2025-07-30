#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Gamelet.Gamelet
// 0x0020 (0x0048 - 0x0028)
class UGamelet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.Gamelet");
		return pStaticClass;
	}


	int UpdateProductConfig();
	static void StopTick();
	static void StartTick();
	static void SetTickIntervalSec(float TickIntervalSec);
	int SetScriptExternalLoadDir(const struct FString& ExternalLoadDir);
	int SetFont(const struct FString& FontName, const struct FString& FontPath);
	int SetDefaultFont(const struct FString& FontName);
	void SetBuiltinResConfig(const struct FString& ResConfig);
	int SetAppVisibility(const struct FString& AppID, bool Visible);
	int SetAppPageVisibility(const struct FString& AppID, const struct FString& AppPage, bool Visible);
	int SendMessageToSdk(const struct FString& Msg);
	int SendMessageToApp(const struct FString& AppID, const struct FString& Msg);
	int RefreshUserdata(TMap<struct FString, struct FString> UserData);
	int OpenBeforeLogin(TEnumAsByte<EGameletEnvironment> Environment);
	int OpenApp(const struct FString& AppID, const struct FString& OpenArgs);
	int Open(TEnumAsByte<EGameletEnvironment> Environment, TMap<struct FString, struct FString> UserData);
	int Initialize(class UGameletSettings* Settings);
	static struct FString GetProductConfig();
	class UGameletSettings* GetGlobalSettings();
	int GetBackTrace(struct FString* TraceInfo);
	static class UGamelet* Get();
	int ExecOnSDKMessage(const struct FString& Msg);
	int ExecOnReportData(const struct FString& EventName, const struct FString& Data);
	int ExecOnRefreshUserdata();
	void EnableLog(bool Enable);
	int Deinitialize();
	void CollectPixUILogOutput(EPxLogGroups PixUILogType, EPxLogLevels PixUILogLevel, const struct FString& logContent);
	int CloseAppPage(const struct FString& AppID, const struct FString& AppPage);
	int CloseApp(const struct FString& AppID);
	int Close();
	int AllAssetsGC();
};


// Class Gamelet.GameletMatBrush
// 0x0008 (0x0040 - 0x0038)
class UGameletMatBrush : public UPixUIBrushWrapper
{
public:
	class UMaterialInstanceDynamic*                    MatInstance;                                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletMatBrush");
		return pStaticClass;
	}

};


// Class Gamelet.GameletEnvMgr
// 0x0070 (0x0098 - 0x0028)
class UGameletEnvMgr : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletEnvMgr");
		return pStaticClass;
	}


	int OnEnvToGameMessage(const struct FString& Msg);
	int OnEnvToEntryMessage(const struct FString& Msg);
	int OnEnvReportData(const struct FString& EventName, const struct FString& Data);
	int OnEnvRefreshUserdata();
	void OnEnvLoaded(const struct FString& URL, int ErrorCode);
	void OnEnvInternalError(int ErrorCode, const struct FString& ErrorMsg);
	struct FString GetBackTrace();
};


// Class Gamelet.GameletFile
// 0x0000 (0x0028 - 0x0028)
class UGameletFile : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletFile");
		return pStaticClass;
	}


	static bool WriteFile(const struct FString& Path, const struct FGameletArrayBuffer& ArrayBuffer);
	static bool SaveStringToFile(const struct FString& Path, const struct FString& Content);
	static struct FGameletArrayBuffer ReadFile(const struct FString& Path);
	static struct FString LoadFileToString(const struct FString& Path);
	static struct FString GetFileMd5(const struct FString& Path);
	static int64_t FileSize(const struct FString& Path);
	static bool FileExists(const struct FString& Path);
	static bool DirectoryExists(const struct FString& Path);
	static bool DeleteFile(const struct FString& Path);
	static bool DeleteDirectory(const struct FString& Path);
	static bool CreateDirectory(const struct FString& Path);
};


// Class Gamelet.GameletPaths
// 0x0000 (0x0028 - 0x0028)
class UGameletPaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletPaths");
		return pStaticClass;
	}


	static struct FString ToAbsolutePathForWrite(const struct FString& Path);
	static struct FString ToAbsolutePathForRead(const struct FString& Path);
	static struct FString RootDir();
	static struct FString ProjectUserDir();
	static struct FString ProjectSavedDir();
	static struct FString ProjectModsDir();
	static struct FString ProjectIntermediateDir();
	static struct FString ProjectDir();
	static struct FString ProjectContentDir();
	static struct FString ProjectConfigDir();
	static struct FString LaunchDir();
	static struct FString GetPuertsScriptFolderName();
	static struct FString GetPuertsEntrancePath(const struct FString& PakName);
	static struct FString GetPuertsAppScriptPath(const struct FString& AppFolderName);
	static struct FString GetPuertsAppNameByPakName(const struct FString& PakName);
	static struct FString GetPuertsAppIndexPath(const struct FString& AppFolderName);
	static struct FString GameletSavedRoot();
	static struct FString GameletFolderName();
	static struct FString GameletContentRoot();
	static struct FString GameletAppArchiveRoot(const struct FString& AppID);
};


// Class Gamelet.GameletPuertsEnvMgr
// 0x0060 (0x0088 - 0x0028)
class UGameletPuertsEnvMgr : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPostMessage;                                            // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletPuertsEnvMgr");
		return pStaticClass;
	}


	void OnEnvMessage(const struct FString& Msg);
	void OnEnvLoaded(const struct FString& URL, bool IsSuccess);
	static class UGameletPuertsEnvMgr* Get();
};


// Class Gamelet.GameletPuertsUtilities
// 0x0000 (0x0028 - 0x0028)
class UGameletPuertsUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletPuertsUtilities");
		return pStaticClass;
	}


	static void UpdateTextureResources(class UTexture2D* Texture);
	static int UnmountPak(const struct FString& pakPath);
	static void RemoveUserWidgetFromGame(class UUserWidget* UserWidget, const struct FString& PanelInfo);
	static void ReleaseTextureResource(class UTexture2D* Texture);
	static int MountPak(const struct FString& pakPath);
	static class UUserWidget* LoadUI(const struct FString& Ref, class UObject* Obj);
	static class UTexture2D* LoadImageToTexture2D(const struct FString& Path, TEnumAsByte<ETextureGroup> LODGroup, unsigned char IsSRGB);
	static bool IsWithEditor();
	static void HelloWorld();
	static class UWidgetAnimation* GetWidgetAnimationByName(class UUserWidget* Widget, const struct FString& Name);
	static struct FString GetSDKVersion();
	static struct FString GetPlatformDesc();
	static unsigned char GetNetWorkType();
	static struct FString GetHardwareInfo();
	static struct FString GetEngineVersion();
	static void FlushPuertsVMMessages();
	static void AddUserWidgetToGame(class UUserWidget* UserWidget, const struct FString& PanelInfo);
};


// Class Gamelet.GameletSettings
// 0x0068 (0x0090 - 0x0028)
class UGameletSettings : public UObject
{
public:
	struct FScriptDelegate                             OnSDKMessage;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnRefreshUserdata;                                        // 0x0038(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnViewCreated;                                            // 0x0048(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnViewAboutToDestroy;                                     // 0x0058(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnReportData;                                             // 0x0068(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnProfileJSSDKMessage;                                    // 0x0078(0x0010) (Edit, ZeroConstructor, InstancedReference)
	bool                                               DisableJsErrReport;                                       // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableGetBackTrace;                                      // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DelayWndCallMsg;                                          // 0x008A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SupportUseEngineFont;                                     // 0x008B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseSRGB;                                                  // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x008D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletSettings");
		return pStaticClass;
	}


	bool IsValidSetting();
	static class UGameletSettings* Get();
};


// Class Gamelet.GameletWidget
// 0x0028 (0x0158 - 0x0130)
class UGameletWidget : public UCanvasPanel
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0130(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletWidget");
		return pStaticClass;
	}

};


// Class Gamelet.GameletWindow
// 0x0148 (0x0170 - 0x0028)
class UGameletWindow : public UObject
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0028(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletWindow");
		return pStaticClass;
	}


	void OnPxWidgetScriptStateInit();
	void OnPxWidgetScriptStateDone();
	bool OnPxWidgetRequestOpen(const struct FString& URL, const struct FString& Name, const struct FString& Features, bool bReplace);
	void OnPxWidgetMessage(const struct FString& Msg);
	void OnPxWidgetLoaded(const struct FString& URL, int ErrorCode);
	void OnPxWidgetInternalError(int ErrorCode, const struct FString& ErrorMsg);
	void OnPxWidgetClose();
};


}

