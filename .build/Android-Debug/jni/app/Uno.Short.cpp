// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Byte.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <Xli/Traits.h>

namespace app {
namespace Uno {

Short__uType* Short__typeof()
{
    static Short__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Short__uType*)::uAllocValueType(sizeof(Short__uType), "Uno.Short", sizeof(::uShort));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Short__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))Short__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))Short__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Short__Equals(::uShort* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox< ::uShort>(Short__typeof(), *__this), o);
}

int Short__GetHashCode(::uShort* __this)
{
    return (int)*__this;
}

::uString* Short__ToString(::uShort* __this)
{
    Xli::String ansi((int)*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

}}
