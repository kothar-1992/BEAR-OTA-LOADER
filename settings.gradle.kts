pluginManagement {
    repositories {
        google {
            content {
                includeGroupByRegex("com\\.android.*")
                includeGroupByRegex("com\\.google.*")
                includeGroupByRegex("androidx.*")
            }
        }
        mavenCentral()
        gradlePluginPortal()
    }
}

dependencyResolutionManagement {
    repositoriesMode.set(RepositoriesMode.FAIL_ON_PROJECT_REPOS)
    repositories {
        google()
        mavenCentral()
        maven { url = uri("https://jitpack.io") } // For KeyAuth SDK
    }
}

rootProject.name = "Bear-Loader"

// ===================================================================
// BearMod Native Runtime Container - Multi-Module Build Configuration
// ===================================================================
//
// Build Architecture:
//   mundo_core (libmundo.so) → Plugin (production APK)
//                            → app (development APK + libbearmod.so)
//
// Module Dependencies:
//   1. mundo_core: Native Runtime Container (builds first)
//   2. app: Development/debug app (depends on mundo_core)
// ===================================================================

// 1. mundo_core: Native Runtime Container Module
//    - Type: Native C++ library using Android NDK
//    - Output: libmundo.so or AAR (arm64-v8a, armeabi-v7a)
//    - Build System: Android.mk (existing at mundo_core/Android.mk)
//    - Role: Security, injection, KeyAuth bridge APIs
//    - Auto-copy: Distributes libmundo.so to and app/ modules
include(":mundo_core")
// 2. app: BearMod Development App Module
//    - Type: Android application with native components
//    - Output: Debug APK + libbearmod.so
//    - Dependencies: Links with libmundo.so for testing
//    - Entry Point: com.bearmod.Launcher
//    - Features: ESP system UE4, floating services, debug tools
include(":app")
