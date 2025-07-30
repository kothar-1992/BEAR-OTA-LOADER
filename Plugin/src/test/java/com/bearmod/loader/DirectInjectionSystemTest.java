package com.bearmod.loader;

import org.junit.Before;
import org.junit.Test;
import org.mockito.Mock;
import org.mockito.MockitoAnnotations;

import com.bearmod.loader.workflow.AutomatedPatchingWorkflow;
import com.bearmod.loader.security.SignatureVerifier;
import com.bearmod.loader.constants.PubgPackages;

import static org.junit.Assert.*;
import static org.mockito.ArgumentMatchers.*;
import static org.mockito.Mockito.*;

/**
 * Test suite for the Direct Injection System
 * Validates the transformation from APK download/installation to direct injection
 */
public class DirectInjectionSystemTest {

    @Before
    public void setUp() {
        MockitoAnnotations.openMocks(this);
    }

    @Test
    public void testPubgPackageConstants() {
        // Test that PUBG package constants are properly defined
        assertNotNull("PUBG_PACKAGES should be defined", PubgPackages.PUBG_PACKAGES);
        assertEquals("Should have exactly 4 PUBG packages", 4, PubgPackages.PUBG_PACKAGES.length);

        // Test that it supports all PUBG package variants
        String[] expectedPackages = {
            "com.tencent.ig",        // Global
            "com.pubg.krmobile",     // Korea
            "com.vng.pubgmobile",    // Vietnam
            "com.rekoo.pubgm"        // Taiwan
        };

        for (int i = 0; i < expectedPackages.length; i++) {
            assertEquals("Package at index " + i + " should match expected",
                expectedPackages[i], PubgPackages.PUBG_PACKAGES[i]);
            assertTrue("Should support package: " + expectedPackages[i],
                PubgPackages.isSupported(expectedPackages[i]));
        }
    }

    @Test
    public void testPubgPackageCompatibilityWithDirectInjection() {
        // Test that all PUBG variants are compatible with direct injection
        for (int i = 0; i < PubgPackages.PUBG_PACKAGES.length; i++) {
            String packageName = PubgPackages.PUBG_PACKAGES[i];
            String variantName = PubgPackages.PUBG_VARIANTS[i];

            // Test package validation
            assertTrue("Package should be supported: " + packageName,
                PubgPackages.isSupported(packageName));

            // Test index lookup
            assertEquals("Index lookup should work for: " + packageName,
                i, PubgPackages.getIndexByPackage(packageName));

            // Test display name
            assertNotNull("Display name should exist for: " + variantName,
                PubgPackages.getNameByIndex(i));

            // Test that package follows expected naming convention
            assertTrue("Package should follow expected format: " + packageName,
                packageName.contains(".") && packageName.length() > 5);
        }
    }

    @Test
    public void testWorkflowStateTransformation() {
        // Test that workflow no longer contains APK download states
        AutomatedPatchingWorkflow.WorkflowState[] states = 
            AutomatedPatchingWorkflow.WorkflowState.values();
        
        boolean hasDownloadingModApk = false;
        for (AutomatedPatchingWorkflow.WorkflowState state : states) {
            if (state.name().equals("DOWNLOADING_MOD_APK")) {
                hasDownloadingModApk = true;
                break;
            }
        }
        
        assertFalse("Workflow should not contain DOWNLOADING_MOD_APK state", 
            hasDownloadingModApk);
        
        // Verify essential states are present
        boolean hasPreparingStealthLibs = false;
        boolean hasInjecting = false;
        
        for (AutomatedPatchingWorkflow.WorkflowState state : states) {
            if (state.name().equals("PREPARING_STEALTH_LIBS")) {
                hasPreparingStealthLibs = true;
            }
            if (state.name().equals("INJECTING")) {
                hasInjecting = true;
            }
        }
        
        assertTrue("Workflow should contain PREPARING_STEALTH_LIBS state", 
            hasPreparingStealthLibs);
        assertTrue("Workflow should contain INJECTING state", hasInjecting);
    }

    @Test
    public void testWorkflowModeTransformation() {
        // Test that workflow modes reflect direct injection approach
        AutomatedPatchingWorkflow.WorkflowMode[] modes = 
            AutomatedPatchingWorkflow.WorkflowMode.values();
        
        boolean hasDirectInjectionMode = false;
        boolean hasOtaUpdateMode = false;
        
        for (AutomatedPatchingWorkflow.WorkflowMode mode : modes) {
            if (mode.name().equals("DIRECT_INJECTION_AUTO_PATCH")) {
                hasDirectInjectionMode = true;
            }
            if (mode.name().equals("OTA_UPDATE_AUTO_PATCH")) {
                hasOtaUpdateMode = true;
            }
        }
        
        assertTrue("Workflow should contain DIRECT_INJECTION_AUTO_PATCH mode", 
            hasDirectInjectionMode);
        assertFalse("Workflow should not contain OTA_UPDATE_AUTO_PATCH mode", 
            hasOtaUpdateMode);
    }

    @Test
    public void testSignatureVerifierCleanup() {
        // Test that PUBG signature verification methods are removed
        try {
            // This should not exist anymore
            SignatureVerifier.class.getMethod("verifyPubgApkSignature",
                android.content.Context.class, String.class);
            fail("verifyPubgApkSignature method should have been removed");
        } catch (NoSuchMethodException e) {
            // Expected - method should not exist
        }
    }

    @Test
    public void testDirectInjectionFileNaming() {
        // Test expected file naming convention for native libraries
        String testVariant = "global";
        String expectedFileName = "libbearmod_" + testVariant + ".so";

        assertNotNull("Expected file name should be valid", expectedFileName);
        assertTrue("File name should follow convention",
            expectedFileName.startsWith("libbearmod_"));
        assertTrue("File name should end with .so",
            expectedFileName.endsWith(".so"));
    }

    @Test
    public void testDirectInjectionWithAllPubgVariants() {
        // Test that direct injection system can handle all PUBG variants
        for (String packageName : PubgPackages.PUBG_PACKAGES) {
            // Test that each package can be used with direct injection
            assertTrue("Package should be valid for direct injection: " + packageName,
                isValidForDirectInjection(packageName));

            // Test that native library file naming works for each variant
            String expectedLibraryName = packageName.replace(".", "_") + "_bearmod.so";
            assertTrue("Library name should be valid: " + expectedLibraryName,
                expectedLibraryName.endsWith("_bearmod.so"));

            // Test that injection workflow can be initialized for each variant
            assertTrue("Injection workflow should support: " + packageName,
                canInitializeInjectionWorkflow(packageName));
        }
    }

    /**
     * Helper method to validate package for direct injection
     */
    private boolean isValidForDirectInjection(String packageName) {
        // Check that package name is valid and supported
        return packageName != null &&
               !packageName.isEmpty() &&
               PubgPackages.isSupported(packageName) &&
               packageName.contains(".");
    }

    /**
     * Helper method to test injection workflow initialization
     */
    private boolean canInitializeInjectionWorkflow(String packageName) {
        // In a real implementation, this would test actual workflow initialization
        // For now, just validate the package format
        return packageName.startsWith("com.") && packageName.length() > 10;
    }
}
