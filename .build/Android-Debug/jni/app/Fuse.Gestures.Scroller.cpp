// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Physics.BasicBoundedRegion2D.h>
#include <app/Experimental.Physics.BoundedRegion2D.h>
#include <app/Experimental.Physics.MotionSimulation__float2.h>
#include <app/Experimental.Physics.PointerVelocity__float2.h>
#include <app/Experimental.Physics.Simulation.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.RequestBringIntoViewArgs.h>
#include <app/Fuse.Elements.RequestBringIntoViewHandler.h>
#include <app/Fuse.Gestures.DegreeSpan.h>
#include <app/Fuse.Gestures.IScrollable.h>
#include <app/Fuse.Gestures.Scroller.h>
#include <app/Fuse.Gestures.SwipeGestureHelper.h>
#include <app/Fuse.INodeParent.h>
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
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Action.h>
#include <app/Uno.Diagnostics.Clock.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Time.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Gestures {

::uStaticStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> Scroller___horizontalGesture;
::uStaticStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> Scroller___verticalGesture;

Scroller__uType* Scroller__typeof()
{
    static Scroller__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Scroller__uType*)::uAllocClassType(sizeof(Scroller__uType), "Fuse.Gestures.Scroller", ::app::Fuse::Behavior__typeof(), 0, 5);
        type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Scroller__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Scroller__OnUnrooted;

        type->StrongRefOffsets[0] = offsetof(Scroller, _region);
        type->StrongRefOffsets[1] = offsetof(Scroller, _velocity);
        type->StrongRefOffsets[2] = offsetof(Scroller, _node);
        type->StrongRefOffsets[3] = offsetof(Scroller, _scrollable);
        type->StrongRefOffsets[4] = offsetof(Scroller, _pendingBringIntoView);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_region";
        type->StrongRefNames[1] = "_velocity";
        type->StrongRefNames[2] = "_node";
        type->StrongRefNames[3] = "_scrollable";
        type->StrongRefNames[4] = "_pendingBringIntoView";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Scroller__OnRooted(Scroller* __this, ::app::Fuse::Node* elm)
{
    __this->_node = ::uAs< ::app::Fuse::Elements::Element*>(elm, ::app::Fuse::Elements::Element__typeof());
    __this->_scrollable = ::uAs< ::uObject*>(elm, ::app::Fuse::Gestures::IScrollable__typeof());

    if (__this->_scrollable != NULL)
    {
        ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->AddHandler((::app::Fuse::Node*)__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)::app::Fuse::Gestures::Scroller__OnPointerPressed, __this));
        ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler((::app::Fuse::Node*)__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)::app::Fuse::Gestures::Scroller__OnPointerMoved, __this));
        ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->AddHandler((::app::Fuse::Node*)__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)::app::Fuse::Gestures::Scroller__OnPointerReleased, __this));
        ::app::Fuse::Gestures::IScrollable::add_RequestBringIntoView(::uPtr< ::uObject*>(__this->_scrollable), ::uNewDelegateNonVirt(::app::Fuse::Elements::RequestBringIntoViewHandler__typeof(), (const void*)::app::Fuse::Gestures::Scroller__OnRequestBringIntoView, __this));
    }
}

void Scroller__OnUnrooted(Scroller* __this, ::app::Fuse::Node* elm)
{
    if (__this->_scrollable != NULL)
    {
        ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)::app::Fuse::Gestures::Scroller__OnPointerPressed, __this));
        ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)::app::Fuse::Gestures::Scroller__OnPointerMoved, __this));
        ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)::app::Fuse::Gestures::Scroller__OnPointerReleased, __this));
        ::app::Fuse::Gestures::IScrollable::remove_RequestBringIntoView(::uPtr< ::uObject*>(__this->_scrollable), ::uNewDelegateNonVirt(::app::Fuse::Elements::RequestBringIntoViewHandler__typeof(), (const void*)::app::Fuse::Gestures::Scroller__OnRequestBringIntoView, __this));

        if (__this->_hasUpdated)
        {
            __this->_hasUpdated = false;
            ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Gestures::Scroller__OnUpdated, __this), 0);
        }
    }

    __this->_node = NULL;
}

void Scroller__CheckNeedUpdated(Scroller* __this, bool off)
{
    bool needUpdated = !::app::Experimental::Physics::Simulation::IsStatic(::uPtr< ::uObject*>(__this->_region));

    if (needUpdated == __this->_hasUpdated)
    {
        return;
    }

    if (needUpdated)
    {
        ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Gestures::Scroller__OnUpdated, __this), 0);
        __this->_hasUpdated = true;
    }
    else if (off)
    {
        ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Gestures::Scroller__OnUpdated, __this), 0);
        __this->_hasUpdated = false;
    }
}

void Scroller__OnPointerPressed(Scroller* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args)
{
    if (__this->_down == -1)
    {
        bool captured = false;
        __this->_isHardCapture = false;

        if (::app::Uno::Vector__Length(NULL, ::app::Experimental::Physics::MotionSimulation__float2::Velocity(::uPtr< ::uObject*>(__this->_region))) > 100.0f)
        {
            captured = __this->HardCapture((::app::Fuse::Input::PointerEventArgs*)args);
        }
        else
        {
            captured = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->TrySoftCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Gestures::Scroller__OnLostCapture, __this), NULL);
        }

        if (captured)
        {
            __this->_softCaptureStart = __this->_softCaptureCurrent = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->WindowPoint();
            __this->_down = args->PointIndex();
            __this->_pointerPos = __this->FromWindow(args->WindowPoint());
            __this->_prevPos = __this->_startPos = __this->_pointerPos;
            __this->_prevTime = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL);
            ::uPtr< ::app::Experimental::Physics::PointerVelocity__float2*>(__this->_velocity)->Reset_1(__this->_pointerPos, ::app::Uno::Float2__New_1(NULL, 0.0f));
            ::app::Experimental::Physics::BoundedRegion2D::StartUser(::uPtr< ::uObject*>(__this->_region));
            ::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_region), ::app::Fuse::Gestures::IScrollable::ScrollPosition(::uPtr< ::uObject*>(__this->_scrollable)));
            __this->CheckNeedUpdated(false);
        }
    }
}

::app::Uno::Float2 Scroller__FromWindow(Scroller* __this, ::app::Uno::Float2 p)
{
    if (__this->_node == NULL)
    {
        return p;
    }

    return ::app::Fuse::INodeParent::WindowToLocal(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Elements::Element*>(__this->_node)->Parent()), p);
}

void Scroller__OnLostCapture(Scroller* __this)
{
    __this->_down = -1;
    ::app::Experimental::Physics::BoundedRegion2D::EndUser(::uPtr< ::uObject*>(__this->_region), ::app::Uno::Float2__New_1(NULL, 0.0f));
    ::app::Fuse::Input::Pointer__ReleaseAllCaptures(NULL, (::uObject*)__this);
    __this->CheckNeedUpdated(false);
}

bool Scroller__HardCapture(Scroller* __this, ::app::Fuse::Input::PointerEventArgs* args)
{
    __this->_isHardCapture = ::uPtr< ::app::Fuse::Input::PointerEventArgs*>(args)->TryHardCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Gestures::Scroller__OnLostCapture, __this), NULL);

    if (!__this->_isHardCapture)
    {
        __this->OnLostCapture();
    }

    return __this->_isHardCapture;
}

void Scroller__OnPointerMoved(Scroller* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (__this->_down != ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->PointIndex())
    {
        return;
    }

    if (!::app::Fuse::Input::Pointer__IsPressed_1(NULL, __this->_down))
    {
        __this->OnLostCapture();
    }

    if (!__this->_isHardCapture)
    {
        __this->_softCaptureCurrent = ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint();
        ::app::Uno::Float2 diff = ::app::Uno::Float2__op_Subtraction(NULL, __this->_softCaptureCurrent, __this->_softCaptureStart);

        if (::app::Fuse::Gestures::IScrollable::AllowedScrollDirections(::uPtr< ::uObject*>(__this->_scrollable)) == 15)
        {
            if (::app::Uno::Vector__Length(NULL, diff) > 10.0f)
            {
                __this->HardCapture((::app::Fuse::Input::PointerEventArgs*)args);
            }
        }

        if (::app::Fuse::Gestures::IScrollable::AllowedScrollDirections(::uPtr< ::uObject*>(__this->_scrollable)) == 3)
        {
            if (::uPtr< ::app::Fuse::Gestures::SwipeGestureHelper*>(Scroller___horizontalGesture)->IsWithinBounds(diff))
            {
                __this->HardCapture((::app::Fuse::Input::PointerEventArgs*)args);
            }
        }

        if (::app::Fuse::Gestures::IScrollable::AllowedScrollDirections(::uPtr< ::uObject*>(__this->_scrollable)) == 12)
        {
            if (::uPtr< ::app::Fuse::Gestures::SwipeGestureHelper*>(Scroller___verticalGesture)->IsWithinBounds(diff))
            {
                __this->HardCapture((::app::Fuse::Input::PointerEventArgs*)args);
            }
        }
    }

    __this->_pointerPos = __this->FromWindow(::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint());
    __this->MoveUser(!__this->_delayStart || __this->_isHardCapture);
}

void Scroller__OnPointerReleased(Scroller* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    if (__this->_down == ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->PointIndex())
    {
        if (__this->_delayStart && !__this->_isHardCapture)
        {
            __this->OnLostCapture();
            return;
        }

        __this->_down = -1;
        ::app::Fuse::Input::Pointer__ReleaseAllCaptures(NULL, (::uObject*)__this);

        if (::app::Experimental::Physics::BoundedRegion2D::IsUser(::uPtr< ::uObject*>(__this->_region)))
        {
            __this->_pointerPos = __this->FromWindow(::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->WindowPoint());
            __this->MoveUser(true);
            ::app::Experimental::Physics::BoundedRegion2D::EndUser(::uPtr< ::uObject*>(__this->_region), ::app::Uno::Float2__op_UnaryNegation(NULL, ::uPtr< ::app::Experimental::Physics::PointerVelocity__float2*>(__this->_velocity)->CurrentVelocity()));
            __this->CheckNeedUpdated(false);
        }
    }
}

void Scroller__OnRequestBringIntoView(Scroller* __this, ::uObject* sender, ::app::Fuse::Elements::RequestBringIntoViewArgs* args)
{
    __this->_pendingBringIntoView = (::app::Fuse::Node*)::uPtr< ::app::Fuse::Elements::RequestBringIntoViewArgs*>(args)->Element();
    ::app::Fuse::UpdateManager__PerformNextFrame(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Gestures::Scroller__PerformBringIntoView, __this), 0);
}

void Scroller__PerformBringIntoView(Scroller* __this)
{
    if (__this->_pendingBringIntoView == NULL)
    {
        return;
    }

    __this->Goto(::app::Fuse::Gestures::IScrollable::GetNodeScrollPosition(::uPtr< ::uObject*>(__this->_scrollable), __this->_pendingBringIntoView));
    __this->_pendingBringIntoView = NULL;
}

void Scroller__Goto(Scroller* __this, ::app::Uno::Float2 position)
{
    if (__this->_scrollable == NULL)
    {
        return;
    }

    __this->UpdateScrollMax();
    ::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_region), ::app::Fuse::Gestures::IScrollable::ScrollPosition(::uPtr< ::uObject*>(__this->_scrollable)));
    ::app::Experimental::Physics::BoundedRegion2D::MoveTo(::uPtr< ::uObject*>(__this->_region), position);
    __this->CheckNeedUpdated(false);
}

void Scroller__UpdateScrollMax(Scroller* __this)
{
    ::app::Experimental::Physics::BoundedRegion2D::MaxPosition(::uPtr< ::uObject*>(__this->_region), ::app::Fuse::Gestures::IScrollable::MaxScroll(::uPtr< ::uObject*>(__this->_scrollable)));
    ::app::Experimental::Physics::BoundedRegion2D::MinPosition(::uPtr< ::uObject*>(__this->_region), ::app::Fuse::Gestures::IScrollable::MinScroll(::uPtr< ::uObject*>(__this->_scrollable)));
}

void Scroller__OnUpdated(Scroller* __this)
{
    __this->UpdateScrollMax();
    ::app::Experimental::Physics::Simulation::Update(::uPtr< ::uObject*>(__this->_region), ::app::Uno::Time__get_FrameInterval(NULL));
    ::app::Fuse::Gestures::IScrollable::ScrollPosition(::uPtr< ::uObject*>(__this->_scrollable), ::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_region)));
    __this->CheckNeedUpdated(true);
}

void Scroller__MoveUser(Scroller* __this, bool started)
{
    ::app::Uno::Float2 diff = ::app::Uno::Float2__op_UnaryNegation(NULL, ::app::Uno::Float2__op_Subtraction(NULL, __this->_pointerPos, __this->_prevPos));
    __this->_prevPos = __this->_pointerPos;
    double t = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL);
    double elapsed = t - __this->_prevTime;
    __this->_prevTime = t;

    if (started)
    {
        ::app::Experimental::Physics::BoundedRegion2D::StepUser(::uPtr< ::uObject*>(__this->_region), diff);
    }

    ::uPtr< ::app::Experimental::Physics::PointerVelocity__float2*>(__this->_velocity)->AddSample(__this->_pointerPos, (float)elapsed, !__this->_isHardCapture);
}

void Scroller___TypeInit(::uStatic* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;
    Scroller___horizontalGesture = ::app::Fuse::Gestures::SwipeGestureHelper__New_1(NULL, 10.0f, (array_123 = ::uNewArray(::app::Fuse::Gestures::DegreeSpan__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(0) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, 45.0f, 135.0f), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(1) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, -45.0f, -135.0f), array_123));
    Scroller___verticalGesture = ::app::Fuse::Gestures::SwipeGestureHelper__New_1(NULL, 10.0f, (array_124 = ::uNewArray(::app::Fuse::Gestures::DegreeSpan__typeof(), 3), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(0) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, -45.0f, 45.0f), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(1) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, -135.0f, -180.0f), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(2) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, 135.0f, 180.0f), array_124));
}

void Scroller___ObjInit_1(Scroller* __this)
{
    __this->_region = (::uObject*)::app::Experimental::Physics::BasicBoundedRegion2D__CreatePixelFlat(NULL);
    __this->_velocity = ::app::Experimental::Physics::PointerVelocity__float2__New_1(NULL);
    __this->_delayStart = true;
    __this->_down = -1;
    ::app::Fuse::Behavior___ObjInit(__this);
}

Scroller* Scroller__New_1(::uStatic* __this)
{
    Scroller* inst = (::app::Fuse::Gestures::Scroller*)::uAllocObject(sizeof(::app::Fuse::Gestures::Scroller), ::app::Fuse::Gestures::Scroller__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
