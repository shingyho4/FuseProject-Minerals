// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_SHORT2_H__
#define __APP_UNO_SHORT2_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct Short2;

struct Short2__uType : ::uValueType
{
};

Short2__uType* Short2__typeof();

bool Short2__Equals(Short2* __this, ::uObject* o);
int Short2__GetHashCode(Short2* __this);
::uString* Short2__ToString(Short2* __this);
void Short2___ObjInit_1(Short2* __this, ::uShort x, ::uShort y);
Short2 Short2__New_2(::uStatic* __this, ::uShort x, ::uShort y);

struct Short2
{
    ::uShort X;
    ::uShort Y;

    bool Equals(::uObject* o) { return Short2__Equals(this, o); }
    int GetHashCode() { return Short2__GetHashCode(this); }
    ::uString* ToString() { return Short2__ToString(this); }
    void _ObjInit_1(::uShort x, ::uShort y) { Short2___ObjInit_1(this, x, y); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Short.h>

namespace app {
namespace Uno {

}}


#endif
