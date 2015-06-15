// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GRAPHICS_RENDER_TARGET_H__
#define __APP_UNO_GRAPHICS_RENDER_TARGET_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }

namespace app {
namespace Uno {
namespace Graphics {

struct RenderTarget;

struct RenderTarget__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

RenderTarget__uType* RenderTarget__typeof();

::app::Uno::Int2 RenderTarget__get_Size(RenderTarget* __this);
void RenderTarget__set_Size(RenderTarget* __this, ::app::Uno::Int2 value);
bool RenderTarget__get_HasDepth(RenderTarget* __this);
void RenderTarget__set_HasDepth(RenderTarget* __this, bool value);
::uUInt RenderTarget__get_GLFramebufferHandle(RenderTarget* __this);
void RenderTarget__set_GLFramebufferHandle(RenderTarget* __this, ::uUInt value);
::uUInt RenderTarget__get_GLDepthBufferHandle(RenderTarget* __this);
void RenderTarget__set_GLDepthBufferHandle(RenderTarget* __this, ::uUInt value);
bool RenderTarget__get_OwnsGLFramebufferHandle(RenderTarget* __this);
void RenderTarget__set_OwnsGLFramebufferHandle(RenderTarget* __this, bool value);
bool RenderTarget__get_OwnsGLDepthBufferHandle(RenderTarget* __this);
void RenderTarget__set_OwnsGLDepthBufferHandle(RenderTarget* __this, bool value);
bool RenderTarget__get_IsDisposed(RenderTarget* __this);
void RenderTarget__set_IsDisposed(RenderTarget* __this, bool value);
RenderTarget* RenderTarget__CreateFromTexture2D(::uStatic* __this, ::app::Uno::Graphics::Texture2D* texture, int mip, bool depth);
void RenderTarget__Dispose(RenderTarget* __this);
void RenderTarget___ObjInit(RenderTarget* __this);
RenderTarget* RenderTarget__New_1(::uStatic* __this);

struct RenderTarget : ::uObject
{
    ::app::Uno::Int2 _Size;
    bool _HasDepth;
    ::uUInt _GLFramebufferHandle;
    ::uUInt _GLDepthBufferHandle;
    bool _OwnsGLFramebufferHandle;
    bool _OwnsGLDepthBufferHandle;
    bool _IsDisposed;

    void Dispose() { RenderTarget__Dispose(this); }
    void _ObjInit() { RenderTarget___ObjInit(this); }
    ::app::Uno::Int2 Size();
    void Size(::app::Uno::Int2 value);
    bool HasDepth() { return RenderTarget__get_HasDepth(this); }
    void HasDepth(bool value) { RenderTarget__set_HasDepth(this, value); }
    ::uUInt GLFramebufferHandle() { return RenderTarget__get_GLFramebufferHandle(this); }
    void GLFramebufferHandle(::uUInt value) { RenderTarget__set_GLFramebufferHandle(this, value); }
    ::uUInt GLDepthBufferHandle() { return RenderTarget__get_GLDepthBufferHandle(this); }
    void GLDepthBufferHandle(::uUInt value) { RenderTarget__set_GLDepthBufferHandle(this, value); }
    bool OwnsGLFramebufferHandle() { return RenderTarget__get_OwnsGLFramebufferHandle(this); }
    void OwnsGLFramebufferHandle(bool value) { RenderTarget__set_OwnsGLFramebufferHandle(this, value); }
    bool OwnsGLDepthBufferHandle() { return RenderTarget__get_OwnsGLDepthBufferHandle(this); }
    void OwnsGLDepthBufferHandle(bool value) { RenderTarget__set_OwnsGLDepthBufferHandle(this, value); }
    bool IsDisposed() { return RenderTarget__get_IsDisposed(this); }
    void IsDisposed(bool value) { RenderTarget__set_IsDisposed(this, value); }
};

}}}

#include <app/OpenGL.GLFramebufferHandle.h>
#include <app/OpenGL.GLRenderbufferHandle.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Graphics {

inline ::app::Uno::Int2 RenderTarget::Size() { return RenderTarget__get_Size(this); }
inline void RenderTarget::Size(::app::Uno::Int2 value) { RenderTarget__set_Size(this, value); }

}}}


#endif
