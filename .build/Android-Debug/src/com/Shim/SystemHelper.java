/*
 * Copyright (C) 2010-2014 Outracks Technologies
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
 * associated documentation files (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge, publish, distribute,
 * sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial
 * portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
 * NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
 * OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

package com.Shim;

import android.annotation.SuppressLint;
import android.app.ActionBar;
import android.app.Activity;
import android.app.NativeActivity;
import android.os.Build;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.View;
import android.view.ViewTreeObserver;
import android.view.Window;
import android.view.WindowManager;
import android.widget.FrameLayout;


public class SystemHelper {

    static private boolean keyboardListenersAttached = false;
    static final boolean _cppMainLoop = (Build.VERSION.SDK_INT <= Build.VERSION_CODES.JELLY_BEAN);

    // NOTE: ALL OF THIS IS GETTING CLEANED UP WHEN WE REMOVE THE SHIM
    //       WHICH IS POSSIBLE NOW XLI IS CONTROLLING LESS

    static private ViewTreeObserver.OnGlobalLayoutListener keyboardLayoutListener = new ViewTreeObserver.OnGlobalLayoutListener() {
    	private boolean firstSizing = true;
        @Override
        public void onGlobalLayout() {
            int heightDiff = XliJ.GetRealDisplayHeight()-XliJ.nSuperLayout.getHeight();
            heightDiff -= GetStatusBarHeight();
            int contentViewTop = XliJ.nActivity.getWindow().findViewById(Window.ID_ANDROID_CONTENT).getTop();
            boolean keyboardClosed = (heightDiff-contentViewTop)<(XliJ.GetRealDisplayHeight()/4);
            if (heightDiff!=lastKeyboardHeight || firstSizing) {
                if (keyboardClosed) {
                	onHideKeyboard(heightDiff, firstSizing);
                } else {
                	onShowKeyboard(heightDiff, firstSizing);
                }
            }
            firstSizing = false;
            if (_cppMainLoop) {
            	XliJ.cppForceRedraw();
            } else {
                ((com.MyMineral.MyMineral)XliJ.nActivity).ft.ForceInNFrames(2);
            }
        }
    };
    static public void attachKeyboardListeners() {
        if (keyboardListenersAttached) { return; }
        XliJ.nRootLayout.getViewTreeObserver().addOnGlobalLayoutListener(keyboardLayoutListener);
        keyboardListenersAttached = true;
    }
    static public void detachKeyboardListeners() {
    	if (keyboardListenersAttached) {
        	if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.JELLY_BEAN) {
        		XliJ.nRootLayout.getViewTreeObserver().removeOnGlobalLayoutListener(keyboardLayoutListener);
        	} else {
        		XliJ.nRootLayout.getViewTreeObserver().removeGlobalOnLayoutListener(keyboardLayoutListener);
        	}
        }
    }
    static public int getKeyboardSize() {
    	return lastKeyboardHeight;
    }

    static boolean keyboardVisible;
    static int lastKeyboardHeight = 0;
    static protected void onShowKeyboard(int keyboardHeight, boolean force)
    {
    	keyboardVisible=true;
    	if (lastKeyboardHeight!=keyboardHeight || force)
    	{
    		lastKeyboardHeight = keyboardHeight;
    		XliJ.shimOnKeyboardResized(keyboardHeight);
    	}
    }
    static protected void onHideKeyboard(int keyboardHeight, boolean force)
    {
    	if (keyboardVisible || force)
    	{
    		keyboardVisible=false;
    		lastKeyboardHeight = keyboardHeight;
    		XliJ.shimOnKeyboardResized(keyboardHeight);
    	}
    }

    public static void ResendFrameSizes()
    {
        int heightDiff = XliJ.GetRealDisplayHeight()-XliJ.nSuperLayout.getHeight();
        heightDiff -= GetStatusBarHeight();
        lastKeyboardHeight = heightDiff;
        XliJ.shimOnKeyboardResized(heightDiff);
    }

    public static void hideStatusBar(final Activity activity) {
    	Window win = activity.getWindow();
    	win.addFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN);
        win.addFlags(WindowManager.LayoutParams.FLAG_LAYOUT_IN_SCREEN);
    }
    public static void showStatusBar(final NativeActivity activity) {
    	Window win = activity.getWindow();
    	win.clearFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN);
    }
	@SuppressLint("NewApi")
	public static DisplayMetrics GetDisplayMetrics(final Activity activity)
	{
		DisplayMetrics metrics = new DisplayMetrics();
    	if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.JELLY_BEAN_MR1) {
    		activity.getWindowManager().getDefaultDisplay().getRealMetrics(metrics);
            return metrics;
    	} else {
    		activity.getWindowManager().getDefaultDisplay().getMetrics(metrics);
            return metrics;
    	}
    }
	private static boolean StatusBarShowing = true;
	public static void UpdateStatusBar()
	{
		// this method reapplies the current status bar settings.
		// It does not change whether it is show or hiding.
		if (StatusBarShowing) {
			ShowStatusBar();
		} else {
			HideStatusBar();
		}
	}
	@SuppressLint("NewApi")
	public static void HideStatusBar()
	{
		StatusBarShowing = true;
		// If the Android version is lower than Jellybean, use this call to hide
        // the status bar.
        if (Build.VERSION.SDK_INT < 16) {
        	XliJ.nActivity.getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN, WindowManager.LayoutParams.FLAG_FULLSCREEN);
        } else {
        	View decorView = XliJ.nActivity.getWindow().getDecorView();
        	// Hide the status bar.
        	decorView.setSystemUiVisibility(View.SYSTEM_UI_FLAG_FULLSCREEN);
        	ActionBar actionBar = XliJ.nActivity.getActionBar();
        	actionBar.hide();
        }
        CompensateRootLayoutForSystemUI();
	}
	@SuppressLint("NewApi")
	public static void ShowStatusBar()
	{
		StatusBarShowing = true;
		// If the Android version is lower than Jellybean, use this call to hide
        // the status bar.
        if (Build.VERSION.SDK_INT < 16) {
        	XliJ.nActivity.getWindow().clearFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN);
        } else {
        	View decorView = XliJ.nActivity.getWindow().getDecorView();
        	// Hide the status bar.
        	decorView.setSystemUiVisibility(View.SYSTEM_UI_FLAG_VISIBLE);
            // Actionbar is ugly, hide it
            // {TODO} read all of http://stackoverflow.com/a/14167949/574033
        	ActionBar actionBar = XliJ.nActivity.getActionBar();
        	actionBar.hide();
        }
        CompensateRootLayoutForSystemUI();
	}
	public static float GetStatusBarHeight()
	{
        int result = 0;
        if (StatusBarShowing) {
        	int resourceId = XliJ.nActivity.getResources().getIdentifier("status_bar_height", "dimen", "android");
        	if (resourceId > 0) {
        		result = XliJ.nActivity.getResources().getDimensionPixelSize(resourceId);
        	}
        }
        return (float)result;
	}

    public static void CompensateRootLayoutForSystemUI()
    {
        if (XliJ.nRootLayout != null) {
            int compensation = -(int)GetStatusBarHeight();
            XliJ.SetFrame(XliJ.nRootLayout, 0, compensation, FrameLayout.LayoutParams.MATCH_PARENT, com.Shim.XliJ.GetRealDisplayHeight());
        }
    }
}
