// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.String.h>
#include <Xli/Traits.h>

namespace app {
namespace Uno {

Bool__uType* Bool__typeof()
{
    static Bool__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Bool__uType*)::uAllocValueType(sizeof(Bool__uType), "Uno.Bool", sizeof(bool));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Bool__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))Bool__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))Bool__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Bool__Equals(bool* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Bool__typeof(), *__this), o);
}

int Bool__GetHashCode(bool* __this)
{
    return *__this ? 1 : 0;
}

::uString* Bool__ToString(bool* __this)
{
    return uGetConstString(*__this ? "True" : "False");
}

}}
