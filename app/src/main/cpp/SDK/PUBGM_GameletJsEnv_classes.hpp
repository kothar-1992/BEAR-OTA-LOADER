#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameletJsEnv.GameletDynamicDelegateProxy
// 0x0048 (0x0070 - 0x0028)
class UGameletDynamicDelegateProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletDynamicDelegateProxy");
		return pStaticClass;
	}


	void Fire();
};


// Class GameletJsEnv.GameletExtensionMethods
// 0x0000 (0x0028 - 0x0028)
class UGameletExtensionMethods : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletExtensionMethods");
		return pStaticClass;
	}

};


// Class GameletJsEnv.GameletJSAnimGeneratedClass
// 0x0060 (0x03E0 - 0x0380)
class UGameletJSAnimGeneratedClass : public UAnimBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0380(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletJSAnimGeneratedClass");
		return pStaticClass;
	}

};


// Class GameletJsEnv.GameletJSGeneratedClass
// 0x0060 (0x0370 - 0x0310)
class UGameletJSGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0310(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletJSGeneratedClass");
		return pStaticClass;
	}

};


// Class GameletJsEnv.GameletJSGeneratedFunction
// 0x0068 (0x0128 - 0x00C0)
class UGameletJSGeneratedFunction : public UFunction
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00C0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletJSGeneratedFunction");
		return pStaticClass;
	}

};


// Class GameletJsEnv.GameletJSWidgetGeneratedClass
// 0x0060 (0x03E0 - 0x0380)
class UGameletJSWidgetGeneratedClass : public UWidgetBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0380(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletJSWidgetGeneratedClass");
		return pStaticClass;
	}

};


// Class GameletJsEnv.GameletTypeScriptBlueprint
// 0x0000 (0x00D8 - 0x00D8)
class UGameletTypeScriptBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletTypeScriptBlueprint");
		return pStaticClass;
	}

};


// Class GameletJsEnv.GameletTypeScriptGeneratedClass
// 0x00A0 (0x03B0 - 0x0310)
class UGameletTypeScriptGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x99];                                      // 0x0310(0x0099) MISSED OFFSET
	bool                                               HasConstructor;                                           // 0x03A9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03AA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletTypeScriptGeneratedClass");
		return pStaticClass;
	}

};


// Class GameletJsEnv.GameletTypeScriptObject
// 0x0000 (0x0028 - 0x0028)
class UGameletTypeScriptObject : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletTypeScriptObject");
		return pStaticClass;
	}

};


}

