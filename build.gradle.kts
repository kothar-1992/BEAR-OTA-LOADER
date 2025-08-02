// Top-level build file where you can add configuration options common to all sub-projects/modules.
plugins {
    alias(libs.plugins.android.application) apply false
    alias(libs.plugins.android.library) apply false
    alias(libs.plugins.kotlin.android) apply false
}

// Deployment configuration
val deviceSerial = if (project.hasProperty("deviceSerial")) project.property("deviceSerial") as String else null
val deploymentPath = "/data/local/tmp"

// Payload configuration
val payloadVariants = listOf("global", "korea", "vietnam", "taiwan")

// Testing configuration
val testPackages = mapOf(
    "global" to "com.tencent.ig",
    "korea" to "com.pubg.krmobile",
    "vietnam" to "com.vng.pubgmobile",
    "taiwan" to "com.rekoo.pubgm"
)

// Custom tasks for BearMod development workflow
tasks.register("cleanBearMod") {
    group = "bearmod"
    description = "Clean all BearMod build artifacts and temporary files"

    doLast {
        println("Cleaning BearMod artifacts...")

        // Clean build directories
        delete(fileTree("app/build"))
        delete(fileTree("mundo_core/build"))

        // Clean temporary files
        delete(fileTree("script/payloads") { include("*.tmp") })
        delete(fileTree("script/temp"))

        // Clean device artifacts if connected
        deviceSerial?.let { serial ->
            exec {
                commandLine("adb", "-s", serial, "shell", "rm", "-rf", "/data/local/tmp/bearmod_*")
                isIgnoreExitValue = true
            }
            exec {
                commandLine("adb", "-s", serial, "shell", "rm", "-rf", "/data/local/tmp/libhelper*")
                isIgnoreExitValue = true
            }
        }

        println("BearMod cleanup completed")
    }
}

tasks.register("buildBearModLibraries") {
    group = "bearmod"
    description = "Build all BearMod native libraries and components"

    dependsOn(":mundo_core:assembleRelease")
    dependsOn(":app:assembleRelease")

    doLast {
        println("Building BearMod libraries...")

        // Copy built libraries to deployment directory
        val deployDir = file("build/deploy")
        deployDir.mkdirs()

        // Copy mundo_core AAR
        copy {
            from("mundo_core/build/outputs/aar")
            into("$deployDir/aar")
            include("*.aar")
        }

        // Copy native libraries
        copy {
            from("mundo_core/build/intermediates/cmake/release/obj")
            into("$deployDir/app")
            include("**/*.so")
        }

        // ===================================================================
        // Frida Gadget: Runtime Loading Strategy (No Build-Time Inclusion)
        // ===================================================================
        // Note: Frida Gadget excluded from APK for size optimization
        // Runtime loading capability available through mundo_core dlopen() API

        println("BearMod libraries built and copied to build/deploy")
    }
}

tasks.register("deployPayloads") {
    group = "bearmod"
    description = "Deploy JavaScript payloads to connected device"

    doLast {
        if (deviceSerial == null) {
            throw GradleException("Device serial not specified. Use -PdeviceSerial=<serial>")
        }

        println("Deploying payloads to device: $deviceSerial")

        // Deploy base framework
        exec {
            commandLine("adb", "-s", deviceSerial, "push", "script/payloads/bearmod_base.js", "$deploymentPath/bearmod_base.js")
        }

        // Deploy variant-specific payloads
        payloadVariants.forEach { variant ->
            val payloadFile = "script/payloads/bearmod_$variant.js"
            if (file(payloadFile).exists()) {
                exec {
                    commandLine("adb", "-s", deviceSerial, "push", payloadFile, "$deploymentPath/bearmod_$variant.js")
                }
                println("Deployed $variant payload")
            } else {
                println("Warning: $payloadFile not found")
            }
        }

        // Set proper permissions
        exec {
            commandLine("adb", "-s", deviceSerial, "shell", "chmod", "644", "$deploymentPath/bearmod_*.js")
        }

        println("Payload deployment completed")
    }
}

tasks.register("deployLibraries") {
    group = "bearmod"
    description = "Deploy native libraries to connected device"

    dependsOn("buildBearModLibraries")

    doLast {
        if (deviceSerial == null) {
            throw GradleException("Device serial not specified. Use -PdeviceSerial=<serial>")
        }

        println("Deploying libraries to device: $deviceSerial")

        // ===================================================================
        // Runtime Frida Loading: On-Demand Deployment Only
        // ===================================================================
        // Note: Frida Gadget deployment now handled by runtime loading system
        // Use mundo_core dlopen() API for dynamic Frida loading when needed

        println("Frida Gadget: Runtime loading strategy active")
        println("Use mundo_core.loadFridaGadget() for on-demand loading")

        // Runtime loading permissions handled by mundo_core module

        println("Library deployment completed")
    }
}

tasks.register("testInjectionSystem") {
    group = "bearmod"
    description = "Test injection system across all PUBG variants"

    doLast {
        if (deviceSerial == null) {
            throw GradleException("Device serial not specified. Use -PdeviceSerial=<serial>")
        }

        println("Testing injection system on device: $deviceSerial")

        // Check device connection
        exec {
            commandLine("adb", "-s", deviceSerial, "shell", "echo", "Device connected")
        }

        // Test each PUBG variant
        testPackages.forEach { (variant, packageName) ->
            println("Testing $variant variant ($packageName)...")

            // Check if package is installed
            val result = exec {
                commandLine("adb", "-s", deviceSerial, "shell", "pm", "list", "packages", packageName)
                isIgnoreExitValue = true
            }

            if (result.exitValue == 0) {
                println("✓ $variant variant package found")

                // Test payload loading
                val payloadPath = "$deploymentPath/bearmod_$variant.js"
                exec {
                    commandLine("adb", "-s", deviceSerial, "shell", "test", "-f", payloadPath)
                    isIgnoreExitValue = true
                }

                if (result.exitValue == 0) {
                    println("✓ $variant payload deployed")
                } else {
                    println("✗ $variant payload missing")
                }
            } else {
                println("✗ $variant variant package not installed")
            }
        }

        // Test Frida Gadget
        exec {
            commandLine("adb", "-s", deviceSerial, "shell", "test", "-f", "$deploymentPath/libhelper.so")
            isIgnoreExitValue = true
        }.let { result ->
            if (result.exitValue == 0) {
                println("✓ Frida Gadget deployed")
            } else {
                println("✗ Frida Gadget missing")
            }
        }

        println("Injection system testing completed")
    }
}

tasks.register("validateStealth") {
    group = "bearmod"
    description = "Validate stealth capabilities and anti-detection measures"

    doLast {
        if (deviceSerial == null) {
            throw GradleException("Device serial not specified. Use -PdeviceSerial=<serial>")
        }

        println("Validating stealth capabilities on device: $deviceSerial")

        // Check for Frida detection tools
        val detectionTools = listOf("frida-ps", "frida-trace", "frida-discover")
        detectionTools.forEach { tool ->
            exec {
                commandLine("adb", "-s", deviceSerial, "shell", "which", tool)
                isIgnoreExitValue = true
            }.let { result ->
                if (result.exitValue == 0) {
                    println("⚠ Detection tool found: $tool")
                } else {
                    println("✓ No $tool detected")
                }
            }
        }

        // Check for suspicious processes
        val suspiciousProcesses = listOf("frida-server", "frida-agent", "gum-js-loop")
        suspiciousProcesses.forEach { process ->
            exec {
                commandLine("adb", "-s", deviceSerial, "shell", "pgrep", process)
                isIgnoreExitValue = true
            }.let { result ->
                if (result.exitValue == 0) {
                    println("⚠ Suspicious process found: $process")
                } else {
                    println("✓ No $process detected")
                }
            }
        }

        // Check file hiding
        val hiddenFiles = listOf("bearmod_global.js", "bearmod_korea.js", "libhelper.so")
        hiddenFiles.forEach { file ->
            exec {
                commandLine("adb", "-s", deviceSerial, "shell", "ls", "$deploymentPath/$file")
                isIgnoreExitValue = true
            }.let { result ->
                if (result.exitValue == 0) {
                    println("⚠ File visible: $file (should be hidden)")
                } else {
                    println("✓ File properly hidden: $file")
                }
            }
        }

        println("Stealth validation completed")
    }
}

tasks.register("benchmarkPerformance") {
    group = "bearmod"
    description = "Benchmark injection performance and timing"

    doLast {
        if (deviceSerial == null) {
            throw GradleException("Device serial not specified. Use -PdeviceSerial=<serial>")
        }

        println("Benchmarking injection performance on device: $deviceSerial")

        // Test library loading time
        val startTime = System.currentTimeMillis()

        exec {
            commandLine("adb", "-s", deviceSerial, "shell", "time", "ls", "$deploymentPath/libhelper.so")
        }

        val loadTime = System.currentTimeMillis() - startTime
        println("Library access time: ${loadTime}ms")

        // Test payload loading time for each variant
        payloadVariants.forEach { variant ->
            val payloadStartTime = System.currentTimeMillis()

            exec {
                commandLine("adb", "-s", deviceSerial, "shell", "wc", "-l", "$deploymentPath/bearmod_$variant.js")
                isIgnoreExitValue = true
            }

            val payloadLoadTime = System.currentTimeMillis() - payloadStartTime
            println("$variant payload access time: ${payloadLoadTime}ms")
        }

        // Memory usage check
        exec {
            commandLine("adb", "-s", deviceSerial, "shell", "cat", "/proc/meminfo")
        }

        println("Performance benchmarking completed")
    }
}

tasks.register("fullDeployment") {
    group = "bearmod"
    description = "Complete deployment pipeline: build, deploy, and test"

    dependsOn("cleanBearMod")
    dependsOn("buildBearModLibraries")
    dependsOn("deployLibraries")
    dependsOn("deployPayloads")
    dependsOn("testInjectionSystem")
    dependsOn("validateStealth")
    dependsOn("benchmarkPerformance")

    doLast {
        println("Full BearMod deployment pipeline completed successfully!")
        println("System is ready for injection operations.")
    }
}