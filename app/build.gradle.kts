plugins {
    alias(libs.plugins.android.application)
    alias(libs.plugins.kotlin.android)
}

android {
    namespace = "com.bearmod"
    compileSdk = 36
    lint {
        baseline = file("lint-baseline.xml")
    }
    defaultConfig {
        applicationId = "com.bearmod"
        minSdk = 28
        //noinspection OldTargetApi
        targetSdk = 35
        versionCode = 1
        versionName = "1.3"
        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
        ndk {
            abiFilters.add("arm64-v8a") // This tells Gradle to only build for arm64-v8a
        }
        multiDexEnabled = false

        // Development app configuration
        buildConfigField("String", "MUNDO_VERSION", "\"1.0.0\"")
        buildConfigField("String", "APP_TYPE", "\"DEVELOPMENT\"")
        buildConfigField("boolean", "DEBUG_TOOLS_ENABLED", "true")

        // BearMod v2.0 Configuration
        buildConfigField("boolean", "NONROOT_INJECTION_ENABLED", "true")
        buildConfigField("boolean", "ENHANCED_SECURITY_ENABLED", "true")
        buildConfigField("String", "BEARMOD_VERSION", "\"2.0\"")
    }

    // APK Signing Configuration
    signingConfigs {
        create("release") {
            val keystorePath = System.getenv("BEARMOD_KEYSTORE_PATH")
                ?: project.findProperty("BEARMOD_KEYSTORE_PATH") as String?
                ?: "C:\\Users\\BearOwner\\BearOwner.jks"

            val keystoreFile = file(keystorePath)
            if (keystoreFile.exists()) {
                storeFile = keystoreFile
                storePassword = System.getenv("BEARMOD_KEYSTORE_PASSWORD")
                    ?: project.findProperty("BEARMOD_KEYSTORE_PASSWORD") as String?
                keyAlias = System.getenv("BEARMOD_KEY_ALIAS")
                    ?: project.findProperty("BEARMOD_KEY_ALIAS") as String?
                keyPassword = System.getenv("BEARMOD_KEY_PASSWORD")
                    ?: project.findProperty("BEARMOD_KEY_PASSWORD") as String?

                // Enable V1 and V2 signature schemes for maximum compatibility
                enableV1Signing = true
                enableV2Signing = true
                enableV3Signing = true
                enableV4Signing = true

                println("✅ BearMod signing configured with keystore: $keystorePath")
            } else {
                println("⚠️  Keystore not found at: $keystorePath")
                println("   Release builds will be unsigned. Please check keystore path.")
            }
        }

        // Debug signing config (uses default debug keystore)
        getByName("debug") {
            // Android Studio default debug keystore
            // This will be automatically used for debug builds
        }
    }

    buildTypes {
        debug {
            isDebuggable = true
            isJniDebuggable = true
            isMinifyEnabled = false
            // Use debug signing config (default Android debug keystore)
            signingConfig = signingConfigs.getByName("debug")
            // Development/debug configuration
            buildConfigField("boolean", "MUNDO_INTEGRATION", "true")
            buildConfigField("String", "BUILD_TYPE", "\"DEBUG\"")
        }
        release {
            isDebuggable = false
            isJniDebuggable = false
            isMinifyEnabled = false
            proguardFiles(getDefaultProguardFile("proguard-android-optimize.txt"), "proguard-rules.pro")
            // Use release signing config (BearOwner keystore)
            signingConfig = signingConfigs.getByName("release")
            // Release configuration for testing
            buildConfigField("boolean", "MUNDO_INTEGRATION", "true")
            buildConfigField("String", "BUILD_TYPE", "\"RELEASE\"")

            // BearMod v2.0 Release Configuration
            buildConfigField("boolean", "NONROOT_INJECTION_ENABLED", "true")
          //  buildConfigField("String", "KEYAUTH_API_VERSION", "\"1.3\"")
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
                    "**/libclient_static.so", //anti_hook (integrated into libbearmod.so)
                    "**/libc++_shared.so",
                    "**/libmundo.so" //mundo_core
                    // Removed: libhelper-*.so (Frida gadget replaced by ptrace-based injection)
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
    jvmTarget = "17"
}
    buildFeatures {
        viewBinding = true  // Enable ViewBinding
        buildConfig = true  // Enable BuildConfig generation
    }
    testOptions {
        unitTests {
            isIncludeAndroidResources = true
        }
    }
}

dependencies {
    // ===================================================================
    // Native Runtime Container Integration
    // ===================================================================
    implementation(project(":mundo_core"))

    implementation(libs.appcompat)
    implementation(libs.core)

    // Animation libraries
    implementation(libs.dynamicanimation)
    implementation(libs.interpolator)

    // Secure OTA Dependencies
    implementation("net.lingala.zip4j:zip4j:2.11.5") // For password-protected ZIP extraction
    implementation("com.squareup.okhttp3:okhttp:4.12.0") // HTTP client for KeyAuth integration

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
