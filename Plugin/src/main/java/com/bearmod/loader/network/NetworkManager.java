package com.bearmod.loader.network;

import android.content.Context;
import android.util.Log;

import java.util.concurrent.TimeUnit;

import okhttp3.CertificatePinner;
import okhttp3.OkHttpClient;
import okhttp3.logging.HttpLoggingInterceptor;
import retrofit2.Retrofit;
import retrofit2.converter.gson.GsonConverterFactory;
import com.bearmod.loader.BuildConfig;


/**
 * Network manager
 * Handles secure API interactions with certificate pinning
 */
public class NetworkManager {
    
    private static final String TAG = "NetworkManager";
    
    private static NetworkManager instance;
    private final OkHttpClient okHttpClient;
    private final Retrofit retrofit;
    
    // API endpoints - PHASE 6: Removed GitHub API, using KeyAuth for patch distribution
    private static final String KEYAUTH_API_URL = "https://keyauth.win/api/1.3/"; // Updated to 1.3
    private static final String BEARMOD_API_URL = "https://api.mod-key.click/";

    /**
     * Private constructor to enforce singleton pattern
     */
    private NetworkManager(Context context) {
        // Create OkHttpClient with certificate pinning
        okHttpClient = createSecureOkHttpClient();
        
        // Create Retrofit instance
        retrofit = new Retrofit.Builder()
                .baseUrl(BEARMOD_API_URL)
                .client(okHttpClient)
                .addConverterFactory(GsonConverterFactory.create())
                .build();
    }
    
    /**
     * Get NetworkManager instance
     * @param context Application context
     * @return NetworkManager instance
     */
    public static synchronized NetworkManager getInstance(Context context) {
        if (instance == null) {
            instance = new NetworkManager(context.getApplicationContext());
        }
        return instance;
    }
    
    /**
     * Create secure OkHttpClient with certificate pinning
     * @return OkHttpClient instance
     */
    private OkHttpClient createSecureOkHttpClient() {
        try {
            // Create certificate pinner - PHASE 6: Removed GitHub pinning, focus on KeyAuth
            CertificatePinner certificatePinner = new CertificatePinner.Builder()
                    // KeyAuth certificate pinning for patch distribution
                    .add("keyauth.win", "sha256/YLh1dUR9y6Kja30RrAn7JKnbQG/uEtLMkBgFF2Fuihg=")
                    // BearMod certificate pinning (placeholder - replace with actual certificate)
                    .add("api.bearmod.com", "sha256/XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX=")
                    .build();
            
            // Create logging interceptor for debug builds
            HttpLoggingInterceptor loggingInterceptor = new HttpLoggingInterceptor();
            loggingInterceptor.setLevel(BuildConfig.DEBUG ? 
                    HttpLoggingInterceptor.Level.BODY : HttpLoggingInterceptor.Level.NONE);
            
            // Build OkHttpClient
            return new OkHttpClient.Builder()
                    .certificatePinner(certificatePinner)
                    .connectTimeout(30, TimeUnit.SECONDS)
                    .readTimeout(30, TimeUnit.SECONDS)
                    .writeTimeout(30, TimeUnit.SECONDS)
                    .addInterceptor(loggingInterceptor)
                    .build();
        } catch (Exception e) {
            Log.e(TAG, "Error creating secure OkHttpClient: " + e.getMessage());
            
            // Fallback to non-pinned client
            return new OkHttpClient.Builder()
                    .connectTimeout(30, TimeUnit.SECONDS)
                    .readTimeout(30, TimeUnit.SECONDS)
                    .writeTimeout(30, TimeUnit.SECONDS)
                    .build();
        }
    }
    
    /**
     * Get OkHttpClient instance
     * @return OkHttpClient instance
     */
    public OkHttpClient getOkHttpClient() {
        return okHttpClient;
    }
    
    /**
     * Get Retrofit instance for BearMod API
     * @return Retrofit instance
     */
    public Retrofit getRetrofit() {
        return retrofit;
    }
    
    /**
     * Get Retrofit instance for KeyAuth API
     * @return Retrofit instance
     */
    public Retrofit getKeyAuthRetrofit() {
        return new Retrofit.Builder()
                .baseUrl(KEYAUTH_API_URL)
                .client(okHttpClient)
                .addConverterFactory(GsonConverterFactory.create())
                .build();
    }
    
    // PHASE 6: Removed GitHub API methods - using KeyAuth for patch distribution
    /*
    public Retrofit getGitHubRetrofit() {
        return new Retrofit.Builder()
                .baseUrl(GITHUB_API_URL)
                .client(okHttpClient)
                .addConverterFactory(GsonConverterFactory.create())
                .build();
    }
    */
    
    /**
     * Create API service
     * @param serviceClass Service class
     * @param <T> Service type
     * @return API service
     */
    public <T> T createService(Class<T> serviceClass) {
        return retrofit.create(serviceClass);
    }
    
    /**
     * Create KeyAuth API service
     * @param serviceClass Service class
     * @param <T> Service type
     * @return KeyAuth API service
     */
    public <T> T createKeyAuthService(Class<T> serviceClass) {
        return getKeyAuthRetrofit().create(serviceClass);
    }
    
    // PHASE 6: Removed GitHub API service creation - using KeyAuth for patch distribution
    /*
    public <T> T createGitHubService(Class<T> serviceClass) {
        return getGitHubRetrofit().create(serviceClass);
    }
    */
}
