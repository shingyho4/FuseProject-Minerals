// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Short2.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

Short2__uType* Short2__typeof()
{
    static Short2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Short2__uType*)::uAllocValueType(sizeof(Short2__uType), "Uno.Short2", sizeof(Short2));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Short2__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))Short2__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))Short2__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Short2__Equals(Short2* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Short2__typeof(), *__this), o);
}

int Short2__GetHashCode(Short2* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Short2__typeof(), *__this));
}

::uString* Short2__ToString(Short2* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::Short::ToString(__this->X), ::uGetConstString(", ")), ::app::Uno::Short::ToString(__this->Y));
}

void Short2___ObjInit_1(Short2* __this, ::uShort x, ::uShort y)
{
    __this->X = x;
    __this->Y = y;
}

Short2 Short2__New_2(::uStatic* __this, ::uShort x, ::uShort y)
{
    Short2 inst = ::uDefault< Short2>();
    inst._ObjInit_1(x, y);
    return inst;
}

}}
