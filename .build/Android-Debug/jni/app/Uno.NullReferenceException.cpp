// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.NullReferenceException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

NullReferenceException__uType* NullReferenceException__typeof()
{
    static NullReferenceException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NullReferenceException__uType*)::uAllocClassType(sizeof(NullReferenceException__uType), "Uno.NullReferenceException", ::app::Uno::Exception__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void NullReferenceException___ObjInit_2(NullReferenceException* __this)
{
    ::app::Uno::Exception___ObjInit(__this, ::uGetConstString("Object reference was null"));
}

NullReferenceException* NullReferenceException__New_3(::uStatic* __this)
{
    NullReferenceException* inst = (::app::Uno::NullReferenceException*)::uAllocObject(sizeof(::app::Uno::NullReferenceException), ::app::Uno::NullReferenceException__typeof());
    inst->_ObjInit_2();
    return inst;
}

}}
