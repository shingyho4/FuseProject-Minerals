// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_BOOL_H__
#define __APP_UNO_BOOL_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct Bool__uType : ::uValueType
{
};

Bool__uType* Bool__typeof();

bool Bool__Equals(bool* __this, ::uObject* o);
int Bool__GetHashCode(bool* __this);
::uString* Bool__ToString(bool* __this);

struct Bool
{
    static bool Equals(bool __this, ::uObject* o) { return Bool__Equals(&__this, o); }
    static int GetHashCode(bool __this) { return Bool__GetHashCode(&__this); }
    static ::uString* ToString(bool __this) { return Bool__ToString(&__this); }
};

}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {

}}


#endif
