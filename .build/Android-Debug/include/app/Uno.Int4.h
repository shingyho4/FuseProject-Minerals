// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_INT4_H__
#define __APP_UNO_INT4_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct Int4;

struct Int4__uType : ::uValueType
{
};

Int4__uType* Int4__typeof();

bool Int4__Equals(Int4* __this, ::uObject* o);
int Int4__GetHashCode(Int4* __this);
::uString* Int4__ToString(Int4* __this);
void Int4___ObjInit(Int4* __this, int x, int y, int z, int w);
Int4 Int4__New_1(::uStatic* __this, int x, int y, int z, int w);

struct Int4
{
    int X;
    int Y;
    int Z;
    int W;

    bool Equals(::uObject* o) { return Int4__Equals(this, o); }
    int GetHashCode() { return Int4__GetHashCode(this); }
    ::uString* ToString() { return Int4__ToString(this); }
    void _ObjInit(int x, int y, int z, int w) { Int4___ObjInit(this, x, y, z, w); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {

}}


#endif
