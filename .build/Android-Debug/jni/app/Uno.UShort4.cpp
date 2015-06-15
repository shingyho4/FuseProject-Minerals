// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.String.h>
#include <app/Uno.UShort4.h>

namespace app {
namespace Uno {

UShort4__uType* UShort4__typeof()
{
    static UShort4__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (UShort4__uType*)::uAllocValueType(sizeof(UShort4__uType), "Uno.UShort4", sizeof(UShort4));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))UShort4__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))UShort4__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))UShort4__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool UShort4__Equals(UShort4* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(UShort4__typeof(), *__this), o);
}

int UShort4__GetHashCode(UShort4* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(UShort4__typeof(), *__this));
}

::uString* UShort4__ToString(UShort4* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::UShort::ToString(__this->X), ::uGetConstString(", ")), ::app::Uno::UShort::ToString(__this->Y)), ::uGetConstString(", ")), ::app::Uno::UShort::ToString(__this->Z)), ::uGetConstString(", ")), ::app::Uno::UShort::ToString(__this->W));
}

void UShort4___ObjInit_1(UShort4* __this, ::uUShort x, ::uUShort y, ::uUShort z, ::uUShort w)
{
    __this->X = x;
    __this->Y = y;
    __this->Z = z;
    __this->W = w;
}

UShort4 UShort4__New_2(::uStatic* __this, ::uUShort x, ::uUShort y, ::uUShort z, ::uUShort w)
{
    UShort4 inst = ::uDefault< UShort4>();
    inst._ObjInit_1(x, y, z, w);
    return inst;
}

}}
