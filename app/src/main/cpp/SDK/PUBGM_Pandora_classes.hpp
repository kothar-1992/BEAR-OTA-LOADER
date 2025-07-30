#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Pandora.BulletScreen
// 0x00F0 (0x0220 - 0x0130)
class UBulletScreen : public UCanvasPanel
{
public:
	class UClass*                                      TemplateWidget;                                           // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxBulletLines;                                           // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BulletSpeed;                                              // 0x013C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LineHeight;                                               // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalInterval;                                       // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxCachedBulletCount;                                     // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD4];                                      // 0x014C(0x00D4) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.BulletScreen");
		return pStaticClass;
	}


	void Stop();
	void Start();
	void Resume();
	void Pause();
	void AddBullets(TArray<struct FString> Content);
	void AddBullet(const struct FString& Content);
};


// Class Pandora.BulletScreenItem
// 0x0008 (0x0268 - 0x0260)
class UBulletScreenItem : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.BulletScreenItem");
		return pStaticClass;
	}

};


// Class Pandora.GameletSDKDelegateHandler
// 0x0020 (0x0048 - 0x0028)
class UGameletSDKDelegateHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.GameletSDKDelegateHandler");
		return pStaticClass;
	}


	void ExecOnViewCreated(class UUserWidget* Widget, const struct FString& WinInfo);
	void ExecOnViewAboutToDestroy(class UUserWidget* Widget, const struct FString& WinInfo);
	int ExecOnSDKMessage(const struct FString& Msg);
	int ExecOnRefreshUserdata();
};


// Class Pandora.PLatentDelegate
// 0x0008 (0x0030 - 0x0028)
class UPLatentDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLatentDelegate");
		return pStaticClass;
	}


	void OnLatentCallback(int threadRef);
};


// Class Pandora.PLuaActor
// 0x00B0 (0x04E8 - 0x0438)
class APLuaActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0438(0x0090) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x04C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x04D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaActor");
		return pStaticClass;
	}


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};


// Class Pandora.PLuaPawn
// 0x00B0 (0x0548 - 0x0498)
class APLuaPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0498(0x0090) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0528(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0538(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaPawn");
		return pStaticClass;
	}


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};


// Class Pandora.PLuaCharacter
// 0x00B0 (0x0930 - 0x0880)
class APLuaCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0880(0x0088) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0908(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0918(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0928(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaCharacter");
		return pStaticClass;
	}


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};


// Class Pandora.PLuaController
// 0x00B0 (0x0550 - 0x04A0)
class APLuaController : public AController
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x04A0(0x0090) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0530(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0540(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaController");
		return pStaticClass;
	}


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};


// Class Pandora.PLuaPlayerController
// 0x00B0 (0x0858 - 0x07A8)
class APLuaPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x07A8(0x0090) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0838(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0848(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaPlayerController");
		return pStaticClass;
	}


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};


// Class Pandora.PLuaActorComponent
// 0x00C0 (0x01D8 - 0x0118)
class UPLuaActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0118(0x00A0) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x01C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaActorComponent");
		return pStaticClass;
	}


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};


// Class Pandora.PLuaGameModeBase
// 0x00B0 (0x0578 - 0x04C8)
class APLuaGameModeBase : public AGameModeBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x04C8(0x0090) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0558(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0568(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaGameModeBase");
		return pStaticClass;
	}


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};


// Class Pandora.PLuaHUD
// 0x00B0 (0x05D0 - 0x0520)
class APLuaHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0520(0x0090) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x05B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x05C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaHUD");
		return pStaticClass;
	}


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};


// Class Pandora.PLuaTableObjectInterface
// 0x0000 (0x0028 - 0x0028)
class UPLuaTableObjectInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaTableObjectInterface");
		return pStaticClass;
	}

};


// Class Pandora.PLuaBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UPLuaBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaBlueprintLibrary");
		return pStaticClass;
	}


	static struct FString GetStringFromVar(const struct FPLuaBPVar& Value, int Index);
	static class UObject* GetObjectFromVar(const struct FPLuaBPVar& Value, int Index);
	static float GetNumberFromVar(const struct FPLuaBPVar& Value, int Index);
	static int GetIntFromVar(const struct FPLuaBPVar& Value, int Index);
	static bool GetBoolFromVar(const struct FPLuaBPVar& Value, int Index);
	static struct FPLuaBPVar CreateVarFromString(const struct FString& Value);
	static struct FPLuaBPVar CreateVarFromObject(class UObject* WorldContextObject, class UObject* Value);
	static struct FPLuaBPVar CreateVarFromNumber(float Value);
	static struct FPLuaBPVar CreateVarFromInt(int Value);
	static struct FPLuaBPVar CreateVarFromBool(bool Value);
	static struct FPLuaBPVar CallToLuaWithArgs(class UObject* WorldContextObject, const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args, const struct FString& StateName);
	static struct FPLuaBPVar CallToLua(class UObject* WorldContextObject, const struct FString& FunctionName, const struct FString& StateName);
};


// Class Pandora.PLuaDelegate
// 0x0010 (0x0038 - 0x0028)
class UPLuaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaDelegate");
		return pStaticClass;
	}


	void EventTrigger();
};


// Class Pandora.PLuaUserWidget
// 0x00E8 (0x0348 - 0x0260)
class UPLuaUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0260(0x0090) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x02F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0300(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0310(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaUserWidget");
		return pStaticClass;
	}


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};


// Class Pandora.PPixUILogAdapter
// 0x0010 (0x0038 - 0x0028)
class UPPixUILogAdapter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PPixUILogAdapter");
		return pStaticClass;
	}


	void OnPixUILog(int InLogType, int InLogLevel, const struct FString& InLogContent);
};


// Class Pandora.PRichText
// 0x0320 (0x0420 - 0x0100)
class UPRichText : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0100(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0118(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x0128(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                Color;                                                    // 0x0180(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0190(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoWrapText;                                             // 0x0191(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0192(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x0194(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x0198(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LineHeightPercentage;                                     // 0x01A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
	TArray<class URichTextBlockDecorator*>             Decorators;                                               // 0x01B0(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x260];                                     // 0x01C0(0x0260) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PRichText");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	struct FText GetText();
};


// Class Pandora.Scale9Grid
// 0x0080 (0x02F0 - 0x0270)
class UScale9Grid : public UImage
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0270(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.Scale9Grid");
		return pStaticClass;
	}

};


// Class Pandora.WaterfallScrollView
// 0x0468 (0x0580 - 0x0118)
class UWaterfallScrollView : public UPanelWidget
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                              // 0x0118(0x02E8) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0400(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UClass*                                      TemplateWidget;                                           // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemCount;                                                // 0x0410(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ColumnCount;                                              // 0x0414(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    onReachTop;                                               // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    onReachBottom;                                            // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                        // 0x0438(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowOverscroll;                                          // 0x0439(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x146];                                     // 0x043A(0x0146) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.WaterfallScrollView");
		return pStaticClass;
	}


	void ScrollToStart();
	void RefreshLayout(int Index);
	void Fill();
	void Clear();
};


}

