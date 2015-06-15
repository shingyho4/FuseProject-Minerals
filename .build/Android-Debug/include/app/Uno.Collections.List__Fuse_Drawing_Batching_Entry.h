// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_BATCHING_ENTRY_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_BATCHING_ENTRY_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct Entry; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Drawing_Batching_Entry;

struct List__Fuse_Drawing_Batching_Entry__uType : ::uClassType
{
};

List__Fuse_Drawing_Batching_Entry__uType* List__Fuse_Drawing_Batching_Entry__typeof();

int List__Fuse_Drawing_Batching_Entry__get_Count(List__Fuse_Drawing_Batching_Entry* __this);
::app::Fuse::Drawing::Batching::Entry* List__Fuse_Drawing_Batching_Entry__get_Item(List__Fuse_Drawing_Batching_Entry* __this, int index);
void List__Fuse_Drawing_Batching_Entry__set_Item(List__Fuse_Drawing_Batching_Entry* __this, int index, ::app::Fuse::Drawing::Batching::Entry* value);
void List__Fuse_Drawing_Batching_Entry__BoundsCheck(List__Fuse_Drawing_Batching_Entry* __this, int index);
void List__Fuse_Drawing_Batching_Entry__EnsureCapacity(List__Fuse_Drawing_Batching_Entry* __this);
void List__Fuse_Drawing_Batching_Entry__Add(List__Fuse_Drawing_Batching_Entry* __this, ::app::Fuse::Drawing::Batching::Entry* item);
void List__Fuse_Drawing_Batching_Entry___ObjInit(List__Fuse_Drawing_Batching_Entry* __this);
List__Fuse_Drawing_Batching_Entry* List__Fuse_Drawing_Batching_Entry__New_1(::uStatic* __this);

struct List__Fuse_Drawing_Batching_Entry : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void BoundsCheck(int index) { List__Fuse_Drawing_Batching_Entry__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Drawing_Batching_Entry__EnsureCapacity(this); }
    void Add(::app::Fuse::Drawing::Batching::Entry* item) { List__Fuse_Drawing_Batching_Entry__Add(this, item); }
    void _ObjInit() { List__Fuse_Drawing_Batching_Entry___ObjInit(this); }
    int Count() { return List__Fuse_Drawing_Batching_Entry__get_Count(this); }
    ::app::Fuse::Drawing::Batching::Entry* Item(int index) { return List__Fuse_Drawing_Batching_Entry__get_Item(this, index); }
    void Item(int index, ::app::Fuse::Drawing::Batching::Entry* value) { List__Fuse_Drawing_Batching_Entry__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
