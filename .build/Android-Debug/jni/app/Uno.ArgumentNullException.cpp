// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

ArgumentNullException__uType* ArgumentNullException__typeof()
{
    static ArgumentNullException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ArgumentNullException__uType*)::uAllocClassType(sizeof(ArgumentNullException__uType), "Uno.ArgumentNullException", ::app::Uno::ArgumentException__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void ArgumentNullException___ObjInit_4(ArgumentNullException* __this, ::uString* paramName)
{
    ::app::Uno::ArgumentException___ObjInit_3(__this, ::uGetConstString("value was null"), paramName);
}

ArgumentNullException* ArgumentNullException__New_5(::uStatic* __this, ::uString* paramName)
{
    ArgumentNullException* inst = (::app::Uno::ArgumentNullException*)::uAllocObject(sizeof(::app::Uno::ArgumentNullException), ::app::Uno::ArgumentNullException__typeof());
    inst->_ObjInit_4(paramName);
    return inst;
}

}}
