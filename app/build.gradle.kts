plugins {
    alias(libs.plugins.android.application)
    alias(libs.plugins.kotlin.android)
}

android {
    namespace = "com.bearmod"
    compileSdk = 36

    defaultConfig {
        applicationId = "com.bearmod"
        minSdk = 28
        //noinspection OldTargetApi
        targetSdk = 35
        versionCode = 2
        versionName = "1.3"
        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
        ndk {
            //noinspection ChromeOsAbiSupport
            abiFilters += listOf("arm64-v8a")
        }
        multiDexEnabled = false

        // Development app configuration
        buildConfigField("String", "MUNDO_VERSION", "\"1.0.0\"")
        buildConfigField("String", "APP_VERSION", "\"1.3\"")
        buildConfigField("String", "APP_TYPE", "\"DEVELOPMENT\"")
        buildConfigField("boolean", "DEBUG_TOOLS_ENABLED", "true")

        // BearMod v2.0 Configuration
        buildConfigField("boolean", "NONROOT_INJECTION_ENABLED", "true")
        buildConfigField("String", "KEYAUTH_API_VERSION", "\"1.3\"")
        buildConfigField("boolean", "ENHANCED_SECURITY_ENABLED", "true")
        buildConfigField("String", "BEARMOD_VERSION", "\"2.0\"")
    }

    buildTypes {
        debug {
            isDebuggable = true
            isJniDebuggable = true
            isMinifyEnabled = false
            // Development/debug configuration
            buildConfigField("boolean", "MUNDO_INTEGRATION", "true")
            buildConfigField("String", "BUILD_TYPE", "\"DEBUG\"")
        }
        release {
            isDebuggable = false
            isJniDebuggable = false
            isMinifyEnabled = false
            proguardFiles(getDefaultProguardFile("proguard-android-optimize.txt"), "proguard-rules.pro")
            // Release configuration for testing
            buildConfigField("boolean", "MUNDO_INTEGRATION", "true")
            buildConfigField("String", "BUILD_TYPE", "\"RELEASE\"")

            // BearMod v2.0 Release Configuration
            buildConfigField("boolean", "NONROOT_INJECTION_ENABLED", "true")
            buildConfigField("String", "KEYAUTH_API_VERSION", "\"1.3\"")
            buildConfigField("boolean", "ENHANCED_SECURITY_ENABLED", "true")
            buildConfigField("String", "BEARMOD_VERSION", "\"2.0\"")
        }
    }
/*
    buildTypes {
        release {
            isMinifyEnabled = true
            isShrinkResources = true  // Enable resource shrinking
            proguardFiles(
                getDefaultProguardFile("proguard-android-optimize.txt"),
                "proguard-rules.pro"
            )
            signingConfig = signingConfigs.getByName("debug")
        }
        debug {
            isJniDebuggable = true
        }
    }
*/
    packaging {
        jniLibs {
            pickFirsts.addAll(
                listOf(
                    "**/libhelper-64bit.so",
                    "**/libhelper-32bit.so",
                 
                    "**/libc++_shared.so",
                    "**/libmundo.so"
                )
            )
            // Native libraries handled by mundo_core module dependency
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
    kotlinOptions {
         "jvmTarget : 17"
    }
    buildFeatures {
        viewBinding = true  // Enable ViewBinding
        buildConfig = true  // Enable BuildConfig generation
    }
}

dependencies {
    // ===================================================================
    // Native Runtime Container Integration
    // ===================================================================

    implementation(project(":mundo_core"))

    // Secure OTA Dependencies
    implementation("net.lingala.zip4j:zip4j:2.11.5") // For password-protected ZIP extraction
    implementation("com.squareup.okhttp3:okhttp:4.12.0") // HTTP client for KeyAuth integration
    implementation(libs.appcompat)
    implementation(libs.core)

    // Animation libraries
    implementation(libs.dynamicanimation)
    implementation(libs.interpolator)

    // Networking dependencies for KeyAuth
    implementation(libs.retrofit)
    implementation(libs.converter.gson.v2110)
    implementation(libs.okhttp.v4120)
    implementation(libs.logging.interceptor.v4120)
    implementation(libs.gson)

    implementation ("com.squareup.okhttp3:okhttp:5.1.0")
    implementation ("com.squareup.okhttp3:logging-interceptor:5.1.0")
    implementation ("com.google.code.gson:gson:2.13.1")
    implementation ("org.json:json:20250517")

    // Security dependencies
  implementation (libs.security.crypto.v110beta01)
    implementation(libs.glide)


    implementation(libs.security.crypto)
    implementation(libs.core.ktx)

    implementation(libs.material)
    implementation(libs.constraintlayout)
    implementation(libs.constraintlayout.v214)// Use the latest stable version
    implementation(libs.navigation.fragment)

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
