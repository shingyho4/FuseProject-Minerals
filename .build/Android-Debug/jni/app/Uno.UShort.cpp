// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Double.h>
#include <app/Uno.String.h>
#include <app/Uno.UShort.h>
#include <Xli/Traits.h>

namespace app {
namespace Uno {

UShort__uType* UShort__typeof()
{
    static UShort__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (UShort__uType*)::uAllocValueType(sizeof(UShort__uType), "Uno.UShort", sizeof(::uUShort));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))UShort__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))UShort__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))UShort__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool UShort__Equals(::uUShort* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox< ::uUShort>(UShort__typeof(), *__this), o);
}

int UShort__GetHashCode(::uUShort* __this)
{
    return (int)*__this;
}

::uString* UShort__ToString(::uUShort* __this)
{
    Xli::String ansi((int)*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

}}
