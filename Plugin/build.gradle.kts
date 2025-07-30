plugins {
    alias(libs.plugins.kotlin.android)
    alias(libs.plugins.android.application)
}

// ===================================================================
// Plugin Module: Production Loader App
// ===================================================================
// Role: Production APK for end users
// Dependencies: Consumes libmundo.so from mundo_core module
// Features: OTA updates, KeyAuth authentication, secure game launching

android {
    namespace = "com.bearmod.loader"
    compileSdk = 36

    defaultConfig {
        applicationId = "com.bearmod.loader"
        minSdk = 28
        targetSdk = 35
        versionCode = 1
        versionName = "1.3"
        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
        // Plugin includes libmundo.so from mundo_core module

        // Production loader configuration
        buildConfigField ("String", "MUNDO_VERSION", "\"1.0.0\"")
        buildConfigField ("String", "LOADER_TYPE", "\"PRODUCTION\"")
        buildConfigField ("boolean", "AUTO_COPY_ENABLED", "true")
    }

    buildTypes {
        release {
            isMinifyEnabled = true  // ✅ Re-enabled with mundo_core preservation rules
            proguardFiles (getDefaultProguardFile("proguard-android-optimize.txt"), "proguard-rules.pro")

            // Pure launcher configuration
            buildConfigField ("boolean", "ENABLE_OTA_UPDATES", "true")
            buildConfigField ("boolean", "ENABLE_KEYAUTH", "true")
            buildConfigField ("String", "BUILD_TYPE", "\"RELEASE\"")
        }
        debug {
          isMinifyEnabled = false
            // Debug launcher configuration
            buildConfigField ("boolean", "ENABLE_OTA_UPDATES", "false")
            buildConfigField ("boolean", "ENABLE_KEYAUTH", "true")
            buildConfigField ("String", "BUILD_TYPE", "\"DEBUG\"")
        }
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }

    buildFeatures {
        viewBinding = true
        buildConfig = true
    }
}

dependencies {
    implementation(project(":mundo_core"))
    // Core Android dependencies
    implementation(libs.appcompat)
    implementation(libs.material)
    implementation(libs.constraintlayout)
    implementation(libs.constraintlayout.v214)// Use the latest stable version
    //

    // Navigation components
    implementation(libs.navigation.fragment)
    implementation(libs.navigation.ui)

    // Lifecycle components
    implementation(libs.lifecycle.viewmodel)
    implementation(libs.lifecycle.livedata)

    // Network
    implementation(libs.retrofit)
    implementation(libs.retrofit.gson)
    implementation(libs.okhttp)
    implementation(libs.okhttp.logging)
    implementation(libs.gson)

    // SwipeRefreshLayout
    implementation(libs.swiperefreshlayout)

    // Database
    implementation(libs.room.runtime)
    implementation(libs.fragment)
    implementation(libs.recyclerview)
    annotationProcessor(libs.room.compiler)

    // Image loading
    implementation(libs.glide)

    // UI effects
    implementation(libs.shimmer)
    implementation(libs.lottie)

    // ExoPlayer for video playback
    implementation(libs.exoplayer)

    // Direct KeyAuth API implementation
    implementation(libs.okhttp)
    implementation(libs.okhttp.logging)
    implementation(libs.json)

    // Room database
    implementation(libs.room.runtime.v271)
    implementation(libs.room.ktx.v271)
    annotationProcessor(libs.room.compiler.v271)

    // OkHttp for networking
    implementation(libs.okhttp)
    implementation(libs.okhttp.logging)

    // Retrofit for API calls
    implementation(libs.retrofit.v2110)
    implementation(libs.converter.gson.v2110)
    implementation(libs.fragment)

    // WorkManager
    implementation(libs.work.runtime)
    implementation(libs.room.ktx)
    implementation(libs.work.runtime.ktx) // Add this for Kotlin coroutines

    // For ListenableFuture support
    implementation(libs.concurrent.futures)
    implementation(libs.guava)

    // WebSocket
    implementation(libs.websocket)

    // Testing
    testImplementation(libs.junit)
    testImplementation(libs.mockito.core)
    androidTestImplementation(libs.ext.junit)
    androidTestImplementation(libs.espresso.core)
    androidTestImplementation(libs.mockito.android)

}

// ===================================================================
// Plugin Module Configuration Summary
// ===================================================================
println ("📱 Plugin module configured:")
println ("   → Production Loader App (com.bearmod.loader)")
println ("   → Depends on mundo_core for libmundo.so")
println ("   → Entry Point: com.bearmod.loader.MainActivity")
println ("   → Features: OTA updates, KeyAuth auth, secure launching")
println ("   → Build: Release-optimized with obfuscation")