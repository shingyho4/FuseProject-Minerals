// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.IO.EndOfStreamException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace IO {

EndOfStreamException__uType* EndOfStreamException__typeof()
{
    static EndOfStreamException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EndOfStreamException__uType*)::uAllocClassType(sizeof(EndOfStreamException__uType), "Uno.IO.EndOfStreamException", ::app::Uno::IO::IOException__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void EndOfStreamException___ObjInit_3(EndOfStreamException* __this)
{
    ::app::Uno::IO::IOException___ObjInit_2(__this, ::uGetConstString("Reached end of stream"));
}

EndOfStreamException* EndOfStreamException__New_4(::uStatic* __this)
{
    EndOfStreamException* inst = (::app::Uno::IO::EndOfStreamException*)::uAllocObject(sizeof(::app::Uno::IO::EndOfStreamException), ::app::Uno::IO::EndOfStreamException__typeof());
    inst->_ObjInit_3();
    return inst;
}

}}}
