#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Creative.ECreativeModeActorState
enum class ECreativeModeActorState : uint8_t
{
	ECreativeModeActorState__CreativeModeActorState_Unknown = 0,
	ECreativeModeActorState__CreativeModeActorState_Prefab = 1,
	ECreativeModeActorState__CreativeModeActorState_Instance = 2,
	ECreativeModeActorState__CreativeModeActorState_MAX = 3
};


// Enum Creative.ECreativeModePlayState
enum class ECreativeModePlayState : uint8_t
{
	ECreativeModePlayState__CreativeModePlayState_None = 0,
	ECreativeModePlayState__CreativeModePlayState_Ready = 1,
	ECreativeModePlayState__CreativeModePlayState_Fighting = 2,
	ECreativeModePlayState__CreativeModePlayState_Finish = 3,
	ECreativeModePlayState__CreativeModePlayState_Max = 4
};


// Enum Creative.ESpecType
enum class ESpecType : uint8_t
{
	ESpecType__Invalid             = 0,
	ESpecType__HumanBot            = 1,
	ESpecType__AIPlayer            = 2,
	ESpecType__Monster             = 3,
	ESpecType__Tower               = 4,
	ESpecType__TriggerArea         = 5,
	ESpecType__ESpecType_MAX       = 6
};


// Enum Creative.ECreativeModeActorStreamingType
enum class ECreativeModeActorStreamingType : uint8_t
{
	ECreativeModeActorStreamingType__CreativeModeActorStreamingType_AlwaysLoad = 0,
	ECreativeModeActorStreamingType__CreativeModeActorStreamingType_Grid = 1,
	ECreativeModeActorStreamingType__CreativeModeActorStreamingType_MAX = 2
};


// Enum Creative.ECreativeDestructibleState
enum class ECreativeDestructibleState : uint8_t
{
	ECreativeDestructibleState__CreativeDestructibleState_NoParam = 0,
	ECreativeDestructibleState__CreativeDestructibleState_Enable = 1,
	ECreativeDestructibleState__CreativeDestructibleState_Disable = 2,
	ECreativeDestructibleState__CreativeDestructibleState_MAX = 3
};


// Enum Creative.ECreativeModeLoadType
enum class ECreativeModeLoadType : uint8_t
{
	ECreativeModeLoadType__CreativeModeLoadType_Auto = 0,
	ECreativeModeLoadType__CreativeModeLoadType_Manual = 1,
	ECreativeModeLoadType__CreativeModeLoadType_MAX = 2
};


// Enum Creative.ECreativeModeGameType
enum class ECreativeModeGameType : uint8_t
{
	ECreativeModeGameType__CreativeModeGameType_None = 0,
	ECreativeModeGameType__CreativeModeGameType_Editor = 1,
	ECreativeModeGameType__CreativeModeGameType_Game = 2,
	ECreativeModeGameType__CreativeModeGameType_Max = 3
};


// Enum Creative.ESCWOWActiveType
enum class ESCWOWActiveType : uint8_t
{
	ESCWOWActiveType__SAT_Active   = 0,
	ESCWOWActiveType__SAT_PandingKickOut = 1,
	ESCWOWActiveType__SAT_kickedOut = 2,
	ESCWOWActiveType__SAT_MAX      = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Creative.CreativeSignalEventInfo
// 0x0030
struct FCreativeSignalEventInfo
{
	struct FString                                     EventType;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     EventID;                                                  // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     FunctionName;                                             // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativePlaceInfo
// 0x0014
struct FCreativePlaceInfo
{
	int                                                LandGroundType;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Scalable;                                                 // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               HasCollision;                                             // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FRotator                                    RotableAxis;                                              // 0x0008(0x000C) (IsPlainOldData)
};

// ScriptStruct Creative.CreativeBoxInfo
// 0x0018
struct FCreativeBoxInfo
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x000C(0x000C) (IsPlainOldData)
};

// ScriptStruct Creative.CreativeStaticMeshConfigInfo
// 0x0070
struct FCreativeStaticMeshConfigInfo
{
	struct FString                                     DestructionMeshPath;                                      // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MeshPath;                                                 // 0x0010(0x0010) (ZeroConstructor)
	struct FTransform                                  Transform;                                                // 0x0020(0x0030) (IsPlainOldData)
	TArray<struct FString>                             MaterialPaths;                                            // 0x0050(0x0010) (ZeroConstructor)
	struct FName                                       CollisionProfileName;                                     // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               OnlyEdit;                                                 // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};

// ScriptStruct Creative.CreativeCollisionConfigInfo
// 0x0060
struct FCreativeCollisionConfigInfo
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (IsPlainOldData)
	struct FString                                     ClassName;                                                // 0x0030(0x0010) (ZeroConstructor)
	struct FName                                       CollisionProfileName;                                     // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x0048(0x000C) (IsPlainOldData)
	float                                              Radius;                                                   // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               OnlyEdit;                                                 // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
};

// ScriptStruct Creative.CreativeAssetInfo
// 0x0070
struct FCreativeAssetInfo
{
	struct FString                                     EditorPath;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     GamePath;                                                 // 0x0010(0x0010) (ZeroConstructor)
	struct FCreativePlaceInfo                          PlaceInfo;                                                // 0x0020(0x0014)
	bool                                               bRuntimeObjectBox;                                        // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsGroup;                                                 // 0x0035(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             AssetCategory;                                            // 0x0036(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0037(0x0001) MISSED OFFSET
	struct FCreativeBoxInfo                            BoxInfo;                                                  // 0x0038(0x0018)
	TArray<struct FCreativeStaticMeshConfigInfo>       StaticMeshes;                                             // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FCreativeCollisionConfigInfo>        Collisions;                                               // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeAutoGenItemDataSegment
// 0x0010
struct FCreativeAutoGenItemDataSegment
{
	TArray<unsigned char>                              NodeSegmentContent;                                       // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeAutoGenDataSegment
// 0x0018
struct FCreativeAutoGenDataSegment
{
	TArray<struct FCreativeAutoGenItemDataSegment>     DataSegments;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                CurDataSize;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                MaxDataSize;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.MessageDataWrapper
// 0x0020
struct FMessageDataWrapper
{
	struct FString                                     BlockIdString;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     FormatString;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Creative.ReplicateAddData
// 0x0008
struct FReplicateAddData
{
	int                                                AddNum;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ServerTime;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.ReplicateAddDataArray
// 0x0010
struct FReplicateAddDataArray
{
	TArray<struct FReplicateAddData>                   AddDatas;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeInstanceDataContentSegment
// 0x0018
struct FCreativeInstanceDataContentSegment
{
	unsigned char                                      Index;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<unsigned char>                              NodeSegmentContent;                                       // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeInstanceDataContent
// 0x0028
struct FCreativeInstanceDataContent
{
	unsigned char                                      Seq;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FCreativeInstanceDataContentSegment> NodeContentSegments;                                      // 0x0008(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              OutContent;                                               // 0x0018(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.CreativeMovingAudio
// 0x0030
struct FCreativeMovingAudio
{
	class AActor*                                      AttachRoot;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AttachPos;                                                // 0x0008(0x000C) (IsPlainOldData)
	int                                                Sequence;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ConfigId;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowMark;                                                // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int64_t                                            EndTime;                                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Creative.CreativeCustomParameterDataNode
// 0x001C (0x0028 - 0x000C)
struct FCreativeCustomParameterDataNode : public FFastArraySerializerItem
{
	uint32_t                                           ParameterID;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              DataContent;                                              // 0x0010(0x0010) (ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             TeamID;                                                   // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Creative.CreativeCustomParameterDataContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FCreativeCustomParameterDataContainer : public FFastArraySerializer
{
	TArray<struct FCreativeCustomParameterDataNode>    CustomParameterDataNodes;                                 // 0x00B0(0x0010) (ZeroConstructor)
	class UCreativeCustomParameterManager*             CustomParameterManager;                                   // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.CreativePrefabDataSegmentSlice
// 0x0010
struct FCreativePrefabDataSegmentSlice
{
	TArray<unsigned char>                              NodeSegmentContent;                                       // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativePrefabDataSegment
// 0x0018
struct FCreativePrefabDataSegment
{
	TArray<struct FCreativePrefabDataSegmentSlice>     NodeSegmentContent;                                       // 0x0000(0x0010) (ZeroConstructor)
	int                                                MaxDataSize;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                CurDataSize;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.CreativeCustomPrefabDataSegment
// 0x0018
struct FCreativeCustomPrefabDataSegment
{
	TArray<struct FCreativePrefabDataSegment>          DataSegments;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                CurDataSize;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                MaxDataSize;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.CreativePoolObjectRecordInfo
// 0x0010
struct FCreativePoolObjectRecordInfo
{
	int                                                PoolId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UObject*                                     PoolObject;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.EditorObjectLiteComponentTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FEditorObjectLiteComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Creative.CreativePoolGetObjectParamInfo
// 0x0020
struct FCreativePoolGetObjectParamInfo
{
	int                                                PoolId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UObject*                                     NewOuter;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     InName;                                                   // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.GameModeLiteComponentTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FGameModeLiteComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Creative.CreativeGameParameter
// 0x0054 (0x0060 - 0x000C)
struct FCreativeGameParameter : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     ParameterKey;                                             // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     TemplateID;                                               // 0x0020(0x0010) (ZeroConstructor)
	struct FCreativeInstanceDataContent                DataContent;                                              // 0x0030(0x0028)
	uint32_t                                           ParameterHeadHash;                                        // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ParameterHeadSize;                                        // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.CreativeGameParameterContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FCreativeGameParameterContainer : public FFastArraySerializer
{
	TArray<struct FCreativeGameParameter>              Nodes;                                                    // 0x00B0(0x0010) (ZeroConstructor)
	class UCreativeGameParameterManager*               GameParameterManager;                                     // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.CreativeGameParameterResume
// 0x0054 (0x0060 - 0x000C)
struct FCreativeGameParameterResume : public FFastArraySerializerItem
{
	uint32_t                                           ParameterHeadHash;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Seq;                                                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     ParameterKey;                                             // 0x0018(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FString                                     TemplateID;                                               // 0x0028(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FCreativeInstanceDataContent                DataContent;                                              // 0x0038(0x0028) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.CreativeGameParameterResumeContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FCreativeGameParameterResumeContainer : public FFastArraySerializer
{
	TArray<struct FCreativeGameParameterResume>        Nodes;                                                    // 0x00B0(0x0010) (ZeroConstructor)
	class UCreativeGameParameterManager*               GameParameterManager;                                     // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.GameStateLiteComponentTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FGameStateLiteComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Creative.CreativeModeGridLevelConfig
// 0x000C
struct FCreativeModeGridLevelConfig
{
	struct FVector2D                                   CellWidthHeight;                                          // 0x0000(0x0008) (IsPlainOldData)
	float                                              LoadingRange;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.CreativeModeGridLevelInfo
// 0x0050
struct FCreativeModeGridLevelInfo
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Creative.CreativeInstanceDataNode
// 0x0030
struct FCreativeInstanceDataNode
{
	uint32_t                                           InstanceID;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FCreativeInstanceDataContent                DataContent;                                              // 0x0008(0x0028)
};

// ScriptStruct Creative.CreativePullDataNode
// 0x0008
struct FCreativePullDataNode
{
	uint32_t                                           InstanceID;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Seq;                                                      // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Creative.CreativeBatchPullDataNode
// 0x0018
struct FCreativeBatchPullDataNode
{
	float                                              ReqTimeStamp;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FCreativePullDataNode>               PullDataNodes;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeReplicatNode
// 0x0008 (0x0014 - 0x000C)
struct FCreativeReplicatNode : public FFastArraySerializerItem
{
	uint32_t                                           ID;                                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Seq;                                                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Creative.CreativeNodeContainerCacheInfo
// 0x0010
struct FCreativeNodeContainerCacheInfo
{
	TArray<struct FCreativeReplicatNode>               Nodes;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeNodeContainer
// 0x0070 (0x0120 - 0x00B0)
struct FCreativeNodeContainer : public FFastArraySerializer
{
	TArray<struct FCreativeReplicatNode>               Nodes;                                                    // 0x00B0(0x0010) (ZeroConstructor)
	class UCreativeInstanceManager*                    InstanceManager;                                          // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bIsRPCReplicatedContainer;                                // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	uint32_t                                           CurRPCReplicatedInstanceContainerSeq;                     // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TMap<uint32_t, struct FCreativeNodeContainerCacheInfo> HistoryContainerMap;                                      // 0x00D0(0x0050) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.CreativeInstanceNode
// 0x0070
struct FCreativeInstanceNode
{
	int                                                AssetId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrefab;                                                // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0005(0x000B) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	int                                                MaterialID;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ObjectStateMatID;                                         // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	ECreativeModeActorStreamingType                    StreamingType;                                            // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     RuntimeGrid;                                              // 0x0050(0x0010) (ZeroConstructor)
	int                                                ObbyBaseAssetId;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	ECreativeDestructibleState                         DestructibleMeshState;                                    // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData)
	ECreativeModeLoadType                              LoadType;                                                 // 0x0065(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsCustomUI;                                              // 0x0066(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x9];                                       // 0x0067(0x0009) MISSED OFFSET
};

// ScriptStruct Creative.CreativeInstanceRespondPullDataSegment
// 0x0020
struct FCreativeInstanceRespondPullDataSegment
{
	unsigned char                                      TotalSegNum;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CurSegNum;                                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<struct FCreativeInstanceDataContent>        InstanceDataContents;                                     // 0x0008(0x0010) (ZeroConstructor)
	int                                                CurDataSize;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                MaxDataSize;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.PlayerIntegralInfo
// 0x0028
struct FPlayerIntegralInfo
{
	int                                                nCurIntegral;                                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                nCurStageIntegral;                                        // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                nIntegralAddSeq;                                          // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     UID;                                                      // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TeamID;                                                   // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Creative.CreativeBatchInstancedStaticMesh_MaterialId
// 0x00B8
struct FCreativeBatchInstancedStaticMesh_MaterialId
{
	TMap<int, class UInstancedStaticMeshComponent*>    ISMMap;                                                   // 0x0000(0x0050) (ExportObject, ZeroConstructor)
	TMap<struct FString, int>                          CurLoadedInstances;                                       // 0x0050(0x0050) (ZeroConstructor)
	TArray<int>                                        RecoveryBufferIndex;                                      // 0x00A0(0x0010) (ZeroConstructor)
	bool                                               bIsUseHISM;                                               // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct Creative.CreativeBatchInstancedStaticMesh_AssetID
// 0x0050
struct FCreativeBatchInstancedStaticMesh_AssetID
{
	TMap<int, struct FCreativeBatchInstancedStaticMesh_MaterialId> AllISMMap;                                                // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeBatchInstancedStaticMesh
// 0x0058
struct FCreativeBatchInstancedStaticMesh
{
	TMap<int, struct FCreativeBatchInstancedStaticMesh_AssetID> MaterialISMMap;                                           // 0x0000(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Creative.CreativeFineBatchLoadedInstanceInfo
// 0x0050
struct FCreativeFineBatchLoadedInstanceInfo
{
	TMap<int, int>                                     UseBufferIndexMap;                                        // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeFineBatchDataInfo
// 0x0050
struct FCreativeFineBatchDataInfo
{
	TMap<struct FString, struct FCreativeFineBatchLoadedInstanceInfo> CurLoadedInstanceInfoMap;                                 // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeFineBatchInstancedStaticMesh_StaticMesh
// 0x0080
struct FCreativeFineBatchInstancedStaticMesh_StaticMesh
{
	class UInstancedStaticMeshComponent*               ISMComponent;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<int, struct FCreativeFineBatchDataInfo>       BatchDataInfoMap;                                         // 0x0008(0x0050) (ZeroConstructor)
	TArray<int>                                        RecoveryBufferIndex;                                      // 0x0058(0x0010) (ZeroConstructor)
	bool                                               bIsUseHISM;                                               // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	TArray<struct FString>                             AllLoadedInstanceID;                                      // 0x0070(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeFineBatchInstancedStaticMesh_MaterialId
// 0x0050
struct FCreativeFineBatchInstancedStaticMesh_MaterialId
{
	TMap<uint32_t, struct FCreativeFineBatchInstancedStaticMesh_StaticMesh> BatchISMInfoMap;                                          // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeFineBatchInstancedStaticMesh
// 0x0050
struct FCreativeFineBatchInstancedStaticMesh
{
	TMap<int, struct FCreativeFineBatchInstancedStaticMesh_MaterialId> BatchISMInfoMap;                                          // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeModeStreamingParameters
// 0x0002
struct FCreativeModeStreamingParameters
{
	ECreativeModeActorStreamingType                    StreamingType;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnState;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.CreativePerfData
// 0x0038
struct FCreativePerfData
{
	int                                                AssetId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           CallCount;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxTime;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	uint64_t                                           TotalTime;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           FrameDuration;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           LastFrameCounter;                                         // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ObjName;                                                  // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreaitvePerfDataMap
// 0x0050
struct FCreaitvePerfDataMap
{
	TMap<struct FName, struct FCreativePerfData>       PerfData;                                                 // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeNetData
// 0x0008
struct FCreativeNetData
{
	uint32_t                                           OutBytes;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           InBytes;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.CreativeMemoryData
// 0x000C
struct FCreativeMemoryData
{
	float                                              AvailablePhysical;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              UsedPhysical;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalPhysical;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.PhotonDestructionParam
// 0x0020
struct FPhotonDestructionParam
{
	struct FString                                     UGCInstanceID;                                            // 0x0000(0x0010) (ZeroConstructor)
	bool                                               IsActive;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               EnableDestructible;                                       // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               CanBeDamagedByMelee;                                      // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               CanBeDamagedByRocketLauncher;                             // 0x0013(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               CanBeDamagedByThrowable;                                  // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               CanBeDamagedByVehicle;                                    // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               OnlyHalfBroken;                                           // 0x0016(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	float                                              Health;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Creative.PhysicsComponentData
// 0x0060
struct FPhysicsComponentData
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Creative.CreativeInstanceGridCellInfo
// 0x0020
struct FCreativeInstanceGridCellInfo
{
	struct FString                                     GridName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FIntVector                                  CellIndex;                                                // 0x0010(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Creative.CreativeObjectPoolClassConfig
// 0x0020
struct FCreativeObjectPoolClassConfig
{
	struct FString                                     ObjectClassPath;                                          // 0x0000(0x0010) (ZeroConstructor)
	uint16_t                                           PoolMaxSize;                                              // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           PoolMinSize;                                              // 0x0012(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           PoolInitNum;                                              // 0x0014(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	uint32_t                                           LifePeriodTime;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bCreativeHandleIsExist;                                   // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyHandleIsExist;                                    // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPickObjectHandleIsExist;                                 // 0x001E(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bObjectReturnHandleIsExist;                               // 0x001F(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.CreativeObjectPool
// 0x0050
struct FCreativeObjectPool
{
	bool                                               bPoolEnable;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                PoolId;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	class UCreativePoolManager*                        PoolManager;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             Pool;                                                     // 0x0010(0x0010) (ZeroConstructor, Transient)
	struct FCreativeObjectPoolClassConfig              PoolConfig;                                               // 0x0020(0x0020)
	class UClass*                                      ObjectClass;                                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           RecycledSeq;                                              // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Creative.RuntimePlayerBattleDataInfo
// 0x005C (0x0068 - 0x000C)
struct FRuntimePlayerBattleDataInfo : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	uint64_t                                           UID;                                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Campid;                                                   // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	uint32_t                                           PlayerKey;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WinningRoundNum;                                          // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AIKillCount;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillCount;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MonsterKillCount;                                         // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                AssistCount;                                              // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                RescueCount;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                KnockDownCount;                                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              PlayerHealth;                                             // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	ExtraPlayerLiveState                               PlayerLiveState;                                          // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              SurvivalTime;                                             // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                DeadCount;                                                // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CauseTotalDamage;                                         // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              CauseMonsterTotalDamage;                                  // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              CauseRoleTotalDamage;                                     // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              TakeTotalDamage;                                          // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              TakeRoleTotalDamage;                                      // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              TakeMonsterTotalDamage;                                   // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.RuntimeTeamGameOutcomeConditionInfo
// 0x0010 (0x001C - 0x000C)
struct FRuntimeTeamGameOutcomeConditionInfo : public FFastArraySerializerItem
{
	int                                                TeamID;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IntegralVictoryTarget;                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillPlayerNumVictoryTarget;                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               UseCampOutcome;                                           // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct Creative.RuntimeCacheRoundBattleDataInfo
// 0x0014 (0x0020 - 0x000C)
struct FRuntimeCacheRoundBattleDataInfo : public FFastArraySerializerItem
{
	int                                                RoundIndex;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FRuntimePlayerBattleDataInfo>        PlayerBattleDataList;                                     // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.RuntimeCacheRoundBattleDataInfoContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FRuntimeCacheRoundBattleDataInfoContainer : public FFastArraySerializer
{
	TArray<struct FRuntimeCacheRoundBattleDataInfo>    OldRoundCacheTeamRuntimeDataList;                         // 0x00B0(0x0010) (ZeroConstructor)
	class ACreativeRuntimePlayerBattleDataObject*      BattleDataObject;                                         // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.RuntimeBattleDataInfoContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FRuntimeBattleDataInfoContainer : public FFastArraySerializer
{
	TArray<struct FRuntimePlayerBattleDataInfo>        CurRuntimePlayerBattleDataList;                           // 0x00B0(0x0010) (ZeroConstructor)
	class ACreativeRuntimePlayerBattleDataObject*      BattleDataObject;                                         // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.RuntimeTeamGameOutcomeConditionContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FRuntimeTeamGameOutcomeConditionContainer : public FFastArraySerializer
{
	TArray<struct FRuntimeTeamGameOutcomeConditionInfo> TeamGameOutcomeConditions;                                // 0x00B0(0x0010) (ZeroConstructor)
	class ACreativeRuntimePlayerBattleDataObject*      BattleDataObject;                                         // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.CreativeReplicatedData
// 0x0014 (0x0020 - 0x000C)
struct FCreativeReplicatedData : public FFastArraySerializerItem
{
	uint32_t                                           InstanceID;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ReplicatedObjects;                                        // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeReplicatedDataContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FCreativeReplicatedDataContainer : public FFastArraySerializer
{
	TArray<struct FCreativeReplicatedData>             DataList;                                                 // 0x00B0(0x0010) (ZeroConstructor)
	class UCreativeSceneQueryManager*                  SceneQueryManager;                                        // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Creative.CreativeReplicatedObjectsInfo
// 0x0010
struct FCreativeReplicatedObjectsInfo
{
	TArray<class UObject*>                             ReplicatedObjects;                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeDestructibleMeshInstanceInfo
// 0x0028
struct FCreativeDestructibleMeshInstanceInfo
{
	int                                                AssetId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaterialID;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceID;                                               // 0x0008(0x0010) (ZeroConstructor)
	struct FIntVector                                  CellIndex;                                                // 0x0018(0x000C) (IsPlainOldData)
	bool                                               bManualLoad;                                              // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Creative.CreativeDestructibleMeshBatchInfo
// 0x00A8
struct FCreativeDestructibleMeshBatchInfo
{
	TMap<int, class UPhotonInstancedDestructibleMeshComponent*> ISMMap;                                                   // 0x0000(0x0050) (ExportObject, ZeroConstructor)
	TMap<struct FString, int>                          CurInstances;                                             // 0x0050(0x0050) (ZeroConstructor)
	bool                                               bIsUseHISM;                                               // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsDirty;                                                 // 0x00A1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00A2(0x0006) MISSED OFFSET
};

// ScriptStruct Creative.CreativeEditorObjectEffectMesheInfo
// 0x0010
struct FCreativeEditorObjectEffectMesheInfo
{
	class UStaticMeshComponent*                        EffectMeshComponent;                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        OriginalMeshComponent;                                    // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Creative.CreativePlayerOperableInfo
// 0x0008
struct FCreativePlayerOperableInfo
{
	unsigned char                                      Seq;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              EndOperationLimitTimestamp;                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.CreativeUpdateBatchActorParameter
// 0x0020
struct FCreativeUpdateBatchActorParameter
{
	struct FString                                     GridName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                AssetId;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaterialID;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceAll;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              ReqTimeStamp;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.CreativeGridLevelsActivationInfo
// 0x0050
struct FCreativeGridLevelsActivationInfo
{
	TMap<struct FIntVector, bool>                      LevelsActivationMap;                                      // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo_Material
// 0x0010
struct FCreativeStaticMeshObjectBatchInfo_Material
{
	TArray<struct FString>                             InstanceIDs;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo_Asset
// 0x0050
struct FCreativeStaticMeshObjectBatchInfo_Asset
{
	TMap<int, struct FCreativeStaticMeshObjectBatchInfo_Material> MaterialDataMap;                                          // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo_Cell
// 0x0050
struct FCreativeStaticMeshObjectBatchInfo_Cell
{
	TMap<int, struct FCreativeStaticMeshObjectBatchInfo_Asset> AssetDataMap;                                             // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo_Grid
// 0x0050
struct FCreativeStaticMeshObjectBatchInfo_Grid
{
	TMap<struct FIntVector, struct FCreativeStaticMeshObjectBatchInfo_Cell> CellDataMap;                                              // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo
// 0x0050
struct FCreativeStaticMeshObjectBatchInfo
{
	TMap<struct FString, struct FCreativeStaticMeshObjectBatchInfo_Grid> GridDataMap;                                              // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeObjectBatchSignInfo
// 0x0050
struct FCreativeObjectBatchSignInfo
{
	struct FIntVector                                  CellIndex;                                                // 0x0000(0x000C) (IsPlainOldData)
	int                                                CurMaterialId;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	bool                                               bIsPrefab;                                                // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0041(0x000F) MISSED OFFSET
};

// ScriptStruct Creative.CreativeBatchStaticMeshInfo
// 0x0008
struct FCreativeBatchStaticMeshInfo
{
	int                                                AssetId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaterialID;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.CreativeSpawnObjectInfo
// 0x0070
struct FCreativeSpawnObjectInfo
{
	struct FString                                     InstanceID;                                               // 0x0000(0x0010) (ZeroConstructor)
	int                                                AssetId;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     AssetPath;                                                // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  SpawnTransform;                                           // 0x0030(0x0030) (IsPlainOldData)
	bool                                               bIsLogicObj;                                              // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsGroupObj;                                              // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanBatch;                                                // 0x0062(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xD];                                       // 0x0063(0x000D) MISSED OFFSET
};

// ScriptStruct Creative.CreativeEventBindingChangeInfo
// 0x0028
struct FCreativeEventBindingChangeInfo
{
	uint32_t                                           InstanceID;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ChangeType;                                               // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     EventName;                                                // 0x0008(0x0010) (ZeroConstructor)
	uint32_t                                           BranchKey;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           BindingInstanceID;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           FuncIndex;                                                // 0x0020(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct Creative.CreativeModeGridCellChangeInfo
// 0x0010
struct FCreativeModeGridCellChangeInfo
{
	struct FIntVector                                  CellIndex;                                                // 0x0000(0x000C) (IsPlainOldData)
	bool                                               LoadState;                                                // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Creative.UGCTimerContext
// 0x0010
struct FUGCTimerContext
{
	struct FTimerHandle                                TimerHandle;                                              // 0x0000(0x0008) (BlueprintVisible)
	int                                                UGCGameTimerIdx;                                          // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLoop;                                                  // 0x000C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Creative.BattleVoiceUserItem
// 0x0010
struct FBattleVoiceUserItem
{
	uint64_t                                           UID;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                VoiceMemberID;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Creative.StorageItemInfo
// 0x0008
struct FStorageItemInfo
{
	int                                                ItemId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemNum;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.CreativeTranslationEntry
// 0x0020
struct FCreativeTranslationEntry
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Creative.CreativeAudioActorInfo
// 0x0010
struct FCreativeAudioActorInfo
{
	int                                                audioID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RangeType;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AudienceType;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CanShow;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.CreativeTimerActorInfo
// 0x0010
struct FCreativeTimerActorInfo
{
	float                                              StartTime;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PassedTime;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TimerState;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.DancerDeviceSyncPlayerAvatarDataInfo
// 0x001C
struct FDancerDeviceSyncPlayerAvatarDataInfo
{
	int                                                ItemId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAvatarCustom                               CustomData;                                               // 0x0004(0x0018)
};

// ScriptStruct Creative.DancerDeviceSyncPlayerInfo
// 0x0048
struct FDancerDeviceSyncPlayerInfo
{
	uint32_t                                           PlayerKey;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerSex;                                                // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FDancerDeviceSyncPlayerAvatarDataInfo       HeadAvatarData;                                           // 0x0008(0x001C)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FDancerDeviceSyncPlayerAvatarDataInfo> AvatarDataList;                                           // 0x0028(0x0010) (ZeroConstructor)
	int                                                PlayingActionID;                                          // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	double                                             StartPlayActionServerTime;                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Creative.DancerDeviceActorConfigInfo
// 0x0030
struct FDancerDeviceActorConfigInfo
{
	int8_t                                             DancerType;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaterialType;                                             // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              ScaleValue;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ActionPlayMode;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayInterval;                                             // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ShowBaseMesh;                                             // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ShowBaseLight;                                            // 0x000B(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               SyncPlayerBaseAction;                                     // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FLinearColor                                LightColor;                                               // 0x0010(0x0010) (IsPlainOldData)
	TArray<uint32_t>                                   ActionIDList;                                             // 0x0020(0x0010) (ZeroConstructor)
};

}

