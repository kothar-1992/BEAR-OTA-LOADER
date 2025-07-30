plugins {
    alias(libs.plugins.android.application)
}

android {
    namespace = "com.bearmod"
    compileSdk = 36

    defaultConfig {
        applicationId = "com.bearmod"
        minSdk = 28
        //noinspection OldTargetApi
        targetSdk = 35
        versionCode = 1
        versionName = "Bear-App"
        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
        ndk {
            //noinspection ChromeOsAbiSupport
            abiFilters += listOf("arm64-v8a")
        }
        multiDexEnabled = false
    }

    buildTypes {
        release {
            isMinifyEnabled = true
            proguardFiles(
                getDefaultProguardFile("proguard-android-optimize.txt"),
                "proguard-rules.pro"
            )
        }
        debug {
            isJniDebuggable = true
        }
    }
    externalNativeBuild {
        ndkBuild {
            path = file("src/main/cpp/Android.mk")
        }
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }
    ndkVersion = "27.1.12297006"
}
/* 
    packaging {
        resources {
            excludes += listOf(
                "META-INF/DEPENDENCIES",
                "META-INF/LICENSE",
                "META-INF/LICENSE.txt",
                "META-INF/license.txt",
                "META-INF/NOTICE",
                "META-INF/NOTICE.txt",
                "META-INF/notice.txt",
                "META-INF/ASL2.0",
                "META-INF/*.kotlin_module",
                "/META-INF/{AL2.0,LGPL2.1}"
            )
        }
}
*/

 */
dependencies {
    // ===================================================================
    // Native Runtime Container Integration
    // ===================================================================
    implementation(project(":mundo_core"))
    implementation(libs.core)
/*
    // Animation libraries
    implementation(libs.dynamicanimation)
    implementation(libs.interpolator)

    // Networking dependencies for KeyAuth
    implementation(libs.retrofit)
    implementation(libs.converter.gson.v2110)
    implementation(libs.okhttp.v4120)
    implementation(libs.logging.interceptor.v4120)
    implementation(libs.gson)

    // Security dependencies
    implementation(libs.security.crypto)
    implementation(libs.core.ktx)
*/

}

// ===================================================================
// app Module Configuration Summary
// ===================================================================
println("🛠️  app module configured:")
println("   → BearMod Development App (com.bearmod)")
println("   → Depends on mundo_core for libmundo.so testing")
println("   → Features: ESP system UE4, floating services, debug tools")
println("   → Build: Debug-enabled with JNI debugging and memory tracing")
println("   → Native: Android.mk build system with fixed UE4 functions")
