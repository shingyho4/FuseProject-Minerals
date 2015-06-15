package com.Shim;

import android.util.Log;
import android.view.MotionEvent;
import android.view.MotionEvent.PointerCoords;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import android.widget.FrameLayout;

public class UnoSurfaceView extends FrameLayout implements UnoWrapped
{
    SurfaceView surfaceView;
    int width = 0;
    int height = 0;
    long ptr = 0;

	public UnoSurfaceView(long uPtr) {
		super(com.Shim.XliJ.nActivity);
		ptr = uPtr;
		surfaceView = new SView(this);
		this.addView(surfaceView, new LayoutParams(LayoutParams.MATCH_PARENT, LayoutParams.MATCH_PARENT));
	}

	public void updateDimensions(int w, int h) {
		if (width!=w || height!=h) {
			width=w;
			height=h;
		}
	}

	@Override
	public long _GetUnoPtr() {
		return ptr;
	}

	private class SView extends SurfaceView implements SurfaceHolder.Callback {
		UnoSurfaceView owner;
		PointerCoords pointerCoords;

		public SView(UnoSurfaceView owner) {
			super(com.Shim.XliJ.nActivity);
			this.owner = owner;
	        pointerCoords = new PointerCoords();
	        getHolder().addCallback(this);
	        setZOrderOnTop(false);
		}

		@Override
		public void surfaceCreated(SurfaceHolder holder) {
			//Log.d("MyMineral","surfaceCreated");
	        com.Shim.XliJ.shimUnoSurfaceCreated(owner._GetUnoPtr(), holder.getSurface());
	        owner.updateDimensions(getWidth(), getHeight());
		}

		@Override
		public void surfaceChanged(SurfaceHolder holder, int format, int width, int height) {
			// Log.d("MyMineral","surfaceChanged");
			owner.updateDimensions(width, height);
		}

		@Override
		public void surfaceDestroyed(SurfaceHolder holder) {
			//Log.d("MyMineral","surfaceDestroyed");
	        com.Shim.XliJ.shimUnoSurfaceDestroyed(owner._GetUnoPtr());
		}

		@Override
		public boolean onTouchEvent(MotionEvent event) {
			// get pointer index from the event object
			int pointerIndex = event.getActionIndex();

			// get pointer ID
			int pointerId = event.getPointerId(pointerIndex);

			// get masked (not specific to a pointer) action
			int maskedAction = event.getActionMasked();

            event.getPointerCoords(pointerIndex, pointerCoords);

			switch (maskedAction) {

			case MotionEvent.ACTION_DOWN:
			case MotionEvent.ACTION_POINTER_DOWN: {
				com.Shim.XliJ.shimOnSurfaceTouch(owner._GetUnoPtr(), pointerId, (int)pointerCoords.x, (int)pointerCoords.y, 1);
				break;
			}
			case MotionEvent.ACTION_MOVE: {
				com.Shim.XliJ.shimOnSurfaceTouch(owner._GetUnoPtr(), pointerId, (int)pointerCoords.x, (int)pointerCoords.y, 0);
				break;
			}
			//case MotionEvent.ACTION_CANCEL:
			case MotionEvent.ACTION_UP:
			case MotionEvent.ACTION_POINTER_UP: {
				com.Shim.XliJ.shimOnSurfaceTouch(owner._GetUnoPtr(), pointerId, (int)pointerCoords.x, (int)pointerCoords.y, 2);
				performClick();
				break;
			}
			}

			return true;
		}

		@Override
		public boolean performClick()
		{
			return super.performClick();
		}
	}
}
