// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Float4.h>
#include <app/Uno.Generic.h>
#include <app/Uno.IndexOutOfRangeException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

Float4__uType* Float4__typeof()
{
    static Float4__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Float4__uType*)::uAllocValueType(sizeof(Float4__uType), "Uno.Float4", sizeof(Float4));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Float4__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))Float4__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))Float4__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

Float4 Float4__get_Identity(::uStatic* __this)
{
    return Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f);
}

float Float4__get_Item(Float4* __this, int index)
{
    if (index == 0)
    {
        return __this->X;
    }
    else if (index == 1)
    {
        return __this->Y;
    }
    else if (index == 2)
    {
        return __this->Z;
    }
    else if (index == 3)
    {
        return __this->W;
    }
    else
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void Float4__set_Item(Float4* __this, int index, float value)
{
    if (index == 0)
    {
        __this->X = value;
    }
    else if (index == 1)
    {
        __this->Y = value;
    }
    else if (index == 2)
    {
        __this->Z = value;
    }
    else if (index == 3)
    {
        __this->W = value;
    }
    else
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

bool Float4__Equals(Float4* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Float4__typeof(), *__this), o);
}

int Float4__GetHashCode(Float4* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Float4__typeof(), *__this));
}

::uString* Float4__ToString(Float4* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::Float::ToString(__this->X), ::uGetConstString(", ")), ::app::Uno::Float::ToString(__this->Y)), ::uGetConstString(", ")), ::app::Uno::Float::ToString(__this->Z)), ::uGetConstString(", ")), ::app::Uno::Float::ToString(__this->W));
}

void Float4___ObjInit(Float4* __this, float xyzw)
{
    __this->X = __this->Y = __this->Z = __this->W = xyzw;
}

Float4 Float4__New_1(::uStatic* __this, float xyzw)
{
    Float4 inst = ::uDefault< Float4>();
    inst._ObjInit(xyzw);
    return inst;
}

void Float4___ObjInit_1(Float4* __this, float x, float y, float z, float w)
{
    __this->X = x;
    __this->Y = y;
    __this->Z = z;
    __this->W = w;
}

Float4 Float4__New_2(::uStatic* __this, float x, float y, float z, float w)
{
    Float4 inst = ::uDefault< Float4>();
    inst._ObjInit_1(x, y, z, w);
    return inst;
}

void Float4___ObjInit_2(Float4* __this, ::app::Uno::Float2 xy, float z, float w)
{
    __this->X = xy.X;
    __this->Y = xy.Y;
    __this->Z = z;
    __this->W = w;
}

Float4 Float4__New_3(::uStatic* __this, ::app::Uno::Float2 xy, float z, float w)
{
    Float4 inst = ::uDefault< Float4>();
    inst._ObjInit_2(xy, z, w);
    return inst;
}

void Float4___ObjInit_6(Float4* __this, ::app::Uno::Float3 xyz, float w)
{
    __this->X = xyz.X;
    __this->Y = xyz.Y;
    __this->Z = xyz.Z;
    __this->W = w;
}

Float4 Float4__New_7(::uStatic* __this, ::app::Uno::Float3 xyz, float w)
{
    Float4 inst = ::uDefault< Float4>();
    inst._ObjInit_6(xyz, w);
    return inst;
}

Float4 Float4__op_Multiply(::uStatic* __this, Float4 a, float b)
{
    return Float4__New_2(NULL, a.X * b, a.Y * b, a.Z * b, a.W * b);
}

Float4 Float4__op_Multiply_1(::uStatic* __this, Float4 a, Float4 b)
{
    return Float4__New_2(NULL, a.X * b.X, a.Y * b.Y, a.Z * b.Z, a.W * b.W);
}

Float4 Float4__op_Addition(::uStatic* __this, Float4 a, Float4 b)
{
    return Float4__New_2(NULL, a.X + b.X, a.Y + b.Y, a.Z + b.Z, a.W + b.W);
}

bool Float4__op_Equality(::uStatic* __this, Float4 a, Float4 b)
{
    return ::app::Uno::Generic__Equals__float4(NULL, a, b);
}

Float4 Float4__op_Division_1(::uStatic* __this, Float4 a, float b)
{
    return Float4__New_2(NULL, a.X / b, a.Y / b, a.Z / b, a.W / b);
}

bool Float4__op_Inequality(::uStatic* __this, Float4 a, Float4 b)
{
    return !::app::Uno::Generic__Equals__float4(NULL, a, b);
}

}}
