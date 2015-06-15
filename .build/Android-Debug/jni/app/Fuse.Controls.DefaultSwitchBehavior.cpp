// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.DefaultSwitchBehavior.h>
#include <app/Fuse.Controls.Switch.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Gestures.Clicker.h>
#include <app/Fuse.Gestures.ClickerEventHandler.h>
#include <app/Fuse.Input.Event__Fuse_Input_PointerMovedHandler__Fuse_Input_Po-5d8e7dec.h>
#include <app/Fuse.Input.Event__Fuse_Input_PointerPressedHandler__Fuse_Input_-d47a11ac.h>
#include <app/Fuse.Input.Event__Fuse_Input_PointerReleasedHandler__Fuse_Input-199508da.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Input.PointerMovedHandler.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Input.PointerReleasedHandler.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.ResizedArgs.h>
#include <app/Fuse.ResizedHandler.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Action.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Float.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Controls {

DefaultSwitchBehavior__uType* DefaultSwitchBehavior__typeof()
{
    static DefaultSwitchBehavior__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DefaultSwitchBehavior__uType*)::uAllocClassType(sizeof(DefaultSwitchBehavior__uType), "Fuse.Controls.DefaultSwitchBehavior", ::app::Fuse::Triggers::ElementTrigger__typeof(), 0, 3);
        type->__fp_OnRooted_1 = (void(*)(::app::Fuse::Triggers::ElementTrigger*, ::app::Fuse::Elements::Element*))DefaultSwitchBehavior__OnRooted_1;
        type->__fp_OnUnrooted_1 = (void(*)(::app::Fuse::Triggers::ElementTrigger*, ::app::Fuse::Elements::Element*))DefaultSwitchBehavior__OnUnrooted_1;

        type->StrongRefOffsets[0] = offsetof(DefaultSwitchBehavior, _switch);
        type->StrongRefOffsets[1] = offsetof(DefaultSwitchBehavior, _bounds);
        type->StrongRefOffsets[2] = offsetof(DefaultSwitchBehavior, _clicker);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_switch";
        type->StrongRefNames[1] = "_bounds";
        type->StrongRefNames[2] = "_clicker";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Elements::Element* DefaultSwitchBehavior__get_Bounds(DefaultSwitchBehavior* __this)
{
    return __this->_bounds;
}

void DefaultSwitchBehavior__set_Bounds(DefaultSwitchBehavior* __this, ::app::Fuse::Elements::Element* value)
{
    if (__this->_bounds != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_bounds)->remove_Resized(::uNewDelegateNonVirt(::app::Fuse::ResizedHandler__typeof(), (const void*)::app::Fuse::Controls::DefaultSwitchBehavior__OnResized, __this));
    }

    __this->_bounds = value;

    if (__this->_bounds != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_bounds)->add_Resized(::uNewDelegateNonVirt(::app::Fuse::ResizedHandler__typeof(), (const void*)::app::Fuse::Controls::DefaultSwitchBehavior__OnResized, __this));
    }
}

::app::Uno::Float2 DefaultSwitchBehavior__get_Size(DefaultSwitchBehavior* __this)
{
    return ::uPtr< ::app::Fuse::Elements::Element*>(__this->_bounds)->ActualSize();
}

void DefaultSwitchBehavior__OnRooted_1(DefaultSwitchBehavior* __this, ::app::Fuse::Elements::Element* elm)
{
    __this->_switch = ::uAs< ::app::Fuse::Controls::Switch*>(elm, ::app::Fuse::Controls::Switch__typeof());

    if (__this->_switch != NULL)
    {
        ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->add_ToggledChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Controls::DefaultSwitchBehavior__OnToggledChanged, __this));
        ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->AddHandler((::app::Fuse::Node*)elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)::app::Fuse::Controls::DefaultSwitchBehavior__OnPointerPressed, __this));
        ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler((::app::Fuse::Node*)elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)::app::Fuse::Controls::DefaultSwitchBehavior__OnPointerMoved, __this));
        ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->AddHandler((::app::Fuse::Node*)elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)::app::Fuse::Controls::DefaultSwitchBehavior__OnPointerReleased, __this));
        __this->_clicker = ::app::Fuse::Gestures::Clicker__AttachClicker(NULL, (::app::Fuse::Node*)elm);
        ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->_clicker)->add_TappedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)::app::Fuse::Controls::DefaultSwitchBehavior__OnPointerTapped, __this));

        if (__this->Bounds() == NULL)
        {
            __this->Bounds((::app::Fuse::Elements::Element*)__this->_switch);
        }

        if (::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Toggled())
        {
            __this->BypassActivate();
        }
    }
}

void DefaultSwitchBehavior__OnUnrooted_1(DefaultSwitchBehavior* __this, ::app::Fuse::Elements::Element* elm)
{
    if (__this->_switch == NULL)
    {
        return;
    }

    ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->remove_ToggledChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Controls::DefaultSwitchBehavior__OnToggledChanged, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_switch, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)::app::Fuse::Controls::DefaultSwitchBehavior__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_switch, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)::app::Fuse::Controls::DefaultSwitchBehavior__OnPointerMoved, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_switch, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)::app::Fuse::Controls::DefaultSwitchBehavior__OnPointerReleased, __this));
    ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->remove_Resized(::uNewDelegateNonVirt(::app::Fuse::ResizedHandler__typeof(), (const void*)::app::Fuse::Controls::DefaultSwitchBehavior__OnResized, __this));
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->_clicker)->remove_TappedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)::app::Fuse::Controls::DefaultSwitchBehavior__OnPointerTapped, __this));
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->_clicker)->Detach();
    __this->_clicker = NULL;
    __this->_switch = NULL;
    __this->Bounds(NULL);
    ::app::Fuse::Input::Pointer__ReleaseAllCaptures(NULL, (::uObject*)__this);
}

void DefaultSwitchBehavior__OnResized(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::ResizedArgs* args)
{
    __this->PlayEnd(::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Toggled(), NULL);
}

void DefaultSwitchBehavior__OnPointerPressed(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args)
{
    if (__this->_captured)
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->TrySoftCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Controls::DefaultSwitchBehavior__OnCaptureLost, __this), NULL))
    {
        __this->_captured = true;
        __this->_capturedIndex = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->PointIndex();
        __this->_originalP = __this->_prevCoord = __this->_currentCoord = ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->WindowToLocal(args->WindowPoint());
    }
}

void DefaultSwitchBehavior__OnCaptureLost(DefaultSwitchBehavior* __this)
{
    __this->_captured = false;
    __this->PlayEnd(::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Toggled(), NULL);
}

void DefaultSwitchBehavior__OnPointerMoved(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (__this->_captured)
    {
        if (!::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->IsHardCapturedTo((::uObject*)__this))
        {
            if (::app::Uno::Math__Abs_1(NULL, __this->_originalP.X - ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->WindowToLocal(::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint()).X) > 10.0f)
            {
                ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->TryHardCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Controls::DefaultSwitchBehavior__OnCaptureLost, __this), NULL);
            }
        }

        __this->_prevCoord = __this->_currentCoord;
        __this->_currentCoord = ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->WindowToLocal(::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint());
        ::app::Uno::Float2 delta = ::app::Uno::Float2__op_Subtraction(NULL, __this->_currentCoord, __this->_prevCoord);
        float p = delta.X / __this->Size().X;
        __this->Seek_1(__this->Progress() + (double)p, ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Toggled() ? 1 : 0);
    }
}

bool DefaultSwitchBehavior__ReleaseCapture(DefaultSwitchBehavior* __this)
{
    if (!__this->_captured)
    {
        return false;
    }

    ::app::Fuse::Input::Pointer__ReleaseAllCaptures(NULL, (::uObject*)__this);
    __this->_captured = false;
    return true;
}

void DefaultSwitchBehavior__OnPointerReleased(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    if (__this->ReleaseCapture())
    {
        ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Toggled(__this->Progress() >= 0.5);
        __this->PlayEnd(::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Toggled(), NULL);
    }
}

void DefaultSwitchBehavior__OnPointerTapped(DefaultSwitchBehavior* __this, ::uObject* a, int tapCount)
{
    __this->ReleaseCapture();
    ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Toggled(!::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Toggled());
    __this->PlayEnd(::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Toggled(), NULL);
}

void DefaultSwitchBehavior__OnToggledChanged(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->PlayEnd(::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Toggled(), NULL);
}

void DefaultSwitchBehavior___ObjInit_3(DefaultSwitchBehavior* __this)
{
    ::app::Fuse::Triggers::ElementTrigger___ObjInit_2(__this);
}

DefaultSwitchBehavior* DefaultSwitchBehavior__New_1(::uStatic* __this)
{
    DefaultSwitchBehavior* inst = (::app::Fuse::Controls::DefaultSwitchBehavior*)::uAllocObject(sizeof(::app::Fuse::Controls::DefaultSwitchBehavior), ::app::Fuse::Controls::DefaultSwitchBehavior__typeof());
    inst->_ObjInit_3();
    return inst;
}

}}}
