#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PixUI.EPxKeyboardTypes
enum class EPxKeyboardTypes : uint8_t
{
	EPxKeyboardTypes__Default      = 0,
	EPxKeyboardTypes__Number       = 1,
	EPxKeyboardTypes__Password     = 2,
	EPxKeyboardTypes__MultiLine    = 3,
	EPxKeyboardTypes__EPxKeyboardTypes_MAX = 4
};


// Enum PixUI.EPxWidgetTransformType
enum class EPxWidgetTransformType : uint8_t
{
	EPxWidgetTransformType__MoveBy = 0,
	EPxWidgetTransformType__MoveTo = 1,
	EPxWidgetTransformType__ResizeBy = 2,
	EPxWidgetTransformType__ResizeTo = 3,
	EPxWidgetTransformType__ScrollBy = 4,
	EPxWidgetTransformType__ScrollTo = 5,
	EPxWidgetTransformType__Count  = 6,
	EPxWidgetTransformType__EPxWidgetTransformType_MAX = 7
};


// Enum PixUI.EPxFontFaceType
enum class EPxFontFaceType : uint8_t
{
	EPxFontFaceType__FaceType100   = 0,
	EPxFontFaceType__FaceType200   = 1,
	EPxFontFaceType__FaceType300   = 2,
	EPxFontFaceType__FaceType350   = 3,
	EPxFontFaceType__FaceType400   = 4,
	EPxFontFaceType__FaceType500   = 5,
	EPxFontFaceType__FaceType600   = 6,
	EPxFontFaceType__FaceType700   = 7,
	EPxFontFaceType__FaceType800   = 8,
	EPxFontFaceType__FaceType900   = 9,
	EPxFontFaceType__FaceType950   = 10,
	EPxFontFaceType__EPxFontFaceType_MAX = 11
};


// Enum PixUI.EPxDynamicTextureUpdateMode
enum class EPxDynamicTextureUpdateMode : uint8_t
{
	EPxDynamicTextureUpdateMode__UpdateRegion = 0,
	EPxDynamicTextureUpdateMode__UpdateBulkData = 1,
	EPxDynamicTextureUpdateMode__EPxDynamicTextureUpdateMode_MAX = 2
};


// Enum PixUI.EPxKeyEventType
enum class EPxKeyEventType : uint8_t
{
	EPxKeyEventType__KeyDown       = 0,
	EPxKeyEventType__KeyUp         = 1,
	EPxKeyEventType__EPxKeyEventType_MAX = 2
};


// Enum PixUI.EPxMouseType
enum class EPxMouseType : uint8_t
{
	EPxMouseType__MouseLeft        = 0,
	EPxMouseType__MouseRight       = 1,
	EPxMouseType__MouseMiddle      = 2,
	EPxMouseType__MouseThumb       = 3,
	EPxMouseType__MouseThumb2      = 4,
	EPxMouseType__MouseUnknown     = 5,
	EPxMouseType__EPxMouseType_MAX = 6
};


// Enum PixUI.EPxTouchType
enum class EPxTouchType : uint8_t
{
	EPxTouchType__TouchStart       = 0,
	EPxTouchType__TouchMoved       = 1,
	EPxTouchType__TouchEnd         = 2,
	EPxTouchType__TouchCanceled    = 3,
	EPxTouchType__EPxTouchType_MAX = 4
};


// Enum PixUI.EPxDebugInfo
enum class EPxDebugInfo : uint8_t
{
	EPxDebugInfo__ShowMouse        = 0,
	EPxDebugInfo__Count            = 1,
	EPxDebugInfo__EPxDebugInfo_MAX = 2
};


// Enum PixUI.EPxWidgetBatchType
enum class EPxWidgetBatchType : uint8_t
{
	EPxWidgetBatchType__Default    = 0,
	EPxWidgetBatchType__Auto       = 1,
	EPxWidgetBatchType__NoBatch    = 2,
	EPxWidgetBatchType__EPxWidgetBatchType_MAX = 3
};



}

