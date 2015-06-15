// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_FLOAT3X3_H__
#define __APP_UNO_FLOAT3X3_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {

struct Float3x3;

struct Float3x3__uType : ::uValueType
{
};

Float3x3__uType* Float3x3__typeof();

bool Float3x3__Equals(Float3x3* __this, ::uObject* o);
int Float3x3__GetHashCode(Float3x3* __this);
void Float3x3___ObjInit(Float3x3* __this, float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33);
Float3x3 Float3x3__New_1(::uStatic* __this, float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33);

struct Float3x3
{
    float M11;
    float M12;
    float M13;
    float M21;
    float M22;
    float M23;
    float M31;
    float M32;
    float M33;

    bool Equals(::uObject* o) { return Float3x3__Equals(this, o); }
    int GetHashCode() { return Float3x3__GetHashCode(this); }
    void _ObjInit(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) { Float3x3___ObjInit(this, m11, m12, m13, m21, m22, m23, m31, m32, m33); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {

}}


#endif
