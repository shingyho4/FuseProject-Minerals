// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Uno_Platform_KeyEventArgs.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.KeyEventArgs.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <app/Uno.Platform2.ViewNativeHandle.h>
#include <app/Uno.String.h>
void uStartApp();

namespace app {
namespace Uno {
namespace Platform2 {

::uStaticStrong< ::uDelegate*> Application__Started;
::uStaticStrong< ::uDelegate*> Application__EnteringForeground;
::uStaticStrong< ::uDelegate*> Application__EnteringInteractive;
::uStaticStrong< ::uDelegate*> Application__ExitedInteractive;
::uStaticStrong< ::uDelegate*> Application__EnteringBackground;
::uStaticStrong< ::uDelegate*> Application__Terminating;
::uStaticStrong< ::uDelegate*> Application__ReceivedLowMemoryWarning;
::uStaticStrong< ::uDelegate*> Application__KeyDown;
::uStaticStrong< ::uDelegate*> Application__KeyUp;
int Application___State;

Application__uType* Application__typeof()
{
    static Application__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Application__uType*)::uAllocClassType(sizeof(Application__uType), "Uno.Platform2.Application");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int Application__get_State(::uStatic* __this)
{
    return Application___State;
}

void Application__set_State(::uStatic* __this, int value)
{
    Application___State = value;
}

uPlatform2::ViewNativeHandle Application__get_RootView(::uStatic* __this)
{
    return Application__GetRootView(NULL);
}

void Application__set_RootView(::uStatic* __this, uPlatform2::ViewNativeHandle value)
{
    Application__SetRootView(NULL, value);
}

void Application__DidStart(::uStatic* __this)
{
}

void Application__DidEnterForeground(::uStatic* __this)
{
}

void Application__DidEnterInteractive(::uStatic* __this)
{
}

void Application__DidExitInteractive(::uStatic* __this)
{
}

void Application__DidEnterBackground(::uStatic* __this)
{
}

void Application__WillTerminate(::uStatic* __this)
{
}

void Application__Start(::uStatic* __this)
{
    ::uArray* array_135;
    ::uArray* array_136;
    int assert_123;
    int assert_124;
    assert_123 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_123 == 0, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Uninitialized"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 45, (array_135 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), assert_123), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Int__typeof(), 0), array_135));
    Application___Start(NULL);
    Application__set_State(NULL, 1);
    Application__DidStart(NULL);
    ::uDelegate* handler = Application__Started;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< int>(Application__get_State(NULL));
    }

    assert_124 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_124 == 1, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Background"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 57, (array_136 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), assert_124), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Int__typeof(), 1), array_136));
}

void Application___Start(::uStatic* __this)
{
    ::uStartApp();
}

void Application__EnterForeground(::uStatic* __this)
{
    ::uArray* array_137;
    ::uArray* array_138;
    int assert_125;
    int assert_126;

    switch (Application__get_State(NULL))
    {
        case -1:
        {
            ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("EnterForeground() called on terminating application"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 69);
            return;
        }
        case 0:
        {
            ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("EnterForeground() called on uninitialized application"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 73);
            return;
        }
        case 1:
        {
            break;
        }
        case 2:
        case 3:
        {
            return;
        }
    }

    assert_125 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_125 == 1, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Background"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 85, (array_137 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), assert_125), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Int__typeof(), 1), array_137));
    Application__set_State(NULL, 2);
    Application__DidEnterForeground(NULL);
    ::uDelegate* handler = Application__EnteringForeground;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< int>(Application__get_State(NULL));
    }

    assert_126 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_126 == 2, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Foreground"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 94, (array_138 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), assert_126), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Int__typeof(), 2), array_138));
}

void Application__EnterInteractive(::uStatic* __this)
{
    ::uArray* array_139;
    ::uArray* array_140;
    int assert_127;
    int assert_128;

    switch (Application__get_State(NULL))
    {
        case -1:
        {
            ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("EnterInteractive() called on terminating application"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 103);
            return;
        }
        case 0:
        {
            ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("EnterInteractive() called on uninitialized application"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 107);
            return;
        }
        case 1:
        {
            Application__EnterForeground(NULL);
            break;
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            return;
        }
    }

    assert_127 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_127 == 2, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Foreground"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 121, (array_139 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), assert_127), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Int__typeof(), 2), array_139));
    Application__set_State(NULL, 3);
    Application__DidEnterInteractive(NULL);
    ::uDelegate* handler = Application__EnteringInteractive;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< int>(Application__get_State(NULL));
    }

    assert_128 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_128 == 3, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Interactive"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 130, (array_140 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), assert_128), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Int__typeof(), 3), array_140));
}

void Application__ExitInteractive(::uStatic* __this)
{
    ::uArray* array_141;
    ::uArray* array_142;
    int assert_129;
    int assert_130;

    switch (Application__get_State(NULL))
    {
        case -1:
        {
            ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("ExitInteractive() called on terminating application"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 139);
            return;
        }
        case 0:
        {
            ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("ExitInteractive() called on uninitialized application"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 143);
            return;
        }
        case 1:
        case 2:
        {
            return;
        }
        case 3:
        {
            break;
        }
    }

    assert_129 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_129 == 3, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Interactive"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 154, (array_141 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), assert_129), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Int__typeof(), 3), array_141));
    Application__set_State(NULL, 2);
    Application__DidExitInteractive(NULL);
    ::uDelegate* handler = Application__ExitedInteractive;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< int>(Application__get_State(NULL));
    }

    assert_130 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_130 == 2, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Foreground"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 163, (array_142 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), assert_130), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Int__typeof(), 2), array_142));
}

void Application__EnterBackground(::uStatic* __this)
{
    ::uArray* array_143;
    ::uArray* array_144;
    int assert_131;
    int assert_132;

    switch (Application__get_State(NULL))
    {
        case -1:
        {
            ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("EnterBackground() called on terminating application"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 172);
            return;
        }
        case 0:
        {
            ::app::Uno::Diagnostics::Debug__Log(NULL, ::uGetConstString("EnterBackground() called on uninitialized application"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 176);
            return;
        }
        case 1:
        {
            return;
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            Application__ExitInteractive(NULL);
            break;
        }
    }

    assert_131 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_131 == 2, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Foreground"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 190, (array_143 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), assert_131), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Int__typeof(), 2), array_143));
    Application__set_State(NULL, 1);
    Application__DidEnterBackground(NULL);
    ::uDelegate* handler = Application__EnteringBackground;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< int>(Application__get_State(NULL));
    }

    assert_132 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_132 == 1, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Background"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 199, (array_144 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), assert_132), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Int__typeof(), 1), array_144));
}

void Application__Terminate(::uStatic* __this)
{
    ::uArray* array_145;
    ::uArray* array_146;
    int assert_133;
    int assert_134;

    switch (Application__get_State(NULL))
    {
        case -1:
        case 0:
        {
            return;
        }
        case 1:
        {
            break;
        }
        case 2:
        case 3:
        {
            Application__EnterBackground(NULL);
            break;
        }
    }

    assert_133 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_133 == 1, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Background"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 220, (array_145 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), assert_133), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Int__typeof(), 1), array_145));
    Application__set_State(NULL, -1);
    Application__WillTerminate(NULL);
    ::uDelegate* handler = Application__Terminating;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< int>(Application__get_State(NULL));
    }

    assert_134 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_134 == -1, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Terminating"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.1.0\\Source\\Uno\\Platform2\\$.uno"), 229, (array_146 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), assert_134), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Int__typeof(), -1), array_146));
    Application__set_State(NULL, 0);
}

void Application__OnReceivedLowMemoryWarning(::uStatic* __this)
{
    ::uDelegate* handler = Application__ReceivedLowMemoryWarning;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>(NULL, ::app::Uno::EventArgs__Empty);
    }
}

uPlatform2::ViewNativeHandle Application__GetRootView(::uStatic* __this)
{
    return uPlatform2::Application::GetRootView();
}

void Application__SetRootView(::uStatic* __this, uPlatform2::ViewNativeHandle __viewHandle)
{
    uPlatform2::Application::SetRootView(__viewHandle);
}

bool Application__OnKeyDown(::uStatic* __this, int key, int modifiers)
{
    ::app::Uno::Platform::KeyEventArgs* args = ::app::Uno::Platform::KeyEventArgs__New_2(NULL, key, modifiers);
    ::uDelegate* handler = Application__KeyDown;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::Platform::KeyEventArgs*>(NULL, args);
    }

    return ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->Handled();
}

bool Application__OnKeyUp(::uStatic* __this, int key, int modifiers)
{
    ::app::Uno::Platform::KeyEventArgs* args = ::app::Uno::Platform::KeyEventArgs__New_2(NULL, key, modifiers);
    ::uDelegate* handler = Application__KeyUp;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::Platform::KeyEventArgs*>(NULL, args);
    }

    return ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->Handled();
}

void Application__add_Started(::uStatic* __this, ::uDelegate* value)
{
    Application__Started = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)Application__Started, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__remove_Started(::uStatic* __this, ::uDelegate* value)
{
    Application__Started = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)Application__Started, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__add_EnteringForeground(::uStatic* __this, ::uDelegate* value)
{
    Application__EnteringForeground = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)Application__EnteringForeground, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__remove_EnteringForeground(::uStatic* __this, ::uDelegate* value)
{
    Application__EnteringForeground = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)Application__EnteringForeground, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__add_EnteringInteractive(::uStatic* __this, ::uDelegate* value)
{
    Application__EnteringInteractive = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)Application__EnteringInteractive, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__remove_EnteringInteractive(::uStatic* __this, ::uDelegate* value)
{
    Application__EnteringInteractive = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)Application__EnteringInteractive, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__add_ExitedInteractive(::uStatic* __this, ::uDelegate* value)
{
    Application__ExitedInteractive = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)Application__ExitedInteractive, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__remove_ExitedInteractive(::uStatic* __this, ::uDelegate* value)
{
    Application__ExitedInteractive = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)Application__ExitedInteractive, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__add_EnteringBackground(::uStatic* __this, ::uDelegate* value)
{
    Application__EnteringBackground = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)Application__EnteringBackground, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__remove_EnteringBackground(::uStatic* __this, ::uDelegate* value)
{
    Application__EnteringBackground = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)Application__EnteringBackground, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__add_Terminating(::uStatic* __this, ::uDelegate* value)
{
    Application__Terminating = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)Application__Terminating, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__remove_Terminating(::uStatic* __this, ::uDelegate* value)
{
    Application__Terminating = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)Application__Terminating, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__add_KeyDown(::uStatic* __this, ::uDelegate* value)
{
    Application__KeyDown = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)Application__KeyDown, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof());
}

void Application__remove_KeyDown(::uStatic* __this, ::uDelegate* value)
{
    Application__KeyDown = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)Application__KeyDown, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof());
}

void Application__add_KeyUp(::uStatic* __this, ::uDelegate* value)
{
    Application__KeyUp = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)Application__KeyUp, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof());
}

void Application__remove_KeyUp(::uStatic* __this, ::uDelegate* value)
{
    Application__KeyUp = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)Application__KeyUp, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof());
}

}}}
