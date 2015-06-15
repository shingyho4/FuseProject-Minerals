// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_EVENT_HANDLER_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_EVENT_HANDLER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_EventHandler;

struct List__Uno_EventHandler__uType : ::uClassType
{
};

List__Uno_EventHandler__uType* List__Uno_EventHandler__typeof();

int List__Uno_EventHandler__get_Count(List__Uno_EventHandler* __this);
::uArray* List__Uno_EventHandler__ToArray(List__Uno_EventHandler* __this);
void List__Uno_EventHandler__BoundsCheck(List__Uno_EventHandler* __this, int index);
void List__Uno_EventHandler__EnsureCapacity(List__Uno_EventHandler* __this);
void List__Uno_EventHandler__Add(List__Uno_EventHandler* __this, ::uDelegate* item);
bool List__Uno_EventHandler__Remove(List__Uno_EventHandler* __this, ::uDelegate* item);
void List__Uno_EventHandler__RemoveAt(List__Uno_EventHandler* __this, int index);
void List__Uno_EventHandler___ObjInit(List__Uno_EventHandler* __this);
List__Uno_EventHandler* List__Uno_EventHandler__New_1(::uStatic* __this);

struct List__Uno_EventHandler : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uArray* ToArray() { return List__Uno_EventHandler__ToArray(this); }
    void BoundsCheck(int index) { List__Uno_EventHandler__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Uno_EventHandler__EnsureCapacity(this); }
    void Add(::uDelegate* item) { List__Uno_EventHandler__Add(this, item); }
    bool Remove(::uDelegate* item) { return List__Uno_EventHandler__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_EventHandler__RemoveAt(this, index); }
    void _ObjInit() { List__Uno_EventHandler___ObjInit(this); }
    int Count() { return List__Uno_EventHandler__get_Count(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
