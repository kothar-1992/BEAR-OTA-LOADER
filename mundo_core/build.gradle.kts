plugins {
    id ("com.android.library")
}

android {
    namespace = "com.bearmod.mundo"
    compileSdk = 36

    defaultConfig {
        minSdk = 24  // Lower for broader compatibility
        // Hybrid build system support: CMake (default) + Android.mk (fallback)
        externalNativeBuild {
            cmake {
                cppFlags ("-std=c++17", "-fvisibility=hidden", "-ffunction-sections", "-fdata-sections")
                arguments ("-DMUNDO_LIBRARY_BUILD=1", "-DNATIVE_RUNTIME_CONTAINER=1")
            }
            // Alternative: Android.mk support (uncomment to use existing Android.mk)
            // ndkBuild {
            //     path file('Android.mk')
            //     arguments '-j8'
            //     cFlags '-O2', '-ffunction-sections', '-fdata-sections'
            //     cppFlags '-O2', '-ffunction-sections', '-fdata-sections', '-std=c++17'
            //     abiFilters 'arm64-v8a', 'armeabi-v7a'
            // }
        }
        ndk {
            //noinspection ChromeOsAbiSupport
            abiFilters += listOf("arm64-v8a")
        }
    }

    buildTypes {
        release {
            isMinifyEnabled = false
            proguardFiles(getDefaultProguardFile("proguard-android-optimize.txt"), "proguard-rules.pro")
            externalNativeBuild {
                cmake {
                    cppFlags ("-O2", "-DNDEBUG", "-DRELEASE_BUILD")
                    arguments ("-DCMAKE_BUILD_TYPE=Release")
                }
            }
        }
        debug {
            isJniDebuggable = true
         //   isDebuggable = true

            externalNativeBuild {
                cmake {
                    cppFlags ("-g", "-O0", "-DDEBUG_BUILD")
                    arguments ("-DCMAKE_BUILD_TYPE=Debug")
                }
            }
        }
    }

    externalNativeBuild {
        cmake {
            path ("src/main/cpp/CMakeLists.txt")
            version = ("3.22.1")
        }
        // Alternative: Android.mk support (uncomment to use existing Android.mk)
        // ndkBuild {
        //     path file('Android.mk')
        // }
    }

    // Ensure proper library output
    packaging {
        jniLibs {
            pickFirsts.addAll(
                listOf(
                    "**/libc++_shared.so",
                    "**/libmundo.so"
                )
            )
        }
    }

    // Production build configuration
    buildFeatures {
        prefab = true
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }
    ndkVersion = "27.1.12297006"
}

// Final combo task
tasks.register("rebuildAndDeployLibmundo") {
    group = "mundo_core"
    description = "🛠 Clean + Build + Deploy libmundo.so to Plugin/app"

    dependsOn("cleanLibmundo", "deployLibmundo")
}



dependencies {
            
implementation (libs.appcompat)
implementation (libs.material)

testImplementation (libs.junit)
androidTestImplementation (libs.ext.junit)
androidTestImplementation (libs.espresso.core)
}

// ===================================================================
// Native Runtime Container Configuration Summary
// ===================================================================
println ("🏗️  mundo_core module configured:")
println ("   → Native Runtime Container (libmundo.so)")
println ("   → Build System: CMake (primary) + Android.mk (fallback)")
println ("   → Auto-copy to Plugin/ and app/ modules")
println ("   → Architectures: arm64-v8a, armeabi-v7a")
println ("   → Security: KeyAuth bridge, anti-hook, non-root injection")
println ("   → Integration: Bridge APIs for existing BearMod components")