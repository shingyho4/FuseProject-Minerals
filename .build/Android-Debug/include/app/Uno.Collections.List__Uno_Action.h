// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_ACTION_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_ACTION_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Action; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Action;

struct List__Uno_Action__uType : ::uClassType
{
};

List__Uno_Action__uType* List__Uno_Action__typeof();

int List__Uno_Action__get_Count(List__Uno_Action* __this);
::app::Uno::Collections::List1_Enumerator__Uno_Action List__Uno_Action__GetEnumerator(List__Uno_Action* __this);
void List__Uno_Action__BoundsCheck(List__Uno_Action* __this, int index);
void List__Uno_Action__EnsureCapacity(List__Uno_Action* __this);
void List__Uno_Action__Add(List__Uno_Action* __this, ::uDelegate* item);
bool List__Uno_Action__Remove(List__Uno_Action* __this, ::uDelegate* item);
void List__Uno_Action__RemoveAt(List__Uno_Action* __this, int index);
void List__Uno_Action___ObjInit(List__Uno_Action* __this);
List__Uno_Action* List__Uno_Action__New_1(::uStatic* __this);

struct List__Uno_Action : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::app::Uno::Collections::List1_Enumerator__Uno_Action GetEnumerator();
    void BoundsCheck(int index) { List__Uno_Action__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Uno_Action__EnsureCapacity(this); }
    void Add(::uDelegate* item) { List__Uno_Action__Add(this, item); }
    bool Remove(::uDelegate* item) { return List__Uno_Action__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Action__RemoveAt(this, index); }
    void _ObjInit() { List__Uno_Action___ObjInit(this); }
    int Count() { return List__Uno_Action__get_Count(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Action.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Action List__Uno_Action::GetEnumerator() { return List__Uno_Action__GetEnumerator(this); }

}}}


#endif
