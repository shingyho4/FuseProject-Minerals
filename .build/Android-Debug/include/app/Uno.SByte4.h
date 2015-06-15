// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_S_BYTE4_H__
#define __APP_UNO_S_BYTE4_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct SByte4;

struct SByte4__uType : ::uValueType
{
};

SByte4__uType* SByte4__typeof();

bool SByte4__Equals(SByte4* __this, ::uObject* o);
int SByte4__GetHashCode(SByte4* __this);
::uString* SByte4__ToString(SByte4* __this);
void SByte4___ObjInit_1(SByte4* __this, ::uSByte x, ::uSByte y, ::uSByte z, ::uSByte w);
SByte4 SByte4__New_2(::uStatic* __this, ::uSByte x, ::uSByte y, ::uSByte z, ::uSByte w);

struct SByte4
{
    ::uSByte X;
    ::uSByte Y;
    ::uSByte Z;
    ::uSByte W;

    bool Equals(::uObject* o) { return SByte4__Equals(this, o); }
    int GetHashCode() { return SByte4__GetHashCode(this); }
    ::uString* ToString() { return SByte4__ToString(this); }
    void _ObjInit_1(::uSByte x, ::uSByte y, ::uSByte z, ::uSByte w) { SByte4___ObjInit_1(this, x, y, z, w); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.SByte.h>

namespace app {
namespace Uno {

}}


#endif
