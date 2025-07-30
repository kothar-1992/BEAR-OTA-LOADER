#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PandoraVideoPlayer.BP_PixVideoLibrary.CreatePlayerWidget
struct UBP_PixVideoLibrary_CreatePlayerWidget_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// DelegateFunction PandoraVideoPlayer.PVideoImage.VideoPlayerEvent__DelegateSignature
struct UPVideoImage_VideoPlayerEvent__DelegateSignature_Params
{
	int                                                EventCode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nParam1;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nParam2;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     strMsg;                                                   // (Parm, ZeroConstructor)
};

// Function PandoraVideoPlayer.PVideoImage.UseFileDelegate
struct UPVideoImage_UseFileDelegate_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.Update
struct UPVideoImage_Update_Params
{
};

// Function PandoraVideoPlayer.PVideoImage.SetVolume
struct UPVideoImage_SetVolume_Params
{
	int                                                nVolume;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.SetVideoAlpha
struct UPVideoImage_SetVideoAlpha_Params
{
	float                                              FAlpha;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.SetStopAsyn
struct UPVideoImage_SetStopAsyn_Params
{
	int                                                stopAsyn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.SetRate
struct UPVideoImage_SetRate_Params
{
	float                                              nRate;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.SetOnlyPlayType
struct UPVideoImage_SetOnlyPlayType_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.SetNextVideo
struct UPVideoImage_SetNextVideo_Params
{
	struct FString                                     strUrl;                                                   // (Parm, ZeroConstructor)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.SetNeedVideoTexture
struct UPVideoImage_SetNeedVideoTexture_Params
{
	bool                                               needVideoTexture;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.SetNeedPlayAudio
struct UPVideoImage_SetNeedPlayAudio_Params
{
	bool                                               needPlayAudio;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.SetDecryptionKey
struct UPVideoImage_SetDecryptionKey_Params
{
	struct FString                                     decryptionKey;                                            // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.SetDataUpdateCallback
struct UPVideoImage_SetDataUpdateCallback_Params
{
	TScriptInterface<class UPVideoPlayerInterface>     dataUpdateInterface;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.SetAutoPlay
struct UPVideoImage_SetAutoPlay_Params
{
	bool                                               doAutoPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.SeekMs
struct UPVideoImage_SeekMs_Params
{
	int                                                millisec;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.SeekAndPause
struct UPVideoImage_SeekAndPause_Params
{
	int                                                nMilliSec;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.Seek
struct UPVideoImage_Seek_Params
{
	int                                                nSecond;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.Resume
struct UPVideoImage_Resume_Params
{
};

// Function PandoraVideoPlayer.PVideoImage.PlayWithFd
struct UPVideoImage_PlayWithFd_Params
{
	int                                                nFd;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.PlayOnceAndLoopBetween
struct UPVideoImage_PlayOnceAndLoopBetween_Params
{
	struct FString                                     strUrl;                                                   // (Parm, ZeroConstructor)
	int                                                nStartMs;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nEndMs;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.Play
struct UPVideoImage_Play_Params
{
	struct FString                                     strUrl;                                                   // (Parm, ZeroConstructor)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.Pause
struct UPVideoImage_Pause_Params
{
};

// Function PandoraVideoPlayer.PVideoImage.IsTextureUpdated
struct UPVideoImage_IsTextureUpdated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.IsPlaying
struct UPVideoImage_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.IsPause
struct UPVideoImage_IsPause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.IsAlphaVideo
struct UPVideoImage_IsAlphaVideo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.GetYUVFormat
struct UPVideoImage_GetYUVFormat_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.GetVideoTime
struct UPVideoImage_GetVideoTime_Params
{
	float                                              fCurTime;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              fTotalTime;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.GetVideoTexture
struct UPVideoImage_GetVideoTexture_Params
{
	int                                                nIdx;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.GetVideoAlpha
struct UPVideoImage_GetVideoAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.GetRgbParameter
struct UPVideoImage_GetRgbParameter_Params
{
	struct FLinearColor                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.GetResolution
struct UPVideoImage_GetResolution_Params
{
	int                                                nWidth;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                nHeight;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.GetPlayStatus
struct UPVideoImage_GetPlayStatus_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.GetMediaType
struct UPVideoImage_GetMediaType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.GetDuration
struct UPVideoImage_GetDuration_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.GetCurrentPosition
struct UPVideoImage_GetCurrentPosition_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.GetAlphaParameter
struct UPVideoImage_GetAlphaParameter_Params
{
	struct FLinearColor                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoImage.EnableCacheResource
struct UPVideoImage_EnableCacheResource_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     cachePath;                                                // (Parm, ZeroConstructor)
};

// Function PandoraVideoPlayer.PVideoImage.Close
struct UPVideoImage_Close_Params
{
};

// Function PandoraVideoPlayer.PVideoPlayerInterface.OnAudioDataUpdateCallback
struct UPVideoPlayerInterface_OnAudioDataUpdateCallback_Params
{
	TArray<unsigned char>                              AudioData;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Samples;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Channels;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                sample_rate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              clock;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.UseFileDelegate
struct UPVideoPlayer_UseFileDelegate_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.Update
struct UPVideoPlayer_Update_Params
{
};

// Function PandoraVideoPlayer.PVideoPlayer.SetVolume
struct UPVideoPlayer_SetVolume_Params
{
	int                                                nVolume;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.SetVideoAlpha
struct UPVideoPlayer_SetVideoAlpha_Params
{
	float                                              FAlpha;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.SetStopAsyn
struct UPVideoPlayer_SetStopAsyn_Params
{
	int                                                stopAsyn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.SetRate
struct UPVideoPlayer_SetRate_Params
{
	float                                              nRate;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.SetOnlyPlayType
struct UPVideoPlayer_SetOnlyPlayType_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.SetNextVideo
struct UPVideoPlayer_SetNextVideo_Params
{
	struct FString                                     strUrl;                                                   // (Parm, ZeroConstructor)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.SetNeedVideoTexture
struct UPVideoPlayer_SetNeedVideoTexture_Params
{
	bool                                               bNeedVideoTexture;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.SetNeedPlayAudio
struct UPVideoPlayer_SetNeedPlayAudio_Params
{
	bool                                               bNeedPlayAudio;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.SetHardwareDecodec
struct UPVideoPlayer_SetHardwareDecodec_Params
{
	bool                                               bHareware;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.SetDecryptionKey
struct UPVideoPlayer_SetDecryptionKey_Params
{
	struct FString                                     decryptionKey;                                            // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.SetDataUpdateCallback
struct UPVideoPlayer_SetDataUpdateCallback_Params
{
	TScriptInterface<class UPVideoPlayerInterface>     dataUpdateInterface;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.SetCachePacketSize
struct UPVideoPlayer_SetCachePacketSize_Params
{
	int                                                nSizeMb;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.SetAutoPlay
struct UPVideoPlayer_SetAutoPlay_Params
{
	bool                                               bAutoPlay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.SeekMs
struct UPVideoPlayer_SeekMs_Params
{
	int                                                millisec;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.SeekAndPause
struct UPVideoPlayer_SeekAndPause_Params
{
	int                                                nMilliSec;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.Seek
struct UPVideoPlayer_Seek_Params
{
	int                                                nSecond;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.Resume
struct UPVideoPlayer_Resume_Params
{
};

// Function PandoraVideoPlayer.PVideoPlayer.PlayOnceAndLoopBetween
struct UPVideoPlayer_PlayOnceAndLoopBetween_Params
{
	struct FString                                     strUrl;                                                   // (Parm, ZeroConstructor)
	int                                                nStartMs;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nEndMs;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.Play
struct UPVideoPlayer_Play_Params
{
	struct FString                                     strUrl;                                                   // (Parm, ZeroConstructor)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.Pause
struct UPVideoPlayer_Pause_Params
{
};

// DelegateFunction PandoraVideoPlayer.PVideoPlayer.MediaPlayerEvent__DelegateSignature
struct UPVideoPlayer_MediaPlayerEvent__DelegateSignature_Params
{
	int                                                EventCode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nParam1;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nParam2;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     strMsg;                                                   // (Parm, ZeroConstructor)
};

// Function PandoraVideoPlayer.PVideoPlayer.IsTextureUpdated
struct UPVideoPlayer_IsTextureUpdated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.IsPlaying
struct UPVideoPlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.IsPause
struct UPVideoPlayer_IsPause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.IsAlphaVideo
struct UPVideoPlayer_IsAlphaVideo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.GetYUVFormat
struct UPVideoPlayer_GetYUVFormat_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.GetVideoTime
struct UPVideoPlayer_GetVideoTime_Params
{
	float                                              fCurTime;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              fTotalTime;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.GetVideoTexture
struct UPVideoPlayer_GetVideoTexture_Params
{
	int                                                nIdx;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.GetVideoAlpha
struct UPVideoPlayer_GetVideoAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.GetRgbParameter
struct UPVideoPlayer_GetRgbParameter_Params
{
	struct FLinearColor                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.GetResolution
struct UPVideoPlayer_GetResolution_Params
{
	int                                                nWidth;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                nHeight;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.GetRate
struct UPVideoPlayer_GetRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.GetPlayStatus
struct UPVideoPlayer_GetPlayStatus_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.GetMediaType
struct UPVideoPlayer_GetMediaType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.GetDuration
struct UPVideoPlayer_GetDuration_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.GetCurrentPosition
struct UPVideoPlayer_GetCurrentPosition_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.GetAlphaParameter
struct UPVideoPlayer_GetAlphaParameter_Params
{
	struct FLinearColor                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.PVideoPlayer.EnableCacheResource
struct UPVideoPlayer_EnableCacheResource_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     cachePath;                                                // (Parm, ZeroConstructor)
};

// Function PandoraVideoPlayer.PVideoPlayer.Close
struct UPVideoPlayer_Close_Params
{
};

// Function PandoraVideoPlayer.PVideoPlayer.ClearCacheResource
struct UPVideoPlayer_ClearCacheResource_Params
{
	struct FString                                     cachePath;                                                // (Parm, ZeroConstructor)
};

// Function PandoraVideoPlayer.PVideoPlayer.BlueTick
struct UPVideoPlayer_BlueTick_Params
{
};

// Function PandoraVideoPlayer.PVideoPlayer.BeginPlay
struct UPVideoPlayer_BeginPlay_Params
{
};

// DelegateFunction PandoraVideoPlayer.VideoPlayerWidget.VideoPlayerEvent__DelegateSignature
struct UVideoPlayerWidget_VideoPlayerEvent__DelegateSignature_Params
{
	int                                                nEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nArg1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nArg2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     sMsg;                                                     // (Parm, ZeroConstructor)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.UseFileDelegate
struct UVideoPlayerWidget_UseFileDelegate_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.SetVolume
struct UVideoPlayerWidget_SetVolume_Params
{
	int                                                nVolume;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.SetVideoAlpha
struct UVideoPlayerWidget_SetVideoAlpha_Params
{
	float                                              FAlpha;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.SetStopAsyn
struct UVideoPlayerWidget_SetStopAsyn_Params
{
	int                                                stopAsyn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.SetRate
struct UVideoPlayerWidget_SetRate_Params
{
	float                                              nRate;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.SetOnlyPlayType
struct UVideoPlayerWidget_SetOnlyPlayType_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.SetNextVideo
struct UVideoPlayerWidget_SetNextVideo_Params
{
	struct FString                                     strUrl;                                                   // (Parm, ZeroConstructor)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.SetNeedVideoTexture
struct UVideoPlayerWidget_SetNeedVideoTexture_Params
{
	bool                                               needVideoTexture;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.SetNeedPlayAudio
struct UVideoPlayerWidget_SetNeedPlayAudio_Params
{
	bool                                               needPlayAudio;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.SetHardwareDecodec
struct UVideoPlayerWidget_SetHardwareDecodec_Params
{
	bool                                               bHardWare;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.SetDecryptionKey
struct UVideoPlayerWidget_SetDecryptionKey_Params
{
	struct FString                                     decryptionKey;                                            // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.SetDataUpdateCallback
struct UVideoPlayerWidget_SetDataUpdateCallback_Params
{
	TScriptInterface<class UPVideoPlayerInterface>     dataUpdateInterface;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.SetAutoPlay
struct UVideoPlayerWidget_SetAutoPlay_Params
{
	bool                                               doAutoPlay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.SeekMs
struct UVideoPlayerWidget_SeekMs_Params
{
	int                                                nMilliSec;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.SeekAndPause
struct UVideoPlayerWidget_SeekAndPause_Params
{
	int                                                nMilliSec;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.Seek
struct UVideoPlayerWidget_Seek_Params
{
	int                                                nSecond;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.Resume
struct UVideoPlayerWidget_Resume_Params
{
};

// Function PandoraVideoPlayer.VideoPlayerWidget.PlayWithFd
struct UVideoPlayerWidget_PlayWithFd_Params
{
	int                                                nFd;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.PlayOnceAndLoopBetween
struct UVideoPlayerWidget_PlayOnceAndLoopBetween_Params
{
	struct FString                                     strUrl;                                                   // (Parm, ZeroConstructor)
	int                                                nStartMs;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nEndMs;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.Play1
struct UVideoPlayerWidget_Play1_Params
{
	struct FString                                     strUrl;                                                   // (Parm, ZeroConstructor)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.Pause
struct UVideoPlayerWidget_Pause_Params
{
};

// Function PandoraVideoPlayer.VideoPlayerWidget.OnPlayerEvent
struct UVideoPlayerWidget_OnPlayerEvent_Params
{
	int                                                EventCode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nParam1;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nParam2;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     strMsg;                                                   // (Parm, ZeroConstructor)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.GetVideoAlpha
struct UVideoPlayerWidget_GetVideoAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.GetPlayStatus1
struct UVideoPlayerWidget_GetPlayStatus1_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.GetDuration1
struct UVideoPlayerWidget_GetDuration1_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.GetCurrentPosition1
struct UVideoPlayerWidget_GetCurrentPosition1_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.EnableCacheResource
struct UVideoPlayerWidget_EnableCacheResource_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
};

// Function PandoraVideoPlayer.VideoPlayerWidget.Close
struct UVideoPlayerWidget_Close_Params
{
};

// Function PandoraVideoPlayer.VideoPlayerWidget.ClearCacheResource
struct UVideoPlayerWidget_ClearCacheResource_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
};

}

