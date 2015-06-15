// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_INTERNAL_LINE_CACHE_LINE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_INTERNAL_LINE_CACHE_LINE_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Internal_LineCacheLine.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct LineCacheLine; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Internal_LineCacheLine; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Internal_LineCacheLine;

struct List__Fuse_Internal_LineCacheLine__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Internal_LineCacheLine __interface_0;
};

List__Fuse_Internal_LineCacheLine__uType* List__Fuse_Internal_LineCacheLine__typeof();

int List__Fuse_Internal_LineCacheLine__get_Count(List__Fuse_Internal_LineCacheLine* __this);
::app::Fuse::Internal::LineCacheLine* List__Fuse_Internal_LineCacheLine__get_Item(List__Fuse_Internal_LineCacheLine* __this, int index);
void List__Fuse_Internal_LineCacheLine__set_Item(List__Fuse_Internal_LineCacheLine* __this, int index, ::app::Fuse::Internal::LineCacheLine* value);
::app::Uno::Collections::List1_Enumerator__Fuse_Internal_LineCacheLine List__Fuse_Internal_LineCacheLine__GetEnumerator(List__Fuse_Internal_LineCacheLine* __this);
void List__Fuse_Internal_LineCacheLine__BoundsCheck(List__Fuse_Internal_LineCacheLine* __this, int index);
void List__Fuse_Internal_LineCacheLine__EnsureCapacity(List__Fuse_Internal_LineCacheLine* __this);
void List__Fuse_Internal_LineCacheLine__Add(List__Fuse_Internal_LineCacheLine* __this, ::app::Fuse::Internal::LineCacheLine* item);
void List__Fuse_Internal_LineCacheLine___ObjInit(List__Fuse_Internal_LineCacheLine* __this);
List__Fuse_Internal_LineCacheLine* List__Fuse_Internal_LineCacheLine__New_1(::uStatic* __this);
::uObject* List__Fuse_Internal_LineCacheLine__GetEnumerator_boxed(List__Fuse_Internal_LineCacheLine* __this);

struct List__Fuse_Internal_LineCacheLine : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::app::Uno::Collections::List1_Enumerator__Fuse_Internal_LineCacheLine GetEnumerator();
    void BoundsCheck(int index) { List__Fuse_Internal_LineCacheLine__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Internal_LineCacheLine__EnsureCapacity(this); }
    void Add(::app::Fuse::Internal::LineCacheLine* item) { List__Fuse_Internal_LineCacheLine__Add(this, item); }
    void _ObjInit() { List__Fuse_Internal_LineCacheLine___ObjInit(this); }
    ::uObject* GetEnumerator_boxed() { return List__Fuse_Internal_LineCacheLine__GetEnumerator_boxed(this); }
    int Count() { return List__Fuse_Internal_LineCacheLine__get_Count(this); }
    ::app::Fuse::Internal::LineCacheLine* Item(int index) { return List__Fuse_Internal_LineCacheLine__get_Item(this, index); }
    void Item(int index, ::app::Fuse::Internal::LineCacheLine* value) { List__Fuse_Internal_LineCacheLine__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Internal_LineCacheLine.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Internal_LineCacheLine List__Fuse_Internal_LineCacheLine::GetEnumerator() { return List__Fuse_Internal_LineCacheLine__GetEnumerator(this); }

}}}


#endif
