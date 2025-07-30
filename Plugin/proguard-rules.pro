# ===================================================================
# Plugin Module ProGuard Rules - Production Loader App
# ===================================================================
# Purpose: Preserve mundo_core integration while optimizing APK size
# Target: Maintain libmundo.so functionality with aggressive optimization

# ===================================================================
# mundo_core Integration Preservation
# ===================================================================
# Keep all mundo_core classes and JNI methods
-keep class com.bearmod.mundo.** { *; }
-keepclassmembers class com.bearmod.mundo.** { *; }

# Preserve native library loading
-keep class * {
    native <methods>;
}

# Keep JNI bridge methods
-keepclasseswithmembernames class * {
    native <methods>;
}

# ===================================================================
# Android Framework Preservation
# ===================================================================
# Keep essential Android components
-keep public class * extends android.app.Activity
-keep public class * extends android.app.Application
-keep public class * extends android.app.Service
-keep public class * extends android.content.BroadcastReceiver
-keep public class * extends android.content.ContentProvider

# ===================================================================
# Dependency Optimization
# ===================================================================
# Aggressive optimization for size reduction
-optimizationpasses 5
-allowaccessmodification
-dontpreverify

# Remove logging in release builds
-assumenosideeffects class android.util.Log {
    public static *** d(...);
    public static *** v(...);
    public static *** i(...);
}

# ===================================================================
# Reflection and Serialization
# ===================================================================
# Keep classes used via reflection
-keepattributes Signature
-keepattributes *Annotation*
-keepattributes EnclosingMethod

# Keep Parcelable implementations
-keep class * implements android.os.Parcelable {
    public static final android.os.Parcelable$Creator *;
}

# ===================================================================
# Dependency-Specific Rules
# ===================================================================
# OkHttp and networking dependencies
-dontwarn okhttp3.**
-dontwarn okio.**
-dontwarn javax.annotation.**
-dontwarn org.conscrypt.**
-dontwarn org.bouncycastle.**
-dontwarn org.openjsse.**

# Retrofit
-dontwarn retrofit2.**
-keep class retrofit2.** { *; }

# Gson
-dontwarn com.google.gson.**
-keep class com.google.gson.** { *; }

# Room database
-dontwarn androidx.room.**
-keep class androidx.room.** { *; }

# WorkManager
-dontwarn androidx.work.**
-keep class androidx.work.** { *; }

# Glide
-dontwarn com.bumptech.glide.**
-keep class com.bumptech.glide.** { *; }

# ===================================================================
# Missing Class Warnings Suppression
# ===================================================================
# Suppress warnings for optional dependencies
-dontwarn java.lang.instrument.ClassFileTransformer
-dontwarn sun.misc.SignalHandler
-dontwarn java.lang.instrument.Instrumentation
-dontwarn sun.misc.Signal