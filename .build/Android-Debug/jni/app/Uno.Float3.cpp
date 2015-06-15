// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Float3.h>
#include <app/Uno.Generic.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

Float3__uType* Float3__typeof()
{
    static Float3__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Float3__uType*)::uAllocValueType(sizeof(Float3__uType), "Uno.Float3", sizeof(Float3));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Float3__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))Float3__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))Float3__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Float3__Equals(Float3* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Float3__typeof(), *__this), o);
}

int Float3__GetHashCode(Float3* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Float3__typeof(), *__this));
}

::uString* Float3__ToString(Float3* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::Float::ToString(__this->X), ::uGetConstString(", ")), ::app::Uno::Float::ToString(__this->Y)), ::uGetConstString(", ")), ::app::Uno::Float::ToString(__this->Z));
}

void Float3___ObjInit(Float3* __this, float xyz)
{
    __this->X = __this->Y = __this->Z = xyz;
}

Float3 Float3__New_1(::uStatic* __this, float xyz)
{
    Float3 inst = ::uDefault< Float3>();
    inst._ObjInit(xyz);
    return inst;
}

void Float3___ObjInit_1(Float3* __this, float x, float y, float z)
{
    __this->X = x;
    __this->Y = y;
    __this->Z = z;
}

Float3 Float3__New_2(::uStatic* __this, float x, float y, float z)
{
    Float3 inst = ::uDefault< Float3>();
    inst._ObjInit_1(x, y, z);
    return inst;
}

void Float3___ObjInit_2(Float3* __this, ::app::Uno::Float2 xy, float z)
{
    __this->X = xy.X;
    __this->Y = xy.Y;
    __this->Z = z;
}

Float3 Float3__New_3(::uStatic* __this, ::app::Uno::Float2 xy, float z)
{
    Float3 inst = ::uDefault< Float3>();
    inst._ObjInit_2(xy, z);
    return inst;
}

Float3 Float3__op_Addition(::uStatic* __this, Float3 a, Float3 b)
{
    return Float3__New_2(NULL, a.X + b.X, a.Y + b.Y, a.Z + b.Z);
}

Float3 Float3__op_Multiply(::uStatic* __this, Float3 a, float b)
{
    return Float3__New_2(NULL, a.X * b, a.Y * b, a.Z * b);
}

Float3 Float3__op_Subtraction(::uStatic* __this, Float3 a, Float3 b)
{
    return Float3__New_2(NULL, a.X - b.X, a.Y - b.Y, a.Z - b.Z);
}

bool Float3__op_Equality(::uStatic* __this, Float3 a, Float3 b)
{
    return ::app::Uno::Generic__Equals__float3(NULL, a, b);
}

Float3 Float3__op_Division(::uStatic* __this, Float3 a, float b)
{
    return Float3__New_2(NULL, a.X / b, a.Y / b, a.Z / b);
}

Float3 Float3__op_Multiply_1(::uStatic* __this, Float3 a, Float3 b)
{
    return Float3__New_2(NULL, a.X * b.X, a.Y * b.Y, a.Z * b.Z);
}

bool Float3__op_Inequality(::uStatic* __this, Float3 a, Float3 b)
{
    return !::app::Uno::Generic__Equals__float3(NULL, a, b);
}

}}
