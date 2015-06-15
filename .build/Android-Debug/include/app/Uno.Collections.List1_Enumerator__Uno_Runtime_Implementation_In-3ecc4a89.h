// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_RUNTIME_IMPLEMENTATION_IN_3ECC4A89_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_RUNTIME_IMPLEMENTATION_IN_3ECC4A89_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Runtime_Implementation_Internal_FormatStringToken; } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct FormatStringToken; } } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken;

struct List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__uType : ::uValueType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__uType* List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof();

::app::Uno::Runtime::Implementation::Internal::FormatStringToken* List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__get_Current(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken* __this);
void List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__Dispose(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken* __this);
bool List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__MoveNext(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken* __this);
void List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken___ObjInit(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken* __this, ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* source);
List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* source);

struct List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::Runtime::Implementation::Internal::FormatStringToken*> _current;

    void Dispose() { List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__Dispose(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* source) { List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken___ObjInit(this, source); }
    ::app::Uno::Runtime::Implementation::Internal::FormatStringToken* Current() { return List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__get_Current(this); }

    List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken& operator =(const List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken& copy)
    {
        ::uCopyValue(this, List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof(), &copy);
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
