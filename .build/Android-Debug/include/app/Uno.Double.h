// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DOUBLE_H__
#define __APP_UNO_DOUBLE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct Double__uType : ::uValueType
{
};

Double__uType* Double__typeof();

bool Double__Equals(double* __this, ::uObject* o);
int Double__GetHashCode(double* __this);
::uString* Double__ToString(double* __this);

struct Double
{
    static bool Equals(double __this, ::uObject* o) { return Double__Equals(&__this, o); }
    static int GetHashCode(double __this) { return Double__GetHashCode(&__this); }
    static ::uString* ToString(double __this) { return Double__ToString(&__this); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {

}}


#endif
