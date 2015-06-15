// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_RESOURCES_I_AUTO_DISPOSABLE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_RESOURCES_I_AUTO_DISPOSABLE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Resources_IAutoDisposable;

struct List__Fuse_Resources_IAutoDisposable__uType : ::uClassType
{
};

List__Fuse_Resources_IAutoDisposable__uType* List__Fuse_Resources_IAutoDisposable__typeof();

int List__Fuse_Resources_IAutoDisposable__get_Count(List__Fuse_Resources_IAutoDisposable* __this);
::uObject* List__Fuse_Resources_IAutoDisposable__get_Item(List__Fuse_Resources_IAutoDisposable* __this, int index);
void List__Fuse_Resources_IAutoDisposable__set_Item(List__Fuse_Resources_IAutoDisposable* __this, int index, ::uObject* value);
void List__Fuse_Resources_IAutoDisposable__BoundsCheck(List__Fuse_Resources_IAutoDisposable* __this, int index);
void List__Fuse_Resources_IAutoDisposable__EnsureCapacity(List__Fuse_Resources_IAutoDisposable* __this);
void List__Fuse_Resources_IAutoDisposable__Add(List__Fuse_Resources_IAutoDisposable* __this, ::uObject* item);
bool List__Fuse_Resources_IAutoDisposable__Remove(List__Fuse_Resources_IAutoDisposable* __this, ::uObject* item);
void List__Fuse_Resources_IAutoDisposable__RemoveAt(List__Fuse_Resources_IAutoDisposable* __this, int index);
void List__Fuse_Resources_IAutoDisposable___ObjInit(List__Fuse_Resources_IAutoDisposable* __this);
List__Fuse_Resources_IAutoDisposable* List__Fuse_Resources_IAutoDisposable__New_1(::uStatic* __this);

struct List__Fuse_Resources_IAutoDisposable : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void BoundsCheck(int index) { List__Fuse_Resources_IAutoDisposable__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Resources_IAutoDisposable__EnsureCapacity(this); }
    void Add(::uObject* item) { List__Fuse_Resources_IAutoDisposable__Add(this, item); }
    bool Remove(::uObject* item) { return List__Fuse_Resources_IAutoDisposable__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Resources_IAutoDisposable__RemoveAt(this, index); }
    void _ObjInit() { List__Fuse_Resources_IAutoDisposable___ObjInit(this); }
    int Count() { return List__Fuse_Resources_IAutoDisposable__get_Count(this); }
    ::uObject* Item(int index) { return List__Fuse_Resources_IAutoDisposable__get_Item(this, index); }
    void Item(int index, ::uObject* value) { List__Fuse_Resources_IAutoDisposable__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
