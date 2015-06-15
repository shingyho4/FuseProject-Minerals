// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.OverflowException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

OverflowException__uType* OverflowException__typeof()
{
    static OverflowException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (OverflowException__uType*)::uAllocClassType(sizeof(OverflowException__uType), "Uno.OverflowException", ::app::Uno::Exception__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void OverflowException___ObjInit_2(OverflowException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit(__this, message);
}

OverflowException* OverflowException__New_3(::uStatic* __this, ::uString* message)
{
    OverflowException* inst = (::app::Uno::OverflowException*)::uAllocObject(sizeof(::app::Uno::OverflowException), ::app::Uno::OverflowException__typeof());
    inst->_ObjInit_2(message);
    return inst;
}

}}
