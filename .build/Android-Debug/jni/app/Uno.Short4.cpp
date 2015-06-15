// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Short4.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

Short4__uType* Short4__typeof()
{
    static Short4__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Short4__uType*)::uAllocValueType(sizeof(Short4__uType), "Uno.Short4", sizeof(Short4));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Short4__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))Short4__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))Short4__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Short4__Equals(Short4* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Short4__typeof(), *__this), o);
}

int Short4__GetHashCode(Short4* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Short4__typeof(), *__this));
}

::uString* Short4__ToString(Short4* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::Short::ToString(__this->X), ::uGetConstString(", ")), ::app::Uno::Short::ToString(__this->Y)), ::uGetConstString(", ")), ::app::Uno::Short::ToString(__this->Z)), ::uGetConstString(", ")), ::app::Uno::Short::ToString(__this->W));
}

void Short4___ObjInit_1(Short4* __this, ::uShort x, ::uShort y, ::uShort z, ::uShort w)
{
    __this->X = x;
    __this->Y = y;
    __this->Z = z;
    __this->W = w;
}

Short4 Short4__New_2(::uStatic* __this, ::uShort x, ::uShort y, ::uShort z, ::uShort w)
{
    Short4 inst = ::uDefault< Short4>();
    inst._ObjInit_1(x, y, z, w);
    return inst;
}

}}
