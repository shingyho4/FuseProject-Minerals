// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_FLOAT4X4_H__
#define __APP_UNO_FLOAT4X4_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Uno {

struct Float4x4;

struct Float4x4__uType : ::uValueType
{
};

Float4x4__uType* Float4x4__typeof();

Float4x4 Float4x4__get_Identity(::uStatic* __this);
::app::Uno::Float4 Float4x4__get_Item(Float4x4* __this, int index);
void Float4x4__set_Item(Float4x4* __this, int index, ::app::Uno::Float4 value);
bool Float4x4__Equals(Float4x4* __this, ::uObject* o);
int Float4x4__GetHashCode(Float4x4* __this);
void Float4x4___ObjInit(Float4x4* __this, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44);
Float4x4 Float4x4__New_1(::uStatic* __this, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44);

struct Float4x4
{
    float M11;
    float M12;
    float M13;
    float M14;
    float M21;
    float M22;
    float M23;
    float M24;
    float M31;
    float M32;
    float M33;
    float M34;
    float M41;
    float M42;
    float M43;
    float M44;

    bool Equals(::uObject* o) { return Float4x4__Equals(this, o); }
    int GetHashCode() { return Float4x4__GetHashCode(this); }
    void _ObjInit(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) { Float4x4___ObjInit(this, m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44); }
    ::app::Uno::Float4 Item(int index);
    void Item(int index, ::app::Uno::Float4 value);
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {

inline ::app::Uno::Float4 Float4x4::Item(int index) { return Float4x4__get_Item(this, index); }
inline void Float4x4::Item(int index, ::app::Uno::Float4 value) { Float4x4__set_Item(this, index, value); }

}}


#endif
