// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_SHORT4_H__
#define __APP_UNO_U_SHORT4_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct UShort4;

struct UShort4__uType : ::uValueType
{
};

UShort4__uType* UShort4__typeof();

bool UShort4__Equals(UShort4* __this, ::uObject* o);
int UShort4__GetHashCode(UShort4* __this);
::uString* UShort4__ToString(UShort4* __this);
void UShort4___ObjInit_1(UShort4* __this, ::uUShort x, ::uUShort y, ::uUShort z, ::uUShort w);
UShort4 UShort4__New_2(::uStatic* __this, ::uUShort x, ::uUShort y, ::uUShort z, ::uUShort w);

struct UShort4
{
    ::uUShort X;
    ::uUShort Y;
    ::uUShort Z;
    ::uUShort W;

    bool Equals(::uObject* o) { return UShort4__Equals(this, o); }
    int GetHashCode() { return UShort4__GetHashCode(this); }
    ::uString* ToString() { return UShort4__ToString(this); }
    void _ObjInit_1(::uUShort x, ::uUShort y, ::uUShort z, ::uUShort w) { UShort4___ObjInit_1(this, x, y, z, w); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Uno {

}}


#endif
