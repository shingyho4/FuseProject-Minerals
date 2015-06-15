// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRID_H__
#define __APP_FUSE_CONTROLS_GRID_H__

#include <app/Fuse.Controls.Internal.ICollectionParent.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemoveChild.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Layouts { struct GridLayout; } } }

namespace app {
namespace Fuse {
namespace Controls {

struct Grid;

struct Grid__uType : ::app::Fuse::Controls::Panel__uType
{
};

Grid__uType* Grid__typeof();

int Grid__get_RowCount(Grid* __this);
void Grid__set_RowCount(Grid* __this, int value);
int Grid__get_ColumnCount(Grid* __this);
void Grid__set_ColumnCount(Grid* __this, int value);
void Grid__SetRow(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int row);
void Grid___ObjInit_4(Grid* __this);
Grid* Grid__New_2(::uStatic* __this);

struct Grid : ::app::Fuse::Controls::Panel
{
    ::uStrong< ::app::Fuse::Layouts::GridLayout*> _gridLayout;

    void _ObjInit_4() { Grid___ObjInit_4(this); }
    int RowCount() { return Grid__get_RowCount(this); }
    void RowCount(int value) { Grid__set_RowCount(this, value); }
    int ColumnCount() { return Grid__get_ColumnCount(this); }
    void ColumnCount(int value) { Grid__set_ColumnCount(this, value); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Controls {

}}}


#endif
