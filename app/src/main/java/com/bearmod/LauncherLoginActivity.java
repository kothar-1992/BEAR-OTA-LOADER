package com.bearmod;

import android.annotation.SuppressLint;

import androidx.annotation.RequiresApi;
import androidx.appcompat.app.AppCompatActivity;
import android.content.ClipData;
import android.content.ClipboardManager;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.view.View;
import android.view.WindowInsetsController;
import android.view.WindowManager;
import android.view.animation.Animation;
import android.view.animation.AnimationUtils;
import androidx.activity.OnBackPressedCallback;
import androidx.core.view.WindowCompat;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.ImageButton;
import android.widget.ProgressBar;
import android.widget.TextView;
import android.widget.Toast;

import java.util.Objects;

public class LauncherLoginActivity extends AppCompatActivity {
    private static final String TAG = "LauncherLoginActivity";

    // SharedPreferences constants
    private static final String PREFS_NAME = "BearModPrefs";
    private static final String PREF_LICENSE_KEY = "license_key";
    private static final String PREF_REMEMBER_KEY = "remember_key";
    private static final String PREF_AUTO_LOGIN = "auto_login";

    // UI Elements
    private EditText editLicenseKey;
    private Button buttonLogin;
    private ImageButton buttonCopyPaste;
    private CheckBox checkboxRememberKey;
    private CheckBox checkboxAutoLogin;
    private ProgressBar progressBar;
    private TextView statusText;

    // SharedPreferences
    private SharedPreferences sharedPreferences;

    // BearMod core integration
    private MundoCore mMundoCore;
    private boolean mMundoInitialized = false;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        // Set content view first
        setContentView(R.layout.activity_launcher_login);

        // Set fullscreen flags after content view is set
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            setupFullscreen();
        }

        initializeViews();
        setupClickListeners();
        setupBackPressedHandler();

        // Initialize BearMod core
        initializeMundoCore();
    }

    @RequiresApi(api = Build.VERSION_CODES.R)
    private void setupFullscreen() {
        try {
            getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);

            // Modern fullscreen approach for Android 11+ with fallback
            // Use modern WindowInsetsController for Android 11+
            WindowCompat.setDecorFitsSystemWindows(getWindow(), false);
            WindowInsetsController controller = null;
            controller = getWindow().getInsetsController();
            if (controller != null) {
                controller.hide(android.view.WindowInsets.Type.statusBars() |
                        android.view.WindowInsets.Type.navigationBars());
                controller.setSystemBarsBehavior(
                        WindowInsetsController.BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE);
            }
        } catch (Exception e) {
            // If fullscreen setup fails, continue anyway
            android.util.Log.e(TAG, "Error setting up fullscreen", e);
        }
    }

    private void initializeViews() {
        // Initialize UI elements
        editLicenseKey = findViewById(R.id.edit_license_key);
        buttonLogin = findViewById(R.id.button_login);
        buttonCopyPaste = findViewById(R.id.button_copy_paste);
        checkboxRememberKey = findViewById(R.id.checkbox_remember_key);
        checkboxAutoLogin = findViewById(R.id.checkbox_auto_login);
        progressBar = findViewById(R.id.progress_bar);
        statusText = findViewById(R.id.status_text);
        View loginContainer = findViewById(R.id.login_container);

        // Initialize SharedPreferences
        sharedPreferences = getSharedPreferences(PREFS_NAME, Context.MODE_PRIVATE);

        // Set initial visibility
        progressBar.setVisibility(View.GONE);
        statusText.setVisibility(View.GONE);

        // Load saved preferences
        loadSavedPreferences();

        // Setup animations
        setupAnimations();
    }

    private void setupClickListeners() {
        buttonLogin.setOnClickListener(v -> attemptLogin());

        // Copy/Paste button functionality
        buttonCopyPaste.setOnClickListener(v -> handleCopyPaste());

        // Checkbox listeners for saving preferences
        checkboxRememberKey.setOnCheckedChangeListener((buttonView, isChecked) -> {
            savePreference(PREF_REMEMBER_KEY, isChecked);
            if (!isChecked) {
                // If remember key is disabled, also disable auto-login
                checkboxAutoLogin.setChecked(false);
                savePreference(PREF_AUTO_LOGIN, false);
            }
        });

        checkboxAutoLogin.setOnCheckedChangeListener((buttonView, isChecked) -> {
            savePreference(PREF_AUTO_LOGIN, isChecked);
            if (isChecked) {
                // If auto-login is enabled, also enable remember key
                checkboxRememberKey.setChecked(true);
                savePreference(PREF_REMEMBER_KEY, true);
            }
        });

        // Allow enter key to trigger login
        editLicenseKey.setOnEditorActionListener((v, actionId, event) -> {
            attemptLogin();
            return true;
        });
    }

    @SuppressLint("SetTextI18n")
    private void attemptLogin() {
        String licenseKey = editLicenseKey.getText().toString().trim();

        if (licenseKey.isEmpty()) {
            Toast.makeText(this, "Please enter a license key", Toast.LENGTH_SHORT).show();
            return;
        }

        // Show loading state
        setLoadingState(true);
        statusText.setText("Verifying license...");
        statusText.setVisibility(View.VISIBLE);

        // Check if BearMod core is initialized
        if (mMundoInitialized && mMundoCore != null) {
            // Use BearMod core for authentication
            new Thread(() -> {
                boolean authResult = mMundoCore.authenticateKeyAuth(licenseKey);

                runOnUiThread(() -> {
                    if (authResult) {
                        statusText.setText("BearMod license login successful!");

                        // Save license key if remember key is enabled
                        saveLicenseKeyIfNeeded(licenseKey);

                        // Return success to MainActivity after short delay
                        new Handler(Looper.getMainLooper()).postDelayed(() -> {
                            setResult(RESULT_OK);
                            finish();
                        }, 1000);
                    } else {
                        setLoadingState(false);
                        String errorMsg = mMundoCore.getLastError();
                        statusText.setText("Login failed: " + errorMsg);
                        statusText.setTextColor(0xFFFF6B6B); // Red color for error
                        Toast.makeText(LauncherLoginActivity.this,
                                "Login failed: " + errorMsg, Toast.LENGTH_LONG).show();
                    }
                });
            }).start();
        } else {
            // Fallback to original login method
            Launcher.loginAsync(this, licenseKey, new Launcher.LoginCallback() {
                @Override
                public void onSuccess() {
                    runOnUiThread(() -> {
                        statusText.setText("BearMod license login successful!");

                        // Save license key if remember key is enabled
                        saveLicenseKeyIfNeeded(licenseKey);

                        // Return success to MainActivity after short delay
                        new Handler(Looper.getMainLooper()).postDelayed(() -> {
                            setResult(RESULT_OK);
                            finish();
                        }, 1000);
                    });
                }

                @Override
                public void onError(String errorMessage) {
                    runOnUiThread(() -> {
                        setLoadingState(false);
                        statusText.setText("Login failed: " + errorMessage);
                        statusText.setTextColor(0xFFFF6B6B); // Red color for error
                        Toast.makeText(LauncherLoginActivity.this,
                                "Login failed: " + errorMessage, Toast.LENGTH_LONG).show();
                    });
                }
            });
        }
    }

    private void setLoadingState(boolean loading) {
        buttonLogin.setEnabled(!loading);
        editLicenseKey.setEnabled(!loading);
        progressBar.setVisibility(loading ? View.VISIBLE : View.GONE);

        if (!loading) {
            statusText.setTextColor(0xFF4CAF50); // Green color for success
        }
    }

    private void setupBackPressedHandler() {
        OnBackPressedCallback callback = new OnBackPressedCallback(true) {
            @Override
            public void handleOnBackPressed() {
                // Return cancelled result to MainActivity
                setResult(RESULT_CANCELED);
                finish();
            }
        };
        getOnBackPressedDispatcher().addCallback(this, callback);
    }

    /**
     * Initialize the BearMod Native Runtime Container
     */
    @SuppressLint("SetTextI18n")
    private void initializeMundoCore() {
        try {
            // Get Mundo core instance
            mMundoCore = MundoCore.getInstance(this);

            // Create configuration
            MundoCore.MundoConfig config = new MundoCore.MundoConfig(
                    "demo_keyauth_token",  // Replace with your actual BearMod auth token
                    "demo_bear_token"      // Replace with your actual BearMod token
            );

            config.targetPackage = "com.tencent.ig";  // PUBG Mobile
            config.securityLevel = 2;  // Maximum security
            config.enableNonRoot = true;
            config.enableAntiHook = true;
            config.enableStealth = true;

            // Initialize BearMod core
            MundoCore.MundoInitResult result = mMundoCore.initialize(config);

            if (result.success) {
                mMundoInitialized = true;
                android.util.Log.i(TAG, "BearMod core initialized - Version: " + result.version);

                // Update status to show BearMod is ready
                runOnUiThread(() -> {
                    if (statusText != null) {
                        statusText.setText("BearMod core ready - " + result.version);
                        statusText.setVisibility(View.VISIBLE);
                        statusText.setTextColor(0xFF4CAF50); // Green color
                    }
                });

            } else {
                android.util.Log.e(TAG, "BearMod initialization failed: " + result.message);
                runOnUiThread(() -> {
                    if (statusText != null) {
                        statusText.setText("BearMod initialization failed: " + result.message);
                        statusText.setVisibility(View.VISIBLE);
                        statusText.setTextColor(0xFFFF6B6B); // Red color
                    }
                });
            }

        } catch (Exception e) {
            android.util.Log.e(TAG, "Failed to initialize BearMod core", e);
            runOnUiThread(() -> {
                if (statusText != null) {
                    statusText.setText("BearMod error: " + e.getMessage());
                    statusText.setVisibility(View.VISIBLE);
                    statusText.setTextColor(0xFFFF6B6B); // Red color
                }
            });
        }
    }

    /**
     * Load saved preferences and apply them to UI
     */
    private void loadSavedPreferences() {
        boolean rememberKey = sharedPreferences.getBoolean(PREF_REMEMBER_KEY, false);
        boolean autoLogin = sharedPreferences.getBoolean(PREF_AUTO_LOGIN, false);

        checkboxRememberKey.setChecked(rememberKey);
        checkboxAutoLogin.setChecked(autoLogin);

        if (rememberKey) {
            String savedKey = sharedPreferences.getString(PREF_LICENSE_KEY, "");
            editLicenseKey.setText(savedKey);

            // Auto-login if enabled and key is available
            if (autoLogin && !savedKey.isEmpty()) {
                new Handler(Looper.getMainLooper()).postDelayed(() -> {
                    if (!isFinishing() && !isDestroyed()) {
                        attemptLogin();
                    }
                }, 1000); // 1 second delay for smooth UI
            }
        }
    }

    /**
     * Save preference to SharedPreferences
     */
    private void savePreference(String key, boolean value) {
        sharedPreferences.edit().putBoolean(key, value).apply();
    }

    /**
     * Save license key if remember key is enabled
     */
    private void saveLicenseKeyIfNeeded(String licenseKey) {
        if (checkboxRememberKey.isChecked()) {
            sharedPreferences.edit().putString(PREF_LICENSE_KEY, licenseKey).apply();
        } else {
            // Clear saved key if remember is disabled
            sharedPreferences.edit().remove(PREF_LICENSE_KEY).apply();
        }
    }

    /**
     * Handle copy/paste button functionality
     */
    private void handleCopyPaste() {
        ClipboardManager clipboard = (ClipboardManager) getSystemService(Context.CLIPBOARD_SERVICE);

        if (clipboard != null && clipboard.hasPrimaryClip()) {
            ClipData.Item item = Objects.requireNonNull(clipboard.getPrimaryClip()).getItemAt(0);
            String pastedText = item.getText().toString();

            if (!pastedText.isEmpty()) {
                editLicenseKey.setText(pastedText);
                Toast.makeText(this, "License key pasted", Toast.LENGTH_SHORT).show();

                // Add paste animation
                Animation scaleAnimation = AnimationUtils.loadAnimation(this, android.R.anim.slide_in_left);
                editLicenseKey.startAnimation(scaleAnimation);
            }
        } else {
            Toast.makeText(this, "No text in clipboard", Toast.LENGTH_SHORT).show();
        }
    }

    /**
     * Setup UI animations
     */
    private void setupAnimations() {
        // Add fade-in animation to main elements
        Animation fadeIn = AnimationUtils.loadAnimation(this, android.R.anim.fade_in);
        fadeIn.setDuration(800);

        buttonLogin.startAnimation(fadeIn);
        editLicenseKey.startAnimation(fadeIn);
    }

    @Override
    protected void onDestroy() {
        // Shutdown BearMod core
        if (mMundoCore != null) {
            mMundoCore.shutdown();
        }
        super.onDestroy();
    }
}