// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_FLOAT4_H__
#define __APP_UNO_FLOAT4_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Uno {

struct Float4;

struct Float4__uType : ::uValueType
{
};

Float4__uType* Float4__typeof();

Float4 Float4__get_Identity(::uStatic* __this);
float Float4__get_Item(Float4* __this, int index);
void Float4__set_Item(Float4* __this, int index, float value);
bool Float4__Equals(Float4* __this, ::uObject* o);
int Float4__GetHashCode(Float4* __this);
::uString* Float4__ToString(Float4* __this);
void Float4___ObjInit(Float4* __this, float xyzw);
Float4 Float4__New_1(::uStatic* __this, float xyzw);
void Float4___ObjInit_1(Float4* __this, float x, float y, float z, float w);
Float4 Float4__New_2(::uStatic* __this, float x, float y, float z, float w);
void Float4___ObjInit_2(Float4* __this, ::app::Uno::Float2 xy, float z, float w);
Float4 Float4__New_3(::uStatic* __this, ::app::Uno::Float2 xy, float z, float w);
void Float4___ObjInit_6(Float4* __this, ::app::Uno::Float3 xyz, float w);
Float4 Float4__New_7(::uStatic* __this, ::app::Uno::Float3 xyz, float w);
Float4 Float4__op_Multiply(::uStatic* __this, Float4 a, float b);
Float4 Float4__op_Multiply_1(::uStatic* __this, Float4 a, Float4 b);
Float4 Float4__op_Addition(::uStatic* __this, Float4 a, Float4 b);
bool Float4__op_Equality(::uStatic* __this, Float4 a, Float4 b);
Float4 Float4__op_Division_1(::uStatic* __this, Float4 a, float b);
bool Float4__op_Inequality(::uStatic* __this, Float4 a, Float4 b);

struct Float4
{
    float X;
    float Y;
    float Z;
    float W;

    bool Equals(::uObject* o) { return Float4__Equals(this, o); }
    int GetHashCode() { return Float4__GetHashCode(this); }
    ::uString* ToString() { return Float4__ToString(this); }
    void _ObjInit(float xyzw) { Float4___ObjInit(this, xyzw); }
    void _ObjInit_1(float x, float y, float z, float w) { Float4___ObjInit_1(this, x, y, z, w); }
    void _ObjInit_2(::app::Uno::Float2 xy, float z, float w);
    void _ObjInit_6(::app::Uno::Float3 xyz, float w);
    float Item(int index) { return Float4__get_Item(this, index); }
    void Item(int index, float value) { Float4__set_Item(this, index, value); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {

inline void Float4::_ObjInit_2(::app::Uno::Float2 xy, float z, float w) { Float4___ObjInit_2(this, xy, z, w); }
inline void Float4::_ObjInit_6(::app::Uno::Float3 xyz, float w) { Float4___ObjInit_6(this, xyz, w); }

}}


#endif
