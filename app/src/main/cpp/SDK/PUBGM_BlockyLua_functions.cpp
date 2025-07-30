// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BlockyLua.Blocky3DVarWidget.SetResult
// (Final, Native, Public, BlueprintCallable)

void UBlocky3DVarWidget::SetResult()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.Blocky3DVarWidget.SetResult");

	UBlocky3DVarWidget_SetResult_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.Blocky3DVarWidget.InitText
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UBlocky3DVarWidget::InitText(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.Blocky3DVarWidget.InitText");

	UBlocky3DVarWidget_InitText_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.Blocky3DVarWidget.CleanNumber
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Input                          (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBlocky3DVarWidget::CleanNumber(const struct FString& Input)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.Blocky3DVarWidget.CleanNumber");

	UBlocky3DVarWidget_CleanNumber_Params params;
	params.Input = Input;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyBlockDisplayWidget_Custom.UpdateName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)

void UBlockyBlockDisplayWidget_Custom::UpdateName(const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBlockDisplayWidget_Custom.UpdateName");

	UBlockyBlockDisplayWidget_Custom_UpdateName_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyBlockDisplayWidget_Custom.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECustomBlockType>  Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyBlockDisplayWidget_Custom::Init(TEnumAsByte<ECustomBlockType> Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBlockDisplayWidget_Custom.Init");

	UBlockyBlockDisplayWidget_Custom_Init_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyBlockDisplayWidget_Variable.Init
// (Final, Native, Public, BlueprintCallable)

void UBlockyBlockDisplayWidget_Variable::Init()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBlockDisplayWidget_Variable.Init");

	UBlockyBlockDisplayWidget_Variable_Init_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyBlockDisplayWidget_Variable.CalculateDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UBlockyBlockDisplayWidget_Variable::CalculateDrawSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBlockDisplayWidget_Variable.CalculateDrawSize");

	UBlockyBlockDisplayWidget_Variable_CalculateDrawSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyBlockWindowWidget.SetWidgetVariableToShow
// (Event, Public, BlueprintEvent)
// Parameters:
// class UBlockyMenuItemObject_Variable* item_Variable                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBlockyBlockWindowWidget::SetWidgetVariableToShow(class UBlockyMenuItemObject_Variable* item_Variable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBlockWindowWidget.SetWidgetVariableToShow");

	UBlockyBlockWindowWidget_SetWidgetVariableToShow_Params params;
	params.item_Variable = item_Variable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyBlockWindowWidget.SetWidgetCustomToShow
// (Event, Public, BlueprintEvent)
// Parameters:
// class UBlockyMenuItemObject_Custom* item_Custom                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBlockyBlockWindowWidget::SetWidgetCustomToShow(class UBlockyMenuItemObject_Custom* item_Custom)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBlockWindowWidget.SetWidgetCustomToShow");

	UBlockyBlockWindowWidget_SetWidgetCustomToShow_Params params;
	params.item_Custom = item_Custom;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyBlockWindowWidget.SetWidgetCommonToShow
// (Event, Public, BlueprintEvent)
// Parameters:
// class UBlockyMenuItemObject*   MenuItem                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBlockyBlockWindowWidget::SetWidgetCommonToShow(class UBlockyMenuItemObject* MenuItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBlockWindowWidget.SetWidgetCommonToShow");

	UBlockyBlockWindowWidget_SetWidgetCommonToShow_Params params;
	params.MenuItem = MenuItem;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyBlockWindowWidget.SetWidgetBPToShow
// (Event, Public, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBlockyBlockWindowWidget::SetWidgetBPToShow(class UUserWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBlockWindowWidget.SetWidgetBPToShow");

	UBlockyBlockWindowWidget_SetWidgetBPToShow_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyBooleanWidget.SetText
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)

void UBlockyBooleanWidget::SetText(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBooleanWidget.SetText");

	UBlockyBooleanWidget_SetText_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyBooleanWidget.SetResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 displayValue                   (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UBlockyBooleanWidget::SetResult(const struct FString& displayValue, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBooleanWidget.SetResult");

	UBlockyBooleanWidget_SetResult_Params params;
	params.displayValue = displayValue;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyCategoryItemWidget.SetSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyCategoryItemWidget::SetSelected(bool IsSelected)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyCategoryItemWidget.SetSelected");

	UBlockyCategoryItemWidget_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyCategoryItemWidget.OnScroll
// (Final, Native, Public, BlueprintCallable)

void UBlockyCategoryItemWidget::OnScroll()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyCategoryItemWidget.OnScroll");

	UBlockyCategoryItemWidget_OnScroll_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyCategoryItemWidget.OnClick
// (Final, Native, Public, BlueprintCallable)

void UBlockyCategoryItemWidget::OnClick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyCategoryItemWidget.OnClick");

	UBlockyCategoryItemWidget_OnClick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyCategoryItemWidget.InitWithItemObject
// (Event, Public, BlueprintEvent)
// Parameters:
// class UBlockyCategoryItemObject* Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBlockyCategoryItemWidget::InitWithItemObject(class UBlockyCategoryItemObject* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyCategoryItemWidget.InitWithItemObject");

	UBlockyCategoryItemWidget_InitWithItemObject_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyCategoryWidget.GetCategoryContainer
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPanelWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPanelWidget* UBlockyCategoryWidget::GetCategoryContainer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyCategoryWidget.GetCategoryContainer");

	UBlockyCategoryWidget_GetCategoryContainer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyColorPickerWidget.SetResult
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            Value                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBlockyColorPickerWidget::SetResult(const struct FLinearColor& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyColorPickerWidget.SetResult");

	UBlockyColorPickerWidget_SetResult_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyColorPickerWidget.SetColor
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FLinearColor            Value                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBlockyColorPickerWidget::SetColor(const struct FLinearColor& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyColorPickerWidget.SetColor");

	UBlockyColorPickerWidget_SetColor_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyColorPickerWidget.LoadColors
// (Final, Native, Public, BlueprintCallable)

void UBlockyColorPickerWidget::LoadColors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyColorPickerWidget.LoadColors");

	UBlockyColorPickerWidget_LoadColors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyEditor.UpdateTriggerGroups
// (Event, Public, BlueprintEvent)

void UBlockyEditor::UpdateTriggerGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.UpdateTriggerGroups");

	UBlockyEditor_UpdateTriggerGroups_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyEditor.TryBackToVariableOrCustomPanel
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyEditor::TryBackToVariableOrCustomPanel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.TryBackToVariableOrCustomPanel");

	UBlockyEditor_TryBackToVariableOrCustomPanel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyEditor.ShowPresetAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPresetDesc*             PresetDesc                     (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyEditor::ShowPresetAnimation(class UPresetDesc* PresetDesc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.ShowPresetAnimation");

	UBlockyEditor_ShowPresetAnimation_Params params;
	params.PresetDesc = PresetDesc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyEditor.SetWidgetBPToShow
// (Event, Public, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           HideCategory                   (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyEditor::SetWidgetBPToShow(class UUserWidget* Widget, bool HideCategory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.SetWidgetBPToShow");

	UBlockyEditor_SetWidgetBPToShow_Params params;
	params.Widget = Widget;
	params.HideCategory = HideCategory;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyEditor.SetMenuWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyMenuWidget*       Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBlockyEditor::SetMenuWidget(class UBlockyMenuWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.SetMenuWidget");

	UBlockyEditor_SetMenuWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyEditor.SetCategoryWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyCategoryWidget*   Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBlockyEditor::SetCategoryWidget(class UBlockyCategoryWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.SetCategoryWidget");

	UBlockyEditor_SetCategoryWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyEditor.SetBlockLogWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyLogWidget*        Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBlockyEditor::SetBlockLogWidget(class UBlockyLogWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.SetBlockLogWidget");

	UBlockyEditor_SetBlockLogWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyEditor.SetBlockListWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyBlockWindowWidget* Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBlockyEditor::SetBlockListWidget(class UBlockyBlockWindowWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.SetBlockListWidget");

	UBlockyEditor_SetBlockListWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyEditor.ResetAsyncWidgetHandleMap
// (Final, Native, Public, BlueprintCallable)

void UBlockyEditor::ResetAsyncWidgetHandleMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.ResetAsyncWidgetHandleMap");

	UBlockyEditor_ResetAsyncWidgetHandleMap_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyEditor.OnUpdateUndoRedoState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           HasUndoCommands                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasRedoCommands                (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyEditor::OnUpdateUndoRedoState(bool HasUndoCommands, bool HasRedoCommands)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.OnUpdateUndoRedoState");

	UBlockyEditor_OnUpdateUndoRedoState_Params params;
	params.HasUndoCommands = HasUndoCommands;
	params.HasRedoCommands = HasRedoCommands;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyEditor.OnShowTips
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Tips                           (ConstParm, Parm, OutParm, ReferenceParm)

void UBlockyEditor::OnShowTips(const struct FText& Tips)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.OnShowTips");

	UBlockyEditor_OnShowTips_Params params;
	params.Tips = Tips;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyEditor.LoadWidgetAsync
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 WidgetName                     (Parm, ZeroConstructor)
// struct FString                 WidgetPath                     (Parm, ZeroConstructor)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBlockyEditor::LoadWidgetAsync(const struct FString& WidgetName, const struct FString& WidgetPath, const struct FScriptDelegate& Delegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.LoadWidgetAsync");

	UBlockyEditor_LoadWidgetAsync_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Delegate = Delegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyEditor.LoadMaterialInterface
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AnimationPath                  (Parm, ZeroConstructor)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UBlockyEditor::LoadMaterialInterface(const struct FString& AnimationPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.LoadMaterialInterface");

	UBlockyEditor_LoadMaterialInterface_Params params;
	params.AnimationPath = AnimationPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyEditor.IsShowExplain
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bFlag                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyEditor::IsShowExplain(bool bFlag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.IsShowExplain");

	UBlockyEditor_IsShowExplain_Params params;
	params.bFlag = bFlag;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyEditor.IsCloseComment
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bFlag                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyEditor::IsCloseComment(bool bFlag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.IsCloseComment");

	UBlockyEditor_IsCloseComment_Params params;
	params.bFlag = bFlag;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyEditor.GetSaveCooldownDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBlockyEditor::GetSaveCooldownDuration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.GetSaveCooldownDuration");

	UBlockyEditor_GetSaveCooldownDuration_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyEditor.GetLocaleString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 KeyString                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBlockyEditor::GetLocaleString(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.GetLocaleString");

	UBlockyEditor_GetLocaleString_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyEditor.GetCurrentMenuItem
// (Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyMenuItemObject*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlockyMenuItemObject* UBlockyEditor::GetCurrentMenuItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.GetCurrentMenuItem");

	UBlockyEditor_GetCurrentMenuItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyEditor.CollectListItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bCollect                       (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyEditor::CollectListItem(bool bCollect)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.CollectListItem");

	UBlockyEditor_CollectListItem_Params params;
	params.bCollect = bCollect;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyEditor.BP_OnShowTools
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<EBlockyBPToolButtonType> ButtonTypes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBlockyEditor::BP_OnShowTools(TArray<EBlockyBPToolButtonType> ButtonTypes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.BP_OnShowTools");

	UBlockyEditor_BP_OnShowTools_Params params;
	params.ButtonTypes = ButtonTypes;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyEditor.AddChildBluckyWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBlockyEditor::AddChildBluckyWidget(class UUserWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.AddChildBluckyWidget");

	UBlockyEditor_AddChildBluckyWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyEnumWidget.SetShowDisplayItems
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TMap<struct FName, struct FText> Names                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBlockyEnumWidget::SetShowDisplayItems(TMap<struct FName, struct FText> Names)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEnumWidget.SetShowDisplayItems");

	UBlockyEnumWidget_SetShowDisplayItems_Params params;
	params.Names = Names;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyEnumWidget.SetResultWithName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyEnumWidget::SetResultWithName(const struct FName& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEnumWidget.SetResultWithName");

	UBlockyEnumWidget_SetResultWithName_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyFloatWidget.SetText
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)

void UBlockyFloatWidget::SetText(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyFloatWidget.SetText");

	UBlockyFloatWidget_SetText_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyFloatWidget.SetResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)

void UBlockyFloatWidget::SetResult(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyFloatWidget.SetResult");

	UBlockyFloatWidget_SetResult_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyFloatWidget.CleanNumber
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Input                          (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBlockyFloatWidget::CleanNumber(const struct FString& Input)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyFloatWidget.CleanNumber");

	UBlockyFloatWidget_CleanNumber_Params params;
	params.Input = Input;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGraphWidget.ViewPosToCanvasPos
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               Postion                        (Parm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UBlockyGraphWidget::ViewPosToCanvasPos(const struct FVector2D& Postion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ViewPosToCanvasPos");

	UBlockyGraphWidget_ViewPosToCanvasPos_Params params;
	params.Postion = Postion;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGraphWidget.UpdateVariableItemNames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> UBlockyGraphWidget::UpdateVariableItemNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.UpdateVariableItemNames");

	UBlockyGraphWidget_UpdateVariableItemNames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGraphWidget.UpdateTriggerGroups
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::UpdateTriggerGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.UpdateTriggerGroups");

	UBlockyGraphWidget_UpdateTriggerGroups_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.UpdateCustomItemNames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> UBlockyGraphWidget::UpdateCustomItemNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.UpdateCustomItemNames");

	UBlockyGraphWidget_UpdateCustomItemNames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGraphWidget.Undo
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::Undo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Undo");

	UBlockyGraphWidget_Undo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.TryBackToVariableOrCustomPanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyGraphWidget::TryBackToVariableOrCustomPanel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.TryBackToVariableOrCustomPanel");

	UBlockyGraphWidget_TryBackToVariableOrCustomPanel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGraphWidget.ShowTips
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   Tips                           (ConstParm, Parm, OutParm, ReferenceParm)

void UBlockyGraphWidget::ShowTips(const struct FText& Tips)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ShowTips");

	UBlockyGraphWidget_ShowTips_Params params;
	params.Tips = Tips;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.ShowPresetParamPop
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::ShowPresetParamPop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ShowPresetParamPop");

	UBlockyGraphWidget_ShowPresetParamPop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.SetViewScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          inScale                        (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphWidget::SetViewScale(float inScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SetViewScale");

	UBlockyGraphWidget_SetViewScale_Params params;
	params.inScale = inScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.SetViewPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               ViewPosition                   (Parm, IsPlainOldData)

void UBlockyGraphWidget::SetViewPosition(const struct FVector2D& ViewPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SetViewPosition");

	UBlockyGraphWidget_SetViewPosition_Params params;
	params.ViewPosition = ViewPosition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.SetMenuWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyMenuWidget*       Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBlockyGraphWidget::SetMenuWidget(class UBlockyMenuWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SetMenuWidget");

	UBlockyGraphWidget_SetMenuWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.SetCurrentSubGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InName                         (Parm, ZeroConstructor)

void UBlockyGraphWidget::SetCurrentSubGraph(const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SetCurrentSubGraph");

	UBlockyGraphWidget_SetCurrentSubGraph_Params params;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.SetCategoryWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyCategoryWidget*   Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBlockyGraphWidget::SetCategoryWidget(class UBlockyCategoryWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SetCategoryWidget");

	UBlockyGraphWidget_SetCategoryWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.SetBlockLogWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyLogWidget*        Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBlockyGraphWidget::SetBlockLogWidget(class UBlockyLogWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SetBlockLogWidget");

	UBlockyGraphWidget_SetBlockLogWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.SetBlockListWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyBlockWindowWidget* Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBlockyGraphWidget::SetBlockListWidget(class UBlockyBlockWindowWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SetBlockListWidget");

	UBlockyGraphWidget_SetBlockListWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.SaveGraphToJsonText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBlockyGraphWidget::SaveGraphToJsonText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SaveGraphToJsonText");

	UBlockyGraphWidget_SaveGraphToJsonText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGraphWidget.SaveGraphToBin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UBlockyGraphWidget::SaveGraphToBin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SaveGraphToBin");

	UBlockyGraphWidget_SaveGraphToBin_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGraphWidget.SaveGlobalVarToJsonText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBlockyGraphWidget::SaveGlobalVarToJsonText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SaveGlobalVarToJsonText");

	UBlockyGraphWidget_SaveGlobalVarToJsonText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGraphWidget.SaveGlobalVarToBin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UBlockyGraphWidget::SaveGlobalVarToBin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SaveGlobalVarToBin");

	UBlockyGraphWidget_SaveGlobalVarToBin_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGraphWidget.SaveCustom
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::SaveCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SaveCustom");

	UBlockyGraphWidget_SaveCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.SaveBlockyGraphToTemplate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyGraph*            BlockyGraph                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UBlockyGraphWidget::SaveBlockyGraphToTemplate(class UBlockyGraph* BlockyGraph)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SaveBlockyGraphToTemplate");

	UBlockyGraphWidget_SaveBlockyGraphToTemplate_Params params;
	params.BlockyGraph = BlockyGraph;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGraphWidget.Save
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::Save()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Save");

	UBlockyGraphWidget_Save_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.ReturnToPreviewGraph
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::ReturnToPreviewGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ReturnToPreviewGraph");

	UBlockyGraphWidget_ReturnToPreviewGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.ReturnToMainGraph
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::ReturnToMainGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ReturnToMainGraph");

	UBlockyGraphWidget_ReturnToMainGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.ResetJsonChangedFlag
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::ResetJsonChangedFlag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ResetJsonChangedFlag");

	UBlockyGraphWidget_ResetJsonChangedFlag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.ResetGraph
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::ResetGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ResetGraph");

	UBlockyGraphWidget_ResetGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.RemoveSubGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InName                         (Parm, ZeroConstructor)

void UBlockyGraphWidget::RemoveSubGraph(const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.RemoveSubGraph");

	UBlockyGraphWidget_RemoveSubGraph_Params params;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.RefreshFont
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::RefreshFont()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.RefreshFont");

	UBlockyGraphWidget_RefreshFont_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.ReEditVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphWidget::ReEditVariable(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ReEditVariable");

	UBlockyGraphWidget_ReEditVariable_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.Redo
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::Redo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Redo");

	UBlockyGraphWidget_Redo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.QuoteCustom
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::QuoteCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.QuoteCustom");

	UBlockyGraphWidget_QuoteCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.Quote
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::Quote()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Quote");

	UBlockyGraphWidget_Quote_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.Paste
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::Paste()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Paste");

	UBlockyGraphWidget_Paste_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.OnCloseItemList
// (Event, Public, BlueprintEvent)

void UBlockyGraphWidget::OnCloseItemList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.OnCloseItemList");

	UBlockyGraphWidget_OnCloseItemList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.LoadTemplateToBlockyGraph
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          TemplateAst                    (Parm, OutParm, ZeroConstructor)
// bool                           IsCreateNewGraph               (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphWidget::LoadTemplateToBlockyGraph(bool IsCreateNewGraph, TArray<unsigned char>* TemplateAst)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.LoadTemplateToBlockyGraph");

	UBlockyGraphWidget_LoadTemplateToBlockyGraph_Params params;
	params.IsCreateNewGraph = IsCreateNewGraph;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TemplateAst != nullptr)
		*TemplateAst = params.TemplateAst;
}


// Function BlockyLua.BlockyGraphWidget.LoadGraphFromJsonText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 JsonStr                        (ConstParm, Parm, ZeroConstructor)

void UBlockyGraphWidget::LoadGraphFromJsonText(const struct FString& JsonStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.LoadGraphFromJsonText");

	UBlockyGraphWidget_LoadGraphFromJsonText_Params params;
	params.JsonStr = JsonStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.LoadGraphFromBin
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          JsonStr                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBlockyGraphWidget::LoadGraphFromBin(TArray<unsigned char> JsonStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.LoadGraphFromBin");

	UBlockyGraphWidget_LoadGraphFromBin_Params params;
	params.JsonStr = JsonStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.LoadGlobalVarFromJsonText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 JsonStr                        (ConstParm, Parm, ZeroConstructor)

void UBlockyGraphWidget::LoadGlobalVarFromJsonText(const struct FString& JsonStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.LoadGlobalVarFromJsonText");

	UBlockyGraphWidget_LoadGlobalVarFromJsonText_Params params;
	params.JsonStr = JsonStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.LoadGlobalVarFromBin
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          JsonStr                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBlockyGraphWidget::LoadGlobalVarFromBin(TArray<unsigned char> JsonStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.LoadGlobalVarFromBin");

	UBlockyGraphWidget_LoadGlobalVarFromBin_Params params;
	params.JsonStr = JsonStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.Load
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::Load()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Load");

	UBlockyGraphWidget_Load_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.IsViewOverlap
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Position                       (Parm, IsPlainOldData)
// struct FVector2D               Size                           (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyGraphWidget::IsViewOverlap(const struct FVector2D& Position, const struct FVector2D& Size)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.IsViewOverlap");

	UBlockyGraphWidget_IsViewOverlap_Params params;
	params.Position = Position;
	params.Size = Size;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGraphWidget.IsFirstGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyGraphWidget::IsFirstGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.IsFirstGraph");

	UBlockyGraphWidget_IsFirstGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGraphWidget.GM_GenerateAllBlocks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            CombinedBlocksNum              (Parm, ZeroConstructor, IsPlainOldData)
// int                            GraphBlocksNum                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNeedResetGraph                (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphWidget::GM_GenerateAllBlocks(int CombinedBlocksNum, int GraphBlocksNum, bool bNeedResetGraph)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.GM_GenerateAllBlocks");

	UBlockyGraphWidget_GM_GenerateAllBlocks_Params params;
	params.CombinedBlocksNum = CombinedBlocksNum;
	params.GraphBlocksNum = GraphBlocksNum;
	params.bNeedResetGraph = bNeedResetGraph;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.GM_AddBlocks
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         typeNames                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphWidget::GM_AddBlocks(TArray<struct FString> typeNames, int X, int Y)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.GM_AddBlocks");

	UBlockyGraphWidget_GM_AddBlocks_Params params;
	params.typeNames = typeNames;
	params.X = X;
	params.Y = Y;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.GetViewSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UBlockyGraphWidget::GetViewSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.GetViewSize");

	UBlockyGraphWidget_GetViewSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGraphWidget.GetViewScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBlockyGraphWidget::GetViewScale()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.GetViewScale");

	UBlockyGraphWidget_GetViewScale_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGraphWidget.GetViewPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UBlockyGraphWidget::GetViewPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.GetViewPosition");

	UBlockyGraphWidget_GetViewPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGraphWidget.GetJsonChangedFlag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyGraphWidget::GetJsonChangedFlag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.GetJsonChangedFlag");

	UBlockyGraphWidget_GetJsonChangedFlag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGraphWidget.GetDeleteBlockUIRect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InRectWidth                    (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphWidget::GetDeleteBlockUIRect(float InRectWidth)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.GetDeleteBlockUIRect");

	UBlockyGraphWidget_GetDeleteBlockUIRect_Params params;
	params.InRectWidth = InRectWidth;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.GetCurrentGraph
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBlockyGraph*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlockyGraph* UBlockyGraphWidget::GetCurrentGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.GetCurrentGraph");

	UBlockyGraphWidget_GetCurrentGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGraphWidget.FocusTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockBase*              TargetBlock                    (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphWidget::FocusTo(class UBlockBase* TargetBlock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.FocusTo");

	UBlockyGraphWidget_FocusTo_Params params;
	params.TargetBlock = TargetBlock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.FinishVariableEdit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSaveVar                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReEdit                        (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphWidget::FinishVariableEdit(bool bSaveVar, bool bReEdit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.FinishVariableEdit");

	UBlockyGraphWidget_FinishVariableEdit_Params params;
	params.bSaveVar = bSaveVar;
	params.bReEdit = bReEdit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.FinishCustomEdit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSave                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphWidget::FinishCustomEdit(bool bSave)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.FinishCustomEdit");

	UBlockyGraphWidget_FinishCustomEdit_Params params;
	params.bSave = bSave;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.FinishBlockSetting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSave                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphWidget::FinishBlockSetting(bool bSave)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.FinishBlockSetting");

	UBlockyGraphWidget_FinishBlockSetting_Params params;
	params.bSave = bSave;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.Eject
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::Eject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Eject");

	UBlockyGraphWidget_Eject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.EditCustumBlockGraph
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::EditCustumBlockGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.EditCustumBlockGraph");

	UBlockyGraphWidget_EditCustumBlockGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.EditCustom
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::EditCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.EditCustom");

	UBlockyGraphWidget_EditCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.Disable
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::Disable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Disable");

	UBlockyGraphWidget_Disable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.DeleteVariableListItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphWidget::DeleteVariableListItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.DeleteVariableListItem");

	UBlockyGraphWidget_DeleteVariableListItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.DeleteSelected
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::DeleteSelected()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.DeleteSelected");

	UBlockyGraphWidget_DeleteSelected_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.DeleteCustom
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::DeleteCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.DeleteCustom");

	UBlockyGraphWidget_DeleteCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.DefineCustom
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::DefineCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.DefineCustom");

	UBlockyGraphWidget_DefineCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.Define
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::Define()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Define");

	UBlockyGraphWidget_Define_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.Copy
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::Copy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Copy");

	UBlockyGraphWidget_Copy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.Comment
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::Comment()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Comment");

	UBlockyGraphWidget_Comment_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.CollectListItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bCollect                       (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphWidget::CollectListItem(bool bCollect)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.CollectListItem");

	UBlockyGraphWidget_CollectListItem_Params params;
	params.bCollect = bCollect;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.Clone
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::Clone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Clone");

	UBlockyGraphWidget_Clone_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.ClearUndoRedoDatas
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::ClearUndoRedoDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ClearUndoRedoDatas");

	UBlockyGraphWidget_ClearUndoRedoDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.ClearTextSizeCache
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::ClearTextSizeCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ClearTextSizeCache");

	UBlockyGraphWidget_ClearTextSizeCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.ClearLog
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::ClearLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ClearLog");

	UBlockyGraphWidget_ClearLog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.CanvasPosToViewPos
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               Postion                        (Parm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UBlockyGraphWidget::CanvasPosToViewPos(const struct FVector2D& Postion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.CanvasPosToViewPos");

	UBlockyGraphWidget_CanvasPosToViewPos_Params params;
	params.Postion = Postion;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGraphWidget.BlockyLog_Show
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBlockyLogMsgMode              Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// class UBlockBase*              BlockSource                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SlotID                         (Parm, ZeroConstructor)
// struct FString                 Info                           (Parm, ZeroConstructor)

void UBlockyGraphWidget::BlockyLog_Show(EBlockyLogMsgMode Mode, class UBlockBase* BlockSource, const struct FString& SlotID, const struct FString& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.BlockyLog_Show");

	UBlockyGraphWidget_BlockyLog_Show_Params params;
	params.Mode = Mode;
	params.BlockSource = BlockSource;
	params.SlotID = SlotID;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.AddSubGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InName                         (Parm, ZeroConstructor)
// struct FString                 InType                         (Parm, ZeroConstructor)

void UBlockyGraphWidget::AddSubGraph(const struct FString& InName, const struct FString& InType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.AddSubGraph");

	UBlockyGraphWidget_AddSubGraph_Params params;
	params.InName = InName;
	params.InType = InType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGraphWidget.AddGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InName                         (Parm, ZeroConstructor)
// struct FString                 InType                         (Parm, ZeroConstructor)
// class UBlockyGraph*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlockyGraph* UBlockyGraphWidget::AddGraph(const struct FString& InName, const struct FString& InType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.AddGraph");

	UBlockyGraphWidget_AddGraph_Params params;
	params.InName = InName;
	params.InType = InType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGraphWidget.AddGlobalComment
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphWidget::AddGlobalComment()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.AddGlobalComment");

	UBlockyGraphWidget_AddGlobalComment_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyGroupWidget.GetGroupContainer
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPanelWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPanelWidget* UBlockyGroupWidget::GetGroupContainer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGroupWidget.GetGroupContainer");

	UBlockyGroupWidget_GetGroupContainer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyGroupWidget.AddGroupItem
// (Final, Native, Public)

void UBlockyGroupWidget::AddGroupItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGroupWidget.AddGroupItem");

	UBlockyGroupWidget_AddGroupItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyIntegerWidget.SetText
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)

void UBlockyIntegerWidget::SetText(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyIntegerWidget.SetText");

	UBlockyIntegerWidget_SetText_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyIntegerWidget.SetResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)

void UBlockyIntegerWidget::SetResult(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyIntegerWidget.SetResult");

	UBlockyIntegerWidget_SetResult_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyIntegerWidget.SetNegativeEnable
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyIntegerWidget::SetNegativeEnable(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyIntegerWidget.SetNegativeEnable");

	UBlockyIntegerWidget_SetNegativeEnable_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLogItemWidget.SetShowWarn
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Warn                           (Parm, ZeroConstructor)

void UBlockyLogItemWidget::SetShowWarn(const struct FString& Warn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogItemWidget.SetShowWarn");

	UBlockyLogItemWidget_SetShowWarn_Params params;
	params.Warn = Warn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLogItemWidget.SetShowInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Info                           (Parm, ZeroConstructor)

void UBlockyLogItemWidget::SetShowInfo(const struct FString& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogItemWidget.SetShowInfo");

	UBlockyLogItemWidget_SetShowInfo_Params params;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLogItemWidget.SetShowError
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Error                          (Parm, ZeroConstructor)

void UBlockyLogItemWidget::SetShowError(const struct FString& Error)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogItemWidget.SetShowError");

	UBlockyLogItemWidget_SetShowError_Params params;
	params.Error = Error;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLogItemWidget.SetActiveWidgetIndex
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLogItemWidget::SetActiveWidgetIndex(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogItemWidget.SetActiveWidgetIndex");

	UBlockyLogItemWidget_SetActiveWidgetIndex_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLogItemWidget.OnClickBtnToBlock
// (Final, Native, Public, BlueprintCallable)

void UBlockyLogItemWidget::OnClickBtnToBlock()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogItemWidget.OnClickBtnToBlock");

	UBlockyLogItemWidget_OnClickBtnToBlock_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLogItemWidget.GetTextBlockWarn
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTextBlock*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTextBlock* UBlockyLogItemWidget::GetTextBlockWarn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogItemWidget.GetTextBlockWarn");

	UBlockyLogItemWidget_GetTextBlockWarn_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLogItemWidget.GetTextBlockInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTextBlock*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTextBlock* UBlockyLogItemWidget::GetTextBlockInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogItemWidget.GetTextBlockInfo");

	UBlockyLogItemWidget_GetTextBlockInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLogItemWidget.GetTextBlockError
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTextBlock*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTextBlock* UBlockyLogItemWidget::GetTextBlockError()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogItemWidget.GetTextBlockError");

	UBlockyLogItemWidget_GetTextBlockError_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLogItemWidget.GetActiveWidgetIndex
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBlockyLogItemWidget::GetActiveWidgetIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogItemWidget.GetActiveWidgetIndex");

	UBlockyLogItemWidget_GetActiveWidgetIndex_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLogWidget.ShowLog
// (Final, Native, Public, BlueprintCallable)

void UBlockyLogWidget::ShowLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.ShowLog");

	UBlockyLogWidget_ShowLog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLogWidget.SetBtnWarnText
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Warn                           (Parm, ZeroConstructor)

void UBlockyLogWidget::SetBtnWarnText(const struct FString& Warn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.SetBtnWarnText");

	UBlockyLogWidget_SetBtnWarnText_Params params;
	params.Warn = Warn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLogWidget.SetBtnInfoText
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Info                           (Parm, ZeroConstructor)

void UBlockyLogWidget::SetBtnInfoText(const struct FString& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.SetBtnInfoText");

	UBlockyLogWidget_SetBtnInfoText_Params params;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLogWidget.SetBtnErrorText
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Error                          (Parm, ZeroConstructor)

void UBlockyLogWidget::SetBtnErrorText(const struct FString& Error)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.SetBtnErrorText");

	UBlockyLogWidget_SetBtnErrorText_Params params;
	params.Error = Error;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLogWidget.OnClickWarnShow
// (Final, Native, Public, BlueprintCallable)

void UBlockyLogWidget::OnClickWarnShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.OnClickWarnShow");

	UBlockyLogWidget_OnClickWarnShow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLogWidget.OnClickInfoShow
// (Final, Native, Public, BlueprintCallable)

void UBlockyLogWidget::OnClickInfoShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.OnClickInfoShow");

	UBlockyLogWidget_OnClickInfoShow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLogWidget.OnClickErrorShow
// (Final, Native, Public, BlueprintCallable)

void UBlockyLogWidget::OnClickErrorShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.OnClickErrorShow");

	UBlockyLogWidget_OnClickErrorShow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLogWidget.OnClickAllShow
// (Final, Native, Public, BlueprintCallable)

void UBlockyLogWidget::OnClickAllShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.OnClickAllShow");

	UBlockyLogWidget_OnClickAllShow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLogWidget.GetLogContainer
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPanelWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPanelWidget* UBlockyLogWidget::GetLogContainer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.GetLogContainer");

	UBlockyLogWidget_GetLogContainer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLogWidget.GetItemTextWidth
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBlockyLogWidget::GetItemTextWidth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.GetItemTextWidth");

	UBlockyLogWidget_GetItemTextWidth_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLogWidget.GetBtnWarnText
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBlockyLogWidget::GetBtnWarnText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.GetBtnWarnText");

	UBlockyLogWidget_GetBtnWarnText_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLogWidget.GetBtnInfoText
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBlockyLogWidget::GetBtnInfoText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.GetBtnInfoText");

	UBlockyLogWidget_GetBtnInfoText_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLogWidget.GetBtnErrorText
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBlockyLogWidget::GetBtnErrorText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.GetBtnErrorText");

	UBlockyLogWidget_GetBtnErrorText_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLuaLoopScrollBase.UserScrolled
// (Final, Native, Protected)
// Parameters:
// float                          Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollBase::UserScrolled(float Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.UserScrolled");

	UBlockyLuaLoopScrollBase_UserScrolled_Params params;
	params.Offset = Offset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBase.SetItemType
// (Final, Native, Public)
// Parameters:
// class UClass*                  _ItemType                      (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollBase::SetItemType(class UClass* _ItemType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.SetItemType");

	UBlockyLuaLoopScrollBase_SetItemType_Params params;
	params._ItemType = _ItemType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBase.SetItemCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyLuaLoopScrollBase::SetItemCount(int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.SetItemCount");

	UBlockyLuaLoopScrollBase_SetItemCount_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLuaLoopScrollBase.RemoveItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollBase::RemoveItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.RemoveItem");

	UBlockyLuaLoopScrollBase_RemoveItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBase.RefreshItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyLuaLoopScrollBase::RefreshItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.RefreshItem");

	UBlockyLuaLoopScrollBase_RefreshItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLuaLoopScrollBase.RefreshAllItems
// (Final, Native, Public, BlueprintCallable)

void UBlockyLuaLoopScrollBase::RefreshAllItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.RefreshAllItems");

	UBlockyLuaLoopScrollBase_RefreshAllItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBase.Push
// (Final, Native, Public, BlueprintCallable)

void UBlockyLuaLoopScrollBase::Push()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.Push");

	UBlockyLuaLoopScrollBase_Push_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBase.Pop
// (Final, Native, Public, BlueprintCallable)

void UBlockyLuaLoopScrollBase::Pop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.Pop");

	UBlockyLuaLoopScrollBase_Pop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction BlockyLua.BlockyLuaLoopScrollBase.OnRefreshItem__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UWidget*                 Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollBase::OnRefreshItem__DelegateSignature(class UWidget* Item, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.BlockyLuaLoopScrollBase.OnRefreshItem__DelegateSignature");

	UBlockyLuaLoopScrollBase_OnRefreshItem__DelegateSignature_Params params;
	params.Item = Item;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction BlockyLua.BlockyLuaLoopScrollBase.OnItemCreated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UWidget*                 Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollBase::OnItemCreated__DelegateSignature(class UWidget* Item, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.BlockyLuaLoopScrollBase.OnItemCreated__DelegateSignature");

	UBlockyLuaLoopScrollBase_OnItemCreated__DelegateSignature_Params params;
	params.Item = Item;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction BlockyLua.BlockyLuaLoopScrollBase.OnChangeData__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UWidget*                 Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Key                            (Parm, ZeroConstructor)

void UBlockyLuaLoopScrollBase::OnChangeData__DelegateSignature(class UWidget* Item, int Index, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.BlockyLuaLoopScrollBase.OnChangeData__DelegateSignature");

	UBlockyLuaLoopScrollBase_OnChangeData__DelegateSignature_Params params;
	params.Item = Item;
	params.Index = Index;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBase.InsertItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollBase::InsertItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.InsertItem");

	UBlockyLuaLoopScrollBase_InsertItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBase.GetWidgetIndex
// (Final, Native, Protected)
// Parameters:
// class UWidget*                 Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBlockyLuaLoopScrollBase::GetWidgetIndex(class UWidget* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.GetWidgetIndex");

	UBlockyLuaLoopScrollBase_GetWidgetIndex_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLuaLoopScrollBase.GetItemCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBlockyLuaLoopScrollBase::GetItemCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.GetItemCount");

	UBlockyLuaLoopScrollBase_GetItemCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLuaLoopScrollBase.GetIndexOfWidget
// (Final, Native, Protected)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UBlockyLuaLoopScrollBase::GetIndexOfWidget(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.GetIndexOfWidget");

	UBlockyLuaLoopScrollBase_GetIndexOfWidget_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLuaLoopScrollBase.ChangeData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyLuaLoopScrollBase::ChangeData(int Index, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.ChangeData");

	UBlockyLuaLoopScrollBase_ChangeData_Params params;
	params.Index = Index;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLuaLoopScrollBase.CallTick
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollBase::CallTick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.CallTick");

	UBlockyLuaLoopScrollBase_CallTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBase.AutoSize
// (Final, Native, Public)
// Parameters:
// bool                           bAutoSize                      (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollBase::AutoSize(bool bAutoSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.AutoSize");

	UBlockyLuaLoopScrollBase_AutoSize_Params params;
	params.bAutoSize = bAutoSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.UserScrolled
// (Final, Native, Protected)
// Parameters:
// float                          Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollBase_MultiItem::UserScrolled(float Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.UserScrolled");

	UBlockyLuaLoopScrollBase_MultiItem_UserScrolled_Params params;
	params.Offset = Offset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.SetItemType
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UClass*>          TypeArray                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBlockyLuaLoopScrollBase_MultiItem::SetItemType(TArray<class UClass*> TypeArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.SetItemType");

	UBlockyLuaLoopScrollBase_MultiItem_SetItemType_Params params;
	params.TypeArray = TypeArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.SetItemCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyLuaLoopScrollBase_MultiItem::SetItemCount(int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.SetItemCount");

	UBlockyLuaLoopScrollBase_MultiItem_SetItemCount_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.RemoveItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollBase_MultiItem::RemoveItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.RemoveItem");

	UBlockyLuaLoopScrollBase_MultiItem_RemoveItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.RefreshItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyLuaLoopScrollBase_MultiItem::RefreshItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.RefreshItem");

	UBlockyLuaLoopScrollBase_MultiItem_RefreshItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.RefreshAllItems
// (Final, Native, Public, BlueprintCallable)

void UBlockyLuaLoopScrollBase_MultiItem::RefreshAllItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.RefreshAllItems");

	UBlockyLuaLoopScrollBase_MultiItem_RefreshAllItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.Push
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollBase_MultiItem::Push(class UClass* Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.Push");

	UBlockyLuaLoopScrollBase_MultiItem_Push_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.Pop
// (Final, Native, Public, BlueprintCallable)

void UBlockyLuaLoopScrollBase_MultiItem::Pop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.Pop");

	UBlockyLuaLoopScrollBase_MultiItem_Pop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction BlockyLua.BlockyLuaLoopScrollBase_MultiItem.OnRefreshItem__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UWidget*                 Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollBase_MultiItem::OnRefreshItem__DelegateSignature(class UWidget* Item, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.BlockyLuaLoopScrollBase_MultiItem.OnRefreshItem__DelegateSignature");

	UBlockyLuaLoopScrollBase_MultiItem_OnRefreshItem__DelegateSignature_Params params;
	params.Item = Item;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction BlockyLua.BlockyLuaLoopScrollBase_MultiItem.OnItemCreated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UWidget*                 Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollBase_MultiItem::OnItemCreated__DelegateSignature(class UWidget* Item, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.BlockyLuaLoopScrollBase_MultiItem.OnItemCreated__DelegateSignature");

	UBlockyLuaLoopScrollBase_MultiItem_OnItemCreated__DelegateSignature_Params params;
	params.Item = Item;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction BlockyLua.BlockyLuaLoopScrollBase_MultiItem.OnChangeData__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UWidget*                 Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Key                            (Parm, ZeroConstructor)

void UBlockyLuaLoopScrollBase_MultiItem::OnChangeData__DelegateSignature(class UWidget* Item, int Index, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.BlockyLuaLoopScrollBase_MultiItem.OnChangeData__DelegateSignature");

	UBlockyLuaLoopScrollBase_MultiItem_OnChangeData__DelegateSignature_Params params;
	params.Item = Item;
	params.Index = Index;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.InsertItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollBase_MultiItem::InsertItem(int Index, class UClass* Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.InsertItem");

	UBlockyLuaLoopScrollBase_MultiItem_InsertItem_Params params;
	params.Index = Index;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.GetWidgetIndex
// (Final, Native, Protected)
// Parameters:
// class UWidget*                 Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBlockyLuaLoopScrollBase_MultiItem::GetWidgetIndex(class UWidget* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.GetWidgetIndex");

	UBlockyLuaLoopScrollBase_MultiItem_GetWidgetIndex_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.GetItemCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBlockyLuaLoopScrollBase_MultiItem::GetItemCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.GetItemCount");

	UBlockyLuaLoopScrollBase_MultiItem_GetItemCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.GetIndexOfWidget
// (Final, Native, Protected)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UBlockyLuaLoopScrollBase_MultiItem::GetIndexOfWidget(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.GetIndexOfWidget");

	UBlockyLuaLoopScrollBase_MultiItem_GetIndexOfWidget_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.ClearItems
// (Final, Native, Public, BlueprintCallable)

void UBlockyLuaLoopScrollBase_MultiItem::ClearItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.ClearItems");

	UBlockyLuaLoopScrollBase_MultiItem_ClearItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.ChangeData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyLuaLoopScrollBase_MultiItem::ChangeData(int Index, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.ChangeData");

	UBlockyLuaLoopScrollBase_MultiItem_ChangeData_Params params;
	params.Index = Index;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.CallTick
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollBase_MultiItem::CallTick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.CallTick");

	UBlockyLuaLoopScrollBase_MultiItem_CallTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.AutoSize
// (Final, Native, Public)
// Parameters:
// bool                           bAutoSize                      (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollBase_MultiItem::AutoSize(bool bAutoSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.AutoSize");

	UBlockyLuaLoopScrollBase_MultiItem_AutoSize_Params params;
	params.bAutoSize = bAutoSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBox.ScrollToItem
// (Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollBox::ScrollToItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBox.ScrollToItem");

	UBlockyLuaLoopScrollBox_ScrollToItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.ScrollToItem
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollBox_MultiItem::ScrollToItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.ScrollToItem");

	UBlockyLuaLoopScrollBox_MultiItem_ScrollToItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.BP_UserScrolled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollBox_MultiItem::BP_UserScrolled(float Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.BP_UserScrolled");

	UBlockyLuaLoopScrollBox_MultiItem_BP_UserScrolled_Params params;
	params.Offset = Offset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.BP_PreventScrollOutOfSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bScroll                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyLuaLoopScrollBox_MultiItem::BP_PreventScrollOutOfSize(bool bScroll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.BP_PreventScrollOutOfSize");

	UBlockyLuaLoopScrollBox_MultiItem_BP_PreventScrollOutOfSize_Params params;
	params.bScroll = bScroll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.BP_GetContentSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBlockyLuaLoopScrollBox_MultiItem::BP_GetContentSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.BP_GetContentSize");

	UBlockyLuaLoopScrollBox_MultiItem_BP_GetContentSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLuaLoopScrollGrid.ScrollToItem
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaLoopScrollGrid::ScrollToItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollGrid.ScrollToItem");

	UBlockyLuaLoopScrollGrid_ScrollToItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyMenuItemWidget.SetSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyMenuItemWidget::SetSelected(bool IsSelected)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyMenuItemWidget.SetSelected");

	UBlockyMenuItemWidget_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyMenuItemWidget.OnClick
// (Final, Native, Public, BlueprintCallable)

void UBlockyMenuItemWidget::OnClick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyMenuItemWidget.OnClick");

	UBlockyMenuItemWidget_OnClick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyMenuItemWidget.InitWithItemObject
// (Event, Public, BlueprintEvent)
// Parameters:
// class UBlockyMenuItemObject*   Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBlockyMenuItemWidget::InitWithItemObject(class UBlockyMenuItemObject* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyMenuItemWidget.InitWithItemObject");

	UBlockyMenuItemWidget_InitWithItemObject_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyMenuWidget.SelectMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyMenuItemWidget*   MenuItemWidget                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyMenuWidget::SelectMenu(class UBlockyMenuItemWidget* MenuItemWidget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyMenuWidget.SelectMenu");

	UBlockyMenuWidget_SelectMenu_Params params;
	params.MenuItemWidget = MenuItemWidget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyMenuWidget.OnAddMenuItemWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// class UBlockyMenuItemWidget*   MenuItemWidget                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBlockyMenuWidget::OnAddMenuItemWidget(class UBlockyMenuItemWidget* MenuItemWidget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyMenuWidget.OnAddMenuItemWidget");

	UBlockyMenuWidget_OnAddMenuItemWidget_Params params;
	params.MenuItemWidget = MenuItemWidget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyMenuWidget.GetMenuContainer
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPanelWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPanelWidget* UBlockyMenuWidget::GetMenuContainer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyMenuWidget.GetMenuContainer");

	UBlockyMenuWidget_GetMenuContainer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyPresetItemWidget.SetPresetDesc_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPresetDesc*             PresetDesc                     (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyPresetItemWidget::SetPresetDesc_BP(class UPresetDesc* PresetDesc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetItemWidget.SetPresetDesc_BP");

	UBlockyPresetItemWidget_SetPresetDesc_BP_Params params;
	params.PresetDesc = PresetDesc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyPresetItemWidget.SetImageShowIcon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UImage*                  Image                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBlockyPresetItemWidget::SetImageShowIcon(class UImage* Image)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetItemWidget.SetImageShowIcon");

	UBlockyPresetItemWidget_SetImageShowIcon_Params params;
	params.Image = Image;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyPresetWidget.SetResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPresetDesc*             Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBlockyPresetWidget::SetResult(class UPresetDesc* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.SetResult");

	UBlockyPresetWidget_SetResult_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyPresetWidget.SetPresets
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UPresetDesc*>     Presets                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBlockyPresetWidget::SetPresets(TArray<class UPresetDesc*> Presets)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.SetPresets");

	UBlockyPresetWidget_SetPresets_Params params;
	params.Presets = Presets;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyPresetWidget.ResetMenuItem
// (Final, Native, Public, BlueprintCallable)

void UBlockyPresetWidget::ResetMenuItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.ResetMenuItem");

	UBlockyPresetWidget_ResetMenuItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyPresetWidget.OnFilterBtnClick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBlockyPresetWidget::OnFilterBtnClick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.OnFilterBtnClick");

	UBlockyPresetWidget_OnFilterBtnClick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyPresetWidget.LoopScrollBoxFilterStr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 filter                         (Parm, ZeroConstructor)

void UBlockyPresetWidget::LoopScrollBoxFilterStr(const struct FString& filter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.LoopScrollBoxFilterStr");

	UBlockyPresetWidget_LoopScrollBoxFilterStr_Params params;
	params.filter = filter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyPresetWidget.LoopScrollBoxFilterByTag
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TMap<int, struct FIntArrayWrapper> Tags                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBlockyPresetWidget::LoopScrollBoxFilterByTag(TMap<int, struct FIntArrayWrapper> Tags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.LoopScrollBoxFilterByTag");

	UBlockyPresetWidget_LoopScrollBoxFilterByTag_Params params;
	params.Tags = Tags;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyPresetWidget.InitPresets
// (Final, Native, Public, BlueprintCallable)

void UBlockyPresetWidget::InitPresets()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.InitPresets");

	UBlockyPresetWidget_InitPresets_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyPresetWidget.GetLoopScrollBox
// (Event, Public, BlueprintEvent)
// Parameters:
// class UScrollBox*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UScrollBox* UBlockyPresetWidget::GetLoopScrollBox()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.GetLoopScrollBox");

	UBlockyPresetWidget_GetLoopScrollBox_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyPresetWidget.GetIsIconWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyPresetWidget::GetIsIconWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.GetIsIconWidget");

	UBlockyPresetWidget_GetIsIconWidget_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyPresetWidget.ClearSearchText
// (Event, Public, BlueprintEvent)

void UBlockyPresetWidget::ClearSearchText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.ClearSearchText");

	UBlockyPresetWidget_ClearSearchText_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyRichTextBlock.SetText
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (ConstParm, Parm, OutParm, ReferenceParm)

void UBlockyRichTextBlock::SetText(const struct FText& InText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyRichTextBlock.SetText");

	UBlockyRichTextBlock_SetText_Params params;
	params.InText = InText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyRichTextBlock.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBlockyRichTextBlock::GetText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyRichTextBlock.GetText");

	UBlockyRichTextBlock_GetText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockySearchResultPanel.UpdateGraphContentSize
// (Final, Native, Public, BlueprintCallable)

void UBlockySearchResultPanel::UpdateGraphContentSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResultPanel.UpdateGraphContentSize");

	UBlockySearchResultPanel_UpdateGraphContentSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchResultPanel.ToggleGraphResults
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyGraph*            InGraph                        (Parm, ZeroConstructor, IsPlainOldData)

void UBlockySearchResultPanel::ToggleGraphResults(class UBlockyGraph* InGraph)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResultPanel.ToggleGraphResults");

	UBlockySearchResultPanel_ToggleGraphResults_Params params;
	params.InGraph = InGraph;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchResultPanel.ScrollToCategory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            CategoryIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           GraphCategory                  (Parm, ZeroConstructor, IsPlainOldData)

void UBlockySearchResultPanel::ScrollToCategory(int CategoryIndex, bool GraphCategory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResultPanel.ScrollToCategory");

	UBlockySearchResultPanel_ScrollToCategory_Params params;
	params.CategoryIndex = CategoryIndex;
	params.GraphCategory = GraphCategory;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchResultPanel.RefreshGraphBlocksWidgets
// (Final, Native, Public, BlueprintCallable)

void UBlockySearchResultPanel::RefreshGraphBlocksWidgets()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResultPanel.RefreshGraphBlocksWidgets");

	UBlockySearchResultPanel_RefreshGraphBlocksWidgets_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchResultPanel.OnGraphBlocksCreated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockySearchResultPanel::OnGraphBlocksCreated(class UWidget* Widget, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResultPanel.OnGraphBlocksCreated");

	UBlockySearchResultPanel_OnGraphBlocksCreated_Params params;
	params.Widget = Widget;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchResultPanel.FocusToBlock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyGraph*            InGraph                        (Parm, ZeroConstructor, IsPlainOldData)
// class UBlockBase*              InBlock                        (Parm, ZeroConstructor, IsPlainOldData)

void UBlockySearchResultPanel::FocusToBlock(class UBlockyGraph* InGraph, class UBlockBase* InBlock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResultPanel.FocusToBlock");

	UBlockySearchResultPanel_FocusToBlock_Params params;
	params.InGraph = InGraph;
	params.InBlock = InBlock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchResultPanel.FilterOutSearchResultToShow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESearchResultVisibleType       VisibleType                    (Parm, ZeroConstructor, IsPlainOldData)

void UBlockySearchResultPanel::FilterOutSearchResultToShow(ESearchResultVisibleType VisibleType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResultPanel.FilterOutSearchResultToShow");

	UBlockySearchResultPanel_FilterOutSearchResultToShow_Params params;
	params.VisibleType = VisibleType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchResultPanel.BP_ScrollYOffset
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            DeltaY                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockySearchResultPanel::BP_ScrollYOffset(int DeltaY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResultPanel.BP_ScrollYOffset");

	UBlockySearchResultPanel_BP_ScrollYOffset_Params params;
	params.DeltaY = DeltaY;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockySearchResults_GraphItemWidget.OnClickedBlock
// (Final, Native, Public, BlueprintCallable)

void UBlockySearchResults_GraphItemWidget::OnClickedBlock()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResults_GraphItemWidget.OnClickedBlock");

	UBlockySearchResults_GraphItemWidget_OnClickedBlock_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchResults_GraphItemWidget.OnBlockWidgetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (Parm, ZeroConstructor, IsPlainOldData)

void UBlockySearchResults_GraphItemWidget::OnBlockWidgetSelected(bool bSelected)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResults_GraphItemWidget.OnBlockWidgetSelected");

	UBlockySearchResults_GraphItemWidget_OnBlockWidgetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchResults_GraphItemWidget.MarkSearchingStringWithColor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 InputString                    (Parm, ZeroConstructor)
// struct FString                 Target                         (Parm, ZeroConstructor)
// struct FString                 ColorString                    (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBlockySearchResults_GraphItemWidget::MarkSearchingStringWithColor(const struct FString& InputString, const struct FString& Target, const struct FString& ColorString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResults_GraphItemWidget.MarkSearchingStringWithColor");

	UBlockySearchResults_GraphItemWidget_MarkSearchingStringWithColor_Params params;
	params.InputString = InputString;
	params.Target = Target;
	params.ColorString = ColorString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockySearchResults_GraphItemWidget.IsSearchUseCase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockySearchResults_GraphItemWidget::IsSearchUseCase()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResults_GraphItemWidget.IsSearchUseCase");

	UBlockySearchResults_GraphItemWidget_IsSearchUseCase_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockySearchResults_GraphItemWidget.GetKeyWordColor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBlockySearchResults_GraphItemWidget::GetKeyWordColor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResults_GraphItemWidget.GetKeyWordColor");

	UBlockySearchResults_GraphItemWidget_GetKeyWordColor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockySearchResults_GraphWidget.ToggleGraphResultsCollapse
// (Final, Native, Public, BlueprintCallable)

void UBlockySearchResults_GraphWidget::ToggleGraphResultsCollapse()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResults_GraphWidget.ToggleGraphResultsCollapse");

	UBlockySearchResults_GraphWidget_ToggleGraphResultsCollapse_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchResults_GraphWidget.OnSetGraphResultsCollapse
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           InCollapse                     (Parm, ZeroConstructor, IsPlainOldData)

void UBlockySearchResults_GraphWidget::OnSetGraphResultsCollapse(bool InCollapse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResults_GraphWidget.OnSetGraphResultsCollapse");

	UBlockySearchResults_GraphWidget_OnSetGraphResultsCollapse_Params params;
	params.InCollapse = InCollapse;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchResults_GraphWidget.OnRefreshDisplayNameView
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InGraphDisplayName             (Parm, ZeroConstructor)

void UBlockySearchResults_GraphWidget::OnRefreshDisplayNameView(const struct FString& InGraphDisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResults_GraphWidget.OnRefreshDisplayNameView");

	UBlockySearchResults_GraphWidget_OnRefreshDisplayNameView_Params params;
	params.InGraphDisplayName = InGraphDisplayName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchResultsTab.OnSetSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (Parm, ZeroConstructor, IsPlainOldData)

void UBlockySearchResultsTab::OnSetSelected(bool bSelected)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResultsTab.OnSetSelected");

	UBlockySearchResultsTab_OnSetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchWidget.StoreLastSelectedMenuItems
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           OverrideLastData               (Parm, ZeroConstructor, IsPlainOldData)

void UBlockySearchWidget::StoreLastSelectedMenuItems(bool OverrideLastData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.StoreLastSelectedMenuItems");

	UBlockySearchWidget_StoreLastSelectedMenuItems_Params params;
	params.OverrideLastData = OverrideLastData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchWidget.ShouldCommitString
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   Value                          (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockySearchWidget::ShouldCommitString(const struct FText& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.ShouldCommitString");

	UBlockySearchWidget_ShouldCommitString_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockySearchWidget.SetGraphWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyGraphWidget*      InGraphWidget                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBlockySearchWidget::SetGraphWidget(class UBlockyGraphWidget* InGraphWidget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.SetGraphWidget");

	UBlockySearchWidget_SetGraphWidget_Params params;
	params.InGraphWidget = InGraphWidget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchWidget.SearchMatchingResults
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 SearchStr                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockySearchWidget::SearchMatchingResults(const struct FString& SearchStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.SearchMatchingResults");

	UBlockySearchWidget_SearchMatchingResults_Params params;
	params.SearchStr = SearchStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockySearchWidget.ScrollToTabContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockySearchResultsTab* NewSelectedTab                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBlockySearchWidget::ScrollToTabContent(class UBlockySearchResultsTab* NewSelectedTab)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.ScrollToTabContent");

	UBlockySearchWidget_ScrollToTabContent_Params params;
	params.NewSelectedTab = NewSelectedTab;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchWidget.SaveSearchHistories
// (Final, Native, Public, BlueprintCallable)

void UBlockySearchWidget::SaveSearchHistories()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.SaveSearchHistories");

	UBlockySearchWidget_SaveSearchHistories_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchWidget.RevertLastSelectedMenuItem
// (Final, Native, Public, BlueprintCallable)

void UBlockySearchWidget::RevertLastSelectedMenuItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.RevertLastSelectedMenuItem");

	UBlockySearchWidget_RevertLastSelectedMenuItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchWidget.RefreshTabContainerView
// (Final, Native, Public, BlueprintCallable)

void UBlockySearchWidget::RefreshTabContainerView()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.RefreshTabContainerView");

	UBlockySearchWidget_RefreshTabContainerView_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchWidget.RefreshSearchResultsView
// (Final, Native, Public, BlueprintCallable)

void UBlockySearchWidget::RefreshSearchResultsView()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.RefreshSearchResultsView");

	UBlockySearchWidget_RefreshSearchResultsView_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchWidget.LoadSearchHistories
// (Final, Native, Public, BlueprintCallable)

void UBlockySearchWidget::LoadSearchHistories()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.LoadSearchHistories");

	UBlockySearchWidget_LoadSearchHistories_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchWidget.IsSearchUseCase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockySearchWidget::IsSearchUseCase()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.IsSearchUseCase");

	UBlockySearchWidget_IsSearchUseCase_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockySearchWidget.HasMenuSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockySearchWidget::HasMenuSelected()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.HasMenuSelected");

	UBlockySearchWidget_HasMenuSelected_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockySearchWidget.HasAnySearchResults
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockySearchWidget::HasAnySearchResults()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.HasAnySearchResults");

	UBlockySearchWidget_HasAnySearchResults_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockySearchWidget.HasAnyHistory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockySearchWidget::HasAnyHistory()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.HasAnyHistory");

	UBlockySearchWidget_HasAnyHistory_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockySearchWidget.GetTotalSearchedNums
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBlockySearchWidget::GetTotalSearchedNums()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.GetTotalSearchedNums");

	UBlockySearchWidget_GetTotalSearchedNums_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockySearchWidget.GetSearchHistories
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UBlockySearchWidget::GetSearchHistories()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.GetSearchHistories");

	UBlockySearchWidget_GetSearchHistories_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockySearchWidget.GetHistoryStoreNum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBlockySearchWidget::GetHistoryStoreNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.GetHistoryStoreNum");

	UBlockySearchWidget_GetHistoryStoreNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockySearchWidget.GetHistoryNums
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBlockySearchWidget::GetHistoryNums()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.GetHistoryNums");

	UBlockySearchWidget_GetHistoryNums_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockySearchWidget.GetGraphSearchedNums
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBlockySearchWidget::GetGraphSearchedNums()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.GetGraphSearchedNums");

	UBlockySearchWidget_GetGraphSearchedNums_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockySearchWidget.GetBlockSearchedNums
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBlockySearchWidget::GetBlockSearchedNums()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.GetBlockSearchedNums");

	UBlockySearchWidget_GetBlockSearchedNums_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockySearchWidget.FilterSearchResultVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESearchResultVisibleType       InSearchResultVisibleType      (Parm, ZeroConstructor, IsPlainOldData)

void UBlockySearchWidget::FilterSearchResultVisible(ESearchResultVisibleType InSearchResultVisibleType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.FilterSearchResultVisible");

	UBlockySearchWidget_FilterSearchResultVisible_Params params;
	params.InSearchResultVisibleType = InSearchResultVisibleType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchWidget.EmptyListItemSeleceted
// (Final, Native, Public, BlueprintCallable)

void UBlockySearchWidget::EmptyListItemSeleceted()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.EmptyListItemSeleceted");

	UBlockySearchWidget_EmptyListItemSeleceted_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchWidget.DoSearching
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SearchStr                      (Parm, ZeroConstructor)

void UBlockySearchWidget::DoSearching(const struct FString& SearchStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.DoSearching");

	UBlockySearchWidget_DoSearching_Params params;
	params.SearchStr = SearchStr;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchWidget.ClearSearchHistories
// (Final, Native, Public, BlueprintCallable)

void UBlockySearchWidget::ClearSearchHistories()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.ClearSearchHistories");

	UBlockySearchWidget_ClearSearchHistories_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchWidget.ClearMenuSelectionStore
// (Final, Native, Public, BlueprintCallable)

void UBlockySearchWidget::ClearMenuSelectionStore()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.ClearMenuSelectionStore");

	UBlockySearchWidget_ClearMenuSelectionStore_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySearchWidget.AddSearchHistory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NewHistory                     (Parm, ZeroConstructor)

void UBlockySearchWidget::AddSearchHistory(const struct FString& NewHistory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.AddSearchHistory");

	UBlockySearchWidget_AddSearchHistory_Params params;
	params.NewHistory = NewHistory;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySelectFromSceneWidget.SetPreset
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPresetDesc*             Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBlockySelectFromSceneWidget::SetPreset(class UPresetDesc* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySelectFromSceneWidget.SetPreset");

	UBlockySelectFromSceneWidget_SetPreset_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySelectFromSceneWidget.SetObjectDesc
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObjectDesc*             Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBlockySelectFromSceneWidget::SetObjectDesc(class UObjectDesc* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySelectFromSceneWidget.SetObjectDesc");

	UBlockySelectFromSceneWidget_SetObjectDesc_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySelectFromSceneWidget.SetImageShowIcon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UImage*                  Image                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockySelectFromSceneWidget::SetImageShowIcon(class UImage* Image)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySelectFromSceneWidget.SetImageShowIcon");

	UBlockySelectFromSceneWidget_SetImageShowIcon_Params params;
	params.Image = Image;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockySelectFromSceneWidget.OnReceiveCustomSelectionResult
// (Final, Native, Public)
// Parameters:
// class UObjectDesc*             Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockySelectFromSceneWidget::OnReceiveCustomSelectionResult(class UObjectDesc* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySelectFromSceneWidget.OnReceiveCustomSelectionResult");

	UBlockySelectFromSceneWidget_OnReceiveCustomSelectionResult_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockySelectFromSceneWidget.CallSelectScenePreset
// (Final, Native, Public, BlueprintCallable)

void UBlockySelectFromSceneWidget::CallSelectScenePreset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySelectFromSceneWidget.CallSelectScenePreset");

	UBlockySelectFromSceneWidget_CallSelectScenePreset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyStringWidget.StrDelEnt
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   Value                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBlockyStringWidget::StrDelEnt(const struct FText& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyStringWidget.StrDelEnt");

	UBlockyStringWidget_StrDelEnt_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyStringWidget.StoreSlotDataWithSerialId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SerialId                       (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyStringWidget::StoreSlotDataWithSerialId(int SerialId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyStringWidget.StoreSlotDataWithSerialId");

	UBlockyStringWidget_StoreSlotDataWithSerialId_Params params;
	params.SerialId = SerialId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyStringWidget.SetText
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)

void UBlockyStringWidget::SetText(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyStringWidget.SetText");

	UBlockyStringWidget_SetText_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyStringWidget.SetResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)
// int                            SerialId                       (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyStringWidget::SetResult(const struct FString& Value, int SerialId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyStringWidget.SetResult");

	UBlockyStringWidget_SetResult_Params params;
	params.Value = Value;
	params.SerialId = SerialId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.CustomizeEditableText.SetNewText
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)

void UCustomizeEditableText::SetNewText(const struct FText& InText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeEditableText.SetNewText");

	UCustomizeEditableText_SetNewText_Params params;
	params.InText = InText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.CustomizeEditableText.ReceiveCheckStringResultProcess
// (Final, Native, Protected, HasOutParms)
// Parameters:
// bool                           Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ValidString                    (Parm, ZeroConstructor)
// struct FCheckStringHandleData  Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UCustomizeEditableText::ReceiveCheckStringResultProcess(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeEditableText.ReceiveCheckStringResultProcess");

	UCustomizeEditableText_ReceiveCheckStringResultProcess_Params params;
	params.Result = Result;
	params.ValidString = ValidString;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.CustomizeEditableText.OpenKeyBoard
// (Final, Native, Protected, BlueprintCallable)

void UCustomizeEditableText::OpenKeyBoard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeEditableText.OpenKeyBoard");

	UCustomizeEditableText_OpenKeyBoard_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction BlockyLua.CustomizeEditableText.OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   CommittedText                  (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            SerialId                       (Parm, ZeroConstructor, IsPlainOldData)

void UCustomizeEditableText::OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature(const struct FText& CommittedText, TEnumAsByte<ETextCommit> CommitMethod, int SerialId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.CustomizeEditableText.OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature");

	UCustomizeEditableText_OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature_Params params;
	params.CommittedText = CommittedText;
	params.CommitMethod = CommitMethod;
	params.SerialId = SerialId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.CustomizeEditableText.GetValidText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCustomizeEditableText::GetValidText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeEditableText.GetValidText");

	UCustomizeEditableText_GetValidText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.CustomizeEditableTextBox.SetNewText
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)

void UCustomizeEditableTextBox::SetNewText(const struct FText& InText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeEditableTextBox.SetNewText");

	UCustomizeEditableTextBox_SetNewText_Params params;
	params.InText = InText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.CustomizeEditableTextBox.ReceiveCheckStringResultProcess
// (Final, Native, Protected, HasOutParms)
// Parameters:
// bool                           Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ValidString                    (Parm, ZeroConstructor)
// struct FCheckStringHandleData  Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UCustomizeEditableTextBox::ReceiveCheckStringResultProcess(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeEditableTextBox.ReceiveCheckStringResultProcess");

	UCustomizeEditableTextBox_ReceiveCheckStringResultProcess_Params params;
	params.Result = Result;
	params.ValidString = ValidString;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction BlockyLua.CustomizeEditableTextBox.OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   CommittedText                  (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            SerialId                       (Parm, ZeroConstructor, IsPlainOldData)

void UCustomizeEditableTextBox::OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature(const struct FText& CommittedText, TEnumAsByte<ETextCommit> CommitMethod, int SerialId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.CustomizeEditableTextBox.OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature");

	UCustomizeEditableTextBox_OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature_Params params;
	params.CommittedText = CommittedText;
	params.CommitMethod = CommitMethod;
	params.SerialId = SerialId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.CustomizeEditableTextBox.GetValidText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCustomizeEditableTextBox::GetValidText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeEditableTextBox.GetValidText");

	UCustomizeEditableTextBox_GetValidText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.CustomizeMultiLineEditableTextBox.SetNewText
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)

void UCustomizeMultiLineEditableTextBox::SetNewText(const struct FText& InText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeMultiLineEditableTextBox.SetNewText");

	UCustomizeMultiLineEditableTextBox_SetNewText_Params params;
	params.InText = InText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.CustomizeMultiLineEditableTextBox.ReceiveCheckStringResultProcess
// (Final, Native, Protected, HasOutParms)
// Parameters:
// bool                           Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ValidString                    (Parm, ZeroConstructor)
// struct FCheckStringHandleData  Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UCustomizeMultiLineEditableTextBox::ReceiveCheckStringResultProcess(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeMultiLineEditableTextBox.ReceiveCheckStringResultProcess");

	UCustomizeMultiLineEditableTextBox_ReceiveCheckStringResultProcess_Params params;
	params.Result = Result;
	params.ValidString = ValidString;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction BlockyLua.CustomizeMultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   CommittedText                  (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            SerialId                       (Parm, ZeroConstructor, IsPlainOldData)

void UCustomizeMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature(const struct FText& CommittedText, TEnumAsByte<ETextCommit> CommitMethod, int SerialId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.CustomizeMultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature");

	UCustomizeMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature_Params params;
	params.CommittedText = CommittedText;
	params.CommitMethod = CommitMethod;
	params.SerialId = SerialId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.CustomizeMultiLineEditableTextBox.GetValidText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCustomizeMultiLineEditableTextBox::GetValidText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeMultiLineEditableTextBox.GetValidText");

	UCustomizeMultiLineEditableTextBox_GetValidText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.CustomizeMultiLineEditableTextBox.CheckStringValidProcess
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UCustomizeMultiLineEditableTextBox::CheckStringValidProcess(const struct FText& InText, TEnumAsByte<ETextCommit> CommitMethod)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeMultiLineEditableTextBox.CheckStringValidProcess");

	UCustomizeMultiLineEditableTextBox_CheckStringValidProcess_Params params;
	params.InText = InText;
	params.CommitMethod = CommitMethod;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyAutoScrollBox.Tick
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyAutoScrollBox::Tick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyAutoScrollBox.Tick");

	UBlockyAutoScrollBox_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyAutoScrollBox.SetTextPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextBlock*              Text                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UScrollBoxSlot*          boxSlot                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          totalLength                    (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyAutoScrollBox::SetTextPadding(class UTextBlock* Text, class UScrollBoxSlot* boxSlot, float totalLength)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyAutoScrollBox.SetTextPadding");

	UBlockyAutoScrollBox_SetTextPadding_Params params;
	params.Text = Text;
	params.boxSlot = boxSlot;
	params.totalLength = totalLength;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLoopScrollBase.UserScrolled
// (Final, Native, Protected)
// Parameters:
// float                          Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLoopScrollBase::UserScrolled(float Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.UserScrolled");

	UBlockyLoopScrollBase_UserScrolled_Params params;
	params.Offset = Offset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLoopScrollBase.SetItemType
// (Final, Native, Public)
// Parameters:
// class UClass*                  _ItemType                      (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLoopScrollBase::SetItemType(class UClass* _ItemType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.SetItemType");

	UBlockyLoopScrollBase_SetItemType_Params params;
	params._ItemType = _ItemType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLoopScrollBase.SetItemCount
// (Final, Native, Public)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyLoopScrollBase::SetItemCount(int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.SetItemCount");

	UBlockyLoopScrollBase_SetItemCount_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLoopScrollBase.RemoveItem
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLoopScrollBase::RemoveItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.RemoveItem");

	UBlockyLoopScrollBase_RemoveItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLoopScrollBase.RefreshItem
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyLoopScrollBase::RefreshItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.RefreshItem");

	UBlockyLoopScrollBase_RefreshItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLoopScrollBase.RefreshAllItems
// (Final, Native, Public)

void UBlockyLoopScrollBase::RefreshAllItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.RefreshAllItems");

	UBlockyLoopScrollBase_RefreshAllItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction BlockyLua.BlockyLoopScrollBase.OnRefreshItem__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UWidget*                 Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLoopScrollBase::OnRefreshItem__DelegateSignature(class UWidget* Item, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.BlockyLoopScrollBase.OnRefreshItem__DelegateSignature");

	UBlockyLoopScrollBase_OnRefreshItem__DelegateSignature_Params params;
	params.Item = Item;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction BlockyLua.BlockyLoopScrollBase.OnItemCreated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UWidget*                 Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLoopScrollBase::OnItemCreated__DelegateSignature(class UWidget* Item, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.BlockyLoopScrollBase.OnItemCreated__DelegateSignature");

	UBlockyLoopScrollBase_OnItemCreated__DelegateSignature_Params params;
	params.Item = Item;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction BlockyLua.BlockyLoopScrollBase.OnChangeData__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UWidget*                 Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Key                            (Parm, ZeroConstructor)

void UBlockyLoopScrollBase::OnChangeData__DelegateSignature(class UWidget* Item, int Index, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.BlockyLoopScrollBase.OnChangeData__DelegateSignature");

	UBlockyLoopScrollBase_OnChangeData__DelegateSignature_Params params;
	params.Item = Item;
	params.Index = Index;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLoopScrollBase.LoopScrollBoxFilterStr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 filter                         (Parm, ZeroConstructor)

void UBlockyLoopScrollBase::LoopScrollBoxFilterStr(const struct FString& filter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.LoopScrollBoxFilterStr");

	UBlockyLoopScrollBase_LoopScrollBoxFilterStr_Params params;
	params.filter = filter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLoopScrollBase.LoopScrollBoxFilterByTag
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TMap<int, struct FIntArrayWrapper> Tags                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBlockyLoopScrollBase::LoopScrollBoxFilterByTag(TMap<int, struct FIntArrayWrapper> Tags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.LoopScrollBoxFilterByTag");

	UBlockyLoopScrollBase_LoopScrollBoxFilterByTag_Params params;
	params.Tags = Tags;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLoopScrollBase.InsertItem
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLoopScrollBase::InsertItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.InsertItem");

	UBlockyLoopScrollBase_InsertItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLoopScrollBase.GetWidgetIndex
// (Final, Native, Protected)
// Parameters:
// class UWidget*                 Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBlockyLoopScrollBase::GetWidgetIndex(class UWidget* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.GetWidgetIndex");

	UBlockyLoopScrollBase_GetWidgetIndex_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLoopScrollBase.GetItems
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UWidget*>         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UWidget*> UBlockyLoopScrollBase::GetItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.GetItems");

	UBlockyLoopScrollBase_GetItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLoopScrollBase.GetItemCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBlockyLoopScrollBase::GetItemCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.GetItemCount");

	UBlockyLoopScrollBase_GetItemCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLoopScrollBase.GetIndexOfWidget
// (Final, Native, Protected)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UBlockyLoopScrollBase::GetIndexOfWidget(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.GetIndexOfWidget");

	UBlockyLoopScrollBase_GetIndexOfWidget_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLoopScrollBase.ChangeData
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyLoopScrollBase::ChangeData(int Index, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.ChangeData");

	UBlockyLoopScrollBase_ChangeData_Params params;
	params.Index = Index;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLua.BlockyLoopScrollBase.AutoSize
// (Final, Native, Public)
// Parameters:
// bool                           bAutoSize                      (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLoopScrollBase::AutoSize(bool bAutoSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.AutoSize");

	UBlockyLoopScrollBase_AutoSize_Params params;
	params.bAutoSize = bAutoSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLoopScrollBox.ScrollToItem
// (Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLoopScrollBox::ScrollToItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBox.ScrollToItem");

	UBlockyLoopScrollBox_ScrollToItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLua.BlockyLoopScrollGrid.ScrollToItem
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLoopScrollGrid::ScrollToItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollGrid.ScrollToItem");

	UBlockyLoopScrollGrid_ScrollToItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

