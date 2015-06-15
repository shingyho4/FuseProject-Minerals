// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Byte.h>
#include <app/Uno.Float.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>
#include <Xli/Traits.h>

namespace app {
namespace Uno {

Byte__uType* Byte__typeof()
{
    static Byte__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Byte__uType*)::uAllocValueType(sizeof(Byte__uType), "Uno.Byte", sizeof(::uByte));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Byte__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))Byte__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))Byte__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Byte__Equals(::uByte* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox< ::uByte>(Byte__typeof(), *__this), o);
}

int Byte__GetHashCode(::uByte* __this)
{
    return (int)*__this;
}

::uString* Byte__ToString(::uByte* __this)
{
    Xli::String ansi((int)*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

}}
