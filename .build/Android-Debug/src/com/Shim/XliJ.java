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

import java.util.Map;
import java.util.HashMap;
import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.lang.reflect.Method;
import java.io.BufferedInputStream;
import java.util.concurrent.Semaphore;
import java.io.UnsupportedEncodingException;
import java.util.concurrent.atomic.AtomicInteger;

import android.os.Build;
import android.util.Log;
import android.os.Bundle;
import android.view.View;
import android.app.Activity;
import android.os.AsyncTask;
import android.view.Display;
import android.view.Gravity;
import android.app.ActionBar;
import android.view.ViewGroup;
import android.text.InputType;
import android.graphics.Color;
import android.content.Context;
import android.net.NetworkInfo;
import android.widget.EditText;
import android.widget.TextView;
import android.util.SparseArray;
import android.graphics.Typeface;
import android.widget.FrameLayout;
import android.util.DisplayMetrics;
import android.content.res.Resources;
import android.view.View.MeasureSpec;
import android.net.ConnectivityManager;
import android.annotation.SuppressLint;
import android.content.res.AssetManager;
import android.content.res.Configuration;
import android.view.View.OnLayoutChangeListener;
import android.view.inputmethod.InputMethodManager;
import android.text.method.PasswordTransformationMethod;

public class XliJ {

	//--------------------------------------------
	// Cached Activity
	public static Activity nActivity;
    public static FrameLayout nSuperLayout;
    public static FrameLayout nRootLayout;
    public static AssetManager nAssetManager;

    public static void OnDestroy()
    {
    	com.Shim.XliJ.cppOnDestroy();
    	nActivity=null;
    	nSuperLayout=null;
    	nRootLayout=null;
    	nAssetManager=null;
    }

    public static void CacheActivity(final Activity activity)
    {
        nActivity = activity;
        nAssetManager = nActivity.getAssets();
    }
    @SuppressLint("NewApi")
    public static void CacheRootUILayout(final FrameLayout layout,final FrameLayout slayout)
    {
        nSuperLayout = slayout;
    	nRootLayout = layout;
        CalcRealSizes();
        SystemHelper.CompensateRootLayoutForSystemUI();
    }

	//--------------------------------------------
	// Callbacks to C++ code
    public static native void shimOnKeyUp(int keyCode);
    public static native void shimOnKeyDown(int keyCode);
    public static native void shimOnTextInput(String keyCode);
    public static native void shimOnTextViewTextChanged(long ptr, String text);
    public static native void shimOnTextViewInputFinished(long ptr);

    public static native void XliJ_HttpCallback(int body, String[] headers, int responseCode, String responseMessage, long requestPointer);
    public static native void XliJ_HttpContentStringCallback(String content, long requestPointer);
    public static native void XliJ_HttpBytesDownloadedCallback(byte[] chunk, int chunkLength, long requestPointer);
    public static native void XliJ_HttpTimeoutCallback(long requestPointer);
    public static native void XliJ_HttpProgressCallback(long requestPointer, long position, long totalLength, boolean lengthKnown, int direction);
    public static native void XliJ_HttpErrorCallback(long requestPointer, int errorCode, String errorMessage);
    public static native void XliJ_HttpAbortedCallback(long requestPointer);

    public static native void shimJavaThrowError(int code, String throwMessage);
    public static native void shimUnoViewReady(long unoView, Object view);
    public static native void shimUnoViewVisibilityChanged(long ptr, boolean visibility);
    public static native void shimOnKeyboardResized(int height);
    public static native void shimTimerCallback(int id);
    public static native void shimOnSurfaceTouch(long ptr, int pointerID, int x, int y, int type);
    public static native void shimUnoSurfaceCreated(long unoView, Object surface);
    public static native void shimUnoSurfaceDestroyed(long unoView);

    public static native void cppOnCreate(boolean _seperateCoreThread);
    public static native void cppOnDestroy();
    public static native void cppOnPause();
    public static native void cppOnResume();
    public static native void cppOnRestart();
    public static native void cppOnStart();
    public static native void cppOnStop();
    public static native void cppForceRedraw();
    public static native void cppForceRedrawUnsafe();

    public static native void cppOnSaveInstanceState(Bundle state);
    public static native void cppOnConfigChanged();
    public static native void cppOnLowMemory();
    public static native void cppOnWindowFocusChanged(boolean hasFocus);

    public static native void cppOnStartMainLoop(boolean seperateCoreThread, boolean _cppMainLoop);
    public static native void cppTick();

    //--------------------------------------------
    // System

    public static void HideStatusBar() {
    	SystemHelper.HideStatusBar();
    }
    public static void ShowStatusBar() {
    	SystemHelper.ShowStatusBar();
    }
	public static DisplayMetrics GetDisplayMetrics()
	{
		return SystemHelper.GetDisplayMetrics(nActivity);
    }
	public static float GetStatusBarHeight()
	{
		return SystemHelper.GetStatusBarHeight();
	}
    public static Activity GetActivity()
    {
        return nActivity;
    }
    public static AssetManager GetAssetManager()
    {
        return nAssetManager;
    }

    public static int GetNavigationBarHeight(Resources resources, int orientation) {
        String resourceName = orientation == Configuration.ORIENTATION_PORTRAIT ? "navigation_bar_height" : "navigation_bar_height_landscape";
        int id = resources.getIdentifier(resourceName,"dimen", "android");
        if (id > 0) {
            return resources.getDimensionPixelSize(id);
        }
        return 0;
    }
    public static int GetNavigationBarHeight() {
    	Resources r = nActivity.getResources();
        int o = r.getConfiguration().orientation;
    	return GetNavigationBarHeight(r, o);
    }

    //--------------------------------------------
    // NativeViews

    public static void SetAsRootView(Object view)
    {
        final View uview = (View)view;
        nActivity.runOnUiThread(new Runnable() { public void run() {
            nRootLayout.addView(uview, 0);
        }});
    }

    public static void NewUSurfaceView(final long ptr)
    {
    	nActivity.runOnUiThread(new Runnable() { public void run() {
            UnoSurfaceView result = new UnoSurfaceView(ptr);
            com.Shim.XliJ.shimUnoViewReady(ptr, result);
		}});
    }

    @SuppressLint("NewApi")
	public static void NewUEditText(final long ptr)
    {
    	nActivity.runOnUiThread(new Runnable() { public void run() {
            UnoEditText uview = new UnoEditText(ptr);
            com.Shim.XliJ.shimUnoViewReady(ptr, uview);
		}});
    }

    public static void SetParent(Object view, Object parent)
    {
        if (view!=null) {
            final View uview = (View) view;
            final ViewGroup uparent = (parent == null) ? nRootLayout : (ViewGroup) parent;
            nActivity.runOnUiThread(new Runnable() { public void run() {
                uparent.addView(uview);
            }});
        }
    }
    public static Object GetParent(Object view)
    {
        final View uview = (View) view;
        return (Object)uview.getParent();
    }

    public static long GetUnoViewPtr(Object view)
    {
        Class<?> cls = view.getClass();
        if (cls == UnoSurfaceView.class || cls == UnoEditText.class) {
            return ((UnoWrapped)view)._GetUnoPtr();
        } else {
            return 0;
        }
    }

    public static void SetFrame(Object view, final int originX, final int originY, final int width, final int height)
    {
    	final View uview = (View) view;
    	nActivity.runOnUiThread(new Runnable() { public void run() {
            FrameLayout.LayoutParams lp = new FrameLayout.LayoutParams(width,height);
            if (Build.VERSION.SDK_INT < 14) {
                lp.gravity = Gravity.TOP;
            }
            lp.leftMargin = originX;
            lp.topMargin = originY;
            uview.setLayoutParams(lp);
		}});
    }

    public static void SetText(Object view, final String content)
    {
        final UnoEditText uet = (UnoEditText)view;
    	nActivity.runOnUiThread(new Runnable() { public void run() {
    		uet.setText(content);
    	}});

    }
    public static void SetColorString(Object view, final String color)
    {
    	final TextView uview = (TextView)view;
    	nActivity.runOnUiThread(new Runnable() { public void run() {
    		uview.setTextColor(Color.parseColor(color));
    	}});
    }
    public static void SetTextColorRGB(Object view, final int r, final int g, final int b)
    {
    	final TextView uview = (TextView)view;
    	nActivity.runOnUiThread(new Runnable() { public void run() {
    		uview.setTextColor(Color.rgb(r, g, b));
    	}});
    }
    public static void SetFontSize(Object view, final float size)
    {
    	final TextView uview = (TextView)view;
    	// using device scaled pixels
    	nActivity.runOnUiThread(new Runnable() { public void run() {
    		uview.setTextSize(size);
    	}});
    }
    public static void SetFont(Object view, final String fontFamilyName, final int style)
    {
    	final TextView uview = (TextView)view;
    	nActivity.runOnUiThread(new Runnable() { public void run() {
    		uview.setTypeface(Typeface.create(fontFamilyName, style));
    	}});
    }
    private static HashMap<String,Typeface> TypefaceCache;
    public static void SetFontFromFile(Object view, final String path, final int style)
    {
    	final TextView uview = (TextView)view;
    	nActivity.runOnUiThread(new Runnable() { public void run() {
    		String key = path;
            if (TypefaceCache==null) {
    			TypefaceCache = new HashMap<String, Typeface>();
    		}
    		if (!TypefaceCache.containsKey(key)) {
    			TypefaceCache.put(key, Typeface.createFromAsset(nAssetManager, path));
    		}
    		uview.setTypeface(TypefaceCache.get(key), style);
    	}});
    }


    public static void SetIsFocusable(Object view, final boolean focusable)
    {
        if (nActivity==null) return;
        final View uview = (View) view;
        nActivity.runOnUiThread(new Runnable() { public void run() {
    		uview.setFocusable(focusable);
            uview.setFocusableInTouchMode(focusable);
    	}});
    }

    public static boolean GetVisibility(Object view)
    {
        final View uview = (View) view;
        return (uview.getVisibility() == View.VISIBLE);
    }

    public static void SetVisibility(Object view, final boolean vis)
    {
        if (nActivity==null) return;
        final View uview = (View) view;
        nActivity.runOnUiThread(new Runnable() { public void run() {
    		uview.setVisibility(vis ? View.VISIBLE : View.INVISIBLE );
    	}});
    }

    public static void SetEnabled(Object view, final boolean enabled)
    {
        if (nActivity==null) return;
        final View uview = (View) view;
        nActivity.runOnUiThread(new Runnable() { public void run() {
    		uview.setEnabled(enabled);
    	}});
    }

    public static void SelectAll(Object view)
    {
        final EditText uet = (EditText)view;
        nActivity.runOnUiThread(new Runnable() { public void run() {
            uet.selectAll();
        }});
    }
    public static String GetSelectedText(Object view)
    {
        EditText uet = (EditText)view;
        int start = uet.getSelectionStart();
        if (start>-1) {
            return uet.getText().toString().substring(start, uet.getSelectionEnd());
        } else {
            return "";
        }
    }

    public static void SetViewFocus(Object view, final boolean focus)
    {
    	final View uview = (View)view;
    	nActivity.runOnUiThread(new Runnable() { public void run() {
    		if (focus)
        	{
                uview.setVisibility(View.VISIBLE);
        		uview.requestFocus();
        	} else {
        		nRootLayout.requestFocus();
        	}
    	}});
    }

    public static void SetIsEditing(Object view, final boolean editting)
    {
    	final EditText uview = (EditText)view;
    	nActivity.runOnUiThread(new Runnable() { public void run() {
    		if (editting)
        	{
        		uview.requestFocus();
        	} else {
                uview.clearFocus();
        		nRootLayout.requestFocus();
	        	InputMethodManager imm = (InputMethodManager)nActivity.getSystemService(Context.INPUT_METHOD_SERVICE);
	        	imm.hideSoftInputFromWindow(uview.getWindowToken(), 0);
        	}
    	}});
    }

    public static int Measure(Object view, int width, int height, int spec)
    {
        final View uview = (View)view;
    	int wSpec;
    	int hSpec;
        switch (spec)
        {
        case 1:
            wSpec = MeasureSpec.makeMeasureSpec(width, MeasureSpec.EXACTLY);
            hSpec = MeasureSpec.makeMeasureSpec(height, MeasureSpec.AT_MOST);
            break;
        case 2:
            wSpec = MeasureSpec.makeMeasureSpec(width, MeasureSpec.AT_MOST);
            hSpec = MeasureSpec.makeMeasureSpec(height, MeasureSpec.EXACTLY);
            break;
        default:
            wSpec = MeasureSpec.makeMeasureSpec(width, MeasureSpec.AT_MOST);
            hSpec = MeasureSpec.makeMeasureSpec(height, MeasureSpec.AT_MOST);
            break;
        }
    	uview.measure(wSpec, hSpec);

        short w = (short) (uview.getMeasuredWidth());
    	short h = (short) (uview.getMeasuredHeight());

    	return (w<<16) | (h&0xffff);
    }

     public static void SetIsMultiline(Object view, final boolean multiline)
     {
         final TextView uview = (TextView) view;
         nActivity.runOnUiThread(new Runnable() { public void run() {
     		uview.setSingleLine(!multiline);
     		if (multiline) {
     			uview.setInputType(InputType.TYPE_CLASS_TEXT | InputType.TYPE_TEXT_FLAG_MULTI_LINE);
     		}
     	}});
     }
     public static void SetIsPassword(Object view, final boolean vis)
     {
         final TextView uview = (TextView) view;
         nActivity.runOnUiThread(new Runnable() { public void run() {
             uview.setTransformationMethod(vis ? android.text.method.PasswordTransformationMethod.getInstance() : null);
     	}});
     }
     public static void SetInputHint(Object view, final int hint)
     {
         final TextView uview = (TextView) view;
         nActivity.runOnUiThread(new Runnable() { public void run() {
        	 switch (hint) {
        	 case 1:
        		 //email
        		 uview.setInputType(InputType.TYPE_TEXT_VARIATION_EMAIL_ADDRESS);
        		 break;
        	 case 2:
        		 //url
        		 uview.setInputType(InputType.TYPE_TEXT_VARIATION_URI);
        		 break;
        	 case 3:
        		 //phone
        		 uview.setInputType(InputType.TYPE_CLASS_PHONE);
        		 break;
        	 case 4:
        		 //number
        		 uview.setInputType(InputType.TYPE_CLASS_NUMBER);
        		 break;
        	 default:
        		 if (!((uview.getInputType()&InputType.TYPE_CLASS_TEXT)==InputType.TYPE_CLASS_TEXT)) {
        			 uview.setInputType(InputType.TYPE_CLASS_TEXT);
        		 }
        		 break;
        	 }
     	}});
      }
     public static void SetPlaceholder(Object view, final String placeholderText)
     {
         final TextView uview = (TextView) view;
         nActivity.runOnUiThread(new Runnable() { public void run() {
     		uview.setHint(placeholderText);
         }});
     }
     public static void SetTextAlignment(Object view, final int alignment)
     {
         final TextView uview = (TextView) view;
         nActivity.runOnUiThread(new Runnable() { public void run() {
        	 switch (alignment) {
        	 case 1:
        		 //center
        		 uview.setGravity(Gravity.CENTER_HORIZONTAL);
        		 break;
        	 case 2:
        		 //right
        		 uview.setGravity(Gravity.RIGHT);
        		 break;
        	 default:
        		 //left
        		 uview.setGravity(Gravity.LEFT);
        		 break;
        	 }
         }});
     }
     public static void SetTextWrapping(Object view, final boolean wrap)
     {
    	 final TextView uview = (TextView) view;
    	 nActivity.runOnUiThread(new Runnable() { public void run() {
    		 uview.setHorizontallyScrolling (!wrap);
    	 }});
     }
     public static void SetSelectionColor(Object view, final int r, final int g, final int b)
     {
    	 final TextView uview = (TextView) view;
    	 nActivity.runOnUiThread(new Runnable() { public void run() {
    		 uview.setHighlightColor(Color.rgb(r, g, b));
    	 }});
     }

    //--------------------------------------------
    // Keyboard - ONLY HERE BECAUSE OF OLD XLI, NEED TO REMOVE ASAP
    public static void RaiseKeyboard() {}
    public static int GetKeyboardSize() { return 0; }
    public static void HideKeyboard() {}

    //--------------------------------------------
    // MessageBox
    public static int ShowMessageBox(CharSequence caption, CharSequence message, int buttons, int hints)
    {
        return MessageBoxHelper.ShowMessageBox(nActivity, caption, message, buttons, hints);
    }

    //--------------------------------------------
    // Network
    public static boolean ConnectedToNetwork()
    {
        ConnectivityManager connMgr = (ConnectivityManager)nActivity.getSystemService(Context.CONNECTIVITY_SERVICE);
        NetworkInfo networkInfo = connMgr.getActiveNetworkInfo();
        if(networkInfo == null) { return false; }
        return networkInfo.isConnected();
    }

    //--------------------------------------------
    // Http
    public static Object GetHeaderMap()
    {
    	return (Object)new HashMap<String,String>();
    }

    public static HashMap<String,String> StringToHeadersMap(String headers)
    {
    	//{TODO} Add validation/sanity-checks for headers
    	HashMap<String,String> h = new HashMap<String,String>();
    	if (headers.trim().length()==0) return h;

    	for (String pair : headers.split("\n"))
    	{
    		String[] kv = pair.split(":",2);
    		if (kv.length>1)
    		{
    			h.put(kv[0], kv[1]);
    		} else if (kv.length == 1) {
    			h.put(kv[0], "");
    		}
    	}
    	return h;
    }

    public static int SendHttpAsync(String url, String method, String headers, ByteBuffer body,
                                          int timeout, long requestPointer, boolean verifyHost) {
    	return HttpHelper.SendHttpAsync(url, method, StringToHeadersMap(headers), body, timeout, requestPointer, verifyHost);
    }

	public static int SendHttpStringAsync(String url, String method, String headers, String body,
    								 			int timeout, long requestPointer, boolean verifyHost) {
        return HttpHelper.SendHttpStringAsync(url, method, StringToHeadersMap(headers), body, timeout, requestPointer, verifyHost);
    }

	public static byte[] ReadAllBytesFromHttpInputStream(InputStream stream, long requestPointer) throws IOException
    {
		return HttpHelper.ReadAllBytesFromHttpInputStream(stream, requestPointer);
    }

	public static void InitDefaultCookieManager()
    {
        HttpHelper.InitDefaultCookieManager();
    }

    //--------------------------------------------
    // Stream
    public static String InputStreamToString(InputStream stream) throws IOException, UnsupportedEncodingException
    {
		return StreamHelper.InputStreamToString(stream);
    }
	public static int AsyncInputStreamToString(int stream, long requestPointer) throws IOException, UnsupportedEncodingException
    {
        return StreamHelper.AsyncInputStreamToString((InputStream)GetObject(stream), requestPointer);
    }
	public static int AsyncInputStreamToByteArray(int stream, long requestPointer)
    {
		return StreamHelper.AsyncProgressiveInputStreamToByteArray((InputStream)GetObject(stream), requestPointer);
    }
    public static byte[] ReadAllBytesFromInputStream(InputStream stream) throws IOException
    {
		return StreamHelper.ReadAllBytesFromInputStream(stream);
    }
    public static byte[] ReadBytesFromInputStream(BufferedInputStream stream, int bytesToRead)
    {
    	return StreamHelper.ReadBytesFromInputStream(stream, bytesToRead);
    }

    //--------------------------------------------
    // Async
    @SuppressWarnings("rawtypes")
	public static void AbortAsyncTask(int taskId)
    {
    	AsyncTask atask = (AsyncTask)GetObject(taskId);
    	if (atask==null) return;
    	atask.cancel(true);
    }

    //--------------------------------------------
    // Object Store
    public static Semaphore _objSem = new Semaphore(1);
    public static SparseArray<Object> _objStore = new SparseArray<Object>();
    public static ArrayList<Integer> _objReservedList = new ArrayList<Integer>();
    public static AtomicInteger _objKey = new AtomicInteger(0); //This must not be -1 as otherwise the first held object has the key 0 and 0 is null in cpp.
    public static int HoldObject(Object obj)
    {
    	try {
			_objSem.acquire();
			if (obj==null) return -1;
	    	int key = _objKey.incrementAndGet();
	    	_objStore.put(key, obj);
	    	_objSem.release();
	    	return key;
		} catch (InterruptedException e) {
			e.printStackTrace();
			shimJavaThrowError(-1, "Threading error in Xli.HoldObject");
			return -1;
		}

    }
    public static int ReserveObject()
    {
    	try {
			_objSem.acquire();
	    	int key = _objKey.incrementAndGet();
	    	_objReservedList.add(key);
	    	_objSem.release();
	    	return key;
		} catch (InterruptedException e) {
			e.printStackTrace();
			shimJavaThrowError(-1, "Threading error in Xli.HoldObject");
			return -1;
		}

    }
    public static void PopulateReservedObject(int key, Object obj)
    {
    	try {
			_objSem.acquire();
	    	int currentKey = _objKey.get();
	    	Object stored = _objStore.get(key);
	    	boolean containsp = _objReservedList.contains(key);
	    	if (key > currentKey || stored!=null || !containsp)
	    	{
	    		shimJavaThrowError(-1, "Tried to populate invalid reserved object");
	    		return;
	    	}
	    	_objReservedList.remove(_objReservedList.indexOf(key));
			_objStore.put(key, obj);
			_objSem.release();
		} catch (InterruptedException e) {
			e.printStackTrace();
			shimJavaThrowError(-1, "Threading error in Xli.HoldObject");
		}

    }
    public static Object GetObject(int key)
    {
    	try {
			_objSem.acquire();
	    	if (key==-1) return null;
	    	Object result = _objStore.get(key);
	    	if (result!=null)
	    	{
	    		_objSem.release();
	    		return result;
	    	} else {
	    		_objSem.release();
	    		shimJavaThrowError(-1, "Tried to access invalid object from java object store");
	    		return null;
	    	}
		} catch (InterruptedException e) {
			e.printStackTrace();
			shimJavaThrowError(-1, "Threading error in Xli.HoldObject");
			return null;
		}

    }
    public static boolean TryReleaseObject(int key)
    {
    	try {
			_objSem.acquire();
	    	if (_objStore.get(key)==null) return false;
	    	_objStore.remove(key);
	    	_objSem.release();
	    	return true;
		} catch (InterruptedException e) {
			e.printStackTrace();
			shimJavaThrowError(-1, "Threading error in Xli.HoldObject");
			return false;
		}
    }

    public static int realWidth = 0;
    public static int realHeight = 0;
    public static void CalcRealSizes()
    {
        //cache initialSize so we have something sane
        Display display = nActivity.getWindowManager().getDefaultDisplay();
        if (Build.VERSION.SDK_INT >= 17){
            //new pleasant way to get real metrics
            DisplayMetrics realMetrics = new DisplayMetrics();
            display.getRealMetrics(realMetrics);
            realWidth = realMetrics.widthPixels;
            realHeight = realMetrics.heightPixels;
        } else if (Build.VERSION.SDK_INT >= 14) {
            //reflection for this weird in-between time
            try {
                Method mGetRawH = Display.class.getMethod("getRawHeight");
                Method mGetRawW = Display.class.getMethod("getRawWidth");
                realWidth = (Integer) mGetRawW.invoke(display);
                realHeight = (Integer) mGetRawH.invoke(display);
            } catch (Exception e) {
                //this may not be 100% accurate, but it's all we've got
                realWidth = display.getWidth();
                realHeight = display.getHeight();
            }
        } else {
            //This should be close, as lower API devices should not have window navigation bars
            realWidth = display.getWidth();
            realHeight = display.getHeight();
        }
        if (nSuperLayout!=null) {
            realWidth = nSuperLayout.getWidth();
        }
    }
    public static int GetRealDisplayWidth()
    {
        CalcRealSizes();
        if (nRootLayout!=null) {
            return nRootLayout.getWidth();
        }
    	return realWidth;
    }
    public static int GetRealDisplayHeight()
    {
        CalcRealSizes();
        return realHeight;
    }
}
