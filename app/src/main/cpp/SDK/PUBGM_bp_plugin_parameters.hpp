#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bp_plugin.bp_pluginBPLibrary.bp_pluginSendEvent
struct Ubp_pluginBPLibrary_bp_pluginSendEvent_Params
{
	struct FString                                     jsonEventCmd;                                             // (Parm, ZeroConstructor)
};

// Function bp_plugin.bp_pluginBPLibrary.bp_pluginRequestInstallWidget
struct Ubp_pluginBPLibrary_bp_pluginRequestInstallWidget_Params
{
	int                                                wigetType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     authInfo;                                                 // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bp_plugin.bp_pluginBPLibrary.bp_pluginLaunchMeemoFunction
struct Ubp_pluginBPLibrary_bp_pluginLaunchMeemoFunction_Params
{
	struct FString                                     Param;                                                    // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bp_plugin.bp_pluginBPLibrary.bp_pluginIsInForeground
struct Ubp_pluginBPLibrary_bp_pluginIsInForeground_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bp_plugin.bp_pluginBPLibrary.bp_pluginGetInstalledWidgetType
struct Ubp_pluginBPLibrary_bp_pluginGetInstalledWidgetType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

