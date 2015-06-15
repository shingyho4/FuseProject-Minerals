// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.FormatException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

FormatException__uType* FormatException__typeof()
{
    static FormatException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FormatException__uType*)::uAllocClassType(sizeof(FormatException__uType), "Uno.FormatException", ::app::Uno::Exception__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void FormatException___ObjInit_2(FormatException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit(__this, message);
}

FormatException* FormatException__New_3(::uStatic* __this, ::uString* message)
{
    FormatException* inst = (::app::Uno::FormatException*)::uAllocObject(sizeof(::app::Uno::FormatException), ::app::Uno::FormatException__typeof());
    inst->_ObjInit_2(message);
    return inst;
}

}}
