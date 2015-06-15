// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.ArgumentException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

ArgumentException__uType* ArgumentException__typeof()
{
    static ArgumentException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ArgumentException__uType*)::uAllocClassType(sizeof(ArgumentException__uType), "Uno.ArgumentException", ::app::Uno::Exception__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void ArgumentException___ObjInit_2(ArgumentException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit(__this, message);
}

ArgumentException* ArgumentException__New_3(::uStatic* __this, ::uString* message)
{
    ArgumentException* inst = (::app::Uno::ArgumentException*)::uAllocObject(sizeof(::app::Uno::ArgumentException), ::app::Uno::ArgumentException__typeof());
    inst->_ObjInit_2(message);
    return inst;
}

void ArgumentException___ObjInit_3(ArgumentException* __this, ::uString* message, ::uString* paramName)
{
    ::app::Uno::Exception___ObjInit(__this, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, paramName, ::uGetConstString(": ")), message));
}

ArgumentException* ArgumentException__New_4(::uStatic* __this, ::uString* message, ::uString* paramName)
{
    ArgumentException* inst = (::app::Uno::ArgumentException*)::uAllocObject(sizeof(::app::Uno::ArgumentException), ::app::Uno::ArgumentException__typeof());
    inst->_ObjInit_3(message, paramName);
    return inst;
}

}}
