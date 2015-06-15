// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/OpenGL.GLFramebufferHandle.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Platform2.Display.h>
#include <app/Uno.Rect.h>
#include <app/Uno.Recti.h>
#include <app/Uno.Runtime.Implementation.GraphicsContextHandle.h>
#include <app/Uno.Runtime.Implementation.GraphicsContextImpl.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

GraphicsContextImpl__uType* GraphicsContextImpl__typeof()
{
    static GraphicsContextImpl__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GraphicsContextImpl__uType*)::uAllocClassType(sizeof(GraphicsContextImpl__uType), "Uno.Runtime.Implementation.GraphicsContextImpl");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uGraphicsContext GraphicsContextImpl__GetInstance(::uStatic* __this)
{
    return uGraphicsContext::GetInstance();
}

::uUInt GraphicsContextImpl__GetBackbufferGLHandle(::uStatic* __this, ::uGraphicsContext __handle)
{
    return __handle.GetBackbufferGLHandle();
}

::app::Uno::Int2 GraphicsContextImpl__GetBackbufferSize(::uStatic* __this, ::uGraphicsContext handle)
{
    ::app::Uno::Float2 size = ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->Frame().Size();
    return ::app::Uno::Int2__New_2(NULL, (int)size.X, (int)size.Y);
}

::app::Uno::Int2 GraphicsContextImpl__GetBackbufferOffset(::uStatic* __this, ::uGraphicsContext handle)
{
    return ::app::Uno::Int2__New_2(NULL, 0, 0);
}

::app::Uno::Recti GraphicsContextImpl__GetBackbufferScissor(::uStatic* __this, ::uGraphicsContext handle)
{
    return ::app::Uno::Recti__New_2(NULL, GraphicsContextImpl__GetBackbufferOffset(NULL, handle), GraphicsContextImpl__GetBackbufferSize(NULL, handle));
}

int GraphicsContextImpl__GetRealBackbufferHeight(::uStatic* __this, ::uGraphicsContext handle)
{
    return GraphicsContextImpl__GetBackbufferSize(NULL, handle).Y;
}

}}}}
