// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Long.h>
#include <app/Uno.String.h>
#include <app/Uno.ULong.h>
#include <Uno/XliInterop.h>
#include <Xli/String.h>
#include <Xli/Traits.h>
#include <Xli/Unicode.h>

namespace app {
namespace Uno {

Double__uType* Double__typeof()
{
    static Double__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Double__uType*)::uAllocValueType(sizeof(Double__uType), "Uno.Double", sizeof(double));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Double__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))Double__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))Double__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Double__Equals(double* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Double__typeof(), *__this), o);
}

int Double__GetHashCode(double* __this)
{
    return (int)Xli::DefaultTraits::Hash(*__this);
}

::uString* Double__ToString(double* __this)
{
    Xli::String ansi = Xli::DefaultTraits::ToString(*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

}}
