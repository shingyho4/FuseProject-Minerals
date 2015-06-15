// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/OpenGL.GL.h>
#include <app/OpenGL.GLTextureHandle.h>
#include <app/Uno.Graphics.RenderTarget.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.TextureHelpers.h>
#include <app/Uno.Int.h>
#include <app/Uno.ObjectDisposedException.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Graphics {

RenderTarget__uType* RenderTarget__typeof()
{
    static RenderTarget__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (RenderTarget__uType*)::uAllocClassType(sizeof(RenderTarget__uType), "Uno.Graphics.RenderTarget", ::uObject__typeof(), 1);
        type->__interface_0.__fp_Dispose = (void(*)(void*))RenderTarget__Dispose;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(RenderTarget__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Int2 RenderTarget__get_Size(RenderTarget* __this)
{
    return __this->_Size;
}

void RenderTarget__set_Size(RenderTarget* __this, ::app::Uno::Int2 value)
{
    __this->_Size = value;
}

bool RenderTarget__get_HasDepth(RenderTarget* __this)
{
    return __this->_HasDepth;
}

void RenderTarget__set_HasDepth(RenderTarget* __this, bool value)
{
    __this->_HasDepth = value;
}

::uUInt RenderTarget__get_GLFramebufferHandle(RenderTarget* __this)
{
    return __this->_GLFramebufferHandle;
}

void RenderTarget__set_GLFramebufferHandle(RenderTarget* __this, ::uUInt value)
{
    __this->_GLFramebufferHandle = value;
}

::uUInt RenderTarget__get_GLDepthBufferHandle(RenderTarget* __this)
{
    return __this->_GLDepthBufferHandle;
}

void RenderTarget__set_GLDepthBufferHandle(RenderTarget* __this, ::uUInt value)
{
    __this->_GLDepthBufferHandle = value;
}

bool RenderTarget__get_OwnsGLFramebufferHandle(RenderTarget* __this)
{
    return __this->_OwnsGLFramebufferHandle;
}

void RenderTarget__set_OwnsGLFramebufferHandle(RenderTarget* __this, bool value)
{
    __this->_OwnsGLFramebufferHandle = value;
}

bool RenderTarget__get_OwnsGLDepthBufferHandle(RenderTarget* __this)
{
    return __this->_OwnsGLDepthBufferHandle;
}

void RenderTarget__set_OwnsGLDepthBufferHandle(RenderTarget* __this, bool value)
{
    __this->_OwnsGLDepthBufferHandle = value;
}

bool RenderTarget__get_IsDisposed(RenderTarget* __this)
{
    return __this->_IsDisposed;
}

void RenderTarget__set_IsDisposed(RenderTarget* __this, bool value)
{
    __this->_IsDisposed = value;
}

RenderTarget* RenderTarget__CreateFromTexture2D(::uStatic* __this, ::app::Uno::Graphics::Texture2D* texture, int mip, bool depth)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers__CreateRenderTarget(NULL, 3553, ::uPtr< ::app::Uno::Graphics::Texture2D*>(texture)->GLTextureHandle(), mip, ::app::Uno::Graphics::TextureHelpers__GetMipSize(NULL, texture, mip), depth);
}

void RenderTarget__Dispose(RenderTarget* __this)
{
    if (__this->IsDisposed())
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("RenderTarget")));
    }
    else
    {
        if (__this->OwnsGLDepthBufferHandle() && ::app::OpenGL::GLRenderbufferHandle__op_Inequality(NULL, __this->GLDepthBufferHandle(), ::app::OpenGL::GLRenderbufferHandle__Zero))
        {
            ::app::OpenGL::GL__DeleteRenderbuffer(NULL, __this->GLDepthBufferHandle());
        }

        if (__this->OwnsGLFramebufferHandle() && ::app::OpenGL::GLFramebufferHandle__op_Inequality(NULL, __this->GLFramebufferHandle(), ::app::OpenGL::GLFramebufferHandle__Zero))
        {
            ::app::OpenGL::GL__DeleteFramebuffer(NULL, __this->GLFramebufferHandle());
        }
    }

    __this->IsDisposed(true);
}

void RenderTarget___ObjInit(RenderTarget* __this)
{
}

RenderTarget* RenderTarget__New_1(::uStatic* __this)
{
    RenderTarget* inst = (::app::Uno::Graphics::RenderTarget*)::uAllocObject(sizeof(::app::Uno::Graphics::RenderTarget), ::app::Uno::Graphics::RenderTarget__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
