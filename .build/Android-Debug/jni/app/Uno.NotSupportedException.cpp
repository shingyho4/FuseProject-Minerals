// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.NotSupportedException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

NotSupportedException__uType* NotSupportedException__typeof()
{
    static NotSupportedException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NotSupportedException__uType*)::uAllocClassType(sizeof(NotSupportedException__uType), "Uno.NotSupportedException", ::app::Uno::Exception__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void NotSupportedException___ObjInit_2(NotSupportedException* __this)
{
    ::app::Uno::Exception___ObjInit(__this, ::uGetConstString("Method not supported"));
}

NotSupportedException* NotSupportedException__New_3(::uStatic* __this)
{
    NotSupportedException* inst = (::app::Uno::NotSupportedException*)::uAllocObject(sizeof(::app::Uno::NotSupportedException), ::app::Uno::NotSupportedException__typeof());
    inst->_ObjInit_2();
    return inst;
}

void NotSupportedException___ObjInit_3(NotSupportedException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit(__this, message);
}

NotSupportedException* NotSupportedException__New_4(::uStatic* __this, ::uString* message)
{
    NotSupportedException* inst = (::app::Uno::NotSupportedException*)::uAllocObject(sizeof(::app::Uno::NotSupportedException), ::app::Uno::NotSupportedException__typeof());
    inst->_ObjInit_3(message);
    return inst;
}

}}
