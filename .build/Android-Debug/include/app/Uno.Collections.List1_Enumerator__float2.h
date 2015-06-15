// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FLOAT2_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FLOAT2_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Float2.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__float2; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__float2;

struct List1_Enumerator__float2__uType : ::uValueType
{
    ::app::Uno::Collections::IEnumerator__float2 __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__float2__uType* List1_Enumerator__float2__typeof();

::app::Uno::Float2 List1_Enumerator__float2__get_Current(List1_Enumerator__float2* __this);
void List1_Enumerator__float2__Dispose(List1_Enumerator__float2* __this);
bool List1_Enumerator__float2__MoveNext(List1_Enumerator__float2* __this);
void List1_Enumerator__float2___ObjInit(List1_Enumerator__float2* __this, ::app::Uno::Collections::List__float2* source);
List1_Enumerator__float2 List1_Enumerator__float2__New_1(::uStatic* __this, ::app::Uno::Collections::List__float2* source);

struct List1_Enumerator__float2
{
    ::uStrong< ::app::Uno::Collections::List__float2*> _source;
    int _version;
    int _iterator;
    ::app::Uno::Float2 _current;

    void Dispose() { List1_Enumerator__float2__Dispose(this); }
    bool MoveNext() { return List1_Enumerator__float2__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::List__float2* source) { List1_Enumerator__float2___ObjInit(this, source); }
    ::app::Uno::Float2 Current();

    List1_Enumerator__float2& operator =(const List1_Enumerator__float2& copy)
    {
        ::uCopyValue(this, List1_Enumerator__float2__typeof(), &copy);
        return *this;
    }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Float2 List1_Enumerator__float2::Current() { return List1_Enumerator__float2__get_Current(this); }

}}}


#endif
