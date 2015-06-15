// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Float4x4.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {

Float4x4__uType* Float4x4__typeof()
{
    static Float4x4__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Float4x4__uType*)::uAllocValueType(sizeof(Float4x4__uType), "Uno.Float4x4", sizeof(Float4x4));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Float4x4__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))Float4x4__GetHashCode;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

Float4x4 Float4x4__get_Identity(::uStatic* __this)
{
    return Float4x4__New_1(NULL, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f);
}

::app::Uno::Float4 Float4x4__get_Item(Float4x4* __this, int index)
{
    if (index == 0)
    {
        return ::app::Uno::Float4__New_2(NULL, __this->M11, __this->M12, __this->M13, __this->M14);
    }
    else if (index == 1)
    {
        return ::app::Uno::Float4__New_2(NULL, __this->M21, __this->M22, __this->M23, __this->M24);
    }
    else if (index == 2)
    {
        return ::app::Uno::Float4__New_2(NULL, __this->M31, __this->M32, __this->M33, __this->M34);
    }
    else if (index == 3)
    {
        return ::app::Uno::Float4__New_2(NULL, __this->M41, __this->M42, __this->M43, __this->M44);
    }
    else
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void Float4x4__set_Item(Float4x4* __this, int index, ::app::Uno::Float4 value)
{
    if (index == 0)
    {
        __this->M11 = value.X;
        __this->M12 = value.Y;
        __this->M13 = value.Z;
        __this->M14 = value.W;
    }
    else if (index == 1)
    {
        __this->M21 = value.X;
        __this->M22 = value.Y;
        __this->M23 = value.Z;
        __this->M24 = value.W;
    }
    else if (index == 2)
    {
        __this->M31 = value.X;
        __this->M32 = value.Y;
        __this->M33 = value.Z;
        __this->M34 = value.W;
    }
    else if (index == 3)
    {
        __this->M41 = value.X;
        __this->M42 = value.Y;
        __this->M43 = value.Z;
        __this->M44 = value.W;
    }
    else
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

bool Float4x4__Equals(Float4x4* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Float4x4__typeof(), *__this), o);
}

int Float4x4__GetHashCode(Float4x4* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Float4x4__typeof(), *__this));
}

void Float4x4___ObjInit(Float4x4* __this, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    __this->M11 = m11;
    __this->M12 = m12;
    __this->M13 = m13;
    __this->M14 = m14;
    __this->M21 = m21;
    __this->M22 = m22;
    __this->M23 = m23;
    __this->M24 = m24;
    __this->M31 = m31;
    __this->M32 = m32;
    __this->M33 = m33;
    __this->M34 = m34;
    __this->M41 = m41;
    __this->M42 = m42;
    __this->M43 = m43;
    __this->M44 = m44;
}

Float4x4 Float4x4__New_1(::uStatic* __this, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    Float4x4 inst = ::uDefault< Float4x4>();
    inst._ObjInit(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
    return inst;
}

}}
