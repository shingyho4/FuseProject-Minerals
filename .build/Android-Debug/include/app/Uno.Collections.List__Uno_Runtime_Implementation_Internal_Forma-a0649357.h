// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_RUNTIME_IMPLEMENTATION_INTERNAL_FORMA_A0649357_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_RUNTIME_IMPLEMENTATION_INTERNAL_FORMA_A0649357_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken; } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct FormatStringToken; } } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Runtime_Implementation_Internal_FormatStringToken;

struct List__Uno_Runtime_Implementation_Internal_FormatStringToken__uType : ::uClassType
{
};

List__Uno_Runtime_Implementation_Internal_FormatStringToken__uType* List__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof();

::app::Uno::Collections::List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken List__Uno_Runtime_Implementation_Internal_FormatStringToken__GetEnumerator(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this);
void List__Uno_Runtime_Implementation_Internal_FormatStringToken__EnsureCapacity(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this);
void List__Uno_Runtime_Implementation_Internal_FormatStringToken__Add(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this, ::app::Uno::Runtime::Implementation::Internal::FormatStringToken* item);
void List__Uno_Runtime_Implementation_Internal_FormatStringToken___ObjInit(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this);
List__Uno_Runtime_Implementation_Internal_FormatStringToken* List__Uno_Runtime_Implementation_Internal_FormatStringToken__New_1(::uStatic* __this);

struct List__Uno_Runtime_Implementation_Internal_FormatStringToken : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::app::Uno::Collections::List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken GetEnumerator();
    void EnsureCapacity() { List__Uno_Runtime_Implementation_Internal_FormatStringToken__EnsureCapacity(this); }
    void Add(::app::Uno::Runtime::Implementation::Internal::FormatStringToken* item) { List__Uno_Runtime_Implementation_Internal_FormatStringToken__Add(this, item); }
    void _ObjInit() { List__Uno_Runtime_Implementation_Internal_FormatStringToken___ObjInit(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Runtime_Implementation_In-3ecc4a89.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken List__Uno_Runtime_Implementation_Internal_FormatStringToken::GetEnumerator() { return List__Uno_Runtime_Implementation_Internal_FormatStringToken__GetEnumerator(this); }

}}}


#endif
