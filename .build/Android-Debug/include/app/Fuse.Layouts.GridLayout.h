// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAYOUTS_GRID_LAYOUT_H__
#define __APP_FUSE_LAYOUTS_GRID_LAYOUT_H__

#include <app/Fuse.Layouts.Layout.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Layouts { struct Column; } } }
namespace app { namespace Fuse { namespace Layouts { struct Row; } } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Layouts_Column; } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Layouts_Row; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Layouts {

struct GridLayout;

extern ::uStaticStrong< ::app::Fuse::Layouts::Row*> GridLayout___staticDefaultRow;
extern ::uStaticStrong< ::app::Fuse::Layouts::Column*> GridLayout___staticDefaultColumn;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___rowProperty;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___actualRowProperty;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___rowSpanProperty;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___columnProperty;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___actualColumnProperty;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___columnSpanProperty;

struct GridLayout__uType : ::app::Fuse::Layouts::Layout__uType
{
};

GridLayout__uType* GridLayout__typeof();

::uObject* GridLayout__get_Rows(GridLayout* __this);
int GridLayout__get_RowCount(GridLayout* __this);
void GridLayout__set_RowCount(GridLayout* __this, int value);
::uObject* GridLayout__get_Columns(GridLayout* __this);
int GridLayout__get_ColumnCount(GridLayout* __this);
void GridLayout__set_ColumnCount(GridLayout* __this, int value);
::app::Fuse::Layouts::Row* GridLayout__GenDefaultRow(GridLayout* __this);
::app::Fuse::Layouts::Column* GridLayout__GenDefaultColumn(GridLayout* __this);
::app::Fuse::Layouts::Column* GridLayout__GetColumnData(GridLayout* __this, int column);
::app::Fuse::Layouts::Row* GridLayout__GetRowData(GridLayout* __this, int row);
void GridLayout__SetRow(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int row);
int GridLayout__GetActualRow(GridLayout* __this, ::app::Fuse::Elements::Element* elm, int index);
int GridLayout__GetRowSpan(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
int GridLayout__GetColumn(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
void GridLayout__GetActualPositions(GridLayout* __this, ::uObject* elements);
int GridLayout__GetActualColumn(GridLayout* __this, ::app::Fuse::Elements::Element* elm, int index);
int GridLayout__GetColumnSpan(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
void GridLayout__Changed(GridLayout* __this);
void GridLayout__RowAdded(GridLayout* __this, ::app::Fuse::Layouts::Row* r);
void GridLayout__RowRemoved(GridLayout* __this, ::app::Fuse::Layouts::Row* r);
void GridLayout__ColumnAdded(GridLayout* __this, ::app::Fuse::Layouts::Column* c);
void GridLayout__ColumnRemoved(GridLayout* __this, ::app::Fuse::Layouts::Column* c);
void GridLayout__AddSubscriber(GridLayout* __this, ::app::Fuse::Elements::Element* element);
void GridLayout__RemoveSubscriber(GridLayout* __this, ::app::Fuse::Elements::Element* element);
::app::Uno::Float2 GridLayout__GetContentSize(GridLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Float2 GridLayout__Measure(GridLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
void GridLayout__ArrangePaddingBox(GridLayout* __this, ::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize);
void GridLayout___TypeInit(::uStatic* __this);
void GridLayout___ObjInit_1(GridLayout* __this);
GridLayout* GridLayout__New_1(::uStatic* __this);

struct GridLayout : ::app::Fuse::Layouts::Layout
{
    ::uStrong< ::app::Fuse::Layouts::Row*> _defaultRow;
    ::uStrong< ::app::Fuse::Layouts::Column*> _defaultColumn;
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*> _rows;
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*> _columns;
    ::uStrong< ::app::Fuse::Elements::Element*> _subscriber;

    ::app::Fuse::Layouts::Row* GenDefaultRow() { return GridLayout__GenDefaultRow(this); }
    ::app::Fuse::Layouts::Column* GenDefaultColumn() { return GridLayout__GenDefaultColumn(this); }
    ::app::Fuse::Layouts::Column* GetColumnData(int column) { return GridLayout__GetColumnData(this, column); }
    ::app::Fuse::Layouts::Row* GetRowData(int row) { return GridLayout__GetRowData(this, row); }
    int GetActualRow(::app::Fuse::Elements::Element* elm, int index) { return GridLayout__GetActualRow(this, elm, index); }
    void GetActualPositions(::uObject* elements) { GridLayout__GetActualPositions(this, elements); }
    int GetActualColumn(::app::Fuse::Elements::Element* elm, int index) { return GridLayout__GetActualColumn(this, elm, index); }
    void Changed() { GridLayout__Changed(this); }
    void RowAdded(::app::Fuse::Layouts::Row* r) { GridLayout__RowAdded(this, r); }
    void RowRemoved(::app::Fuse::Layouts::Row* r) { GridLayout__RowRemoved(this, r); }
    void ColumnAdded(::app::Fuse::Layouts::Column* c) { GridLayout__ColumnAdded(this, c); }
    void ColumnRemoved(::app::Fuse::Layouts::Column* c) { GridLayout__ColumnRemoved(this, c); }
    ::app::Uno::Float2 Measure(::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
    void _ObjInit_1() { GridLayout___ObjInit_1(this); }
    ::uObject* Rows() { return GridLayout__get_Rows(this); }
    int RowCount() { return GridLayout__get_RowCount(this); }
    void RowCount(int value) { GridLayout__set_RowCount(this, value); }
    ::uObject* Columns() { return GridLayout__get_Columns(this); }
    int ColumnCount() { return GridLayout__get_ColumnCount(this); }
    void ColumnCount(int value) { GridLayout__set_ColumnCount(this, value); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Layouts {

inline ::app::Uno::Float2 GridLayout::Measure(::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet) { return GridLayout__Measure(this, elements, fillSize, fillSet); }

}}}


#endif
