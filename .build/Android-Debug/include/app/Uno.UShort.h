// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_SHORT_H__
#define __APP_UNO_U_SHORT_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct UShort__uType : ::uValueType
{
};

UShort__uType* UShort__typeof();

bool UShort__Equals(::uUShort* __this, ::uObject* o);
int UShort__GetHashCode(::uUShort* __this);
::uString* UShort__ToString(::uUShort* __this);

struct UShort
{
    static bool Equals(::uUShort __this, ::uObject* o) { return UShort__Equals(&__this, o); }
    static int GetHashCode(::uUShort __this) { return UShort__GetHashCode(&__this); }
    static ::uString* ToString(::uUShort __this) { return UShort__ToString(&__this); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {

}}


#endif
