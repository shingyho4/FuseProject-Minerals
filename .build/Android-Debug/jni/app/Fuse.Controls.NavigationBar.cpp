// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.NavigationBar.h>

namespace app {
namespace Fuse {
namespace Controls {

NavigationBar__uType* NavigationBar__typeof()
{
    static NavigationBar__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NavigationBar__uType*)::uAllocClassType(sizeof(NavigationBar__uType), "Fuse.Controls.NavigationBar", ::app::Fuse::Controls::Panel__typeof(), 9);
        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();
        type->Implements[7] = ::app::Fuse::Navigation::INavigationPanel__typeof();
        type->Implements[8] = ::app::Fuse::Triggers::IAddRemoveChild__typeof();

        type->InterfaceOffsets[0] = offsetof(NavigationBar__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(NavigationBar__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(NavigationBar__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(NavigationBar__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(NavigationBar__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(NavigationBar__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(NavigationBar__uType, __interface_6);
        type->InterfaceOffsets[7] = offsetof(NavigationBar__uType, __interface_7);
        type->InterfaceOffsets[8] = offsetof(NavigationBar__uType, __interface_8);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void NavigationBar___ObjInit_4(NavigationBar* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
}

NavigationBar* NavigationBar__New_2(::uStatic* __this)
{
    NavigationBar* inst = (::app::Fuse::Controls::NavigationBar*)::uAllocObject(sizeof(::app::Fuse::Controls::NavigationBar), ::app::Fuse::Controls::NavigationBar__typeof());
    inst->_ObjInit_4();
    return inst;
}

}}}
