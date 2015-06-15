// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/OpenGL.GL.h>
#include <app/OpenGL.GLFramebufferHandle.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Graphics.GraphicsContext.h>
#include <app/Uno.Graphics.RenderTarget.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Math.h>
#include <app/Uno.Runtime.Implementation.GraphicsContextHandle.h>
#include <app/Uno.Runtime.Implementation.GraphicsContextImpl.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Graphics {

GraphicsContext__uType* GraphicsContext__typeof()
{
    static GraphicsContext__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GraphicsContext__uType*)::uAllocClassType(sizeof(GraphicsContext__uType), "Uno.Graphics.GraphicsContext", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(GraphicsContext, _backbuffer);
        type->StrongRefOffsets[1] = offsetof(GraphicsContext, _renderTarget);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_backbuffer";
        type->StrongRefNames[1] = "_renderTarget";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Graphics::RenderTarget* GraphicsContext__get_Backbuffer(GraphicsContext* __this)
{
    return __this->_backbuffer;
}

::app::Uno::Graphics::RenderTarget* GraphicsContext__get_RenderTarget(GraphicsContext* __this)
{
    return __this->_renderTarget;
}

::app::Uno::Recti GraphicsContext__get_Scissor(GraphicsContext* __this)
{
    return __this->_scissor;
}

void GraphicsContext__set_Scissor(GraphicsContext* __this, ::app::Uno::Recti value)
{
    if (!__this->_scissorEnabled)
    {
        ::app::OpenGL::GL__Enable(NULL, 3089);
        __this->_scissorEnabled = true;
    }

    __this->_scissor = value;

    if (__this->_renderTarget == __this->_backbuffer)
    {
        ::app::Uno::Int2 offset = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetBackbufferOffset(NULL, __this->_handle);
        int realFbHeight = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetRealBackbufferHeight(NULL, __this->_handle);
        ::app::Uno::Recti offsetScissor = ::app::Uno::Recti__New_2(NULL, ::app::Uno::Int2__op_Addition(NULL, __this->_scissor.Position(), offset), __this->_scissor.Size());
        ::app::Uno::Recti currentScissor = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetBackbufferScissor(NULL, __this->_handle);
        ::app::Uno::Recti clippedScissor = ::app::Uno::Recti__New_1(NULL, ::app::Uno::Math__Max_8(NULL, offsetScissor.Left, currentScissor.Left), ::app::Uno::Math__Max_8(NULL, offsetScissor.Top, currentScissor.Top), ::app::Uno::Math__Min_8(NULL, offsetScissor.Right, currentScissor.Right), ::app::Uno::Math__Min_8(NULL, offsetScissor.Bottom, currentScissor.Bottom));
        ::app::OpenGL::GL__Scissor(NULL, clippedScissor.Left, realFbHeight - clippedScissor.Bottom, ::app::Uno::Math__Max_8(NULL, 0, clippedScissor.Size().X), ::app::Uno::Math__Max_8(NULL, 0, clippedScissor.Size().Y));
    }
    else
    {
        ::app::OpenGL::GL__Scissor(NULL, __this->_scissor.Left, ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_renderTarget)->Size().Y - __this->_scissor.Bottom, ::app::Uno::Math__Max_8(NULL, 0, __this->_scissor.Size().X), ::app::Uno::Math__Max_8(NULL, 0, __this->_scissor.Size().Y));
    }
}

::app::Uno::Recti GraphicsContext__get_Viewport(GraphicsContext* __this)
{
    return __this->_viewport;
}

void GraphicsContext__set_Viewport(GraphicsContext* __this, ::app::Uno::Recti value)
{
    __this->_viewport = value;

    if (__this->_renderTarget == __this->_backbuffer)
    {
        ::app::Uno::Int2 offset = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetBackbufferOffset(NULL, __this->_handle);
        int realFbHeight = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetRealBackbufferHeight(NULL, __this->_handle);
        ::app::Uno::Recti offsetViewport = ::app::Uno::Recti__New_2(NULL, ::app::Uno::Int2__op_Addition(NULL, __this->_viewport.Position(), offset), __this->_viewport.Size());
        ::app::OpenGL::GL__Viewport(NULL, offsetViewport.Left, realFbHeight - offsetViewport.Bottom, ::app::Uno::Math__Max_8(NULL, 0, offsetViewport.Size().X), ::app::Uno::Math__Max_8(NULL, 0, offsetViewport.Size().Y));
    }
    else
    {
        ::app::OpenGL::GL__Viewport(NULL, __this->_viewport.Left, ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_renderTarget)->Size().Y - __this->_viewport.Bottom, ::app::Uno::Math__Max_8(NULL, 0, __this->_viewport.Size().X), ::app::Uno::Math__Max_8(NULL, 0, __this->_viewport.Size().Y));
    }
}

void GraphicsContext__UpdateBackbuffer(GraphicsContext* __this)
{
    ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_backbuffer)->GLFramebufferHandle(::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetBackbufferGLHandle(NULL, __this->_handle));
    ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_backbuffer)->Size(::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetBackbufferSize(NULL, __this->_handle));
    ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_backbuffer)->HasDepth(true);
}

void GraphicsContext__SetRenderTarget(GraphicsContext* __this, ::app::Uno::Graphics::RenderTarget* renderTarget)
{
    if (renderTarget == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("renderTarget")));
    }

    ::app::Uno::Recti full = ::app::Uno::Recti__New_2(NULL, ::app::Uno::Int2__New_1(NULL, 0), ::uPtr< ::app::Uno::Graphics::RenderTarget*>(renderTarget)->Size());
    __this->SetRenderTarget_1(renderTarget, full, full);
}

void GraphicsContext__SetRenderTarget_1(GraphicsContext* __this, ::app::Uno::Graphics::RenderTarget* renderTarget, ::app::Uno::Recti viewport, ::app::Uno::Recti scissor)
{
    if (renderTarget == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("renderTarget")));
    }

    __this->_renderTarget = renderTarget;
    ::app::OpenGL::GL__BindFramebuffer(NULL, 36160, ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_renderTarget)->GLFramebufferHandle());
    __this->Viewport(viewport);
    __this->Scissor(scissor);
}

void GraphicsContext__Clear(GraphicsContext* __this, ::app::Uno::Float4 color, float depth)
{
    ::app::OpenGL::GL__ClearDepth(NULL, depth);
    ::app::OpenGL::GL__ClearColor(NULL, color.X, color.Y, color.Z, color.W);
    ::app::OpenGL::GL__Clear(NULL, 17664);
}

void GraphicsContext___ObjInit(GraphicsContext* __this)
{
    __this->_handle = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetInstance(NULL);
    __this->_renderTarget = __this->_backbuffer = ::app::Uno::Graphics::RenderTarget__New_1(NULL);
    __this->UpdateBackbuffer();
}

GraphicsContext* GraphicsContext__New_1(::uStatic* __this)
{
    GraphicsContext* inst = (::app::Uno::Graphics::GraphicsContext*)::uAllocObject(sizeof(::app::Uno::Graphics::GraphicsContext), ::app::Uno::Graphics::GraphicsContext__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
