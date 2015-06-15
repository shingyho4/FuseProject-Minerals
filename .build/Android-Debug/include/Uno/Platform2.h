#pragma once

#include <Xli/Config.h>


#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.BundleFile.h>


#include <app/Uno.Rect.h>

#if XLI_PLATFORM_ANDROID
#include "AndroidCommon.h"
#include "GLHelper.h"
#include "JNIHelper.h"
#endif

#if XLI_PLATFORM_IOS
#if __OBJC__
#define uOBJC_CLASS @class
#else
#define uOBJC_CLASS struct
#endif

uOBJC_CLASS CADisplayLink;
uOBJC_CLASS UIScreen;
uOBJC_CLASS UIView;

#endif

namespace app { namespace Uno { namespace Platform2 { struct Display; } } }
namespace app { namespace Uno { namespace Platform2 { struct GraphicsView; } } }
namespace app { namespace Uno { namespace Platform2 { struct View; } } }
namespace app { namespace Uno { namespace Platform2 { struct TextInputView; } } }

namespace uPlatform2
{
#if XLI_PLATFORM_ANDROID
    typedef ::jobject ViewNativeHandle;
#elif XLI_PLATFORM_IOS
    typedef ::UIView* ViewNativeHandle;
#endif


    //
    // Uno.Platform2.Application
    //
    struct Application
    {
        static ViewNativeHandle GetRootView();
        static void SetRootView(ViewNativeHandle viewHandle);

        static bool GetIsStatusBarVisible();
        static void SetStatusBarVisible(bool visible);

        static ::app::Uno::Rect GetStatusBarFrame();
    };



    //
    // Uno.Platform2.Display
    //
    struct Display
    {
        typedef ::app::Uno::Platform2::Display* UnoDisplay;

        Display()
        {
            // Platform-specific initialization in Initialize()!
        }

    private:
        // Non-copyable
        Display(Display const &);
        void operator=(Display);

    public:
        void Destroy(UnoDisplay unoDisplay);
        void Initialize(UnoDisplay unoDisplay);

        void InitializeAsMainDisplay(UnoDisplay unoDisplay);

        void ResetGeometry(UnoDisplay unoDisplay);

        void SetFramesPerSecond(UnoDisplay unoDisplay, unsigned fps);

        void EnableTickNotifications(UnoDisplay unoDisplay);
        void DisableTickNotifications(UnoDisplay unoDisplay);

    private:
#if XLI_PLATFORM_IOS
        UIScreen *screen;
        CADisplayLink *displayLink;
#endif
    };



    //
    // Uno.Platform2.View
    //
    struct View
    {
        typedef ::app::Uno::Platform2::View* UnoView;
        typedef ViewNativeHandle NativeHandle;

        View()
        {
            // Platform-specific initialization in Initialize()!
        }

    private:
        // Non-copyable
        View(View const &);
        void operator=(View);

    public:
        static UnoView GetViewFromHandle(NativeHandle handle);
        NativeHandle AttachHandle(UnoView unoView, NativeHandle handle);
        void DetachHandle(UnoView unoView, NativeHandle handle);

#if XLI_PLATFORM_ANDROID
        static bool IsSameView(NativeHandle handle1, NativeHandle handle2);
#endif

        void SetFrame(UnoView unoView, ::app::Uno::Rect frame);
        void SetIsEnabled(UnoView unoView, bool enabled);
        void SetIsFocusable(UnoView unoView, bool focusable);
        void SetIsVisible(UnoView unoView, bool visible);

        ::app::Uno::Float2 GetContentSize(UnoView unoView, ::app::Uno::Float2 fillSize, int flags);

        NativeHandle GetParent(UnoView unoView);
        void SetParent(UnoView unoView, NativeHandle parent);
    };



    //
    // Uno.Platform2.GraphicsView
    //
    struct GraphicsView
    {
        typedef ::app::Uno::Platform2::GraphicsView* UnoGraphicsView;

        GraphicsView()
        {
            // Platform-specific initialization in Initialize()!
        }

    private:
        // Non-copyable
        GraphicsView(GraphicsView const &);
        void operator=(GraphicsView);

    public:
        void Initialize(UnoGraphicsView unoGraphicsView);
        void Destroy(UnoGraphicsView unoGraphicsView);

        void SetIsRendering(UnoGraphicsView unoGraphicsView, bool rendering);

        void FrameDidChange(UnoGraphicsView unoGraphicsView);

        void AboutToDrawFrame(UnoGraphicsView unoGraphicsView);
        void DidDrawFrame(UnoGraphicsView unoGraphicsView);

#if XLI_PLATFORM_ANDROID
        void SurfaceCreated(UnoGraphicsView unoGraphicsView, jobject surface);
        void SurfaceDestroyed(UnoGraphicsView unoGraphicsView);

    private:
        jobject _surface;
        ANativeWindow* _nativeWindow;
        EGLSurface _eglSurface;
#endif
    };



    //
    // Uno.Platform2.TextInputView
    //
    struct TextInputView
    {
        typedef ::app::Uno::Platform2::TextInputView* UnoTextInputView;

        TextInputView()
        {
            // Platform-specific initialization in Initialize()!
        }

    private:
        // Non-copyable
        TextInputView(TextInputView const &);
        void operator=(TextInputView);

    public:
        void Initialize(UnoTextInputView unoTextInputView);
        void Destroy(UnoTextInputView unoTextInputView);

        void SetIsMultiline(UnoTextInputView unoTextInputView, bool multiline);
        void SetIsPassword(UnoTextInputView unoTextInputView, bool password);
        void SetInputHint(UnoTextInputView unoTextInputView, int inputHint);

        void SetPlaceholder(UnoTextInputView unoTextInputView, ::uString* placeholder);
        void SetText(UnoTextInputView unoTextInputView, ::uString* text);

        void SetIsEditing(UnoTextInputView unoTextInputView, bool editing);

        void SetFontName(UnoTextInputView unoTextInputView, ::uString* fontName);
        void SetFontFile(UnoTextInputView unoTextInputView, ::app::Uno::BundleFile* fontFile);
        void SetFontSize(UnoTextInputView unoTextInputView, float fontSize);

        void SetTextAlignment(UnoTextInputView unoTextInputView, int alignment);
        void SetTextWrapping(UnoTextInputView unoTextInputView, int wrapping);

        void SetCaretColor(UnoTextInputView unoTextInputView, ::app::Uno::Float3 color);
        void SetSelectionColor(UnoTextInputView unoTextInputView, ::app::Uno::Float4 color);
        void SetTextColor(UnoTextInputView unoTextInputView, ::app::Uno::Float4 color);

        ::uString* GetSelectedText(UnoTextInputView unoTextInputView);
        void SelectAll(UnoTextInputView unoTextInputView);
    };

}
