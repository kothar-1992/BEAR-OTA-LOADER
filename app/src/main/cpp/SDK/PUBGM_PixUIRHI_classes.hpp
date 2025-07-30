#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PixUIRHI.PxRHIImage
// 0x0000 (0x0028 - 0x0028)
class UPxRHIImage : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUIRHI.PxRHIImage");
		return pStaticClass;
	}


	class UObject* GetHandleObject();
};


// Class PixUIRHI.PxRHIMgr
// 0x0000 (0x0028 - 0x0028)
class UPxRHIMgr : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUIRHI.PxRHIMgr");
		return pStaticClass;
	}


	static bool RHIImageUpdate(class UPxRHIMgr* pPxRHIImage);
	static class UPxRHIMgr* RHIImageFindByObject(class UObject* pCoreObject);
	static bool RHIImageDestroy(class UPxRHIMgr* pPxRHIImage);
	static class UPxRHIImage* RHIImageCreate();
	static class UPxRHIMgr* Get();
};


}

