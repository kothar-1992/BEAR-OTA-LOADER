// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PandoraVideoPlayer.BP_PixVideoLibrary.CreatePlayerWidget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUserWidget* UBP_PixVideoLibrary::CreatePlayerWidget(const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.BP_PixVideoLibrary.CreatePlayerWidget");

	UBP_PixVideoLibrary_CreatePlayerWidget_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction PandoraVideoPlayer.PVideoImage.VideoPlayerEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            EventCode                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            nParam1                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            nParam2                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 strMsg                         (Parm, ZeroConstructor)

void UPVideoImage::VideoPlayerEvent__DelegateSignature(int EventCode, int nParam1, int nParam2, const struct FString& strMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction PandoraVideoPlayer.PVideoImage.VideoPlayerEvent__DelegateSignature");

	UPVideoImage_VideoPlayerEvent__DelegateSignature_Params params;
	params.EventCode = EventCode;
	params.nParam1 = nParam1;
	params.nParam2 = nParam2;
	params.strMsg = strMsg;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoImage.UseFileDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoImage::UseFileDelegate(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.UseFileDelegate");

	UPVideoImage_UseFileDelegate_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoImage.Update
// (Final, Native, Public, BlueprintCallable)

void UPVideoImage::Update()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.Update");

	UPVideoImage_Update_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoImage.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nVolume                        (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoImage::SetVolume(int nVolume)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetVolume");

	UPVideoImage_SetVolume_Params params;
	params.nVolume = nVolume;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoImage.SetVideoAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          FAlpha                         (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoImage::SetVideoAlpha(float FAlpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetVideoAlpha");

	UPVideoImage_SetVideoAlpha_Params params;
	params.FAlpha = FAlpha;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoImage.SetStopAsyn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            stopAsyn                       (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoImage::SetStopAsyn(int stopAsyn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetStopAsyn");

	UPVideoImage_SetStopAsyn_Params params;
	params.stopAsyn = stopAsyn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoImage.SetRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          nRate                          (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoImage::SetRate(float nRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetRate");

	UPVideoImage_SetRate_Params params;
	params.nRate = nRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoImage.SetOnlyPlayType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoImage::SetOnlyPlayType(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetOnlyPlayType");

	UPVideoImage_SetOnlyPlayType_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoImage.SetNextVideo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strUrl                         (Parm, ZeroConstructor)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoImage::SetNextVideo(const struct FString& strUrl, bool bLoop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetNextVideo");

	UPVideoImage_SetNextVideo_Params params;
	params.strUrl = strUrl;
	params.bLoop = bLoop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoImage.SetNeedVideoTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           needVideoTexture               (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoImage::SetNeedVideoTexture(bool needVideoTexture)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetNeedVideoTexture");

	UPVideoImage_SetNeedVideoTexture_Params params;
	params.needVideoTexture = needVideoTexture;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoImage.SetNeedPlayAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           needPlayAudio                  (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoImage::SetNeedPlayAudio(bool needPlayAudio)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetNeedPlayAudio");

	UPVideoImage_SetNeedPlayAudio_Params params;
	params.needPlayAudio = needPlayAudio;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoImage.SetDecryptionKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 decryptionKey                  (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPVideoImage::SetDecryptionKey(const struct FString& decryptionKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetDecryptionKey");

	UPVideoImage_SetDecryptionKey_Params params;
	params.decryptionKey = decryptionKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoImage.SetDataUpdateCallback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UPVideoPlayerInterface> dataUpdateInterface            (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoImage::SetDataUpdateCallback(const TScriptInterface<class UPVideoPlayerInterface>& dataUpdateInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetDataUpdateCallback");

	UPVideoImage_SetDataUpdateCallback_Params params;
	params.dataUpdateInterface = dataUpdateInterface;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoImage.SetAutoPlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           doAutoPlay                     (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoImage::SetAutoPlay(bool doAutoPlay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetAutoPlay");

	UPVideoImage_SetAutoPlay_Params params;
	params.doAutoPlay = doAutoPlay;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoImage.SeekMs
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            millisec                       (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoImage::SeekMs(int millisec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SeekMs");

	UPVideoImage_SeekMs_Params params;
	params.millisec = millisec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoImage.SeekAndPause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nMilliSec                      (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoImage::SeekAndPause(int nMilliSec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SeekAndPause");

	UPVideoImage_SeekAndPause_Params params;
	params.nMilliSec = nMilliSec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoImage.Seek
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nSecond                        (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoImage::Seek(int nSecond)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.Seek");

	UPVideoImage_Seek_Params params;
	params.nSecond = nSecond;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoImage.Resume
// (Final, Native, Public, BlueprintCallable)

void UPVideoImage::Resume()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.Resume");

	UPVideoImage_Resume_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoImage.PlayWithFd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nFd                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPVideoImage::PlayWithFd(int nFd, bool bLoop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.PlayWithFd");

	UPVideoImage_PlayWithFd_Params params;
	params.nFd = nFd;
	params.bLoop = bLoop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoImage.PlayOnceAndLoopBetween
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strUrl                         (Parm, ZeroConstructor)
// int                            nStartMs                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            nEndMs                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPVideoImage::PlayOnceAndLoopBetween(const struct FString& strUrl, int nStartMs, int nEndMs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.PlayOnceAndLoopBetween");

	UPVideoImage_PlayOnceAndLoopBetween_Params params;
	params.strUrl = strUrl;
	params.nStartMs = nStartMs;
	params.nEndMs = nEndMs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoImage.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strUrl                         (Parm, ZeroConstructor)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPVideoImage::Play(const struct FString& strUrl, bool bLoop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.Play");

	UPVideoImage_Play_Params params;
	params.strUrl = strUrl;
	params.bLoop = bLoop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoImage.Pause
// (Final, Native, Public, BlueprintCallable)

void UPVideoImage::Pause()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.Pause");

	UPVideoImage_Pause_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoImage.IsTextureUpdated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPVideoImage::IsTextureUpdated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.IsTextureUpdated");

	UPVideoImage_IsTextureUpdated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoImage.IsPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPVideoImage::IsPlaying()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.IsPlaying");

	UPVideoImage_IsPlaying_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoImage.IsPause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPVideoImage::IsPause()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.IsPause");

	UPVideoImage_IsPause_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoImage.IsAlphaVideo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPVideoImage::IsAlphaVideo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.IsAlphaVideo");

	UPVideoImage_IsAlphaVideo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoImage.GetYUVFormat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPVideoImage::GetYUVFormat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetYUVFormat");

	UPVideoImage_GetYUVFormat_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoImage.GetVideoTime
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          fCurTime                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          fTotalTime                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPVideoImage::GetVideoTime(float* fCurTime, float* fTotalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetVideoTime");

	UPVideoImage_GetVideoTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (fCurTime != nullptr)
		*fCurTime = params.fCurTime;
	if (fTotalTime != nullptr)
		*fTotalTime = params.fTotalTime;
}


// Function PandoraVideoPlayer.PVideoImage.GetVideoTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nIdx                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UPVideoImage::GetVideoTexture(int nIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetVideoTexture");

	UPVideoImage_GetVideoTexture_Params params;
	params.nIdx = nIdx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoImage.GetVideoAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPVideoImage::GetVideoAlpha()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetVideoAlpha");

	UPVideoImage_GetVideoAlpha_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoImage.GetRgbParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UPVideoImage::GetRgbParameter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetRgbParameter");

	UPVideoImage_GetRgbParameter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoImage.GetResolution
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            nWidth                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            nHeight                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPVideoImage::GetResolution(int* nWidth, int* nHeight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetResolution");

	UPVideoImage_GetResolution_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (nWidth != nullptr)
		*nWidth = params.nWidth;
	if (nHeight != nullptr)
		*nHeight = params.nHeight;
}


// Function PandoraVideoPlayer.PVideoImage.GetPlayStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPVideoImage::GetPlayStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetPlayStatus");

	UPVideoImage_GetPlayStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoImage.GetMediaType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPVideoImage::GetMediaType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetMediaType");

	UPVideoImage_GetMediaType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoImage.GetDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPVideoImage::GetDuration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetDuration");

	UPVideoImage_GetDuration_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoImage.GetCurrentPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPVideoImage::GetCurrentPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetCurrentPosition");

	UPVideoImage_GetCurrentPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoImage.GetAlphaParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UPVideoImage::GetAlphaParameter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetAlphaParameter");

	UPVideoImage_GetAlphaParameter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoImage.EnableCacheResource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 cachePath                      (Parm, ZeroConstructor)

void UPVideoImage::EnableCacheResource(bool bEnable, const struct FString& cachePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.EnableCacheResource");

	UPVideoImage_EnableCacheResource_Params params;
	params.bEnable = bEnable;
	params.cachePath = cachePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoImage.Close
// (Final, Native, Public, BlueprintCallable)

void UPVideoImage::Close()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.Close");

	UPVideoImage_Close_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayerInterface.OnAudioDataUpdateCallback
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<unsigned char>          AudioData                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Size                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Samples                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Channels                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            sample_rate                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          clock                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPVideoPlayerInterface::OnAudioDataUpdateCallback(TArray<unsigned char> AudioData, int Size, int Samples, int Channels, int sample_rate, float clock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayerInterface.OnAudioDataUpdateCallback");

	UPVideoPlayerInterface_OnAudioDataUpdateCallback_Params params;
	params.AudioData = AudioData;
	params.Size = Size;
	params.Samples = Samples;
	params.Channels = Channels;
	params.sample_rate = sample_rate;
	params.clock = clock;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoPlayer.UseFileDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoPlayer::UseFileDelegate(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.UseFileDelegate");

	UPVideoPlayer_UseFileDelegate_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.Update
// (Final, Native, Public, BlueprintCallable)

void UPVideoPlayer::Update()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.Update");

	UPVideoPlayer_Update_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nVolume                        (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoPlayer::SetVolume(int nVolume)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetVolume");

	UPVideoPlayer_SetVolume_Params params;
	params.nVolume = nVolume;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.SetVideoAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          FAlpha                         (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoPlayer::SetVideoAlpha(float FAlpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetVideoAlpha");

	UPVideoPlayer_SetVideoAlpha_Params params;
	params.FAlpha = FAlpha;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.SetStopAsyn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            stopAsyn                       (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoPlayer::SetStopAsyn(int stopAsyn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetStopAsyn");

	UPVideoPlayer_SetStopAsyn_Params params;
	params.stopAsyn = stopAsyn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.SetRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          nRate                          (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoPlayer::SetRate(float nRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetRate");

	UPVideoPlayer_SetRate_Params params;
	params.nRate = nRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.SetOnlyPlayType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoPlayer::SetOnlyPlayType(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetOnlyPlayType");

	UPVideoPlayer_SetOnlyPlayType_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.SetNextVideo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strUrl                         (Parm, ZeroConstructor)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoPlayer::SetNextVideo(const struct FString& strUrl, bool bLoop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetNextVideo");

	UPVideoPlayer_SetNextVideo_Params params;
	params.strUrl = strUrl;
	params.bLoop = bLoop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.SetNeedVideoTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNeedVideoTexture              (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoPlayer::SetNeedVideoTexture(bool bNeedVideoTexture)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetNeedVideoTexture");

	UPVideoPlayer_SetNeedVideoTexture_Params params;
	params.bNeedVideoTexture = bNeedVideoTexture;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.SetNeedPlayAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNeedPlayAudio                 (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoPlayer::SetNeedPlayAudio(bool bNeedPlayAudio)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetNeedPlayAudio");

	UPVideoPlayer_SetNeedPlayAudio_Params params;
	params.bNeedPlayAudio = bNeedPlayAudio;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.SetHardwareDecodec
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bHareware                      (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoPlayer::SetHardwareDecodec(bool bHareware)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetHardwareDecodec");

	UPVideoPlayer_SetHardwareDecodec_Params params;
	params.bHareware = bHareware;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.SetDecryptionKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 decryptionKey                  (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPVideoPlayer::SetDecryptionKey(const struct FString& decryptionKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetDecryptionKey");

	UPVideoPlayer_SetDecryptionKey_Params params;
	params.decryptionKey = decryptionKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoPlayer.SetDataUpdateCallback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UPVideoPlayerInterface> dataUpdateInterface            (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoPlayer::SetDataUpdateCallback(const TScriptInterface<class UPVideoPlayerInterface>& dataUpdateInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetDataUpdateCallback");

	UPVideoPlayer_SetDataUpdateCallback_Params params;
	params.dataUpdateInterface = dataUpdateInterface;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.SetCachePacketSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            nSizeMb                        (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoPlayer::SetCachePacketSize(int nSizeMb)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetCachePacketSize");

	UPVideoPlayer_SetCachePacketSize_Params params;
	params.nSizeMb = nSizeMb;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.SetAutoPlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAutoPlay                      (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoPlayer::SetAutoPlay(bool bAutoPlay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetAutoPlay");

	UPVideoPlayer_SetAutoPlay_Params params;
	params.bAutoPlay = bAutoPlay;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.SeekMs
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            millisec                       (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoPlayer::SeekMs(int millisec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SeekMs");

	UPVideoPlayer_SeekMs_Params params;
	params.millisec = millisec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.SeekAndPause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nMilliSec                      (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoPlayer::SeekAndPause(int nMilliSec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SeekAndPause");

	UPVideoPlayer_SeekAndPause_Params params;
	params.nMilliSec = nMilliSec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.Seek
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nSecond                        (Parm, ZeroConstructor, IsPlainOldData)

void UPVideoPlayer::Seek(int nSecond)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.Seek");

	UPVideoPlayer_Seek_Params params;
	params.nSecond = nSecond;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.Resume
// (Final, Native, Public, BlueprintCallable)

void UPVideoPlayer::Resume()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.Resume");

	UPVideoPlayer_Resume_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.PlayOnceAndLoopBetween
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strUrl                         (Parm, ZeroConstructor)
// int                            nStartMs                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            nEndMs                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPVideoPlayer::PlayOnceAndLoopBetween(const struct FString& strUrl, int nStartMs, int nEndMs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.PlayOnceAndLoopBetween");

	UPVideoPlayer_PlayOnceAndLoopBetween_Params params;
	params.strUrl = strUrl;
	params.nStartMs = nStartMs;
	params.nEndMs = nEndMs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoPlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strUrl                         (Parm, ZeroConstructor)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPVideoPlayer::Play(const struct FString& strUrl, bool bLoop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.Play");

	UPVideoPlayer_Play_Params params;
	params.strUrl = strUrl;
	params.bLoop = bLoop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoPlayer.Pause
// (Final, Native, Public, BlueprintCallable)

void UPVideoPlayer::Pause()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.Pause");

	UPVideoPlayer_Pause_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction PandoraVideoPlayer.PVideoPlayer.MediaPlayerEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            EventCode                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            nParam1                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            nParam2                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 strMsg                         (Parm, ZeroConstructor)

void UPVideoPlayer::MediaPlayerEvent__DelegateSignature(int EventCode, int nParam1, int nParam2, const struct FString& strMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction PandoraVideoPlayer.PVideoPlayer.MediaPlayerEvent__DelegateSignature");

	UPVideoPlayer_MediaPlayerEvent__DelegateSignature_Params params;
	params.EventCode = EventCode;
	params.nParam1 = nParam1;
	params.nParam2 = nParam2;
	params.strMsg = strMsg;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.IsTextureUpdated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPVideoPlayer::IsTextureUpdated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.IsTextureUpdated");

	UPVideoPlayer_IsTextureUpdated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoPlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPVideoPlayer::IsPlaying()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.IsPlaying");

	UPVideoPlayer_IsPlaying_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoPlayer.IsPause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPVideoPlayer::IsPause()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.IsPause");

	UPVideoPlayer_IsPause_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoPlayer.IsAlphaVideo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPVideoPlayer::IsAlphaVideo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.IsAlphaVideo");

	UPVideoPlayer_IsAlphaVideo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoPlayer.GetYUVFormat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPVideoPlayer::GetYUVFormat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetYUVFormat");

	UPVideoPlayer_GetYUVFormat_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoPlayer.GetVideoTime
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          fCurTime                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          fTotalTime                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPVideoPlayer::GetVideoTime(float* fCurTime, float* fTotalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetVideoTime");

	UPVideoPlayer_GetVideoTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (fCurTime != nullptr)
		*fCurTime = params.fCurTime;
	if (fTotalTime != nullptr)
		*fTotalTime = params.fTotalTime;
}


// Function PandoraVideoPlayer.PVideoPlayer.GetVideoTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nIdx                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UPVideoPlayer::GetVideoTexture(int nIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetVideoTexture");

	UPVideoPlayer_GetVideoTexture_Params params;
	params.nIdx = nIdx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoPlayer.GetVideoAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPVideoPlayer::GetVideoAlpha()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetVideoAlpha");

	UPVideoPlayer_GetVideoAlpha_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoPlayer.GetRgbParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FLinearColor UPVideoPlayer::GetRgbParameter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetRgbParameter");

	UPVideoPlayer_GetRgbParameter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoPlayer.GetResolution
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            nWidth                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            nHeight                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPVideoPlayer::GetResolution(int* nWidth, int* nHeight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetResolution");

	UPVideoPlayer_GetResolution_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (nWidth != nullptr)
		*nWidth = params.nWidth;
	if (nHeight != nullptr)
		*nHeight = params.nHeight;
}


// Function PandoraVideoPlayer.PVideoPlayer.GetRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPVideoPlayer::GetRate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetRate");

	UPVideoPlayer_GetRate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoPlayer.GetPlayStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPVideoPlayer::GetPlayStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetPlayStatus");

	UPVideoPlayer_GetPlayStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoPlayer.GetMediaType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPVideoPlayer::GetMediaType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetMediaType");

	UPVideoPlayer_GetMediaType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoPlayer.GetDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPVideoPlayer::GetDuration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetDuration");

	UPVideoPlayer_GetDuration_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoPlayer.GetCurrentPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPVideoPlayer::GetCurrentPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetCurrentPosition");

	UPVideoPlayer_GetCurrentPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoPlayer.GetAlphaParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FLinearColor UPVideoPlayer::GetAlphaParameter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetAlphaParameter");

	UPVideoPlayer_GetAlphaParameter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.PVideoPlayer.EnableCacheResource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 cachePath                      (Parm, ZeroConstructor)

void UPVideoPlayer::EnableCacheResource(bool bEnable, const struct FString& cachePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.EnableCacheResource");

	UPVideoPlayer_EnableCacheResource_Params params;
	params.bEnable = bEnable;
	params.cachePath = cachePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.Close
// (Final, Native, Public, BlueprintCallable)

void UPVideoPlayer::Close()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.Close");

	UPVideoPlayer_Close_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.ClearCacheResource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 cachePath                      (Parm, ZeroConstructor)

void UPVideoPlayer::ClearCacheResource(const struct FString& cachePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.ClearCacheResource");

	UPVideoPlayer_ClearCacheResource_Params params;
	params.cachePath = cachePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.BlueTick
// (Event, Public, BlueprintEvent)

void UPVideoPlayer::BlueTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.BlueTick");

	UPVideoPlayer_BlueTick_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.PVideoPlayer.BeginPlay
// (Event, Public, BlueprintEvent)

void UPVideoPlayer::BeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.BeginPlay");

	UPVideoPlayer_BeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction PandoraVideoPlayer.VideoPlayerWidget.VideoPlayerEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            nEvent                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            nArg1                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            nArg2                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 sMsg                           (Parm, ZeroConstructor)

void UVideoPlayerWidget::VideoPlayerEvent__DelegateSignature(int nEvent, int nArg1, int nArg2, const struct FString& sMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction PandoraVideoPlayer.VideoPlayerWidget.VideoPlayerEvent__DelegateSignature");

	UVideoPlayerWidget_VideoPlayerEvent__DelegateSignature_Params params;
	params.nEvent = nEvent;
	params.nArg1 = nArg1;
	params.nArg2 = nArg2;
	params.sMsg = sMsg;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.UseFileDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UVideoPlayerWidget::UseFileDelegate(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.UseFileDelegate");

	UVideoPlayerWidget_UseFileDelegate_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nVolume                        (Parm, ZeroConstructor, IsPlainOldData)

void UVideoPlayerWidget::SetVolume(int nVolume)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetVolume");

	UVideoPlayerWidget_SetVolume_Params params;
	params.nVolume = nVolume;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.SetVideoAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          FAlpha                         (Parm, ZeroConstructor, IsPlainOldData)

void UVideoPlayerWidget::SetVideoAlpha(float FAlpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetVideoAlpha");

	UVideoPlayerWidget_SetVideoAlpha_Params params;
	params.FAlpha = FAlpha;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.SetStopAsyn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            stopAsyn                       (Parm, ZeroConstructor, IsPlainOldData)

void UVideoPlayerWidget::SetStopAsyn(int stopAsyn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetStopAsyn");

	UVideoPlayerWidget_SetStopAsyn_Params params;
	params.stopAsyn = stopAsyn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.SetRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          nRate                          (Parm, ZeroConstructor, IsPlainOldData)

void UVideoPlayerWidget::SetRate(float nRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetRate");

	UVideoPlayerWidget_SetRate_Params params;
	params.nRate = nRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.SetOnlyPlayType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UVideoPlayerWidget::SetOnlyPlayType(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetOnlyPlayType");

	UVideoPlayerWidget_SetOnlyPlayType_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.SetNextVideo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strUrl                         (Parm, ZeroConstructor)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)

void UVideoPlayerWidget::SetNextVideo(const struct FString& strUrl, bool bLoop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetNextVideo");

	UVideoPlayerWidget_SetNextVideo_Params params;
	params.strUrl = strUrl;
	params.bLoop = bLoop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.SetNeedVideoTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           needVideoTexture               (Parm, ZeroConstructor, IsPlainOldData)

void UVideoPlayerWidget::SetNeedVideoTexture(bool needVideoTexture)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetNeedVideoTexture");

	UVideoPlayerWidget_SetNeedVideoTexture_Params params;
	params.needVideoTexture = needVideoTexture;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.SetNeedPlayAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           needPlayAudio                  (Parm, ZeroConstructor, IsPlainOldData)

void UVideoPlayerWidget::SetNeedPlayAudio(bool needPlayAudio)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetNeedPlayAudio");

	UVideoPlayerWidget_SetNeedPlayAudio_Params params;
	params.needPlayAudio = needPlayAudio;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.SetHardwareDecodec
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bHardWare                      (Parm, ZeroConstructor, IsPlainOldData)

void UVideoPlayerWidget::SetHardwareDecodec(bool bHardWare)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetHardwareDecodec");

	UVideoPlayerWidget_SetHardwareDecodec_Params params;
	params.bHardWare = bHardWare;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.SetDecryptionKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 decryptionKey                  (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVideoPlayerWidget::SetDecryptionKey(const struct FString& decryptionKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetDecryptionKey");

	UVideoPlayerWidget_SetDecryptionKey_Params params;
	params.decryptionKey = decryptionKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.SetDataUpdateCallback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UPVideoPlayerInterface> dataUpdateInterface            (Parm, ZeroConstructor, IsPlainOldData)

void UVideoPlayerWidget::SetDataUpdateCallback(const TScriptInterface<class UPVideoPlayerInterface>& dataUpdateInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetDataUpdateCallback");

	UVideoPlayerWidget_SetDataUpdateCallback_Params params;
	params.dataUpdateInterface = dataUpdateInterface;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.SetAutoPlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           doAutoPlay                     (Parm, ZeroConstructor, IsPlainOldData)

void UVideoPlayerWidget::SetAutoPlay(bool doAutoPlay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetAutoPlay");

	UVideoPlayerWidget_SetAutoPlay_Params params;
	params.doAutoPlay = doAutoPlay;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.SeekMs
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nMilliSec                      (Parm, ZeroConstructor, IsPlainOldData)

void UVideoPlayerWidget::SeekMs(int nMilliSec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SeekMs");

	UVideoPlayerWidget_SeekMs_Params params;
	params.nMilliSec = nMilliSec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.SeekAndPause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nMilliSec                      (Parm, ZeroConstructor, IsPlainOldData)

void UVideoPlayerWidget::SeekAndPause(int nMilliSec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SeekAndPause");

	UVideoPlayerWidget_SeekAndPause_Params params;
	params.nMilliSec = nMilliSec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.Seek
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nSecond                        (Parm, ZeroConstructor, IsPlainOldData)

void UVideoPlayerWidget::Seek(int nSecond)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.Seek");

	UVideoPlayerWidget_Seek_Params params;
	params.nSecond = nSecond;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.Resume
// (Final, Native, Public, BlueprintCallable)

void UVideoPlayerWidget::Resume()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.Resume");

	UVideoPlayerWidget_Resume_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.PlayWithFd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            nFd                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVideoPlayerWidget::PlayWithFd(int nFd, bool bLoop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.PlayWithFd");

	UVideoPlayerWidget_PlayWithFd_Params params;
	params.nFd = nFd;
	params.bLoop = bLoop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.PlayOnceAndLoopBetween
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strUrl                         (Parm, ZeroConstructor)
// int                            nStartMs                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            nEndMs                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVideoPlayerWidget::PlayOnceAndLoopBetween(const struct FString& strUrl, int nStartMs, int nEndMs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.PlayOnceAndLoopBetween");

	UVideoPlayerWidget_PlayOnceAndLoopBetween_Params params;
	params.strUrl = strUrl;
	params.nStartMs = nStartMs;
	params.nEndMs = nEndMs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.Play1
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 strUrl                         (Parm, ZeroConstructor)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVideoPlayerWidget::Play1(const struct FString& strUrl, bool bLoop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.Play1");

	UVideoPlayerWidget_Play1_Params params;
	params.strUrl = strUrl;
	params.bLoop = bLoop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.Pause
// (Final, Native, Public, BlueprintCallable)

void UVideoPlayerWidget::Pause()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.Pause");

	UVideoPlayerWidget_Pause_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.OnPlayerEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            EventCode                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            nParam1                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            nParam2                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 strMsg                         (Parm, ZeroConstructor)

void UVideoPlayerWidget::OnPlayerEvent(int EventCode, int nParam1, int nParam2, const struct FString& strMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.OnPlayerEvent");

	UVideoPlayerWidget_OnPlayerEvent_Params params;
	params.EventCode = EventCode;
	params.nParam1 = nParam1;
	params.nParam2 = nParam2;
	params.strMsg = strMsg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.GetVideoAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVideoPlayerWidget::GetVideoAlpha()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.GetVideoAlpha");

	UVideoPlayerWidget_GetVideoAlpha_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.GetPlayStatus1
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVideoPlayerWidget::GetPlayStatus1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.GetPlayStatus1");

	UVideoPlayerWidget_GetPlayStatus1_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.GetDuration1
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVideoPlayerWidget::GetDuration1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.GetDuration1");

	UVideoPlayerWidget_GetDuration1_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.GetCurrentPosition1
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVideoPlayerWidget::GetCurrentPosition1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.GetCurrentPosition1");

	UVideoPlayerWidget_GetCurrentPosition1_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.EnableCacheResource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, ZeroConstructor)

void UVideoPlayerWidget::EnableCacheResource(bool bEnable, const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.EnableCacheResource");

	UVideoPlayerWidget_EnableCacheResource_Params params;
	params.bEnable = bEnable;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.Close
// (Final, Native, Public, BlueprintCallable)

void UVideoPlayerWidget::Close()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.Close");

	UVideoPlayerWidget_Close_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraVideoPlayer.VideoPlayerWidget.ClearCacheResource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)

void UVideoPlayerWidget::ClearCacheResource(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.ClearCacheResource");

	UVideoPlayerWidget_ClearCacheResource_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

