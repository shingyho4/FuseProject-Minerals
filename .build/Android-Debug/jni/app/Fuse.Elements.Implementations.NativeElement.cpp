// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Implementations\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Elements.Implementations.NativeElement.h>
#include <app/Fuse.Input.Event__Fuse_Input_FocusGainedHandler__Fuse_Input_Foc-7957175e.h>
#include <app/Fuse.Input.Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.FocusGainedArgs.h>
#include <app/Fuse.Input.FocusGainedHandler.h>
#include <app/Fuse.Input.FocusLostArgs.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform2.View.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Elements {
namespace Implementations {

NativeElement__uType* NativeElement__typeof()
{
    static NativeElement__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NativeElement__uType*)::uAllocClassType(sizeof(NativeElement__uType), "Fuse.Elements.Implementations.NativeElement", ::app::Fuse::Elements::Element__typeof(), 6, 1);
        type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))NativeElement__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))NativeElement__OnUnrooted;
        type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))NativeElement__GetContentSize;
        type->__fp_OnDraw = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::DrawContext*))NativeElement__OnDraw;

        type->__interface_0.__fp_WindowToLocal = (::app::Uno::Float2(*)(void*, ::app::Uno::Float2))::app::Fuse::Node__WindowToLocal;
        type->__interface_0.__fp_get_IsRooted = (bool(*)(void*))::app::Fuse::Node__get_IsRooted;
        type->__interface_0.__fp_get_Window = (::uObject*(*)(void*))::app::Fuse::Node__get_Window;
        type->__interface_1.__fp_ApplyStyle = (void(*)(void*, ::uObject*))::app::Fuse::Node__ApplyStyle_1;
        type->__interface_1.__fp_GetResource = (::uObject*(*)(void*, ::uString*, ::uDelegate*))::app::Fuse::Node__GetResource;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();

        type->InterfaceOffsets[0] = offsetof(NativeElement__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(NativeElement__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(NativeElement__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(NativeElement__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(NativeElement__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(NativeElement__uType, __interface_5);

        type->StrongRefOffsets[0] = offsetof(NativeElement, _platformView);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_platformView";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void NativeElement__OnRooted(NativeElement* __this)
{
    ::app::Fuse::Elements::Element__OnRooted(__this);
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)::app::Fuse::Elements::Implementations::NativeElement__OnFocusGained, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)::app::Fuse::Elements::Implementations::NativeElement__OnFocusLost, __this));
    __this->add_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Elements::Implementations::NativeElement__OnUpdate, __this));
}

void NativeElement__OnUnrooted(NativeElement* __this)
{
    ::app::Fuse::Elements::Element__OnUnrooted(__this);
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)::app::Fuse::Elements::Implementations::NativeElement__OnFocusGained, __this));
    ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)::app::Fuse::Elements::Implementations::NativeElement__OnFocusLost, __this));
    __this->remove_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Elements::Implementations::NativeElement__OnUpdate, __this));
}

void NativeElement__ResetNativeFrame(NativeElement* __this)
{
    ::app::Uno::Float3 translation = ::app::Uno::Matrix__GetTranslation(NULL, __this->WorldTransform());
    ::uPtr< ::app::Uno::Platform2::View*>(__this->_platformView)->Frame(::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__op_Multiply(NULL, ::app::Uno::Float2__New_2(NULL, translation.X, translation.Y), __this->AbsoluteZoom()), ::app::Uno::Float2__op_Multiply(NULL, __this->ActualSize(), __this->AbsoluteZoom())));
}

void NativeElement__OnUpdate(NativeElement* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->ResetNativeFrame();
}

void NativeElement__OnFocusGained(NativeElement* __this, ::uObject* sender, ::app::Fuse::Input::FocusGainedArgs* args)
{
    ::uPtr< ::app::Uno::Platform2::View*>(__this->_platformView)->IsVisible(true);
    __this->InvalidateLayout();
    __this->ResetNativeFrame();
}

void NativeElement__OnFocusLost(NativeElement* __this, ::uObject* sender, ::app::Fuse::Input::FocusLostArgs* args)
{
    ::uPtr< ::app::Uno::Platform2::View*>(__this->_platformView)->IsVisible(false);
    __this->InvalidateLayout();
    __this->InvalidateVisual(12);
}

::app::Uno::Float2 NativeElement__GetContentSize(NativeElement* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    int flags = 0;

    if ((fillSet & 1) == 1)
    {
        flags = flags | 1;
    }

    if ((fillSet & 2) == 2)
    {
        flags = flags | 2;
    }

    return ::app::Uno::Float2__op_Division_1(NULL, ::uPtr< ::app::Uno::Platform2::View*>(__this->_platformView)->GetContentSize(::app::Uno::Float2__op_Multiply(NULL, fillSize, __this->AbsoluteZoom()), flags), __this->AbsoluteZoom());
}

void NativeElement__OnDraw(NativeElement* __this, ::app::Fuse::DrawContext* dc)
{
    return;
}

}}}}
