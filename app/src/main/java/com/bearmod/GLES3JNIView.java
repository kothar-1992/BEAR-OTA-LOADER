package com.bearmod;

import android.content.Context;
import android.opengl.GLSurfaceView;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

import android.util.Log;
import android.view.Choreographer;
import android.view.WindowManager;

public class GLES3JNIView extends GLSurfaceView implements GLSurfaceView.Renderer {

    private static final String TAG = "GLES3JNIView";


    private WindowManager.LayoutParams layoutParams;

    public GLES3JNIView(Context context) {
        super(context);
        if (IsHide()){
        setEGLConfigChooser(8, 8, 8, 8, 16, 0);
        getHolder().setFormat(-3);
        getHolder().lockCanvas(); //

        setEGLContextClientVersion(3);

        setRenderer(this);
           // startRendering();
        requestRender();//

            try {
                System.loadLibrary("BearMod");
                System.loadLibrary("BEAR");
                Log.d(TAG, "Native library loaded successfully in Floating");
            } catch (UnsatisfiedLinkError e) {
                Log.e(TAG, "Failed to load native library in Floating: " + e.getMessage());
            }

        }
    }

    
    public void onDrawFrame(GL10 gl) {
        if (IsHide()){
        step();
        //    startRendering();
        //    startRendering3();
        }
    }

    public void onSurfaceChanged(GL10 gl, int width, int height) {
        if (IsHide()){
        resize(width, height);
        }
    }

    public void onSurfaceCreated(GL10 gl, EGLConfig config) {
        if (IsHide()){
        init();
        //    startRendering();
        //    startRendering3();
        }
    }
    
    
    

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        imgui_Shutdown();
    }
    
    
        private Choreographer.FrameCallback frameCallback;
        private boolean isRendering = false;

    public static native void init();
    public static native void resize(int width, int height);
    public static native void step();
    public static native void imgui_Shutdown();
    public static native void MotionEventClick(boolean down,float PosX,float PosY);
    public static native String getWindowRect();
    private native boolean IsHide(); 
  //  public static native void Mode(int Game, int Root, int Bit);
    
}
