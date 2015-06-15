// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.Grid.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Layouts.GridLayout.h>
#include <app/Fuse.Layouts.Layout.h>

namespace app {
namespace Fuse {
namespace Controls {

Grid__uType* Grid__typeof()
{
    static Grid__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Grid__uType*)::uAllocClassType(sizeof(Grid__uType), "Fuse.Controls.Grid", ::app::Fuse::Controls::Panel__typeof(), 9, 1);
        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();
        type->Implements[7] = ::app::Fuse::Navigation::INavigationPanel__typeof();
        type->Implements[8] = ::app::Fuse::Triggers::IAddRemoveChild__typeof();

        type->InterfaceOffsets[0] = offsetof(Grid__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Grid__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Grid__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(Grid__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(Grid__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(Grid__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(Grid__uType, __interface_6);
        type->InterfaceOffsets[7] = offsetof(Grid__uType, __interface_7);
        type->InterfaceOffsets[8] = offsetof(Grid__uType, __interface_8);

        type->StrongRefOffsets[0] = offsetof(Grid, _gridLayout);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_gridLayout";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int Grid__get_RowCount(Grid* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->RowCount();
}

void Grid__set_RowCount(Grid* __this, int value)
{
    ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->RowCount(value);
}

int Grid__get_ColumnCount(Grid* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->ColumnCount();
}

void Grid__set_ColumnCount(Grid* __this, int value)
{
    ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->ColumnCount(value);
}

void Grid__SetRow(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int row)
{
    ::app::Fuse::Layouts::GridLayout__SetRow(NULL, elm, row);
}

void Grid___ObjInit_4(Grid* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    __this->Layout((::app::Fuse::Layouts::Layout*)(__this->_gridLayout = ::app::Fuse::Layouts::GridLayout__New_1(NULL)));
}

Grid* Grid__New_2(::uStatic* __this)
{
    Grid* inst = (::app::Fuse::Controls::Grid*)::uAllocObject(sizeof(::app::Fuse::Controls::Grid), ::app::Fuse::Controls::Grid__typeof());
    inst->_ObjInit_4();
    return inst;
}

}}}
