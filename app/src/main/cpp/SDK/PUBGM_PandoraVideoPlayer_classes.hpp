#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PandoraVideoPlayer.BP_PixVideoLibrary
// 0x0000 (0x0028 - 0x0028)
class UBP_PixVideoLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraVideoPlayer.BP_PixVideoLibrary");
		return pStaticClass;
	}


	static class UUserWidget* CreatePlayerWidget(const struct FString& Name);
};


// Class PandoraVideoPlayer.PVideoImage
// 0x0030 (0x02A0 - 0x0270)
class UPVideoImage : public UImage
{
public:
	struct FScriptMulticastDelegate                    PlayerEventDelegate;                                      // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0280(0x0018) MISSED OFFSET
	class UPVideoPlayer*                               m_pPlayer;                                                // 0x0298(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraVideoPlayer.PVideoImage");
		return pStaticClass;
	}


	void VideoPlayerEvent__DelegateSignature(int EventCode, int nParam1, int nParam2, const struct FString& strMsg);
	void UseFileDelegate(bool bEnable);
	void Update();
	void SetVolume(int nVolume);
	void SetVideoAlpha(float FAlpha);
	void SetStopAsyn(int stopAsyn);
	void SetRate(float nRate);
	void SetOnlyPlayType(int Type);
	void SetNextVideo(const struct FString& strUrl, bool bLoop);
	void SetNeedVideoTexture(bool needVideoTexture);
	void SetNeedPlayAudio(bool needPlayAudio);
	int SetDecryptionKey(const struct FString& decryptionKey);
	void SetDataUpdateCallback(const TScriptInterface<class UPVideoPlayerInterface>& dataUpdateInterface);
	void SetAutoPlay(bool doAutoPlay);
	void SeekMs(int millisec);
	void SeekAndPause(int nMilliSec);
	void Seek(int nSecond);
	void Resume();
	int PlayWithFd(int nFd, bool bLoop);
	int PlayOnceAndLoopBetween(const struct FString& strUrl, int nStartMs, int nEndMs);
	int Play(const struct FString& strUrl, bool bLoop);
	void Pause();
	bool IsTextureUpdated();
	bool IsPlaying();
	bool IsPause();
	bool IsAlphaVideo();
	int GetYUVFormat();
	void GetVideoTime(float* fCurTime, float* fTotalTime);
	class UTexture2D* GetVideoTexture(int nIdx);
	float GetVideoAlpha();
	struct FLinearColor GetRgbParameter();
	void GetResolution(int* nWidth, int* nHeight);
	int GetPlayStatus();
	int GetMediaType();
	int GetDuration();
	int GetCurrentPosition();
	struct FLinearColor GetAlphaParameter();
	void EnableCacheResource(bool bEnable, const struct FString& cachePath);
	void Close();
};


// Class PandoraVideoPlayer.PVideoPlayerInterface
// 0x0000 (0x0028 - 0x0028)
class UPVideoPlayerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraVideoPlayer.PVideoPlayerInterface");
		return pStaticClass;
	}


	bool OnAudioDataUpdateCallback(TArray<unsigned char> AudioData, int Size, int Samples, int Channels, int sample_rate, float clock);
};


// Class PandoraVideoPlayer.PVideoPlayer
// 0x0128 (0x0150 - 0x0028)
class UPVideoPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    MediaPlayerEventDelegate;                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xD8];                                      // 0x0040(0x00D8) MISSED OFFSET
	TArray<class UTexture2D*>                          m_pTextures;                                              // 0x0118(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0128(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraVideoPlayer.PVideoPlayer");
		return pStaticClass;
	}


	void UseFileDelegate(bool bEnable);
	void Update();
	void SetVolume(int nVolume);
	void SetVideoAlpha(float FAlpha);
	static void SetStopAsyn(int stopAsyn);
	void SetRate(float nRate);
	void SetOnlyPlayType(int Type);
	void SetNextVideo(const struct FString& strUrl, bool bLoop);
	void SetNeedVideoTexture(bool bNeedVideoTexture);
	void SetNeedPlayAudio(bool bNeedPlayAudio);
	static void SetHardwareDecodec(bool bHareware);
	int SetDecryptionKey(const struct FString& decryptionKey);
	void SetDataUpdateCallback(const TScriptInterface<class UPVideoPlayerInterface>& dataUpdateInterface);
	static void SetCachePacketSize(int nSizeMb);
	void SetAutoPlay(bool bAutoPlay);
	void SeekMs(int millisec);
	void SeekAndPause(int nMilliSec);
	void Seek(int nSecond);
	void Resume();
	int PlayOnceAndLoopBetween(const struct FString& strUrl, int nStartMs, int nEndMs);
	int Play(const struct FString& strUrl, bool bLoop);
	void Pause();
	void MediaPlayerEvent__DelegateSignature(int EventCode, int nParam1, int nParam2, const struct FString& strMsg);
	bool IsTextureUpdated();
	bool IsPlaying();
	bool IsPause();
	bool IsAlphaVideo();
	int GetYUVFormat();
	void GetVideoTime(float* fCurTime, float* fTotalTime);
	class UTexture2D* GetVideoTexture(int nIdx);
	float GetVideoAlpha();
	struct FLinearColor GetRgbParameter();
	void GetResolution(int* nWidth, int* nHeight);
	float GetRate();
	int GetPlayStatus();
	int GetMediaType();
	int GetDuration();
	int GetCurrentPosition();
	struct FLinearColor GetAlphaParameter();
	void EnableCacheResource(bool bEnable, const struct FString& cachePath);
	void Close();
	static void ClearCacheResource(const struct FString& cachePath);
	void BlueTick();
	void BeginPlay();
};


// Class PandoraVideoPlayer.VideoPlayerWidget
// 0x0018 (0x0278 - 0x0260)
class UVideoPlayerWidget : public UUserWidget
{
public:
	class UPVideoImage*                                PVideoImage_Instance;                                     // 0x0260(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayerEventDelegate;                                    // 0x0268(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraVideoPlayer.VideoPlayerWidget");
		return pStaticClass;
	}


	void VideoPlayerEvent__DelegateSignature(int nEvent, int nArg1, int nArg2, const struct FString& sMsg);
	void UseFileDelegate(bool bEnable);
	void SetVolume(int nVolume);
	void SetVideoAlpha(float FAlpha);
	void SetStopAsyn(int stopAsyn);
	void SetRate(float nRate);
	void SetOnlyPlayType(int Type);
	void SetNextVideo(const struct FString& strUrl, bool bLoop);
	void SetNeedVideoTexture(bool needVideoTexture);
	void SetNeedPlayAudio(bool needPlayAudio);
	void SetHardwareDecodec(bool bHardWare);
	int SetDecryptionKey(const struct FString& decryptionKey);
	void SetDataUpdateCallback(const TScriptInterface<class UPVideoPlayerInterface>& dataUpdateInterface);
	void SetAutoPlay(bool doAutoPlay);
	void SeekMs(int nMilliSec);
	void SeekAndPause(int nMilliSec);
	void Seek(int nSecond);
	void Resume();
	int PlayWithFd(int nFd, bool bLoop);
	int PlayOnceAndLoopBetween(const struct FString& strUrl, int nStartMs, int nEndMs);
	int Play1(const struct FString& strUrl, bool bLoop);
	void Pause();
	void OnPlayerEvent(int EventCode, int nParam1, int nParam2, const struct FString& strMsg);
	float GetVideoAlpha();
	int GetPlayStatus1();
	int GetDuration1();
	int GetCurrentPosition1();
	void EnableCacheResource(bool bEnable, const struct FString& Path);
	void Close();
	void ClearCacheResource(const struct FString& Path);
};


}

