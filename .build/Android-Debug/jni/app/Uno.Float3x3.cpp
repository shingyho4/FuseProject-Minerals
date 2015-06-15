// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Float3x3.h>

namespace app {
namespace Uno {

Float3x3__uType* Float3x3__typeof()
{
    static Float3x3__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Float3x3__uType*)::uAllocValueType(sizeof(Float3x3__uType), "Uno.Float3x3", sizeof(Float3x3));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Float3x3__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))Float3x3__GetHashCode;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Float3x3__Equals(Float3x3* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Float3x3__typeof(), *__this), o);
}

int Float3x3__GetHashCode(Float3x3* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Float3x3__typeof(), *__this));
}

void Float3x3___ObjInit(Float3x3* __this, float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33)
{
    __this->M11 = m11;
    __this->M12 = m12;
    __this->M13 = m13;
    __this->M21 = m21;
    __this->M22 = m22;
    __this->M23 = m23;
    __this->M31 = m31;
    __this->M32 = m32;
    __this->M33 = m33;
}

Float3x3 Float3x3__New_1(::uStatic* __this, float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33)
{
    Float3x3 inst = ::uDefault< Float3x3>();
    inst._ObjInit(m11, m12, m13, m21, m22, m23, m31, m32, m33);
    return inst;
}

}}
