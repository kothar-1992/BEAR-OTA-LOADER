LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := mundo

# Source grouping
MUNDO_SRC := \
    api/mundo_api.cpp \
    core/mundo_core.cpp \
    integration/keyauth_bridge.cpp \
    security/security_manager.cpp \
    stealth/stealth_manager.cpp \
    utils/mundo_utils.cpp \
    jni/mundo_jni_bridge.cpp

LOCAL_SRC_FILES := $(MUNDO_SRC)

# Include paths
LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)/include \
    $(LOCAL_PATH)/src \
    $(LOCAL_PATH)/../../../app/src/main/cpp/BYPASS/Substrate \
    $(LOCAL_PATH)/../../../app/src/main/cpp/BYPASS/Includes \
    $(LOCAL_PATH)/../../../app/src/main/cpp/BYPASS/config \
    $(LOCAL_PATH)/../../../app/src/main/cpp/BYPASS/patch \
    $(LOCAL_PATH)/../../../app/src/main/cpp/BYPASS/anti_hook \
    $(LOCAL_PATH)/../../../app/src/main/cpp/BYPASS/nonroot

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include

# Compiler flags
LOCAL_CPPFLAGS := \
    -std=c++17 \
    -fvisibility=hidden \
    -ffunction-sections \
    -fdata-sections \
    -Wall \
    -DMUNDO_LIBRARY_BUILD


ifeq ($(NDK_DEBUG),1)
  LOCAL_CPPFLAGS += -DDEBUG -O0 -g
else
  LOCAL_CPPFLAGS += -DNDEBUG -O2
  LOCAL_STRIP_MODULE := true
endif


# Linker flags
LOCAL_LDFLAGS := -Wl,--gc-sections

LOCAL_LDFLAGS += -Wl,--strip-all

# Libraries
LOCAL_LDLIBS := -llog -landroid -lz

include $(BUILD_SHARED_LIBRARY)
