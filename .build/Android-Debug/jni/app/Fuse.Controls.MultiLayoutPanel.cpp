// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.MultiLayoutPanel.h>
#include <app/Fuse.Controls.Placeholder.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Controls {

MultiLayoutPanel__uType* MultiLayoutPanel__typeof()
{
    static MultiLayoutPanel__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MultiLayoutPanel__uType*)::uAllocClassType(sizeof(MultiLayoutPanel__uType), "Fuse.Controls.MultiLayoutPanel", ::app::Fuse::Controls::Panel__typeof(), 9);
        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();
        type->Implements[7] = ::app::Fuse::Navigation::INavigationPanel__typeof();
        type->Implements[8] = ::app::Fuse::Triggers::IAddRemoveChild__typeof();

        type->InterfaceOffsets[0] = offsetof(MultiLayoutPanel__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(MultiLayoutPanel__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(MultiLayoutPanel__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(MultiLayoutPanel__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(MultiLayoutPanel__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(MultiLayoutPanel__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(MultiLayoutPanel__uType, __interface_6);
        type->InterfaceOffsets[7] = offsetof(MultiLayoutPanel__uType, __interface_7);
        type->InterfaceOffsets[8] = offsetof(MultiLayoutPanel__uType, __interface_8);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void MultiLayoutPanel__ChangeLayout(MultiLayoutPanel* __this, ::app::Fuse::Elements::Element* layoutRoot)
{
    if (::uIs(layoutRoot, MultiLayoutPanel__typeof()))
    {
        return;
    }

    if (::uIs(layoutRoot, ::app::Fuse::Controls::Placeholder__typeof()))
    {
        ::uPtr< ::app::Fuse::Controls::Placeholder*>(::uCast< ::app::Fuse::Controls::Placeholder*>(layoutRoot, ::app::Fuse::Controls::Placeholder__typeof()))->AcquireTarget();
    }

    for (int i = 0; i < ::uPtr< ::app::Fuse::Elements::Element*>(layoutRoot)->SubElementCount(); i++)
    {
        __this->ChangeLayout(::uPtr< ::app::Fuse::Elements::Element*>(layoutRoot)->GetSubElement(i));
    }
}

}}}
