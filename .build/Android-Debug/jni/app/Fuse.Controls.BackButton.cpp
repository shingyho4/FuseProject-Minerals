// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.BackButton.h>

namespace app {
namespace Fuse {
namespace Controls {

BackButton__uType* BackButton__typeof()
{
    static BackButton__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BackButton__uType*)::uAllocClassType(sizeof(BackButton__uType), "Fuse.Controls.BackButton", ::app::Fuse::Controls::Button__typeof(), 9);
        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();
        type->Implements[7] = ::app::Fuse::Navigation::INavigationPanel__typeof();
        type->Implements[8] = ::app::Fuse::Triggers::IAddRemoveChild__typeof();

        type->InterfaceOffsets[0] = offsetof(BackButton__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(BackButton__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(BackButton__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(BackButton__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(BackButton__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(BackButton__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(BackButton__uType, __interface_6);
        type->InterfaceOffsets[7] = offsetof(BackButton__uType, __interface_7);
        type->InterfaceOffsets[8] = offsetof(BackButton__uType, __interface_8);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
