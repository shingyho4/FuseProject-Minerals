// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Uno_Platform2_TimerEventArgs.h>
#include <app/Uno.Platform2.Display.h>
#include <app/Uno.Platform2.Display_PrivateState.h>
#include <app/Uno.Platform2.TimerEventArgs.h>

namespace app {
namespace Uno {
namespace Platform2 {

Display__uType* Display__typeof()
{
    static Display__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Display__uType*)::uAllocClassType(sizeof(Display__uType), "Uno.Platform2.Display", ::uObject__typeof(), 0, 2);
        type->__fp_Finalize = (void(*)(::uObject*))Display__Finalize;

        type->StrongRefOffsets[0] = offsetof(Display, FrameChanged);
        type->StrongRefOffsets[1] = offsetof(Display, _tick);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "FrameChanged";
        type->StrongRefNames[1] = "_tick";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Display__Finalize(Display* __this)
{
    __this->Destroy();
}

Display* Display__get_MainDisplay(::uStatic* __this)
{
    return Display__GetMainDisplay(NULL);
}

float Display__get_Density(Display* __this)
{
    return __this->_Density;
}

void Display__set_Density(Display* __this, float value)
{
    __this->_Density = value;
}

::app::Uno::Rect Display__get_Frame(Display* __this)
{
    return __this->_frame;
}

void Display__set_Frame(Display* __this, ::app::Uno::Rect value)
{
    if (::app::Uno::Rect__Equals_2(NULL, __this->_frame, value))
    {
        return;
    }

    __this->_frame = value;
    __this->OnFrameChanged();
}

::uUInt Display__get_FramesPerSecond(Display* __this)
{
    return __this->_framesPerSecond;
}

void Display__set_FramesPerSecond(Display* __this, ::uUInt value)
{
    if (__this->_framesPerSecond == value)
    {
        return;
    }

    __this->_framesPerSecond = value;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_tick, NULL))
    {
        __this->SetFramesPerSecond(value);
    }
}

void Display__Initialize(Display* __this)
{
    __this->_private.Initialize(__this);
}

void Display__Destroy(Display* __this)
{
    __this->_private.Destroy(__this);
}

Display* Display__GetMainDisplay(::uStatic* __this)
{
    static ::app::Uno::Platform2::Display* mainDisplay;
    if (uEnterCriticalIfNull(&mainDisplay))
    {
        mainDisplay = ::app::Uno::Platform2::Display__New_1(NULL);
        uRetainObject(mainDisplay);
    
        mainDisplay->_private.InitializeAsMainDisplay(mainDisplay);
    
        uExitCritical();
    }
    
    return mainDisplay;
}

void Display__OnFrameChanged(Display* __this)
{
    ::uDelegate* handler = __this->FrameChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void Display__SetFramesPerSecond(Display* __this, ::uUInt __value)
{
    __this->_private.SetFramesPerSecond(__this, __value);
}

void Display__OnTick(Display* __this, ::app::Uno::Platform2::TimerEventArgs* args)
{
    ::uDelegate* handler = __this->_tick;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::Platform2::TimerEventArgs*>((::uObject*)__this, args);
    }
}

void Display__EnableTickNotifications(Display* __this)
{
    __this->_private.EnableTickNotifications(__this);
}

void Display__DisableTickNotifications(Display* __this)
{
    __this->_private.DisableTickNotifications(__this);
}

void Display___ObjInit(Display* __this)
{
    __this->Density(1.0f);
    __this->Initialize();
}

Display* Display__New_1(::uStatic* __this)
{
    Display* inst = (::app::Uno::Platform2::Display*)::uAllocObject(sizeof(::app::Uno::Platform2::Display), ::app::Uno::Platform2::Display__typeof());
    inst->_ObjInit();
    return inst;
}

void Display__add_FrameChanged(Display* __this, ::uDelegate* value)
{
    __this->FrameChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->FrameChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Display__add__tick(Display* __this, ::uDelegate* value)
{
    __this->_tick = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->_tick, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform2_TimerEventArgs__typeof());
}

void Display__remove__tick(Display* __this, ::uDelegate* value)
{
    __this->_tick = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->_tick, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform2_TimerEventArgs__typeof());
}

void Display__add_Tick(Display* __this, ::uDelegate* value)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_tick, NULL))
    {
        __this->EnableTickNotifications();
    }

    __this->add__tick(value);
}

void Display__remove_Tick(Display* __this, ::uDelegate* value)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_tick, NULL))
    {
        return;
    }

    __this->remove__tick(value);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_tick, NULL))
    {
        __this->DisableTickNotifications();
    }
}

}}}
