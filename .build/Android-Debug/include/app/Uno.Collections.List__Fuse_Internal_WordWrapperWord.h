// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_INTERNAL_WORD_WRAPPER_WORD_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_INTERNAL_WORD_WRAPPER_WORD_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct WordWrapperWord; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Internal_WordWrapperWord;

struct List__Fuse_Internal_WordWrapperWord__uType : ::uClassType
{
};

List__Fuse_Internal_WordWrapperWord__uType* List__Fuse_Internal_WordWrapperWord__typeof();

int List__Fuse_Internal_WordWrapperWord__get_Count(List__Fuse_Internal_WordWrapperWord* __this);
::app::Fuse::Internal::WordWrapperWord* List__Fuse_Internal_WordWrapperWord__get_Item(List__Fuse_Internal_WordWrapperWord* __this, int index);
void List__Fuse_Internal_WordWrapperWord__set_Item(List__Fuse_Internal_WordWrapperWord* __this, int index, ::app::Fuse::Internal::WordWrapperWord* value);
void List__Fuse_Internal_WordWrapperWord__BoundsCheck(List__Fuse_Internal_WordWrapperWord* __this, int index);
void List__Fuse_Internal_WordWrapperWord__EnsureCapacity(List__Fuse_Internal_WordWrapperWord* __this);
void List__Fuse_Internal_WordWrapperWord__Add(List__Fuse_Internal_WordWrapperWord* __this, ::app::Fuse::Internal::WordWrapperWord* item);
void List__Fuse_Internal_WordWrapperWord___ObjInit(List__Fuse_Internal_WordWrapperWord* __this);
List__Fuse_Internal_WordWrapperWord* List__Fuse_Internal_WordWrapperWord__New_1(::uStatic* __this);

struct List__Fuse_Internal_WordWrapperWord : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void BoundsCheck(int index) { List__Fuse_Internal_WordWrapperWord__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Internal_WordWrapperWord__EnsureCapacity(this); }
    void Add(::app::Fuse::Internal::WordWrapperWord* item) { List__Fuse_Internal_WordWrapperWord__Add(this, item); }
    void _ObjInit() { List__Fuse_Internal_WordWrapperWord___ObjInit(this); }
    int Count() { return List__Fuse_Internal_WordWrapperWord__get_Count(this); }
    ::app::Fuse::Internal::WordWrapperWord* Item(int index) { return List__Fuse_Internal_WordWrapperWord__get_Item(this, index); }
    void Item(int index, ::app::Fuse::Internal::WordWrapperWord* value) { List__Fuse_Internal_WordWrapperWord__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
