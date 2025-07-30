#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum BlockyLuaCore.EBlockyToolButtonType
enum class EBlockyToolButtonType : uint8_t
{
	BTBT_None                      = 0,
	BTBT_Copy                      = 1,
	BTBT_Eject                     = 2,
	BTBT_Comment                   = 3,
	BTBT_Paste                     = 4,
	BTBT_Disable                   = 5,
	BTBT_Delete                    = 6,
	BTBT_Define                    = 7,
	BTBT_Quote                     = 8,
	BTBT_Explain                   = 9,
	BTBT_Clone                     = 10,
	BTBT_GlobalComment             = 11,
	BTBT_MAX                       = 12
};


// Enum BlockyLuaCore.EBlockyLogMsgMode
enum class EBlockyLogMsgMode : uint8_t
{
	EBlockyLogMsgMode__Error       = 0,
	EBlockyLogMsgMode__Warn        = 1,
	EBlockyLogMsgMode__Info        = 2,
	EBlockyLogMsgMode__EBlockyLogMsgMode_MAX = 3
};


// Enum BlockyLuaCore.EVectorArithmeticOperationType
enum class EVectorArithmeticOperationType : uint8_t
{
	EVOT_Addition                  = 0,
	EVOT_Subtraction               = 1,
	EVOT_Multiplication            = 2,
	EVOT_Division                  = 3,
	EVOT_MAX                       = 4
};


// Enum BlockyLuaCore.EIntegerArithmeticOperationType
enum class EIntegerArithmeticOperationType : uint8_t
{
	EIOT_None                      = 0,
	EIOT_Addition                  = 1,
	EIOT_Subtraction               = 2,
	EIOT_Multiplication            = 3,
	EIOT_Division                  = 4,
	EIOT_Remainder                 = 5,
	EIOT_Exponentiation            = 6,
	EIOT_MAX                       = 7
};


// Enum BlockyLuaCore.EArithmeticOperationType
enum class EArithmeticOperationType : uint8_t
{
	EOT_None                       = 0,
	EOT_Addition                   = 1,
	EOT_Subtraction                = 2,
	EOT_Multiplication             = 3,
	EOT_Division                   = 4,
	EOT_ExactDivision              = 5,
	EOT_Remainder                  = 6,
	EOT_Exponentiation             = 7,
	EOT_MAX                        = 8
};


// Enum BlockyLuaCore.EBlockyBinaryOperation
enum class EBlockyBinaryOperation : uint8_t
{
	EBBO_Add                       = 0,
	EBBO_Subtract                  = 1,
	EBBO_Multiply                  = 2,
	EBBO_Divide                    = 3,
	EBBO_Modulus                   = 4,
	EBBO_Inequality                = 5,
	EBBO_Equality                  = 6,
	EBBO_BitwiseOr                 = 7,
	EBBO_BitwiseAnd                = 8,
	EBBO_BitwiseLeftShift          = 9,
	EBBO_BitwiseRightShift         = 10,
	EBBO_BooleanOr                 = 11,
	EBBO_BooleanAnd                = 12,
	EBBO_LessThan                  = 13,
	EBBO_LessThanOrEqual           = 14,
	EBBO_GreaterThan               = 15,
	EBBO_GreaterThanOrEqual        = 16,
	EBBO_Remainder                 = 17,
	EBBO_Exponentiation            = 18,
	EBBO_ExactDivision             = 19,
	EBBO_MAX                       = 20
};


// Enum BlockyLuaCore.ESlotClickType
enum class ESlotClickType : uint8_t
{
	ESlotClickType__Default        = 0,
	ESlotClickType__MenuItems      = 1,
	ESlotClickType__InputWithType  = 2,
	ESlotClickType__CustomSelection = 3,
	ESlotClickType__InputEnumWithIcon = 4,
	ESlotClickType__InputBoolean   = 5,
	ESlotClickType__Variables      = 6,
	ESlotClickType__Preset         = 7,
	ESlotClickType__TypeFilter     = 8,
	ESlotClickType__TypeString     = 9,
	ESlotClickType__All            = 10,
	ESlotClickType__ESlotClickType_MAX = 11
};


// Enum BlockyLuaCore.EBlockyValueType
enum class EBlockyValueType : uint8_t
{
	BVT_Boolean                    = 0,
	BVT_String                     = 1,
	BVT_Int8                       = 2,
	BVT_UInt8                      = 3,
	BVT_Int16                      = 4,
	BVT_UInt16                     = 5,
	BVT_Int32                      = 6,
	BVT_UInt32                     = 7,
	BVT_Int64                      = 8,
	BVT_UInt64                     = 9,
	BVT_Float                      = 10,
	BVT_Double                     = 11,
	BVT_MAX                        = 12
};


// Enum BlockyLuaCore.EBlockyVisitMode
enum class EBlockyVisitMode : uint8_t
{
	BVM_Public                     = 0,
	BVM_Protected                  = 1,
	BVM_Private                    = 2,
	BVM_Local                      = 3,
	BVM_MAX                        = 4
};


// Enum BlockyLuaCore.EBlockyVariableType
enum class EBlockyVariableType : uint8_t
{
	Var_BLIT_None                  = 0,
	Var_BLIT_DefineFunc            = 1,
	Var_BLIT_Executeable           = 2,
	Var_BLIT_Bool                  = 3,
	Var_BLIT_Int                   = 4,
	Var_BLIT_Float                 = 5,
	Var_BLIT_String                = 6,
	Var_BLIT_Array                 = 7,
	Var_BLIT_Class                 = 8,
	Var_BLIT_CodeType              = 9,
	Var_BLIT_Enum                  = 10,
	Var_BLIT_UInt                  = 11,
	Var_BLIT_Vector                = 12,
	Var_BLIT_Rotator               = 13,
	Var_BLIT_Color                 = 14,
	Var_BLIT_Integer               = 15,
	Var_BLIT_Number                = 16,
	Var_BLIT_PODType               = 17,
	Var_BLIT_ToStringAll           = 18,
	Var_BLIT_ArrayElementAll       = 19,
	Var_BLIT_ArrayAll              = 20,
	Var_BLIT_ALL                   = 21,
	Var_BLIT_MAX                   = 22
};


// Enum BlockyLuaCore.EBlockyListItemType
enum class EBlockyListItemType : uint8_t
{
	BLIT_None                      = 0,
	BLIT_DefineFunc                = 1,
	BLIT_Executeable               = 2,
	BLIT_Bool                      = 3,
	BLIT_Int                       = 4,
	BLIT_Float                     = 5,
	BLIT_String                    = 6,
	BLIT_Array                     = 7,
	BLIT_Class                     = 8,
	BLIT_CodeType                  = 9,
	BLIT_Enum                      = 10,
	BLIT_UInt                      = 11,
	BLIT_Vector                    = 12,
	BLIT_Rotator                   = 13,
	BLIT_Color                     = 14,
	BLIT_Integer                   = 15,
	BLIT_Number                    = 16,
	BLIT_PODType                   = 17,
	BLIT_ToStringAll               = 18,
	BLIT_ArrayElementAll           = 19,
	BLIT_ArrayAll                  = 20,
	BLIT_ALL                       = 21,
	BLIT_MAX                       = 22
};


// Enum BlockyLuaCore.EBlockyBPToolButtonType
enum class EBlockyBPToolButtonType : uint8_t
{
	EBlockyBPToolButtonType__BP_BTBT_None = 0,
	EBlockyBPToolButtonType__BP_BTBT_Copy = 1,
	EBlockyBPToolButtonType__BP_BTBT_Eject = 2,
	EBlockyBPToolButtonType__BP_BTBT_Comment = 3,
	EBlockyBPToolButtonType__BP_BTBT_Paste = 4,
	EBlockyBPToolButtonType__BP_BTBT_Disable = 5,
	EBlockyBPToolButtonType__BP_BTBT_Delete = 6,
	EBlockyBPToolButtonType__BP_BTBT_Define = 7,
	EBlockyBPToolButtonType__BP_BTBT_Quote = 8,
	EBlockyBPToolButtonType__BP_BTBT_Explain = 9,
	EBlockyBPToolButtonType__BP_BTBT_Clone = 10,
	EBlockyBPToolButtonType__BP_BTBT_GlobalComment = 11,
	EBlockyBPToolButtonType__BP_BTBT_MAX = 12
};


// Enum BlockyLuaCore.EBlockyBlockTypeGroup
enum class EBlockyBlockTypeGroup : uint8_t
{
	EBlockyBlockTypeGroup__BBTG_Event = 0,
	EBlockyBlockTypeGroup__BBTG_Action = 1,
	EBlockyBlockTypeGroup__BBTG_Logic = 2,
	EBlockyBlockTypeGroup__BBTG_Value = 3,
	EBlockyBlockTypeGroup__BBTG_Undefine = 4,
	EBlockyBlockTypeGroup__BBTG_Custom = 5,
	EBlockyBlockTypeGroup__BBTG_Max = 6
};


// Enum BlockyLuaCore.EBlockyCurrentGraphBlockyNumberType
enum class EBlockyCurrentGraphBlockyNumberType : uint8_t
{
	EBlockyCurrentGraphBlockyNumberType__BCGBN_Total = 0,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_TotalEvent = 1,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_TotalAction = 2,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_TotalLogic = 3,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_TotalValue = 4,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_TotalVariable = 5,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_TotalCustomEvent = 6,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_TotalCustomAction = 7,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_TotalCustomValue = 8,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_MaxActionBlocksNumInEvent = 9,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_MaxBlocksNumInCustomEvent = 10,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_MaxBlocksNumInCustomAction = 11,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_MaxBlocksNumInCustomValue = 12,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_MAX = 13
};


// Enum BlockyLuaCore.EBlockyLuaStubArgType
enum class EBlockyLuaStubArgType : uint8_t
{
	EBlockyLuaStubArgType__BlockyLuaStubArgType_Unknown = 0,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_IntProperty = 1,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_UInt32Property = 2,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_Int64Property = 3,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_UInt64Property = 4,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_Int16Property = 5,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_UInt16Property = 6,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_Int8Property = 7,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_ByteProperty = 8,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_FloatProperty = 9,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_DoubleProperty = 10,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_BoolProperty = 11,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_TextProperty = 12,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_StrProperty = 13,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_NameProperty = 14,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_UObjectProperty = 15,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_Struct = 16,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_Handle = 17,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_MAX = 18
};


// Enum BlockyLuaCore.ECustomBlockType
enum class ECustomBlockType : uint8_t
{
	ECBT_Action                    = 0,
	ECBT_Value                     = 1,
	ECBT_Event                     = 2,
	ECBT_MAX                       = 3
};


// Enum BlockyLuaCore.EBlockyFunctionArgumentAttribute
enum class EBlockyFunctionArgumentAttribute : uint8_t
{
	EBFAA_Default                  = 0,
	EBFAA_In                       = 1,
	EBFAA_Out                      = 2,
	EBFAA_Ref                      = 3,
	EBFAA_MAX                      = 4
};


// Enum BlockyLuaCore.ECompareOperationType
enum class ECompareOperationType : uint8_t
{
	EOT_Inequality                 = 0,
	EOT_Equality                   = 1,
	EOT_GreaterThan                = 2,
	EOT_GreaterThanOrEqual         = 3,
	EOT_LessThan                   = 4,
	EOT_LessThanOrEqual            = 5
};


// Enum BlockyLuaCore.EBlockyAccessType
enum class EBlockyAccessType : uint8_t
{
	EBAT_Global                    = 0,
	EBAT_Canvas                    = 1,
	EBAT_Local                     = 2,
	EBAT_CallBack                  = 3,
	EBAT_MAX                       = 4
};


// Enum BlockyLuaCore.EBlockyUnaryOperation
enum class EBlockyUnaryOperation : uint8_t
{
	EBUO_Negative                  = 0,
	EBUO_BooleanNot                = 1,
	EBUO_BitwiseNot                = 2,
	EBUO_MAX                       = 3
};


// Enum BlockyLuaCore.EBlockyVarInitType
enum class EBlockyVarInitType : uint8_t
{
	EBVIT_InputWithValue           = 0,
	EBVIT_Preset                   = 1,
	EBVIT_ForbidInitialization     = 2,
	EBVIT_CustomSelection          = 3,
	EBVIT_MAX                      = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BlockyLuaCore.BlockParam
// 0x0030
struct FBlockParam
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (Edit, BlueprintVisible)
	bool                                               bIsEnabled;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct BlockyLuaCore.BlockyLuaHandle
// 0x0008
struct FBlockyLuaHandle
{
	uint32_t                                           Low;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           High;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BlockyLuaCore.BlockPoint
// 0x0008
struct FBlockPoint
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BlockyLuaCore.BlockySlotString
// 0x0038
struct FBlockySlotString
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	struct FString                                     CustomStr;                                                // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct BlockyLuaCore.GraphString
// 0x0040
struct FGraphString
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     TemplateName;                                             // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct BlockyLuaCore.CustomVariableString
// 0x0028
struct FCustomVariableString
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct BlockyLuaCore.CustomConfigString
// 0x0028
struct FCustomConfigString
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (ZeroConstructor)
	TEnumAsByte<ECustomBlockType>                      Type;                                                     // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct BlockyLuaCore.BlockyBrushInfo
// 0x0060
struct FBlockyBrushInfo
{
	struct FString                                     RectName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     TexturePath;                                              // 0x0010(0x0010) (ZeroConstructor)
	float                                              TextureWidth;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TextureHeight;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DrawTypeInt;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   StartUV;                                                  // 0x002C(0x0008) (IsPlainOldData)
	struct FVector2D                                   SizeUV;                                                   // 0x0034(0x0008) (IsPlainOldData)
	struct FMargin                                     RectMargin;                                               // 0x003C(0x0010) (IsPlainOldData)
	int                                                CrossDelta;                                               // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RectAngle;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RectSize;                                                 // 0x0054(0x0008) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct BlockyLuaCore.Sequence
// 0x0010
struct FSequence
{
	TArray<struct FString>                             SequenceNames;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct BlockyLuaCore.CheckStringHandleData
// 0x0018
struct FCheckStringHandleData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct BlockyLuaCore.Type
// 0x0070
struct FType
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
	struct FString                                     TypeName;                                                 // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct BlockyLuaCore.BlockPreviewBrush
// 0x0038
struct FBlockPreviewBrush
{
	class UBrushData*                                  Brush;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlockBase*                                  InsideHostBlock;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct BlockyLuaCore.FunctionParameter
// 0x00D0
struct FFunctionParameter
{
	class UClass*                                      BlockType;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0008(0x00C8) MISSED OFFSET
};

// ScriptStruct BlockyLuaCore.HotFixSlotHandle
// 0x0008
struct FHotFixSlotHandle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct BlockyLuaCore.StubType
// 0x0010
struct FStubType
{
	EBlockyLuaStubArgType                              Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UScriptStruct*                               Struct;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BlockyLuaCore.BlockyLuaStub
// 0x0080
struct FBlockyLuaStub
{
	class UObject*                                     OverrideContext;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     Host;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              ArgumentsData;                                            // 0x0020(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              ReturnData;                                               // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FStubType>                           ArgTypes;                                                 // 0x0040(0x0010) (ZeroConstructor)
	struct FStubType                                   ReturnType;                                               // 0x0050(0x0010)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET
};

// ScriptStruct BlockyLuaCore.MessageDataStruct
// 0x0028
struct FMessageDataStruct
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct BlockyLuaCore.BlockOutputInfo
// 0x0040
struct FBlockOutputInfo
{
	TArray<struct FString>                             Infos;                                                    // 0x0000(0x0010) (ZeroConstructor)
	class UBlockBase*                                  SlotHostBlock;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
	class UBlockBase*                                  TargetBlock;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct BlockyLuaCore.QuoteData
// 0x0028
struct FQuoteData
{
	struct FVector2D                                   Pos;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FString                                     BlockName;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     GraphName;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct BlockyLuaCore.BlockRect
// 0x0010
struct FBlockRect
{
	struct FBlockPoint                                 Position;                                                 // 0x0000(0x0008) (Edit)
	struct FBlockPoint                                 Size;                                                     // 0x0008(0x0008) (Edit)
};

// ScriptStruct BlockyLuaCore.MsgData
// 0x0060
struct FMsgData
{
	struct FText                                       Info;                                                     // 0x0000(0x0018)
	class UBlockBase*                                  SourceBlock;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0020(0x0040) MISSED OFFSET
};

// ScriptStruct BlockyLuaCore.NamedVarData
// 0x0028
struct FNamedVarData
{
	TEnumAsByte<EBlockyAccessType>                     Access;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UVarDefiner*                                 Definer;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsArray;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     InitValueString;                                          // 0x0018(0x0010) (ZeroConstructor)
};

}

