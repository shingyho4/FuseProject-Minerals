// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Delegate.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Uno_Platform2_TimerEventArgs.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform2.Display.h>
#include <app/Uno.Platform2.GraphicsView.h>
#include <app/Uno.Platform2.GraphicsView_PrivateState.h>
#include <app/Uno.Platform2.TimerEventArgs.h>
#include <app/Uno.Platform2.ViewNativeHandle.h>

namespace app {
namespace Uno {
namespace Platform2 {

GraphicsView__uType* GraphicsView__typeof()
{
    static GraphicsView__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GraphicsView__uType*)::uAllocClassType(sizeof(GraphicsView__uType), "Uno.Platform2.GraphicsView", ::app::Uno::Platform2::View__typeof(), 0, 5);
        type->__fp_Finalize = (void(*)(::uObject*))GraphicsView__Finalize;
        type->__fp_AboutToShow = (void(*)(::app::Uno::Platform2::View*))GraphicsView__AboutToShow;
        type->__fp_AboutToHide = (void(*)(::app::Uno::Platform2::View*))GraphicsView__AboutToHide;
        type->__fp_OnFrameChanged = (void(*)(::app::Uno::Platform2::View*))GraphicsView__OnFrameChanged;

        type->StrongRefOffsets[0] = offsetof(GraphicsView, Draw);
        type->StrongRefOffsets[1] = offsetof(GraphicsView, Update);
        type->StrongRefOffsets[2] = offsetof(GraphicsView, WillResumeRendering);
        type->StrongRefOffsets[3] = offsetof(GraphicsView, DidPauseRendering);
        type->StrongRefOffsets[4] = offsetof(GraphicsView, IsRenderingChanged);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Draw";
        type->StrongRefNames[1] = "Update";
        type->StrongRefNames[2] = "WillResumeRendering";
        type->StrongRefNames[3] = "DidPauseRendering";
        type->StrongRefNames[4] = "IsRenderingChanged";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void GraphicsView__Finalize(GraphicsView* __this)
{
    __this->Destroy();
}

bool GraphicsView__get_IsRendering(GraphicsView* __this)
{
    return __this->_isRendering;
}

void GraphicsView__set_IsRendering(GraphicsView* __this, bool value)
{
    if (__this->_isRendering == value)
    {
        return;
    }

    if (value && !__this->IsVisible())
    {
        return;
    }

    __this->_isRendering = value;

    if (::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->Handle()))
    {
        __this->SetIsRendering(__this->_isRendering);

        if (__this->_isRendering)
        {
        }
        else
        {
            __this->OnDidPauseRendering();
        }
    }

    __this->OnIsRenderingChanged();
}

void GraphicsView__Initialize(GraphicsView* __this)
{
    __this->_private_1.Initialize(__this);
}

void GraphicsView__Destroy(GraphicsView* __this)
{
    __this->_private_1.Destroy(__this);
}

void GraphicsView__ResumeRendering(GraphicsView* __this)
{
    __this->IsRendering(true);
}

void GraphicsView__PauseRendering(GraphicsView* __this)
{
    __this->IsRendering(false);
}

void GraphicsView__SetIsRendering(GraphicsView* __this, bool __rendering)
{
    __this->_private_1.SetIsRendering(__this, __rendering);
}

void GraphicsView__OnWillResumeRendering(GraphicsView* __this)
{
    if (!__this->IsRendering() || __this->_willResumeRenderingTriggered)
    {
        return;
    }

    __this->_willResumeRenderingTriggered = true;
    __this->SubscribeToDisplayTick();
    ::uDelegate* handler = __this->WillResumeRendering;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void GraphicsView__OnDidPauseRendering(GraphicsView* __this)
{
    if (!__this->_willResumeRenderingTriggered)
    {
        return;
    }

    __this->_willResumeRenderingTriggered = false;
    __this->UnsubscribeFromDisplayTick();
    ::uDelegate* handler = __this->DidPauseRendering;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void GraphicsView__OnIsRenderingChanged(GraphicsView* __this)
{
    ::uDelegate* handler = __this->IsRenderingChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void GraphicsView__SubscribeToDisplayTick(GraphicsView* __this)
{
    ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->add_Tick(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform2_TimerEventArgs__typeof(), (const void*)::app::Uno::Platform2::GraphicsView__OnUpdate, __this));
    ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->add_Tick(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform2_TimerEventArgs__typeof(), (const void*)::app::Uno::Platform2::GraphicsView__OnDraw, __this));
}

void GraphicsView__UnsubscribeFromDisplayTick(GraphicsView* __this)
{
    ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->remove_Tick(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform2_TimerEventArgs__typeof(), (const void*)::app::Uno::Platform2::GraphicsView__OnDraw, __this));
    ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->remove_Tick(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform2_TimerEventArgs__typeof(), (const void*)::app::Uno::Platform2::GraphicsView__OnUpdate, __this));
}

void GraphicsView__AboutToShow(GraphicsView* __this)
{
    __this->IsRendering(true);
}

void GraphicsView__AboutToHide(GraphicsView* __this)
{
    __this->IsRendering(false);
}

void GraphicsView__OnFrameChanged(GraphicsView* __this)
{
    __this->_FrameDidChange();
    ::app::Uno::Platform2::View__OnFrameChanged(__this);
}

void GraphicsView___FrameDidChange(GraphicsView* __this)
{
    __this->_private_1.FrameDidChange(__this);
}

void GraphicsView__OnUpdate(GraphicsView* __this, ::uObject* sender, ::app::Uno::Platform2::TimerEventArgs* args)
{
    __this->AboutToDrawFrame();
    ::uDelegate* handler = __this->Update;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::Platform2::TimerEventArgs*>((::uObject*)__this, args);
    }
}

void GraphicsView__OnDraw(GraphicsView* __this, ::uObject* sender, ::app::Uno::Platform2::TimerEventArgs* args)
{
    ::uDelegate* handler = __this->Draw;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        __this->AboutToDrawFrame();
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::Platform2::TimerEventArgs*>((::uObject*)__this, args);
        __this->DidDrawFrame();
    }
}

void GraphicsView__AboutToDrawFrame(GraphicsView* __this)
{
    __this->_private_1.AboutToDrawFrame(__this);
}

void GraphicsView__DidDrawFrame(GraphicsView* __this)
{
    __this->_private_1.DidDrawFrame(__this);
}

void GraphicsView___ObjInit_1(GraphicsView* __this)
{
    ::app::Uno::Platform2::View___ObjInit(__this);
    __this->Initialize();
}

GraphicsView* GraphicsView__New_2(::uStatic* __this)
{
    GraphicsView* inst = (::app::Uno::Platform2::GraphicsView*)::uAllocObject(sizeof(::app::Uno::Platform2::GraphicsView), ::app::Uno::Platform2::GraphicsView__typeof());
    inst->_ObjInit_1();
    return inst;
}

void GraphicsView__add_Draw(GraphicsView* __this, ::uDelegate* value)
{
    __this->Draw = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Draw, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform2_TimerEventArgs__typeof());
}

void GraphicsView__remove_Draw(GraphicsView* __this, ::uDelegate* value)
{
    __this->Draw = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Draw, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform2_TimerEventArgs__typeof());
}

void GraphicsView__add_Update(GraphicsView* __this, ::uDelegate* value)
{
    __this->Update = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Update, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform2_TimerEventArgs__typeof());
}

}}}
