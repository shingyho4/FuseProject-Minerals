// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventHandler__Uno_Platform2_SystemUIWillResizeEventArgs.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform2.SystemUI.h>
#include <app/Uno.Platform2.SystemUIWillResizeEventArgs.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Uno {
namespace Platform2 {

::app::Uno::Rect SystemUI___cachedBottomFrame;
::uStaticStrong< ::uDelegate*> SystemUI__TopFrameWillResize;
::uStaticStrong< ::uDelegate*> SystemUI__BottomFrameWillResize;

SystemUI__uType* SystemUI__typeof()
{
    static SystemUI__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SystemUI__uType*)::uAllocClassType(sizeof(SystemUI__uType), "Uno.Platform2.SystemUI");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Rect SystemUI__get_TopFrame(::uStatic* __this)
{
    return SystemUI__GetStatusBarFrame(NULL);
}

::app::Uno::Rect SystemUI__GetStatusBarFrame(::uStatic* __this)
{
    return uPlatform2::Application::GetStatusBarFrame();
}

void SystemUI__OnWillResize(::uStatic* __this, ::app::Uno::Platform2::SystemUIWillResizeEventArgs* args)
{
    if (::uPtr< ::app::Uno::Platform2::SystemUIWillResizeEventArgs*>(args)->ID() == 0)
    {
        ::uDelegate* handler = SystemUI__TopFrameWillResize;

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
        {
            ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::Platform2::SystemUIWillResizeEventArgs*>(NULL, args);
        }
    }
    else
    {
        SystemUI___cachedBottomFrame = ::uPtr< ::app::Uno::Platform2::SystemUIWillResizeEventArgs*>(args)->EndFrame();
        ::uDelegate* handler = SystemUI__BottomFrameWillResize;

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
        {
            ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::Platform2::SystemUIWillResizeEventArgs*>(NULL, args);
        }
    }
}

void SystemUI__add_TopFrameWillResize(::uStatic* __this, ::uDelegate* value)
{
    SystemUI__TopFrameWillResize = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)SystemUI__TopFrameWillResize, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform2_SystemUIWillResizeEventArgs__typeof());
}

void SystemUI__remove_TopFrameWillResize(::uStatic* __this, ::uDelegate* value)
{
    SystemUI__TopFrameWillResize = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)SystemUI__TopFrameWillResize, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform2_SystemUIWillResizeEventArgs__typeof());
}

void SystemUI__add_BottomFrameWillResize(::uStatic* __this, ::uDelegate* value)
{
    SystemUI__BottomFrameWillResize = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)SystemUI__BottomFrameWillResize, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform2_SystemUIWillResizeEventArgs__typeof());
}

}}}
