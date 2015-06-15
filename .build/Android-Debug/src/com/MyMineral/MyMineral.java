package com.MyMineral;

import android.os.Build;
import android.util.Log;
import android.os.Bundle;
import android.os.Looper;
import android.view.View;
import android.view.Window;
import android.app.Activity;
import android.view.KeyEvent;
import android.widget.FrameLayout;
import android.view.Choreographer;
import android.annotation.TargetApi;
import android.view.ViewTreeObserver;
import android.annotation.SuppressLint;
import android.content.res.Configuration;
import android.view.View.OnLayoutChangeListener;

import com.Shim.SystemHelper;
import com.Shim.XliCppThreadHandler;


public class MyMineral extends android.app.Activity
{
    // app behaviour flags
    static final boolean _cppMainLoop = (Build.VERSION.SDK_INT <= Build.VERSION_CODES.JELLY_BEAN);
    static final boolean _seperateCoreThread = _cppMainLoop;
    static final boolean _debugCpp = false;
    static final boolean _verbose = true;
    static final boolean _killOnDestroy = true;
    static boolean _hasCreated = false;
    static final String _appName = "MyMineral";

    static
    {
        String[] libs = new String[] { "Xli", "XliPlatform", "XliGL", "XliImage", "XliZip", "XliFont", "XliHttpClient" };
        Log.d(_appName,"SUT: " + _seperateCoreThread + "  CML: " + _cppMainLoop+ "  SDK: "+Build.VERSION.SDK_INT);
        if (_cppMainLoop && !_seperateCoreThread)
        {
            Log.e(_appName, "INVALID ACTIVITY CONFIG: Cannot have cpp main loop without seperate core thread");
        } else {
            if (loadLibrariesInternal(libs) != 0)
            {
                StringBuilder sb = new StringBuilder();
                for (int i = 0; i < libs.length; i++)
                {
                    if (libs[i] == null)
                        continue;
                    if (sb.length() == 0)
                        sb.append("Failed to load JNI libraries: ");
                    else
                        sb.append(", ");
                    sb.append(libs[i]);
                }
                Log.wtf("MyMineral", sb.toString());
            }
            if (_debugCpp) { try {Thread.sleep(5000);} catch (InterruptedException e) {} }
            System.loadLibrary("MyMineral");
        }
    }
    static int loadLibrariesInternal(String[] libs)
    {
        while (true)
        {
            int loaded = 0;
            int failed = 0;
            for (int i = 0; i < libs.length; i++)
            {
                if (libs[i] == null)
                    continue;
                try
                {
                    System.loadLibrary(libs[i]);
                    libs[i] = null;
                    loaded++;
                }
                catch (UnsatisfiedLinkError e)
                {
                    failed++;
                }
            }
            if (loaded == 0 || failed == 0)
                return failed;
        }
    }

    //state flags
    boolean _destroyed=false;

    //resources
    public Activity RootActivity; //{TODO} change the names of these
    public FrameTicker ft;
    public Choreographer cgrapher;
    public XliCppThreadHandler MainThreadHandler;
    public FrameLayout SuperLayout;
    public FrameLayout RootLayout;
    private Thread OptionalCoreThread;

    @TargetApi(Build.VERSION_CODES.JELLY_BEAN)
	@Override
    protected void onCreate(Bundle savedInstanceState)
    {
        if (_hasCreated) {
            if (_verbose) Log.d(_appName, "Call OnResurrect");
            //com.Shim.XliJ.cppOnResurrect();
            if (_verbose) Log.d(_appName, "Called OnResurrect");
        }
        // handle action bar for older devices
        if (Build.VERSION.SDK_INT >= 11) {
            getWindow().requestFeature(Window.FEATURE_ACTION_BAR);
            getActionBar().hide();
        }
    	// caching
    	RootActivity = this;
    	com.Shim.XliJ.CacheActivity(this);

        // prepare content
    	if (Build.VERSION.SDK_INT >= 11) {
    		SuperLayout = new FrameLayout(RootActivity);
            RootLayout = new FrameLayout(RootActivity);
            SuperLayout.addOnLayoutChangeListener(new OnLayoutChangeListener() {
                	int lastWidth = com.Shim.XliJ.GetRealDisplayWidth();
                	int lastHeight = com.Shim.XliJ.GetRealDisplayHeight();
                    @Override
                    public void onLayoutChange(View v, int left, int top, int right, int bottom, int oldLeft, int oldTop, int oldRight, int oldBottom) {
                        int newWidth = right - left;
                        int newHeight = bottom - top;
                        if (newWidth!=lastWidth || newHeight!=lastHeight) {
                            lastHeight = newHeight;
                            lastWidth = newWidth;
                            com.Shim.XliJ.cppOnConfigChanged();
                            com.Shim.SystemHelper.ResendFrameSizes();
                        }
                    }
                });
    	} else {
            SuperLayout = new com.Shim.FallbackFrameLayout(RootActivity);
            //SuperLayout = new FrameLayout(RootActivity);
            RootLayout = new FrameLayout(RootActivity);
    	}
        SuperLayout.addView(RootLayout);
        com.Shim.XliJ.SetFrame(RootLayout, 0, 0, FrameLayout.LayoutParams.MATCH_PARENT, com.Shim.XliJ.GetRealDisplayHeight());
        com.Shim.XliJ.CacheRootUILayout(RootLayout,SuperLayout);

        getWindow().setContentView(SuperLayout);

        // mandatory call to super
        super.onCreate(savedInstanceState);

        if (_seperateCoreThread && OptionalCoreThread == null) {
        	OptionalCoreThread = new Thread(new Runnable() {
        		@Override
        		public void run() {
        			setupApp();
        		}
        	});
        	OptionalCoreThread.start();
        } else {
        	setupApp();
        }
        // call c++ for setup
    	if (_verbose) Log.d(_appName, "Call OnCreate");
        com.Shim.XliJ.cppOnCreate(_seperateCoreThread);
        if (_verbose) Log.d(_appName, "Called OnCreate");
        //attach keybaord listener
        com.Shim.SystemHelper.attachKeyboardListeners();
        _hasCreated = true;
        //
        com.Shim.XliJ.cppOnConfigChanged();
    }

    @SuppressLint("NewApi")
    private void setupApp()
    {
        if (_verbose) Log.d(_appName, "Start Main Loop");
        if (_seperateCoreThread && _cppMainLoop) {
            com.Shim.XliJ.cppOnStartMainLoop(_seperateCoreThread, _cppMainLoop);
        } else if (_seperateCoreThread && (!_cppMainLoop)) {
            if ((Build.VERSION.SDK_INT >= Build.VERSION_CODES.JELLY_BEAN))
            {
                com.Shim.XliJ.cppOnStartMainLoop(_seperateCoreThread, _cppMainLoop);
                Looper.prepare();
                ft = new FrameTicker();
                cgrapher = Choreographer.getInstance();
                cgrapher.postFrameCallback(ft);
                MainThreadHandler = new XliCppThreadHandler();
                Looper.loop();
            }
        } else {
            com.Shim.XliJ.cppOnStartMainLoop(_seperateCoreThread, _cppMainLoop);
            ft = new FrameTicker();
            cgrapher = Choreographer.getInstance();
            cgrapher.postFrameCallback(ft);
            MainThreadHandler = new XliCppThreadHandler();
        }
    }
    @Override
    public boolean onKeyUp(int keyCode, KeyEvent event)
    {
    	if (keyCode == KeyEvent.KEYCODE_MENU) {
            com.Shim.XliJ.shimOnKeyUp(200);
    		return true;
    	}
        if (keyCode == KeyEvent.KEYCODE_BACK) {
            com.Shim.XliJ.shimOnKeyUp(201);
            return true;
        }
        
        {
            return false;
        }
    }
    @Override
    public boolean onKeyDown(int keyCode, KeyEvent event)
    {
    	if (keyCode == KeyEvent.KEYCODE_MENU) {
            com.Shim.XliJ.shimOnKeyDown(200);
    		return true;
    	}
        if (keyCode == KeyEvent.KEYCODE_BACK) {
            com.Shim.XliJ.shimOnKeyDown(201);
            return true;
        }
        
        {
            return false;
        }
    }

    @SuppressLint("NewApi")
	@SuppressWarnings("deprecation")
	@Override
    protected void onDestroy() {
    	_destroyed = true;
    	if (_verbose) Log.d(_appName, "Call OnDestroy");
        com.Shim.SystemHelper.detachKeyboardListeners();
        com.Shim.XliJ.OnDestroy();
    	super.onDestroy();
    	if (_verbose) Log.d(_appName, "Called OnDestroy");
        if (_killOnDestroy) android.os.Process.killProcess(android.os.Process.myPid());
    }

    @Override
    protected void onPause() {
    	if (_verbose) Log.d(_appName, "Call OnPause");
        super.onPause();
        com.Shim.XliJ.cppOnPause();
        if (_verbose) Log.d(_appName, "Called OnPause");
    }

    @Override
    protected void onResume() {
    	if (_verbose) Log.d(_appName, "Call OnResume");
        super.onResume();
        SystemHelper.UpdateStatusBar();
        com.Shim.XliJ.cppOnResume();
        if (_verbose) Log.d(_appName, "Called OnResume");
    }

    @Override
    protected void onRestart() {
    	if (_verbose) Log.d(_appName, "Call OnRestart");
        super.onRestart();
        com.Shim.XliJ.cppOnRestart();
        if (_verbose) Log.d(_appName, "Called OnRestart");
    }

    @Override
    protected void onSaveInstanceState(Bundle outState) {
    	if (_verbose) Log.d(_appName, "Call OnSave");
        com.Shim.XliJ.cppOnSaveInstanceState(null); // {TODO} direct byte buffer?
        if (_verbose) Log.d(_appName, "Called OnSave");
    }

    @Override
    protected void onStart() {
    	if (_verbose) Log.d(_appName, "Call OnStart");
        super.onStart();
        com.Shim.XliJ.cppOnStart();
        if (_verbose) Log.d(_appName, "Called OnStart");
    }

    @Override
    protected void onStop() {
    	if (_verbose) Log.d(_appName, "Call OnStop");
        super.onStop();
        com.Shim.XliJ.cppOnStop();
        if (_verbose) Log.d(_appName, "Called OnStop");
    }

    @Override
    public void onConfigurationChanged(Configuration arg0) {
    	if (_verbose) Log.d(_appName, "Call OnConfigChanged");
        super.onConfigurationChanged(arg0);
        if (!_destroyed) {
            com.Shim.XliJ.cppOnConfigChanged();
            
        }
        if (_verbose) Log.d(_appName, "Called OnConfigChanged");
    }

    @Override
    public void onLowMemory() {
    	if (_verbose) Log.d(_appName, "Call OnLowMem");
        super.onLowMemory();
        if (!_destroyed) {
            com.Shim.XliJ.cppOnLowMemory();
            
        }
        if (_verbose) Log.d(_appName, "Called OnLowMem");
    }

    @Override
    public void onWindowFocusChanged(boolean arg0) {
    	if (_verbose) Log.d(_appName, "Call OnFocusChanged:"+arg0);
        super.onWindowFocusChanged(arg0);
        if (!_destroyed) {
            com.Shim.XliJ.cppOnWindowFocusChanged(arg0);
            
        }
        if (_verbose) Log.d(_appName, "Called OnFocusChanged:"+arg0);
    }

    //------------------------------------------------

    public int RegisterTimer(int delay)
    {
    	int timer_id = MainThreadHandler.registerRepeating(delay);
    	return timer_id;
    }

    public void UnregisterTimer(int timerID)
    {
    	MainThreadHandler.unregisterRepeating(timerID);
    }

    @TargetApi(Build.VERSION_CODES.JELLY_BEAN)
    public static class FrameTicker implements Choreographer.FrameCallback {
        int _forceCount = -1;
    	Choreographer c;
    	public FrameTicker()
    	{
    		c = Choreographer.getInstance();
    	}
        public void ForceInNFrames(int n)
        {
            _forceCount = n;
        }
    	@Override
    	public void doFrame(long frameTimeNanos) {
            c.postFrameCallback(this);
            _forceCount = Math.max(-1, _forceCount-1);
            if (_forceCount==0) {
                com.Shim.XliJ.cppForceRedrawUnsafe();
            }
    		com.Shim.XliJ.cppTick();
    	}
    }

    
}
