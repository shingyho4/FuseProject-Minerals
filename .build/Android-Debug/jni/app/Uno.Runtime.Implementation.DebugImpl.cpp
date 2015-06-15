// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.DebugImpl.h>
#include <app/Uno.String.h>
#include <Uno/XliInterop.h>
#include <Xli.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

DebugImpl__uType* DebugImpl__typeof()
{
    static DebugImpl__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DebugImpl__uType*)::uAllocClassType(sizeof(DebugImpl__uType), "Uno.Runtime.Implementation.DebugImpl");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void DebugImpl__Log(::uStatic* __this, ::uString* __message, int __type)
{
    Xli::PrintLine(::uStringToXliString(__message));
    Xli::Out->GetStream()->Flush();
}

}}}}
