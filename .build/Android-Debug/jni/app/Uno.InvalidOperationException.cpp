// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

InvalidOperationException__uType* InvalidOperationException__typeof()
{
    static InvalidOperationException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (InvalidOperationException__uType*)::uAllocClassType(sizeof(InvalidOperationException__uType), "Uno.InvalidOperationException", ::app::Uno::Exception__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void InvalidOperationException___ObjInit_2(InvalidOperationException* __this)
{
    ::app::Uno::Exception___ObjInit(__this, ::uGetConstString("Invalid operation"));
}

InvalidOperationException* InvalidOperationException__New_3(::uStatic* __this)
{
    InvalidOperationException* inst = (::app::Uno::InvalidOperationException*)::uAllocObject(sizeof(::app::Uno::InvalidOperationException), ::app::Uno::InvalidOperationException__typeof());
    inst->_ObjInit_2();
    return inst;
}

void InvalidOperationException___ObjInit_3(InvalidOperationException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit(__this, message);
}

InvalidOperationException* InvalidOperationException__New_4(::uStatic* __this, ::uString* message)
{
    InvalidOperationException* inst = (::app::Uno::InvalidOperationException*)::uAllocObject(sizeof(::app::Uno::InvalidOperationException), ::app::Uno::InvalidOperationException__typeof());
    inst->_ObjInit_3(message);
    return inst;
}

}}
