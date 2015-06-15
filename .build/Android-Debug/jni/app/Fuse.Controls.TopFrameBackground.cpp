// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.TopFrameBackground.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Uno.EventHandler__Uno_Platform2_SystemUIWillResizeEventArgs.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform2.Display.h>
#include <app/Uno.Platform2.SystemUI.h>
#include <app/Uno.Platform2.SystemUIWillResizeEventArgs.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Controls {

TopFrameBackground__uType* TopFrameBackground__typeof()
{
    static TopFrameBackground__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TopFrameBackground__uType*)::uAllocClassType(sizeof(TopFrameBackground__uType), "Fuse.Controls.TopFrameBackground", ::app::Fuse::Controls::Control__typeof(), 7);
        type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))TopFrameBackground__OnRooted;
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))TopFrameBackground__OnUnrooted;
        type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))TopFrameBackground__GetContentSize;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();

        type->InterfaceOffsets[0] = offsetof(TopFrameBackground__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(TopFrameBackground__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(TopFrameBackground__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(TopFrameBackground__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(TopFrameBackground__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(TopFrameBackground__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(TopFrameBackground__uType, __interface_6);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void TopFrameBackground__OnRooted(TopFrameBackground* __this)
{
    ::app::Fuse::Elements::Element__OnRooted(__this);
    ::app::Uno::Platform2::SystemUI__add_TopFrameWillResize(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform2_SystemUIWillResizeEventArgs__typeof(), (const void*)::app::Fuse::Controls::TopFrameBackground__OnFrameResized, __this));
}

void TopFrameBackground__OnUnrooted(TopFrameBackground* __this)
{
    ::app::Fuse::Elements::Element__OnUnrooted(__this);
    ::app::Uno::Platform2::SystemUI__remove_TopFrameWillResize(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform2_SystemUIWillResizeEventArgs__typeof(), (const void*)::app::Fuse::Controls::TopFrameBackground__OnFrameResized, __this));
}

void TopFrameBackground__OnFrameResized(TopFrameBackground* __this, ::uObject* sender, ::app::Uno::Platform2::SystemUIWillResizeEventArgs* args)
{
    __this->OnAppearanceChanged();
}

::app::Uno::Float2 TopFrameBackground__GetContentSize(TopFrameBackground* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    {
        float density = ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->Density();
        return ::app::Uno::Float2__op_Division(NULL, ::app::Uno::Platform2::SystemUI__get_TopFrame(NULL).Size(), ::app::Uno::Float2__New_2(NULL, density, density));
    }

    return ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
}

void TopFrameBackground___ObjInit_3(TopFrameBackground* __this)
{
    ::app::Fuse::Controls::Control___ObjInit_2(__this);
}

}}}
