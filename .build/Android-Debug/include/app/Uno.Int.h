// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_INT_H__
#define __APP_UNO_INT_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct Int__uType : ::uValueType
{
};

Int__uType* Int__typeof();

bool Int__Equals(int* __this, ::uObject* o);
int Int__GetHashCode(int* __this);
::uString* Int__ToString(int* __this);
int Int__Parse(::uStatic* __this, ::uString* __str);

struct Int
{
    static bool Equals(int __this, ::uObject* o) { return Int__Equals(&__this, o); }
    static int GetHashCode(int __this) { return Int__GetHashCode(&__this); }
    static ::uString* ToString(int __this) { return Int__ToString(&__this); }
};

}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {

}}


#endif
