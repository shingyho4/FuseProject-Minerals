// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Float.h>
#include <app/Uno.Float2x2.h>

namespace app {
namespace Uno {

Float2x2__uType* Float2x2__typeof()
{
    static Float2x2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Float2x2__uType*)::uAllocValueType(sizeof(Float2x2__uType), "Uno.Float2x2", sizeof(Float2x2));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Float2x2__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))Float2x2__GetHashCode;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Float2x2__Equals(Float2x2* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Float2x2__typeof(), *__this), o);
}

int Float2x2__GetHashCode(Float2x2* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Float2x2__typeof(), *__this));
}

void Float2x2___ObjInit_1(Float2x2* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    __this->M11 = a.X;
    __this->M12 = a.Y;
    __this->M21 = b.X;
    __this->M22 = b.Y;
}

Float2x2 Float2x2__New_2(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    Float2x2 inst = ::uDefault< Float2x2>();
    inst._ObjInit_1(a, b);
    return inst;
}

}}
