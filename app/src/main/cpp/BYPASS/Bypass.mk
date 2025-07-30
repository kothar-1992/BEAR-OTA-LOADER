LOCAL_PATH := $(call my-dir)
MAIN_LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE    := BEAR

LOCAL_CFLAGS := -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w
LOCAL_CFLAGS += -fno-rtti -fno-exceptions -fpermissive
LOCAL_CPPFLAGS := -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w -Werror -s
LOCAL_CPPFLAGS += -Wno-error=c++11-narrowing -fms-extensions -fno-rtti -fno-exceptions -fpermissive
LOCAL_LDFLAGS += -Wl,--gc-sections,--strip-all, -llog 
LOCAL_ARM_MODE := arm
LOCAL_CPPFLAGS += -w -std=c++17

LOCAL_C_INCLUDES += $(MAIN_LOCAL_PATH)

LOCAL_LDFLAGS := -landroid -llog -lz
LOCAL_SRC_FILES 		:=  BYPASS.cpp \
                         patch/KittyMemory.cpp \
	                     patch/MemoryPatch.cpp \
                         patch/MemoryBackup.cpp \
                         patch/KittyUtils.cpp \
                         Substrate/hde64.c \
                         Substrate/SubstrateDebug.cpp \
                         Substrate/SubstrateHook.cpp \
                         Substrate/SubstratePosixMemory.cpp \
                         Substrate/And64InlineHook.cpp \

        

LOCAL_CPP_FEATURES                      := exceptions
include $(BUILD_SHARED_LIBRARY)






