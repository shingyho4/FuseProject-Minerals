// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.DockPanel.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Layouts.DockLayout.h>
#include <app/Fuse.Layouts.Layout.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Controls {

DockPanel__uType* DockPanel__typeof()
{
    static DockPanel__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DockPanel__uType*)::uAllocClassType(sizeof(DockPanel__uType), "Fuse.Controls.DockPanel", ::app::Fuse::Controls::Panel__typeof(), 9, 1);
        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();
        type->Implements[7] = ::app::Fuse::Navigation::INavigationPanel__typeof();
        type->Implements[8] = ::app::Fuse::Triggers::IAddRemoveChild__typeof();

        type->InterfaceOffsets[0] = offsetof(DockPanel__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(DockPanel__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(DockPanel__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(DockPanel__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(DockPanel__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(DockPanel__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(DockPanel__uType, __interface_6);
        type->InterfaceOffsets[7] = offsetof(DockPanel__uType, __interface_7);
        type->InterfaceOffsets[8] = offsetof(DockPanel__uType, __interface_8);

        type->StrongRefOffsets[0] = offsetof(DockPanel, _dockLayout);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_dockLayout";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void DockPanel__SetDock(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int dock)
{
    ::app::Fuse::Layouts::DockLayout__SetDock(NULL, elm, dock);
}

void DockPanel___ObjInit_4(DockPanel* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    __this->Layout((::app::Fuse::Layouts::Layout*)(__this->_dockLayout = ::app::Fuse::Layouts::DockLayout__New_1(NULL)));
}

DockPanel* DockPanel__New_2(::uStatic* __this)
{
    DockPanel* inst = (::app::Fuse::Controls::DockPanel*)::uAllocObject(sizeof(::app::Fuse::Controls::DockPanel), ::app::Fuse::Controls::DockPanel__typeof());
    inst->_ObjInit_4();
    return inst;
}

}}}
