// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CHAR_H__
#define __APP_UNO_CHAR_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct Char__uType : ::uValueType
{
};

Char__uType* Char__typeof();

bool Char__Equals(::uChar* __this, ::uObject* o);
int Char__GetHashCode(::uChar* __this);
::uString* Char__ToString(::uChar* __this);
::uChar Char__ToUpper(::uStatic* __this, ::uChar __c);
::uChar Char__ToLower(::uStatic* __this, ::uChar __c);
bool Char__IsWhiteSpace(::uStatic* __this, ::uChar c);

struct Char
{
    static bool Equals(::uChar __this, ::uObject* o) { return Char__Equals(&__this, o); }
    static int GetHashCode(::uChar __this) { return Char__GetHashCode(&__this); }
    static ::uString* ToString(::uChar __this) { return Char__ToString(&__this); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {

}}


#endif
