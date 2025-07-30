#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BlockyLuaCore.BlockBase.SetIsDisable
struct UBlockBase_SetIsDisable_Params
{
	bool                                               Disable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockBase.IsEvent
struct UBlockBase_IsEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockBase.GetCenterPos
struct UBlockBase_GetCenterPos_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.Executeable.SupportFuncVar
struct UExecuteable_SupportFuncVar_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.Executeable.ReEditFuncVar
struct UExecuteable_ReEditFuncVar_Params
{
	class UNamedVar*                                   var;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.Executeable.DeleteFuncVar
struct UExecuteable_DeleteFuncVar_Params
{
	class UNamedVar*                                   var;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.Executeable.CreateFuncVar
struct UExecuteable_CreateFuncVar_Params
{
};

// Function BlockyLuaCore.ExpressionBase.ReleaseExpression
struct UExpressionBase_ReleaseExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
};

// Function BlockyLuaCore.ExpressionBase.CreateExpressionBase
struct UExpressionBase_CreateExpressionBase_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ArrayLengthExpression.SetTarget
struct UArrayLengthExpression_SetTarget_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            Target;                                                   // (Parm)
};

// Function BlockyLuaCore.ArrayLengthExpression.GetTarget
struct UArrayLengthExpression_GetTarget_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ArrayLengthExpression.CreateArrayLengthExpression
struct UArrayLengthExpression_CreateArrayLengthExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.NamedVar.UpdateColor
struct UNamedVar_UpdateColor_Params
{
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BlockyLuaCore.NamedVar.SetNameVarColor
struct UNamedVar_SetNameVarColor_Params
{
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BlockyLuaCore.NamedVar.SetIsArray
struct UNamedVar_SetIsArray_Params
{
	bool                                               IsArray;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.NamedVar.SetInitValueString
struct UNamedVar_SetInitValueString_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.NamedVar.SetDefiner
struct UNamedVar_SetDefiner_Params
{
	class UVarDefiner*                                 Definer;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.NamedVar.SetAccessType
struct UNamedVar_SetAccessType_Params
{
	TEnumAsByte<EBlockyAccessType>                     Access;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.NamedVar.IsGlobalVar
struct UNamedVar_IsGlobalVar_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.NamedVar.IsCustomColor
struct UNamedVar_IsCustomColor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.NamedVar.IsArray
struct UNamedVar_IsArray_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.NamedVar.InitColorDesc
struct UNamedVar_InitColorDesc_Params
{
};

// Function BlockyLuaCore.NamedVar.GetNameVarColorDesc
struct UNamedVar_GetNameVarColorDesc_Params
{
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsArray;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UColorDesc*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.NamedVar.GetNameVarColor
struct UNamedVar_GetNameVarColor_Params
{
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsArray;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.NamedVar.GetInitValueString
struct UNamedVar_GetInitValueString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.NamedVar.GetDefiner
struct UNamedVar_GetDefiner_Params
{
	class UVarDefiner*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.NamedVar.GetColorStr
struct UNamedVar_GetColorStr_Params
{
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsArray;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.NamedVar.GetAccessType
struct UNamedVar_GetAccessType_Params
{
	TEnumAsByte<EBlockyAccessType>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.NamedVar.CallCustomSelectObject
struct UNamedVar_CallCustomSelectObject_Params
{
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsArray;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.NamedVar.AddColorToArray
struct UNamedVar_AddColorToArray_Params
{
};

// Function BlockyLuaCore.BinaryOperatorExpression.SetWithParentheses
struct UBinaryOperatorExpression_SetWithParentheses_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BinaryOperatorExpression.SetRight
struct UBinaryOperatorExpression_SetRight_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            Value;                                                    // (Parm)
};

// Function BlockyLuaCore.BinaryOperatorExpression.SetOperation
struct UBinaryOperatorExpression_SetOperation_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TEnumAsByte<EBlockyBinaryOperation>                BlockyOp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BinaryOperatorExpression.SetLeft
struct UBinaryOperatorExpression_SetLeft_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            Value;                                                    // (Parm)
};

// Function BlockyLuaCore.BinaryOperatorExpression.GetWithParentheses
struct UBinaryOperatorExpression_GetWithParentheses_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BinaryOperatorExpression.GetRight
struct UBinaryOperatorExpression_GetRight_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.BinaryOperatorExpression.GetOperation
struct UBinaryOperatorExpression_GetOperation_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TEnumAsByte<EBlockyBinaryOperation>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BinaryOperatorExpression.GetLeft
struct UBinaryOperatorExpression_GetLeft_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.BinaryOperatorExpression.CreateBinaryOperatorExpression
struct UBinaryOperatorExpression_CreateBinaryOperatorExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.CategoryDefiner.GetCurrentLocateShowName
struct UCategoryDefiner_GetCurrentLocateShowName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyCategoryItemObject.GetSelectedIconBrush
struct UBlockyCategoryItemObject_GetSelectedIconBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.BlockyCategoryItemObject.GetIconBrush
struct UBlockyCategoryItemObject_GetIconBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraph.UpdateCustomBlockName
struct UBlockyGraph_UpdateCustomBlockName_Params
{
};

// Function BlockyLuaCore.BlockyGraph.TryAdjustingBlockIntoView
struct UBlockyGraph_TryAdjustingBlockIntoView_Params
{
	class UBlockyGraphData*                            GraphData;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraph.SetIsDisable
struct UBlockyGraph_SetIsDisable_Params
{
	bool                                               Disable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraph.SaveGraphToFile
struct UBlockyGraph_SaveGraphToFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               IsNewFile;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraph.SaveGraphAsTemplate
struct UBlockyGraph_SaveGraphAsTemplate_Params
{
	TArray<unsigned char>                              OutData;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraph.LoadGraphFromTemplate
struct UBlockyGraph_LoadGraphFromTemplate_Params
{
	TArray<unsigned char>                              Data;                                                     // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.BlockyGraph.IsCustomTemplateGraph
struct UBlockyGraph_IsCustomTemplateGraph_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraph.IsCustomGraph
struct UBlockyGraph_IsCustomGraph_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraph.IsBasicTemplateGraph
struct UBlockyGraph_IsBasicTemplateGraph_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraph.GetTotalBlockNum
struct UBlockyGraph_GetTotalBlockNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraph.CaptureScreenShot
struct UBlockyGraph_CaptureScreenShot_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraph.CanSaveAsTemplate
struct UBlockyGraph_CanSaveAsTemplate_Params
{
	struct FString                                     OutFailedReason;                                          // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraph.CanBeRemove
struct UBlockyGraph_CanBeRemove_Params
{
	class UBlockyGraphData*                            GraphData;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraph.CanBeDuplicated
struct UBlockyGraph_CanBeDuplicated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.UseTemplate
struct UBlockyGraphData_UseTemplate_Params
{
	class UBlockyGraph*                                templateGraph;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.UpdateVariableMenu
struct UBlockyGraphData_UpdateVariableMenu_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.UpdateVariableItemNames
struct UBlockyGraphData_UpdateVariableItemNames_Params
{
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.UpdateCustomMenu
struct UBlockyGraphData_UpdateCustomMenu_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.UpdateCustomItemNames
struct UBlockyGraphData_UpdateCustomItemNames_Params
{
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.Undo
struct UBlockyGraphData_Undo_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.TryCloseItemList
struct UBlockyGraphData_TryCloseItemList_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.ShowTips
struct UBlockyGraphData_ShowTips_Params
{
	struct FText                                       Tips;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BlockyLuaCore.BlockyGraphData.ShowBlockSettingPop
struct UBlockyGraphData_ShowBlockSettingPop_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.SetSlotString
struct UBlockyGraphData_SetSlotString_Params
{
	struct FBlockySlotString                           slotStr;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BlockyLuaCore.BlockyGraphData.SetGraphStrings
struct UBlockyGraphData_SetGraphStrings_Params
{
	struct FGraphString                                graphStr;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BlockyLuaCore.BlockyGraphData.SetCustomVariableString
struct UBlockyGraphData_SetCustomVariableString_Params
{
	struct FCustomVariableString                       variableStr;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BlockyLuaCore.BlockyGraphData.SetCustomConfigString
struct UBlockyGraphData_SetCustomConfigString_Params
{
	struct FCustomConfigString                         configStr;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BlockyLuaCore.BlockyGraphData.SetCurrentSubGraph
struct UBlockyGraphData_SetCurrentSubGraph_Params
{
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.BlockyGraphData.SetBlockLogText
struct UBlockyGraphData_SetBlockLogText_Params
{
	EBlockyLogMsgMode                                  Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UBlockBase*                                  BlockSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SlotID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Info;                                                     // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.BlockyGraphData.SetBlockLogTabNum
struct UBlockyGraphData_SetBlockLogTabNum_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.SetBlockLogNum
struct UBlockyGraphData_SetBlockLogNum_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.SaveGraphToJsonText
struct UBlockyGraphData_SaveGraphToJsonText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.SaveGraphToBinFile
struct UBlockyGraphData_SaveGraphToBinFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.BlockyGraphData.SaveGraphToBin
struct UBlockyGraphData_SaveGraphToBin_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.SaveGlobalVarToJsonText
struct UBlockyGraphData_SaveGlobalVarToJsonText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.SaveGlobalVarToBin
struct UBlockyGraphData_SaveGlobalVarToBin_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.SaveCustom
struct UBlockyGraphData_SaveCustom_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.Save
struct UBlockyGraphData_Save_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.ReturnToPreviewGraph
struct UBlockyGraphData_ReturnToPreviewGraph_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.ReturnToMainGraph
struct UBlockyGraphData_ReturnToMainGraph_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.ResetGraph
struct UBlockyGraphData_ResetGraph_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.RemoveSubGraph
struct UBlockyGraphData_RemoveSubGraph_Params
{
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.BlockyGraphData.RefreshFont
struct UBlockyGraphData_RefreshFont_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.ReEditVariable
struct UBlockyGraphData_ReEditVariable_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.Redo
struct UBlockyGraphData_Redo_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.QuoteVariable
struct UBlockyGraphData_QuoteVariable_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.QuoteCustom
struct UBlockyGraphData_QuoteCustom_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.Quote
struct UBlockyGraphData_Quote_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.Paste
struct UBlockyGraphData_Paste_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.OpenGuideWebUrl
struct UBlockyGraphData_OpenGuideWebUrl_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.OnLoadFinished
struct UBlockyGraphData_OnLoadFinished_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.MarkGraphDirty
struct UBlockyGraphData_MarkGraphDirty_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.LoadGraphFromJsonText
struct UBlockyGraphData_LoadGraphFromJsonText_Params
{
	struct FString                                     JsonStr;                                                  // (ConstParm, Parm, ZeroConstructor)
};

// Function BlockyLuaCore.BlockyGraphData.LoadGlobalVarFromJsonText
struct UBlockyGraphData_LoadGlobalVarFromJsonText_Params
{
	struct FString                                     JsonStr;                                                  // (ConstParm, Parm, ZeroConstructor)
};

// Function BlockyLuaCore.BlockyGraphData.Load
struct UBlockyGraphData_Load_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.JumpToFocusSlotByIdStrAndIdx
struct UBlockyGraphData_JumpToFocusSlotByIdStrAndIdx_Params
{
	struct FString                                     BlockID;                                                  // (Parm, ZeroConstructor)
	unsigned char                                      idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UBlockBase*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.JumpToFocusSlotByIdStr
struct UBlockyGraphData_JumpToFocusSlotByIdStr_Params
{
	struct FString                                     BlockID;                                                  // (Parm, ZeroConstructor)
	struct FString                                     TargetSlotIdStr;                                          // (Parm, ZeroConstructor)
	class UBlockBase*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.JumpToFocusBlockByIdStr
struct UBlockyGraphData_JumpToFocusBlockByIdStr_Params
{
	struct FString                                     BlockID;                                                  // (Parm, ZeroConstructor)
	class UBlockBase*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.ItemHasOpend
struct UBlockyGraphData_ItemHasOpend_Params
{
	struct FString                                     ItemStringName;                                           // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.IsGraphChanged
struct UBlockyGraphData_IsGraphChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.IsFirstGraph
struct UBlockyGraphData_IsFirstGraph_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.IsBlockGuideButton
struct UBlockyGraphData_IsBlockGuideButton_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.HasExecutableCode
struct UBlockyGraphData_HasExecutableCode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.GM_GenerateAllBlocks
struct UBlockyGraphData_GM_GenerateAllBlocks_Params
{
	int                                                CombinedBlocksNum;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GraphBlocksNum;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.GetTriggerList
struct UBlockyGraphData_GetTriggerList_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.GetQuoteVariableItem
struct UBlockyGraphData_GetQuoteVariableItem_Params
{
	class UBlockyGraph*                                Graph;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UBlockBase*>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.GetQuoteVariableGraph
struct UBlockyGraphData_GetQuoteVariableGraph_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UBlockyGraph*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.GetPresetDescArray
struct UBlockyGraphData_GetPresetDescArray_Params
{
	TArray<class UPresetDesc*>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.GetIsDisableComment
struct UBlockyGraphData_GetIsDisableComment_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.GetGraphStrings
struct UBlockyGraphData_GetGraphStrings_Params
{
	TArray<struct FGraphString>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.GetGraphMap
struct UBlockyGraphData_GetGraphMap_Params
{
	TMap<struct FString, struct FString>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.GetFunctionDescArray
struct UBlockyGraphData_GetFunctionDescArray_Params
{
	TArray<class UFunctionDesc*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.GetDeleteBlockUIRect
struct UBlockyGraphData_GetDeleteBlockUIRect_Params
{
	float                                              InRectWidth;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.GetCustomVariableStrings
struct UBlockyGraphData_GetCustomVariableStrings_Params
{
	TArray<struct FCustomVariableString>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.GetCustomNames
struct UBlockyGraphData_GetCustomNames_Params
{
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.GetCustomConfigStrings
struct UBlockyGraphData_GetCustomConfigStrings_Params
{
	TArray<struct FCustomConfigString>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.GetCurrentGraphBlockyNumberByType
struct UBlockyGraphData_GetCurrentGraphBlockyNumberByType_Params
{
	EBlockyCurrentGraphBlockyNumberType                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.GetCurrentGraph
struct UBlockyGraphData_GetCurrentGraph_Params
{
	class UBlockyGraph*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.GetCurrentBlockyNumByMune
struct UBlockyGraphData_GetCurrentBlockyNumByMune_Params
{
	struct FString                                     Menu;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Category;                                                 // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.GetBlockyStringDatasInPair
struct UBlockyGraphData_GetBlockyStringDatasInPair_Params
{
	TArray<struct FBlockySlotString>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.GetBlocks
struct UBlockyGraphData_GetBlocks_Params
{
	TArray<class UBlockBase*>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.GetAllBlockByKeyName
struct UBlockyGraphData_GetAllBlockByKeyName_Params
{
	TMap<struct FString, int>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.FocusToSlotByBlockySlotId
struct UBlockyGraphData_FocusToSlotByBlockySlotId_Params
{
	struct FBlockySlotString                           SlotID;                                                   // (Parm)
	class UBlockBase*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.FocusToSlot
struct UBlockyGraphData_FocusToSlot_Params
{
	class UBlockBase*                                  TargetBlock;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TargetSlotIdStr;                                          // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.BlockyGraphData.FocusTo
struct UBlockyGraphData_FocusTo_Params
{
	class UBlockBase*                                  TargetBlock;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.FinishVariableEdit
struct UBlockyGraphData_FinishVariableEdit_Params
{
	bool                                               bSaveVar;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReEdit;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.FinishCustomEdit
struct UBlockyGraphData_FinishCustomEdit_Params
{
	bool                                               bSave;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.FinishBlockSetting
struct UBlockyGraphData_FinishBlockSetting_Params
{
	bool                                               bSaveVar;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.FindBlockByIdStr
struct UBlockyGraphData_FindBlockByIdStr_Params
{
	struct FString                                     BlockID;                                                  // (Parm, ZeroConstructor)
	class UBlockBase*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.EmptyListItemSeleceted
struct UBlockyGraphData_EmptyListItemSeleceted_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.Eject
struct UBlockyGraphData_Eject_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.EditVariable
struct UBlockyGraphData_EditVariable_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.EditCustumBlockGraph
struct UBlockyGraphData_EditCustumBlockGraph_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.EditCustom
struct UBlockyGraphData_EditCustom_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.DuplicateSubGraph
struct UBlockyGraphData_DuplicateSubGraph_Params
{
	struct FString                                     SrcName;                                                  // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.BlockyGraphData.DuplicateBlock
struct UBlockyGraphData_DuplicateBlock_Params
{
	class UBlockBase*                                  bLock;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.Disable
struct UBlockyGraphData_Disable_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.DeleteVariableListItem
struct UBlockyGraphData_DeleteVariableListItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.DeleteSelected
struct UBlockyGraphData_DeleteSelected_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.DeleteCustom
struct UBlockyGraphData_DeleteCustom_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.DeleteBlocks
struct UBlockyGraphData_DeleteBlocks_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.DeleteBlockInGraph
struct UBlockyGraphData_DeleteBlockInGraph_Params
{
	class UBlockyGraph*                                InGraph;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UBlockBase*                                  bLock;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.DeleteBlockAndNextInGraph
struct UBlockyGraphData_DeleteBlockAndNextInGraph_Params
{
	class UBlockyGraph*                                InGraph;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UBlockBase*                                  bLock;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.DeleteBlockAndNext
struct UBlockyGraphData_DeleteBlockAndNext_Params
{
	class UBlockBase*                                  bLock;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.DeleteBlock
struct UBlockyGraphData_DeleteBlock_Params
{
	class UBlockBase*                                  bLock;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.DefineCustom
struct UBlockyGraphData_DefineCustom_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.Define
struct UBlockyGraphData_Define_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.CurSelectSubBlockyGraphs
struct UBlockyGraphData_CurSelectSubBlockyGraphs_Params
{
	TArray<class UBlockyGraph*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyGraphData.Copy
struct UBlockyGraphData_Copy_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.Comment
struct UBlockyGraphData_Comment_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.Clone
struct UBlockyGraphData_Clone_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.ClearUndoRedoDatas
struct UBlockyGraphData_ClearUndoRedoDatas_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.ClearTextSizeCache
struct UBlockyGraphData_ClearTextSizeCache_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.ClearGraphDirty
struct UBlockyGraphData_ClearGraphDirty_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.ClearBlockLog
struct UBlockyGraphData_ClearBlockLog_Params
{
};

// Function BlockyLuaCore.BlockyGraphData.CheckReports
struct UBlockyGraphData_CheckReports_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.AddSubGraph
struct UBlockyGraphData_AddSubGraph_Params
{
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
	struct FString                                     InType;                                                   // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.BlockyGraphData.AddOpendNameToArr
struct UBlockyGraphData_AddOpendNameToArr_Params
{
	struct FString                                     ItemStringName;                                           // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.BlockyGraphData.AddGraph
struct UBlockyGraphData_AddGraph_Params
{
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
	struct FString                                     InType;                                                   // (Parm, ZeroConstructor)
	class UBlockyGraph*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyGraphData.AddGlobalComment
struct UBlockyGraphData_AddGlobalComment_Params
{
};

// Function BlockyLuaCore.BlockyLuaConfig.SetCustomDefaultFont
struct UBlockyLuaConfig_SetCustomDefaultFont_Params
{
	struct FSlateFontInfo                              DefaultFont;                                              // (Parm, OutParm)
};

// Function BlockyLuaCore.BlockyLuaConfig.ReplaceChCharToMaskChar
struct UBlockyLuaConfig_ReplaceChCharToMaskChar_Params
{
	struct FString                                     Source;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyLuaConfig.PlayPresetSound
struct UBlockyLuaConfig_PlayPresetSound_Params
{
	struct FString                                     SoundPath;                                                // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.BlockyLuaConfig.IsNameStringValid
struct UBlockyLuaConfig_IsNameStringValid_Params
{
	struct FString                                     NameString;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaConfig.IsBlackboardVar
struct UBlockyLuaConfig_IsBlackboardVar_Params
{
	class UVarDefiner*                                 Definer;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaConfig.GetValidString
struct UBlockyLuaConfig_GetValidString_Params
{
	struct FString                                     CheckString;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyLuaConfig.GetTranslateStringTest
struct UBlockyLuaConfig_GetTranslateStringTest_Params
{
	struct FString                                     KeyString;                                                // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyLuaConfig.GetTranslateString
struct UBlockyLuaConfig_GetTranslateString_Params
{
	struct FString                                     KeyString;                                                // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyLuaConfig.GetLocaleString
struct UBlockyLuaConfig_GetLocaleString_Params
{
	struct FString                                     KeyString;                                                // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyLuaConfig.GetBlackboardDefiner
struct UBlockyLuaConfig_GetBlackboardDefiner_Params
{
	class UVarDefiner*                                 Definer;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UBlackboardDefiner*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaConfig.ClearCustomDefaultFont
struct UBlockyLuaConfig_ClearCustomDefaultFont_Params
{
};

// Function BlockyLuaCore.BlockyLuaConfig.ClearAsyncTextureHandleMap
struct UBlockyLuaConfig_ClearAsyncTextureHandleMap_Params
{
};

// Function BlockyLuaCore.BlockyLuaConfig.CheckStringValidTest
struct UBlockyLuaConfig_CheckStringValidTest_Params
{
	struct FString                                     CheckString;                                              // (Parm, ZeroConstructor)
	struct FCheckStringHandleData                      Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BlockyLuaCore.BlockyLuaUtility.WriteUInt8
struct UBlockyLuaUtility_WriteUInt8_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	unsigned char                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.WriteUInt64
struct UBlockyLuaUtility_WriteUInt64_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	uint64_t                                           Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.WriteUInt32
struct UBlockyLuaUtility_WriteUInt32_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	uint32_t                                           Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.WriteUInt16
struct UBlockyLuaUtility_WriteUInt16_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	uint16_t                                           Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.WriteString
struct UBlockyLuaUtility_WriteString_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.BlockyLuaUtility.WriteSingle
struct UBlockyLuaUtility_WriteSingle_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.WriteObjectPtr
struct UBlockyLuaUtility_WriteObjectPtr_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	class UObject*                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.WriteInt8
struct UBlockyLuaUtility_WriteInt8_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	int8_t                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.WriteInt64
struct UBlockyLuaUtility_WriteInt64_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	int64_t                                            Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.WriteInt32
struct UBlockyLuaUtility_WriteInt32_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.WriteInt16
struct UBlockyLuaUtility_WriteInt16_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	int16_t                                            Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.WriteHandle
struct UBlockyLuaUtility_WriteHandle_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	struct FBlockyLuaHandle                            Value;                                                    // (Parm)
};

// Function BlockyLuaCore.BlockyLuaUtility.WriteDouble
struct UBlockyLuaUtility_WriteDouble_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	double                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.WriteBool
struct UBlockyLuaUtility_WriteBool_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.ReadUInt8
struct UBlockyLuaUtility_ReadUInt8_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.ReadUInt64
struct UBlockyLuaUtility_ReadUInt64_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	uint64_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.ReadUInt32
struct UBlockyLuaUtility_ReadUInt32_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.ReadUInt16
struct UBlockyLuaUtility_ReadUInt16_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	uint16_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.ReadString
struct UBlockyLuaUtility_ReadString_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.BlockyLuaUtility.ReadSingle
struct UBlockyLuaUtility_ReadSingle_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.ReadObjectPtr
struct UBlockyLuaUtility_ReadObjectPtr_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.ReadInt8
struct UBlockyLuaUtility_ReadInt8_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	int8_t                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.ReadInt64
struct UBlockyLuaUtility_ReadInt64_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.ReadInt32
struct UBlockyLuaUtility_ReadInt32_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.ReadInt16
struct UBlockyLuaUtility_ReadInt16_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	int16_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.ReadHandle
struct UBlockyLuaUtility_ReadHandle_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.BlockyLuaUtility.ReadDouble
struct UBlockyLuaUtility_ReadDouble_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	double                                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.ReadBool
struct UBlockyLuaUtility_ReadBool_Params
{
	struct FBlockyLuaHandle                            ar;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyLuaUtility.DestroyReturnWriter
struct UBlockyLuaUtility_DestroyReturnWriter_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
};

// Function BlockyLuaCore.BlockyLuaUtility.DestroyArgumentsReader
struct UBlockyLuaUtility_DestroyArgumentsReader_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
};

// Function BlockyLuaCore.BlockyLuaUtility.CreateReturnWriter
struct UBlockyLuaUtility_CreateReturnWriter_Params
{
	struct FBlockyLuaHandle                            stubHandle;                                               // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.BlockyLuaUtility.CreateArgumentsReader
struct UBlockyLuaUtility_CreateArgumentsReader_Params
{
	struct FBlockyLuaHandle                            stubHandle;                                               // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.BlockyMenuItemObject_Custom.NewCustom
struct UBlockyMenuItemObject_Custom_NewCustom_Params
{
};

// Function BlockyLuaCore.BlockyMenuItemObject_Custom.IsCurrentCategoryEmpty
struct UBlockyMenuItemObject_Custom_IsCurrentCategoryEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyMenuItemObject_Custom.ClosePopUp
struct UBlockyMenuItemObject_Custom_ClosePopUp_Params
{
};

// Function BlockyLuaCore.BlockyMenuItemObject_Variable.NewVariable
struct UBlockyMenuItemObject_Variable_NewVariable_Params
{
};

// Function BlockyLuaCore.BlockyMenuItemObject_Variable.IsPlayerBlackboard
struct UBlockyMenuItemObject_Variable_IsPlayerBlackboard_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyMenuItemObject_Variable.IsCurrentCategoryEmpty
struct UBlockyMenuItemObject_Variable_IsCurrentCategoryEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyMenuItemObject_Variable.IsBlackBoardVariable
struct UBlockyMenuItemObject_Variable_IsBlackBoardVariable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyMenuItemObject_Variable.FilterBlackboard
struct UBlockyMenuItemObject_Variable_FilterBlackboard_Params
{
	bool                                               bIsPlayerVar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.BlockyMenuItemObject_Variable.FilterAccess
struct UBlockyMenuItemObject_Variable_FilterAccess_Params
{
	TEnumAsByte<EBlockyAccessType>                     InAccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.CastExpression.SetTargetType
struct UCastExpression_SetTargetType_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            Target;                                                   // (Parm)
};

// Function BlockyLuaCore.CastExpression.SetExpression
struct UCastExpression_SetExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            Target;                                                   // (Parm)
};

// Function BlockyLuaCore.CastExpression.GetTargetType
struct UCastExpression_GetTargetType_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.CastExpression.GetExpression
struct UCastExpression_GetExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.CastExpression.CreateCastExpression2
struct UCastExpression_CreateCastExpression2_Params
{
	struct FBlockyLuaHandle                            TargetType;                                               // (Parm)
	struct FBlockyLuaHandle                            expression;                                               // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.CastExpression.CreateCastExpression
struct UCastExpression_CreateCastExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ClassReferenceExpression.SetClass
struct UClassReferenceExpression_SetClass_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            klass;                                                    // (Parm)
};

// Function BlockyLuaCore.ClassReferenceExpression.GetClass
struct UClassReferenceExpression_GetClass_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ClassReferenceExpression.CreateClassReferenceExpression
struct UClassReferenceExpression_CreateClassReferenceExpression_Params
{
	struct FBlockyLuaHandle                            klass;                                                    // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ColorDesc.NameContainsString
struct UColorDesc_NameContainsString_Params
{
	struct FString                                     filter;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.ColorDesc.IsNameEmpty
struct UColorDesc_IsNameEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.ColorDesc.IsCodeNameEmpty
struct UColorDesc_IsCodeNameEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.ColorDesc.GetType
struct UColorDesc_GetType_Params
{
	struct FType                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ColorDesc.GetLocaleName
struct UColorDesc_GetLocaleName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.ColorDesc.GetHSVStr
struct UColorDesc_GetHSVStr_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.ColorDesc.GetColor
struct UColorDesc_GetColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.VarDefinerTypeCanBeArray
struct UCommonUIFunctionLibrary_VarDefinerTypeCanBeArray_Params
{
	class UVarDefiner*                                 Definer;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.SetIsVirtualKeyboardVisible
struct UCommonUIFunctionLibrary_SetIsVirtualKeyboardVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.LimitTextLength
struct UCommonUIFunctionLibrary_LimitTextLength_Params
{
	struct FText                                       InputText;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                MaxCharCount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OutText;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.LimitTextEmojiInput
struct UCommonUIFunctionLibrary_LimitTextEmojiInput_Params
{
	struct FText                                       InputText;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.IsNameStringValid
struct UCommonUIFunctionLibrary_IsNameStringValid_Params
{
	struct FString                                     NameString;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.IsFuncDisabled
struct UCommonUIFunctionLibrary_IsFuncDisabled_Params
{
	struct FString                                     FuncName;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.IsDeveloperMode
struct UCommonUIFunctionLibrary_IsDeveloperMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.GetTranslateString_BP
struct UCommonUIFunctionLibrary_GetTranslateString_BP_Params
{
	struct FString                                     KeyString;                                                // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.GetTranslateString
struct UCommonUIFunctionLibrary_GetTranslateString_Params
{
	struct FString                                     KeyString;                                                // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.GetTextLen
struct UCommonUIFunctionLibrary_GetTextLen_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.GetPresetDescs
struct UCommonUIFunctionLibrary_GetPresetDescs_Params
{
	class UVarDefiner*                                 Definer;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPresetDesc*>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.GetLocaleText
struct UCommonUIFunctionLibrary_GetLocaleText_Params
{
	struct FText                                       KeyString;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.GetLocaleString
struct UCommonUIFunctionLibrary_GetLocaleString_Params
{
	struct FString                                     KeyString;                                                // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.GetIsVirtualKeyboardVisible
struct UCommonUIFunctionLibrary_GetIsVirtualKeyboardVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.GetArrayInitStringStart
struct UCommonUIFunctionLibrary_GetArrayInitStringStart_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.GetArrayInitStringEnd
struct UCommonUIFunctionLibrary_GetArrayInitStringEnd_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.GetAllDefiners
struct UCommonUIFunctionLibrary_GetAllDefiners_Params
{
	TArray<class UVarDefiner*>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.GenerateNextNameWithSuffix
struct UCommonUIFunctionLibrary_GenerateNextNameWithSuffix_Params
{
	TArray<struct FString>                             ExistingNames;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     InputName;                                                // (Parm, ZeroConstructor)
	bool                                               InDuplicate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.FormatNumber
struct UCommonUIFunctionLibrary_FormatNumber_Params
{
	struct FString                                     Input;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.CollectAllObjects
struct UCommonUIFunctionLibrary_CollectAllObjects_Params
{
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.CheckNameValid
struct UCommonUIFunctionLibrary_CheckNameValid_Params
{
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
	struct FText                                       ErrorMsg;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.CommonUIFunctionLibrary.CheckNameHasInvalidChar
struct UCommonUIFunctionLibrary_CheckNameHasInvalidChar_Params
{
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.ConfigDataAsset.SaveToAsset
struct UConfigDataAsset_SaveToAsset_Params
{
	struct FString                                     PackageName;                                              // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.CreateObjectExpression.SetTypeName
struct UCreateObjectExpression_SetTypeName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.CreateObjectExpression.SetParameters
struct UCreateObjectExpression_SetParameters_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TArray<struct FBlockyLuaHandle>                    Value;                                                    // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.CreateObjectExpression.GetTypeName
struct UCreateObjectExpression_GetTypeName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.CreateObjectExpression.GetParameters
struct UCreateObjectExpression_GetParameters_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TArray<struct FBlockyLuaHandle>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.CreateObjectExpression.CreateCreateObjectExpression
struct UCreateObjectExpression_CreateCreateObjectExpression_Params
{
	struct FString                                     TypeName;                                                 // (Parm, ZeroConstructor)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.CustomParam.CopyFrom
struct UCustomParam_CopyFrom_Params
{
	class UCustomParam*                                Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.CustomConfig.UpdateDesc
struct UCustomConfig_UpdateDesc_Params
{
};

// Function BlockyLuaCore.CustomConfig.SetParamNum
struct UCustomConfig_SetParamNum_Params
{
	int                                                paramNum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.CustomConfig.InitResult
struct UCustomConfig_InitResult_Params
{
	class UCustomParam*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.CustomConfig.Init
struct UCustomConfig_Init_Params
{
};

// Function BlockyLuaCore.CustomConfig.GetParam
struct UCustomConfig_GetParam_Params
{
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UCustomParam*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.CustomConfig.GetCustomGraphName
struct UCustomConfig_GetCustomGraphName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.CustomConfig.CopyFrom
struct UCustomConfig_CopyFrom_Params
{
	class UCustomConfig*                               Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.DefaultValueExpression.SetType
struct UDefaultValueExpression_SetType_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            Type;                                                     // (Parm)
};

// Function BlockyLuaCore.DefaultValueExpression.GetType
struct UDefaultValueExpression_GetType_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.DefaultValueExpression.CreateDefaultValueExpression2
struct UDefaultValueExpression_CreateDefaultValueExpression2_Params
{
	struct FBlockyLuaHandle                            typeRef;                                                  // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.DefaultValueExpression.CreateDefaultValueExpression
struct UDefaultValueExpression_CreateDefaultValueExpression_Params
{
	struct FBlockyLuaHandle                            typeClass;                                                // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.FunctionInvokeArgumentExpression.SetOperationType
struct UFunctionInvokeArgumentExpression_SetOperationType_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TEnumAsByte<EBlockyFunctionArgumentAttribute>      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.FunctionInvokeArgumentExpression.SetExpression
struct UFunctionInvokeArgumentExpression_SetExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            Value;                                                    // (Parm)
};

// Function BlockyLuaCore.FunctionInvokeArgumentExpression.SetAdditionPostCode
struct UFunctionInvokeArgumentExpression_SetAdditionPostCode_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.FunctionInvokeArgumentExpression.GetOperationType
struct UFunctionInvokeArgumentExpression_GetOperationType_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TEnumAsByte<EBlockyFunctionArgumentAttribute>      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.FunctionInvokeArgumentExpression.GetExpression
struct UFunctionInvokeArgumentExpression_GetExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.FunctionInvokeArgumentExpression.GetAdditionPostCode
struct UFunctionInvokeArgumentExpression_GetAdditionPostCode_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.FunctionInvokeArgumentExpression.CreateFunctionInvokeArgumentExpression
struct UFunctionInvokeArgumentExpression_CreateFunctionInvokeArgumentExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.FunctionInvokeExpression.SetReturnValue
struct UFunctionInvokeExpression_SetReturnValue_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            Value;                                                    // (Parm)
};

// Function BlockyLuaCore.FunctionInvokeExpression.SetHost
struct UFunctionInvokeExpression_SetHost_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            Value;                                                    // (Parm)
};

// Function BlockyLuaCore.FunctionInvokeExpression.SetFunctionName
struct UFunctionInvokeExpression_SetFunctionName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.FunctionInvokeExpression.SetComment
struct UFunctionInvokeExpression_SetComment_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            Value;                                                    // (Parm)
};

// Function BlockyLuaCore.FunctionInvokeExpression.SetArguments
struct UFunctionInvokeExpression_SetArguments_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TArray<struct FBlockyLuaHandle>                    Value;                                                    // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.FunctionInvokeExpression.GetReturnValue
struct UFunctionInvokeExpression_GetReturnValue_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.FunctionInvokeExpression.GetHost
struct UFunctionInvokeExpression_GetHost_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.FunctionInvokeExpression.GetFunctionName
struct UFunctionInvokeExpression_GetFunctionName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.FunctionInvokeExpression.GetComment
struct UFunctionInvokeExpression_GetComment_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.FunctionInvokeExpression.GetArguments
struct UFunctionInvokeExpression_GetArguments_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TArray<struct FBlockyLuaHandle>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.FunctionInvokeExpression.CreateFunctionInvokeExpression
struct UFunctionInvokeExpression_CreateFunctionInvokeExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UVarDefiner_GetCurrentLocateShowName
struct UHotfixUtility_UVarDefiner_GetCurrentLocateShowName_Params
{
	class UVarDefiner*                                 pThis;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UPresetDesc_GetLocaleName
struct UHotfixUtility_UPresetDesc_GetLocaleName_Params
{
	class UPresetDesc*                                 PresetDesc;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UNumFromTo_UpdateParameterDisplayName_Index_DisplayName
struct UHotfixUtility_UNumFromTo_UpdateParameterDisplayName_Index_DisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DisplayName;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UNumFromTo_UpdateParameterDisplayName_CurrNum_DisplayName
struct UHotfixUtility_UNumFromTo_UpdateParameterDisplayName_CurrNum_DisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DisplayName;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UNumFromTo_SetFunctionDesc_NamedVarBlock_DisplayName
struct UHotfixUtility_UNumFromTo_SetFunctionDesc_NamedVarBlock_DisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParamIdx;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     DisplayName;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UNumFromTo_InitializeBlock_IndexBlock_Name
struct UHotfixUtility_UNumFromTo_InitializeBlock_IndexBlock_Name_Params
{
	class UNumFromTo*                                  NumFromTo;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UNumFromTo_InitializeBlock_CurrentBlock_Name
struct UHotfixUtility_UNumFromTo_InitializeBlock_CurrentBlock_Name_Params
{
	class UNumFromTo*                                  NumFromTo;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UNamedVar_UpdateFormater_VarFormatNameText
struct UHotfixUtility_UNamedVar_UpdateFormater_VarFormatNameText_Params
{
	class UNamedVar*                                   var;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ForeachIndex_DisplayName
struct UHotfixUtility_UForEach_UpdateParameterDisplayName_ForeachIndex_DisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DisplayName;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ForeachElement_DisplayName
struct UHotfixUtility_UForEach_UpdateParameterDisplayName_ForeachElement_DisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DisplayName;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ElementNormalDisplay
struct UHotfixUtility_UForEach_UpdateParameterDisplayName_ElementNormalDisplay_Params
{
	class UFunctionDesc*                               Desc;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DisplayName;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ElementDisableDisplay
struct UHotfixUtility_UForEach_UpdateParameterDisplayName_ElementDisableDisplay_Params
{
	class UFunctionDesc*                               Desc;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DisplayName;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ForeachIndex_DisplayName
struct UHotfixUtility_UForEach_SetFunctionDesc_ForeachIndex_DisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DisplayName;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ForeachElement_DisplayName
struct UHotfixUtility_UForEach_SetFunctionDesc_ForeachElement_DisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DisplayName;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ElementNormalDisplay
struct UHotfixUtility_UForEach_SetFunctionDesc_ElementNormalDisplay_Params
{
	class UFunctionDesc*                               Desc;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DisplayName;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ElementDisableDisplay
struct UHotfixUtility_UForEach_SetFunctionDesc_ElementDisableDisplay_Params
{
	class UFunctionDesc*                               Desc;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DisplayName;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UExecuteable_SetFunctionDesc_ParamDisplayName
struct UHotfixUtility_UExecuteable_SetFunctionDesc_ParamDisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParamIdx;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     ParamDisplayName;                                         // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UEnumDesc_GetCurrentLocaleEnumValueName
struct UHotfixUtility_UEnumDesc_GetCurrentLocaleEnumValueName_Params
{
	class UEnumDesc*                                   EnumDesc;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       enumValueName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     enumValueLocName;                                         // (Parm, ZeroConstructor)
	bool                                               useDefaultWhenNotFound;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UEnumDesc_GetCurrentLocaleEnumTypeName
struct UHotfixUtility_UEnumDesc_GetCurrentLocaleEnumTypeName_Params
{
	class UEnumDesc*                                   EnumDesc;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EnumTypeName;                                             // (Parm, ZeroConstructor)
	bool                                               useDefaultWhenNotFound;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UDoNum_UpdateParameterDisplayName_CurrentIndexSlotDisplayName
struct UHotfixUtility_UDoNum_UpdateParameterDisplayName_CurrentIndexSlotDisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CurrentIndexDisplayName;                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UDoNum_SetFunctionDesc_CurrentIndexSlotDisplayName
struct UHotfixUtility_UDoNum_SetFunctionDesc_CurrentIndexSlotDisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CurrentIndexDisplayName;                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UDefineFunction_SetFunctionDesc_ParamName
struct UHotfixUtility_UDefineFunction_SetFunctionDesc_ParamName_Params
{
	class UFunctionDesc*                               Desc;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParamIdx;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UCommonUIFunctionLibrary_GetTranslateString
struct UHotfixUtility_UCommonUIFunctionLibrary_GetTranslateString_Params
{
	struct FString                                     KeyString;                                                // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UCommonUIFunctionLibrary_GetLocaleString
struct UHotfixUtility_UCommonUIFunctionLibrary_GetLocaleString_Params
{
	struct FString                                     KeyString;                                                // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UColorDesc_GetLocaleName
struct UHotfixUtility_UColorDesc_GetLocaleName_Params
{
	class UColorDesc*                                  ColorDesc;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockySearchWidget_RefreshTabContainerView_ContentName
struct UHotfixUtility_UBlockySearchWidget_RefreshTabContainerView_ContentName_Params
{
	class UUserWidget*                                 pThis;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockySearchWidget_RefreshTabContainerView_CategoryName
struct UHotfixUtility_UBlockySearchWidget_RefreshTabContainerView_CategoryName_Params
{
	class UUserWidget*                                 pThis;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyCategoryItemObject*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyMenuWidget_UpdateMenus_MenuWidgetName
struct UHotfixUtility_UBlockyMenuWidget_UpdateMenus_MenuWidgetName_Params
{
	class UUserWidget*                                 pThis;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyMenuItemObject*                       MenuItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_SearchMatchingResults_ItemObjectString
struct UHotfixUtility_UBlockyMenuItemObject_Search_SearchMatchingResults_ItemObjectString_Params
{
	class UBlockyMenuItemObject_Search*                MenuItem;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UBlockyBlockListItemObject*                  ItemObject;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_PaintSearchedItems_CategoryName
struct UHotfixUtility_UBlockyMenuItemObject_Search_PaintSearchedItems_CategoryName_Params
{
	class UBlockyMenuItemObject_Search*                MenuItem;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UBlockyCategoryItemObject*                   CategoryItem;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_PaintSearchedContentTitle
struct UHotfixUtility_UBlockyMenuItemObject_Search_PaintSearchedContentTitle_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_GetBlockSearchString_NamedVarName
struct UHotfixUtility_UBlockyMenuItemObject_Search_GetBlockSearchString_NamedVarName_Params
{
	class UNamedVar*                                   var;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_GetBlockSearchString_Block
struct UHotfixUtility_UBlockyMenuItemObject_Search_GetBlockSearchString_Block_Params
{
	class UBlockBase*                                  InBlock;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Paint_CategoryName
struct UHotfixUtility_UBlockyMenuItemObject_Paint_CategoryName_Params
{
	class UBlockyMenuItemObject*                       MenuItem;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UBlockyCategoryItemObject*                   CategoryItem;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyGraphData_GetCustomNames_CustomName
struct UHotfixUtility_UBlockyGraphData_GetCustomNames_CustomName_Params
{
	class UCustomConfig*                               Custom;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyGraph_LoadGraphFromXnd_OnLocalVarBlockLoaded
struct UHotfixUtility_UBlockyGraph_LoadGraphFromXnd_OnLocalVarBlockLoaded_Params
{
	class UBlockyGraph*                                pThis;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UNamedVar*                                   bLock;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyGraph_LoadGraphFromXnd_OnBlockLoaded
struct UHotfixUtility_UBlockyGraph_LoadGraphFromXnd_OnBlockLoaded_Params
{
	class UBlockyGraph*                                pThis;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UBlockBase*                                  bLock;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_TypeFilterMenuName
struct UHotfixUtility_UBlockyEditor_OnClickSlot_TypeFilterMenuName_Params
{
	class UBlockBase*                                  slotHost;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     menuName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_TypeFilterCategoryName
struct UHotfixUtility_UBlockyEditor_OnClickSlot_TypeFilterCategoryName_Params
{
	class UBlockBase*                                  slotHost;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     CategoryName;                                             // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_SelectFromSceneWidget_DefaultShowName
struct UHotfixUtility_UBlockyEditor_OnClickSlot_SelectFromSceneWidget_DefaultShowName_Params
{
	class UBlockBase*                                  slotHost;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     slotCustomClickTypeName;                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_EnumName
struct UHotfixUtility_UBlockyEditor_OnClickSlot_EnumName_Params
{
	class UBlockBase*                                  slotHost;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UEnumDesc*                                   EnumDesc;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EnumName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     EnumString;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_CategoryItemName
struct UHotfixUtility_UBlockyEditor_OnClickSlot_CategoryItemName_Params
{
	class UBlockBase*                                  slotHost;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CategoryName;                                             // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_BPMenuItemName
struct UHotfixUtility_UBlockyEditor_OnClickSlot_BPMenuItemName_Params
{
	class UBlockBase*                                  slotHost;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     menuName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyEditor_GetLocaleString
struct UHotfixUtility_UBlockyEditor_GetLocaleString_Params
{
	struct FString                                     KeyString;                                                // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyCategoryWidget_FilterWithBlockyMenuItem_WidgetName
struct UHotfixUtility_UBlockyCategoryWidget_FilterWithBlockyMenuItem_WidgetName_Params
{
	class UUserWidget*                                 pThis;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyCategoryItemObject*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyBlockListItemObject_Variable_GetStingUsedToSearch
struct UHotfixUtility_UBlockyBlockListItemObject_Variable_GetStingUsedToSearch_Params
{
	class UBlockyBlockListItemObject_Variable*         ItemObject;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyBlockListItemObject_GetStingUsedToSearch
struct UHotfixUtility_UBlockyBlockListItemObject_GetStingUsedToSearch_Params
{
	class UBlockyBlockListItemObject*                  ItemObject;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.UBlockyBlockListItemObject_Custom_GetStingUsedToSearch
struct UHotfixUtility_UBlockyBlockListItemObject_Custom_GetStingUsedToSearch_Params
{
	class UBlockyBlockListItemObject_Custom*           ItemObject;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.Slot_IsValidPreset
struct UHotfixUtility_Slot_IsValidPreset_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UPresetDesc*                                 Preset;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.Slot_IsValidItem
struct UHotfixUtility_Slot_IsValidItem_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlockyBlockListItemObject*                  Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.Slot_IsValidHandle
struct UHotfixUtility_Slot_IsValidHandle_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.Slot_IsValidBlock
struct UHotfixUtility_Slot_IsValidBlock_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlockBase*                                  blk;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.Slot_HasClickType
struct UHotfixUtility_Slot_HasClickType_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotPresetDesc
struct UHotfixUtility_Slot_GetSlotPresetDesc_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UPresetDesc*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotName
struct UHotfixUtility_Slot_GetSlotName_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       OutValue;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotItemType
struct UHotfixUtility_Slot_GetSlotItemType_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FType                                       OutValue;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotGetColorValue
struct UHotfixUtility_Slot_GetSlotGetColorValue_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                OutValue;                                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotDisplayName
struct UHotfixUtility_Slot_GetSlotDisplayName_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     OutValue;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotDefaultValue
struct UHotfixUtility_Slot_GetSlotDefaultValue_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     OutValue;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotCustomClickTypeName
struct UHotfixUtility_Slot_GetSlotCustomClickTypeName_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     OutValue;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotCustomClickType
struct UHotfixUtility_Slot_GetSlotCustomClickType_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     OutValue;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotColorDesc
struct UHotfixUtility_Slot_GetSlotColorDesc_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UColorDesc*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotClickType
struct UHotfixUtility_Slot_GetSlotClickType_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.Slot_CanSetBlock
struct UHotfixUtility_Slot_CanSetBlock_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UBlockBase*                                  Host;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UBlockBase*                                  blk;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.SetTypeValue
struct UHotfixUtility_SetTypeValue_Params
{
	struct FType                                       Type;                                                     // (Parm, OutParm)
	int                                                NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.GetTypeValue
struct UHotfixUtility_GetTypeValue_Params
{
	struct FType                                       Type;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.HotfixUtility.GetTranslateString_ShowTips
struct UHotfixUtility_GetTranslateString_ShowTips_Params
{
	struct FString                                     Tip;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.GetTranslateString
struct UHotfixUtility_GetTranslateString_Params
{
	struct FString                                     String;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.GetDisplayNameString_SlotDisplayName
struct UHotfixUtility_GetDisplayNameString_SlotDisplayName_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     slotDisplayName;                                          // (Parm, ZeroConstructor)
	struct FString                                     SlotName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.FMsgData_CreateMessageData_InfoString_ReplaceTriggerName
struct UHotfixUtility_FMsgData_CreateMessageData_InfoString_ReplaceTriggerName_Params
{
	class UFunctionDesc*                               Desc;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ListItemFormatString;                                     // (Parm, ZeroConstructor)
	struct FString                                     InfoString;                                               // (Parm, OutParm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.FMsgData_CreateMessageData_InfoString_ReplaceBlockName
struct UHotfixUtility_FMsgData_CreateMessageData_InfoString_ReplaceBlockName_Params
{
	class UBlockBase*                                  bLock;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ListItemFormatString;                                     // (Parm, ZeroConstructor)
	struct FString                                     InfoString;                                               // (Parm, OutParm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.FMsgData_CreateMessageData_GetInfoTranslateString
struct UHotfixUtility_FMsgData_CreateMessageData_GetInfoTranslateString_Params
{
	class UBlockBase*                                  bLock;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FHotFixSlotHandle                           Slot;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     Info;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_UpdateVarFormatters_SeparatorStr
struct UHotfixUtility_FLocaleFormatter_UpdateVarFormatters_SeparatorStr_Params
{
	struct FString                                     str;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_InitializeListItemFormats_ListItemFormatString
struct UHotfixUtility_FLocaleFormatter_InitializeListItemFormats_ListItemFormatString_Params
{
	struct FString                                     ListItemFormatString;                                     // (Parm, ZeroConstructor)
	bool                                               bNeedLocalization;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_InitializeFormats_FormatString
struct UHotfixUtility_FLocaleFormatter_InitializeFormats_FormatString_Params
{
	struct FString                                     FormatString;                                             // (Parm, ZeroConstructor)
	bool                                               bNeedLocalization;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_FFormatData_SlotIdx_OnPaintListItem_ParamDisplayName
struct UHotfixUtility_FLocaleFormatter_FFormatData_SlotIdx_OnPaintListItem_ParamDisplayName_Params
{
	class UBlockyBlockListItemObject*                  ListItemObject;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParamIdx;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     DisplayName;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_FFormatData_SlotIdx_OnArrangeListItem_ParamDisplayName
struct UHotfixUtility_FLocaleFormatter_FFormatData_SlotIdx_OnArrangeListItem_ParamDisplayName_Params
{
	class UBlockyBlockListItemObject*                  ListItemObject;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParamIdx;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     DisplayName;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.IndexerOperatorExpression.SetTarget
struct UIndexerOperatorExpression_SetTarget_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            Value;                                                    // (Parm)
};

// Function BlockyLuaCore.IndexerOperatorExpression.SetIndices
struct UIndexerOperatorExpression_SetIndices_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TArray<struct FBlockyLuaHandle>                    Value;                                                    // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.IndexerOperatorExpression.GetTarget
struct UIndexerOperatorExpression_GetTarget_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.IndexerOperatorExpression.GetIndices
struct UIndexerOperatorExpression_GetIndices_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TArray<struct FBlockyLuaHandle>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.IndexerOperatorExpression.CreateIndexerOperatorExpression
struct UIndexerOperatorExpression_CreateIndexerOperatorExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.NullExpression.CreateNullExpression
struct UNullExpression_CreateNullExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.PresetDesc.NameContainsString
struct UPresetDesc_NameContainsString_Params
{
	struct FString                                     filter;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.PresetDesc.IsNameEmpty
struct UPresetDesc_IsNameEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.PresetDesc.IsCodeNameEmpty
struct UPresetDesc_IsCodeNameEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.PresetDesc.HasIcon
struct UPresetDesc_HasIcon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.PresetDesc.GetType
struct UPresetDesc_GetType_Params
{
	struct FType                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.PresetDesc.GetLocaleName
struct UPresetDesc_GetLocaleName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.PrimitiveExpression.GetValueType
struct UPrimitiveExpression_GetValueType_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TEnumAsByte<EBlockyValueType>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.PrimitiveExpression.GetValueString
struct UPrimitiveExpression_GetValueString_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     str;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt8
struct UPrimitiveExpression_CreatePrimitiveExpression_UInt8_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt64
struct UPrimitiveExpression_CreatePrimitiveExpression_UInt64_Params
{
	struct FBlockyLuaHandle                            Value;                                                    // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt32
struct UPrimitiveExpression_CreatePrimitiveExpression_UInt32_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt16
struct UPrimitiveExpression_CreatePrimitiveExpression_UInt16_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Str
struct UPrimitiveExpression_CreatePrimitiveExpression_Str_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int8
struct UPrimitiveExpression_CreatePrimitiveExpression_Int8_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int64
struct UPrimitiveExpression_CreatePrimitiveExpression_Int64_Params
{
	struct FBlockyLuaHandle                            Value;                                                    // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int32
struct UPrimitiveExpression_CreatePrimitiveExpression_Int32_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int16
struct UPrimitiveExpression_CreatePrimitiveExpression_Int16_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Float
struct UPrimitiveExpression_CreatePrimitiveExpression_Float_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Double
struct UPrimitiveExpression_CreatePrimitiveExpression_Double_Params
{
	struct FBlockyLuaHandle                            Value;                                                    // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Bool
struct UPrimitiveExpression_CreatePrimitiveExpression_Bool_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.PrimitiveExpression.Clear
struct UPrimitiveExpression_Clear_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
};

// Function BlockyLuaCore.SelectionData.IsCurrentSlot
struct USelectionData_IsCurrentSlot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.SelfReferenceExpression.CreateSelfReferenceExpression
struct USelfReferenceExpression_CreateSelfReferenceExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.SnippetExpression.GetSnippetString
struct USnippetExpression_GetSnippetString_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.SnippetExpression.GetParameters
struct USnippetExpression_GetParameters_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TArray<struct FBlockyLuaHandle>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.SnippetExpression.CreateDefaultValueExpression
struct USnippetExpression_CreateDefaultValueExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.StatementBase.SetNextExpr
struct UStatementBase_SetNextExpr_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            nextExpr;                                                 // (Parm)
};

// Function BlockyLuaCore.StatementBase.ReleaseExpression
struct UStatementBase_ReleaseExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
};

// Function BlockyLuaCore.StatementBase.GetNextExpr
struct UStatementBase_GetNextExpr_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.StatementBase.CreateStatementBase
struct UStatementBase_CreateStatementBase_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.VariableDeclaration.SetVisitMode
struct UVariableDeclaration_SetVisitMode_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TEnumAsByte<EBlockyVisitMode>                      visitMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.VariableDeclaration.SetVariableName
struct UVariableDeclaration_SetVariableName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.VariableDeclaration.SetInitValue
struct UVariableDeclaration_SetInitValue_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            initValue;                                                // (Parm)
};

// Function BlockyLuaCore.VariableDeclaration.SetComment
struct UVariableDeclaration_SetComment_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            Comment;                                                  // (Parm)
};

// Function BlockyLuaCore.VariableDeclaration.GetVisitMode
struct UVariableDeclaration_GetVisitMode_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TEnumAsByte<EBlockyVisitMode>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.VariableDeclaration.GetVariableName
struct UVariableDeclaration_GetVariableName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.VariableDeclaration.GetInitValue
struct UVariableDeclaration_GetInitValue_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.VariableDeclaration.GetComment
struct UVariableDeclaration_GetComment_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.VariableDeclaration.CreateVariableDeclaration
struct UVariableDeclaration_CreateVariableDeclaration_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.AssignOperatorStatement.SetTo
struct UAssignOperatorStatement_SetTo_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            to;                                                       // (Parm)
};

// Function BlockyLuaCore.AssignOperatorStatement.SetFrom
struct UAssignOperatorStatement_SetFrom_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            from;                                                     // (Parm)
};

// Function BlockyLuaCore.AssignOperatorStatement.GetTo
struct UAssignOperatorStatement_GetTo_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.AssignOperatorStatement.GetFrom
struct UAssignOperatorStatement_GetFrom_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.AssignOperatorStatement.CreateAssignOperatorStatement
struct UAssignOperatorStatement_CreateAssignOperatorStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ExecuteSequenceStatement.SetSequence
struct UExecuteSequenceStatement_SetSequence_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TArray<struct FBlockyLuaHandle>                    Sequence;                                                 // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.ExecuteSequenceStatement.GetSequence
struct UExecuteSequenceStatement_GetSequence_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TArray<struct FBlockyLuaHandle>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.ExecuteSequenceStatement.CreateExecuteSequenceStatement
struct UExecuteSequenceStatement_CreateExecuteSequenceStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ReturnStatement.CreateReturnStatement
struct UReturnStatement_CreateReturnStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.IfStatement.SetTrueStatement
struct UIfStatement_SetTrueStatement_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            trueStatement;                                            // (Parm)
};

// Function BlockyLuaCore.IfStatement.SetFalseStatement
struct UIfStatement_SetFalseStatement_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            falseStatement;                                           // (Parm)
};

// Function BlockyLuaCore.IfStatement.SetElseIfs
struct UIfStatement_SetElseIfs_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TArray<struct FBlockyLuaHandle>                    elseIfs;                                                  // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.IfStatement.SetCondition
struct UIfStatement_SetCondition_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            Condition;                                                // (Parm)
};

// Function BlockyLuaCore.IfStatement.GetTrueStatement
struct UIfStatement_GetTrueStatement_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.IfStatement.GetFalseStatement
struct UIfStatement_GetFalseStatement_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.IfStatement.GetElseIfs
struct UIfStatement_GetElseIfs_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TArray<struct FBlockyLuaHandle>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.IfStatement.GetCondition
struct UIfStatement_GetCondition_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.IfStatement.CreateIfStatement
struct UIfStatement_CreateIfStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ForLoopStatement.SetStepExpression
struct UForLoopStatement_SetStepExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            stepExpression;                                           // (Parm)
};

// Function BlockyLuaCore.ForLoopStatement.SetLoopIndexName
struct UForLoopStatement_SetLoopIndexName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     loopIndexName;                                            // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.ForLoopStatement.SetLoopBody
struct UForLoopStatement_SetLoopBody_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            loopBody;                                                 // (Parm)
};

// Function BlockyLuaCore.ForLoopStatement.SetEndExpression
struct UForLoopStatement_SetEndExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            endExpression;                                            // (Parm)
};

// Function BlockyLuaCore.ForLoopStatement.SetBeginExpression
struct UForLoopStatement_SetBeginExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            beginExpression;                                          // (Parm)
};

// Function BlockyLuaCore.ForLoopStatement.GetStepExpression
struct UForLoopStatement_GetStepExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ForLoopStatement.GetLoopIndexName
struct UForLoopStatement_GetLoopIndexName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.ForLoopStatement.GetLoopBody
struct UForLoopStatement_GetLoopBody_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ForLoopStatement.GetEndExpression
struct UForLoopStatement_GetEndExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ForLoopStatement.GetBeginExpression
struct UForLoopStatement_GetBeginExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ForLoopStatement.CreateForLoopStatement
struct UForLoopStatement_CreateForLoopStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ForeachLoopStatement.SetLoopItemName
struct UForeachLoopStatement_SetLoopItemName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     loopIndexName;                                            // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.ForeachLoopStatement.SetLoopItemExp
struct UForeachLoopStatement_SetLoopItemExp_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            loopItemExp;                                              // (Parm)
};

// Function BlockyLuaCore.ForeachLoopStatement.SetLoopIndexName
struct UForeachLoopStatement_SetLoopIndexName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     loopIndexName;                                            // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.ForeachLoopStatement.SetLoopBody
struct UForeachLoopStatement_SetLoopBody_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            loopBody;                                                 // (Parm)
};

// Function BlockyLuaCore.ForeachLoopStatement.GetLoopItemName
struct UForeachLoopStatement_GetLoopItemName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.ForeachLoopStatement.GetLoopItemExp
struct UForeachLoopStatement_GetLoopItemExp_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ForeachLoopStatement.GetLoopIndexName
struct UForeachLoopStatement_GetLoopIndexName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.ForeachLoopStatement.GetLoopBody
struct UForeachLoopStatement_GetLoopBody_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ForeachLoopStatement.CreateForeachLoopStatement
struct UForeachLoopStatement_CreateForeachLoopStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.WhileLoopStatement.SetLoopBody
struct UWhileLoopStatement_SetLoopBody_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            loopBody;                                                 // (Parm)
};

// Function BlockyLuaCore.WhileLoopStatement.SetCondition
struct UWhileLoopStatement_SetCondition_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            Condition;                                                // (Parm)
};

// Function BlockyLuaCore.WhileLoopStatement.GetLoopBody
struct UWhileLoopStatement_GetLoopBody_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.WhileLoopStatement.GetCondition
struct UWhileLoopStatement_GetCondition_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.WhileLoopStatement.CreateWhileLoopStatement
struct UWhileLoopStatement_CreateWhileLoopStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ContinueStatement.CreateContinueStatement
struct UContinueStatement_CreateContinueStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.BreakStatement.CreateBreakStatement
struct UBreakStatement_CreateBreakStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.CommentStatement.SetNewLine
struct UCommentStatement_SetNewLine_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	bool                                               newLine;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.CommentStatement.SetCommentString
struct UCommentStatement_SetCommentString_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     commentString;                                            // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.CommentStatement.GetNewLine
struct UCommentStatement_GetNewLine_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.CommentStatement.GetCommentString
struct UCommentStatement_GetCommentString_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.CommentStatement.CreateCommentStatement
struct UCommentStatement_CreateCommentStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ExpressionStatement.SetNextStatement
struct UExpressionStatement_SetNextStatement_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            nextStatement;                                            // (Parm)
};

// Function BlockyLuaCore.ExpressionStatement.SetExpression
struct UExpressionStatement_SetExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            expression;                                               // (Parm)
};

// Function BlockyLuaCore.ExpressionStatement.GetNextStatement
struct UExpressionStatement_GetNextStatement_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ExpressionStatement.GetExpression
struct UExpressionStatement_GetExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.ExpressionStatement.CreateExpressionStatement
struct UExpressionStatement_CreateExpressionStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.StringAppendExpression.SetRight
struct UStringAppendExpression_SetRight_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            Value;                                                    // (Parm)
};

// Function BlockyLuaCore.StringAppendExpression.SetLeft
struct UStringAppendExpression_SetLeft_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            Value;                                                    // (Parm)
};

// Function BlockyLuaCore.StringAppendExpression.SetExtras
struct UStringAppendExpression_SetExtras_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TArray<struct FBlockyLuaHandle>                    Value;                                                    // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.StringAppendExpression.GetRight
struct UStringAppendExpression_GetRight_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.StringAppendExpression.GetLeft
struct UStringAppendExpression_GetLeft_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.StringAppendExpression.GetExtras
struct UStringAppendExpression_GetExtras_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TArray<struct FBlockyLuaHandle>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.StringAppendExpression.CreateStringAppendExpression
struct UStringAppendExpression_CreateStringAppendExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.TypeReference.SetTypeName
struct UTypeReference_SetTypeName_Params
{
	struct FBlockyLuaHandle                            Self;                                                     // (Parm)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.TypeReference.ReleaseTypeReference
struct UTypeReference_ReleaseTypeReference_Params
{
	struct FBlockyLuaHandle                            Self;                                                     // (Parm)
};

// Function BlockyLuaCore.TypeReference.GetTypeName
struct UTypeReference_GetTypeName_Params
{
	struct FBlockyLuaHandle                            Self;                                                     // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.TypeReference.FindClass
struct UTypeReference_FindClass_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.TypeReference.CreateTypeReference3
struct UTypeReference_CreateTypeReference3_Params
{
	struct FBlockyLuaHandle                            klass;                                                    // (Parm)
	int                                                numOfPointer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isRefer;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.TypeReference.CreateTypeReference
struct UTypeReference_CreateTypeReference_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.TypeReference.AsStub
struct UTypeReference_AsStub_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaStub                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.UnaryOperatorExpression.SetValue
struct UUnaryOperatorExpression_SetValue_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            Value;                                                    // (Parm)
};

// Function BlockyLuaCore.UnaryOperatorExpression.SetOperation
struct UUnaryOperatorExpression_SetOperation_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TEnumAsByte<EBlockyUnaryOperation>                 Op;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLuaCore.UnaryOperatorExpression.GetValue
struct UUnaryOperatorExpression_GetValue_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.UnaryOperatorExpression.GetOperation
struct UUnaryOperatorExpression_GetOperation_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	TEnumAsByte<EBlockyUnaryOperation>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.UnaryOperatorExpression.CreateUnaryOperatorExpression
struct UUnaryOperatorExpression_CreateUnaryOperatorExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.VarDefiner.SetType
struct UVarDefiner_SetType_Params
{
	struct FType                                       Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BlockyLuaCore.VarDefiner.GetVarTypeEnum
struct UVarDefiner_GetVarTypeEnum_Params
{
	TEnumAsByte<EBlockyVariableType>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.VarDefiner.GetTypeEnum
struct UVarDefiner_GetTypeEnum_Params
{
	TEnumAsByte<EBlockyListItemType>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLuaCore.VarDefiner.GetType
struct UVarDefiner_GetType_Params
{
	struct FType                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.VarDefiner.GetFirstShowName
struct UVarDefiner_GetFirstShowName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.VarDefiner.GetCurrentLocateShowName
struct UVarDefiner_GetCurrentLocateShowName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.VariableReferenceExpression.SetVariableName
struct UVariableReferenceExpression_SetVariableName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function BlockyLuaCore.VariableReferenceExpression.SetHost
struct UVariableReferenceExpression_SetHost_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            Host;                                                     // (Parm)
};

// Function BlockyLuaCore.VariableReferenceExpression.GetVariableName
struct UVariableReferenceExpression_GetVariableName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLuaCore.VariableReferenceExpression.GetHost
struct UVariableReferenceExpression_GetHost_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      // (Parm)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.VariableReferenceExpression.CreateVariableReferenceExpression2
struct UVariableReferenceExpression_CreateVariableReferenceExpression2_Params
{
	struct FBlockyLuaHandle                            Host;                                                     // (Parm)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLuaCore.VariableReferenceExpression.CreateVariableReferenceExpression
struct UVariableReferenceExpression_CreateVariableReferenceExpression_Params
{
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	struct FBlockyLuaHandle                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

