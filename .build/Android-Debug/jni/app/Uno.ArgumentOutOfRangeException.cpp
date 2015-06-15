// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.ArgumentOutOfRangeException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

ArgumentOutOfRangeException__uType* ArgumentOutOfRangeException__typeof()
{
    static ArgumentOutOfRangeException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ArgumentOutOfRangeException__uType*)::uAllocClassType(sizeof(ArgumentOutOfRangeException__uType), "Uno.ArgumentOutOfRangeException", ::app::Uno::ArgumentException__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void ArgumentOutOfRangeException___ObjInit_4(ArgumentOutOfRangeException* __this, ::uString* message, ::uString* paramName)
{
    ::app::Uno::ArgumentException___ObjInit_3(__this, message, paramName);
}

ArgumentOutOfRangeException* ArgumentOutOfRangeException__New_5(::uStatic* __this, ::uString* message, ::uString* paramName)
{
    ArgumentOutOfRangeException* inst = (::app::Uno::ArgumentOutOfRangeException*)::uAllocObject(sizeof(::app::Uno::ArgumentOutOfRangeException), ::app::Uno::ArgumentOutOfRangeException__typeof());
    inst->_ObjInit_4(message, paramName);
    return inst;
}

void ArgumentOutOfRangeException___ObjInit_5(ArgumentOutOfRangeException* __this, ::uString* paramName)
{
    ::app::Uno::ArgumentException___ObjInit_3(__this, ::uGetConstString("value out of range"), paramName);
}

ArgumentOutOfRangeException* ArgumentOutOfRangeException__New_6(::uStatic* __this, ::uString* paramName)
{
    ArgumentOutOfRangeException* inst = (::app::Uno::ArgumentOutOfRangeException*)::uAllocObject(sizeof(::app::Uno::ArgumentOutOfRangeException), ::app::Uno::ArgumentOutOfRangeException__typeof());
    inst->_ObjInit_5(paramName);
    return inst;
}

}}
