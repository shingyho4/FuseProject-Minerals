// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.IO.IOException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace IO {

IOException__uType* IOException__typeof()
{
    static IOException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (IOException__uType*)::uAllocClassType(sizeof(IOException__uType), "Uno.IO.IOException", ::app::Uno::Exception__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void IOException___ObjInit_2(IOException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit(__this, message);
}

IOException* IOException__New_3(::uStatic* __this, ::uString* message)
{
    IOException* inst = (::app::Uno::IO::IOException*)::uAllocObject(sizeof(::app::Uno::IO::IOException), ::app::Uno::IO::IOException__typeof());
    inst->_ObjInit_2(message);
    return inst;
}

}}}
