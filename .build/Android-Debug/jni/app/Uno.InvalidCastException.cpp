// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.InvalidCastException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

InvalidCastException__uType* InvalidCastException__typeof()
{
    static InvalidCastException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (InvalidCastException__uType*)::uAllocClassType(sizeof(InvalidCastException__uType), "Uno.InvalidCastException", ::app::Uno::Exception__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void InvalidCastException___ObjInit_2(InvalidCastException* __this)
{
    ::app::Uno::Exception___ObjInit(__this, ::uGetConstString("Invalid cast"));
}

InvalidCastException* InvalidCastException__New_3(::uStatic* __this)
{
    InvalidCastException* inst = (::app::Uno::InvalidCastException*)::uAllocObject(sizeof(::app::Uno::InvalidCastException), ::app::Uno::InvalidCastException__typeof());
    inst->_ObjInit_2();
    return inst;
}

}}
