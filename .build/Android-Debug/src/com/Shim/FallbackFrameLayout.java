package com.Shim;

import android.content.Context;
import android.widget.FrameLayout;

public class FallbackFrameLayout extends FrameLayout {

	public FallbackFrameLayout(Context context) {
		super(context);
	}

	@Override
    public void onSizeChanged(int xNew, int yNew, int xOld, int yOld)
    {
		XliJ.realHeight = yNew;
		XliJ.realWidth = xNew;
        com.Shim.XliJ.cppOnConfigChanged();
        com.Shim.XliJ.cppForceRedraw();
	}
}
