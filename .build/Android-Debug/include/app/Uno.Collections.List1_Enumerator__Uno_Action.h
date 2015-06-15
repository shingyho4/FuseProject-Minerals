// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_ACTION_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_ACTION_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Action; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Action;

struct List1_Enumerator__Uno_Action__uType : ::uValueType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

List1_Enumerator__Uno_Action__uType* List1_Enumerator__Uno_Action__typeof();

::uDelegate* List1_Enumerator__Uno_Action__get_Current(List1_Enumerator__Uno_Action* __this);
void List1_Enumerator__Uno_Action__Dispose(List1_Enumerator__Uno_Action* __this);
bool List1_Enumerator__Uno_Action__MoveNext(List1_Enumerator__Uno_Action* __this);
void List1_Enumerator__Uno_Action___ObjInit(List1_Enumerator__Uno_Action* __this, ::app::Uno::Collections::List__Uno_Action* source);
List1_Enumerator__Uno_Action List1_Enumerator__Uno_Action__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Action* source);

struct List1_Enumerator__Uno_Action
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Action*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::uDelegate*> _current;

    void Dispose() { List1_Enumerator__Uno_Action__Dispose(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Action__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::List__Uno_Action* source) { List1_Enumerator__Uno_Action___ObjInit(this, source); }
    ::uDelegate* Current() { return List1_Enumerator__Uno_Action__get_Current(this); }

    List1_Enumerator__Uno_Action& operator =(const List1_Enumerator__Uno_Action& copy)
    {
        ::uCopyValue(this, List1_Enumerator__Uno_Action__typeof(), &copy);
        return *this;
    }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
