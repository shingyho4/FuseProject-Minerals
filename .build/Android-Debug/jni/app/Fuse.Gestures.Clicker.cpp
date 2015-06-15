// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

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
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Uno.Action.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Time.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Gestures {

::uStaticStrong< ::app::Fuse::PropertyHandle*> Clicker___clickerProperty;

Clicker__uType* Clicker__typeof()
{
    static Clicker__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Clicker__uType*)::uAllocClassType(sizeof(Clicker__uType), "Fuse.Gestures.Clicker", ::uObject__typeof(), 0, 5);
        type->StrongRefOffsets[0] = offsetof(Clicker, _node);
        type->StrongRefOffsets[1] = offsetof(Clicker, _lastArgs);
        type->StrongRefOffsets[2] = offsetof(Clicker, ClickedEvent);
        type->StrongRefOffsets[3] = offsetof(Clicker, LongPressedEvent);
        type->StrongRefOffsets[4] = offsetof(Clicker, TappedEvent);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_node";
        type->StrongRefNames[1] = "_lastArgs";
        type->StrongRefNames[2] = "ClickedEvent";
        type->StrongRefNames[3] = "LongPressedEvent";
        type->StrongRefNames[4] = "TappedEvent";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

Clicker* Clicker__AttachClicker(::uStatic* __this, ::app::Fuse::Node* elm)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->TryGet(Clicker___clickerProperty, &v))
    {
        Clicker* c = ::uAs< Clicker*>(v, Clicker__typeof());
        ::uPtr< ::app::Fuse::Gestures::Clicker*>(c)->_attachCount++;
        return c;
    }

    Clicker* nc = Clicker__New_1(NULL, elm);
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->Set(Clicker___clickerProperty, (::uObject*)nc);
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(nc)->OnRooted();
    return nc;
}

void Clicker__Detach(Clicker* __this)
{
    __this->_attachCount--;

    if (__this->_attachCount == 0)
    {
        __this->OnUnrooted();
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Properties())->Clear(Clicker___clickerProperty);
    }
}

void Clicker__OnRooted(Clicker* __this)
{
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->AddHandler(__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)::app::Fuse::Gestures::Clicker__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->AddHandler(__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)::app::Fuse::Gestures::Clicker__OnPointerReleased, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler(__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)::app::Fuse::Gestures::Clicker__OnPointerMoved, __this));
}

void Clicker__OnUnrooted(Clicker* __this)
{
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->RemoveHandler(__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)::app::Fuse::Gestures::Clicker__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->RemoveHandler(__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)::app::Fuse::Gestures::Clicker__OnPointerReleased, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler(__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)::app::Fuse::Gestures::Clicker__OnPointerMoved, __this));
}

void Clicker__OnPointerPressed(Clicker* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args)
{
    if (!::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->TrySoftCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Gestures::Clicker__OnLostCapture, __this), NULL))
    {
        return;
    }

    double delta = ::app::Uno::Time__get_FrameTime(NULL) - __this->_lastUpTime;

    if (delta > (double)__this->_maxDoubleInterval)
    {
        __this->_tapCount = 0;
        __this->_clickCount = 0;
    }

    __this->_down = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->PointIndex();
    __this->_startCoord = args->WindowPoint();
    __this->_startTime = ::app::Uno::Time__get_FrameTime(NULL);
    __this->_maybeTap = true;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->LongPressedEvent, NULL))
    {
        __this->_hasUpdate = true;
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->add_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Gestures::Clicker__OnUpdate, __this));
    }

    __this->_lastArgs = (::app::Fuse::Input::PointerEventArgs*)args;
}

void Clicker__OnPointerMoved(Clicker* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (__this->_down != ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->PointIndex())
    {
        return;
    }

    float distance = ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Subtraction(NULL, ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint(), __this->_startCoord));
    double deltaTime = ::app::Uno::Time__get_FrameTime(NULL) - __this->_startTime;

    if ((distance > __this->_maxTapDistanceMoved) || (deltaTime > (double)__this->_maxTapTimeHeld))
    {
        __this->_maybeTap = false;
    }

    if (!__this->NeedCapture())
    {
        ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->ReleaseSoftCapture((::uObject*)__this);
        __this->DoneCapture();
    }

    __this->_lastArgs = (::app::Fuse::Input::PointerEventArgs*)args;
}

bool Clicker__NeedCapture(Clicker* __this)
{
    return ((__this->_maybeTap && ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TappedEvent, NULL)) || ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ClickedEvent, NULL)) || ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->LongPressedEvent, NULL);
}

void Clicker__OnPointerReleased(Clicker* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    if (__this->_down != ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->PointIndex())
    {
        return;
    }

    ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->ReleaseSoftCapture((::uObject*)__this);
    double deltaTime = ::app::Uno::Time__get_FrameTime(NULL) - __this->_startTime;

    if (__this->_maybeTap && (deltaTime <= (double)__this->_maxTapTimeHeld))
    {
        __this->_tapCount++;

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TappedEvent, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->TappedEvent)->InvokeVoid< ::app::Fuse::Input::PointerEventArgs*, int>((::app::Fuse::Input::PointerEventArgs*)args, __this->_tapCount);
        }
    }
    else
    {
        __this->_tapCount = 0;
    }

    if (::uPtr< ::app::Fuse::Node*>(__this->_node)->GetHitWindowPoint(args->WindowPoint()) != NULL)
    {
        __this->_clickCount++;

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ClickedEvent, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->ClickedEvent)->InvokeVoid< ::app::Fuse::Input::PointerEventArgs*, int>((::app::Fuse::Input::PointerEventArgs*)args, __this->_clickCount);
        }
    }
    else
    {
        __this->_clickCount = 0;
    }

    __this->DoneCapture();
    __this->_lastUpTime = ::app::Uno::Time__get_FrameTime(NULL);
    __this->_lastArgs = (::app::Fuse::Input::PointerEventArgs*)args;
}

void Clicker__OnUpdate(Clicker* __this, ::uObject* s, ::uObject* a)
{
    double elapsed = ::app::Uno::Time__get_FrameTime(NULL) - __this->_startTime;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->LongPressedEvent, NULL) && (elapsed > (double)__this->_longPressTimeout))
    {
        ::uPtr< ::uDelegate*>(__this->LongPressedEvent)->InvokeVoid< ::app::Fuse::Input::PointerEventArgs*, int>(__this->_lastArgs, 0);
        ::app::Fuse::Input::Pointer__ReleaseSoftCapture(NULL, __this->_down, (::uObject*)__this);
        __this->DoneCapture();
    }
}

void Clicker__DoneCapture(Clicker* __this)
{
    __this->_down = -1;
    __this->ReleaseUpdate();
}

void Clicker__ReleaseUpdate(Clicker* __this)
{
    if (__this->_hasUpdate)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->remove_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Gestures::Clicker__OnUpdate, __this));
        __this->_hasUpdate = false;
    }
}

void Clicker__OnLostCapture(Clicker* __this)
{
    __this->DoneCapture();
    __this->_tapCount = 0;
    __this->_clickCount = 0;
}

void Clicker___TypeInit(::uStatic* __this)
{
    Clicker___clickerProperty = ::app::Fuse::Properties__CreateHandle(NULL);
}

void Clicker___ObjInit(Clicker* __this, ::app::Fuse::Node* node)
{
    __this->_maxTapDistanceMoved = 25.0f;
    __this->_maxTapTimeHeld = 0.3f;
    __this->_maxDoubleInterval = 0.3f;
    __this->_longPressTimeout = 0.5f;
    __this->_attachCount = 1;
    __this->_down = -1;
    __this->_node = node;
}

Clicker* Clicker__New_1(::uStatic* __this, ::app::Fuse::Node* node)
{
    Clicker* inst = (::app::Fuse::Gestures::Clicker*)::uAllocObject(sizeof(::app::Fuse::Gestures::Clicker), ::app::Fuse::Gestures::Clicker__typeof());
    inst->_ObjInit(node);
    return inst;
}

void Clicker__add_TappedEvent(Clicker* __this, ::uDelegate* value)
{
    __this->TappedEvent = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TappedEvent, (::uDelegate*)value), ::app::Fuse::Gestures::ClickerEventHandler__typeof());
}

void Clicker__remove_TappedEvent(Clicker* __this, ::uDelegate* value)
{
    __this->TappedEvent = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->TappedEvent, (::uDelegate*)value), ::app::Fuse::Gestures::ClickerEventHandler__typeof());
}

}}}
