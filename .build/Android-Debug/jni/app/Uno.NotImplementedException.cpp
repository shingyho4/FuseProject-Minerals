// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.NotImplementedException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

NotImplementedException__uType* NotImplementedException__typeof()
{
    static NotImplementedException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NotImplementedException__uType*)::uAllocClassType(sizeof(NotImplementedException__uType), "Uno.NotImplementedException", ::app::Uno::Exception__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void NotImplementedException___ObjInit_2(NotImplementedException* __this)
{
    ::app::Uno::Exception___ObjInit(__this, ::uGetConstString("Not implemented"));
}

NotImplementedException* NotImplementedException__New_3(::uStatic* __this)
{
    NotImplementedException* inst = (::app::Uno::NotImplementedException*)::uAllocObject(sizeof(::app::Uno::NotImplementedException), ::app::Uno::NotImplementedException__typeof());
    inst->_ObjInit_2();
    return inst;
}

}}
