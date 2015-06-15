// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Float2.h>
#include <app/Uno.Generic.h>
#include <app/Uno.IndexOutOfRangeException.h>
#include <app/Uno.Int2.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

Float2__uType* Float2__typeof()
{
    static Float2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Float2__uType*)::uAllocValueType(sizeof(Float2__uType), "Uno.Float2", sizeof(Float2));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Float2__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))Float2__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))Float2__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float Float2__get_Item(Float2* __this, int index)
{
    if (index == 0)
    {
        return __this->X;
    }
    else if (index == 1)
    {
        return __this->Y;
    }
    else
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void Float2__set_Item(Float2* __this, int index, float value)
{
    if (index == 0)
    {
        __this->X = value;
    }
    else if (index == 1)
    {
        __this->Y = value;
    }
    else
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

float Float2__get_Ratio(Float2* __this)
{
    return __this->X / __this->Y;
}

bool Float2__Equals(Float2* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Float2__typeof(), *__this), o);
}

int Float2__GetHashCode(Float2* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Float2__typeof(), *__this));
}

::uString* Float2__ToString(Float2* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::Float::ToString(__this->X), ::uGetConstString(", ")), ::app::Uno::Float::ToString(__this->Y));
}

void Float2___ObjInit(Float2* __this, float xy)
{
    __this->X = __this->Y = xy;
}

Float2 Float2__New_1(::uStatic* __this, float xy)
{
    Float2 inst = ::uDefault< Float2>();
    inst._ObjInit(xy);
    return inst;
}

void Float2___ObjInit_1(Float2* __this, float x, float y)
{
    __this->X = x;
    __this->Y = y;
}

Float2 Float2__New_2(::uStatic* __this, float x, float y)
{
    Float2 inst = ::uDefault< Float2>();
    inst._ObjInit_1(x, y);
    return inst;
}

Float2 Float2__op_Division(::uStatic* __this, Float2 a, Float2 b)
{
    return Float2__New_2(NULL, a.X / b.X, a.Y / b.Y);
}

Float2 Float2__op_Implicit(::uStatic* __this, ::app::Uno::Int2 a)
{
    return Float2__New_2(NULL, (float)a.X, (float)a.Y);
}

Float2 Float2__op_Addition(::uStatic* __this, Float2 a, Float2 b)
{
    return Float2__New_2(NULL, a.X + b.X, a.Y + b.Y);
}

Float2 Float2__op_Multiply(::uStatic* __this, Float2 a, float b)
{
    return Float2__New_2(NULL, a.X * b, a.Y * b);
}

Float2 Float2__op_Subtraction(::uStatic* __this, Float2 a, Float2 b)
{
    return Float2__New_2(NULL, a.X - b.X, a.Y - b.Y);
}

Float2 Float2__op_Multiply_1(::uStatic* __this, Float2 a, Float2 b)
{
    return Float2__New_2(NULL, a.X * b.X, a.Y * b.Y);
}

Float2 Float2__op_UnaryNegation(::uStatic* __this, Float2 a)
{
    return Float2__New_2(NULL, -a.X, -a.Y);
}

Float2 Float2__op_Addition_1(::uStatic* __this, Float2 a, float b)
{
    return Float2__New_2(NULL, a.X + b, a.Y + b);
}

Float2 Float2__op_Subtraction_1(::uStatic* __this, Float2 a, float b)
{
    return Float2__New_2(NULL, a.X - b, a.Y - b);
}

Float2 Float2__op_Division_1(::uStatic* __this, Float2 a, float b)
{
    return Float2__New_2(NULL, a.X / b, a.Y / b);
}

bool Float2__op_Equality(::uStatic* __this, Float2 a, Float2 b)
{
    return ::app::Uno::Generic__Equals__float2(NULL, a, b);
}

bool Float2__op_Inequality(::uStatic* __this, Float2 a, Float2 b)
{
    return !::app::Uno::Generic__Equals__float2(NULL, a, b);
}

}}
