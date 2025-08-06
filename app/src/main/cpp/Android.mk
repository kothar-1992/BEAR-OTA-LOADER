LOCAL_PATH := $(call my-dir)
MAIN_LOCAL_PATH := $(call my-dir)

# ⬅️ Include libclient_static first
include $(LOCAL_PATH)/BYPASS/Bypass.mk

# ⬅️ Restore LOCAL_PATH after BYPASS include
LOCAL_PATH := $(MAIN_LOCAL_PATH)

# Prebuilt libraries
include $(CLEAR_VARS)
LOCAL_MODULE := libcurl
LOCAL_SRC_FILES := Data_Folder/curl/curl-android-$(TARGET_ARCH_ABI)/lib/libcurl.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libdobby
LOCAL_SRC_FILES := Data_Folder/Helper/Dobby/libraries/$(TARGET_ARCH_ABI)/libdobby.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libssl
LOCAL_SRC_FILES := Data_Folder/curl/openssl-android-$(TARGET_ARCH_ABI)/lib/libssl.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libcrypto
LOCAL_SRC_FILES := Data_Folder/curl/openssl-android-$(TARGET_ARCH_ABI)/lib/libcrypto.a
include $(PREBUILT_STATIC_LIBRARY)

# Main BearMod Shared Lib
include $(CLEAR_VARS)
LOCAL_MODULE := bearmod

LOCAL_CPPFLAGS := -w -std=c++17 -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -fno-rtti -fpermissive
LOCAL_CFLAGS   := -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -fno-rtti -fpermissive
LOCAL_LDFLAGS  := -Wl,--gc-sections,--strip-all

# Debug vs Release
ifeq ($(APP_OPTIM),debug)
    LOCAL_CPPFLAGS += -DDEBUG_BUILD -g -O0
else
    LOCAL_CPPFLAGS += -DPRODUCTION_BUILD -Os -fomit-frame-pointer
endif

# Only include BearMod-specific sources
LOCAL_SRC_FILES := \
    main.cpp \
    Data_Folder/base64/base64.cpp \
    Data_Folder/Time/Time.cpp \
    Data_Folder/Helper/tools.cpp \
    Data_Folder/Helper/ElfImg.cpp \
    Data_Folder/Helper/fake_dlfcn.cpp \
    Data_Folder/Helper/plthook_elf.cpp \
    Data_Folder/Helper/ImguiPP.cpp \
    Data_Folder/Helper/android_native_app_glue.c \
    Data_Folder/imgui/imgui.cpp \
    Data_Folder/imgui/imgui_draw.cpp \
    Data_Folder/imgui/imgui_demo.cpp \
    Data_Folder/imgui/imgui_tables.cpp \
    Data_Folder/imgui/imgui_widgets.cpp \
    Data_Folder/imgui/imgui_impl_android.cpp \
    Data_Folder/imgui/imgui_impl_opengl3.cpp \
    Data_Folder/imgui/stb_image.cpp \
    nrg_hook/xhook.c \
    nrg_hook/xh_core.c \
    nrg_hook/xh_elf.c \
    nrg_hook/xh_jni.c \
    nrg_hook/xh_log.c \
    nrg_hook/xh_util.c \
    nrg_hook/xh_version.c \
    SDK/ARMP_PUBGM_Basic.cpp \
    SDK/ARMP_PUBGM_Basic_functions.cpp \
    SDK/ARMP_PUBGM_CoreUObject_functions.cpp \
    SDK/ARMP_PUBGM_Engine_functions.cpp \
    SDK/ARMP_PUBGM_ShadowTrackerExtra_functions.cpp \
    SDK/ARMP_PUBGM_Client_functions.cpp

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH) \
    $(LOCAL_PATH)/Data_Folder/curl/curl-android-$(TARGET_ARCH_ABI)/include \
    $(LOCAL_PATH)/Data_Folder/curl/openssl-android-$(TARGET_ARCH_ABI)/include \
    $(LOCAL_PATH)/BYPASS

LOCAL_STATIC_LIBRARIES := libclient_static libcurl libdobby libssl libcrypto

# Exception handling required for mundo_core integration and error handling
LOCAL_CPP_FEATURES := exceptions

# Optimized linker libraries for ptrace-based injection + ESP overlay rendering
LOCAL_LDLIBS := -llog -landroid -lEGL -lGLESv3 -lz
# Removed: -lGLESv2 -lGLESv1_CM (redundant - GLESv3 includes v2 functionality)
include $(BUILD_SHARED_LIBRARY)