// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_FLOAT3_H__
#define __APP_UNO_FLOAT3_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Uno {

struct Float3;

struct Float3__uType : ::uValueType
{
};

Float3__uType* Float3__typeof();

bool Float3__Equals(Float3* __this, ::uObject* o);
int Float3__GetHashCode(Float3* __this);
::uString* Float3__ToString(Float3* __this);
void Float3___ObjInit(Float3* __this, float xyz);
Float3 Float3__New_1(::uStatic* __this, float xyz);
void Float3___ObjInit_1(Float3* __this, float x, float y, float z);
Float3 Float3__New_2(::uStatic* __this, float x, float y, float z);
void Float3___ObjInit_2(Float3* __this, ::app::Uno::Float2 xy, float z);
Float3 Float3__New_3(::uStatic* __this, ::app::Uno::Float2 xy, float z);
Float3 Float3__op_Addition(::uStatic* __this, Float3 a, Float3 b);
Float3 Float3__op_Multiply(::uStatic* __this, Float3 a, float b);
Float3 Float3__op_Subtraction(::uStatic* __this, Float3 a, Float3 b);
bool Float3__op_Equality(::uStatic* __this, Float3 a, Float3 b);
Float3 Float3__op_Division(::uStatic* __this, Float3 a, float b);
Float3 Float3__op_Multiply_1(::uStatic* __this, Float3 a, Float3 b);
bool Float3__op_Inequality(::uStatic* __this, Float3 a, Float3 b);

struct Float3
{
    float X;
    float Y;
    float Z;

    bool Equals(::uObject* o) { return Float3__Equals(this, o); }
    int GetHashCode() { return Float3__GetHashCode(this); }
    ::uString* ToString() { return Float3__ToString(this); }
    void _ObjInit(float xyz) { Float3___ObjInit(this, xyz); }
    void _ObjInit_1(float x, float y, float z) { Float3___ObjInit_1(this, x, y, z); }
    void _ObjInit_2(::app::Uno::Float2 xy, float z);
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {

inline void Float3::_ObjInit_2(::app::Uno::Float2 xy, float z) { Float3___ObjInit_2(this, xy, z); }

}}


#endif
