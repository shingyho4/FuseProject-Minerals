// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\ShaderBackends\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/OpenGL.GL.h>
#include <app/OpenGL.GLFramebufferHandle.h>
#include <app/OpenGL.GLProgramHandle.h>
#include <app/OpenGL.GLRenderbufferHandle.h>
#include <app/OpenGL.GLShaderHandle.h>
#include <app/OpenGL.GLTextureHandle.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Graphics.RenderTarget.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLException.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace ShaderBackends {
namespace OpenGL {

GLHelpers__uType* GLHelpers__typeof()
{
    static GLHelpers__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GLHelpers__uType*)::uAllocClassType(sizeof(GLHelpers__uType), "Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void GLHelpers__CheckError(::uStatic* __this)
{
    int err = ::app::OpenGL::GL__GetError(NULL);

    if (err != 0)
    {
        ::app::Uno::Diagnostics::Debug__Log_2(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("GL error ("), ::uBox< int>(::app::Uno::Int__typeof(), err)), ::uGetConstString(")")), 3);
    }
}

void GLHelpers__CheckFramebufferStatus(::uStatic* __this)
{
    int status = ::app::OpenGL::GL__CheckFramebufferStatus(NULL, 36160);

    if (status != 36053)
    {
        ::app::Uno::Diagnostics::Debug__Log_2(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Incomplete GL framebuffer ("), ::uBox< int>(::app::Uno::Int__typeof(), status)), ::uGetConstString(")")), 3);
    }
}

void GLHelpers__TexImage2DFromBuffer(::uStatic* __this, int target, int w, int h, int mip, int format, ::app::Uno::Buffer* data)
{
    switch (format)
    {
        case 1:
        {
            ::app::OpenGL::GL__TexImage2D(NULL, target, mip, 6409, w, h, 0, 6409, 5121, data);
            break;
        }
        case 2:
        {
            ::app::OpenGL::GL__TexImage2D(NULL, target, mip, 6410, w, h, 0, 6410, 5121, data);
            break;
        }
        case 3:
        {
            ::app::OpenGL::GL__TexImage2D(NULL, target, mip, 6408, w, h, 0, 6408, 5121, data);
            break;
        }
        case 4:
        {
            ::app::OpenGL::GL__TexImage2D(NULL, target, mip, 6408, w, h, 0, 6408, 32819, data);
            break;
        }
        case 5:
        {
            ::app::OpenGL::GL__TexImage2D(NULL, target, mip, 6408, w, h, 0, 6408, 32820, data);
            break;
        }
        case 6:
        {
            ::app::OpenGL::GL__TexImage2D(NULL, target, mip, 6407, w, h, 0, 6407, 33635, data);
            break;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported texture format")));
        }
    }
}

::app::Uno::Graphics::RenderTarget* GLHelpers__CreateRenderTarget(::uStatic* __this, int colorTarget, ::uUInt colorBuffer, int mip, ::app::Uno::Int2 size, bool depth)
{
    return GLHelpers__CreateRenderTarget_1(NULL, colorTarget, colorBuffer, mip, size, depth ? GLHelpers__CreateDepthBuffer(NULL, size) : ::app::OpenGL::GLRenderbufferHandle__Zero, true);
}

::app::Uno::Graphics::RenderTarget* GLHelpers__CreateRenderTarget_1(::uStatic* __this, int colorTarget, ::uUInt colorBuffer, int mip, ::app::Uno::Int2 size, ::uUInt depthBuffer, bool ownsDepthBuffer)
{
    ::app::Uno::Graphics::RenderTarget* result = ::app::Uno::Graphics::RenderTarget__New_1(NULL);
    ::uUInt prevHandle = ::app::OpenGL::GL__GetFramebufferBinding(NULL);
    ::uUInt handle = ::app::OpenGL::GL__CreateFramebuffer(NULL);
    ::uPtr< ::app::Uno::Graphics::RenderTarget*>(result)->GLFramebufferHandle(handle);
    result->OwnsGLFramebufferHandle(true);
    result->Size(size);
    ::app::OpenGL::GL__BindFramebuffer(NULL, 36160, handle);
    ::app::OpenGL::GL__FramebufferTexture2D(NULL, 36160, 36064, colorTarget, colorBuffer, mip);

    if (::app::OpenGL::GLRenderbufferHandle__op_Inequality(NULL, depthBuffer, ::app::OpenGL::GLRenderbufferHandle__Zero))
    {
        ::app::OpenGL::GL__FramebufferRenderbuffer(NULL, 36160, 36096, 36161, depthBuffer);
        ::uPtr< ::app::Uno::Graphics::RenderTarget*>(result)->GLDepthBufferHandle(depthBuffer);
        result->OwnsGLDepthBufferHandle(ownsDepthBuffer);
        result->HasDepth(true);
    }

    GLHelpers__CheckFramebufferStatus(NULL);
    GLHelpers__CheckError(NULL);
    ::app::OpenGL::GL__BindFramebuffer(NULL, 36160, prevHandle);
    return result;
}

::uUInt GLHelpers__CreateDepthBuffer(::uStatic* __this, ::app::Uno::Int2 size)
{
    ::uUInt prevHandle = ::app::OpenGL::GL__GetRenderbufferBinding(NULL);
    ::uUInt handle = ::app::OpenGL::GL__CreateRenderbuffer(NULL);
    ::app::OpenGL::GL__BindRenderbuffer(NULL, 36161, handle);
    ::app::OpenGL::GL__RenderbufferStorage(NULL, 36161, 33189, size.X, size.Y);
    ::app::OpenGL::GL__BindRenderbuffer(NULL, 36161, prevHandle);
    return handle;
}

::uUInt GLHelpers__CompileShader(::uStatic* __this, int type, ::uString* source)
{
    ::uUInt handle = ::app::OpenGL::GL__CreateShader(NULL, type);
    ::app::OpenGL::GL__ShaderSource(NULL, handle, source);
    ::app::OpenGL::GL__CompileShader(NULL, handle);

    if (::app::OpenGL::GL__GetShaderParameter(NULL, handle, 35713) != 1)
    {
        ::uString* log = ::app::OpenGL::GL__GetShaderInfoLog(NULL, handle);
        U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Error compiling shader ("), ::uBox< int>(::app::Uno::Int__typeof(), type)), ::uGetConstString("):\n\n")), log), ::uGetConstString("\n\nSource:\n\n")), source)));
    }

    GLHelpers__CheckError(NULL);
    return handle;
}

::uUInt GLHelpers__LinkProgram(::uStatic* __this, ::uUInt vertexShader, ::uUInt fragmentShader)
{
    ::uUInt handle = ::app::OpenGL::GL__CreateProgram(NULL);
    ::app::OpenGL::GL__AttachShader(NULL, handle, vertexShader);
    ::app::OpenGL::GL__AttachShader(NULL, handle, fragmentShader);
    ::app::OpenGL::GL__LinkProgram(NULL, handle);

    if (::app::OpenGL::GL__GetProgramParameter(NULL, handle, 35714) != 1)
    {
        ::uString* log = ::app::OpenGL::GL__GetProgramInfoLog(NULL, handle);
        U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Error linking shader program:\n\n"), log)));
    }

    ::app::OpenGL::GL__UseProgram(NULL, handle);
    GLHelpers__CheckError(NULL);
    return handle;
}

}}}}}}
