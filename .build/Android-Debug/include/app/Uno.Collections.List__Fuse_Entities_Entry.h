// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ENTITIES_ENTRY_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ENTITIES_ENTRY_H__

#include <app/Fuse.Entities.Entry.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Entities_Entry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Entities_Entry;

struct List__Fuse_Entities_Entry__uType : ::uClassType
{
};

List__Fuse_Entities_Entry__uType* List__Fuse_Entities_Entry__typeof();

int List__Fuse_Entities_Entry__get_Count(List__Fuse_Entities_Entry* __this);
::app::Fuse::Entities::Entry List__Fuse_Entities_Entry__get_Item(List__Fuse_Entities_Entry* __this, int index);
void List__Fuse_Entities_Entry__set_Item(List__Fuse_Entities_Entry* __this, int index, ::app::Fuse::Entities::Entry value);
::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Entry List__Fuse_Entities_Entry__GetEnumerator(List__Fuse_Entities_Entry* __this);
void List__Fuse_Entities_Entry__BoundsCheck(List__Fuse_Entities_Entry* __this, int index);
void List__Fuse_Entities_Entry__EnsureCapacity(List__Fuse_Entities_Entry* __this);
void List__Fuse_Entities_Entry__Add(List__Fuse_Entities_Entry* __this, ::app::Fuse::Entities::Entry item);
void List__Fuse_Entities_Entry___ObjInit(List__Fuse_Entities_Entry* __this);
List__Fuse_Entities_Entry* List__Fuse_Entities_Entry__New_1(::uStatic* __this);

struct List__Fuse_Entities_Entry : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Entry GetEnumerator();
    void BoundsCheck(int index) { List__Fuse_Entities_Entry__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Entities_Entry__EnsureCapacity(this); }
    void Add(::app::Fuse::Entities::Entry item);
    void _ObjInit() { List__Fuse_Entities_Entry___ObjInit(this); }
    int Count() { return List__Fuse_Entities_Entry__get_Count(this); }
    ::app::Fuse::Entities::Entry Item(int index);
    void Item(int index, ::app::Fuse::Entities::Entry value);
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Entities_Entry.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Entities_Entry List__Fuse_Entities_Entry::GetEnumerator() { return List__Fuse_Entities_Entry__GetEnumerator(this); }
inline void List__Fuse_Entities_Entry::Add(::app::Fuse::Entities::Entry item) { List__Fuse_Entities_Entry__Add(this, item); }
inline ::app::Fuse::Entities::Entry List__Fuse_Entities_Entry::Item(int index) { return List__Fuse_Entities_Entry__get_Item(this, index); }
inline void List__Fuse_Entities_Entry::Item(int index, ::app::Fuse::Entities::Entry value) { List__Fuse_Entities_Entry__set_Item(this, index, value); }

}}}


#endif
