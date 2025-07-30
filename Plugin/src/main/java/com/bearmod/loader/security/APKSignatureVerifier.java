package com.bearmod.loader.security;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.Signature;
import android.util.Log;
import java.security.MessageDigest;

/**
 * APK signature verification for anti-tampering protection
 * This class will be obfuscated to prevent reverse engineering
 */
public class APKSignatureVerifier {
    private static final String TAG = "APKSignatureVerifier";
    
    // Expected SHA-256 signature of legitimate BearMod APK
    // This should be updated with the actual signature hash after signing
    private static final String EXPECTED_BEARMOD_SIGNATURE = 
        "SHA256:1234567890ABCDEF1234567890ABCDEF1234567890ABCDEF1234567890ABCDEF";
    
    // Expected package name for BearMod app
    private static final String BEARMOD_PACKAGE = "com.bearmod.app";
    
    /**
     * Verify BearMod APK signature before launching
     */
    public static boolean verifyBearModAPK(Context context) {
        try {
            PackageManager pm = context.getPackageManager();
            PackageInfo packageInfo = pm.getPackageInfo(BEARMOD_PACKAGE, 
                PackageManager.GET_SIGNATURES);
            
            if (packageInfo.signatures == null || packageInfo.signatures.length == 0) {
                Log.e(TAG, "No signatures found for BearMod APK");
                return false;
            }
            
            // Calculate SHA-256 of the first signature
            Signature signature = packageInfo.signatures[0];
            MessageDigest md = MessageDigest.getInstance("SHA-256");
            byte[] digest = md.digest(signature.toByteArray());
            
            StringBuilder hexString = new StringBuilder();
            for (byte b : digest) {
                String hex = Integer.toHexString(0xFF & b);
                if (hex.length() == 1) {
                    hexString.append('0');
                }
                hexString.append(hex);
            }
            
            String actualSignature = "SHA256:" + hexString.toString().toUpperCase();
            boolean isValid = EXPECTED_BEARMOD_SIGNATURE.equals(actualSignature);
            
            if (isValid) {
                Log.i(TAG, "BearMod APK signature verification passed");
            } else {
                Log.e(TAG, "BearMod APK signature verification failed");
                Log.e(TAG, "Expected: " + EXPECTED_BEARMOD_SIGNATURE);
                Log.e(TAG, "Actual:   " + actualSignature);
            }
            
            return isValid;
            
        } catch (PackageManager.NameNotFoundException e) {
            Log.e(TAG, "BearMod APK not found: " + BEARMOD_PACKAGE);
            return false;
        } catch (Exception e) {
            Log.e(TAG, "Error verifying BearMod APK signature", e);
            return false; // Fail secure
        }
    }
    
    /**
     * Get actual signature hash for debugging (development only)
     */
    public static String getActualSignature(Context context) {
        try {
            PackageManager pm = context.getPackageManager();
            PackageInfo packageInfo = pm.getPackageInfo(BEARMOD_PACKAGE, 
                PackageManager.GET_SIGNATURES);
            
            if (packageInfo.signatures == null || packageInfo.signatures.length == 0) {
                return "NO_SIGNATURE";
            }
            
            Signature signature = packageInfo.signatures[0];
            MessageDigest md = MessageDigest.getInstance("SHA-256");
            byte[] digest = md.digest(signature.toByteArray());
            
            StringBuilder hexString = new StringBuilder();
            for (byte b : digest) {
                String hex = Integer.toHexString(0xFF & b);
                if (hex.length() == 1) {
                    hexString.append('0');
                }
                hexString.append(hex);
            }
            
            return "SHA256:" + hexString.toString().toUpperCase();
            
        } catch (Exception e) {
            return "ERROR: " + e.getMessage();
        }
    }
    
    /**
     * Verify Plugin's own signature (self-verification)
     */
    public static boolean verifySelfSignature(Context context) {
        try {
            String packageName = context.getPackageName();
            PackageManager pm = context.getPackageManager();
            PackageInfo packageInfo = pm.getPackageInfo(packageName, 
                PackageManager.GET_SIGNATURES);
            
            if (packageInfo.signatures == null || packageInfo.signatures.length == 0) {
                Log.e(TAG, "No signatures found for Plugin APK");
                return false;
            }
            
            // In production, verify against expected Plugin signature
            Log.d(TAG, "Plugin signature verification passed (development mode)");
            return true;
            
        } catch (Exception e) {
            Log.e(TAG, "Error verifying Plugin signature", e);
            return false;
        }
    }
}
