// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_LAYOUTS_ROW_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_LAYOUTS_ROW_H__

#include <app/Uno.Collections.ICollection__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Row.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Layouts { struct Row; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Layouts_Row;

struct List__Fuse_Layouts_Row__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Layouts_Row __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Layouts_Row __interface_1;
};

List__Fuse_Layouts_Row__uType* List__Fuse_Layouts_Row__typeof();

int List__Fuse_Layouts_Row__get_Count(List__Fuse_Layouts_Row* __this);
::app::Fuse::Layouts::Row* List__Fuse_Layouts_Row__get_Item(List__Fuse_Layouts_Row* __this, int index);
void List__Fuse_Layouts_Row__set_Item(List__Fuse_Layouts_Row* __this, int index, ::app::Fuse::Layouts::Row* value);
void List__Fuse_Layouts_Row__BoundsCheck(List__Fuse_Layouts_Row* __this, int index);
void List__Fuse_Layouts_Row__EnsureCapacity(List__Fuse_Layouts_Row* __this);
void List__Fuse_Layouts_Row__Add(List__Fuse_Layouts_Row* __this, ::app::Fuse::Layouts::Row* item);
bool List__Fuse_Layouts_Row__Remove(List__Fuse_Layouts_Row* __this, ::app::Fuse::Layouts::Row* item);
void List__Fuse_Layouts_Row__RemoveAt(List__Fuse_Layouts_Row* __this, int index);
void List__Fuse_Layouts_Row___ObjInit(List__Fuse_Layouts_Row* __this);
List__Fuse_Layouts_Row* List__Fuse_Layouts_Row__New_1(::uStatic* __this);

struct List__Fuse_Layouts_Row : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void BoundsCheck(int index) { List__Fuse_Layouts_Row__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Layouts_Row__EnsureCapacity(this); }
    void Add(::app::Fuse::Layouts::Row* item) { List__Fuse_Layouts_Row__Add(this, item); }
    bool Remove(::app::Fuse::Layouts::Row* item) { return List__Fuse_Layouts_Row__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Layouts_Row__RemoveAt(this, index); }
    void _ObjInit() { List__Fuse_Layouts_Row___ObjInit(this); }
    int Count() { return List__Fuse_Layouts_Row__get_Count(this); }
    ::app::Fuse::Layouts::Row* Item(int index) { return List__Fuse_Layouts_Row__get_Item(this, index); }
    void Item(int index, ::app::Fuse::Layouts::Row* value) { List__Fuse_Layouts_Row__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
