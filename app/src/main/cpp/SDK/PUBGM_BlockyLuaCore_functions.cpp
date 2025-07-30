// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BlockyLuaCore.BlockBase.SetIsDisable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Disable                        (Parm, ZeroConstructor, IsPlainOldData)

void UBlockBase::SetIsDisable(bool Disable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockBase.SetIsDisable");

	UBlockBase_SetIsDisable_Params params;
	params.Disable = Disable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockBase.IsEvent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockBase::IsEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockBase.IsEvent");

	UBlockBase_IsEvent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockBase.GetCenterPos
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UBlockBase::GetCenterPos()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockBase.GetCenterPos");

	UBlockBase_GetCenterPos_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.Executeable.SupportFuncVar
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UExecuteable::SupportFuncVar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.Executeable.SupportFuncVar");

	UExecuteable_SupportFuncVar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.Executeable.ReEditFuncVar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNamedVar*               var                            (Parm, ZeroConstructor, IsPlainOldData)

void UExecuteable::ReEditFuncVar(class UNamedVar* var)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.Executeable.ReEditFuncVar");

	UExecuteable_ReEditFuncVar_Params params;
	params.var = var;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.Executeable.DeleteFuncVar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNamedVar*               var                            (Parm, ZeroConstructor, IsPlainOldData)

void UExecuteable::DeleteFuncVar(class UNamedVar* var)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.Executeable.DeleteFuncVar");

	UExecuteable_DeleteFuncVar_Params params;
	params.var = var;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.Executeable.CreateFuncVar
// (Final, Native, Public, BlueprintCallable)

void UExecuteable::CreateFuncVar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.Executeable.CreateFuncVar");

	UExecuteable_CreateFuncVar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.ExpressionBase.ReleaseExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)

void UExpressionBase::ReleaseExpression(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExpressionBase.ReleaseExpression");

	UExpressionBase_ReleaseExpression_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.ExpressionBase.CreateExpressionBase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UExpressionBase::CreateExpressionBase()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExpressionBase.CreateExpressionBase");

	UExpressionBase_CreateExpressionBase_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ArrayLengthExpression.SetTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        Target                         (Parm)

void UArrayLengthExpression::SetTarget(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ArrayLengthExpression.SetTarget");

	UArrayLengthExpression_SetTarget_Params params;
	params.ptr = ptr;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.ArrayLengthExpression.GetTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UArrayLengthExpression::GetTarget(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ArrayLengthExpression.GetTarget");

	UArrayLengthExpression_GetTarget_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ArrayLengthExpression.CreateArrayLengthExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UArrayLengthExpression::CreateArrayLengthExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ArrayLengthExpression.CreateArrayLengthExpression");

	UArrayLengthExpression_CreateArrayLengthExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.NamedVar.UpdateColor
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UNamedVar::UpdateColor(const struct FLinearColor& Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.UpdateColor");

	UNamedVar_UpdateColor_Params params;
	params.Color = Color;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.NamedVar.SetNameVarColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            Color                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UNamedVar::SetNameVarColor(const struct FLinearColor& Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.SetNameVarColor");

	UNamedVar_SetNameVarColor_Params params;
	params.Color = Color;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.NamedVar.SetIsArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsArray                        (Parm, ZeroConstructor, IsPlainOldData)

void UNamedVar::SetIsArray(bool IsArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.SetIsArray");

	UNamedVar_SetIsArray_Params params;
	params.IsArray = IsArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.NamedVar.SetInitValueString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)

void UNamedVar::SetInitValueString(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.SetInitValueString");

	UNamedVar_SetInitValueString_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.NamedVar.SetDefiner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVarDefiner*             Definer                        (Parm, ZeroConstructor, IsPlainOldData)

void UNamedVar::SetDefiner(class UVarDefiner* Definer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.SetDefiner");

	UNamedVar_SetDefiner_Params params;
	params.Definer = Definer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.NamedVar.SetAccessType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EBlockyAccessType> Access                         (Parm, ZeroConstructor, IsPlainOldData)

void UNamedVar::SetAccessType(TEnumAsByte<EBlockyAccessType> Access)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.SetAccessType");

	UNamedVar_SetAccessType_Params params;
	params.Access = Access;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.NamedVar.IsGlobalVar
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNamedVar::IsGlobalVar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.IsGlobalVar");

	UNamedVar_IsGlobalVar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.NamedVar.IsCustomColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNamedVar::IsCustomColor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.IsCustomColor");

	UNamedVar_IsCustomColor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.NamedVar.IsArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNamedVar::IsArray()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.IsArray");

	UNamedVar_IsArray_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.NamedVar.InitColorDesc
// (Final, Native, Public, BlueprintCallable)

void UNamedVar::InitColorDesc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.InitColorDesc");

	UNamedVar_InitColorDesc_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.NamedVar.GetNameVarColorDesc
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsArray                        (Parm, ZeroConstructor, IsPlainOldData)
// class UColorDesc*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UColorDesc* UNamedVar::GetNameVarColorDesc(int idx, bool IsArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.GetNameVarColorDesc");

	UNamedVar_GetNameVarColorDesc_Params params;
	params.idx = idx;
	params.IsArray = IsArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.NamedVar.GetNameVarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsArray                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UNamedVar::GetNameVarColor(int idx, bool IsArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.GetNameVarColor");

	UNamedVar_GetNameVarColor_Params params;
	params.idx = idx;
	params.IsArray = IsArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.NamedVar.GetInitValueString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UNamedVar::GetInitValueString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.GetInitValueString");

	UNamedVar_GetInitValueString_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.NamedVar.GetDefiner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVarDefiner*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVarDefiner* UNamedVar::GetDefiner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.GetDefiner");

	UNamedVar_GetDefiner_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.NamedVar.GetColorStr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsArray                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UNamedVar::GetColorStr(int idx, bool IsArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.GetColorStr");

	UNamedVar_GetColorStr_Params params;
	params.idx = idx;
	params.IsArray = IsArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.NamedVar.GetAccessType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EBlockyAccessType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EBlockyAccessType> UNamedVar::GetAccessType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.GetAccessType");

	UNamedVar_GetAccessType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.NamedVar.CallCustomSelectObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsArray                        (Parm, ZeroConstructor, IsPlainOldData)

void UNamedVar::CallCustomSelectObject(int idx, bool IsArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.CallCustomSelectObject");

	UNamedVar_CallCustomSelectObject_Params params;
	params.idx = idx;
	params.IsArray = IsArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.NamedVar.AddColorToArray
// (Final, Native, Public, BlueprintCallable)

void UNamedVar::AddColorToArray()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.AddColorToArray");

	UNamedVar_AddColorToArray_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BinaryOperatorExpression.SetWithParentheses
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBinaryOperatorExpression::SetWithParentheses(const struct FBlockyLuaHandle& ptr, bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BinaryOperatorExpression.SetWithParentheses");

	UBinaryOperatorExpression_SetWithParentheses_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BinaryOperatorExpression.SetRight
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        Value                          (Parm)

void UBinaryOperatorExpression::SetRight(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BinaryOperatorExpression.SetRight");

	UBinaryOperatorExpression_SetRight_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BinaryOperatorExpression.SetOperation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TEnumAsByte<EBlockyBinaryOperation> BlockyOp                       (Parm, ZeroConstructor, IsPlainOldData)

void UBinaryOperatorExpression::SetOperation(const struct FBlockyLuaHandle& ptr, TEnumAsByte<EBlockyBinaryOperation> BlockyOp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BinaryOperatorExpression.SetOperation");

	UBinaryOperatorExpression_SetOperation_Params params;
	params.ptr = ptr;
	params.BlockyOp = BlockyOp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BinaryOperatorExpression.SetLeft
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        Value                          (Parm)

void UBinaryOperatorExpression::SetLeft(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BinaryOperatorExpression.SetLeft");

	UBinaryOperatorExpression_SetLeft_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BinaryOperatorExpression.GetWithParentheses
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBinaryOperatorExpression::GetWithParentheses(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BinaryOperatorExpression.GetWithParentheses");

	UBinaryOperatorExpression_GetWithParentheses_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BinaryOperatorExpression.GetRight
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UBinaryOperatorExpression::GetRight(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BinaryOperatorExpression.GetRight");

	UBinaryOperatorExpression_GetRight_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BinaryOperatorExpression.GetOperation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TEnumAsByte<EBlockyBinaryOperation> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EBlockyBinaryOperation> UBinaryOperatorExpression::GetOperation(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BinaryOperatorExpression.GetOperation");

	UBinaryOperatorExpression_GetOperation_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BinaryOperatorExpression.GetLeft
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UBinaryOperatorExpression::GetLeft(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BinaryOperatorExpression.GetLeft");

	UBinaryOperatorExpression_GetLeft_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BinaryOperatorExpression.CreateBinaryOperatorExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UBinaryOperatorExpression::CreateBinaryOperatorExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BinaryOperatorExpression.CreateBinaryOperatorExpression");

	UBinaryOperatorExpression_CreateBinaryOperatorExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CategoryDefiner.GetCurrentLocateShowName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCategoryDefiner::GetCurrentLocateShowName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CategoryDefiner.GetCurrentLocateShowName");

	UCategoryDefiner_GetCurrentLocateShowName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyCategoryItemObject.GetSelectedIconBrush
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UBlockyCategoryItemObject::GetSelectedIconBrush()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyCategoryItemObject.GetSelectedIconBrush");

	UBlockyCategoryItemObject_GetSelectedIconBrush_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyCategoryItemObject.GetIconBrush
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UBlockyCategoryItemObject::GetIconBrush()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyCategoryItemObject.GetIconBrush");

	UBlockyCategoryItemObject_GetIconBrush_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraph.UpdateCustomBlockName
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraph::UpdateCustomBlockName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.UpdateCustomBlockName");

	UBlockyGraph_UpdateCustomBlockName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraph.TryAdjustingBlockIntoView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyGraphData*        GraphData                      (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraph::TryAdjustingBlockIntoView(class UBlockyGraphData* GraphData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.TryAdjustingBlockIntoView");

	UBlockyGraph_TryAdjustingBlockIntoView_Params params;
	params.GraphData = GraphData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraph.SetIsDisable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           Disable                        (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraph::SetIsDisable(bool Disable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.SetIsDisable");

	UBlockyGraph_SetIsDisable_Params params;
	params.Disable = Disable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraph.SaveGraphToFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)
// bool                           IsNewFile                      (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraph::SaveGraphToFile(const struct FString& Filename, bool IsNewFile)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.SaveGraphToFile");

	UBlockyGraph_SaveGraphToFile_Params params;
	params.Filename = Filename;
	params.IsNewFile = IsNewFile;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraph.SaveGraphAsTemplate
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          OutData                        (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyGraph::SaveGraphAsTemplate(TArray<unsigned char>* OutData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.SaveGraphAsTemplate");

	UBlockyGraph_SaveGraphAsTemplate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutData != nullptr)
		*OutData = params.OutData;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraph.LoadGraphFromTemplate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          Data                           (Parm, ZeroConstructor)

void UBlockyGraph::LoadGraphFromTemplate(TArray<unsigned char> Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.LoadGraphFromTemplate");

	UBlockyGraph_LoadGraphFromTemplate_Params params;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraph.IsCustomTemplateGraph
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyGraph::IsCustomTemplateGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.IsCustomTemplateGraph");

	UBlockyGraph_IsCustomTemplateGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraph.IsCustomGraph
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyGraph::IsCustomGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.IsCustomGraph");

	UBlockyGraph_IsCustomGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraph.IsBasicTemplateGraph
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyGraph::IsBasicTemplateGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.IsBasicTemplateGraph");

	UBlockyGraph_IsBasicTemplateGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraph.GetTotalBlockNum
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBlockyGraph::GetTotalBlockNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.GetTotalBlockNum");

	UBlockyGraph_GetTotalBlockNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraph.CaptureScreenShot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBlockyGraph::CaptureScreenShot(class UUserWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.CaptureScreenShot");

	UBlockyGraph_CaptureScreenShot_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraph.CanSaveAsTemplate
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 OutFailedReason                (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyGraph::CanSaveAsTemplate(struct FString* OutFailedReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.CanSaveAsTemplate");

	UBlockyGraph_CanSaveAsTemplate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutFailedReason != nullptr)
		*OutFailedReason = params.OutFailedReason;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraph.CanBeRemove
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBlockyGraphData*        GraphData                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyGraph::CanBeRemove(class UBlockyGraphData* GraphData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.CanBeRemove");

	UBlockyGraph_CanBeRemove_Params params;
	params.GraphData = GraphData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraph.CanBeDuplicated
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyGraph::CanBeDuplicated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.CanBeDuplicated");

	UBlockyGraph_CanBeDuplicated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.UseTemplate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyGraph*            templateGraph                  (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphData::UseTemplate(class UBlockyGraph* templateGraph)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.UseTemplate");

	UBlockyGraphData_UseTemplate_Params params;
	params.templateGraph = templateGraph;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.UpdateVariableMenu
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::UpdateVariableMenu()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.UpdateVariableMenu");

	UBlockyGraphData_UpdateVariableMenu_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.UpdateVariableItemNames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> UBlockyGraphData::UpdateVariableItemNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.UpdateVariableItemNames");

	UBlockyGraphData_UpdateVariableItemNames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.UpdateCustomMenu
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::UpdateCustomMenu()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.UpdateCustomMenu");

	UBlockyGraphData_UpdateCustomMenu_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.UpdateCustomItemNames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> UBlockyGraphData::UpdateCustomItemNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.UpdateCustomItemNames");

	UBlockyGraphData_UpdateCustomItemNames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.Undo
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::Undo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Undo");

	UBlockyGraphData_Undo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.TryCloseItemList
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::TryCloseItemList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.TryCloseItemList");

	UBlockyGraphData_TryCloseItemList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.ShowTips
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   Tips                           (ConstParm, Parm, OutParm, ReferenceParm)

void UBlockyGraphData::ShowTips(const struct FText& Tips)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ShowTips");

	UBlockyGraphData_ShowTips_Params params;
	params.Tips = Tips;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.ShowBlockSettingPop
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::ShowBlockSettingPop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ShowBlockSettingPop");

	UBlockyGraphData_ShowBlockSettingPop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.SetSlotString
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBlockySlotString       slotStr                        (ConstParm, Parm, OutParm, ReferenceParm)

void UBlockyGraphData::SetSlotString(const struct FBlockySlotString& slotStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SetSlotString");

	UBlockyGraphData_SetSlotString_Params params;
	params.slotStr = slotStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.SetGraphStrings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGraphString            graphStr                       (ConstParm, Parm, OutParm, ReferenceParm)

void UBlockyGraphData::SetGraphStrings(const struct FGraphString& graphStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SetGraphStrings");

	UBlockyGraphData_SetGraphStrings_Params params;
	params.graphStr = graphStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.SetCustomVariableString
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCustomVariableString   variableStr                    (ConstParm, Parm, OutParm, ReferenceParm)

void UBlockyGraphData::SetCustomVariableString(const struct FCustomVariableString& variableStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SetCustomVariableString");

	UBlockyGraphData_SetCustomVariableString_Params params;
	params.variableStr = variableStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.SetCustomConfigString
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCustomConfigString     configStr                      (ConstParm, Parm, OutParm, ReferenceParm)

void UBlockyGraphData::SetCustomConfigString(const struct FCustomConfigString& configStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SetCustomConfigString");

	UBlockyGraphData_SetCustomConfigString_Params params;
	params.configStr = configStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.SetCurrentSubGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InName                         (Parm, ZeroConstructor)

void UBlockyGraphData::SetCurrentSubGraph(const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SetCurrentSubGraph");

	UBlockyGraphData_SetCurrentSubGraph_Params params;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.SetBlockLogText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBlockyLogMsgMode              Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// class UBlockBase*              BlockSource                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SlotID                         (Parm, ZeroConstructor)
// struct FString                 Info                           (Parm, ZeroConstructor)

void UBlockyGraphData::SetBlockLogText(EBlockyLogMsgMode Mode, class UBlockBase* BlockSource, const struct FString& SlotID, const struct FString& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SetBlockLogText");

	UBlockyGraphData_SetBlockLogText_Params params;
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


// Function BlockyLuaCore.BlockyGraphData.SetBlockLogTabNum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphData::SetBlockLogTabNum(int Mode, int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SetBlockLogTabNum");

	UBlockyGraphData_SetBlockLogTabNum_Params params;
	params.Mode = Mode;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.SetBlockLogNum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphData::SetBlockLogNum(int Mode, int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SetBlockLogNum");

	UBlockyGraphData_SetBlockLogNum_Params params;
	params.Mode = Mode;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.SaveGraphToJsonText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBlockyGraphData::SaveGraphToJsonText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SaveGraphToJsonText");

	UBlockyGraphData_SaveGraphToJsonText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.SaveGraphToBinFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)

void UBlockyGraphData::SaveGraphToBinFile(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SaveGraphToBinFile");

	UBlockyGraphData_SaveGraphToBinFile_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.SaveGraphToBin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UBlockyGraphData::SaveGraphToBin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SaveGraphToBin");

	UBlockyGraphData_SaveGraphToBin_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.SaveGlobalVarToJsonText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBlockyGraphData::SaveGlobalVarToJsonText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SaveGlobalVarToJsonText");

	UBlockyGraphData_SaveGlobalVarToJsonText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.SaveGlobalVarToBin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UBlockyGraphData::SaveGlobalVarToBin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SaveGlobalVarToBin");

	UBlockyGraphData_SaveGlobalVarToBin_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.SaveCustom
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::SaveCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SaveCustom");

	UBlockyGraphData_SaveCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.Save
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::Save()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Save");

	UBlockyGraphData_Save_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.ReturnToPreviewGraph
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::ReturnToPreviewGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ReturnToPreviewGraph");

	UBlockyGraphData_ReturnToPreviewGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.ReturnToMainGraph
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::ReturnToMainGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ReturnToMainGraph");

	UBlockyGraphData_ReturnToMainGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.ResetGraph
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::ResetGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ResetGraph");

	UBlockyGraphData_ResetGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.RemoveSubGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InName                         (Parm, ZeroConstructor)

void UBlockyGraphData::RemoveSubGraph(const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.RemoveSubGraph");

	UBlockyGraphData_RemoveSubGraph_Params params;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.RefreshFont
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::RefreshFont()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.RefreshFont");

	UBlockyGraphData_RefreshFont_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.ReEditVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphData::ReEditVariable(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ReEditVariable");

	UBlockyGraphData_ReEditVariable_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.Redo
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::Redo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Redo");

	UBlockyGraphData_Redo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.QuoteVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphData::QuoteVariable(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.QuoteVariable");

	UBlockyGraphData_QuoteVariable_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.QuoteCustom
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::QuoteCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.QuoteCustom");

	UBlockyGraphData_QuoteCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.Quote
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::Quote()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Quote");

	UBlockyGraphData_Quote_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.Paste
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::Paste()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Paste");

	UBlockyGraphData_Paste_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.OpenGuideWebUrl
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::OpenGuideWebUrl()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.OpenGuideWebUrl");

	UBlockyGraphData_OpenGuideWebUrl_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.OnLoadFinished
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::OnLoadFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.OnLoadFinished");

	UBlockyGraphData_OnLoadFinished_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.MarkGraphDirty
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::MarkGraphDirty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.MarkGraphDirty");

	UBlockyGraphData_MarkGraphDirty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.LoadGraphFromJsonText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 JsonStr                        (ConstParm, Parm, ZeroConstructor)

void UBlockyGraphData::LoadGraphFromJsonText(const struct FString& JsonStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.LoadGraphFromJsonText");

	UBlockyGraphData_LoadGraphFromJsonText_Params params;
	params.JsonStr = JsonStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.LoadGlobalVarFromJsonText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 JsonStr                        (ConstParm, Parm, ZeroConstructor)

void UBlockyGraphData::LoadGlobalVarFromJsonText(const struct FString& JsonStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.LoadGlobalVarFromJsonText");

	UBlockyGraphData_LoadGlobalVarFromJsonText_Params params;
	params.JsonStr = JsonStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.Load
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::Load()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Load");

	UBlockyGraphData_Load_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.JumpToFocusSlotByIdStrAndIdx
// (Final, Native, Public)
// Parameters:
// struct FString                 BlockID                        (Parm, ZeroConstructor)
// unsigned char                  idx                            (Parm, ZeroConstructor, IsPlainOldData)
// class UBlockBase*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlockBase* UBlockyGraphData::JumpToFocusSlotByIdStrAndIdx(const struct FString& BlockID, unsigned char idx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.JumpToFocusSlotByIdStrAndIdx");

	UBlockyGraphData_JumpToFocusSlotByIdStrAndIdx_Params params;
	params.BlockID = BlockID;
	params.idx = idx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.JumpToFocusSlotByIdStr
// (Final, Native, Public)
// Parameters:
// struct FString                 BlockID                        (Parm, ZeroConstructor)
// struct FString                 TargetSlotIdStr                (Parm, ZeroConstructor)
// class UBlockBase*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlockBase* UBlockyGraphData::JumpToFocusSlotByIdStr(const struct FString& BlockID, const struct FString& TargetSlotIdStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.JumpToFocusSlotByIdStr");

	UBlockyGraphData_JumpToFocusSlotByIdStr_Params params;
	params.BlockID = BlockID;
	params.TargetSlotIdStr = TargetSlotIdStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.JumpToFocusBlockByIdStr
// (Final, Native, Public)
// Parameters:
// struct FString                 BlockID                        (Parm, ZeroConstructor)
// class UBlockBase*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlockBase* UBlockyGraphData::JumpToFocusBlockByIdStr(const struct FString& BlockID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.JumpToFocusBlockByIdStr");

	UBlockyGraphData_JumpToFocusBlockByIdStr_Params params;
	params.BlockID = BlockID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.ItemHasOpend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ItemStringName                 (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyGraphData::ItemHasOpend(const struct FString& ItemStringName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ItemHasOpend");

	UBlockyGraphData_ItemHasOpend_Params params;
	params.ItemStringName = ItemStringName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.IsGraphChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyGraphData::IsGraphChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.IsGraphChanged");

	UBlockyGraphData_IsGraphChanged_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.IsFirstGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyGraphData::IsFirstGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.IsFirstGraph");

	UBlockyGraphData_IsFirstGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.IsBlockGuideButton
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyGraphData::IsBlockGuideButton()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.IsBlockGuideButton");

	UBlockyGraphData_IsBlockGuideButton_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.HasExecutableCode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyGraphData::HasExecutableCode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.HasExecutableCode");

	UBlockyGraphData_HasExecutableCode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.GM_GenerateAllBlocks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            CombinedBlocksNum              (Parm, ZeroConstructor, IsPlainOldData)
// int                            GraphBlocksNum                 (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphData::GM_GenerateAllBlocks(int CombinedBlocksNum, int GraphBlocksNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GM_GenerateAllBlocks");

	UBlockyGraphData_GM_GenerateAllBlocks_Params params;
	params.CombinedBlocksNum = CombinedBlocksNum;
	params.GraphBlocksNum = GraphBlocksNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.GetTriggerList
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UBlockyGraphData::GetTriggerList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetTriggerList");

	UBlockyGraphData_GetTriggerList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.GetQuoteVariableItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyGraph*            Graph                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UBlockBase*>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UBlockBase*> UBlockyGraphData::GetQuoteVariableItem(class UBlockyGraph* Graph)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetQuoteVariableItem");

	UBlockyGraphData_GetQuoteVariableItem_Params params;
	params.Graph = Graph;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.GetQuoteVariableGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UBlockyGraph*>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UBlockyGraph*> UBlockyGraphData::GetQuoteVariableGraph(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetQuoteVariableGraph");

	UBlockyGraphData_GetQuoteVariableGraph_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.GetPresetDescArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UPresetDesc*>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPresetDesc*> UBlockyGraphData::GetPresetDescArray()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetPresetDescArray");

	UBlockyGraphData_GetPresetDescArray_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.GetIsDisableComment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyGraphData::GetIsDisableComment()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetIsDisableComment");

	UBlockyGraphData_GetIsDisableComment_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.GetGraphStrings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FGraphString>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FGraphString> UBlockyGraphData::GetGraphStrings()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetGraphStrings");

	UBlockyGraphData_GetGraphStrings_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.GetGraphMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TMap<struct FString, struct FString> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FString, struct FString> UBlockyGraphData::GetGraphMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetGraphMap");

	UBlockyGraphData_GetGraphMap_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.GetFunctionDescArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UFunctionDesc*>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UFunctionDesc*> UBlockyGraphData::GetFunctionDescArray()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetFunctionDescArray");

	UBlockyGraphData_GetFunctionDescArray_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.GetDeleteBlockUIRect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InRectWidth                    (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphData::GetDeleteBlockUIRect(float InRectWidth)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetDeleteBlockUIRect");

	UBlockyGraphData_GetDeleteBlockUIRect_Params params;
	params.InRectWidth = InRectWidth;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.GetCustomVariableStrings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FCustomVariableString> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FCustomVariableString> UBlockyGraphData::GetCustomVariableStrings()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetCustomVariableStrings");

	UBlockyGraphData_GetCustomVariableStrings_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.GetCustomNames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> UBlockyGraphData::GetCustomNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetCustomNames");

	UBlockyGraphData_GetCustomNames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.GetCustomConfigStrings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FCustomConfigString> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FCustomConfigString> UBlockyGraphData::GetCustomConfigStrings()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetCustomConfigStrings");

	UBlockyGraphData_GetCustomConfigStrings_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.GetCurrentGraphBlockyNumberByType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBlockyCurrentGraphBlockyNumberType Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBlockyGraphData::GetCurrentGraphBlockyNumberByType(EBlockyCurrentGraphBlockyNumberType Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetCurrentGraphBlockyNumberByType");

	UBlockyGraphData_GetCurrentGraphBlockyNumberByType_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.GetCurrentGraph
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBlockyGraph*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlockyGraph* UBlockyGraphData::GetCurrentGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetCurrentGraph");

	UBlockyGraphData_GetCurrentGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.GetCurrentBlockyNumByMune
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Menu                           (Parm, ZeroConstructor)
// struct FString                 Category                       (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBlockyGraphData::GetCurrentBlockyNumByMune(const struct FString& Menu, const struct FString& Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetCurrentBlockyNumByMune");

	UBlockyGraphData_GetCurrentBlockyNumByMune_Params params;
	params.Menu = Menu;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.GetBlockyStringDatasInPair
// (Final, Native, Public)
// Parameters:
// TArray<struct FBlockySlotString> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBlockySlotString> UBlockyGraphData::GetBlockyStringDatasInPair()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetBlockyStringDatasInPair");

	UBlockyGraphData_GetBlockyStringDatasInPair_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.GetBlocks
// (Final, Native, Public, Const)
// Parameters:
// TArray<class UBlockBase*>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UBlockBase*> UBlockyGraphData::GetBlocks()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetBlocks");

	UBlockyGraphData_GetBlocks_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.GetAllBlockByKeyName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TMap<struct FString, int>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FString, int> UBlockyGraphData::GetAllBlockByKeyName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetAllBlockByKeyName");

	UBlockyGraphData_GetAllBlockByKeyName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.FocusToSlotByBlockySlotId
// (Final, Native, Public)
// Parameters:
// struct FBlockySlotString       SlotID                         (Parm)
// class UBlockBase*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlockBase* UBlockyGraphData::FocusToSlotByBlockySlotId(const struct FBlockySlotString& SlotID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.FocusToSlotByBlockySlotId");

	UBlockyGraphData_FocusToSlotByBlockySlotId_Params params;
	params.SlotID = SlotID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.FocusToSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockBase*              TargetBlock                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TargetSlotIdStr                (Parm, ZeroConstructor)

void UBlockyGraphData::FocusToSlot(class UBlockBase* TargetBlock, const struct FString& TargetSlotIdStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.FocusToSlot");

	UBlockyGraphData_FocusToSlot_Params params;
	params.TargetBlock = TargetBlock;
	params.TargetSlotIdStr = TargetSlotIdStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.FocusTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockBase*              TargetBlock                    (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphData::FocusTo(class UBlockBase* TargetBlock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.FocusTo");

	UBlockyGraphData_FocusTo_Params params;
	params.TargetBlock = TargetBlock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.FinishVariableEdit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSaveVar                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReEdit                        (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphData::FinishVariableEdit(bool bSaveVar, bool bReEdit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.FinishVariableEdit");

	UBlockyGraphData_FinishVariableEdit_Params params;
	params.bSaveVar = bSaveVar;
	params.bReEdit = bReEdit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.FinishCustomEdit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSave                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphData::FinishCustomEdit(bool bSave)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.FinishCustomEdit");

	UBlockyGraphData_FinishCustomEdit_Params params;
	params.bSave = bSave;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.FinishBlockSetting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSaveVar                       (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphData::FinishBlockSetting(bool bSaveVar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.FinishBlockSetting");

	UBlockyGraphData_FinishBlockSetting_Params params;
	params.bSaveVar = bSaveVar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.FindBlockByIdStr
// (Final, Native, Public)
// Parameters:
// struct FString                 BlockID                        (Parm, ZeroConstructor)
// class UBlockBase*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlockBase* UBlockyGraphData::FindBlockByIdStr(const struct FString& BlockID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.FindBlockByIdStr");

	UBlockyGraphData_FindBlockByIdStr_Params params;
	params.BlockID = BlockID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.EmptyListItemSeleceted
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::EmptyListItemSeleceted()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.EmptyListItemSeleceted");

	UBlockyGraphData_EmptyListItemSeleceted_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.Eject
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::Eject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Eject");

	UBlockyGraphData_Eject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.EditVariable
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::EditVariable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.EditVariable");

	UBlockyGraphData_EditVariable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.EditCustumBlockGraph
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::EditCustumBlockGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.EditCustumBlockGraph");

	UBlockyGraphData_EditCustumBlockGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.EditCustom
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::EditCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.EditCustom");

	UBlockyGraphData_EditCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.DuplicateSubGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 SrcName                        (Parm, ZeroConstructor)

void UBlockyGraphData::DuplicateSubGraph(const struct FString& SrcName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DuplicateSubGraph");

	UBlockyGraphData_DuplicateSubGraph_Params params;
	params.SrcName = SrcName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.DuplicateBlock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockBase*              bLock                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphData::DuplicateBlock(class UBlockBase* bLock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DuplicateBlock");

	UBlockyGraphData_DuplicateBlock_Params params;
	params.bLock = bLock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.Disable
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::Disable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Disable");

	UBlockyGraphData_Disable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.DeleteVariableListItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphData::DeleteVariableListItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DeleteVariableListItem");

	UBlockyGraphData_DeleteVariableListItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.DeleteSelected
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::DeleteSelected()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DeleteSelected");

	UBlockyGraphData_DeleteSelected_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.DeleteCustom
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::DeleteCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DeleteCustom");

	UBlockyGraphData_DeleteCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.DeleteBlocks
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::DeleteBlocks()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DeleteBlocks");

	UBlockyGraphData_DeleteBlocks_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.DeleteBlockInGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyGraph*            InGraph                        (Parm, ZeroConstructor, IsPlainOldData)
// class UBlockBase*              bLock                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphData::DeleteBlockInGraph(class UBlockyGraph* InGraph, class UBlockBase* bLock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DeleteBlockInGraph");

	UBlockyGraphData_DeleteBlockInGraph_Params params;
	params.InGraph = InGraph;
	params.bLock = bLock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.DeleteBlockAndNextInGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyGraph*            InGraph                        (Parm, ZeroConstructor, IsPlainOldData)
// class UBlockBase*              bLock                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphData::DeleteBlockAndNextInGraph(class UBlockyGraph* InGraph, class UBlockBase* bLock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DeleteBlockAndNextInGraph");

	UBlockyGraphData_DeleteBlockAndNextInGraph_Params params;
	params.InGraph = InGraph;
	params.bLock = bLock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.DeleteBlockAndNext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockBase*              bLock                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphData::DeleteBlockAndNext(class UBlockBase* bLock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DeleteBlockAndNext");

	UBlockyGraphData_DeleteBlockAndNext_Params params;
	params.bLock = bLock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.DeleteBlock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockBase*              bLock                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyGraphData::DeleteBlock(class UBlockBase* bLock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DeleteBlock");

	UBlockyGraphData_DeleteBlock_Params params;
	params.bLock = bLock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.DefineCustom
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::DefineCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DefineCustom");

	UBlockyGraphData_DefineCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.Define
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::Define()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Define");

	UBlockyGraphData_Define_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.CurSelectSubBlockyGraphs
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UBlockyGraph*>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UBlockyGraph*> UBlockyGraphData::CurSelectSubBlockyGraphs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.CurSelectSubBlockyGraphs");

	UBlockyGraphData_CurSelectSubBlockyGraphs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.Copy
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::Copy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Copy");

	UBlockyGraphData_Copy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.Comment
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::Comment()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Comment");

	UBlockyGraphData_Comment_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.Clone
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::Clone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Clone");

	UBlockyGraphData_Clone_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.ClearUndoRedoDatas
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::ClearUndoRedoDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ClearUndoRedoDatas");

	UBlockyGraphData_ClearUndoRedoDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.ClearTextSizeCache
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::ClearTextSizeCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ClearTextSizeCache");

	UBlockyGraphData_ClearTextSizeCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.ClearGraphDirty
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::ClearGraphDirty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ClearGraphDirty");

	UBlockyGraphData_ClearGraphDirty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.ClearBlockLog
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::ClearBlockLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ClearBlockLog");

	UBlockyGraphData_ClearBlockLog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.CheckReports
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyGraphData::CheckReports()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.CheckReports");

	UBlockyGraphData_CheckReports_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.AddSubGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InName                         (Parm, ZeroConstructor)
// struct FString                 InType                         (Parm, ZeroConstructor)

void UBlockyGraphData::AddSubGraph(const struct FString& InName, const struct FString& InType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.AddSubGraph");

	UBlockyGraphData_AddSubGraph_Params params;
	params.InName = InName;
	params.InType = InType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.AddOpendNameToArr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ItemStringName                 (Parm, ZeroConstructor)

void UBlockyGraphData::AddOpendNameToArr(const struct FString& ItemStringName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.AddOpendNameToArr");

	UBlockyGraphData_AddOpendNameToArr_Params params;
	params.ItemStringName = ItemStringName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyGraphData.AddGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InName                         (Parm, ZeroConstructor)
// struct FString                 InType                         (Parm, ZeroConstructor)
// class UBlockyGraph*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlockyGraph* UBlockyGraphData::AddGraph(const struct FString& InName, const struct FString& InType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.AddGraph");

	UBlockyGraphData_AddGraph_Params params;
	params.InName = InName;
	params.InType = InType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyGraphData.AddGlobalComment
// (Final, Native, Public, BlueprintCallable)

void UBlockyGraphData::AddGlobalComment()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.AddGlobalComment");

	UBlockyGraphData_AddGlobalComment_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaConfig.SetCustomDefaultFont
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FSlateFontInfo          DefaultFont                    (Parm, OutParm)

void UBlockyLuaConfig::SetCustomDefaultFont(struct FSlateFontInfo* DefaultFont)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.SetCustomDefaultFont");

	UBlockyLuaConfig_SetCustomDefaultFont_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefaultFont != nullptr)
		*DefaultFont = params.DefaultFont;
}


// Function BlockyLuaCore.BlockyLuaConfig.ReplaceChCharToMaskChar
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Source                         (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBlockyLuaConfig::ReplaceChCharToMaskChar(const struct FString& Source)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.ReplaceChCharToMaskChar");

	UBlockyLuaConfig_ReplaceChCharToMaskChar_Params params;
	params.Source = Source;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaConfig.PlayPresetSound
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FString                 SoundPath                      (Parm, ZeroConstructor)

void UBlockyLuaConfig::PlayPresetSound(const struct FString& SoundPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.PlayPresetSound");

	UBlockyLuaConfig_PlayPresetSound_Params params;
	params.SoundPath = SoundPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaConfig.IsNameStringValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 NameString                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyLuaConfig::IsNameStringValid(const struct FString& NameString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.IsNameStringValid");

	UBlockyLuaConfig_IsNameStringValid_Params params;
	params.NameString = NameString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaConfig.IsBlackboardVar
// (Final, Native, Public, Const)
// Parameters:
// class UVarDefiner*             Definer                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyLuaConfig::IsBlackboardVar(class UVarDefiner* Definer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.IsBlackboardVar");

	UBlockyLuaConfig_IsBlackboardVar_Params params;
	params.Definer = Definer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaConfig.GetValidString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 CheckString                    (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBlockyLuaConfig::GetValidString(const struct FString& CheckString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.GetValidString");

	UBlockyLuaConfig_GetValidString_Params params;
	params.CheckString = CheckString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaConfig.GetTranslateStringTest
// (Final, Native, Public)
// Parameters:
// struct FString                 KeyString                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBlockyLuaConfig::GetTranslateStringTest(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.GetTranslateStringTest");

	UBlockyLuaConfig_GetTranslateStringTest_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaConfig.GetTranslateString
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 KeyString                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBlockyLuaConfig::GetTranslateString(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.GetTranslateString");

	UBlockyLuaConfig_GetTranslateString_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaConfig.GetLocaleString
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 KeyString                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBlockyLuaConfig::GetLocaleString(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.GetLocaleString");

	UBlockyLuaConfig_GetLocaleString_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaConfig.GetBlackboardDefiner
// (Final, Native, Public, Const)
// Parameters:
// class UVarDefiner*             Definer                        (Parm, ZeroConstructor, IsPlainOldData)
// class UBlackboardDefiner*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlackboardDefiner* UBlockyLuaConfig::GetBlackboardDefiner(class UVarDefiner* Definer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.GetBlackboardDefiner");

	UBlockyLuaConfig_GetBlackboardDefiner_Params params;
	params.Definer = Definer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaConfig.ClearCustomDefaultFont
// (Final, Native, Public)

void UBlockyLuaConfig::ClearCustomDefaultFont()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.ClearCustomDefaultFont");

	UBlockyLuaConfig_ClearCustomDefaultFont_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaConfig.ClearAsyncTextureHandleMap
// (Final, Native, Public)

void UBlockyLuaConfig::ClearAsyncTextureHandleMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.ClearAsyncTextureHandleMap");

	UBlockyLuaConfig_ClearAsyncTextureHandleMap_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaConfig.CheckStringValidTest
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 CheckString                    (Parm, ZeroConstructor)
// struct FCheckStringHandleData  Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UBlockyLuaConfig::CheckStringValidTest(const struct FString& CheckString, const struct FCheckStringHandleData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.CheckStringValidTest");

	UBlockyLuaConfig_CheckStringValidTest_Params params;
	params.CheckString = CheckString;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaUtility.WriteUInt8
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// unsigned char                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaUtility::WriteUInt8(const struct FBlockyLuaHandle& ar, unsigned char Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteUInt8");

	UBlockyLuaUtility_WriteUInt8_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaUtility.WriteUInt64
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// uint64_t                       Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaUtility::WriteUInt64(const struct FBlockyLuaHandle& ar, uint64_t Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteUInt64");

	UBlockyLuaUtility_WriteUInt64_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaUtility.WriteUInt32
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// uint32_t                       Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaUtility::WriteUInt32(const struct FBlockyLuaHandle& ar, uint32_t Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteUInt32");

	UBlockyLuaUtility_WriteUInt32_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaUtility.WriteUInt16
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// uint16_t                       Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaUtility::WriteUInt16(const struct FBlockyLuaHandle& ar, uint16_t Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteUInt16");

	UBlockyLuaUtility_WriteUInt16_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaUtility.WriteString
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UBlockyLuaUtility::WriteString(const struct FBlockyLuaHandle& ar, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteString");

	UBlockyLuaUtility_WriteString_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaUtility.WriteSingle
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaUtility::WriteSingle(const struct FBlockyLuaHandle& ar, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteSingle");

	UBlockyLuaUtility_WriteSingle_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaUtility.WriteObjectPtr
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaUtility::WriteObjectPtr(const struct FBlockyLuaHandle& ar, class UObject* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteObjectPtr");

	UBlockyLuaUtility_WriteObjectPtr_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaUtility.WriteInt8
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// int8_t                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaUtility::WriteInt8(const struct FBlockyLuaHandle& ar, int8_t Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteInt8");

	UBlockyLuaUtility_WriteInt8_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaUtility.WriteInt64
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// int64_t                        Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaUtility::WriteInt64(const struct FBlockyLuaHandle& ar, int64_t Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteInt64");

	UBlockyLuaUtility_WriteInt64_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaUtility.WriteInt32
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaUtility::WriteInt32(const struct FBlockyLuaHandle& ar, int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteInt32");

	UBlockyLuaUtility_WriteInt32_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaUtility.WriteInt16
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// int16_t                        Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaUtility::WriteInt16(const struct FBlockyLuaHandle& ar, int16_t Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteInt16");

	UBlockyLuaUtility_WriteInt16_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaUtility.WriteHandle
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// struct FBlockyLuaHandle        Value                          (Parm)

void UBlockyLuaUtility::WriteHandle(const struct FBlockyLuaHandle& ar, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteHandle");

	UBlockyLuaUtility_WriteHandle_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaUtility.WriteDouble
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// double                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaUtility::WriteDouble(const struct FBlockyLuaHandle& ar, double Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteDouble");

	UBlockyLuaUtility_WriteDouble_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaUtility.WriteBool
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyLuaUtility::WriteBool(const struct FBlockyLuaHandle& ar, bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteBool");

	UBlockyLuaUtility_WriteBool_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaUtility.ReadUInt8
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UBlockyLuaUtility::ReadUInt8(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadUInt8");

	UBlockyLuaUtility_ReadUInt8_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaUtility.ReadUInt64
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// uint64_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint64_t UBlockyLuaUtility::ReadUInt64(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadUInt64");

	UBlockyLuaUtility_ReadUInt64_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaUtility.ReadUInt32
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UBlockyLuaUtility::ReadUInt32(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadUInt32");

	UBlockyLuaUtility_ReadUInt32_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaUtility.ReadUInt16
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// uint16_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint16_t UBlockyLuaUtility::ReadUInt16(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadUInt16");

	UBlockyLuaUtility_ReadUInt16_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaUtility.ReadString
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBlockyLuaUtility::ReadString(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadString");

	UBlockyLuaUtility_ReadString_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaUtility.ReadSingle
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBlockyLuaUtility::ReadSingle(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadSingle");

	UBlockyLuaUtility_ReadSingle_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaUtility.ReadObjectPtr
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UBlockyLuaUtility::ReadObjectPtr(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadObjectPtr");

	UBlockyLuaUtility_ReadObjectPtr_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaUtility.ReadInt8
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// int8_t                         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int8_t UBlockyLuaUtility::ReadInt8(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadInt8");

	UBlockyLuaUtility_ReadInt8_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaUtility.ReadInt64
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UBlockyLuaUtility::ReadInt64(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadInt64");

	UBlockyLuaUtility_ReadInt64_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaUtility.ReadInt32
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBlockyLuaUtility::ReadInt32(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadInt32");

	UBlockyLuaUtility_ReadInt32_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaUtility.ReadInt16
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// int16_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int16_t UBlockyLuaUtility::ReadInt16(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadInt16");

	UBlockyLuaUtility_ReadInt16_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaUtility.ReadHandle
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UBlockyLuaUtility::ReadHandle(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadHandle");

	UBlockyLuaUtility_ReadHandle_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaUtility.ReadDouble
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// double                         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

double UBlockyLuaUtility::ReadDouble(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadDouble");

	UBlockyLuaUtility_ReadDouble_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaUtility.ReadBool
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ar                             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyLuaUtility::ReadBool(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadBool");

	UBlockyLuaUtility_ReadBool_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaUtility.DestroyReturnWriter
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)

void UBlockyLuaUtility::DestroyReturnWriter(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.DestroyReturnWriter");

	UBlockyLuaUtility_DestroyReturnWriter_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaUtility.DestroyArgumentsReader
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)

void UBlockyLuaUtility::DestroyArgumentsReader(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.DestroyArgumentsReader");

	UBlockyLuaUtility_DestroyArgumentsReader_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyLuaUtility.CreateReturnWriter
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        stubHandle                     (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UBlockyLuaUtility::CreateReturnWriter(const struct FBlockyLuaHandle& stubHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.CreateReturnWriter");

	UBlockyLuaUtility_CreateReturnWriter_Params params;
	params.stubHandle = stubHandle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyLuaUtility.CreateArgumentsReader
// (Final, Native, Static, Public)
// Parameters:
// struct FBlockyLuaHandle        stubHandle                     (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UBlockyLuaUtility::CreateArgumentsReader(const struct FBlockyLuaHandle& stubHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.CreateArgumentsReader");

	UBlockyLuaUtility_CreateArgumentsReader_Params params;
	params.stubHandle = stubHandle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyMenuItemObject_Custom.NewCustom
// (Final, Native, Public, BlueprintCallable)

void UBlockyMenuItemObject_Custom::NewCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Custom.NewCustom");

	UBlockyMenuItemObject_Custom_NewCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyMenuItemObject_Custom.IsCurrentCategoryEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyMenuItemObject_Custom::IsCurrentCategoryEmpty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Custom.IsCurrentCategoryEmpty");

	UBlockyMenuItemObject_Custom_IsCurrentCategoryEmpty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyMenuItemObject_Custom.ClosePopUp
// (Final, Native, Public, BlueprintCallable)

void UBlockyMenuItemObject_Custom::ClosePopUp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Custom.ClosePopUp");

	UBlockyMenuItemObject_Custom_ClosePopUp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyMenuItemObject_Variable.NewVariable
// (Final, Native, Public, BlueprintCallable)

void UBlockyMenuItemObject_Variable::NewVariable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Variable.NewVariable");

	UBlockyMenuItemObject_Variable_NewVariable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyMenuItemObject_Variable.IsPlayerBlackboard
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyMenuItemObject_Variable::IsPlayerBlackboard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Variable.IsPlayerBlackboard");

	UBlockyMenuItemObject_Variable_IsPlayerBlackboard_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyMenuItemObject_Variable.IsCurrentCategoryEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyMenuItemObject_Variable::IsCurrentCategoryEmpty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Variable.IsCurrentCategoryEmpty");

	UBlockyMenuItemObject_Variable_IsCurrentCategoryEmpty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyMenuItemObject_Variable.IsBlackBoardVariable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlockyMenuItemObject_Variable::IsBlackBoardVariable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Variable.IsBlackBoardVariable");

	UBlockyMenuItemObject_Variable_IsBlackBoardVariable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BlockyMenuItemObject_Variable.FilterBlackboard
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsPlayerVar                   (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyMenuItemObject_Variable::FilterBlackboard(bool bIsPlayerVar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Variable.FilterBlackboard");

	UBlockyMenuItemObject_Variable_FilterBlackboard_Params params;
	params.bIsPlayerVar = bIsPlayerVar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.BlockyMenuItemObject_Variable.FilterAccess
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EBlockyAccessType> InAccess                       (Parm, ZeroConstructor, IsPlainOldData)

void UBlockyMenuItemObject_Variable::FilterAccess(TEnumAsByte<EBlockyAccessType> InAccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Variable.FilterAccess");

	UBlockyMenuItemObject_Variable_FilterAccess_Params params;
	params.InAccess = InAccess;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.CastExpression.SetTargetType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        Target                         (Parm)

void UCastExpression::SetTargetType(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CastExpression.SetTargetType");

	UCastExpression_SetTargetType_Params params;
	params.ptr = ptr;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.CastExpression.SetExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        Target                         (Parm)

void UCastExpression::SetExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CastExpression.SetExpression");

	UCastExpression_SetExpression_Params params;
	params.ptr = ptr;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.CastExpression.GetTargetType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UCastExpression::GetTargetType(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CastExpression.GetTargetType");

	UCastExpression_GetTargetType_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CastExpression.GetExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UCastExpression::GetExpression(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CastExpression.GetExpression");

	UCastExpression_GetExpression_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CastExpression.CreateCastExpression2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        TargetType                     (Parm)
// struct FBlockyLuaHandle        expression                     (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UCastExpression::CreateCastExpression2(const struct FBlockyLuaHandle& TargetType, const struct FBlockyLuaHandle& expression)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CastExpression.CreateCastExpression2");

	UCastExpression_CreateCastExpression2_Params params;
	params.TargetType = TargetType;
	params.expression = expression;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CastExpression.CreateCastExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UCastExpression::CreateCastExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CastExpression.CreateCastExpression");

	UCastExpression_CreateCastExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ClassReferenceExpression.SetClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        klass                          (Parm)

void UClassReferenceExpression::SetClass(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& klass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ClassReferenceExpression.SetClass");

	UClassReferenceExpression_SetClass_Params params;
	params.ptr = ptr;
	params.klass = klass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.ClassReferenceExpression.GetClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UClassReferenceExpression::GetClass(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ClassReferenceExpression.GetClass");

	UClassReferenceExpression_GetClass_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ClassReferenceExpression.CreateClassReferenceExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        klass                          (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UClassReferenceExpression::CreateClassReferenceExpression(const struct FBlockyLuaHandle& klass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ClassReferenceExpression.CreateClassReferenceExpression");

	UClassReferenceExpression_CreateClassReferenceExpression_Params params;
	params.klass = klass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ColorDesc.NameContainsString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 filter                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UColorDesc::NameContainsString(const struct FString& filter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ColorDesc.NameContainsString");

	UColorDesc_NameContainsString_Params params;
	params.filter = filter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ColorDesc.IsNameEmpty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UColorDesc::IsNameEmpty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ColorDesc.IsNameEmpty");

	UColorDesc_IsNameEmpty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ColorDesc.IsCodeNameEmpty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UColorDesc::IsCodeNameEmpty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ColorDesc.IsCodeNameEmpty");

	UColorDesc_IsCodeNameEmpty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ColorDesc.GetType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FType                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FType UColorDesc::GetType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ColorDesc.GetType");

	UColorDesc_GetType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ColorDesc.GetLocaleName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UColorDesc::GetLocaleName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ColorDesc.GetLocaleName");

	UColorDesc_GetLocaleName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ColorDesc.GetHSVStr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UColorDesc::GetHSVStr()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ColorDesc.GetHSVStr");

	UColorDesc_GetHSVStr_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ColorDesc.GetColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UColorDesc::GetColor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ColorDesc.GetColor");

	UColorDesc_GetColor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.VarDefinerTypeCanBeArray
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UVarDefiner*             Definer                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonUIFunctionLibrary::VarDefinerTypeCanBeArray(class UVarDefiner* Definer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.VarDefinerTypeCanBeArray");

	UCommonUIFunctionLibrary_VarDefinerTypeCanBeArray_Params params;
	params.Definer = Definer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.SetIsVirtualKeyboardVisible
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UCommonUIFunctionLibrary::SetIsVirtualKeyboardVisible(bool Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.SetIsVirtualKeyboardVisible");

	UCommonUIFunctionLibrary_SetIsVirtualKeyboardVisible_Params params;
	params.Visible = Visible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.LimitTextLength
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   InputText                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            MaxCharCount                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OutText                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonUIFunctionLibrary::LimitTextLength(const struct FText& InputText, int MaxCharCount, struct FText* OutText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.LimitTextLength");

	UCommonUIFunctionLibrary_LimitTextLength_Params params;
	params.InputText = InputText;
	params.MaxCharCount = MaxCharCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.LimitTextEmojiInput
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   InputText                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCommonUIFunctionLibrary::LimitTextEmojiInput(const struct FText& InputText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.LimitTextEmojiInput");

	UCommonUIFunctionLibrary_LimitTextEmojiInput_Params params;
	params.InputText = InputText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.IsNameStringValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 NameString                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonUIFunctionLibrary::IsNameStringValid(const struct FString& NameString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.IsNameStringValid");

	UCommonUIFunctionLibrary_IsNameStringValid_Params params;
	params.NameString = NameString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.IsFuncDisabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FuncName                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonUIFunctionLibrary::IsFuncDisabled(const struct FString& FuncName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.IsFuncDisabled");

	UCommonUIFunctionLibrary_IsFuncDisabled_Params params;
	params.FuncName = FuncName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.IsDeveloperMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonUIFunctionLibrary::IsDeveloperMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.IsDeveloperMode");

	UCommonUIFunctionLibrary_IsDeveloperMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.GetTranslateString_BP
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 KeyString                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCommonUIFunctionLibrary::GetTranslateString_BP(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetTranslateString_BP");

	UCommonUIFunctionLibrary_GetTranslateString_BP_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.GetTranslateString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 KeyString                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCommonUIFunctionLibrary::GetTranslateString(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetTranslateString");

	UCommonUIFunctionLibrary_GetTranslateString_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.GetTextLen
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCommonUIFunctionLibrary::GetTextLen(const struct FText& Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetTextLen");

	UCommonUIFunctionLibrary_GetTextLen_Params params;
	params.Text = Text;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.GetPresetDescs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UVarDefiner*             Definer                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPresetDesc*>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPresetDesc*> UCommonUIFunctionLibrary::GetPresetDescs(class UVarDefiner* Definer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetPresetDescs");

	UCommonUIFunctionLibrary_GetPresetDescs_Params params;
	params.Definer = Definer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.GetLocaleText
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   KeyString                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCommonUIFunctionLibrary::GetLocaleText(const struct FText& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetLocaleText");

	UCommonUIFunctionLibrary_GetLocaleText_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.GetLocaleString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 KeyString                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCommonUIFunctionLibrary::GetLocaleString(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetLocaleString");

	UCommonUIFunctionLibrary_GetLocaleString_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.GetIsVirtualKeyboardVisible
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonUIFunctionLibrary::GetIsVirtualKeyboardVisible()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetIsVirtualKeyboardVisible");

	UCommonUIFunctionLibrary_GetIsVirtualKeyboardVisible_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.GetArrayInitStringStart
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCommonUIFunctionLibrary::GetArrayInitStringStart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetArrayInitStringStart");

	UCommonUIFunctionLibrary_GetArrayInitStringStart_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.GetArrayInitStringEnd
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCommonUIFunctionLibrary::GetArrayInitStringEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetArrayInitStringEnd");

	UCommonUIFunctionLibrary_GetArrayInitStringEnd_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.GetAllDefiners
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UVarDefiner*>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UVarDefiner*> UCommonUIFunctionLibrary::GetAllDefiners()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetAllDefiners");

	UCommonUIFunctionLibrary_GetAllDefiners_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.GenerateNextNameWithSuffix
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FString>         ExistingNames                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 InputName                      (Parm, ZeroConstructor)
// bool                           InDuplicate                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCommonUIFunctionLibrary::GenerateNextNameWithSuffix(TArray<struct FString> ExistingNames, const struct FString& InputName, bool InDuplicate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GenerateNextNameWithSuffix");

	UCommonUIFunctionLibrary_GenerateNextNameWithSuffix_Params params;
	params.ExistingNames = ExistingNames;
	params.InputName = InputName;
	params.InDuplicate = InDuplicate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.FormatNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Input                          (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCommonUIFunctionLibrary::FormatNumber(const struct FString& Input)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.FormatNumber");

	UCommonUIFunctionLibrary_FormatNumber_Params params;
	params.Input = Input;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.CollectAllObjects
// (Final, Native, Static, Public, BlueprintCallable)

void UCommonUIFunctionLibrary::CollectAllObjects()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.CollectAllObjects");

	UCommonUIFunctionLibrary_CollectAllObjects_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.CheckNameValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 InName                         (Parm, ZeroConstructor)
// struct FText                   ErrorMsg                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonUIFunctionLibrary::CheckNameValid(const struct FString& InName, struct FText* ErrorMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.CheckNameValid");

	UCommonUIFunctionLibrary_CheckNameValid_Params params;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ErrorMsg != nullptr)
		*ErrorMsg = params.ErrorMsg;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommonUIFunctionLibrary.CheckNameHasInvalidChar
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 InName                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonUIFunctionLibrary::CheckNameHasInvalidChar(const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.CheckNameHasInvalidChar");

	UCommonUIFunctionLibrary_CheckNameHasInvalidChar_Params params;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ConfigDataAsset.SaveToAsset
// (Final, Native, Public)
// Parameters:
// struct FString                 PackageName                    (Parm, ZeroConstructor)

void UConfigDataAsset::SaveToAsset(const struct FString& PackageName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ConfigDataAsset.SaveToAsset");

	UConfigDataAsset_SaveToAsset_Params params;
	params.PackageName = PackageName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.CreateObjectExpression.SetTypeName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UCreateObjectExpression::SetTypeName(const struct FBlockyLuaHandle& ptr, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CreateObjectExpression.SetTypeName");

	UCreateObjectExpression_SetTypeName_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.CreateObjectExpression.SetParameters
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TArray<struct FBlockyLuaHandle> Value                          (Parm, ZeroConstructor)

void UCreateObjectExpression::SetParameters(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CreateObjectExpression.SetParameters");

	UCreateObjectExpression_SetParameters_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.CreateObjectExpression.GetTypeName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreateObjectExpression::GetTypeName(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CreateObjectExpression.GetTypeName");

	UCreateObjectExpression_GetTypeName_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CreateObjectExpression.GetParameters
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TArray<struct FBlockyLuaHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBlockyLuaHandle> UCreateObjectExpression::GetParameters(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CreateObjectExpression.GetParameters");

	UCreateObjectExpression_GetParameters_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CreateObjectExpression.CreateCreateObjectExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 TypeName                       (Parm, ZeroConstructor)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UCreateObjectExpression::CreateCreateObjectExpression(const struct FString& TypeName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CreateObjectExpression.CreateCreateObjectExpression");

	UCreateObjectExpression_CreateCreateObjectExpression_Params params;
	params.TypeName = TypeName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CustomParam.CopyFrom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCustomParam*            Other                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCustomParam::CopyFrom(class UCustomParam* Other)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CustomParam.CopyFrom");

	UCustomParam_CopyFrom_Params params;
	params.Other = Other;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.CustomConfig.UpdateDesc
// (Final, Native, Public)

void UCustomConfig::UpdateDesc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CustomConfig.UpdateDesc");

	UCustomConfig_UpdateDesc_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.CustomConfig.SetParamNum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            paramNum                       (Parm, ZeroConstructor, IsPlainOldData)

void UCustomConfig::SetParamNum(int paramNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CustomConfig.SetParamNum");

	UCustomConfig_SetParamNum_Params params;
	params.paramNum = paramNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.CustomConfig.InitResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCustomParam*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCustomParam* UCustomConfig::InitResult()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CustomConfig.InitResult");

	UCustomConfig_InitResult_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CustomConfig.Init
// (Final, Native, Public, BlueprintCallable)

void UCustomConfig::Init()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CustomConfig.Init");

	UCustomConfig_Init_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.CustomConfig.GetParam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData)
// class UCustomParam*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCustomParam* UCustomConfig::GetParam(int idx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CustomConfig.GetParam");

	UCustomConfig_GetParam_Params params;
	params.idx = idx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CustomConfig.GetCustomGraphName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCustomConfig::GetCustomGraphName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CustomConfig.GetCustomGraphName");

	UCustomConfig_GetCustomGraphName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CustomConfig.CopyFrom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCustomConfig*           Other                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCustomConfig::CopyFrom(class UCustomConfig* Other)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CustomConfig.CopyFrom");

	UCustomConfig_CopyFrom_Params params;
	params.Other = Other;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.DefaultValueExpression.SetType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        Type                           (Parm)

void UDefaultValueExpression::SetType(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.DefaultValueExpression.SetType");

	UDefaultValueExpression_SetType_Params params;
	params.ptr = ptr;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.DefaultValueExpression.GetType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UDefaultValueExpression::GetType(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.DefaultValueExpression.GetType");

	UDefaultValueExpression_GetType_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.DefaultValueExpression.CreateDefaultValueExpression2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        typeRef                        (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UDefaultValueExpression::CreateDefaultValueExpression2(const struct FBlockyLuaHandle& typeRef)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.DefaultValueExpression.CreateDefaultValueExpression2");

	UDefaultValueExpression_CreateDefaultValueExpression2_Params params;
	params.typeRef = typeRef;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.DefaultValueExpression.CreateDefaultValueExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        typeClass                      (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UDefaultValueExpression::CreateDefaultValueExpression(const struct FBlockyLuaHandle& typeClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.DefaultValueExpression.CreateDefaultValueExpression");

	UDefaultValueExpression_CreateDefaultValueExpression_Params params;
	params.typeClass = typeClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.FunctionInvokeArgumentExpression.SetOperationType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TEnumAsByte<EBlockyFunctionArgumentAttribute> Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UFunctionInvokeArgumentExpression::SetOperationType(const struct FBlockyLuaHandle& ptr, TEnumAsByte<EBlockyFunctionArgumentAttribute> Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeArgumentExpression.SetOperationType");

	UFunctionInvokeArgumentExpression_SetOperationType_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.FunctionInvokeArgumentExpression.SetExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        Value                          (Parm)

void UFunctionInvokeArgumentExpression::SetExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeArgumentExpression.SetExpression");

	UFunctionInvokeArgumentExpression_SetExpression_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.FunctionInvokeArgumentExpression.SetAdditionPostCode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UFunctionInvokeArgumentExpression::SetAdditionPostCode(const struct FBlockyLuaHandle& ptr, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeArgumentExpression.SetAdditionPostCode");

	UFunctionInvokeArgumentExpression_SetAdditionPostCode_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.FunctionInvokeArgumentExpression.GetOperationType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TEnumAsByte<EBlockyFunctionArgumentAttribute> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EBlockyFunctionArgumentAttribute> UFunctionInvokeArgumentExpression::GetOperationType(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeArgumentExpression.GetOperationType");

	UFunctionInvokeArgumentExpression_GetOperationType_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.FunctionInvokeArgumentExpression.GetExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UFunctionInvokeArgumentExpression::GetExpression(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeArgumentExpression.GetExpression");

	UFunctionInvokeArgumentExpression_GetExpression_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.FunctionInvokeArgumentExpression.GetAdditionPostCode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFunctionInvokeArgumentExpression::GetAdditionPostCode(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeArgumentExpression.GetAdditionPostCode");

	UFunctionInvokeArgumentExpression_GetAdditionPostCode_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.FunctionInvokeArgumentExpression.CreateFunctionInvokeArgumentExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UFunctionInvokeArgumentExpression::CreateFunctionInvokeArgumentExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeArgumentExpression.CreateFunctionInvokeArgumentExpression");

	UFunctionInvokeArgumentExpression_CreateFunctionInvokeArgumentExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.FunctionInvokeExpression.SetReturnValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        Value                          (Parm)

void UFunctionInvokeExpression::SetReturnValue(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.SetReturnValue");

	UFunctionInvokeExpression_SetReturnValue_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.FunctionInvokeExpression.SetHost
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        Value                          (Parm)

void UFunctionInvokeExpression::SetHost(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.SetHost");

	UFunctionInvokeExpression_SetHost_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.FunctionInvokeExpression.SetFunctionName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UFunctionInvokeExpression::SetFunctionName(const struct FBlockyLuaHandle& ptr, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.SetFunctionName");

	UFunctionInvokeExpression_SetFunctionName_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.FunctionInvokeExpression.SetComment
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        Value                          (Parm)

void UFunctionInvokeExpression::SetComment(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.SetComment");

	UFunctionInvokeExpression_SetComment_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.FunctionInvokeExpression.SetArguments
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TArray<struct FBlockyLuaHandle> Value                          (Parm, ZeroConstructor)

void UFunctionInvokeExpression::SetArguments(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.SetArguments");

	UFunctionInvokeExpression_SetArguments_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.FunctionInvokeExpression.GetReturnValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UFunctionInvokeExpression::GetReturnValue(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.GetReturnValue");

	UFunctionInvokeExpression_GetReturnValue_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.FunctionInvokeExpression.GetHost
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UFunctionInvokeExpression::GetHost(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.GetHost");

	UFunctionInvokeExpression_GetHost_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.FunctionInvokeExpression.GetFunctionName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFunctionInvokeExpression::GetFunctionName(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.GetFunctionName");

	UFunctionInvokeExpression_GetFunctionName_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.FunctionInvokeExpression.GetComment
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UFunctionInvokeExpression::GetComment(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.GetComment");

	UFunctionInvokeExpression_GetComment_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.FunctionInvokeExpression.GetArguments
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TArray<struct FBlockyLuaHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBlockyLuaHandle> UFunctionInvokeExpression::GetArguments(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.GetArguments");

	UFunctionInvokeExpression_GetArguments_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.FunctionInvokeExpression.CreateFunctionInvokeExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UFunctionInvokeExpression::CreateFunctionInvokeExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.CreateFunctionInvokeExpression");

	UFunctionInvokeExpression_CreateFunctionInvokeExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UVarDefiner_GetCurrentLocateShowName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UVarDefiner*             pThis                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UVarDefiner_GetCurrentLocateShowName(class UVarDefiner* pThis)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UVarDefiner_GetCurrentLocateShowName");

	UHotfixUtility_UVarDefiner_GetCurrentLocateShowName_Params params;
	params.pThis = pThis;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UPresetDesc_GetLocaleName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UPresetDesc*             PresetDesc                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UPresetDesc_GetLocaleName(class UPresetDesc* PresetDesc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UPresetDesc_GetLocaleName");

	UHotfixUtility_UPresetDesc_GetLocaleName_Params params;
	params.PresetDesc = PresetDesc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UNumFromTo_UpdateParameterDisplayName_Index_DisplayName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UFunctionDesc*           Desc                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DisplayName                    (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UNumFromTo_UpdateParameterDisplayName_Index_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UNumFromTo_UpdateParameterDisplayName_Index_DisplayName");

	UHotfixUtility_UNumFromTo_UpdateParameterDisplayName_Index_DisplayName_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UNumFromTo_UpdateParameterDisplayName_CurrNum_DisplayName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UFunctionDesc*           Desc                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DisplayName                    (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UNumFromTo_UpdateParameterDisplayName_CurrNum_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UNumFromTo_UpdateParameterDisplayName_CurrNum_DisplayName");

	UHotfixUtility_UNumFromTo_UpdateParameterDisplayName_CurrNum_DisplayName_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UNumFromTo_SetFunctionDesc_NamedVarBlock_DisplayName
// (RequiredAPI, Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UFunctionDesc*           Desc                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ParamIdx                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 DisplayName                    (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UNumFromTo_SetFunctionDesc_NamedVarBlock_DisplayName(class UFunctionDesc* Desc, int ParamIdx, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UNumFromTo_SetFunctionDesc_NamedVarBlock_DisplayName");

	UHotfixUtility_UNumFromTo_SetFunctionDesc_NamedVarBlock_DisplayName_Params params;
	params.Desc = Desc;
	params.ParamIdx = ParamIdx;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UNumFromTo_InitializeBlock_IndexBlock_Name
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UNumFromTo*              NumFromTo                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UNumFromTo_InitializeBlock_IndexBlock_Name(class UNumFromTo* NumFromTo, const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UNumFromTo_InitializeBlock_IndexBlock_Name");

	UHotfixUtility_UNumFromTo_InitializeBlock_IndexBlock_Name_Params params;
	params.NumFromTo = NumFromTo;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UNumFromTo_InitializeBlock_CurrentBlock_Name
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UNumFromTo*              NumFromTo                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UNumFromTo_InitializeBlock_CurrentBlock_Name(class UNumFromTo* NumFromTo, const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UNumFromTo_InitializeBlock_CurrentBlock_Name");

	UHotfixUtility_UNumFromTo_InitializeBlock_CurrentBlock_Name_Params params;
	params.NumFromTo = NumFromTo;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UNamedVar_UpdateFormater_VarFormatNameText
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UNamedVar*               var                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UNamedVar_UpdateFormater_VarFormatNameText(class UNamedVar* var)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UNamedVar_UpdateFormater_VarFormatNameText");

	UHotfixUtility_UNamedVar_UpdateFormater_VarFormatNameText_Params params;
	params.var = var;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ForeachIndex_DisplayName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UFunctionDesc*           Desc                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DisplayName                    (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UForEach_UpdateParameterDisplayName_ForeachIndex_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ForeachIndex_DisplayName");

	UHotfixUtility_UForEach_UpdateParameterDisplayName_ForeachIndex_DisplayName_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ForeachElement_DisplayName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UFunctionDesc*           Desc                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DisplayName                    (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UForEach_UpdateParameterDisplayName_ForeachElement_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ForeachElement_DisplayName");

	UHotfixUtility_UForEach_UpdateParameterDisplayName_ForeachElement_DisplayName_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ElementNormalDisplay
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UFunctionDesc*           Desc                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DisplayName                    (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UForEach_UpdateParameterDisplayName_ElementNormalDisplay(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ElementNormalDisplay");

	UHotfixUtility_UForEach_UpdateParameterDisplayName_ElementNormalDisplay_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ElementDisableDisplay
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UFunctionDesc*           Desc                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DisplayName                    (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UForEach_UpdateParameterDisplayName_ElementDisableDisplay(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ElementDisableDisplay");

	UHotfixUtility_UForEach_UpdateParameterDisplayName_ElementDisableDisplay_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ForeachIndex_DisplayName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UFunctionDesc*           Desc                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DisplayName                    (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UForEach_SetFunctionDesc_ForeachIndex_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ForeachIndex_DisplayName");

	UHotfixUtility_UForEach_SetFunctionDesc_ForeachIndex_DisplayName_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ForeachElement_DisplayName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UFunctionDesc*           Desc                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DisplayName                    (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UForEach_SetFunctionDesc_ForeachElement_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ForeachElement_DisplayName");

	UHotfixUtility_UForEach_SetFunctionDesc_ForeachElement_DisplayName_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ElementNormalDisplay
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UFunctionDesc*           Desc                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DisplayName                    (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UForEach_SetFunctionDesc_ElementNormalDisplay(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ElementNormalDisplay");

	UHotfixUtility_UForEach_SetFunctionDesc_ElementNormalDisplay_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ElementDisableDisplay
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UFunctionDesc*           Desc                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DisplayName                    (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UForEach_SetFunctionDesc_ElementDisableDisplay(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ElementDisableDisplay");

	UHotfixUtility_UForEach_SetFunctionDesc_ElementDisableDisplay_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UExecuteable_SetFunctionDesc_ParamDisplayName
// (RequiredAPI, Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UFunctionDesc*           Desc                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ParamIdx                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 ParamDisplayName               (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UExecuteable_SetFunctionDesc_ParamDisplayName(class UFunctionDesc* Desc, int ParamIdx, const struct FString& ParamDisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UExecuteable_SetFunctionDesc_ParamDisplayName");

	UHotfixUtility_UExecuteable_SetFunctionDesc_ParamDisplayName_Params params;
	params.Desc = Desc;
	params.ParamIdx = ParamIdx;
	params.ParamDisplayName = ParamDisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UEnumDesc_GetCurrentLocaleEnumValueName
// (RequiredAPI, Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UEnumDesc*               EnumDesc                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   enumValueName                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 enumValueLocName               (Parm, ZeroConstructor)
// bool                           useDefaultWhenNotFound         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UEnumDesc_GetCurrentLocaleEnumValueName(class UEnumDesc* EnumDesc, const struct FName& enumValueName, const struct FString& enumValueLocName, bool useDefaultWhenNotFound)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UEnumDesc_GetCurrentLocaleEnumValueName");

	UHotfixUtility_UEnumDesc_GetCurrentLocaleEnumValueName_Params params;
	params.EnumDesc = EnumDesc;
	params.enumValueName = enumValueName;
	params.enumValueLocName = enumValueLocName;
	params.useDefaultWhenNotFound = useDefaultWhenNotFound;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UEnumDesc_GetCurrentLocaleEnumTypeName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UEnumDesc*               EnumDesc                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EnumTypeName                   (Parm, ZeroConstructor)
// bool                           useDefaultWhenNotFound         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UEnumDesc_GetCurrentLocaleEnumTypeName(class UEnumDesc* EnumDesc, const struct FString& EnumTypeName, bool useDefaultWhenNotFound)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UEnumDesc_GetCurrentLocaleEnumTypeName");

	UHotfixUtility_UEnumDesc_GetCurrentLocaleEnumTypeName_Params params;
	params.EnumDesc = EnumDesc;
	params.EnumTypeName = EnumTypeName;
	params.useDefaultWhenNotFound = useDefaultWhenNotFound;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UDoNum_UpdateParameterDisplayName_CurrentIndexSlotDisplayName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UFunctionDesc*           Desc                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 CurrentIndexDisplayName        (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UDoNum_UpdateParameterDisplayName_CurrentIndexSlotDisplayName(class UFunctionDesc* Desc, const struct FString& CurrentIndexDisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UDoNum_UpdateParameterDisplayName_CurrentIndexSlotDisplayName");

	UHotfixUtility_UDoNum_UpdateParameterDisplayName_CurrentIndexSlotDisplayName_Params params;
	params.Desc = Desc;
	params.CurrentIndexDisplayName = CurrentIndexDisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UDoNum_SetFunctionDesc_CurrentIndexSlotDisplayName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UFunctionDesc*           Desc                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 CurrentIndexDisplayName        (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UDoNum_SetFunctionDesc_CurrentIndexSlotDisplayName(class UFunctionDesc* Desc, const struct FString& CurrentIndexDisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UDoNum_SetFunctionDesc_CurrentIndexSlotDisplayName");

	UHotfixUtility_UDoNum_SetFunctionDesc_CurrentIndexSlotDisplayName_Params params;
	params.Desc = Desc;
	params.CurrentIndexDisplayName = CurrentIndexDisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UDefineFunction_SetFunctionDesc_ParamName
// (RequiredAPI, Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UFunctionDesc*           Desc                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ParamIdx                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UDefineFunction_SetFunctionDesc_ParamName(class UFunctionDesc* Desc, int ParamIdx, const struct FString& ParamName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UDefineFunction_SetFunctionDesc_ParamName");

	UHotfixUtility_UDefineFunction_SetFunctionDesc_ParamName_Params params;
	params.Desc = Desc;
	params.ParamIdx = ParamIdx;
	params.ParamName = ParamName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UCommonUIFunctionLibrary_GetTranslateString
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 KeyString                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UCommonUIFunctionLibrary_GetTranslateString(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UCommonUIFunctionLibrary_GetTranslateString");

	UHotfixUtility_UCommonUIFunctionLibrary_GetTranslateString_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UCommonUIFunctionLibrary_GetLocaleString
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 KeyString                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UCommonUIFunctionLibrary_GetLocaleString(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UCommonUIFunctionLibrary_GetLocaleString");

	UHotfixUtility_UCommonUIFunctionLibrary_GetLocaleString_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UColorDesc_GetLocaleName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UColorDesc*              ColorDesc                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UColorDesc_GetLocaleName(class UColorDesc* ColorDesc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UColorDesc_GetLocaleName");

	UHotfixUtility_UColorDesc_GetLocaleName_Params params;
	params.ColorDesc = ColorDesc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockySearchWidget_RefreshTabContainerView_ContentName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UUserWidget*             pThis                          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockySearchWidget_RefreshTabContainerView_ContentName(class UUserWidget* pThis)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockySearchWidget_RefreshTabContainerView_ContentName");

	UHotfixUtility_UBlockySearchWidget_RefreshTabContainerView_ContentName_Params params;
	params.pThis = pThis;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockySearchWidget_RefreshTabContainerView_CategoryName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UUserWidget*             pThis                          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBlockyCategoryItemObject* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockySearchWidget_RefreshTabContainerView_CategoryName(class UUserWidget* pThis, class UBlockyCategoryItemObject* Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockySearchWidget_RefreshTabContainerView_CategoryName");

	UHotfixUtility_UBlockySearchWidget_RefreshTabContainerView_CategoryName_Params params;
	params.pThis = pThis;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyMenuWidget_UpdateMenus_MenuWidgetName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UUserWidget*             pThis                          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBlockyMenuItemObject*   MenuItem                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockyMenuWidget_UpdateMenus_MenuWidgetName(class UUserWidget* pThis, class UBlockyMenuItemObject* MenuItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyMenuWidget_UpdateMenus_MenuWidgetName");

	UHotfixUtility_UBlockyMenuWidget_UpdateMenus_MenuWidgetName_Params params;
	params.pThis = pThis;
	params.MenuItem = MenuItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_SearchMatchingResults_ItemObjectString
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UBlockyMenuItemObject_Search* MenuItem                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UBlockyBlockListItemObject* ItemObject                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockyMenuItemObject_Search_SearchMatchingResults_ItemObjectString(class UBlockyMenuItemObject_Search* MenuItem, class UBlockyBlockListItemObject* ItemObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_SearchMatchingResults_ItemObjectString");

	UHotfixUtility_UBlockyMenuItemObject_Search_SearchMatchingResults_ItemObjectString_Params params;
	params.MenuItem = MenuItem;
	params.ItemObject = ItemObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_PaintSearchedItems_CategoryName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UBlockyMenuItemObject_Search* MenuItem                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UBlockyCategoryItemObject* CategoryItem                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockyMenuItemObject_Search_PaintSearchedItems_CategoryName(class UBlockyMenuItemObject_Search* MenuItem, class UBlockyCategoryItemObject* CategoryItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_PaintSearchedItems_CategoryName");

	UHotfixUtility_UBlockyMenuItemObject_Search_PaintSearchedItems_CategoryName_Params params;
	params.MenuItem = MenuItem;
	params.CategoryItem = CategoryItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_PaintSearchedContentTitle
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockyMenuItemObject_Search_PaintSearchedContentTitle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_PaintSearchedContentTitle");

	UHotfixUtility_UBlockyMenuItemObject_Search_PaintSearchedContentTitle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_GetBlockSearchString_NamedVarName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UNamedVar*               var                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockyMenuItemObject_Search_GetBlockSearchString_NamedVarName(class UNamedVar* var)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_GetBlockSearchString_NamedVarName");

	UHotfixUtility_UBlockyMenuItemObject_Search_GetBlockSearchString_NamedVarName_Params params;
	params.var = var;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_GetBlockSearchString_Block
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UBlockBase*              InBlock                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockyMenuItemObject_Search_GetBlockSearchString_Block(class UBlockBase* InBlock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_GetBlockSearchString_Block");

	UHotfixUtility_UBlockyMenuItemObject_Search_GetBlockSearchString_Block_Params params;
	params.InBlock = InBlock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Paint_CategoryName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UBlockyMenuItemObject*   MenuItem                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UBlockyCategoryItemObject* CategoryItem                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockyMenuItemObject_Paint_CategoryName(class UBlockyMenuItemObject* MenuItem, class UBlockyCategoryItemObject* CategoryItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Paint_CategoryName");

	UHotfixUtility_UBlockyMenuItemObject_Paint_CategoryName_Params params;
	params.MenuItem = MenuItem;
	params.CategoryItem = CategoryItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyGraphData_GetCustomNames_CustomName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UCustomConfig*           Custom                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockyGraphData_GetCustomNames_CustomName(class UCustomConfig* Custom)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyGraphData_GetCustomNames_CustomName");

	UHotfixUtility_UBlockyGraphData_GetCustomNames_CustomName_Params params;
	params.Custom = Custom;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyGraph_LoadGraphFromXnd_OnLocalVarBlockLoaded
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UBlockyGraph*            pThis                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UNamedVar*               bLock                          (Parm, ZeroConstructor, IsPlainOldData)

void UHotfixUtility::UBlockyGraph_LoadGraphFromXnd_OnLocalVarBlockLoaded(class UBlockyGraph* pThis, class UNamedVar* bLock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyGraph_LoadGraphFromXnd_OnLocalVarBlockLoaded");

	UHotfixUtility_UBlockyGraph_LoadGraphFromXnd_OnLocalVarBlockLoaded_Params params;
	params.pThis = pThis;
	params.bLock = bLock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyGraph_LoadGraphFromXnd_OnBlockLoaded
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UBlockyGraph*            pThis                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UBlockBase*              bLock                          (Parm, ZeroConstructor, IsPlainOldData)

void UHotfixUtility::UBlockyGraph_LoadGraphFromXnd_OnBlockLoaded(class UBlockyGraph* pThis, class UBlockBase* bLock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyGraph_LoadGraphFromXnd_OnBlockLoaded");

	UHotfixUtility_UBlockyGraph_LoadGraphFromXnd_OnBlockLoaded_Params params;
	params.pThis = pThis;
	params.bLock = bLock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_TypeFilterMenuName
// (RequiredAPI, Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UBlockBase*              slotHost                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 menuName                       (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockyEditor_OnClickSlot_TypeFilterMenuName(class UBlockBase* slotHost, const struct FHotFixSlotHandle& Handle, const struct FString& menuName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_TypeFilterMenuName");

	UHotfixUtility_UBlockyEditor_OnClickSlot_TypeFilterMenuName_Params params;
	params.slotHost = slotHost;
	params.Handle = Handle;
	params.menuName = menuName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_TypeFilterCategoryName
// (RequiredAPI, Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UBlockBase*              slotHost                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 CategoryName                   (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockyEditor_OnClickSlot_TypeFilterCategoryName(class UBlockBase* slotHost, const struct FHotFixSlotHandle& Handle, const struct FString& CategoryName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_TypeFilterCategoryName");

	UHotfixUtility_UBlockyEditor_OnClickSlot_TypeFilterCategoryName_Params params;
	params.slotHost = slotHost;
	params.Handle = Handle;
	params.CategoryName = CategoryName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_SelectFromSceneWidget_DefaultShowName
// (RequiredAPI, Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UBlockBase*              slotHost                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 slotCustomClickTypeName        (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockyEditor_OnClickSlot_SelectFromSceneWidget_DefaultShowName(class UBlockBase* slotHost, const struct FHotFixSlotHandle& Handle, const struct FString& slotCustomClickTypeName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_SelectFromSceneWidget_DefaultShowName");

	UHotfixUtility_UBlockyEditor_OnClickSlot_SelectFromSceneWidget_DefaultShowName_Params params;
	params.slotHost = slotHost;
	params.Handle = Handle;
	params.slotCustomClickTypeName = slotCustomClickTypeName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_EnumName
// (RequiredAPI, Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UBlockBase*              slotHost                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UEnumDesc*               EnumDesc                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   EnumName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 EnumString                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockyEditor_OnClickSlot_EnumName(class UBlockBase* slotHost, class UEnumDesc* EnumDesc, const struct FName& EnumName, const struct FString& EnumString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_EnumName");

	UHotfixUtility_UBlockyEditor_OnClickSlot_EnumName_Params params;
	params.slotHost = slotHost;
	params.EnumDesc = EnumDesc;
	params.EnumName = EnumName;
	params.EnumString = EnumString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_CategoryItemName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UBlockBase*              slotHost                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 CategoryName                   (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockyEditor_OnClickSlot_CategoryItemName(class UBlockBase* slotHost, const struct FString& CategoryName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_CategoryItemName");

	UHotfixUtility_UBlockyEditor_OnClickSlot_CategoryItemName_Params params;
	params.slotHost = slotHost;
	params.CategoryName = CategoryName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_BPMenuItemName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UBlockBase*              slotHost                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 menuName                       (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockyEditor_OnClickSlot_BPMenuItemName(class UBlockBase* slotHost, const struct FString& menuName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_BPMenuItemName");

	UHotfixUtility_UBlockyEditor_OnClickSlot_BPMenuItemName_Params params;
	params.slotHost = slotHost;
	params.menuName = menuName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyEditor_GetLocaleString
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 KeyString                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockyEditor_GetLocaleString(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyEditor_GetLocaleString");

	UHotfixUtility_UBlockyEditor_GetLocaleString_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyCategoryWidget_FilterWithBlockyMenuItem_WidgetName
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UUserWidget*             pThis                          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UBlockyCategoryItemObject* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockyCategoryWidget_FilterWithBlockyMenuItem_WidgetName(class UUserWidget* pThis, class UBlockyCategoryItemObject* Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyCategoryWidget_FilterWithBlockyMenuItem_WidgetName");

	UHotfixUtility_UBlockyCategoryWidget_FilterWithBlockyMenuItem_WidgetName_Params params;
	params.pThis = pThis;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyBlockListItemObject_Variable_GetStingUsedToSearch
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UBlockyBlockListItemObject_Variable* ItemObject                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockyBlockListItemObject_Variable_GetStingUsedToSearch(class UBlockyBlockListItemObject_Variable* ItemObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyBlockListItemObject_Variable_GetStingUsedToSearch");

	UHotfixUtility_UBlockyBlockListItemObject_Variable_GetStingUsedToSearch_Params params;
	params.ItemObject = ItemObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyBlockListItemObject_GetStingUsedToSearch
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UBlockyBlockListItemObject* ItemObject                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockyBlockListItemObject_GetStingUsedToSearch(class UBlockyBlockListItemObject* ItemObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyBlockListItemObject_GetStingUsedToSearch");

	UHotfixUtility_UBlockyBlockListItemObject_GetStingUsedToSearch_Params params;
	params.ItemObject = ItemObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.UBlockyBlockListItemObject_Custom_GetStingUsedToSearch
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UBlockyBlockListItemObject_Custom* ItemObject                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::UBlockyBlockListItemObject_Custom_GetStingUsedToSearch(class UBlockyBlockListItemObject_Custom* ItemObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyBlockListItemObject_Custom_GetStingUsedToSearch");

	UHotfixUtility_UBlockyBlockListItemObject_Custom_GetStingUsedToSearch_Params params;
	params.ItemObject = ItemObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.Slot_IsValidPreset
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UPresetDesc*             Preset                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHotfixUtility::Slot_IsValidPreset(const struct FHotFixSlotHandle& Handle, class UPresetDesc* Preset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_IsValidPreset");

	UHotfixUtility_Slot_IsValidPreset_Params params;
	params.Handle = Handle;
	params.Preset = Preset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.Slot_IsValidItem
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlockyBlockListItemObject* Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHotfixUtility::Slot_IsValidItem(const struct FHotFixSlotHandle& Handle, class UBlockyBlockListItemObject* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_IsValidItem");

	UHotfixUtility_Slot_IsValidItem_Params params;
	params.Handle = Handle;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.Slot_IsValidHandle
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHotfixUtility::Slot_IsValidHandle(const struct FHotFixSlotHandle& Handle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_IsValidHandle");

	UHotfixUtility_Slot_IsValidHandle_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.Slot_IsValidBlock
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlockBase*              blk                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHotfixUtility::Slot_IsValidBlock(const struct FHotFixSlotHandle& Handle, class UBlockBase* blk)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_IsValidBlock");

	UHotfixUtility_Slot_IsValidBlock_Params params;
	params.Handle = Handle;
	params.blk = blk;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.Slot_HasClickType
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHotfixUtility::Slot_HasClickType(const struct FHotFixSlotHandle& Handle, int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_HasClickType");

	UHotfixUtility_Slot_HasClickType_Params params;
	params.Handle = Handle;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotPresetDesc
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UPresetDesc*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPresetDesc* UHotfixUtility::Slot_GetSlotPresetDesc(const struct FHotFixSlotHandle& Handle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotPresetDesc");

	UHotfixUtility_Slot_GetSlotPresetDesc_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   OutValue                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHotfixUtility::Slot_GetSlotName(const struct FHotFixSlotHandle& Handle, struct FText* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotName");

	UHotfixUtility_Slot_GetSlotName_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotItemType
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FType                   OutValue                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHotfixUtility::Slot_GetSlotItemType(const struct FHotFixSlotHandle& Handle, struct FType* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotItemType");

	UHotfixUtility_Slot_GetSlotItemType_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotGetColorValue
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLinearColor            OutValue                       (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHotfixUtility::Slot_GetSlotGetColorValue(const struct FHotFixSlotHandle& Handle, struct FLinearColor* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotGetColorValue");

	UHotfixUtility_Slot_GetSlotGetColorValue_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotDisplayName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 OutValue                       (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHotfixUtility::Slot_GetSlotDisplayName(const struct FHotFixSlotHandle& Handle, struct FString* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotDisplayName");

	UHotfixUtility_Slot_GetSlotDisplayName_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotDefaultValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 OutValue                       (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHotfixUtility::Slot_GetSlotDefaultValue(const struct FHotFixSlotHandle& Handle, struct FString* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotDefaultValue");

	UHotfixUtility_Slot_GetSlotDefaultValue_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotCustomClickTypeName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 OutValue                       (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHotfixUtility::Slot_GetSlotCustomClickTypeName(const struct FHotFixSlotHandle& Handle, struct FString* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotCustomClickTypeName");

	UHotfixUtility_Slot_GetSlotCustomClickTypeName_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotCustomClickType
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 OutValue                       (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHotfixUtility::Slot_GetSlotCustomClickType(const struct FHotFixSlotHandle& Handle, struct FString* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotCustomClickType");

	UHotfixUtility_Slot_GetSlotCustomClickType_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotColorDesc
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UColorDesc*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UColorDesc* UHotfixUtility::Slot_GetSlotColorDesc(const struct FHotFixSlotHandle& Handle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotColorDesc");

	UHotfixUtility_Slot_GetSlotColorDesc_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.Slot_GetSlotClickType
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHotfixUtility::Slot_GetSlotClickType(const struct FHotFixSlotHandle& Handle, int* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotClickType");

	UHotfixUtility_Slot_GetSlotClickType_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.Slot_CanSetBlock
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlockBase*              Host                           (Parm, ZeroConstructor, IsPlainOldData)
// class UBlockBase*              blk                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHotfixUtility::Slot_CanSetBlock(const struct FHotFixSlotHandle& Handle, class UBlockBase* Host, class UBlockBase* blk)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_CanSetBlock");

	UHotfixUtility_Slot_CanSetBlock_Params params;
	params.Handle = Handle;
	params.Host = Host;
	params.blk = blk;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.SetTypeValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FType                   Type                           (Parm, OutParm)
// int                            NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UHotfixUtility::SetTypeValue(int NewValue, struct FType* Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.SetTypeValue");

	UHotfixUtility_SetTypeValue_Params params;
	params.NewValue = NewValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BlockyLuaCore.HotfixUtility.GetTypeValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FType                   Type                           (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHotfixUtility::GetTypeValue(const struct FType& Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.GetTypeValue");

	UHotfixUtility_GetTypeValue_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.GetTranslateString_ShowTips
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 Tip                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::GetTranslateString_ShowTips(const struct FString& Tip)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.GetTranslateString_ShowTips");

	UHotfixUtility_GetTranslateString_ShowTips_Params params;
	params.Tip = Tip;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.GetTranslateString
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 String                         (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::GetTranslateString(const struct FString& String)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.GetTranslateString");

	UHotfixUtility_GetTranslateString_Params params;
	params.String = String;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.GetDisplayNameString_SlotDisplayName
// (RequiredAPI, Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FHotFixSlotHandle       Handle                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 slotDisplayName                (Parm, ZeroConstructor)
// struct FString                 SlotName                       (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::GetDisplayNameString_SlotDisplayName(const struct FHotFixSlotHandle& Handle, const struct FString& slotDisplayName, const struct FString& SlotName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.GetDisplayNameString_SlotDisplayName");

	UHotfixUtility_GetDisplayNameString_SlotDisplayName_Params params;
	params.Handle = Handle;
	params.slotDisplayName = slotDisplayName;
	params.SlotName = SlotName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.FMsgData_CreateMessageData_InfoString_ReplaceTriggerName
// (RequiredAPI, Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UFunctionDesc*           Desc                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ListItemFormatString           (Parm, ZeroConstructor)
// struct FString                 InfoString                     (Parm, OutParm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::FMsgData_CreateMessageData_InfoString_ReplaceTriggerName(class UFunctionDesc* Desc, const struct FString& ListItemFormatString, struct FString* InfoString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.FMsgData_CreateMessageData_InfoString_ReplaceTriggerName");

	UHotfixUtility_FMsgData_CreateMessageData_InfoString_ReplaceTriggerName_Params params;
	params.Desc = Desc;
	params.ListItemFormatString = ListItemFormatString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InfoString != nullptr)
		*InfoString = params.InfoString;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.FMsgData_CreateMessageData_InfoString_ReplaceBlockName
// (RequiredAPI, Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UBlockBase*              bLock                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ListItemFormatString           (Parm, ZeroConstructor)
// struct FString                 InfoString                     (Parm, OutParm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::FMsgData_CreateMessageData_InfoString_ReplaceBlockName(class UBlockBase* bLock, const struct FString& ListItemFormatString, struct FString* InfoString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.FMsgData_CreateMessageData_InfoString_ReplaceBlockName");

	UHotfixUtility_FMsgData_CreateMessageData_InfoString_ReplaceBlockName_Params params;
	params.bLock = bLock;
	params.ListItemFormatString = ListItemFormatString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InfoString != nullptr)
		*InfoString = params.InfoString;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.FMsgData_CreateMessageData_GetInfoTranslateString
// (RequiredAPI, Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UBlockBase*              bLock                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FHotFixSlotHandle       Slot                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Info                           (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::FMsgData_CreateMessageData_GetInfoTranslateString(class UBlockBase* bLock, const struct FHotFixSlotHandle& Slot, const struct FString& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.FMsgData_CreateMessageData_GetInfoTranslateString");

	UHotfixUtility_FMsgData_CreateMessageData_GetInfoTranslateString_Params params;
	params.bLock = bLock;
	params.Slot = Slot;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_UpdateVarFormatters_SeparatorStr
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 str                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::FLocaleFormatter_UpdateVarFormatters_SeparatorStr(const struct FString& str)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_UpdateVarFormatters_SeparatorStr");

	UHotfixUtility_FLocaleFormatter_UpdateVarFormatters_SeparatorStr_Params params;
	params.str = str;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_InitializeListItemFormats_ListItemFormatString
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 ListItemFormatString           (Parm, ZeroConstructor)
// bool                           bNeedLocalization              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::FLocaleFormatter_InitializeListItemFormats_ListItemFormatString(const struct FString& ListItemFormatString, bool bNeedLocalization)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_InitializeListItemFormats_ListItemFormatString");

	UHotfixUtility_FLocaleFormatter_InitializeListItemFormats_ListItemFormatString_Params params;
	params.ListItemFormatString = ListItemFormatString;
	params.bNeedLocalization = bNeedLocalization;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_InitializeFormats_FormatString
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 FormatString                   (Parm, ZeroConstructor)
// bool                           bNeedLocalization              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::FLocaleFormatter_InitializeFormats_FormatString(const struct FString& FormatString, bool bNeedLocalization)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_InitializeFormats_FormatString");

	UHotfixUtility_FLocaleFormatter_InitializeFormats_FormatString_Params params;
	params.FormatString = FormatString;
	params.bNeedLocalization = bNeedLocalization;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_FFormatData_SlotIdx_OnPaintListItem_ParamDisplayName
// (RequiredAPI, Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UBlockyBlockListItemObject* ListItemObject                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ParamIdx                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 DisplayName                    (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::FLocaleFormatter_FFormatData_SlotIdx_OnPaintListItem_ParamDisplayName(class UBlockyBlockListItemObject* ListItemObject, int ParamIdx, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_FFormatData_SlotIdx_OnPaintListItem_ParamDisplayName");

	UHotfixUtility_FLocaleFormatter_FFormatData_SlotIdx_OnPaintListItem_ParamDisplayName_Params params;
	params.ListItemObject = ListItemObject;
	params.ParamIdx = ParamIdx;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_FFormatData_SlotIdx_OnArrangeListItem_ParamDisplayName
// (RequiredAPI, Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UBlockyBlockListItemObject* ListItemObject                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ParamIdx                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 DisplayName                    (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHotfixUtility::FLocaleFormatter_FFormatData_SlotIdx_OnArrangeListItem_ParamDisplayName(class UBlockyBlockListItemObject* ListItemObject, int ParamIdx, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_FFormatData_SlotIdx_OnArrangeListItem_ParamDisplayName");

	UHotfixUtility_FLocaleFormatter_FFormatData_SlotIdx_OnArrangeListItem_ParamDisplayName_Params params;
	params.ListItemObject = ListItemObject;
	params.ParamIdx = ParamIdx;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.IndexerOperatorExpression.SetTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        Value                          (Parm)

void UIndexerOperatorExpression::SetTarget(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IndexerOperatorExpression.SetTarget");

	UIndexerOperatorExpression_SetTarget_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.IndexerOperatorExpression.SetIndices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TArray<struct FBlockyLuaHandle> Value                          (Parm, ZeroConstructor)

void UIndexerOperatorExpression::SetIndices(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IndexerOperatorExpression.SetIndices");

	UIndexerOperatorExpression_SetIndices_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.IndexerOperatorExpression.GetTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UIndexerOperatorExpression::GetTarget(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IndexerOperatorExpression.GetTarget");

	UIndexerOperatorExpression_GetTarget_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.IndexerOperatorExpression.GetIndices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TArray<struct FBlockyLuaHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBlockyLuaHandle> UIndexerOperatorExpression::GetIndices(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IndexerOperatorExpression.GetIndices");

	UIndexerOperatorExpression_GetIndices_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.IndexerOperatorExpression.CreateIndexerOperatorExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UIndexerOperatorExpression::CreateIndexerOperatorExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IndexerOperatorExpression.CreateIndexerOperatorExpression");

	UIndexerOperatorExpression_CreateIndexerOperatorExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.NullExpression.CreateNullExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UNullExpression::CreateNullExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NullExpression.CreateNullExpression");

	UNullExpression_CreateNullExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PresetDesc.NameContainsString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 filter                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPresetDesc::NameContainsString(const struct FString& filter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PresetDesc.NameContainsString");

	UPresetDesc_NameContainsString_Params params;
	params.filter = filter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PresetDesc.IsNameEmpty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPresetDesc::IsNameEmpty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PresetDesc.IsNameEmpty");

	UPresetDesc_IsNameEmpty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PresetDesc.IsCodeNameEmpty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPresetDesc::IsCodeNameEmpty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PresetDesc.IsCodeNameEmpty");

	UPresetDesc_IsCodeNameEmpty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PresetDesc.HasIcon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPresetDesc::HasIcon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PresetDesc.HasIcon");

	UPresetDesc_HasIcon_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PresetDesc.GetType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FType                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FType UPresetDesc::GetType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PresetDesc.GetType");

	UPresetDesc_GetType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PresetDesc.GetLocaleName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPresetDesc::GetLocaleName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PresetDesc.GetLocaleName");

	UPresetDesc_GetLocaleName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PrimitiveExpression.GetValueType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TEnumAsByte<EBlockyValueType>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EBlockyValueType> UPrimitiveExpression::GetValueType(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.GetValueType");

	UPrimitiveExpression_GetValueType_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PrimitiveExpression.GetValueString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 str                            (Parm, OutParm, ZeroConstructor)

void UPrimitiveExpression::GetValueString(const struct FBlockyLuaHandle& ptr, struct FString* str)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.GetValueString");

	UPrimitiveExpression_GetValueString_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (str != nullptr)
		*str = params.str;
}


// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt8
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_UInt8(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt8");

	UPrimitiveExpression_CreatePrimitiveExpression_UInt8_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt64
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        Value                          (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_UInt64(const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt64");

	UPrimitiveExpression_CreatePrimitiveExpression_UInt64_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt32
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_UInt32(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt32");

	UPrimitiveExpression_CreatePrimitiveExpression_UInt32_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt16
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_UInt16(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt16");

	UPrimitiveExpression_CreatePrimitiveExpression_UInt16_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Str
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_Str(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Str");

	UPrimitiveExpression_CreatePrimitiveExpression_Str_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int8
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_Int8(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int8");

	UPrimitiveExpression_CreatePrimitiveExpression_Int8_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int64
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        Value                          (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_Int64(const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int64");

	UPrimitiveExpression_CreatePrimitiveExpression_Int64_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int32
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_Int32(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int32");

	UPrimitiveExpression_CreatePrimitiveExpression_Int32_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int16
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_Int16(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int16");

	UPrimitiveExpression_CreatePrimitiveExpression_Int16_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Float
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_Float(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Float");

	UPrimitiveExpression_CreatePrimitiveExpression_Float_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Double
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        Value                          (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_Double(const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Double");

	UPrimitiveExpression_CreatePrimitiveExpression_Double_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Bool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_Bool(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Bool");

	UPrimitiveExpression_CreatePrimitiveExpression_Bool_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.PrimitiveExpression.Clear
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)

void UPrimitiveExpression::Clear(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.Clear");

	UPrimitiveExpression_Clear_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.SelectionData.IsCurrentSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USelectionData::IsCurrentSlot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.SelectionData.IsCurrentSlot");

	USelectionData_IsCurrentSlot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.SelfReferenceExpression.CreateSelfReferenceExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle USelfReferenceExpression::CreateSelfReferenceExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.SelfReferenceExpression.CreateSelfReferenceExpression");

	USelfReferenceExpression_CreateSelfReferenceExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.SnippetExpression.GetSnippetString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString USnippetExpression::GetSnippetString(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.SnippetExpression.GetSnippetString");

	USnippetExpression_GetSnippetString_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.SnippetExpression.GetParameters
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TArray<struct FBlockyLuaHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBlockyLuaHandle> USnippetExpression::GetParameters(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.SnippetExpression.GetParameters");

	USnippetExpression_GetParameters_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.SnippetExpression.CreateDefaultValueExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle USnippetExpression::CreateDefaultValueExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.SnippetExpression.CreateDefaultValueExpression");

	USnippetExpression_CreateDefaultValueExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.StatementBase.SetNextExpr
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        nextExpr                       (Parm)

void UStatementBase::SetNextExpr(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& nextExpr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StatementBase.SetNextExpr");

	UStatementBase_SetNextExpr_Params params;
	params.ptr = ptr;
	params.nextExpr = nextExpr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.StatementBase.ReleaseExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)

void UStatementBase::ReleaseExpression(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StatementBase.ReleaseExpression");

	UStatementBase_ReleaseExpression_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.StatementBase.GetNextExpr
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UStatementBase::GetNextExpr(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StatementBase.GetNextExpr");

	UStatementBase_GetNextExpr_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.StatementBase.CreateStatementBase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UStatementBase::CreateStatementBase()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StatementBase.CreateStatementBase");

	UStatementBase_CreateStatementBase_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.VariableDeclaration.SetVisitMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TEnumAsByte<EBlockyVisitMode>  visitMode                      (Parm, ZeroConstructor, IsPlainOldData)

void UVariableDeclaration::SetVisitMode(const struct FBlockyLuaHandle& ptr, TEnumAsByte<EBlockyVisitMode> visitMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableDeclaration.SetVisitMode");

	UVariableDeclaration_SetVisitMode_Params params;
	params.ptr = ptr;
	params.visitMode = visitMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.VariableDeclaration.SetVariableName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 Name                           (Parm, ZeroConstructor)

void UVariableDeclaration::SetVariableName(const struct FBlockyLuaHandle& ptr, const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableDeclaration.SetVariableName");

	UVariableDeclaration_SetVariableName_Params params;
	params.ptr = ptr;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.VariableDeclaration.SetInitValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        initValue                      (Parm)

void UVariableDeclaration::SetInitValue(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& initValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableDeclaration.SetInitValue");

	UVariableDeclaration_SetInitValue_Params params;
	params.ptr = ptr;
	params.initValue = initValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.VariableDeclaration.SetComment
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        Comment                        (Parm)

void UVariableDeclaration::SetComment(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Comment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableDeclaration.SetComment");

	UVariableDeclaration_SetComment_Params params;
	params.ptr = ptr;
	params.Comment = Comment;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.VariableDeclaration.GetVisitMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TEnumAsByte<EBlockyVisitMode>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EBlockyVisitMode> UVariableDeclaration::GetVisitMode(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableDeclaration.GetVisitMode");

	UVariableDeclaration_GetVisitMode_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.VariableDeclaration.GetVariableName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVariableDeclaration::GetVariableName(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableDeclaration.GetVariableName");

	UVariableDeclaration_GetVariableName_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.VariableDeclaration.GetInitValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UVariableDeclaration::GetInitValue(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableDeclaration.GetInitValue");

	UVariableDeclaration_GetInitValue_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.VariableDeclaration.GetComment
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UVariableDeclaration::GetComment(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableDeclaration.GetComment");

	UVariableDeclaration_GetComment_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.VariableDeclaration.CreateVariableDeclaration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UVariableDeclaration::CreateVariableDeclaration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableDeclaration.CreateVariableDeclaration");

	UVariableDeclaration_CreateVariableDeclaration_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.AssignOperatorStatement.SetTo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        to                             (Parm)

void UAssignOperatorStatement::SetTo(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& to)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.AssignOperatorStatement.SetTo");

	UAssignOperatorStatement_SetTo_Params params;
	params.ptr = ptr;
	params.to = to;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.AssignOperatorStatement.SetFrom
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        from                           (Parm)

void UAssignOperatorStatement::SetFrom(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& from)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.AssignOperatorStatement.SetFrom");

	UAssignOperatorStatement_SetFrom_Params params;
	params.ptr = ptr;
	params.from = from;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.AssignOperatorStatement.GetTo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UAssignOperatorStatement::GetTo(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.AssignOperatorStatement.GetTo");

	UAssignOperatorStatement_GetTo_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.AssignOperatorStatement.GetFrom
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UAssignOperatorStatement::GetFrom(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.AssignOperatorStatement.GetFrom");

	UAssignOperatorStatement_GetFrom_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.AssignOperatorStatement.CreateAssignOperatorStatement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UAssignOperatorStatement::CreateAssignOperatorStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.AssignOperatorStatement.CreateAssignOperatorStatement");

	UAssignOperatorStatement_CreateAssignOperatorStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ExecuteSequenceStatement.SetSequence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TArray<struct FBlockyLuaHandle> Sequence                       (Parm, ZeroConstructor)

void UExecuteSequenceStatement::SetSequence(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Sequence)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExecuteSequenceStatement.SetSequence");

	UExecuteSequenceStatement_SetSequence_Params params;
	params.ptr = ptr;
	params.Sequence = Sequence;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.ExecuteSequenceStatement.GetSequence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TArray<struct FBlockyLuaHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBlockyLuaHandle> UExecuteSequenceStatement::GetSequence(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExecuteSequenceStatement.GetSequence");

	UExecuteSequenceStatement_GetSequence_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ExecuteSequenceStatement.CreateExecuteSequenceStatement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UExecuteSequenceStatement::CreateExecuteSequenceStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExecuteSequenceStatement.CreateExecuteSequenceStatement");

	UExecuteSequenceStatement_CreateExecuteSequenceStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ReturnStatement.CreateReturnStatement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UReturnStatement::CreateReturnStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ReturnStatement.CreateReturnStatement");

	UReturnStatement_CreateReturnStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.IfStatement.SetTrueStatement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        trueStatement                  (Parm)

void UIfStatement::SetTrueStatement(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& trueStatement)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IfStatement.SetTrueStatement");

	UIfStatement_SetTrueStatement_Params params;
	params.ptr = ptr;
	params.trueStatement = trueStatement;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.IfStatement.SetFalseStatement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        falseStatement                 (Parm)

void UIfStatement::SetFalseStatement(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& falseStatement)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IfStatement.SetFalseStatement");

	UIfStatement_SetFalseStatement_Params params;
	params.ptr = ptr;
	params.falseStatement = falseStatement;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.IfStatement.SetElseIfs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TArray<struct FBlockyLuaHandle> elseIfs                        (Parm, ZeroConstructor)

void UIfStatement::SetElseIfs(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> elseIfs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IfStatement.SetElseIfs");

	UIfStatement_SetElseIfs_Params params;
	params.ptr = ptr;
	params.elseIfs = elseIfs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.IfStatement.SetCondition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        Condition                      (Parm)

void UIfStatement::SetCondition(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Condition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IfStatement.SetCondition");

	UIfStatement_SetCondition_Params params;
	params.ptr = ptr;
	params.Condition = Condition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.IfStatement.GetTrueStatement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UIfStatement::GetTrueStatement(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IfStatement.GetTrueStatement");

	UIfStatement_GetTrueStatement_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.IfStatement.GetFalseStatement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UIfStatement::GetFalseStatement(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IfStatement.GetFalseStatement");

	UIfStatement_GetFalseStatement_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.IfStatement.GetElseIfs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TArray<struct FBlockyLuaHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBlockyLuaHandle> UIfStatement::GetElseIfs(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IfStatement.GetElseIfs");

	UIfStatement_GetElseIfs_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.IfStatement.GetCondition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UIfStatement::GetCondition(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IfStatement.GetCondition");

	UIfStatement_GetCondition_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.IfStatement.CreateIfStatement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UIfStatement::CreateIfStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IfStatement.CreateIfStatement");

	UIfStatement_CreateIfStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ForLoopStatement.SetStepExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        stepExpression                 (Parm)

void UForLoopStatement::SetStepExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& stepExpression)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.SetStepExpression");

	UForLoopStatement_SetStepExpression_Params params;
	params.ptr = ptr;
	params.stepExpression = stepExpression;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.ForLoopStatement.SetLoopIndexName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 loopIndexName                  (Parm, ZeroConstructor)

void UForLoopStatement::SetLoopIndexName(const struct FBlockyLuaHandle& ptr, const struct FString& loopIndexName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.SetLoopIndexName");

	UForLoopStatement_SetLoopIndexName_Params params;
	params.ptr = ptr;
	params.loopIndexName = loopIndexName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.ForLoopStatement.SetLoopBody
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        loopBody                       (Parm)

void UForLoopStatement::SetLoopBody(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& loopBody)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.SetLoopBody");

	UForLoopStatement_SetLoopBody_Params params;
	params.ptr = ptr;
	params.loopBody = loopBody;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.ForLoopStatement.SetEndExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        endExpression                  (Parm)

void UForLoopStatement::SetEndExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& endExpression)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.SetEndExpression");

	UForLoopStatement_SetEndExpression_Params params;
	params.ptr = ptr;
	params.endExpression = endExpression;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.ForLoopStatement.SetBeginExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        beginExpression                (Parm)

void UForLoopStatement::SetBeginExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& beginExpression)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.SetBeginExpression");

	UForLoopStatement_SetBeginExpression_Params params;
	params.ptr = ptr;
	params.beginExpression = beginExpression;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.ForLoopStatement.GetStepExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UForLoopStatement::GetStepExpression(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.GetStepExpression");

	UForLoopStatement_GetStepExpression_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ForLoopStatement.GetLoopIndexName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UForLoopStatement::GetLoopIndexName(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.GetLoopIndexName");

	UForLoopStatement_GetLoopIndexName_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ForLoopStatement.GetLoopBody
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UForLoopStatement::GetLoopBody(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.GetLoopBody");

	UForLoopStatement_GetLoopBody_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ForLoopStatement.GetEndExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UForLoopStatement::GetEndExpression(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.GetEndExpression");

	UForLoopStatement_GetEndExpression_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ForLoopStatement.GetBeginExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UForLoopStatement::GetBeginExpression(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.GetBeginExpression");

	UForLoopStatement_GetBeginExpression_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ForLoopStatement.CreateForLoopStatement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UForLoopStatement::CreateForLoopStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.CreateForLoopStatement");

	UForLoopStatement_CreateForLoopStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ForeachLoopStatement.SetLoopItemName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 loopIndexName                  (Parm, ZeroConstructor)

void UForeachLoopStatement::SetLoopItemName(const struct FBlockyLuaHandle& ptr, const struct FString& loopIndexName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForeachLoopStatement.SetLoopItemName");

	UForeachLoopStatement_SetLoopItemName_Params params;
	params.ptr = ptr;
	params.loopIndexName = loopIndexName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.ForeachLoopStatement.SetLoopItemExp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        loopItemExp                    (Parm)

void UForeachLoopStatement::SetLoopItemExp(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& loopItemExp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForeachLoopStatement.SetLoopItemExp");

	UForeachLoopStatement_SetLoopItemExp_Params params;
	params.ptr = ptr;
	params.loopItemExp = loopItemExp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.ForeachLoopStatement.SetLoopIndexName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 loopIndexName                  (Parm, ZeroConstructor)

void UForeachLoopStatement::SetLoopIndexName(const struct FBlockyLuaHandle& ptr, const struct FString& loopIndexName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForeachLoopStatement.SetLoopIndexName");

	UForeachLoopStatement_SetLoopIndexName_Params params;
	params.ptr = ptr;
	params.loopIndexName = loopIndexName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.ForeachLoopStatement.SetLoopBody
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        loopBody                       (Parm)

void UForeachLoopStatement::SetLoopBody(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& loopBody)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForeachLoopStatement.SetLoopBody");

	UForeachLoopStatement_SetLoopBody_Params params;
	params.ptr = ptr;
	params.loopBody = loopBody;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.ForeachLoopStatement.GetLoopItemName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UForeachLoopStatement::GetLoopItemName(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForeachLoopStatement.GetLoopItemName");

	UForeachLoopStatement_GetLoopItemName_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ForeachLoopStatement.GetLoopItemExp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UForeachLoopStatement::GetLoopItemExp(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForeachLoopStatement.GetLoopItemExp");

	UForeachLoopStatement_GetLoopItemExp_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ForeachLoopStatement.GetLoopIndexName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UForeachLoopStatement::GetLoopIndexName(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForeachLoopStatement.GetLoopIndexName");

	UForeachLoopStatement_GetLoopIndexName_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ForeachLoopStatement.GetLoopBody
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UForeachLoopStatement::GetLoopBody(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForeachLoopStatement.GetLoopBody");

	UForeachLoopStatement_GetLoopBody_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ForeachLoopStatement.CreateForeachLoopStatement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UForeachLoopStatement::CreateForeachLoopStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForeachLoopStatement.CreateForeachLoopStatement");

	UForeachLoopStatement_CreateForeachLoopStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.WhileLoopStatement.SetLoopBody
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        loopBody                       (Parm)

void UWhileLoopStatement::SetLoopBody(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& loopBody)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.WhileLoopStatement.SetLoopBody");

	UWhileLoopStatement_SetLoopBody_Params params;
	params.ptr = ptr;
	params.loopBody = loopBody;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.WhileLoopStatement.SetCondition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        Condition                      (Parm)

void UWhileLoopStatement::SetCondition(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Condition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.WhileLoopStatement.SetCondition");

	UWhileLoopStatement_SetCondition_Params params;
	params.ptr = ptr;
	params.Condition = Condition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.WhileLoopStatement.GetLoopBody
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UWhileLoopStatement::GetLoopBody(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.WhileLoopStatement.GetLoopBody");

	UWhileLoopStatement_GetLoopBody_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.WhileLoopStatement.GetCondition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UWhileLoopStatement::GetCondition(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.WhileLoopStatement.GetCondition");

	UWhileLoopStatement_GetCondition_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.WhileLoopStatement.CreateWhileLoopStatement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UWhileLoopStatement::CreateWhileLoopStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.WhileLoopStatement.CreateWhileLoopStatement");

	UWhileLoopStatement_CreateWhileLoopStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ContinueStatement.CreateContinueStatement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UContinueStatement::CreateContinueStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ContinueStatement.CreateContinueStatement");

	UContinueStatement_CreateContinueStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.BreakStatement.CreateBreakStatement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UBreakStatement::CreateBreakStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BreakStatement.CreateBreakStatement");

	UBreakStatement_CreateBreakStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommentStatement.SetNewLine
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// bool                           newLine                        (Parm, ZeroConstructor, IsPlainOldData)

void UCommentStatement::SetNewLine(const struct FBlockyLuaHandle& ptr, bool newLine)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommentStatement.SetNewLine");

	UCommentStatement_SetNewLine_Params params;
	params.ptr = ptr;
	params.newLine = newLine;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.CommentStatement.SetCommentString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 commentString                  (Parm, ZeroConstructor)

void UCommentStatement::SetCommentString(const struct FBlockyLuaHandle& ptr, const struct FString& commentString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommentStatement.SetCommentString");

	UCommentStatement_SetCommentString_Params params;
	params.ptr = ptr;
	params.commentString = commentString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.CommentStatement.GetNewLine
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommentStatement::GetNewLine(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommentStatement.GetNewLine");

	UCommentStatement_GetNewLine_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommentStatement.GetCommentString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCommentStatement::GetCommentString(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommentStatement.GetCommentString");

	UCommentStatement_GetCommentString_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.CommentStatement.CreateCommentStatement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UCommentStatement::CreateCommentStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommentStatement.CreateCommentStatement");

	UCommentStatement_CreateCommentStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ExpressionStatement.SetNextStatement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        nextStatement                  (Parm)

void UExpressionStatement::SetNextStatement(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& nextStatement)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExpressionStatement.SetNextStatement");

	UExpressionStatement_SetNextStatement_Params params;
	params.ptr = ptr;
	params.nextStatement = nextStatement;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.ExpressionStatement.SetExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        expression                     (Parm)

void UExpressionStatement::SetExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& expression)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExpressionStatement.SetExpression");

	UExpressionStatement_SetExpression_Params params;
	params.ptr = ptr;
	params.expression = expression;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.ExpressionStatement.GetNextStatement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UExpressionStatement::GetNextStatement(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExpressionStatement.GetNextStatement");

	UExpressionStatement_GetNextStatement_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ExpressionStatement.GetExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UExpressionStatement::GetExpression(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExpressionStatement.GetExpression");

	UExpressionStatement_GetExpression_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.ExpressionStatement.CreateExpressionStatement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UExpressionStatement::CreateExpressionStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExpressionStatement.CreateExpressionStatement");

	UExpressionStatement_CreateExpressionStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.StringAppendExpression.SetRight
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        Value                          (Parm)

void UStringAppendExpression::SetRight(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StringAppendExpression.SetRight");

	UStringAppendExpression_SetRight_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.StringAppendExpression.SetLeft
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        Value                          (Parm)

void UStringAppendExpression::SetLeft(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StringAppendExpression.SetLeft");

	UStringAppendExpression_SetLeft_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.StringAppendExpression.SetExtras
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TArray<struct FBlockyLuaHandle> Value                          (Parm, ZeroConstructor)

void UStringAppendExpression::SetExtras(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StringAppendExpression.SetExtras");

	UStringAppendExpression_SetExtras_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.StringAppendExpression.GetRight
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UStringAppendExpression::GetRight(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StringAppendExpression.GetRight");

	UStringAppendExpression_GetRight_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.StringAppendExpression.GetLeft
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UStringAppendExpression::GetLeft(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StringAppendExpression.GetLeft");

	UStringAppendExpression_GetLeft_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.StringAppendExpression.GetExtras
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TArray<struct FBlockyLuaHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBlockyLuaHandle> UStringAppendExpression::GetExtras(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StringAppendExpression.GetExtras");

	UStringAppendExpression_GetExtras_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.StringAppendExpression.CreateStringAppendExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UStringAppendExpression::CreateStringAppendExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StringAppendExpression.CreateStringAppendExpression");

	UStringAppendExpression_CreateStringAppendExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.TypeReference.SetTypeName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        Self                           (Parm)
// struct FString                 Name                           (Parm, ZeroConstructor)

void UTypeReference::SetTypeName(const struct FBlockyLuaHandle& Self, const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.TypeReference.SetTypeName");

	UTypeReference_SetTypeName_Params params;
	params.Self = Self;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.TypeReference.ReleaseTypeReference
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        Self                           (Parm)

void UTypeReference::ReleaseTypeReference(const struct FBlockyLuaHandle& Self)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.TypeReference.ReleaseTypeReference");

	UTypeReference_ReleaseTypeReference_Params params;
	params.Self = Self;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.TypeReference.GetTypeName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        Self                           (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UTypeReference::GetTypeName(const struct FBlockyLuaHandle& Self)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.TypeReference.GetTypeName");

	UTypeReference_GetTypeName_Params params;
	params.Self = Self;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.TypeReference.FindClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UTypeReference::FindClass(const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.TypeReference.FindClass");

	UTypeReference_FindClass_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.TypeReference.CreateTypeReference3
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        klass                          (Parm)
// int                            numOfPointer                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isRefer                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UTypeReference::CreateTypeReference3(const struct FBlockyLuaHandle& klass, int numOfPointer, bool isRefer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.TypeReference.CreateTypeReference3");

	UTypeReference_CreateTypeReference3_Params params;
	params.klass = klass;
	params.numOfPointer = numOfPointer;
	params.isRefer = isRefer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.TypeReference.CreateTypeReference
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UTypeReference::CreateTypeReference()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.TypeReference.CreateTypeReference");

	UTypeReference_CreateTypeReference_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.TypeReference.AsStub
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaStub          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaStub UTypeReference::AsStub(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.TypeReference.AsStub");

	UTypeReference_AsStub_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.UnaryOperatorExpression.SetValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        Value                          (Parm)

void UUnaryOperatorExpression::SetValue(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.UnaryOperatorExpression.SetValue");

	UUnaryOperatorExpression_SetValue_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.UnaryOperatorExpression.SetOperation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TEnumAsByte<EBlockyUnaryOperation> Op                             (Parm, ZeroConstructor, IsPlainOldData)

void UUnaryOperatorExpression::SetOperation(const struct FBlockyLuaHandle& ptr, TEnumAsByte<EBlockyUnaryOperation> Op)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.UnaryOperatorExpression.SetOperation");

	UUnaryOperatorExpression_SetOperation_Params params;
	params.ptr = ptr;
	params.Op = Op;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.UnaryOperatorExpression.GetValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UUnaryOperatorExpression::GetValue(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.UnaryOperatorExpression.GetValue");

	UUnaryOperatorExpression_GetValue_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.UnaryOperatorExpression.GetOperation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// TEnumAsByte<EBlockyUnaryOperation> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EBlockyUnaryOperation> UUnaryOperatorExpression::GetOperation(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.UnaryOperatorExpression.GetOperation");

	UUnaryOperatorExpression_GetOperation_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.UnaryOperatorExpression.CreateUnaryOperatorExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UUnaryOperatorExpression::CreateUnaryOperatorExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.UnaryOperatorExpression.CreateUnaryOperatorExpression");

	UUnaryOperatorExpression_CreateUnaryOperatorExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.VarDefiner.SetType
// (Final, Native, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FType                   Value                          (ConstParm, Parm, OutParm, ReferenceParm)

void UVarDefiner::SetType(const struct FType& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VarDefiner.SetType");

	UVarDefiner_SetType_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.VarDefiner.GetVarTypeEnum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EBlockyVariableType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EBlockyVariableType> UVarDefiner::GetVarTypeEnum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VarDefiner.GetVarTypeEnum");

	UVarDefiner_GetVarTypeEnum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.VarDefiner.GetTypeEnum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EBlockyListItemType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EBlockyListItemType> UVarDefiner::GetTypeEnum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VarDefiner.GetTypeEnum");

	UVarDefiner_GetTypeEnum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.VarDefiner.GetType
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FType                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FType UVarDefiner::GetType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VarDefiner.GetType");

	UVarDefiner_GetType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.VarDefiner.GetFirstShowName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVarDefiner::GetFirstShowName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VarDefiner.GetFirstShowName");

	UVarDefiner_GetFirstShowName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.VarDefiner.GetCurrentLocateShowName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVarDefiner::GetCurrentLocateShowName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VarDefiner.GetCurrentLocateShowName");

	UVarDefiner_GetCurrentLocateShowName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.VariableReferenceExpression.SetVariableName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 Name                           (Parm, ZeroConstructor)

void UVariableReferenceExpression::SetVariableName(const struct FBlockyLuaHandle& ptr, const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableReferenceExpression.SetVariableName");

	UVariableReferenceExpression_SetVariableName_Params params;
	params.ptr = ptr;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.VariableReferenceExpression.SetHost
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        Host                           (Parm)

void UVariableReferenceExpression::SetHost(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Host)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableReferenceExpression.SetHost");

	UVariableReferenceExpression_SetHost_Params params;
	params.ptr = ptr;
	params.Host = Host;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function BlockyLuaCore.VariableReferenceExpression.GetVariableName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVariableReferenceExpression::GetVariableName(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableReferenceExpression.GetVariableName");

	UVariableReferenceExpression_GetVariableName_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.VariableReferenceExpression.GetHost
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        ptr                            (Parm)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UVariableReferenceExpression::GetHost(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableReferenceExpression.GetHost");

	UVariableReferenceExpression_GetHost_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.VariableReferenceExpression.CreateVariableReferenceExpression2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FBlockyLuaHandle        Host                           (Parm)
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UVariableReferenceExpression::CreateVariableReferenceExpression2(const struct FBlockyLuaHandle& Host, const struct FString& VariableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableReferenceExpression.CreateVariableReferenceExpression2");

	UVariableReferenceExpression_CreateVariableReferenceExpression2_Params params;
	params.Host = Host;
	params.VariableName = VariableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BlockyLuaCore.VariableReferenceExpression.CreateVariableReferenceExpression
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// struct FBlockyLuaHandle        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBlockyLuaHandle UVariableReferenceExpression::CreateVariableReferenceExpression(const struct FString& VariableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableReferenceExpression.CreateVariableReferenceExpression");

	UVariableReferenceExpression_CreateVariableReferenceExpression_Params params;
	params.VariableName = VariableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

