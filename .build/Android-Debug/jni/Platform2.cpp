#include <Uno/Platform2.h>
#include "AApplication.h"
#include "JNIHelper.h"
#include "GLHelper.h"
#include <app/Uno.Float2.h>
#include <app/Uno.Rect.h>
#include <app/Uno.Platform2.Display.h>
#include <app/Uno.Platform2.View.h>
#include <app/Uno.Platform2.TimerEventArgs.h>
#include <app/Uno.Platform2.GraphicsView.h>
#include <app/Uno.Platform2.TextInputView.h>
#include <app/Uno.Platform2.SystemUI.h>
#include <app/Uno.Platform2.SystemUIWillResizeEventArgs.h>
//
// Uno.Platform2.Application
//

namespace uPlatform2
{
    ViewNativeHandle Application::GetRootView()
    {
        // TODO
        return NULL;
    }

    void Application::SetRootView(ViewNativeHandle view)
    {
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(setAsRootView, shim, "SetAsRootView", "(Ljava/lang/Object;)V");
        __jni->CallStaticVoidMethod(shim, setAsRootView, view);
    }

    bool Application::GetIsStatusBarVisible()
    {
        jclass shim = JniHelper::GetShim();
        WITH_STATIC_JAVA_METHOD(getSysUIHeight, shim, "GetStatusBarHeight", "()F");
        float height = (float)__jni->CallStaticFloatMethod(shim, getSysUIHeight);
        return height != 0.0;
    }

    void Application::SetStatusBarVisible(bool visible)
    {
        jclass shim = JniHelper::GetShim();
        if (visible) {
            WITH_STATIC_JAVA_METHOD(showSysUI, shim, "ShowStatusBar", "()V");
            __jni->CallStaticVoidMethod(shim, showSysUI);
        } else {
            WITH_STATIC_JAVA_METHOD(hideSysUI, shim, "HideStatusBar", "()V");
            __jni->CallStaticVoidMethod(shim, hideSysUI);
        }
    }

    ::app::Uno::Rect Application::GetStatusBarFrame()
    {
        jclass shim = JniHelper::GetShim();
        WITH_STATIC_JAVA_METHOD(getSysUIFrameHeight, shim, "GetStatusBarHeight", "()F");

        ::app::Uno::Float2 dispSize = AApplication::_GetRootDisplaySize();
        ::app::Uno::Float2 origin = ::app::Uno::Float2__New_2(NULL, 0, 0);

        float height = (float)__jni->CallStaticFloatMethod(shim, getSysUIFrameHeight);
        ::app::Uno::Float2 size = ::app::Uno::Float2__New_2(NULL, dispSize.X, height);
        return ::app::Uno::Rect__New_2(NULL, origin, size);
    }
}

//
// Uno.Platform2.Display
//

namespace uPlatform2
{
    void Display::Initialize(Display::UnoDisplay this_)
    {
    }

    void Display::Destroy(Display::UnoDisplay this_)
    {
    }

    void Display::InitializeAsMainDisplay(Display::UnoDisplay mainDisplay)
    {
        AApplication::_rootDisplay = mainDisplay;
        ResetGeometry(mainDisplay);
    }

    void Display::ResetGeometry(Display::UnoDisplay this_)
    {
        // TODO: hard-coded for the MainDisplay, for now.

        float density = JniHelper::GetDensity();
        ::app::Uno::Float2 position = ::app::Uno::Float2__New_2(NULL, 0., 0.);
        ::app::Uno::Float2 size = AApplication::_GetRootDisplaySize();
        ::app::Uno::Rect frame = ::app::Uno::Rect__New_2(NULL, position, size);

        this_->Density(density);
        this_->Frame(frame);
    }

    void Display::SetFramesPerSecond(Display::UnoDisplay this_, unsigned fps)
    {

    }

    void Display::EnableTickNotifications(Display::UnoDisplay this_)
    {
        //AApplication::_rootDisplay = this_; DEPRECATED USE ONLY HERE IF SOMETHING FUCKS UP
        AApplication::_emitTicks = true;
    }

    void Display::DisableTickNotifications(Display::UnoDisplay this_)
    {
        AApplication::_emitTicks = false;
    }
}


//
// Uno.Platform2.View
//

namespace uPlatform2
{
    View::UnoView View::GetViewFromHandle(jobject view)
    {
        jclass shim = JniHelper::GetShim();
        WITH_STATIC_JAVA_METHOD(getUnoViewPtr, shim, "GetUnoViewPtr", "(Ljava/lang/Object;)J");
        jlong jptr = __jni->CallStaticLongMethod(shim, getUnoViewPtr, view);
        return (View::UnoView)jptr;
    }

    jobject View::AttachHandle(View::UnoView this_, jobject view)
    {
        // TODO: Map native view to Uno for the benefit of FromNative

        JniHelper jni;
        return JniHelper::EnsureGlobalRef(view);
    }

    void View::DetachHandle(View::UnoView this_, jobject view)
    {
        JniHelper jni;
        jni->DeleteGlobalRef(view);
    }

    bool View::IsSameView(jobject handle1, jobject handle2)
    {
        JniHelper jni;
        return jni->IsSameObject(handle1, handle2);
    }

    void View::SetIsVisible(View::UnoView this_, bool visible)
    {
        jobject view = this_->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(setVisibility, shim, "SetVisibility", "(Ljava/lang/Object;Z)V");
        __jni->CallStaticVoidMethod(shim, setVisibility, view, visible);
    }

    void View::SetIsEnabled(View::UnoView this_, bool enabled)
    {
        jobject view = this_->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(setEnabled, shim, "SetEnabled", "(Ljava/lang/Object;Z)V");
        __jni->CallStaticVoidMethod(shim, setEnabled, view, enabled);
    }

    void View::SetIsFocusable(View::UnoView unoView, bool focusable)
    {
        jobject view = unoView->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(setIsFocusable, shim, "SetIsFocusable", "(Ljava/lang/Object;Z)V");
        __jni->CallStaticVoidMethod(shim, setIsFocusable, view, focusable);
    }

    void View::SetFrame(View::UnoView this_, ::app::Uno::Rect frame)
    {
        jobject view = this_->Handle();
        jclass shim = JniHelper::GetShim();

        int x = (int)frame.Left;
        int y = (int)frame.Top;
        int width = (int)(frame.Right - frame.Left);
        int height = (int)(frame.Bottom - frame.Top);

        WITH_STATIC_JAVA_METHOD(setFrame, shim, "SetFrame", "(Ljava/lang/Object;IIII)V");
        __jni->CallStaticVoidMethod(shim, setFrame, view, x, y, width, height);
    }

    ::app::Uno::Float2 View::GetContentSize(View::UnoView unoView, ::app::Uno::Float2 fillSize,  int flags)
    {
        jobject view = unoView->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(measure, shim, "Measure", "(Ljava/lang/Object;III)I");
        int packed = (int)__jni->CallStaticIntMethod(shim, measure, view, (int)fillSize.X, (int)fillSize.Y, flags);

        short w = (short)(packed>>16);
        short h = (short)(packed & 0xffff);
        return ::app::Uno::Float2__New_2(NULL, (float)w, (float)h);
    }

    ViewNativeHandle View::GetParent(View::UnoView this_)
    {
        jobject view = this_->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(getParent, shim, "GetParent", "(Ljava/lang/Object;)Ljava/lang/Object");
        //{TODO} globalref here? depends on use
        return (ViewNativeHandle)__jni->CallStaticObjectMethod(shim, getParent, view);
    }

    void View::SetParent(UnoView this_, ViewNativeHandle parent)
    {
        jobject view = this_->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(setParent, shim, "SetParent", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        __jni->CallStaticVoidMethod(shim, setParent, view, parent);
    }
}

//
// Uno.Platform2.GraphicsView
//

namespace uPlatform2
{
    void GraphicsView::Initialize(GraphicsView::UnoGraphicsView unoGraphicsView)
    {
        _eglSurface = EGL_NO_SURFACE;
        _surface = 0;

        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(newUSurfaceView, shim, "NewUSurfaceView", "(J)V");
        __jni->CallStaticVoidMethod(shim, newUSurfaceView, (jlong)unoGraphicsView);
    }

    void GraphicsView::Destroy(GraphicsView::UnoGraphicsView unoGraphicsView)
    {
        if (_surface == 0)
            return;

        eglDestroySurface(GLHelper::_eglDisplay, _eglSurface);
        ANativeWindow_release(_nativeWindow);

        JniHelper jni;
        jni->DeleteGlobalRef(_surface);

        _surface = 0;
    }

    void GraphicsView::FrameDidChange(GraphicsView::UnoGraphicsView unoGraphicsView)
    {
        // {TODO} maybe this for set graphics view frame
    }

    void GraphicsView::SurfaceCreated(UnoGraphicsView unoGraphicsView, jobject surface)
    {
        JniHelper jni;

        _surface = jni->NewGlobalRef(surface);
        _nativeWindow = ANativeWindow_fromSurface(jni.GetEnv(), _surface);

        // GLHelper handles creation for it's own book-keeping reasons
        _eglSurface = GLHelper::CreateNewSurfaceAndMakeCurrent(_nativeWindow);

        unoGraphicsView->OnWillResumeRendering();
    }

    void GraphicsView::SurfaceDestroyed(UnoGraphicsView unoGraphicsView)
    {
        unoGraphicsView->IsRendering(false);
        Destroy(unoGraphicsView);
    }

    void GraphicsView::AboutToDrawFrame(GraphicsView::UnoGraphicsView unoGraphicsView)
    {
        GLHelper::MakeCurrent(_eglSurface);
    }

    void GraphicsView::DidDrawFrame(GraphicsView::UnoGraphicsView unoGraphicsView)
    {
        eglSwapBuffers(GLHelper::_eglDisplay, _eglSurface);
    }

    void GraphicsView::SetIsRendering(GraphicsView::UnoGraphicsView unoGraphicsView, bool rendering)
    {
        if (_surface == 0)
            return;

        unoGraphicsView->OnWillResumeRendering();
    }
}

//
// Uno.Platform2.TextInputView
//

namespace uPlatform2
{
    void TextInputView::Initialize(TextInputView::UnoTextInputView unoTextInputView)
    {
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(newUEditText, shim, "NewUEditText", "(J)V");
        __jni->CallStaticVoidMethod(shim, newUEditText, (jlong)unoTextInputView);
    }

    void TextInputView::Destroy(TextInputView::UnoTextInputView unoTextInputView)
    {
    }

    void TextInputView::SetIsMultiline(UnoTextInputView unoTextInputView, bool multiline)
    {
        jobject view = unoTextInputView->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(setIsMultiline, shim, "SetIsMultiline", "(Ljava/lang/Object;Z)V");
        __jni->CallStaticVoidMethod(shim, setIsMultiline, view, multiline);
    }

    void TextInputView::SetIsPassword(UnoTextInputView unoTextInputView, bool password)
    {
        jobject view = unoTextInputView->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(setIsPassword, shim, "SetIsPassword", "(Ljava/lang/Object;Z)V");
        __jni->CallStaticVoidMethod(shim, setIsPassword, view, password);
    }

    void TextInputView::SetInputHint(UnoTextInputView unoTextInputView, int inputHint)
    {
        jobject view = unoTextInputView->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(setInputHint, shim, "SetInputHint", "(Ljava/lang/Object;I)V");
        __jni->CallStaticVoidMethod(shim, setInputHint, view, (int)inputHint);
    }

    void TextInputView::SetPlaceholder(TextInputView::UnoTextInputView unoTextInputView, ::uString* placeholder)
    {
        jobject view = unoTextInputView->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(setPlaceholder, shim, "SetPlaceholder", "(Ljava/lang/Object;Ljava/lang/String;)V");
        __jni->CallStaticVoidMethod(shim, setPlaceholder, view, JniHelper::UnoToJavaString(placeholder));
    }

    void TextInputView::SetText(TextInputView::UnoTextInputView unoTextInputView, ::uString* text)
    {
        jobject view = unoTextInputView->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(setText, shim, "SetText", "(Ljava/lang/Object;Ljava/lang/String;)V");
        __jni->CallStaticVoidMethod(shim, setText, view, JniHelper::UnoToJavaString(text));
    }

    void TextInputView::SetIsEditing(UnoTextInputView unoTextInputView, bool editing)
    {
        jobject view = unoTextInputView->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(setIsEditing, shim, "SetIsEditing", "(Ljava/lang/Object;Z)V");
        __jni->CallStaticVoidMethod(shim, setIsEditing, view, editing);
    }

    void TextInputView::SetFontName(UnoTextInputView unoTextInputView, ::uString* fontName)
    {
        jobject view = unoTextInputView->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(setFont, shim, "SetFont", "(Ljava/lang/Object;Ljava/lang/String;I)V");
        __jni->CallStaticVoidMethod(shim, setFont, view, JniHelper::UnoToJavaString(fontName), 0);
    }

    void TextInputView::SetFontFile(UnoTextInputView unoTextInputView, ::app::Uno::BundleFile* fontFile)
    {
        jobject view = unoTextInputView->Handle();
        jclass shim = JniHelper::GetShim();

        ::uString* path = fontFile->Name();

        WITH_STATIC_JAVA_METHOD(setFontFromFile, shim, "SetFontFromFile", "(Ljava/lang/Object;Ljava/lang/String;I)V");
        __jni->CallStaticVoidMethod(shim, setFontFromFile, view, JniHelper::UnoToJavaString(path), 0);
    }

    void TextInputView::SetFontSize(UnoTextInputView unoTextInputView, float fontSize)
    {
        jobject view = unoTextInputView->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(setFontSize, shim, "SetFontSize", "(Ljava/lang/Object;F)V");
        __jni->CallStaticVoidMethod(shim, setFontSize, view, fontSize);
    }

    void TextInputView::SetTextAlignment(UnoTextInputView unoTextInputView, int alignment)
    {
        int _alignment = 0;
        switch (alignment)
        {
        case 0:
        _alignment = 0;
        break;
        case 1:
        _alignment = 1;
        break;
        case 2:
        _alignment = 2;
        break;
        }
        jobject view = unoTextInputView->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(setTextAlignment, shim, "SetTextAlignment", "(Ljava/lang/Object;I)V");
        __jni->CallStaticVoidMethod(shim, setTextAlignment, view, _alignment);
    }

    void TextInputView::SetTextWrapping(UnoTextInputView unoTextInputView, int wrapping)
    {
        bool _wrapping = (wrapping == 1);
        jobject view = unoTextInputView->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(setTextWrapping, shim, "SetTextWrapping", "(Ljava/lang/Object;Z)V");
        __jni->CallStaticVoidMethod(shim, setTextWrapping, view, _wrapping);
    }

    void TextInputView::SetCaretColor(TextInputView::UnoTextInputView unoTextInputView, ::app::Uno::Float3 color)
    {
        // Cant be done for android
    }

    // SetTextColorRGB
    void TextInputView::SetTextColor(TextInputView::UnoTextInputView unoTextInputView, ::app::Uno::Float4 color)
    {
        jobject view = unoTextInputView->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(setTextColorRGB, shim, "SetTextColorRGB", "(Ljava/lang/Object;III)V");
        __jni->CallStaticVoidMethod(shim, setTextColorRGB, view, ((int)(255*color.X)), ((int)(255*color.Y)), ((int)(255*color.Z)));
    }

    void TextInputView::SetSelectionColor(TextInputView::UnoTextInputView unoTextInputView, ::app::Uno::Float4 color)
    {
        jobject view = unoTextInputView->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(setSelectionColor, shim, "SetSelectionColor", "(Ljava/lang/Object;III)V");
        __jni->CallStaticVoidMethod(shim, setSelectionColor, view, ((int)(255*color.X)), ((int)(255*color.Y)), ((int)(255*color.Z)));
    }

    ::uString* TextInputView::GetSelectedText(
        TextInputView::UnoTextInputView unoTextInputView)
    {
        jobject view = unoTextInputView->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(getSelectedText, shim, "GetSelectedText", "(Ljava/lang/Object;)Ljava/lang/String;");

        return JniHelper::JavaToUnoString(
            (jstring) __jni->CallStaticObjectMethod(
                shim, getSelectedText, view));
    }

    void TextInputView::SelectAll(TextInputView::UnoTextInputView unoTextInputView)
    {
        jobject view = unoTextInputView->Handle();
        jclass shim = JniHelper::GetShim();

        WITH_STATIC_JAVA_METHOD(selectAll, shim, "SelectAll", "(Ljava/lang/Object;)V");
        __jni->CallStaticObjectMethod(shim, selectAll, view);

    }
}
