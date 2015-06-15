// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__CHAR_H__
#define __APP_UNO_COLLECTIONS_LIST__CHAR_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__char;

struct List__char__uType : ::uClassType
{
};

List__char__uType* List__char__typeof();

::uArray* List__char__ToArray(List__char* __this);
void List__char__EnsureCapacity(List__char* __this);
void List__char__Add(List__char* __this, ::uChar item);
void List__char___ObjInit_1(List__char* __this, int capacity);
List__char* List__char__New_2(::uStatic* __this, int capacity);

struct List__char : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uArray* ToArray() { return List__char__ToArray(this); }
    void EnsureCapacity() { List__char__EnsureCapacity(this); }
    void Add(::uChar item) { List__char__Add(this, item); }
    void _ObjInit_1(int capacity) { List__char___ObjInit_1(this, capacity); }
};

}}}

#include <app/Uno.Char.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
