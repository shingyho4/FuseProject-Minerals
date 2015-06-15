// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_SHORT_H__
#define __APP_UNO_SHORT_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct Short__uType : ::uValueType
{
};

Short__uType* Short__typeof();

bool Short__Equals(::uShort* __this, ::uObject* o);
int Short__GetHashCode(::uShort* __this);
::uString* Short__ToString(::uShort* __this);

struct Short
{
    static bool Equals(::uShort __this, ::uObject* o) { return Short__Equals(&__this, o); }
    static int GetHashCode(::uShort __this) { return Short__GetHashCode(&__this); }
    static ::uString* ToString(::uShort __this) { return Short__ToString(&__this); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {

}}


#endif
