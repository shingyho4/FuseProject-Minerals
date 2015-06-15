// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_BYTE_H__
#define __APP_UNO_BYTE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct Byte__uType : ::uValueType
{
};

Byte__uType* Byte__typeof();

bool Byte__Equals(::uByte* __this, ::uObject* o);
int Byte__GetHashCode(::uByte* __this);
::uString* Byte__ToString(::uByte* __this);

struct Byte
{
    static bool Equals(::uByte __this, ::uObject* o) { return Byte__Equals(&__this, o); }
    static int GetHashCode(::uByte __this) { return Byte__GetHashCode(&__this); }
    static ::uString* ToString(::uByte __this) { return Byte__ToString(&__this); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {

}}


#endif
