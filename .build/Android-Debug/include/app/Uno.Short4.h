// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_SHORT4_H__
#define __APP_UNO_SHORT4_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct Short4;

struct Short4__uType : ::uValueType
{
};

Short4__uType* Short4__typeof();

bool Short4__Equals(Short4* __this, ::uObject* o);
int Short4__GetHashCode(Short4* __this);
::uString* Short4__ToString(Short4* __this);
void Short4___ObjInit_1(Short4* __this, ::uShort x, ::uShort y, ::uShort z, ::uShort w);
Short4 Short4__New_2(::uStatic* __this, ::uShort x, ::uShort y, ::uShort z, ::uShort w);

struct Short4
{
    ::uShort X;
    ::uShort Y;
    ::uShort Z;
    ::uShort W;

    bool Equals(::uObject* o) { return Short4__Equals(this, o); }
    int GetHashCode() { return Short4__GetHashCode(this); }
    ::uString* ToString() { return Short4__ToString(this); }
    void _ObjInit_1(::uShort x, ::uShort y, ::uShort z, ::uShort w) { Short4___ObjInit_1(this, x, y, z, w); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Short.h>

namespace app {
namespace Uno {

}}


#endif
