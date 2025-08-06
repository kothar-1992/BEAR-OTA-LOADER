#ifndef MUNDO_API_H
#define MUNDO_API_H

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

// Mundo API Version
#define MUNDO_API_VERSION "2.0.0"

// Configuration structure
typedef struct {
    const char* keyauth_token;
    const char* bear_token;
    const char* target_package;
    int security_level;          // 0=minimal, 1=standard, 2=maximum
    bool enable_nonroot;
    bool enable_anti_hook;
    bool enable_stealth;
} MundoConfig;

// Initialization result
typedef struct {
    bool success;
    const char* message;
    const char* version;
    int security_status;
    bool nonroot_available;
} MundoInitResult;

// Core API functions
JNIEXPORT MundoInitResult JNICALL mundo_initialize(JNIEnv* env, jobject context, const MundoConfig* config);
JNIEXPORT void JNICALL mundo_shutdown();
JNIEXPORT bool JNICALL mundo_is_initialized();

// Authentication API
JNIEXPORT bool JNICALL mundo_authenticate_keyauth(const char* bear_token);
JNIEXPORT bool JNICALL mundo_validate_license();

// Security API
JNIEXPORT bool JNICALL mundo_enable_anti_hook_protection();
JNIEXPORT int JNICALL mundo_get_threat_level();
JNIEXPORT const char* JNICALL mundo_get_security_status();

// Non-root injection API
JNIEXPORT bool JNICALL mundo_inject_to_package(const char* package_name);
JNIEXPORT bool JNICALL mundo_is_injection_active();

// Game modification API
JNIEXPORT bool JNICALL mundo_enable_esp(bool enable);
JNIEXPORT bool JNICALL mundo_enable_skin_mods(bool enable);

// Utility API
JNIEXPORT const char* JNICALL mundo_get_version();
JNIEXPORT const char* JNICALL mundo_get_last_error();

#ifdef __cplusplus
}
#endif

#endif // MUNDO_API_H