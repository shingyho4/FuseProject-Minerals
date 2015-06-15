// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_FLOAT_H__
#define __APP_UNO_FLOAT_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct Float__uType : ::uValueType
{
};

Float__uType* Float__typeof();

bool Float__Equals(float* __this, ::uObject* o);
int Float__GetHashCode(float* __this);
::uString* Float__ToString(float* __this);
float Float__Parse(::uStatic* __this, ::uString* __str);

struct Float
{
    static bool Equals(float __this, ::uObject* o) { return Float__Equals(&__this, o); }
    static int GetHashCode(float __this) { return Float__GetHashCode(&__this); }
    static ::uString* ToString(float __this) { return Float__ToString(&__this); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {

}}


#endif
