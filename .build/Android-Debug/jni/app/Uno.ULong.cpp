// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Double.h>
#include <app/Uno.Long.h>
#include <app/Uno.SByte.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>
#include <app/Uno.ULong.h>
#include <Uno/XliInterop.h>
#include <Xli/String.h>
#include <Xli/Traits.h>
#include <Xli/Unicode.h>

namespace app {
namespace Uno {

ULong__uType* ULong__typeof()
{
    static ULong__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ULong__uType*)::uAllocValueType(sizeof(ULong__uType), "Uno.ULong", sizeof(::uULong));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))ULong__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))ULong__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))ULong__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool ULong__Equals(::uULong* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox< ::uULong>(ULong__typeof(), *__this), o);
}

int ULong__GetHashCode(::uULong* __this)
{
    return (int)Xli::DefaultTraits::Hash(*__this);
}

::uString* ULong__ToString(::uULong* __this)
{
    Xli::String ansi = Xli::DefaultTraits::ToString(*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

}}
