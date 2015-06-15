// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_FLOAT2_H__
#define __APP_UNO_FLOAT2_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Uno {

struct Float2;

struct Float2__uType : ::uValueType
{
};

Float2__uType* Float2__typeof();

float Float2__get_Item(Float2* __this, int index);
void Float2__set_Item(Float2* __this, int index, float value);
float Float2__get_Ratio(Float2* __this);
bool Float2__Equals(Float2* __this, ::uObject* o);
int Float2__GetHashCode(Float2* __this);
::uString* Float2__ToString(Float2* __this);
void Float2___ObjInit(Float2* __this, float xy);
Float2 Float2__New_1(::uStatic* __this, float xy);
void Float2___ObjInit_1(Float2* __this, float x, float y);
Float2 Float2__New_2(::uStatic* __this, float x, float y);
Float2 Float2__op_Division(::uStatic* __this, Float2 a, Float2 b);
Float2 Float2__op_Implicit(::uStatic* __this, ::app::Uno::Int2 a);
Float2 Float2__op_Addition(::uStatic* __this, Float2 a, Float2 b);
Float2 Float2__op_Multiply(::uStatic* __this, Float2 a, float b);
Float2 Float2__op_Subtraction(::uStatic* __this, Float2 a, Float2 b);
Float2 Float2__op_Multiply_1(::uStatic* __this, Float2 a, Float2 b);
Float2 Float2__op_UnaryNegation(::uStatic* __this, Float2 a);
Float2 Float2__op_Addition_1(::uStatic* __this, Float2 a, float b);
Float2 Float2__op_Subtraction_1(::uStatic* __this, Float2 a, float b);
Float2 Float2__op_Division_1(::uStatic* __this, Float2 a, float b);
bool Float2__op_Equality(::uStatic* __this, Float2 a, Float2 b);
bool Float2__op_Inequality(::uStatic* __this, Float2 a, Float2 b);

struct Float2
{
    float X;
    float Y;

    bool Equals(::uObject* o) { return Float2__Equals(this, o); }
    int GetHashCode() { return Float2__GetHashCode(this); }
    ::uString* ToString() { return Float2__ToString(this); }
    void _ObjInit(float xy) { Float2___ObjInit(this, xy); }
    void _ObjInit_1(float x, float y) { Float2___ObjInit_1(this, x, y); }
    float Item(int index) { return Float2__get_Item(this, index); }
    void Item(int index, float value) { Float2__set_Item(this, index, value); }
    float Ratio() { return Float2__get_Ratio(this); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {

}}


#endif
