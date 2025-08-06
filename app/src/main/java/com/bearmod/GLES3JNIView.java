package com.bearmod;

import android.content.Context;
import android.opengl.GLSurfaceView;
import android.util.Log;
import android.view.WindowManager;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

public class GLES3JNIView extends GLSurfaceView implements GLSurfaceView.Renderer {

    private static final String TAG = "GLES3JNIView";

    static {
        try {
            System.loadLibrary("bearmod");
            Log.d(TAG, "Native libraries loaded successfully");
        } catch (UnsatisfiedLinkError e) {
            Log.e(TAG, "Failed to load native libraries: " + e.getMessage());
        }
    }

    private boolean isVisible;

    public GLES3JNIView(Context context) {
        super(context);

        setEGLContextClientVersion(3);
        setEGLConfigChooser(8, 8, 8, 8, 16, 0);
        getHolder().setFormat(-3);

        setRenderer(this);
        setRenderMode(RENDERMODE_CONTINUOUSLY); // or WHEN_DIRTY for power saving
    }

    @Override
    public void onSurfaceCreated(GL10 gl, EGLConfig config) {
        isVisible = IsHide();
        if (isVisible) {
            init();
        }
    }

    @Override
    public void onSurfaceChanged(GL10 gl, int width, int height) {
        if (isVisible) {
            resize(width, height);
        }
    }

    @Override
    public void onDrawFrame(GL10 gl) {
        if (isVisible) {
            step();
        }
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        imgui_Shutdown();
    }

    public static native void init();
    public static native void resize(int width, int height);
    public static native void step();
    public static native void imgui_Shutdown();
    public static native void MotionEventClick(boolean down, float PosX, float PosY);
    public static native String getWindowRect();
    private native boolean IsHide();
}
