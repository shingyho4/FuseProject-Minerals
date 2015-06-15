// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.IndexOutOfRangeException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

IndexOutOfRangeException__uType* IndexOutOfRangeException__typeof()
{
    static IndexOutOfRangeException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (IndexOutOfRangeException__uType*)::uAllocClassType(sizeof(IndexOutOfRangeException__uType), "Uno.IndexOutOfRangeException", ::app::Uno::Exception__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void IndexOutOfRangeException___ObjInit_2(IndexOutOfRangeException* __this)
{
    ::app::Uno::Exception___ObjInit(__this, ::uGetConstString("Index out of range"));
}

IndexOutOfRangeException* IndexOutOfRangeException__New_3(::uStatic* __this)
{
    IndexOutOfRangeException* inst = (::app::Uno::IndexOutOfRangeException*)::uAllocObject(sizeof(::app::Uno::IndexOutOfRangeException), ::app::Uno::IndexOutOfRangeException__typeof());
    inst->_ObjInit_2();
    return inst;
}

}}
