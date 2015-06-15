// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.StackPanel.h>
#include <app/Fuse.Layouts.Layout.h>
#include <app/Fuse.Layouts.StackLayout.h>

namespace app {
namespace Fuse {
namespace Controls {

StackPanel__uType* StackPanel__typeof()
{
    static StackPanel__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (StackPanel__uType*)::uAllocClassType(sizeof(StackPanel__uType), "Fuse.Controls.StackPanel", ::app::Fuse::Controls::Panel__typeof(), 9, 1);
        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();
        type->Implements[7] = ::app::Fuse::Navigation::INavigationPanel__typeof();
        type->Implements[8] = ::app::Fuse::Triggers::IAddRemoveChild__typeof();

        type->InterfaceOffsets[0] = offsetof(StackPanel__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(StackPanel__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(StackPanel__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(StackPanel__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(StackPanel__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(StackPanel__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(StackPanel__uType, __interface_6);
        type->InterfaceOffsets[7] = offsetof(StackPanel__uType, __interface_7);
        type->InterfaceOffsets[8] = offsetof(StackPanel__uType, __interface_8);

        type->StrongRefOffsets[0] = offsetof(StackPanel, _stackLayout);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_stackLayout";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void StackPanel___ObjInit_4(StackPanel* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    __this->Layout((::app::Fuse::Layouts::Layout*)(__this->_stackLayout = ::app::Fuse::Layouts::StackLayout__New_1(NULL)));
}

StackPanel* StackPanel__New_2(::uStatic* __this)
{
    StackPanel* inst = (::app::Fuse::Controls::StackPanel*)::uAllocObject(sizeof(::app::Fuse::Controls::StackPanel), ::app::Fuse::Controls::StackPanel__typeof());
    inst->_ObjInit_4();
    return inst;
}

}}}
