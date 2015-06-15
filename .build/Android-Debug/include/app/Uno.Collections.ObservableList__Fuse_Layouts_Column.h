// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_LAYOUTS_COLUMN_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_LAYOUTS_COLUMN_H__

#include <app/Uno.Collections.ICollection__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Column.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Layouts { struct Column; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Layouts_Column; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Layouts_Column;

struct ObservableList__Fuse_Layouts_Column__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Layouts_Column __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Layouts_Column __interface_1;
};

ObservableList__Fuse_Layouts_Column__uType* ObservableList__Fuse_Layouts_Column__typeof();

int ObservableList__Fuse_Layouts_Column__get_Count(ObservableList__Fuse_Layouts_Column* __this);
::app::Fuse::Layouts::Column* ObservableList__Fuse_Layouts_Column__get_Item(ObservableList__Fuse_Layouts_Column* __this, int index);
void ObservableList__Fuse_Layouts_Column__Add(ObservableList__Fuse_Layouts_Column* __this, ::app::Fuse::Layouts::Column* item);
void ObservableList__Fuse_Layouts_Column__RemoveAt(ObservableList__Fuse_Layouts_Column* __this, int index);
bool ObservableList__Fuse_Layouts_Column__Remove(ObservableList__Fuse_Layouts_Column* __this, ::app::Fuse::Layouts::Column* item);
void ObservableList__Fuse_Layouts_Column___ObjInit(ObservableList__Fuse_Layouts_Column* __this, ::uDelegate* added, ::uDelegate* removed);
ObservableList__Fuse_Layouts_Column* ObservableList__Fuse_Layouts_Column__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);

struct ObservableList__Fuse_Layouts_Column : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Layouts_Column*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void Add(::app::Fuse::Layouts::Column* item) { ObservableList__Fuse_Layouts_Column__Add(this, item); }
    void RemoveAt(int index) { ObservableList__Fuse_Layouts_Column__RemoveAt(this, index); }
    bool Remove(::app::Fuse::Layouts::Column* item) { return ObservableList__Fuse_Layouts_Column__Remove(this, item); }
    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Layouts_Column___ObjInit(this, added, removed); }
    int Count() { return ObservableList__Fuse_Layouts_Column__get_Count(this); }
    ::app::Fuse::Layouts::Column* Item(int index) { return ObservableList__Fuse_Layouts_Column__get_Item(this, index); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
