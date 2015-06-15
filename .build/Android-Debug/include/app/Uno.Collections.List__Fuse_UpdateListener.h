// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_UPDATE_LISTENER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_UPDATE_LISTENER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct UpdateListener; } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_UpdateListener; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_UpdateListener;

struct List__Fuse_UpdateListener__uType : ::uClassType
{
};

List__Fuse_UpdateListener__uType* List__Fuse_UpdateListener__typeof();

int List__Fuse_UpdateListener__get_Count(List__Fuse_UpdateListener* __this);
::app::Fuse::UpdateListener* List__Fuse_UpdateListener__get_Item(List__Fuse_UpdateListener* __this, int index);
void List__Fuse_UpdateListener__set_Item(List__Fuse_UpdateListener* __this, int index, ::app::Fuse::UpdateListener* value);
::app::Uno::Collections::List1_Enumerator__Fuse_UpdateListener List__Fuse_UpdateListener__GetEnumerator(List__Fuse_UpdateListener* __this);
void List__Fuse_UpdateListener__BoundsCheck(List__Fuse_UpdateListener* __this, int index);
void List__Fuse_UpdateListener__EnsureCapacity(List__Fuse_UpdateListener* __this);
void List__Fuse_UpdateListener__Add(List__Fuse_UpdateListener* __this, ::app::Fuse::UpdateListener* item);
void List__Fuse_UpdateListener__RemoveAt(List__Fuse_UpdateListener* __this, int index);
void List__Fuse_UpdateListener__Clear(List__Fuse_UpdateListener* __this);
void List__Fuse_UpdateListener___ObjInit(List__Fuse_UpdateListener* __this);
List__Fuse_UpdateListener* List__Fuse_UpdateListener__New_1(::uStatic* __this);

struct List__Fuse_UpdateListener : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::app::Uno::Collections::List1_Enumerator__Fuse_UpdateListener GetEnumerator();
    void BoundsCheck(int index) { List__Fuse_UpdateListener__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_UpdateListener__EnsureCapacity(this); }
    void Add(::app::Fuse::UpdateListener* item) { List__Fuse_UpdateListener__Add(this, item); }
    void RemoveAt(int index) { List__Fuse_UpdateListener__RemoveAt(this, index); }
    void Clear() { List__Fuse_UpdateListener__Clear(this); }
    void _ObjInit() { List__Fuse_UpdateListener___ObjInit(this); }
    int Count() { return List__Fuse_UpdateListener__get_Count(this); }
    ::app::Fuse::UpdateListener* Item(int index) { return List__Fuse_UpdateListener__get_Item(this, index); }
    void Item(int index, ::app::Fuse::UpdateListener* value) { List__Fuse_UpdateListener__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_UpdateListener.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_UpdateListener List__Fuse_UpdateListener::GetEnumerator() { return List__Fuse_UpdateListener__GetEnumerator(this); }

}}}


#endif
