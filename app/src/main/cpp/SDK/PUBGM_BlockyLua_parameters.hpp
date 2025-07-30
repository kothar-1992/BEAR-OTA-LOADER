#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BlockyLua.Blocky3DVarWidget.SetResult
struct UBlocky3DVarWidget_SetResult_Params
{
};

// Function BlockyLua.Blocky3DVarWidget.InitText
struct UBlocky3DVarWidget_InitText_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.Blocky3DVarWidget.CleanNumber
struct UBlocky3DVarWidget_CleanNumber_Params
{
	struct FString                                     Input;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLua.BlockyBlockDisplayWidget_Custom.UpdateName
struct UBlockyBlockDisplayWidget_Custom_UpdateName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyBlockDisplayWidget_Custom.Init
struct UBlockyBlockDisplayWidget_Custom_Init_Params
{
	TEnumAsByte<ECustomBlockType>                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyBlockDisplayWidget_Variable.Init
struct UBlockyBlockDisplayWidget_Variable_Init_Params
{
};

// Function BlockyLua.BlockyBlockDisplayWidget_Variable.CalculateDrawSize
struct UBlockyBlockDisplayWidget_Variable_CalculateDrawSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyBlockWindowWidget.SetWidgetVariableToShow
struct UBlockyBlockWindowWidget_SetWidgetVariableToShow_Params
{
	class UBlockyMenuItemObject_Variable*              item_Variable;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyBlockWindowWidget.SetWidgetCustomToShow
struct UBlockyBlockWindowWidget_SetWidgetCustomToShow_Params
{
	class UBlockyMenuItemObject_Custom*                item_Custom;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyBlockWindowWidget.SetWidgetCommonToShow
struct UBlockyBlockWindowWidget_SetWidgetCommonToShow_Params
{
	class UBlockyMenuItemObject*                       MenuItem;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyBlockWindowWidget.SetWidgetBPToShow
struct UBlockyBlockWindowWidget_SetWidgetBPToShow_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyBooleanWidget.SetText
struct UBlockyBooleanWidget_SetText_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyBooleanWidget.SetResult
struct UBlockyBooleanWidget_SetResult_Params
{
	struct FString                                     displayValue;                                             // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyCategoryItemWidget.SetSelected
struct UBlockyCategoryItemWidget_SetSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyCategoryItemWidget.OnScroll
struct UBlockyCategoryItemWidget_OnScroll_Params
{
};

// Function BlockyLua.BlockyCategoryItemWidget.OnClick
struct UBlockyCategoryItemWidget_OnClick_Params
{
};

// Function BlockyLua.BlockyCategoryItemWidget.InitWithItemObject
struct UBlockyCategoryItemWidget_InitWithItemObject_Params
{
	class UBlockyCategoryItemObject*                   Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyCategoryWidget.GetCategoryContainer
struct UBlockyCategoryWidget_GetCategoryContainer_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyColorPickerWidget.SetResult
struct UBlockyColorPickerWidget_SetResult_Params
{
	struct FLinearColor                                Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BlockyLua.BlockyColorPickerWidget.SetColor
struct UBlockyColorPickerWidget_SetColor_Params
{
	struct FLinearColor                                Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BlockyLua.BlockyColorPickerWidget.LoadColors
struct UBlockyColorPickerWidget_LoadColors_Params
{
};

// Function BlockyLua.BlockyEditor.UpdateTriggerGroups
struct UBlockyEditor_UpdateTriggerGroups_Params
{
};

// Function BlockyLua.BlockyEditor.TryBackToVariableOrCustomPanel
struct UBlockyEditor_TryBackToVariableOrCustomPanel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyEditor.ShowPresetAnimation
struct UBlockyEditor_ShowPresetAnimation_Params
{
	class UPresetDesc*                                 PresetDesc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyEditor.SetWidgetBPToShow
struct UBlockyEditor_SetWidgetBPToShow_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               HideCategory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyEditor.SetMenuWidget
struct UBlockyEditor_SetMenuWidget_Params
{
	class UBlockyMenuWidget*                           Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyEditor.SetCategoryWidget
struct UBlockyEditor_SetCategoryWidget_Params
{
	class UBlockyCategoryWidget*                       Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyEditor.SetBlockLogWidget
struct UBlockyEditor_SetBlockLogWidget_Params
{
	class UBlockyLogWidget*                            Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyEditor.SetBlockListWidget
struct UBlockyEditor_SetBlockListWidget_Params
{
	class UBlockyBlockWindowWidget*                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyEditor.ResetAsyncWidgetHandleMap
struct UBlockyEditor_ResetAsyncWidgetHandleMap_Params
{
};

// Function BlockyLua.BlockyEditor.OnUpdateUndoRedoState
struct UBlockyEditor_OnUpdateUndoRedoState_Params
{
	bool                                               HasUndoCommands;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasRedoCommands;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyEditor.OnShowTips
struct UBlockyEditor_OnShowTips_Params
{
	struct FText                                       Tips;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BlockyLua.BlockyEditor.LoadWidgetAsync
struct UBlockyEditor_LoadWidgetAsync_Params
{
	struct FString                                     WidgetName;                                               // (Parm, ZeroConstructor)
	struct FString                                     WidgetPath;                                               // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BlockyLua.BlockyEditor.LoadMaterialInterface
struct UBlockyEditor_LoadMaterialInterface_Params
{
	struct FString                                     AnimationPath;                                            // (Parm, ZeroConstructor)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyEditor.IsShowExplain
struct UBlockyEditor_IsShowExplain_Params
{
	bool                                               bFlag;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyEditor.IsCloseComment
struct UBlockyEditor_IsCloseComment_Params
{
	bool                                               bFlag;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyEditor.GetSaveCooldownDuration
struct UBlockyEditor_GetSaveCooldownDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyEditor.GetLocaleString
struct UBlockyEditor_GetLocaleString_Params
{
	struct FString                                     KeyString;                                                // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLua.BlockyEditor.GetCurrentMenuItem
struct UBlockyEditor_GetCurrentMenuItem_Params
{
	class UBlockyMenuItemObject*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyEditor.CollectListItem
struct UBlockyEditor_CollectListItem_Params
{
	bool                                               bCollect;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyEditor.BP_OnShowTools
struct UBlockyEditor_BP_OnShowTools_Params
{
	TArray<EBlockyBPToolButtonType>                    ButtonTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BlockyLua.BlockyEditor.AddChildBluckyWidget
struct UBlockyEditor_AddChildBluckyWidget_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyEnumWidget.SetShowDisplayItems
struct UBlockyEnumWidget_SetShowDisplayItems_Params
{
	TMap<struct FName, struct FText>                   Names;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BlockyLua.BlockyEnumWidget.SetResultWithName
struct UBlockyEnumWidget_SetResultWithName_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyFloatWidget.SetText
struct UBlockyFloatWidget_SetText_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyFloatWidget.SetResult
struct UBlockyFloatWidget_SetResult_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyFloatWidget.CleanNumber
struct UBlockyFloatWidget_CleanNumber_Params
{
	struct FString                                     Input;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLua.BlockyGraphWidget.ViewPosToCanvasPos
struct UBlockyGraphWidget_ViewPosToCanvasPos_Params
{
	struct FVector2D                                   Postion;                                                  // (Parm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.UpdateVariableItemNames
struct UBlockyGraphWidget_UpdateVariableItemNames_Params
{
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLua.BlockyGraphWidget.UpdateTriggerGroups
struct UBlockyGraphWidget_UpdateTriggerGroups_Params
{
};

// Function BlockyLua.BlockyGraphWidget.UpdateCustomItemNames
struct UBlockyGraphWidget_UpdateCustomItemNames_Params
{
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLua.BlockyGraphWidget.Undo
struct UBlockyGraphWidget_Undo_Params
{
};

// Function BlockyLua.BlockyGraphWidget.TryBackToVariableOrCustomPanel
struct UBlockyGraphWidget_TryBackToVariableOrCustomPanel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.ShowTips
struct UBlockyGraphWidget_ShowTips_Params
{
	struct FText                                       Tips;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BlockyLua.BlockyGraphWidget.ShowPresetParamPop
struct UBlockyGraphWidget_ShowPresetParamPop_Params
{
};

// Function BlockyLua.BlockyGraphWidget.SetViewScale
struct UBlockyGraphWidget_SetViewScale_Params
{
	float                                              inScale;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.SetViewPosition
struct UBlockyGraphWidget_SetViewPosition_Params
{
	struct FVector2D                                   ViewPosition;                                             // (Parm, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.SetMenuWidget
struct UBlockyGraphWidget_SetMenuWidget_Params
{
	class UBlockyMenuWidget*                           Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.SetCurrentSubGraph
struct UBlockyGraphWidget_SetCurrentSubGraph_Params
{
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyGraphWidget.SetCategoryWidget
struct UBlockyGraphWidget_SetCategoryWidget_Params
{
	class UBlockyCategoryWidget*                       Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.SetBlockLogWidget
struct UBlockyGraphWidget_SetBlockLogWidget_Params
{
	class UBlockyLogWidget*                            Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.SetBlockListWidget
struct UBlockyGraphWidget_SetBlockListWidget_Params
{
	class UBlockyBlockWindowWidget*                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.SaveGraphToJsonText
struct UBlockyGraphWidget_SaveGraphToJsonText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLua.BlockyGraphWidget.SaveGraphToBin
struct UBlockyGraphWidget_SaveGraphToBin_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLua.BlockyGraphWidget.SaveGlobalVarToJsonText
struct UBlockyGraphWidget_SaveGlobalVarToJsonText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLua.BlockyGraphWidget.SaveGlobalVarToBin
struct UBlockyGraphWidget_SaveGlobalVarToBin_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLua.BlockyGraphWidget.SaveCustom
struct UBlockyGraphWidget_SaveCustom_Params
{
};

// Function BlockyLua.BlockyGraphWidget.SaveBlockyGraphToTemplate
struct UBlockyGraphWidget_SaveBlockyGraphToTemplate_Params
{
	class UBlockyGraph*                                BlockyGraph;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLua.BlockyGraphWidget.Save
struct UBlockyGraphWidget_Save_Params
{
};

// Function BlockyLua.BlockyGraphWidget.ReturnToPreviewGraph
struct UBlockyGraphWidget_ReturnToPreviewGraph_Params
{
};

// Function BlockyLua.BlockyGraphWidget.ReturnToMainGraph
struct UBlockyGraphWidget_ReturnToMainGraph_Params
{
};

// Function BlockyLua.BlockyGraphWidget.ResetJsonChangedFlag
struct UBlockyGraphWidget_ResetJsonChangedFlag_Params
{
};

// Function BlockyLua.BlockyGraphWidget.ResetGraph
struct UBlockyGraphWidget_ResetGraph_Params
{
};

// Function BlockyLua.BlockyGraphWidget.RemoveSubGraph
struct UBlockyGraphWidget_RemoveSubGraph_Params
{
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyGraphWidget.RefreshFont
struct UBlockyGraphWidget_RefreshFont_Params
{
};

// Function BlockyLua.BlockyGraphWidget.ReEditVariable
struct UBlockyGraphWidget_ReEditVariable_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.Redo
struct UBlockyGraphWidget_Redo_Params
{
};

// Function BlockyLua.BlockyGraphWidget.QuoteCustom
struct UBlockyGraphWidget_QuoteCustom_Params
{
};

// Function BlockyLua.BlockyGraphWidget.Quote
struct UBlockyGraphWidget_Quote_Params
{
};

// Function BlockyLua.BlockyGraphWidget.Paste
struct UBlockyGraphWidget_Paste_Params
{
};

// Function BlockyLua.BlockyGraphWidget.OnCloseItemList
struct UBlockyGraphWidget_OnCloseItemList_Params
{
};

// Function BlockyLua.BlockyGraphWidget.LoadTemplateToBlockyGraph
struct UBlockyGraphWidget_LoadTemplateToBlockyGraph_Params
{
	TArray<unsigned char>                              TemplateAst;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               IsCreateNewGraph;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.LoadGraphFromJsonText
struct UBlockyGraphWidget_LoadGraphFromJsonText_Params
{
	struct FString                                     JsonStr;                                                  // (ConstParm, Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyGraphWidget.LoadGraphFromBin
struct UBlockyGraphWidget_LoadGraphFromBin_Params
{
	TArray<unsigned char>                              JsonStr;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BlockyLua.BlockyGraphWidget.LoadGlobalVarFromJsonText
struct UBlockyGraphWidget_LoadGlobalVarFromJsonText_Params
{
	struct FString                                     JsonStr;                                                  // (ConstParm, Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyGraphWidget.LoadGlobalVarFromBin
struct UBlockyGraphWidget_LoadGlobalVarFromBin_Params
{
	TArray<unsigned char>                              JsonStr;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BlockyLua.BlockyGraphWidget.Load
struct UBlockyGraphWidget_Load_Params
{
};

// Function BlockyLua.BlockyGraphWidget.IsViewOverlap
struct UBlockyGraphWidget_IsViewOverlap_Params
{
	struct FVector2D                                   Position;                                                 // (Parm, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.IsFirstGraph
struct UBlockyGraphWidget_IsFirstGraph_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.GM_GenerateAllBlocks
struct UBlockyGraphWidget_GM_GenerateAllBlocks_Params
{
	int                                                CombinedBlocksNum;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GraphBlocksNum;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedResetGraph;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.GM_AddBlocks
struct UBlockyGraphWidget_GM_AddBlocks_Params
{
	TArray<struct FString>                             typeNames;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.GetViewSize
struct UBlockyGraphWidget_GetViewSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.GetViewScale
struct UBlockyGraphWidget_GetViewScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.GetViewPosition
struct UBlockyGraphWidget_GetViewPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.GetJsonChangedFlag
struct UBlockyGraphWidget_GetJsonChangedFlag_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.GetDeleteBlockUIRect
struct UBlockyGraphWidget_GetDeleteBlockUIRect_Params
{
	float                                              InRectWidth;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.GetCurrentGraph
struct UBlockyGraphWidget_GetCurrentGraph_Params
{
	class UBlockyGraph*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.FocusTo
struct UBlockyGraphWidget_FocusTo_Params
{
	class UBlockBase*                                  TargetBlock;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.FinishVariableEdit
struct UBlockyGraphWidget_FinishVariableEdit_Params
{
	bool                                               bSaveVar;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReEdit;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.FinishCustomEdit
struct UBlockyGraphWidget_FinishCustomEdit_Params
{
	bool                                               bSave;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.FinishBlockSetting
struct UBlockyGraphWidget_FinishBlockSetting_Params
{
	bool                                               bSave;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.Eject
struct UBlockyGraphWidget_Eject_Params
{
};

// Function BlockyLua.BlockyGraphWidget.EditCustumBlockGraph
struct UBlockyGraphWidget_EditCustumBlockGraph_Params
{
};

// Function BlockyLua.BlockyGraphWidget.EditCustom
struct UBlockyGraphWidget_EditCustom_Params
{
};

// Function BlockyLua.BlockyGraphWidget.Disable
struct UBlockyGraphWidget_Disable_Params
{
};

// Function BlockyLua.BlockyGraphWidget.DeleteVariableListItem
struct UBlockyGraphWidget_DeleteVariableListItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.DeleteSelected
struct UBlockyGraphWidget_DeleteSelected_Params
{
};

// Function BlockyLua.BlockyGraphWidget.DeleteCustom
struct UBlockyGraphWidget_DeleteCustom_Params
{
};

// Function BlockyLua.BlockyGraphWidget.DefineCustom
struct UBlockyGraphWidget_DefineCustom_Params
{
};

// Function BlockyLua.BlockyGraphWidget.Define
struct UBlockyGraphWidget_Define_Params
{
};

// Function BlockyLua.BlockyGraphWidget.Copy
struct UBlockyGraphWidget_Copy_Params
{
};

// Function BlockyLua.BlockyGraphWidget.Comment
struct UBlockyGraphWidget_Comment_Params
{
};

// Function BlockyLua.BlockyGraphWidget.CollectListItem
struct UBlockyGraphWidget_CollectListItem_Params
{
	bool                                               bCollect;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.Clone
struct UBlockyGraphWidget_Clone_Params
{
};

// Function BlockyLua.BlockyGraphWidget.ClearUndoRedoDatas
struct UBlockyGraphWidget_ClearUndoRedoDatas_Params
{
};

// Function BlockyLua.BlockyGraphWidget.ClearTextSizeCache
struct UBlockyGraphWidget_ClearTextSizeCache_Params
{
};

// Function BlockyLua.BlockyGraphWidget.ClearLog
struct UBlockyGraphWidget_ClearLog_Params
{
};

// Function BlockyLua.BlockyGraphWidget.CanvasPosToViewPos
struct UBlockyGraphWidget_CanvasPosToViewPos_Params
{
	struct FVector2D                                   Postion;                                                  // (Parm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.BlockyLog_Show
struct UBlockyGraphWidget_BlockyLog_Show_Params
{
	EBlockyLogMsgMode                                  Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UBlockBase*                                  BlockSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SlotID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Info;                                                     // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyGraphWidget.AddSubGraph
struct UBlockyGraphWidget_AddSubGraph_Params
{
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
	struct FString                                     InType;                                                   // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyGraphWidget.AddGraph
struct UBlockyGraphWidget_AddGraph_Params
{
	struct FString                                     InName;                                                   // (Parm, ZeroConstructor)
	struct FString                                     InType;                                                   // (Parm, ZeroConstructor)
	class UBlockyGraph*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyGraphWidget.AddGlobalComment
struct UBlockyGraphWidget_AddGlobalComment_Params
{
};

// Function BlockyLua.BlockyGroupWidget.GetGroupContainer
struct UBlockyGroupWidget_GetGroupContainer_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyGroupWidget.AddGroupItem
struct UBlockyGroupWidget_AddGroupItem_Params
{
};

// Function BlockyLua.BlockyIntegerWidget.SetText
struct UBlockyIntegerWidget_SetText_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyIntegerWidget.SetResult
struct UBlockyIntegerWidget_SetResult_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyIntegerWidget.SetNegativeEnable
struct UBlockyIntegerWidget_SetNegativeEnable_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLogItemWidget.SetShowWarn
struct UBlockyLogItemWidget_SetShowWarn_Params
{
	struct FString                                     Warn;                                                     // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyLogItemWidget.SetShowInfo
struct UBlockyLogItemWidget_SetShowInfo_Params
{
	struct FString                                     Info;                                                     // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyLogItemWidget.SetShowError
struct UBlockyLogItemWidget_SetShowError_Params
{
	struct FString                                     Error;                                                    // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyLogItemWidget.SetActiveWidgetIndex
struct UBlockyLogItemWidget_SetActiveWidgetIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLogItemWidget.OnClickBtnToBlock
struct UBlockyLogItemWidget_OnClickBtnToBlock_Params
{
};

// Function BlockyLua.BlockyLogItemWidget.GetTextBlockWarn
struct UBlockyLogItemWidget_GetTextBlockWarn_Params
{
	class UTextBlock*                                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyLogItemWidget.GetTextBlockInfo
struct UBlockyLogItemWidget_GetTextBlockInfo_Params
{
	class UTextBlock*                                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyLogItemWidget.GetTextBlockError
struct UBlockyLogItemWidget_GetTextBlockError_Params
{
	class UTextBlock*                                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyLogItemWidget.GetActiveWidgetIndex
struct UBlockyLogItemWidget_GetActiveWidgetIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyLogWidget.ShowLog
struct UBlockyLogWidget_ShowLog_Params
{
};

// Function BlockyLua.BlockyLogWidget.SetBtnWarnText
struct UBlockyLogWidget_SetBtnWarnText_Params
{
	struct FString                                     Warn;                                                     // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyLogWidget.SetBtnInfoText
struct UBlockyLogWidget_SetBtnInfoText_Params
{
	struct FString                                     Info;                                                     // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyLogWidget.SetBtnErrorText
struct UBlockyLogWidget_SetBtnErrorText_Params
{
	struct FString                                     Error;                                                    // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyLogWidget.OnClickWarnShow
struct UBlockyLogWidget_OnClickWarnShow_Params
{
};

// Function BlockyLua.BlockyLogWidget.OnClickInfoShow
struct UBlockyLogWidget_OnClickInfoShow_Params
{
};

// Function BlockyLua.BlockyLogWidget.OnClickErrorShow
struct UBlockyLogWidget_OnClickErrorShow_Params
{
};

// Function BlockyLua.BlockyLogWidget.OnClickAllShow
struct UBlockyLogWidget_OnClickAllShow_Params
{
};

// Function BlockyLua.BlockyLogWidget.GetLogContainer
struct UBlockyLogWidget_GetLogContainer_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyLogWidget.GetItemTextWidth
struct UBlockyLogWidget_GetItemTextWidth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyLogWidget.GetBtnWarnText
struct UBlockyLogWidget_GetBtnWarnText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLua.BlockyLogWidget.GetBtnInfoText
struct UBlockyLogWidget_GetBtnInfoText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLua.BlockyLogWidget.GetBtnErrorText
struct UBlockyLogWidget_GetBtnErrorText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLua.BlockyLuaLoopScrollBase.UserScrolled
struct UBlockyLuaLoopScrollBase_UserScrolled_Params
{
	float                                              Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase.SetItemType
struct UBlockyLuaLoopScrollBase_SetItemType_Params
{
	class UClass*                                      _ItemType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase.SetItemCount
struct UBlockyLuaLoopScrollBase_SetItemCount_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase.RemoveItem
struct UBlockyLuaLoopScrollBase_RemoveItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase.RefreshItem
struct UBlockyLuaLoopScrollBase_RefreshItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase.RefreshAllItems
struct UBlockyLuaLoopScrollBase_RefreshAllItems_Params
{
};

// Function BlockyLua.BlockyLuaLoopScrollBase.Push
struct UBlockyLuaLoopScrollBase_Push_Params
{
};

// Function BlockyLua.BlockyLuaLoopScrollBase.Pop
struct UBlockyLuaLoopScrollBase_Pop_Params
{
};

// DelegateFunction BlockyLua.BlockyLuaLoopScrollBase.OnRefreshItem__DelegateSignature
struct UBlockyLuaLoopScrollBase_OnRefreshItem__DelegateSignature_Params
{
	class UWidget*                                     Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction BlockyLua.BlockyLuaLoopScrollBase.OnItemCreated__DelegateSignature
struct UBlockyLuaLoopScrollBase_OnItemCreated__DelegateSignature_Params
{
	class UWidget*                                     Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction BlockyLua.BlockyLuaLoopScrollBase.OnChangeData__DelegateSignature
struct UBlockyLuaLoopScrollBase_OnChangeData__DelegateSignature_Params
{
	class UWidget*                                     Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyLuaLoopScrollBase.InsertItem
struct UBlockyLuaLoopScrollBase_InsertItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase.GetWidgetIndex
struct UBlockyLuaLoopScrollBase_GetWidgetIndex_Params
{
	class UWidget*                                     Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase.GetItemCount
struct UBlockyLuaLoopScrollBase_GetItemCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase.GetIndexOfWidget
struct UBlockyLuaLoopScrollBase_GetIndexOfWidget_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase.ChangeData
struct UBlockyLuaLoopScrollBase_ChangeData_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase.CallTick
struct UBlockyLuaLoopScrollBase_CallTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase.AutoSize
struct UBlockyLuaLoopScrollBase_AutoSize_Params
{
	bool                                               bAutoSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.UserScrolled
struct UBlockyLuaLoopScrollBase_MultiItem_UserScrolled_Params
{
	float                                              Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.SetItemType
struct UBlockyLuaLoopScrollBase_MultiItem_SetItemType_Params
{
	TArray<class UClass*>                              TypeArray;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.SetItemCount
struct UBlockyLuaLoopScrollBase_MultiItem_SetItemCount_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.RemoveItem
struct UBlockyLuaLoopScrollBase_MultiItem_RemoveItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.RefreshItem
struct UBlockyLuaLoopScrollBase_MultiItem_RefreshItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.RefreshAllItems
struct UBlockyLuaLoopScrollBase_MultiItem_RefreshAllItems_Params
{
};

// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.Push
struct UBlockyLuaLoopScrollBase_MultiItem_Push_Params
{
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.Pop
struct UBlockyLuaLoopScrollBase_MultiItem_Pop_Params
{
};

// DelegateFunction BlockyLua.BlockyLuaLoopScrollBase_MultiItem.OnRefreshItem__DelegateSignature
struct UBlockyLuaLoopScrollBase_MultiItem_OnRefreshItem__DelegateSignature_Params
{
	class UWidget*                                     Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction BlockyLua.BlockyLuaLoopScrollBase_MultiItem.OnItemCreated__DelegateSignature
struct UBlockyLuaLoopScrollBase_MultiItem_OnItemCreated__DelegateSignature_Params
{
	class UWidget*                                     Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction BlockyLua.BlockyLuaLoopScrollBase_MultiItem.OnChangeData__DelegateSignature
struct UBlockyLuaLoopScrollBase_MultiItem_OnChangeData__DelegateSignature_Params
{
	class UWidget*                                     Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.InsertItem
struct UBlockyLuaLoopScrollBase_MultiItem_InsertItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.GetWidgetIndex
struct UBlockyLuaLoopScrollBase_MultiItem_GetWidgetIndex_Params
{
	class UWidget*                                     Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.GetItemCount
struct UBlockyLuaLoopScrollBase_MultiItem_GetItemCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.GetIndexOfWidget
struct UBlockyLuaLoopScrollBase_MultiItem_GetIndexOfWidget_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.ClearItems
struct UBlockyLuaLoopScrollBase_MultiItem_ClearItems_Params
{
};

// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.ChangeData
struct UBlockyLuaLoopScrollBase_MultiItem_ChangeData_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.CallTick
struct UBlockyLuaLoopScrollBase_MultiItem_CallTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.AutoSize
struct UBlockyLuaLoopScrollBase_MultiItem_AutoSize_Params
{
	bool                                               bAutoSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBox.ScrollToItem
struct UBlockyLuaLoopScrollBox_ScrollToItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.ScrollToItem
struct UBlockyLuaLoopScrollBox_MultiItem_ScrollToItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.BP_UserScrolled
struct UBlockyLuaLoopScrollBox_MultiItem_BP_UserScrolled_Params
{
	float                                              Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.BP_PreventScrollOutOfSize
struct UBlockyLuaLoopScrollBox_MultiItem_BP_PreventScrollOutOfSize_Params
{
	bool                                               bScroll;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.BP_GetContentSize
struct UBlockyLuaLoopScrollBox_MultiItem_BP_GetContentSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyLuaLoopScrollGrid.ScrollToItem
struct UBlockyLuaLoopScrollGrid_ScrollToItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyMenuItemWidget.SetSelected
struct UBlockyMenuItemWidget_SetSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyMenuItemWidget.OnClick
struct UBlockyMenuItemWidget_OnClick_Params
{
};

// Function BlockyLua.BlockyMenuItemWidget.InitWithItemObject
struct UBlockyMenuItemWidget_InitWithItemObject_Params
{
	class UBlockyMenuItemObject*                       Item;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyMenuWidget.SelectMenu
struct UBlockyMenuWidget_SelectMenu_Params
{
	class UBlockyMenuItemWidget*                       MenuItemWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyMenuWidget.OnAddMenuItemWidget
struct UBlockyMenuWidget_OnAddMenuItemWidget_Params
{
	class UBlockyMenuItemWidget*                       MenuItemWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyMenuWidget.GetMenuContainer
struct UBlockyMenuWidget_GetMenuContainer_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyPresetItemWidget.SetPresetDesc_BP
struct UBlockyPresetItemWidget_SetPresetDesc_BP_Params
{
	class UPresetDesc*                                 PresetDesc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyPresetItemWidget.SetImageShowIcon
struct UBlockyPresetItemWidget_SetImageShowIcon_Params
{
	class UImage*                                      Image;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyPresetWidget.SetResult
struct UBlockyPresetWidget_SetResult_Params
{
	class UPresetDesc*                                 Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyPresetWidget.SetPresets
struct UBlockyPresetWidget_SetPresets_Params
{
	TArray<class UPresetDesc*>                         Presets;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BlockyLua.BlockyPresetWidget.ResetMenuItem
struct UBlockyPresetWidget_ResetMenuItem_Params
{
};

// Function BlockyLua.BlockyPresetWidget.OnFilterBtnClick
struct UBlockyPresetWidget_OnFilterBtnClick_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLua.BlockyPresetWidget.LoopScrollBoxFilterStr
struct UBlockyPresetWidget_LoopScrollBoxFilterStr_Params
{
	struct FString                                     filter;                                                   // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyPresetWidget.LoopScrollBoxFilterByTag
struct UBlockyPresetWidget_LoopScrollBoxFilterByTag_Params
{
	TMap<int, struct FIntArrayWrapper>                 Tags;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BlockyLua.BlockyPresetWidget.InitPresets
struct UBlockyPresetWidget_InitPresets_Params
{
};

// Function BlockyLua.BlockyPresetWidget.GetLoopScrollBox
struct UBlockyPresetWidget_GetLoopScrollBox_Params
{
	class UScrollBox*                                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyPresetWidget.GetIsIconWidget
struct UBlockyPresetWidget_GetIsIconWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyPresetWidget.ClearSearchText
struct UBlockyPresetWidget_ClearSearchText_Params
{
};

// Function BlockyLua.BlockyRichTextBlock.SetText
struct UBlockyRichTextBlock_SetText_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BlockyLua.BlockyRichTextBlock.GetText
struct UBlockyRichTextBlock_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLua.BlockySearchResultPanel.UpdateGraphContentSize
struct UBlockySearchResultPanel_UpdateGraphContentSize_Params
{
};

// Function BlockyLua.BlockySearchResultPanel.ToggleGraphResults
struct UBlockySearchResultPanel_ToggleGraphResults_Params
{
	class UBlockyGraph*                                InGraph;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockySearchResultPanel.ScrollToCategory
struct UBlockySearchResultPanel_ScrollToCategory_Params
{
	int                                                CategoryIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GraphCategory;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockySearchResultPanel.RefreshGraphBlocksWidgets
struct UBlockySearchResultPanel_RefreshGraphBlocksWidgets_Params
{
};

// Function BlockyLua.BlockySearchResultPanel.OnGraphBlocksCreated
struct UBlockySearchResultPanel_OnGraphBlocksCreated_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockySearchResultPanel.FocusToBlock
struct UBlockySearchResultPanel_FocusToBlock_Params
{
	class UBlockyGraph*                                InGraph;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UBlockBase*                                  InBlock;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockySearchResultPanel.FilterOutSearchResultToShow
struct UBlockySearchResultPanel_FilterOutSearchResultToShow_Params
{
	ESearchResultVisibleType                           VisibleType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockySearchResultPanel.BP_ScrollYOffset
struct UBlockySearchResultPanel_BP_ScrollYOffset_Params
{
	int                                                DeltaY;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockySearchResults_GraphItemWidget.OnClickedBlock
struct UBlockySearchResults_GraphItemWidget_OnClickedBlock_Params
{
};

// Function BlockyLua.BlockySearchResults_GraphItemWidget.OnBlockWidgetSelected
struct UBlockySearchResults_GraphItemWidget_OnBlockWidgetSelected_Params
{
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockySearchResults_GraphItemWidget.MarkSearchingStringWithColor
struct UBlockySearchResults_GraphItemWidget_MarkSearchingStringWithColor_Params
{
	struct FString                                     InputString;                                              // (Parm, ZeroConstructor)
	struct FString                                     Target;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ColorString;                                              // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLua.BlockySearchResults_GraphItemWidget.IsSearchUseCase
struct UBlockySearchResults_GraphItemWidget_IsSearchUseCase_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockySearchResults_GraphItemWidget.GetKeyWordColor
struct UBlockySearchResults_GraphItemWidget_GetKeyWordColor_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLua.BlockySearchResults_GraphWidget.ToggleGraphResultsCollapse
struct UBlockySearchResults_GraphWidget_ToggleGraphResultsCollapse_Params
{
};

// Function BlockyLua.BlockySearchResults_GraphWidget.OnSetGraphResultsCollapse
struct UBlockySearchResults_GraphWidget_OnSetGraphResultsCollapse_Params
{
	bool                                               InCollapse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockySearchResults_GraphWidget.OnRefreshDisplayNameView
struct UBlockySearchResults_GraphWidget_OnRefreshDisplayNameView_Params
{
	struct FString                                     InGraphDisplayName;                                       // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockySearchResultsTab.OnSetSelected
struct UBlockySearchResultsTab_OnSetSelected_Params
{
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockySearchWidget.StoreLastSelectedMenuItems
struct UBlockySearchWidget_StoreLastSelectedMenuItems_Params
{
	bool                                               OverrideLastData;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockySearchWidget.ShouldCommitString
struct UBlockySearchWidget_ShouldCommitString_Params
{
	struct FText                                       Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockySearchWidget.SetGraphWidget
struct UBlockySearchWidget_SetGraphWidget_Params
{
	class UBlockyGraphWidget*                          InGraphWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockySearchWidget.SearchMatchingResults
struct UBlockySearchWidget_SearchMatchingResults_Params
{
	struct FString                                     SearchStr;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockySearchWidget.ScrollToTabContent
struct UBlockySearchWidget_ScrollToTabContent_Params
{
	class UBlockySearchResultsTab*                     NewSelectedTab;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockySearchWidget.SaveSearchHistories
struct UBlockySearchWidget_SaveSearchHistories_Params
{
};

// Function BlockyLua.BlockySearchWidget.RevertLastSelectedMenuItem
struct UBlockySearchWidget_RevertLastSelectedMenuItem_Params
{
};

// Function BlockyLua.BlockySearchWidget.RefreshTabContainerView
struct UBlockySearchWidget_RefreshTabContainerView_Params
{
};

// Function BlockyLua.BlockySearchWidget.RefreshSearchResultsView
struct UBlockySearchWidget_RefreshSearchResultsView_Params
{
};

// Function BlockyLua.BlockySearchWidget.LoadSearchHistories
struct UBlockySearchWidget_LoadSearchHistories_Params
{
};

// Function BlockyLua.BlockySearchWidget.IsSearchUseCase
struct UBlockySearchWidget_IsSearchUseCase_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockySearchWidget.HasMenuSelected
struct UBlockySearchWidget_HasMenuSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockySearchWidget.HasAnySearchResults
struct UBlockySearchWidget_HasAnySearchResults_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockySearchWidget.HasAnyHistory
struct UBlockySearchWidget_HasAnyHistory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockySearchWidget.GetTotalSearchedNums
struct UBlockySearchWidget_GetTotalSearchedNums_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockySearchWidget.GetSearchHistories
struct UBlockySearchWidget_GetSearchHistories_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLua.BlockySearchWidget.GetHistoryStoreNum
struct UBlockySearchWidget_GetHistoryStoreNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockySearchWidget.GetHistoryNums
struct UBlockySearchWidget_GetHistoryNums_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockySearchWidget.GetGraphSearchedNums
struct UBlockySearchWidget_GetGraphSearchedNums_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockySearchWidget.GetBlockSearchedNums
struct UBlockySearchWidget_GetBlockSearchedNums_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockySearchWidget.FilterSearchResultVisible
struct UBlockySearchWidget_FilterSearchResultVisible_Params
{
	ESearchResultVisibleType                           InSearchResultVisibleType;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockySearchWidget.EmptyListItemSeleceted
struct UBlockySearchWidget_EmptyListItemSeleceted_Params
{
};

// Function BlockyLua.BlockySearchWidget.DoSearching
struct UBlockySearchWidget_DoSearching_Params
{
	struct FString                                     SearchStr;                                                // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockySearchWidget.ClearSearchHistories
struct UBlockySearchWidget_ClearSearchHistories_Params
{
};

// Function BlockyLua.BlockySearchWidget.ClearMenuSelectionStore
struct UBlockySearchWidget_ClearMenuSelectionStore_Params
{
};

// Function BlockyLua.BlockySearchWidget.AddSearchHistory
struct UBlockySearchWidget_AddSearchHistory_Params
{
	struct FString                                     NewHistory;                                               // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockySelectFromSceneWidget.SetPreset
struct UBlockySelectFromSceneWidget_SetPreset_Params
{
	class UPresetDesc*                                 Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockySelectFromSceneWidget.SetObjectDesc
struct UBlockySelectFromSceneWidget_SetObjectDesc_Params
{
	class UObjectDesc*                                 Value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockySelectFromSceneWidget.SetImageShowIcon
struct UBlockySelectFromSceneWidget_SetImageShowIcon_Params
{
	class UImage*                                      Image;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockySelectFromSceneWidget.OnReceiveCustomSelectionResult
struct UBlockySelectFromSceneWidget_OnReceiveCustomSelectionResult_Params
{
	class UObjectDesc*                                 Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockySelectFromSceneWidget.CallSelectScenePreset
struct UBlockySelectFromSceneWidget_CallSelectScenePreset_Params
{
};

// Function BlockyLua.BlockyStringWidget.StrDelEnt
struct UBlockyStringWidget_StrDelEnt_Params
{
	struct FText                                       Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLua.BlockyStringWidget.StoreSlotDataWithSerialId
struct UBlockyStringWidget_StoreSlotDataWithSerialId_Params
{
	int                                                SerialId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyStringWidget.SetText
struct UBlockyStringWidget_SetText_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyStringWidget.SetResult
struct UBlockyStringWidget_SetResult_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	int                                                SerialId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.CustomizeEditableText.SetNewText
struct UCustomizeEditableText_SetNewText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function BlockyLua.CustomizeEditableText.ReceiveCheckStringResultProcess
struct UCustomizeEditableText_ReceiveCheckStringResultProcess_Params
{
	bool                                               Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ValidString;                                              // (Parm, ZeroConstructor)
	struct FCheckStringHandleData                      Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BlockyLua.CustomizeEditableText.OpenKeyBoard
struct UCustomizeEditableText_OpenKeyBoard_Params
{
};

// DelegateFunction BlockyLua.CustomizeEditableText.OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature
struct UCustomizeEditableText_OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature_Params
{
	struct FText                                       CommittedText;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SerialId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.CustomizeEditableText.GetValidText
struct UCustomizeEditableText_GetValidText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLua.CustomizeEditableTextBox.SetNewText
struct UCustomizeEditableTextBox_SetNewText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function BlockyLua.CustomizeEditableTextBox.ReceiveCheckStringResultProcess
struct UCustomizeEditableTextBox_ReceiveCheckStringResultProcess_Params
{
	bool                                               Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ValidString;                                              // (Parm, ZeroConstructor)
	struct FCheckStringHandleData                      Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction BlockyLua.CustomizeEditableTextBox.OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature
struct UCustomizeEditableTextBox_OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature_Params
{
	struct FText                                       CommittedText;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SerialId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.CustomizeEditableTextBox.GetValidText
struct UCustomizeEditableTextBox_GetValidText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLua.CustomizeMultiLineEditableTextBox.SetNewText
struct UCustomizeMultiLineEditableTextBox_SetNewText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function BlockyLua.CustomizeMultiLineEditableTextBox.ReceiveCheckStringResultProcess
struct UCustomizeMultiLineEditableTextBox_ReceiveCheckStringResultProcess_Params
{
	bool                                               Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ValidString;                                              // (Parm, ZeroConstructor)
	struct FCheckStringHandleData                      Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction BlockyLua.CustomizeMultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature
struct UCustomizeMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature_Params
{
	struct FText                                       CommittedText;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SerialId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.CustomizeMultiLineEditableTextBox.GetValidText
struct UCustomizeMultiLineEditableTextBox_GetValidText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BlockyLua.CustomizeMultiLineEditableTextBox.CheckStringValidProcess
struct UCustomizeMultiLineEditableTextBox_CheckStringValidProcess_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyAutoScrollBox.Tick
struct UBlockyAutoScrollBox_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyAutoScrollBox.SetTextPadding
struct UBlockyAutoScrollBox_SetTextPadding_Params
{
	class UTextBlock*                                  Text;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBoxSlot*                              boxSlot;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              totalLength;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLoopScrollBase.UserScrolled
struct UBlockyLoopScrollBase_UserScrolled_Params
{
	float                                              Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLoopScrollBase.SetItemType
struct UBlockyLoopScrollBase_SetItemType_Params
{
	class UClass*                                      _ItemType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLoopScrollBase.SetItemCount
struct UBlockyLoopScrollBase_SetItemCount_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyLoopScrollBase.RemoveItem
struct UBlockyLoopScrollBase_RemoveItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLoopScrollBase.RefreshItem
struct UBlockyLoopScrollBase_RefreshItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyLoopScrollBase.RefreshAllItems
struct UBlockyLoopScrollBase_RefreshAllItems_Params
{
};

// DelegateFunction BlockyLua.BlockyLoopScrollBase.OnRefreshItem__DelegateSignature
struct UBlockyLoopScrollBase_OnRefreshItem__DelegateSignature_Params
{
	class UWidget*                                     Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction BlockyLua.BlockyLoopScrollBase.OnItemCreated__DelegateSignature
struct UBlockyLoopScrollBase_OnItemCreated__DelegateSignature_Params
{
	class UWidget*                                     Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction BlockyLua.BlockyLoopScrollBase.OnChangeData__DelegateSignature
struct UBlockyLoopScrollBase_OnChangeData__DelegateSignature_Params
{
	class UWidget*                                     Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyLoopScrollBase.LoopScrollBoxFilterStr
struct UBlockyLoopScrollBase_LoopScrollBoxFilterStr_Params
{
	struct FString                                     filter;                                                   // (Parm, ZeroConstructor)
};

// Function BlockyLua.BlockyLoopScrollBase.LoopScrollBoxFilterByTag
struct UBlockyLoopScrollBase_LoopScrollBoxFilterByTag_Params
{
	TMap<int, struct FIntArrayWrapper>                 Tags;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BlockyLua.BlockyLoopScrollBase.InsertItem
struct UBlockyLoopScrollBase_InsertItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLoopScrollBase.GetWidgetIndex
struct UBlockyLoopScrollBase_GetWidgetIndex_Params
{
	class UWidget*                                     Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyLoopScrollBase.GetItems
struct UBlockyLoopScrollBase_GetItems_Params
{
	TArray<class UWidget*>                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BlockyLua.BlockyLoopScrollBase.GetItemCount
struct UBlockyLoopScrollBase_GetItemCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyLoopScrollBase.GetIndexOfWidget
struct UBlockyLoopScrollBase_GetIndexOfWidget_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BlockyLua.BlockyLoopScrollBase.ChangeData
struct UBlockyLoopScrollBase_ChangeData_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BlockyLua.BlockyLoopScrollBase.AutoSize
struct UBlockyLoopScrollBase_AutoSize_Params
{
	bool                                               bAutoSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLoopScrollBox.ScrollToItem
struct UBlockyLoopScrollBox_ScrollToItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockyLua.BlockyLoopScrollGrid.ScrollToItem
struct UBlockyLoopScrollGrid_ScrollToItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

