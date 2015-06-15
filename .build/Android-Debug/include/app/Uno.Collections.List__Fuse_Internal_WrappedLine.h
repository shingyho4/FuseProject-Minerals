// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_INTERNAL_WRAPPED_LINE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_INTERNAL_WRAPPED_LINE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct WrappedLine; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Internal_WrappedLine;

struct List__Fuse_Internal_WrappedLine__uType : ::uClassType
{
};

List__Fuse_Internal_WrappedLine__uType* List__Fuse_Internal_WrappedLine__typeof();

int List__Fuse_Internal_WrappedLine__get_Count(List__Fuse_Internal_WrappedLine* __this);
::uArray* List__Fuse_Internal_WrappedLine__ToArray(List__Fuse_Internal_WrappedLine* __this);
void List__Fuse_Internal_WrappedLine__EnsureCapacity(List__Fuse_Internal_WrappedLine* __this);
void List__Fuse_Internal_WrappedLine__Add(List__Fuse_Internal_WrappedLine* __this, ::app::Fuse::Internal::WrappedLine* item);
void List__Fuse_Internal_WrappedLine___ObjInit(List__Fuse_Internal_WrappedLine* __this);
List__Fuse_Internal_WrappedLine* List__Fuse_Internal_WrappedLine__New_1(::uStatic* __this);

struct List__Fuse_Internal_WrappedLine : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uArray* ToArray() { return List__Fuse_Internal_WrappedLine__ToArray(this); }
    void EnsureCapacity() { List__Fuse_Internal_WrappedLine__EnsureCapacity(this); }
    void Add(::app::Fuse::Internal::WrappedLine* item) { List__Fuse_Internal_WrappedLine__Add(this, item); }
    void _ObjInit() { List__Fuse_Internal_WrappedLine___ObjInit(this); }
    int Count() { return List__Fuse_Internal_WrappedLine__get_Count(this); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
