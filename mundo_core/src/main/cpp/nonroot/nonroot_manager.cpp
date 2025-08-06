/*
 * NonRoot Manager - DEPRECATED
 *
 * This file previously contained Frida Gadget integration functions.
 *
 * ARCHITECTURE CHANGE:
 * Frida Gadget has been completely replaced by ptrace-based injection
 * integrated directly into libbearmod.so via libclient_static.
 *
 * All non-root injection functionality is now handled by:
 * - app/src/main/cpp/BYPASS/injection.cpp (ptrace-based injection)
 * - app/src/main/cpp/BYPASS/Substrate/ (A64HookFunction/MSHookFunction)
 * - app/src/main/java/com/bearmod/injection/HybridInjectionManager.java
 *
 * Benefits of new architecture:
 * - Smaller APK size (no 20MB+ Frida Gadget)
 * - Better stealth (no Frida signatures)
 * - Faster performance (direct native hooks)
 * - Same non-root compatibility
 *
 * If mundo_core needs injection capabilities, it should use JNI bridges
 * to libbearmod.so's ptrace-based injection system.
 */

#include <android/log.h>

#define LOG_TAG "Mundo.NonRoot"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

namespace Mundo {
    namespace NonRoot {

        // All Frida Gadget functions have been removed.
        // Use HybridInjectionManager in libbearmod.so for injection capabilities.

    } // namespace NonRoot
} // namespace Mundo