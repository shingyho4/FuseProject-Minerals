// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_LAYOUTS_COLUMN_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_LAYOUTS_COLUMN_H__

#include <app/Uno.Collections.ICollection__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Column.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Layouts { struct Column; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Layouts_Column;

struct List__Fuse_Layouts_Column__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Layouts_Column __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Layouts_Column __interface_1;
};

List__Fuse_Layouts_Column__uType* List__Fuse_Layouts_Column__typeof();

int List__Fuse_Layouts_Column__get_Count(List__Fuse_Layouts_Column* __this);
::app::Fuse::Layouts::Column* List__Fuse_Layouts_Column__get_Item(List__Fuse_Layouts_Column* __this, int index);
void List__Fuse_Layouts_Column__set_Item(List__Fuse_Layouts_Column* __this, int index, ::app::Fuse::Layouts::Column* value);
void List__Fuse_Layouts_Column__BoundsCheck(List__Fuse_Layouts_Column* __this, int index);
void List__Fuse_Layouts_Column__EnsureCapacity(List__Fuse_Layouts_Column* __this);
void List__Fuse_Layouts_Column__Add(List__Fuse_Layouts_Column* __this, ::app::Fuse::Layouts::Column* item);
bool List__Fuse_Layouts_Column__Remove(List__Fuse_Layouts_Column* __this, ::app::Fuse::Layouts::Column* item);
void List__Fuse_Layouts_Column__RemoveAt(List__Fuse_Layouts_Column* __this, int index);
void List__Fuse_Layouts_Column___ObjInit(List__Fuse_Layouts_Column* __this);
List__Fuse_Layouts_Column* List__Fuse_Layouts_Column__New_1(::uStatic* __this);

struct List__Fuse_Layouts_Column : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void BoundsCheck(int index) { List__Fuse_Layouts_Column__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Layouts_Column__EnsureCapacity(this); }
    void Add(::app::Fuse::Layouts::Column* item) { List__Fuse_Layouts_Column__Add(this, item); }
    bool Remove(::app::Fuse::Layouts::Column* item) { return List__Fuse_Layouts_Column__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Layouts_Column__RemoveAt(this, index); }
    void _ObjInit() { List__Fuse_Layouts_Column___ObjInit(this); }
    int Count() { return List__Fuse_Layouts_Column__get_Count(this); }
    ::app::Fuse::Layouts::Column* Item(int index) { return List__Fuse_Layouts_Column__get_Item(this, index); }
    void Item(int index, ::app::Fuse::Layouts::Column* value) { List__Fuse_Layouts_Column__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
