package com.Shim;

import android.graphics.Color;
import android.os.Build;
import android.text.Editable;
import android.text.TextWatcher;
import android.util.Log;
import android.view.Gravity;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.EditText;
import android.widget.FrameLayout;
import android.widget.TextView;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewGroup.LayoutParams;
import android.view.inputmethod.InputMethodManager;
import android.content.Context;
import android.view.inputmethod.EditorInfo;
import android.view.KeyEvent;

public class UnoEditText extends EditText implements UnoWrapped {
	long _unoPtr;
	String _previousContents;
	public UnoEditText(long ptr)
	{
		super(com.Shim.XliJ.nActivity);
		_unoPtr = ptr;
		_previousContents = "";
        getBackground().clearColorFilter();
		setBackgroundColor(0);
		UTextWatcher tw = new UTextWatcher();
		addTextChangedListener(tw);
		setTextColor(Color.BLACK);
        setGravity(Gravity.TOP);
        setPadding(0, 0, 0, 0);
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.JELLY_BEAN){
        	setPaddingRelative(0, 0, 0, 0);
        }
        ForceCursorDrawableRes(0);
        setFocusable(true);
        setFocusableInTouchMode(true);
        setOnFocusChangeListener(new OnFocusChangeListener() {
                @Override
                public void onFocusChange(View v, boolean hasFocus) {
                    if (hasFocus) {
                        EditText uview = (EditText)v;
                        InputMethodManager imm = (InputMethodManager)XliJ.nActivity.getSystemService(Context.INPUT_METHOD_SERVICE);
                        imm.showSoftInput(uview, InputMethodManager.SHOW_IMPLICIT);
                    }
                }
            });

        setOnEditorActionListener( new EditText.OnEditorActionListener() {
                @Override
                public boolean onEditorAction(TextView v, int actionId, KeyEvent event) {
                    if (actionId == EditorInfo.IME_ACTION_SEARCH || actionId == EditorInfo.IME_ACTION_DONE || actionId == EditorInfo.IME_ACTION_GO || actionId == EditorInfo.IME_ACTION_NEXT || actionId == EditorInfo.IME_ACTION_SEND) {
                        if (event == null || (!event.isShiftPressed())) {
                            XliJ.shimOnTextViewInputFinished(_unoPtr);
                            return true;
                        }
                    }
                    return false; // pass on to other listeners.
                }
            });
	}
    @Override
	public void setLayoutParams(LayoutParams params) {
    	FrameLayout.LayoutParams lp = (FrameLayout.LayoutParams)params;
    	lp.height = FrameLayout.LayoutParams.WRAP_CONTENT;
		super.setLayoutParams(params);
	}

    public void ForceCursorDrawableRes(int value)
    {
		//https://github.com/android/platform_frameworks_base/blob/kitkat-release/core/java/android/widget/TextView.java#L562-564
		try {
		    java.lang.reflect.Field f = TextView.class.getDeclaredField("mCursorDrawableRes");
		    f.setAccessible(true);
		    f.set(this, value);
		} catch (Exception ignored) {}
    }

	class UTextWatcher implements TextWatcher
	{
		@Override
		public void beforeTextChanged(CharSequence s, int start, int count, int after) {
		}

		@Override
		public void onTextChanged(CharSequence s, int start, int before, int count) {
		}

		@Override
		public void afterTextChanged(Editable s) {
			String contents = s.toString();
			if (!_previousContents.equals(contents)) {
				_previousContents = contents;
				com.Shim.XliJ.shimOnTextViewTextChanged(_unoPtr, contents);
			}
		}
	}
	@Override
	public long _GetUnoPtr() {
		return _unoPtr;
	}
}
