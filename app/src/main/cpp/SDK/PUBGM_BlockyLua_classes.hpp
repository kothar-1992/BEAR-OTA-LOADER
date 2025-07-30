#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BlockyLua.Blocky3DVarWidget
// 0x0068 (0x02C8 - 0x0260)
class UBlocky3DVarWidget : public UUserWidget
{
public:
	class UBlockBase*                                  LinkedSlotHost;                                           // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0268(0x0018) MISSED OFFSET
	class UBlockyGraphData*                            HostWidget;                                               // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBPInit;                                                 // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	struct FString                                     X;                                                        // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Y;                                                        // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Z;                                                        // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                StartSlotIdx;                                             // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.Blocky3DVarWidget");
		return pStaticClass;
	}


	void SetResult();
	void InitText(float X, float Y, float Z);
	struct FString CleanNumber(const struct FString& Input);
};


// Class BlockyLua.BlockyBlockDisplayWidget
// 0x0028 (0x0288 - 0x0260)
class UBlockyBlockDisplayWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0260(0x0010) MISSED OFFSET
	class UBlockyGraphData*                            BlockyGraphData;                                          // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BlockSize;                                                // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               Movable;                                                  // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0281(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyBlockDisplayWidget");
		return pStaticClass;
	}

};


// Class BlockyLua.BlockyBlockDisplayWidget_Custom
// 0x0028 (0x02B0 - 0x0288)
class UBlockyBlockDisplayWidget_Custom : public UBlockyBlockDisplayWidget
{
public:
	class UCustomConfig*                               Config;                                                   // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BlockName;                                                // 0x0290(0x0010) (ZeroConstructor)
	TArray<struct FString>                             ParamName;                                                // 0x02A0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyBlockDisplayWidget_Custom");
		return pStaticClass;
	}


	void UpdateName(const struct FString& Name);
	void Init(TEnumAsByte<ECustomBlockType> Type);
};


// Class BlockyLua.BlockyBlockDisplayWidget_Variable
// 0x0010 (0x0298 - 0x0288)
class UBlockyBlockDisplayWidget_Variable : public UBlockyBlockDisplayWidget
{
public:
	class UNamedVar*                                   NamedVar;                                                 // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasSettingIcon;                                           // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasCopyIcon;                                              // 0x0291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsEditingDisplay;                                         // 0x0292(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0293(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyBlockDisplayWidget_Variable");
		return pStaticClass;
	}


	void Init();
	struct FVector2D CalculateDrawSize();
};


// Class BlockyLua.BlockyBlockListWidget
// 0x0048 (0x02A8 - 0x0260)
class UBlockyBlockListWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0260(0x0028) MISSED OFFSET
	class UBlockyBlockWindowWidget*                    HostWindow;                                               // 0x0288(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HorizontalMoveCheckDelta;                                 // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalMoveCheckDelta;                                   // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsOpenComment;                                            // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	class UBlockyBlockListItemObject*                  PointAtListItem;                                          // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyBlockListWidget");
		return pStaticClass;
	}

};


// Class BlockyLua.BlockyBlockWindowWidget
// 0x0018 (0x0278 - 0x0260)
class UBlockyBlockWindowWidget : public UUserWidget
{
public:
	class UBlockyGraphData*                            GraphWidget;                                              // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlockyBlockListWidget*                      WidgetToPaint;                                            // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0270(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyBlockWindowWidget");
		return pStaticClass;
	}


	void SetWidgetVariableToShow(class UBlockyMenuItemObject_Variable* item_Variable);
	void SetWidgetCustomToShow(class UBlockyMenuItemObject_Custom* item_Custom);
	void SetWidgetCommonToShow(class UBlockyMenuItemObject* MenuItem);
	void SetWidgetBPToShow(class UUserWidget* Widget);
};


// Class BlockyLua.BlockyBooleanWidget
// 0x0028 (0x0288 - 0x0260)
class UBlockyBooleanWidget : public UUserWidget
{
public:
	class UBlockBase*                                  LinkedSlotHost;                                           // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0268(0x0018) MISSED OFFSET
	class UBlockyGraphData*                            HostWidget;                                               // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyBooleanWidget");
		return pStaticClass;
	}


	void SetText(const struct FString& Value);
	void SetResult(const struct FString& displayValue, const struct FString& Value);
};


// Class BlockyLua.BlockyCategoryItemWidget
// 0x0048 (0x02A8 - 0x0260)
class UBlockyCategoryItemWidget : public UUserWidget
{
public:
	int                                                Index;                                                    // 0x0260(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0268(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               IsScrolling;                                              // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0281(0x000F) MISSED OFFSET
	class UBlockyCategoryWidget*                       HostWidget;                                               // 0x0290(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  SubScrollBox;                                             // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x02A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyCategoryItemWidget");
		return pStaticClass;
	}


	void SetSelected(bool IsSelected);
	void OnScroll();
	void OnClick();
	void InitWithItemObject(class UBlockyCategoryItemObject* Item);
};


// Class BlockyLua.BlockyCategoryWidget
// 0x0040 (0x02A0 - 0x0260)
class UBlockyCategoryWidget : public UUserWidget
{
public:
	class UBlockyGraphData*                            GraphWidget;                                              // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      CategoryItemWidgetType;                                   // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       CategoryName;                                             // 0x0270(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0288(0x0008) MISSED OFFSET
	class UScrollBox*                                  SubScrollBox;                                             // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CurrentScrollOffset;                                      // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x029C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyCategoryWidget");
		return pStaticClass;
	}


	class UPanelWidget* GetCategoryContainer();
};


// Class BlockyLua.BlockyColorPickerWidget
// 0x0048 (0x02A8 - 0x0260)
class UBlockyColorPickerWidget : public UUserWidget
{
public:
	class UBlockBase*                                  LinkedSlotHost;                                           // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0268(0x0018) MISSED OFFSET
	class UBlockyGraphData*                            HostWidget;                                               // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FLinearColor>                        RecommendedColors;                                        // 0x0288(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        StoredColors;                                             // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyColorPickerWidget");
		return pStaticClass;
	}


	void SetResult(const struct FLinearColor& Value);
	void SetColor(const struct FLinearColor& Value);
	void LoadColors();
};


// Class BlockyLua.BlockyEditor
// 0x01C8 (0x0428 - 0x0260)
class UBlockyEditor : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	class UBlockyGraphData*                            GraphData;                                                // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     MainPanel;                                                // 0x0270(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyEnumWidget*                           EnumWidget;                                               // 0x0278(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyStringWidget*                         StringWidget;                                             // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyBooleanWidget*                        BooleanWidget;                                            // 0x0288(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyFloatWidget*                          FloatWidget;                                              // 0x0290(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlocky3DVarWidget*                          Var3DWidget;                                              // 0x0298(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyIntegerWidget*                        IntegerWidget;                                            // 0x02A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyColorPickerWidget*                    ColorWidget;                                              // 0x02A8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyPresetWidget*                         PresetWidget;                                             // 0x02B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockySelectFromSceneWidget*                SelectFromSceneWidget;                                    // 0x02B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UBlockyMenuItemObject*>               CurrentMenuItems;                                         // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UBlockyMenuItemObject*                       CurrentSerchMenuItem;                                     // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlockyBlockListItemObject*                  ListItemSerchAtPoint;                                     // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   AnimateMaterial;                                          // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           DeleteUIDockingMaterial;                                  // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           DeleteRangeUIDockingMaterial;                             // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           DeleteUIBgDockingMaterial;                                // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlockyMenuWidget*                           MenuWidget;                                               // 0x0300(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyCategoryWidget*                       CategoryWidget;                                           // 0x0308(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyBlockWindowWidget*                    BlockWindowWidget;                                        // 0x0310(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyLogWidget*                            BlockyLogWidget;                                          // 0x0318(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyMenuItemWidget*                       CurrentMenuItemWidget;                                    // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<struct FString, class UBlockyBlockListItemObject*> TypeFilterItems;                                          // 0x0328(0x0050) (ZeroConstructor)
	TMap<struct FString, class UBlockyBlockListItemObject*> TypeFilterArrayItems;                                     // 0x0378(0x0050) (ZeroConstructor)
	TArray<class UBlockyMenuItemObject_TypeFilter*>    TypeFilterMenus;                                          // 0x03C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x03D8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyEditor");
		return pStaticClass;
	}


	void UpdateTriggerGroups();
	bool TryBackToVariableOrCustomPanel();
	void ShowPresetAnimation(class UPresetDesc* PresetDesc);
	void SetWidgetBPToShow(class UUserWidget* Widget, bool HideCategory);
	void SetMenuWidget(class UBlockyMenuWidget* Widget);
	void SetCategoryWidget(class UBlockyCategoryWidget* Widget);
	void SetBlockLogWidget(class UBlockyLogWidget* Widget);
	void SetBlockListWidget(class UBlockyBlockWindowWidget* Widget);
	void ResetAsyncWidgetHandleMap();
	void OnUpdateUndoRedoState(bool HasUndoCommands, bool HasRedoCommands);
	void OnShowTips(const struct FText& Tips);
	void LoadWidgetAsync(const struct FString& WidgetName, const struct FString& WidgetPath, const struct FScriptDelegate& Delegate);
	class UMaterialInterface* LoadMaterialInterface(const struct FString& AnimationPath);
	void IsShowExplain(bool bFlag);
	void IsCloseComment(bool bFlag);
	float GetSaveCooldownDuration();
	struct FString GetLocaleString(const struct FString& KeyString);
	class UBlockyMenuItemObject* GetCurrentMenuItem();
	void CollectListItem(bool bCollect);
	void BP_OnShowTools(TArray<EBlockyBPToolButtonType> ButtonTypes);
	void AddChildBluckyWidget(class UUserWidget* Widget);
};


// Class BlockyLua.BlockyEnumWidget
// 0x0028 (0x0288 - 0x0260)
class UBlockyEnumWidget : public UUserWidget
{
public:
	class UBlockBase*                                  LinkedSlotHost;                                           // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0268(0x0018) MISSED OFFSET
	class UBlockyGraphData*                            HostWidget;                                               // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyEnumWidget");
		return pStaticClass;
	}


	void SetShowDisplayItems(TMap<struct FName, struct FText> Names);
	void SetResultWithName(const struct FName& Name);
};


// Class BlockyLua.BlockyFloatWidget
// 0x0028 (0x0288 - 0x0260)
class UBlockyFloatWidget : public UUserWidget
{
public:
	class UBlockBase*                                  LinkedSlotHost;                                           // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0268(0x0018) MISSED OFFSET
	class UBlockyGraphData*                            HostWidget;                                               // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyFloatWidget");
		return pStaticClass;
	}


	void SetText(const struct FString& Value);
	void SetResult(const struct FString& Value);
	struct FString CleanNumber(const struct FString& Input);
};


// Class BlockyLua.BlockyGraphWidget
// 0x0028 (0x0288 - 0x0260)
class UBlockyGraphWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	class UBlockyGraphData*                            BlockyGraphData;                                          // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlockyEditor*                               HostEditor;                                               // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsOnTouch;                                                // 0x0278(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0279(0x0007) MISSED OFFSET
	class UDeleteBlockUI*                              DeleteBlockUI;                                            // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyGraphWidget");
		return pStaticClass;
	}


	struct FVector2D ViewPosToCanvasPos(const struct FVector2D& Postion);
	TArray<struct FText> UpdateVariableItemNames();
	void UpdateTriggerGroups();
	TArray<struct FText> UpdateCustomItemNames();
	void Undo();
	bool TryBackToVariableOrCustomPanel();
	void ShowTips(const struct FText& Tips);
	void ShowPresetParamPop();
	void SetViewScale(float inScale);
	void SetViewPosition(const struct FVector2D& ViewPosition);
	void SetMenuWidget(class UBlockyMenuWidget* Widget);
	void SetCurrentSubGraph(const struct FString& InName);
	void SetCategoryWidget(class UBlockyCategoryWidget* Widget);
	void SetBlockLogWidget(class UBlockyLogWidget* Widget);
	void SetBlockListWidget(class UBlockyBlockWindowWidget* Widget);
	struct FString SaveGraphToJsonText();
	TArray<unsigned char> SaveGraphToBin();
	struct FString SaveGlobalVarToJsonText();
	TArray<unsigned char> SaveGlobalVarToBin();
	void SaveCustom();
	TArray<unsigned char> SaveBlockyGraphToTemplate(class UBlockyGraph* BlockyGraph);
	void Save();
	void ReturnToPreviewGraph();
	void ReturnToMainGraph();
	void ResetJsonChangedFlag();
	void ResetGraph();
	void RemoveSubGraph(const struct FString& InName);
	void RefreshFont();
	void ReEditVariable(int Index);
	void Redo();
	void QuoteCustom();
	void Quote();
	void Paste();
	void OnCloseItemList();
	void LoadTemplateToBlockyGraph(bool IsCreateNewGraph, TArray<unsigned char>* TemplateAst);
	void LoadGraphFromJsonText(const struct FString& JsonStr);
	void LoadGraphFromBin(TArray<unsigned char> JsonStr);
	void LoadGlobalVarFromJsonText(const struct FString& JsonStr);
	void LoadGlobalVarFromBin(TArray<unsigned char> JsonStr);
	void Load();
	bool IsViewOverlap(const struct FVector2D& Position, const struct FVector2D& Size);
	bool IsFirstGraph();
	void GM_GenerateAllBlocks(int CombinedBlocksNum, int GraphBlocksNum, bool bNeedResetGraph);
	void GM_AddBlocks(TArray<struct FString> typeNames, int X, int Y);
	struct FVector2D GetViewSize();
	float GetViewScale();
	struct FVector2D GetViewPosition();
	bool GetJsonChangedFlag();
	void GetDeleteBlockUIRect(float InRectWidth);
	class UBlockyGraph* GetCurrentGraph();
	void FocusTo(class UBlockBase* TargetBlock);
	void FinishVariableEdit(bool bSaveVar, bool bReEdit);
	void FinishCustomEdit(bool bSave);
	void FinishBlockSetting(bool bSave);
	void Eject();
	void EditCustumBlockGraph();
	void EditCustom();
	void Disable();
	void DeleteVariableListItem(int Index);
	void DeleteSelected();
	void DeleteCustom();
	void DefineCustom();
	void Define();
	void Copy();
	void Comment();
	void CollectListItem(bool bCollect);
	void Clone();
	void ClearUndoRedoDatas();
	void ClearTextSizeCache();
	void ClearLog();
	struct FVector2D CanvasPosToViewPos(const struct FVector2D& Postion);
	void BlockyLog_Show(EBlockyLogMsgMode Mode, class UBlockBase* BlockSource, const struct FString& SlotID, const struct FString& Info);
	void AddSubGraph(const struct FString& InName, const struct FString& InType);
	class UBlockyGraph* AddGraph(const struct FString& InName, const struct FString& InType);
	void AddGlobalComment();
};


// Class BlockyLua.BlockyGroupItemWidget
// 0x0000 (0x0260 - 0x0260)
class UBlockyGroupItemWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyGroupItemWidget");
		return pStaticClass;
	}

};


// Class BlockyLua.BlockyGroupWidget
// 0x0018 (0x0278 - 0x0260)
class UBlockyGroupWidget : public UUserWidget
{
public:
	class UButton*                                     BT_AddGroupItem;                                          // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0268(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyGroupWidget");
		return pStaticClass;
	}


	class UPanelWidget* GetGroupContainer();
	void AddGroupItem();
};


// Class BlockyLua.BlockyIntegerWidget
// 0x0030 (0x0290 - 0x0260)
class UBlockyIntegerWidget : public UUserWidget
{
public:
	class UBlockBase*                                  LinkedSlotHost;                                           // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0268(0x0018) MISSED OFFSET
	class UBlockyGraphData*                            HostWidget;                                               // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NegativeEnable;                                           // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0289(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyIntegerWidget");
		return pStaticClass;
	}


	void SetText(const struct FString& Value);
	void SetResult(const struct FString& Value);
	void SetNegativeEnable(bool Enable);
};


// Class BlockyLua.BlockyLogItemWidget
// 0x0048 (0x02A8 - 0x0260)
class UBlockyLogItemWidget : public UUserWidget
{
public:
	class UBlockyGraphData*                            GraphWidget;                                              // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlockyLogWidget*                            LogWidget;                                                // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockBase*                                  BlockBase;                                                // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BlockSlotId;                                              // 0x0278(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0288(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLogItemWidget");
		return pStaticClass;
	}


	void SetShowWarn(const struct FString& Warn);
	void SetShowInfo(const struct FString& Info);
	void SetShowError(const struct FString& Error);
	void SetActiveWidgetIndex(int Index);
	void OnClickBtnToBlock();
	class UTextBlock* GetTextBlockWarn();
	class UTextBlock* GetTextBlockInfo();
	class UTextBlock* GetTextBlockError();
	int GetActiveWidgetIndex();
};


// Class BlockyLua.BlockyLogWidget
// 0x0030 (0x0290 - 0x0260)
class UBlockyLogWidget : public UUserWidget
{
public:
	class UBlockyGraphData*                            GraphWidget;                                              // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      LogItemWidgetType;                                        // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0270(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLogWidget");
		return pStaticClass;
	}


	void ShowLog();
	void SetBtnWarnText(const struct FString& Warn);
	void SetBtnInfoText(const struct FString& Info);
	void SetBtnErrorText(const struct FString& Error);
	void OnClickWarnShow();
	void OnClickInfoShow();
	void OnClickErrorShow();
	void OnClickAllShow();
	class UPanelWidget* GetLogContainer();
	float GetItemTextWidth();
	struct FString GetBtnWarnText();
	struct FString GetBtnInfoText();
	struct FString GetBtnErrorText();
};


// Class BlockyLua.BlockyLuaLoopScrollBase
// 0x0128 (0x0C50 - 0x0B28)
class UBlockyLuaLoopScrollBase : public UScrollBox
{
public:
	bool                                               bDelayLoad;                                               // 0x0B28(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B29(0x0003) MISSED OFFSET
	float                                              BlockyLuaEdgePadding;                                     // 0x0B2C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnRefreshItem;                                            // 0x0B30(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemCreated;                                            // 0x0B40(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangeData;                                             // 0x0B50(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xD0];                                      // 0x0B60(0x00D0) MISSED OFFSET
	class UClass*                                      itemType;                                                 // 0x0C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0C38(0x0010) MISSED OFFSET
	class UCanvasPanel*                                CanvasPanel;                                              // 0x0C48(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLuaLoopScrollBase");
		return pStaticClass;
	}


	void UserScrolled(float Offset);
	void SetItemType(class UClass* _ItemType);
	bool SetItemCount(int Count);
	void RemoveItem(int Index);
	bool RefreshItem(int Index);
	void RefreshAllItems();
	void Push();
	void Pop();
	void OnRefreshItem__DelegateSignature(class UWidget* Item, int Index);
	void OnItemCreated__DelegateSignature(class UWidget* Item, int Index);
	void OnChangeData__DelegateSignature(class UWidget* Item, int Index, const struct FString& Key);
	void InsertItem(int Index);
	int GetWidgetIndex(class UWidget* Item);
	int GetItemCount();
	class UWidget* GetIndexOfWidget(int Index);
	bool ChangeData(int Index, const struct FString& Key);
	void CallTick(float DeltaTime);
	void AutoSize(bool bAutoSize);
};


// Class BlockyLua.BlockyLuaLoopScrollBase_MultiItem
// 0x0170 (0x0C98 - 0x0B28)
class UBlockyLuaLoopScrollBase_MultiItem : public UScrollBox
{
public:
	bool                                               bDelayLoad;                                               // 0x0B28(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B29(0x0003) MISSED OFFSET
	float                                              BlockyLuaEdgePadding;                                     // 0x0B2C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnRefreshItem;                                            // 0x0B30(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemCreated;                                            // 0x0B40(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangeData;                                             // 0x0B50(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x130];                                     // 0x0B60(0x0130) MISSED OFFSET
	class UCanvasPanel*                                CanvasPanel;                                              // 0x0C90(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLuaLoopScrollBase_MultiItem");
		return pStaticClass;
	}


	void UserScrolled(float Offset);
	void SetItemType(TArray<class UClass*> TypeArray);
	bool SetItemCount(int Count);
	void RemoveItem(int Index);
	bool RefreshItem(int Index);
	void RefreshAllItems();
	void Push(class UClass* Type);
	void Pop();
	void OnRefreshItem__DelegateSignature(class UWidget* Item, int Index);
	void OnItemCreated__DelegateSignature(class UWidget* Item, int Index);
	void OnChangeData__DelegateSignature(class UWidget* Item, int Index, const struct FString& Key);
	void InsertItem(int Index, class UClass* Type);
	int GetWidgetIndex(class UWidget* Item);
	int GetItemCount();
	class UWidget* GetIndexOfWidget(int Index);
	void ClearItems();
	bool ChangeData(int Index, const struct FString& Key);
	void CallTick(float DeltaTime);
	void AutoSize(bool bAutoSize);
};


// Class BlockyLua.BlockyLuaLoopScrollBox
// 0x0010 (0x0C60 - 0x0C50)
class UBlockyLuaLoopScrollBox : public UBlockyLuaLoopScrollBase
{
public:
	float                                              ItemSize;                                                 // 0x0C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Padding;                                                  // 0x0C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlignMagnetic;                                           // 0x0C58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C59(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLuaLoopScrollBox");
		return pStaticClass;
	}


	void ScrollToItem(int Index);
};


// Class BlockyLua.BlockyLuaLoopScrollBox_MultiItem
// 0x00A8 (0x0D40 - 0x0C98)
class UBlockyLuaLoopScrollBox_MultiItem : public UBlockyLuaLoopScrollBase_MultiItem
{
public:
	TMap<class UClass*, float>                         WidgetSizeMap;                                            // 0x0C98(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class UClass*, float>                         WidgetPaddingMap;                                         // 0x0CE8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bAlignMagnetic;                                           // 0x0D38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0D39(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLuaLoopScrollBox_MultiItem");
		return pStaticClass;
	}


	void ScrollToItem(int Index);
	void BP_UserScrolled(float Offset);
	bool BP_PreventScrollOutOfSize(bool bScroll);
	float BP_GetContentSize();
};


// Class BlockyLua.BlockyLuaLoopScrollGrid
// 0x0028 (0x0C78 - 0x0C50)
class UBlockyLuaLoopScrollGrid : public UBlockyLuaLoopScrollBase
{
public:
	struct FVector2D                                   ItemSize;                                                 // 0x0C50(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   Padding;                                                  // 0x0C58(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bAlignGrid;                                               // 0x0C60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlignAnimation;                                          // 0x0C61(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0C62(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLuaLoopScrollGrid");
		return pStaticClass;
	}


	void ScrollToItem(int Index);
};


// Class BlockyLua.BlockyMenuItemWidget
// 0x0030 (0x0290 - 0x0260)
class UBlockyMenuItemWidget : public UUserWidget
{
public:
	int                                                Index;                                                    // 0x0260(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0268(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UBlockyMenuWidget*                           HostWidget;                                               // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyCategoryItemWidget*                   CurrentCategoryItemWidget;                                // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyMenuItemWidget");
		return pStaticClass;
	}


	void SetSelected(bool IsSelected);
	void OnClick();
	void InitWithItemObject(class UBlockyMenuItemObject* Item);
};


// Class BlockyLua.BlockyMenuWidget
// 0x0010 (0x0270 - 0x0260)
class UBlockyMenuWidget : public UUserWidget
{
public:
	class UClass*                                      MenuItemWidgetType;                                       // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlockyGraphData*                            GraphWidget;                                              // 0x0268(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyMenuWidget");
		return pStaticClass;
	}


	bool SelectMenu(class UBlockyMenuItemWidget* MenuItemWidget);
	void OnAddMenuItemWidget(class UBlockyMenuItemWidget* MenuItemWidget);
	class UPanelWidget* GetMenuContainer();
};


// Class BlockyLua.BlockyPresetItemWidget
// 0x0018 (0x0278 - 0x0260)
class UBlockyPresetItemWidget : public UUserWidget
{
public:
	class UPresetDesc*                                 Desc;                                                     // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlockyPresetWidget*                         Host;                                                     // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  SubScrollBox;                                             // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyPresetItemWidget");
		return pStaticClass;
	}


	void SetPresetDesc_BP(class UPresetDesc* PresetDesc);
	void SetImageShowIcon(class UImage* Image);
};


// Class BlockyLua.BlockyPresetWidget
// 0x0040 (0x02A0 - 0x0260)
class UBlockyPresetWidget : public UUserWidget
{
public:
	class UBlockBase*                                  LinkedSlotHost;                                           // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0268(0x0018) MISSED OFFSET
	class UBlockyEditor*                               HostWidget;                                               // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     Button_FilterAction;                                      // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     SlotTypeName;                                             // 0x0290(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyPresetWidget");
		return pStaticClass;
	}


	void SetResult(class UPresetDesc* Value);
	void SetPresets(TArray<class UPresetDesc*> Presets);
	void ResetMenuItem();
	struct FString OnFilterBtnClick();
	void LoopScrollBoxFilterStr(const struct FString& filter);
	void LoopScrollBoxFilterByTag(TMap<int, struct FIntArrayWrapper> Tags);
	void InitPresets();
	class UScrollBox* GetLoopScrollBox();
	bool GetIsIconWidget();
	void ClearSearchText();
};


// Class BlockyLua.BlockyRichTextBlock
// 0x0300 (0x0428 - 0x0128)
class UBlockyRichTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0128(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0140(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x0150(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                Color;                                                    // 0x01A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TArray<class URichTextBlockDecorator*>             Decorators;                                               // 0x01B8(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x260];                                     // 0x01C8(0x0260) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyRichTextBlock");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	struct FText GetText();
};


// Class BlockyLua.BlockySearchResultPanel
// 0x00C8 (0x0328 - 0x0260)
class UBlockySearchResultPanel : public UUserWidget
{
public:
	float                                              DrawBottomDelta;                                          // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalMoveCheckDelta;                                 // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalMoveCheckDelta;                                   // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WhileRefreshBlockSizeY;                                   // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDragging;                                               // 0x0270(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsHorizontalMove;                                         // 0x0271(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0272(0x0002) MISSED OFFSET
	struct FVector2D                                   TouchStartPosition;                                       // 0x0274(0x0008) (BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   PointAtOffset;                                            // 0x027C(0x0008) (BlueprintVisible, IsPlainOldData)
	int                                                CurrentCategoryIndex;                                     // 0x0284(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                YOffset;                                                  // 0x0288(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalHeight_Blocks;                                       // 0x028C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalHeight_Graphs;                                       // 0x0290(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalHeight_GraphsTitle;                                  // 0x0294(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ViewHeight;                                               // 0x0298(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                totalHeight;                                              // 0x029C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedUpdateTotalHeight_Graphs;                            // 0x02A0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	class UBlockyBlockListItemObject*                  ListItemAtPoint;                                          // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UBlockyMenuItemObject_Search> FoundResults;                                             // 0x02B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class USpacer*                                     BlocksContainer;                                          // 0x02B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBlockyLuaLoopScrollBox_MultiItem*           GraphBlocksContainer;                                     // 0x02C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UClass*                                      GraphBlocksWidgetType;                                    // 0x02C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GraphItemBlockWidgetType;                                 // 0x02D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlockyGraphData*                            GraphData;                                                // 0x02D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UScrollBox*                                  TabContainer;                                             // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShowComment;                                             // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02E9(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UBlockyGraph>                 LastSelectedGraph;                                        // 0x02EC(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UBlockBase>                   LastSelectedBlock;                                        // 0x02F4(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	TArray<class UBlockyGraph*>                        CollapsedGraphs;                                          // 0x0300(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             ItemObjectList;                                           // 0x0310(0x0010) (ZeroConstructor)
	ESearchResultVisibleType                           SearchResultVisibleType;                                  // 0x0320(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0321(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockySearchResultPanel");
		return pStaticClass;
	}


	void UpdateGraphContentSize();
	void ToggleGraphResults(class UBlockyGraph* InGraph);
	void ScrollToCategory(int CategoryIndex, bool GraphCategory);
	void RefreshGraphBlocksWidgets();
	void OnGraphBlocksCreated(class UWidget* Widget, int Index);
	void FocusToBlock(class UBlockyGraph* InGraph, class UBlockBase* InBlock);
	void FilterOutSearchResultToShow(ESearchResultVisibleType VisibleType);
	bool BP_ScrollYOffset(int DeltaY);
};


// Class BlockyLua.BlockySearchResults_GraphItemWidget
// 0x0058 (0x02B8 - 0x0260)
class UBlockySearchResults_GraphItemWidget : public UUserWidget
{
public:
	struct FVector2D                                   IconSize;                                                 // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FString                                     SearchingStr;                                             // 0x0268(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     BlockDisplayString;                                       // 0x0278(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TWeakObjectPtr<class UBlockyGraph>                 BlockGraph;                                               // 0x0288(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TWeakObjectPtr<class UBlockBase>                   bLock;                                                    // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UBlockySearchResultPanel*                    HostResultPanel;                                          // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsDragging;                                              // 0x02A0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	class UImage*                                      BlockIcon;                                                // 0x02A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBlockyRichTextBlock*                        TextBlock_BlockDisplay;                                   // 0x02B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockySearchResults_GraphItemWidget");
		return pStaticClass;
	}


	void OnClickedBlock();
	void OnBlockWidgetSelected(bool bSelected);
	struct FString MarkSearchingStringWithColor(const struct FString& InputString, const struct FString& Target, const struct FString& ColorString);
	bool IsSearchUseCase();
	struct FString GetKeyWordColor();
};


// Class BlockyLua.BlockySearchResults_GraphWidget
// 0x0030 (0x0290 - 0x0260)
class UBlockySearchResults_GraphWidget : public UUserWidget
{
public:
	class UClass*                                      GraphBlockItemWidgetType;                                 // 0x0260(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     GraphDisplayName;                                         // 0x0268(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class UBlockySearchResultPanel*                    HostResultPanel;                                          // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UBlockyGraph>                 BlockGraph;                                               // 0x0280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDragging;                                              // 0x0288(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0289(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockySearchResults_GraphWidget");
		return pStaticClass;
	}


	void ToggleGraphResultsCollapse();
	void OnSetGraphResultsCollapse(bool InCollapse);
	void OnRefreshDisplayNameView(const struct FString& InGraphDisplayName);
};


// Class BlockyLua.BlockySearchResultsTab
// 0x0028 (0x0288 - 0x0260)
class UBlockySearchResultsTab : public UUserWidget
{
public:
	bool                                               IsGraphCategory;                                          // 0x0260(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0261(0x0003) MISSED OFFSET
	int                                                TabIndex;                                                 // 0x0264(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FText                                       TabDisplayName;                                           // 0x0268(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	class UBlockySearchWidget*                         SearchWidget;                                             // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockySearchResultsTab");
		return pStaticClass;
	}


	void OnSetSelected(bool bSelected);
};


// Class BlockyLua.BlockySearchWidget
// 0x0150 (0x03B0 - 0x0260)
class UBlockySearchWidget : public UUserWidget
{
public:
	TMap<class UBlockyMenuItemObject*, bool>           MenuItemVisibility;                                       // 0x0260(0x0050) (ZeroConstructor)
	TMap<class UBlockyCategoryItemObject*, bool>       CategoriesVisibility;                                     // 0x02B0(0x0050) (ZeroConstructor)
	TMap<class UBlockyBlockListItemObject*, bool>      BlockItemsVisibility;                                     // 0x0300(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0350(0x0008) MISSED OFFSET
	class UScrollBox*                                  TabContainer;                                             // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBlockySearchResultPanel*                    SearchResultPanel;                                        // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FText                                       ContentTabText;                                           // 0x0368(0x0018) (Edit)
	class UClass*                                      SearchResultsTabType;                                     // 0x0380(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlockyMenuItemObject_Search*                SearchResults;                                            // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UBlockyGraphWidget*                          HostGraphWidget;                                          // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESearchResultVisibleType                           SearchResultVisibleType;                                  // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	TArray<struct FString>                             SearchHistories;                                          // 0x03A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockySearchWidget");
		return pStaticClass;
	}


	void StoreLastSelectedMenuItems(bool OverrideLastData);
	bool ShouldCommitString(const struct FText& Value);
	void SetGraphWidget(class UBlockyGraphWidget* InGraphWidget);
	bool SearchMatchingResults(const struct FString& SearchStr);
	void ScrollToTabContent(class UBlockySearchResultsTab* NewSelectedTab);
	void SaveSearchHistories();
	void RevertLastSelectedMenuItem();
	void RefreshTabContainerView();
	void RefreshSearchResultsView();
	void LoadSearchHistories();
	bool IsSearchUseCase();
	bool HasMenuSelected();
	bool HasAnySearchResults();
	bool HasAnyHistory();
	int GetTotalSearchedNums();
	TArray<struct FString> GetSearchHistories();
	int GetHistoryStoreNum();
	int GetHistoryNums();
	int GetGraphSearchedNums();
	int GetBlockSearchedNums();
	void FilterSearchResultVisible(ESearchResultVisibleType InSearchResultVisibleType);
	void EmptyListItemSeleceted();
	void DoSearching(const struct FString& SearchStr);
	void ClearSearchHistories();
	void ClearMenuSelectionStore();
	void AddSearchHistory(const struct FString& NewHistory);
};


// Class BlockyLua.BlockySelectFromSceneWidget
// 0x0060 (0x02C0 - 0x0260)
class UBlockySelectFromSceneWidget : public UUserWidget
{
public:
	class UBlockBase*                                  LinkedSlotHost;                                           // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0268(0x0018) MISSED OFFSET
	class UBlockyGraphData*                            HostWidget;                                               // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPresetDesc*                                 PresetDesc;                                               // 0x0288(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UObjectDesc*>                         OtherPresetDescs;                                         // 0x0290(0x0010) (ZeroConstructor)
	struct FText                                       DefaultShowName;                                          // 0x02A0(0x0018) (Edit, BlueprintVisible)
	class UObjectDesc*                                 ObjectDesc;                                               // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockySelectFromSceneWidget");
		return pStaticClass;
	}


	void SetPreset(class UPresetDesc* Value);
	void SetObjectDesc(class UObjectDesc* Value);
	bool SetImageShowIcon(class UImage* Image);
	void OnReceiveCustomSelectionResult(class UObjectDesc* Value);
	void CallSelectScenePreset();
};


// Class BlockyLua.BlockyStringWidget
// 0x0088 (0x02E8 - 0x0260)
class UBlockyStringWidget : public UUserWidget
{
public:
	TMap<int, struct FSlotData>                        ResultSlotsMap;                                           // 0x0260(0x0050) (ZeroConstructor)
	class UBlockBase*                                  LinkedSlotHost;                                           // 0x02B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x02B8(0x0018) MISSED OFFSET
	class UBlockyGraphData*                            HostWidget;                                               // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TextBoxSize;                                              // 0x02D8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               IsFinishedInput;                                          // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyStringWidget");
		return pStaticClass;
	}


	struct FText StrDelEnt(const struct FText& Value);
	void StoreSlotDataWithSerialId(int SerialId);
	void SetText(const struct FString& Value);
	void SetResult(const struct FString& Value, int SerialId);
};


// Class BlockyLua.CustomizeEditableText
// 0x00C0 (0x05A8 - 0x04E8)
class UCustomizeEditableText : public UEditableText
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x04E8(0x0090) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextPreCommitted;                                       // 0x0578(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextReceiveCommitted;                                   // 0x0588(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                TextCountLimit;                                           // 0x0598(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SerialId;                                                 // 0x059C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               LimitEmojiInput;                                          // 0x05A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsReceiveCheckStringResult;                               // 0x05A1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x05A2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.CustomizeEditableText");
		return pStaticClass;
	}


	void SetNewText(const struct FText& InText);
	void ReceiveCheckStringResultProcess(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data);
	void OpenKeyBoard();
	void OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature(const struct FText& CommittedText, TEnumAsByte<ETextCommit> CommitMethod, int SerialId);
	struct FText GetValidText();
};


// Class BlockyLua.CustomizeEditableTextBox
// 0x00C0 (0x0D70 - 0x0CB0)
class UCustomizeEditableTextBox : public UEditableTextBox
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0CB0(0x0090) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextPreCommitted;                                       // 0x0D40(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextReceiveCommitted;                                   // 0x0D50(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                TextCountLimit;                                           // 0x0D60(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SerialId;                                                 // 0x0D64(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               LimitEmojiInput;                                          // 0x0D68(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsReceiveCheckStringResult;                               // 0x0D69(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0D6A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.CustomizeEditableTextBox");
		return pStaticClass;
	}


	void SetNewText(const struct FText& InText);
	void ReceiveCheckStringResultProcess(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data);
	void OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature(const struct FText& CommittedText, TEnumAsByte<ETextCommit> CommitMethod, int SerialId);
	struct FText GetValidText();
};


// Class BlockyLua.CustomizeMultiLineEditableTextBox
// 0x00C0 (0x0FA8 - 0x0EE8)
class UCustomizeMultiLineEditableTextBox : public UMultiLineEditableTextBox
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0EE8(0x0090) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextPreCommitted;                                       // 0x0F78(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextReceiveCommitted;                                   // 0x0F88(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                TextCountLimit;                                           // 0x0F98(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SerialId;                                                 // 0x0F9C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               LimitEmojiInput;                                          // 0x0FA0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsReceiveCheckStringResult;                               // 0x0FA1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0FA2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.CustomizeMultiLineEditableTextBox");
		return pStaticClass;
	}


	void SetNewText(const struct FText& InText);
	void ReceiveCheckStringResultProcess(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data);
	void OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature(const struct FText& CommittedText, TEnumAsByte<ETextCommit> CommitMethod, int SerialId);
	struct FText GetValidText();
	void CheckStringValidProcess(const struct FText& InText, TEnumAsByte<ETextCommit> CommitMethod);
};


// Class BlockyLua.DeleteBlockUI
// 0x0040 (0x0068 - 0x0028)
class UDeleteBlockUI : public UObject
{
public:
	struct FBlockRect                                  Rect;                                                     // 0x0028(0x0010)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	class UBrushData*                                  BrushBG;                                                  // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0050(0x000C) MISSED OFFSET
	bool                                               IsInArrange;                                              // 0x005C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x005D(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.DeleteBlockUI");
		return pStaticClass;
	}

};


// Class BlockyLua.BlockyAutoScrollBox
// 0x0020 (0x0B48 - 0x0B28)
class UBlockyAutoScrollBox : public UScrollBox
{
public:
	EBLOCKYLUA_AUTO_SCROLL_TYPE                        AutoScrollType;                                           // 0x0B28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B29(0x0003) MISSED OFFSET
	float                                              RollSpeed;                                                // 0x0B2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StayTimeWhenStart;                                        // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StayTimeWhenEnd;                                          // 0x0B34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0B38(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyAutoScrollBox");
		return pStaticClass;
	}


	void Tick(float DeltaTime);
	void SetTextPadding(class UTextBlock* Text, class UScrollBoxSlot* boxSlot, float totalLength);
};


// Class BlockyLua.BlockyLoopScrollBase
// 0x0178 (0x0CA0 - 0x0B28)
class UBlockyLoopScrollBase : public UScrollBox
{
public:
	bool                                               bDelayLoad;                                               // 0x0B28(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B29(0x0003) MISSED OFFSET
	float                                              BlockyLuaEdgePadding;                                     // 0x0B2C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnRefreshItem;                                            // 0x0B30(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnItemCreated;                                            // 0x0B40(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnChangeData;                                             // 0x0B50(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x108];                                     // 0x0B60(0x0108) MISSED OFFSET
	class UBlockyPresetWidget*                         Host;                                                     // 0x0C68(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0C70(0x0008) MISSED OFFSET
	class UClass*                                      ItemString;                                               // 0x0C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemIcon;                                                 // 0x0C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0C88(0x0010) MISSED OFFSET
	class UCanvasPanel*                                CanvasPanel;                                              // 0x0C98(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLoopScrollBase");
		return pStaticClass;
	}


	void UserScrolled(float Offset);
	void SetItemType(class UClass* _ItemType);
	bool SetItemCount(int Count);
	void RemoveItem(int Index);
	bool RefreshItem(int Index);
	void RefreshAllItems();
	void OnRefreshItem__DelegateSignature(class UWidget* Item, int Index);
	void OnItemCreated__DelegateSignature(class UWidget* Item, int Index);
	void OnChangeData__DelegateSignature(class UWidget* Item, int Index, const struct FString& Key);
	void LoopScrollBoxFilterStr(const struct FString& filter);
	void LoopScrollBoxFilterByTag(TMap<int, struct FIntArrayWrapper> Tags);
	void InsertItem(int Index);
	int GetWidgetIndex(class UWidget* Item);
	TArray<class UWidget*> GetItems();
	int GetItemCount();
	class UWidget* GetIndexOfWidget(int Index);
	bool ChangeData(int Index, const struct FString& Key);
	void AutoSize(bool bAutoSize);
};


// Class BlockyLua.BlockyLoopScrollBox
// 0x0038 (0x0CD8 - 0x0CA0)
class UBlockyLoopScrollBox : public UBlockyLoopScrollBase
{
public:
	struct FVector2D                                   StringItemSize;                                           // 0x0CA0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   IconItemSize;                                             // 0x0CA8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   StringItemPadding;                                        // 0x0CB0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   IconItemPadding;                                          // 0x0CB8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bAlignMagnetic;                                           // 0x0CC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0CC1(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLoopScrollBox");
		return pStaticClass;
	}


	void ScrollToItem(int Index);
};


// Class BlockyLua.BlockyLoopScrollGrid
// 0x0028 (0x0CC8 - 0x0CA0)
class UBlockyLoopScrollGrid : public UBlockyLoopScrollBase
{
public:
	struct FVector2D                                   ItemSize;                                                 // 0x0CA0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   Padding;                                                  // 0x0CA8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bAlignGrid;                                               // 0x0CB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlignAnimation;                                          // 0x0CB1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0CB2(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLoopScrollGrid");
		return pStaticClass;
	}


	void ScrollToItem(int Index);
};


}

