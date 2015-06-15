// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.String.h>
#include <app/Uno.UShort2.h>

namespace app {
namespace Uno {

UShort2__uType* UShort2__typeof()
{
    static UShort2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (UShort2__uType*)::uAllocValueType(sizeof(UShort2__uType), "Uno.UShort2", sizeof(UShort2));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))UShort2__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))UShort2__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))UShort2__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool UShort2__Equals(UShort2* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(UShort2__typeof(), *__this), o);
}

int UShort2__GetHashCode(UShort2* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(UShort2__typeof(), *__this));
}

::uString* UShort2__ToString(UShort2* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::UShort::ToString(__this->X), ::uGetConstString(", ")), ::app::Uno::UShort::ToString(__this->Y));
}

void UShort2___ObjInit_1(UShort2* __this, ::uUShort x, ::uUShort y)
{
    __this->X = x;
    __this->Y = y;
}

UShort2 UShort2__New_2(::uStatic* __this, ::uUShort x, ::uUShort y)
{
    UShort2 inst = ::uDefault< UShort2>();
    inst._ObjInit_1(x, y);
    return inst;
}

}}
