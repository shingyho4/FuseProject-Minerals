// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_BYTE4_H__
#define __APP_UNO_BYTE4_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct Byte4;

struct Byte4__uType : ::uValueType
{
};

Byte4__uType* Byte4__typeof();

bool Byte4__Equals(Byte4* __this, ::uObject* o);
int Byte4__GetHashCode(Byte4* __this);
::uString* Byte4__ToString(Byte4* __this);
void Byte4___ObjInit(Byte4* __this, ::uByte x, ::uByte y, ::uByte z, ::uByte w);
Byte4 Byte4__New_1(::uStatic* __this, ::uByte x, ::uByte y, ::uByte z, ::uByte w);

struct Byte4
{
    ::uByte X;
    ::uByte Y;
    ::uByte Z;
    ::uByte W;

    bool Equals(::uObject* o) { return Byte4__Equals(this, o); }
    int GetHashCode() { return Byte4__GetHashCode(this); }
    ::uString* ToString() { return Byte4__ToString(this); }
    void _ObjInit(::uByte x, ::uByte y, ::uByte z, ::uByte w) { Byte4___ObjInit(this, x, y, z, w); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {

}}


#endif
