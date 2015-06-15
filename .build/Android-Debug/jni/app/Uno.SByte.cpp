// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Byte.h>
#include <app/Uno.SByte.h>
#include <app/Uno.String.h>
#include <Xli/Traits.h>

namespace app {
namespace Uno {

SByte__uType* SByte__typeof()
{
    static SByte__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SByte__uType*)::uAllocValueType(sizeof(SByte__uType), "Uno.SByte", sizeof(::uSByte));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))SByte__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))SByte__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))SByte__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool SByte__Equals(::uSByte* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox< ::uSByte>(SByte__typeof(), *__this), o);
}

int SByte__GetHashCode(::uSByte* __this)
{
    return (int)*__this;
}

::uString* SByte__ToString(::uSByte* __this)
{
    Xli::String ansi((int)*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

}}
