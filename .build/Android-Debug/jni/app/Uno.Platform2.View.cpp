// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Delegate.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Uno_Platform2_TouchEventArgs.h>
#include <app/Uno.Int.h>
#include <app/Uno.Platform2.TouchEventArgs.h>
#include <app/Uno.Platform2.View.h>
#include <app/Uno.Platform2.View_PrivateState.h>

namespace app {
namespace Uno {
namespace Platform2 {

View__uType* View__typeof()
{
    static View__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (View__uType*)::uAllocClassType(sizeof(View__uType), "Uno.Platform2.View", ::uObject__typeof(), 0, 11);
        type->__fp_Finalize = (void(*)(::uObject*))View__Finalize;
        type->__fp_ResetStateOnHandleChanged = View__ResetStateOnHandleChanged;
        type->__fp_AboutToShow = View__AboutToShow;
        type->__fp_AboutToHide = View__AboutToHide;
        type->__fp_OnFrameChanged = View__OnFrameChanged;

        type->StrongRefOffsets[0] = offsetof(View, FrameChanged);
        type->StrongRefOffsets[1] = offsetof(View, TouchDown);
        type->StrongRefOffsets[2] = offsetof(View, TouchMove);
        type->StrongRefOffsets[3] = offsetof(View, TouchUp);
        type->StrongRefOffsets[4] = offsetof(View, HandleChanged);
        type->StrongRefOffsets[5] = offsetof(View, _handleReady);
        type->StrongRefOffsets[6] = offsetof(View, WillShow);
        type->StrongRefOffsets[7] = offsetof(View, WillHide);
        type->StrongRefOffsets[8] = offsetof(View, IsVisibleChanged);
        type->StrongRefOffsets[9] = offsetof(View, IsEnabledChanged);
        type->StrongRefOffsets[10] = offsetof(View, TouchCancel);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "FrameChanged";
        type->StrongRefNames[1] = "TouchDown";
        type->StrongRefNames[2] = "TouchMove";
        type->StrongRefNames[3] = "TouchUp";
        type->StrongRefNames[4] = "HandleChanged";
        type->StrongRefNames[5] = "_handleReady";
        type->StrongRefNames[6] = "WillShow";
        type->StrongRefNames[7] = "WillHide";
        type->StrongRefNames[8] = "IsVisibleChanged";
        type->StrongRefNames[9] = "IsEnabledChanged";
        type->StrongRefNames[10] = "TouchCancel";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void View__Finalize(View* __this)
{
    __this->IsVisible(false);
    __this->Handle(::app::Uno::Platform2::ViewNativeHandle__get_Null(NULL));
}

uPlatform2::ViewNativeHandle View__get_Handle(View* __this)
{
    return __this->_handle;
}

void View__set_Handle(View* __this, uPlatform2::ViewNativeHandle value)
{
    if (::app::Uno::Platform2::ViewNativeHandle__op_LogicalNot(NULL, __this->_handle) || ::app::Uno::Platform2::ViewNativeHandle__op_LogicalNot(NULL, value))
    {
        if (::app::Uno::Platform2::ViewNativeHandle__op_LogicalNot(NULL, __this->_handle) && ::app::Uno::Platform2::ViewNativeHandle__op_LogicalNot(NULL, value))
        {
            return;
        }
    }
    else if (::app::Uno::Platform2::ViewNativeHandle__op_Equality(NULL, __this->_handle, value))
    {
        return;
    }

    uPlatform2::ViewNativeHandle previousHandle = __this->_handle;
    __this->_handle = ::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, value) ? __this->AttachHandle(value) : ::app::Uno::Platform2::ViewNativeHandle__get_Null(NULL);

    if (::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, previousHandle))
    {
        __this->DetachHandle(previousHandle);
    }

    __this->ResetStateOnHandleChanged();
    __this->OnHandleChanged();

    if (::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->_handle))
    {
        __this->OnHandleReady();
    }
}

bool View__get_IsVisible(View* __this)
{
    return __this->_isVisible;
}

void View__set_IsVisible(View* __this, bool value)
{
    if (__this->_isVisible == value)
    {
        return;
    }

    __this->_isVisible = value;

    if (::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->Handle()))
    {
        __this->SetIsVisible(__this->_isVisible);

        if (__this->_isVisible)
        {
            __this->OnWillShow();
        }
        else
        {
            __this->OnWillHide();
        }
    }

    __this->OnIsVisibleChanged();
}

bool View__get_IsEnabled(View* __this)
{
    return __this->_isEnabled;
}

void View__set_IsEnabled(View* __this, bool value)
{
    if (__this->_isEnabled == value)
    {
        return;
    }

    __this->_isEnabled = value;

    if (::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->Handle()))
    {
        __this->SetIsEnabled(__this->_isEnabled);
    }

    __this->OnIsEnabledChanged();
}

::app::Uno::Rect View__get_Frame(View* __this)
{
    return __this->_frame;
}

void View__set_Frame(View* __this, ::app::Uno::Rect value)
{
    if (::app::Uno::Rect__Equals_2(NULL, __this->_frame, value))
    {
        return;
    }

    __this->_frame = value;

    if (::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->Handle()))
    {
        __this->SetFrame(__this->_frame);
    }

    __this->OnFrameChanged();
}

void View__ResetStateOnHandleChanged(View* __this)
{
    __this->OnWillHide();

    if (::app::Uno::Platform2::ViewNativeHandle__op_LogicalNot(NULL, __this->Handle()))
    {
        return;
    }

    __this->SetFrame(__this->Frame());
    __this->SetIsEnabled(__this->IsEnabled());
    __this->SetIsVisible(__this->IsVisible());

    if (__this->IsVisible())
    {
        __this->OnWillShow();
    }
}

void View__OnHandleChanged(View* __this)
{
    ::uDelegate* handler = __this->HandleChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void View__OnHandleReady(View* __this)
{
    ::uDelegate* handler = __this->_handleReady;
    __this->_handleReady = NULL;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

uPlatform2::ViewNativeHandle View__AttachHandle(View* __this, uPlatform2::ViewNativeHandle __handle)
{
    return __this->_private.AttachHandle(__this, __handle);
}

void View__DetachHandle(View* __this, uPlatform2::ViewNativeHandle __handle)
{
    __this->_private.DetachHandle(__this, __handle);
}

void View__SetIsVisible(View* __this, bool __visible)
{
    __this->_private.SetIsVisible(__this, __visible);
}

void View__AboutToShow(View* __this)
{
}

void View__AboutToHide(View* __this)
{
}

void View__OnWillShow(View* __this)
{
    if (__this->_willShowTriggered)
    {
        return;
    }

    __this->_willShowTriggered = true;
    ::uDelegate* handler = __this->WillShow;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }

    __this->AboutToShow();
}

void View__OnWillHide(View* __this)
{
    if (!__this->_willShowTriggered)
    {
        return;
    }

    __this->_willShowTriggered = false;
    __this->AboutToHide();
    ::uDelegate* handler = __this->WillHide;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void View__OnIsVisibleChanged(View* __this)
{
    ::uDelegate* handler = __this->IsVisibleChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void View__OnIsEnabledChanged(View* __this)
{
    ::uDelegate* handler = __this->IsEnabledChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void View__SetIsEnabled(View* __this, bool __isEnabled)
{
    __this->_private.SetIsEnabled(__this, __isEnabled);
}

void View__OnFrameChanged(View* __this)
{
    ::uDelegate* handler = __this->FrameChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void View__SetFrame(View* __this, ::app::Uno::Rect __frame)
{
    __this->_private.SetFrame(__this, __frame);
}

::app::Uno::Float2 View__GetContentSize(View* __this, ::app::Uno::Float2 fillSize, int flags)
{
    if (::app::Uno::Platform2::ViewNativeHandle__op_LogicalNot(NULL, __this->Handle()))
    {
        return __this->Frame().Size();
    }

    return __this->_GetContentSize(fillSize, flags);
}

::app::Uno::Float2 View___GetContentSize(View* __this, ::app::Uno::Float2 __fillSize, int __flags)
{
    return __this->_private.GetContentSize(__this, __fillSize, __flags);
}

void View__OnTouchDown(View* __this, ::app::Uno::Platform2::TouchEventArgs* args)
{
    ::uDelegate* handler = __this->TouchDown;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::Platform2::TouchEventArgs*>((::uObject*)__this, args);
    }
}

void View__OnTouchMove(View* __this, ::app::Uno::Platform2::TouchEventArgs* args)
{
    ::uDelegate* handler = __this->TouchMove;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::Platform2::TouchEventArgs*>((::uObject*)__this, args);
    }
}

void View__OnTouchUp(View* __this, ::app::Uno::Platform2::TouchEventArgs* args)
{
    ::uDelegate* handler = __this->TouchUp;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::Platform2::TouchEventArgs*>((::uObject*)__this, args);
    }
}

void View__OnTouchCancel(View* __this, ::app::Uno::Platform2::TouchEventArgs* args)
{
    ::uDelegate* handler = __this->TouchCancel;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::Platform2::TouchEventArgs*>((::uObject*)__this, args);
    }
}

void View___ObjInit(View* __this)
{
    __this->_isVisible = true;
    __this->_isEnabled = true;
    __this->_isFocusable = true;
}

void View__add_HandleReady(View* __this, ::uDelegate* value)
{
    if (::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->_handle))
    {
        ::uPtr< ::uDelegate*>(value)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
    else
    {
        __this->add__handleReady(value);
    }
}

void View__remove_HandleReady(View* __this, ::uDelegate* value)
{
    __this->remove__handleReady(value);
}

void View__add_FrameChanged(View* __this, ::uDelegate* value)
{
    __this->FrameChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->FrameChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void View__add_TouchDown(View* __this, ::uDelegate* value)
{
    __this->TouchDown = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TouchDown, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform2_TouchEventArgs__typeof());
}

void View__add_TouchMove(View* __this, ::uDelegate* value)
{
    __this->TouchMove = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TouchMove, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform2_TouchEventArgs__typeof());
}

void View__add_TouchUp(View* __this, ::uDelegate* value)
{
    __this->TouchUp = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TouchUp, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform2_TouchEventArgs__typeof());
}

void View__add__handleReady(View* __this, ::uDelegate* value)
{
    __this->_handleReady = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->_handleReady, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void View__remove__handleReady(View* __this, ::uDelegate* value)
{
    __this->_handleReady = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->_handleReady, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

}}}
