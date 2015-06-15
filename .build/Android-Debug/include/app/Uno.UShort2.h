// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_SHORT2_H__
#define __APP_UNO_U_SHORT2_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct UShort2;

struct UShort2__uType : ::uValueType
{
};

UShort2__uType* UShort2__typeof();

bool UShort2__Equals(UShort2* __this, ::uObject* o);
int UShort2__GetHashCode(UShort2* __this);
::uString* UShort2__ToString(UShort2* __this);
void UShort2___ObjInit_1(UShort2* __this, ::uUShort x, ::uUShort y);
UShort2 UShort2__New_2(::uStatic* __this, ::uUShort x, ::uUShort y);

struct UShort2
{
    ::uUShort X;
    ::uUShort Y;

    bool Equals(::uObject* o) { return UShort2__Equals(this, o); }
    int GetHashCode() { return UShort2__GetHashCode(this); }
    ::uString* ToString() { return UShort2__ToString(this); }
    void _ObjInit_1(::uUShort x, ::uUShort y) { UShort2___ObjInit_1(this, x, y); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Uno {

}}


#endif
