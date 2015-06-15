// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Long.h>
#include <app/Uno.SByte.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>
#include <Uno/XliInterop.h>
#include <Xli/String.h>
#include <Xli/Traits.h>
#include <Xli/Unicode.h>

namespace app {
namespace Uno {

Long__uType* Long__typeof()
{
    static Long__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Long__uType*)::uAllocValueType(sizeof(Long__uType), "Uno.Long", sizeof(::uLong));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Long__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))Long__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))Long__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Long__Equals(::uLong* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox< ::uLong>(Long__typeof(), *__this), o);
}

int Long__GetHashCode(::uLong* __this)
{
    return (int)Xli::DefaultTraits::Hash(*__this);
}

::uString* Long__ToString(::uLong* __this)
{
    Xli::String ansi = Xli::DefaultTraits::ToString(*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

}}
