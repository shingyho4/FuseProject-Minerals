// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.String.h>
#include <app/Uno.UInt.h>
#include <Xli/Traits.h>

namespace app {
namespace Uno {

UInt__uType* UInt__typeof()
{
    static UInt__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (UInt__uType*)::uAllocValueType(sizeof(UInt__uType), "Uno.UInt", sizeof(::uUInt));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))UInt__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))UInt__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))UInt__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool UInt__Equals(::uUInt* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox< ::uUInt>(UInt__typeof(), *__this), o);
}

int UInt__GetHashCode(::uUInt* __this)
{
    return (int)*__this;
}

::uString* UInt__ToString(::uUInt* __this)
{
    Xli::String ansi = Xli::DefaultTraits::ToString(*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

}}
