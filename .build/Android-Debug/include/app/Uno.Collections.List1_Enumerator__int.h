// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__INT_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__INT_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__int; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__int;

struct List1_Enumerator__int__uType : ::uValueType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

List1_Enumerator__int__uType* List1_Enumerator__int__typeof();

int List1_Enumerator__int__get_Current(List1_Enumerator__int* __this);
void List1_Enumerator__int__Dispose(List1_Enumerator__int* __this);
bool List1_Enumerator__int__MoveNext(List1_Enumerator__int* __this);
void List1_Enumerator__int___ObjInit(List1_Enumerator__int* __this, ::app::Uno::Collections::List__int* source);
List1_Enumerator__int List1_Enumerator__int__New_1(::uStatic* __this, ::app::Uno::Collections::List__int* source);

struct List1_Enumerator__int
{
    ::uStrong< ::app::Uno::Collections::List__int*> _source;
    int _version;
    int _iterator;
    int _current;

    void Dispose() { List1_Enumerator__int__Dispose(this); }
    bool MoveNext() { return List1_Enumerator__int__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::List__int* source) { List1_Enumerator__int___ObjInit(this, source); }
    int Current() { return List1_Enumerator__int__get_Current(this); }

    List1_Enumerator__int& operator =(const List1_Enumerator__int& copy)
    {
        ::uCopyValue(this, List1_Enumerator__int__typeof(), &copy);
        return *this;
    }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
