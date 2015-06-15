// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.StatusBarBackground.h>

namespace app {
namespace Fuse {
namespace Controls {

StatusBarBackground__uType* StatusBarBackground__typeof()
{
    static StatusBarBackground__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (StatusBarBackground__uType*)::uAllocClassType(sizeof(StatusBarBackground__uType), "Fuse.Controls.StatusBarBackground", ::app::Fuse::Controls::TopFrameBackground__typeof(), 7);
        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();

        type->InterfaceOffsets[0] = offsetof(StatusBarBackground__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(StatusBarBackground__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(StatusBarBackground__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(StatusBarBackground__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(StatusBarBackground__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(StatusBarBackground__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(StatusBarBackground__uType, __interface_6);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void StatusBarBackground___ObjInit_4(StatusBarBackground* __this)
{
    ::app::Fuse::Controls::TopFrameBackground___ObjInit_3(__this);
}

StatusBarBackground* StatusBarBackground__New_2(::uStatic* __this)
{
    StatusBarBackground* inst = (::app::Fuse::Controls::StatusBarBackground*)::uAllocObject(sizeof(::app::Fuse::Controls::StatusBarBackground), ::app::Fuse::Controls::StatusBarBackground__typeof());
    inst->_ObjInit_4();
    return inst;
}

}}}
