package com.bearmod.loader.ui.auth;

import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.os.VibrationEffect;
import android.os.Vibrator;
import android.text.Editable;
import android.text.TextUtils;
import android.text.TextWatcher;
import android.util.Log;
import android.view.View;
import android.view.inputmethod.EditorInfo;
import android.view.inputmethod.InputMethodManager;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

import com.bearmod.loader.BearLoaderApplication;
import com.bearmod.loader.R;
import com.bearmod.loader.auth.AuthResult;
import com.bearmod.loader.auth.KeyAuthManager;
import com.bearmod.loader.databinding.ActivityLoginBinding;
import com.bearmod.loader.ui.main.MainActivity;
import com.google.android.material.dialog.MaterialAlertDialogBuilder;
import com.bearmod.loader.BuildConfig;

import java.util.Objects;


/**
 * Login activity
 * Handles user authentication using KeyAuth
 */
public class LoginActivity extends AppCompatActivity {

    private static final String TAG = "LoginActivity";

    private ActivityLoginBinding binding;
    private KeyAuthManager keyAuthManager;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        // Initialize view binding
        binding = ActivityLoginBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot());

        // Set up UI components
        setupUI();

        // Initialize KeyAuth manager in background
        initializeKeyAuth();

        // Check if user is already logged in
        if (BearLoaderApplication.getInstance().isLoggedIn()) {
            validateExistingLicense();
        }
    }

    /**
     * Set up UI components with modern animations and interactions
     */
    private void setupUI() {
        // Set app version
        String versionName = BuildConfig.VERSION_NAME;
        binding.tvVersion.setText(getString(R.string.version_info, versionName));

        // Initialize modern entrance animations
        initializeEntranceAnimations();

        // Set up login button with enhanced ripple effect and animations
        binding.btnLogin.setOnClickListener(v -> {
            // Modern button press animation with scale and elevation
            v.animate()
                .scaleX(0.96f)
                .scaleY(0.96f)
                .translationZ(-4f)
                .setDuration(120)
                .withEndAction(() -> {
                    v.animate()
                        .scaleX(1f)
                        .scaleY(1f)
                        .translationZ(0f)
                        .setDuration(120);
                    login();
                });
        });

        // Set up text watcher for license key field
        binding.etLicenseKey.addTextChangedListener(new TextWatcher() {
            @Override
            public void beforeTextChanged(CharSequence s, int start, int count, int after) {
                // Not used
            }

            @Override
            public void onTextChanged(CharSequence s, int start, int before, int count) {
                // Clear error when text changes
                binding.tilLicenseKey.setError(null);

                // Format license key as user types (add hyphens every 6 characters)
                if (s.length() > 0 && !isFormatting) {
                    isFormatting = true;
                    String formatted = formatLicenseKeyForDisplay(s.toString());
                    if (!formatted.equals(s.toString())) {
                        binding.etLicenseKey.setText(formatted);
                        binding.etLicenseKey.setSelection(formatted.length());
                    }
                    isFormatting = false;
                }
            }

            @Override
            public void afterTextChanged(Editable s) {
                // Enable login button if text is not empty
                binding.btnLogin.setEnabled(s.length() > 0);
            }
        });

        // Set up remember me switch with preference
        boolean rememberMe = BearLoaderApplication.getInstance().getPreferences()
                .getBoolean("remember_me", true);
        binding.switchRemember.setChecked(rememberMe);

        // Set initial state of login button
        binding.btnLogin.setEnabled(false);

        // Set up keyboard action listener
        binding.etLicenseKey.setOnEditorActionListener((v, actionId, event) -> {
            if (actionId == EditorInfo.IME_ACTION_DONE) {
                if (binding.btnLogin.isEnabled()) {
                    login();
                }
                return true;
            }
            return false;
        });
    }

    /**
     * Initialize modern entrance animations for UI elements
     */
    private void initializeEntranceAnimations() {
        // Set initial states for animation
        binding.ivLogo.setAlpha(0f);
        binding.ivLogo.setTranslationY(-50f);
        binding.tvAppName.setAlpha(0f);
        binding.tvAppName.setTranslationY(-30f);
        binding.tvLoginSubtitle.setAlpha(0f);
        binding.tvLoginSubtitle.setTranslationY(-20f);
        binding.cardLogin.setAlpha(0f);
        binding.cardLogin.setTranslationY(50f);
        binding.tvVersion.setAlpha(0f);

        // Animate logo entrance
        binding.ivLogo.animate()
                .alpha(1f)
                .translationY(0f)
                .setDuration(800)
                .setStartDelay(200)
                .start();

        // Animate app name entrance
        binding.tvAppName.animate()
                .alpha(1f)
                .translationY(0f)
                .setDuration(600)
                .setStartDelay(400)
                .start();

        // Animate subtitle entrance
        binding.tvLoginSubtitle.animate()
                .alpha(1f)
                .translationY(0f)
                .setDuration(600)
                .setStartDelay(600)
                .start();

        // Animate card entrance with spring effect
        binding.cardLogin.animate()
                .alpha(1f)
                .translationY(0f)
                .setDuration(700)
                .setStartDelay(800)
                .start();

        // Animate version text entrance
        binding.tvVersion.animate()
                .alpha(1f)
                .setDuration(500)
                .setStartDelay(1200)
                .start();

        // Animate background accent elements with continuous rotation
        if (binding.getRoot().findViewById(R.id.bg_accent_1) != null) {
            View accent1 = binding.getRoot().findViewById(R.id.bg_accent_1);
            startContinuousRotation(accent1, 20000, false);
        }

        if (binding.getRoot().findViewById(R.id.bg_accent_2) != null) {
            View accent2 = binding.getRoot().findViewById(R.id.bg_accent_2);
            startContinuousRotation(accent2, 25000, true);
        }
    }

    /**
     * Start continuous rotation animation for a view
     */
    private void startContinuousRotation(View view, long duration, boolean reverse) {
        if (view == null) return;

        float endRotation = reverse ? -360f : 360f;
        view.animate()
                .rotation(endRotation)
                .setDuration(duration)
                .withEndAction(() -> {
                    view.setRotation(0f);
                    startContinuousRotation(view, duration, reverse);
                })
                .start();
    }

    /**
     * Initialize KeyAuth manager in background
     */
    private void initializeKeyAuth() {
        // Show initializing indicator
        binding.progressInitializing.setVisibility(View.VISIBLE);

        // Initialize in background thread
        new Thread(() -> {
            keyAuthManager = KeyAuthManager.getInstance();
            keyAuthManager.initialize(this, new KeyAuthManager.AuthCallback() {
                @Override
                public void onSuccess(AuthResult result) {
                    // Update UI on main thread
                    runOnUiThread(() -> {
                        binding.progressInitializing.setVisibility(View.GONE);
                    });
                }

                @Override
                public void onError(String error) {
                    // Update UI on main thread
                    runOnUiThread(() -> {
                        binding.progressInitializing.setVisibility(View.GONE);
                        // Show warning if initialization failed
                        Toast.makeText(LoginActivity.this,
                                R.string.keyauth_init_warning,
                                Toast.LENGTH_SHORT).show();
                    });
                }
            });
        }).start();
    }

    // Flag to prevent recursive formatting
    private boolean isFormatting = false;

    /**
     * Format license key for display (add hyphens)
     * @param licenseKey License key to format
     * @return Formatted license key
     */
    private String formatLicenseKeyForDisplay(String licenseKey) {
        // Remove any existing hyphens and whitespace
        String cleanKey = licenseKey.replace("-", "").replace(" ", "").toUpperCase();

        // If key is too short, return as is
        if (cleanKey.length() < 5) {
            return cleanKey;
        }

        // Format key with hyphens every 6 characters (KeyAuth standard format)
        StringBuilder formattedKey = new StringBuilder();
        for (int i = 0; i < cleanKey.length(); i++) {
            if (i > 0 && i % 6 == 0) {
                formattedKey.append('-');
            }
            formattedKey.append(cleanKey.charAt(i));
        }

        return formattedKey.toString();
    }

    /**
     * Validate existing license
     */
    private void validateExistingLicense() {
        showLoading(true);

        // Ensure KeyAuth is initialized before validation
        keyAuthManager = KeyAuthManager.getInstance();
        keyAuthManager.initialize(this, new KeyAuthManager.AuthCallback() {
            @Override
            public void onSuccess(AuthResult result) {
                // Now validate the license
                keyAuthManager.validateLicense(new KeyAuthManager.AuthCallback() {
                    @Override
                    public void onSuccess(AuthResult validationResult) {
                        showLoading(false);
                        navigateToDashboard();
                    }

                    @Override
                    public void onError(String error) {
                        showLoading(false);
                        // Clear login status and show login form
                        BearLoaderApplication.getInstance().setLoggedIn(false);
                    }
                });
            }

            @Override
            public void onError(String error) {
                showLoading(false);
                // Clear login status and show login form if initialization fails
                BearLoaderApplication.getInstance().setLoggedIn(false);
            }
        });
    }

    /**
     * Login with license key
     */
    private void login() {
        // Hide keyboard
        hideKeyboard();

        // Get license key
        String licenseKey = Objects.requireNonNull(binding.etLicenseKey.getText()).toString().trim();

        // Validate license key
        if (TextUtils.isEmpty(licenseKey)) {
            binding.tilLicenseKey.setError(getString(R.string.enter_license_key));
            // Shake animation for error
            shakeView(binding.tilLicenseKey);
            return;
        }

        // Basic format validation (at least 5 characters)
        if (licenseKey.length() < 5) {
            binding.tilLicenseKey.setError(getString(R.string.invalid_license_key_format));
            // Shake animation for error
            shakeView(binding.tilLicenseKey);
            return;
        }

        // Clear error
        binding.tilLicenseKey.setError(null);

        // Show loading with animation
        showLoading(true);

        // Disable back button during login
        setFinishOnTouchOutside(false);

        // Always ensure KeyAuth is properly initialized before login
        keyAuthManager = KeyAuthManager.getInstance();
        keyAuthManager.initialize(this, new KeyAuthManager.AuthCallback() {
            @Override
            public void onSuccess(AuthResult result) {
                // Proceed with login after successful initialization
                performLogin(licenseKey);
            }

            @Override
            public void onError(String error) {
                // Show error and return
                showLoading(false);
                setFinishOnTouchOutside(true);

                // Show user-friendly error message
                binding.tilLicenseKey.setError("Authentication service not available. Please try again later.");
                shakeView(binding.tilLicenseKey);

                Toast.makeText(LoginActivity.this,
                        "Authentication service not available. Please check your internet connection and try again.",
                        Toast.LENGTH_LONG).show();
            }
        });
    }

    /**
     * Perform login with license key
     */
    private void performLogin(String licenseKey) {
        // Log the license key being used for debugging
        android.util.Log.d("LoginActivity", "Attempting login with license key: " + licenseKey);

        // Login with KeyAuth
        keyAuthManager.login(licenseKey, new KeyAuthManager.AuthCallback() {
            @Override
            public void onSuccess(AuthResult result) {
                // Save remember me preference
                boolean rememberMe = binding.switchRemember.isChecked();
                BearLoaderApplication.getInstance().getPreferences()
                        .edit()
                        .putBoolean("remember_me", rememberMe)
                        .apply();

                // Add slight delay for better UX
                binding.getRoot().postDelayed(() -> {
                    // Hide loading
                    showLoading(false);

                    // Re-enable back button
                    setFinishOnTouchOutside(true);

                    // Show success animation
                    showSuccessAnimation();

                    // Show success dialog with license info after animation
                    binding.getRoot().postDelayed(() ->
                        showLicenseInfoDialog(result), 500);
                }, 300);
            }

            @Override
            public void onError(String error) {
                // Add slight delay for better UX
                binding.getRoot().postDelayed(() -> {
                    // Hide loading
                    showLoading(false);

                    // Re-enable back button
                    setFinishOnTouchOutside(true);

                    // Show error in TextInputLayout for better visibility
                    binding.tilLicenseKey.setError(error);

                    // Shake animation for error
                    shakeView(binding.tilLicenseKey);

                    // Vibrate for error feedback
                    vibrate();

                    // Also show toast for additional feedback
                    Toast.makeText(LoginActivity.this,
                            getString(R.string.login_error, error),
                            Toast.LENGTH_LONG).show();
                }, 300);
            }
        });
    }

    /**
     * Hide keyboard
     */
    private void hideKeyboard() {
        View view = getCurrentFocus();
        if (view != null) {
            InputMethodManager imm = (InputMethodManager) getSystemService(Context.INPUT_METHOD_SERVICE);
            imm.hideSoftInputFromWindow(view.getWindowToken(), 0);
        }
    }

    /**
     * Shake view for error feedback
     * @param view View to shake
     */
    private void shakeView(View view) {
        view.animate()
                .translationX(-10f)
                .setDuration(50)
                .withEndAction(() ->
                    view.animate()
                        .translationX(10f)
                        .setDuration(50)
                        .withEndAction(() ->
                            view.animate()
                                .translationX(-10f)
                                .setDuration(50)
                                .withEndAction(() ->
                                    view.animate()
                                        .translationX(10f)
                                        .setDuration(50)
                                        .withEndAction(() ->
                                            view.animate()
                                                .translationX(0f)
                                                .setDuration(50)
                                                .start())
                                        .start())
                                .start())
                        .start())
                .start();
    }

    /**
     * Vibrate for error feedback
     */
    private void vibrate() {
        Vibrator vibrator = (Vibrator) getSystemService(Context.VIBRATOR_SERVICE);
        if (vibrator != null && vibrator.hasVibrator()) {
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
                vibrator.vibrate(VibrationEffect.createOneShot(200, VibrationEffect.DEFAULT_AMPLITUDE));
            } else {
                vibrator.vibrate(200);
            }
        }
    }

    /**
     * Show enhanced success animation with modern effects
     */
    private void showSuccessAnimation() {
        // Play success animation with modern entrance effects
        binding.successAnimation.setVisibility(View.VISIBLE);
        binding.successAnimation.setAlpha(0f);
        binding.successAnimation.setScaleX(0.5f);
        binding.successAnimation.setScaleY(0.5f);

        binding.successAnimation.animate()
                .alpha(1f)
                .scaleX(1f)
                .scaleY(1f)
                .setDuration(400)
                .withEndAction(() -> binding.successAnimation.playAnimation())
                .start();

        // Create modern blur effect on background elements
        binding.cardLogin.animate()
                .alpha(0.2f)
                .scaleX(0.95f)
                .scaleY(0.95f)
                .setDuration(400)
                .start();

        binding.ivLogo.animate()
                .alpha(0.3f)
                .scaleX(0.9f)
                .scaleY(0.9f)
                .setDuration(400)
                .start();

        binding.tvAppName.animate()
                .alpha(0.3f)
                .translationY(-10f)
                .setDuration(400)
                .start();

        binding.tvLoginSubtitle.animate()
                .alpha(0.3f)
                .translationY(-5f)
                .setDuration(400)
                .start();

        // Hide animation after it completes
        binding.successAnimation.postDelayed(() ->
            binding.successAnimation.setVisibility(View.GONE), 1500);
    }

    /**
     * Show license info dialog
     * @param result Auth result
     */
    private void showLicenseInfoDialog(AuthResult result) {
        // Format expiry date
        String expiryDate = keyAuthManager.formatExpiryDate(result.getExpiryDate());

        // Calculate remaining days
        int remainingDays = keyAuthManager.getRemainingDays(result.getExpiryDate());

        // Build message
        String message = getString(R.string.login_success) + "\n\n" +
                getString(R.string.license_valid_until, expiryDate) + "\n" +
                getString(R.string.registration_date, result.getRegistrationDate()) + "\n";

        if (remainingDays == -1) {
            message += "License: Active (No expiry)";
        } else {
            message += getString(R.string.days_remaining, remainingDays);
        }

        // Show dialog
        new MaterialAlertDialogBuilder(this)
                .setTitle(R.string.success)
                .setMessage(message)
                .setPositiveButton(R.string.ok, (dialog, which) -> {
                    dialog.dismiss();
                    navigateToDashboard();
                })
                .setCancelable(false)
                .show();
    }

    /**
     * FIXED: Navigate to main dashboard (MainActivity) as primary entry point
     * BackgroundLauncherActivity should only be accessible through MainActivity navigation
     */
    private void navigateToDashboard() {
        Log.d(TAG, "Navigating to MainActivity as primary entry point after login");
        Intent intent = new Intent(this, MainActivity.class);
        intent.addFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP | Intent.FLAG_ACTIVITY_NEW_TASK);
        startActivity(intent);
        finish();
    }

    /**
     * Show/hide loading
     * @param show Show loading
     */
    private void showLoading(boolean show) {
        binding.progressLogin.setVisibility(show ? View.VISIBLE : View.GONE);
        binding.viewOverlay.setVisibility(show ? View.VISIBLE : View.GONE);
        binding.cardLogin.setEnabled(!show);
        binding.btnLogin.setEnabled(!show);
    }
}
