// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Platform.Window.h>
#include <app/Uno.Runtime.Implementation.Internal.WindowHelpers.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowHandle.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

WindowHelpers__uType* WindowHelpers__typeof()
{
    static WindowHelpers__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (WindowHelpers__uType*)::uAllocClassType(sizeof(WindowHelpers__uType), "Uno.Runtime.Implementation.Internal.WindowHelpers");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::Xli::Window* WindowHelpers__GetPlatformWindowHandle(::uStatic* __this, ::app::Uno::Platform::Window* wnd)
{
    return ::uPtr< ::app::Uno::Platform::Window*>(wnd)->_handle;
}

}}}}}
