// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.CacheFramebuffer.h>
#include <app/Fuse.FramebufferPool.h>
#include <app/Fuse.FramebufferPoolImpl.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>

namespace app {
namespace Fuse {

::uStaticStrong< ::app::Fuse::FramebufferPoolImpl*> FramebufferPool__framebufferPool;

FramebufferPool__uType* FramebufferPool__typeof()
{
    static FramebufferPool__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FramebufferPool__uType*)::uAllocClassType(sizeof(FramebufferPool__uType), "Fuse.FramebufferPool");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int FramebufferPool__get_Frame(::uStatic* __this)
{
    FramebufferPool__EnsurePool(NULL);
    return ::uPtr< ::app::Fuse::FramebufferPoolImpl*>(FramebufferPool__framebufferPool)->frame;
}

void FramebufferPool__EnsurePool(::uStatic* __this)
{
    if (FramebufferPool__framebufferPool == NULL)
    {
        FramebufferPool__framebufferPool = ::app::Fuse::FramebufferPoolImpl__New_1(NULL);
    }
}

void FramebufferPool__Register(::uStatic* __this, ::app::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool__EnsurePool(NULL);
    ::uPtr< ::app::Fuse::FramebufferPoolImpl*>(FramebufferPool__framebufferPool)->Register(cfb);
}

void FramebufferPool__UnRegister(::uStatic* __this, ::app::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool__EnsurePool(NULL);
    ::uPtr< ::app::Fuse::FramebufferPoolImpl*>(FramebufferPool__framebufferPool)->UnRegister(cfb);
}

::app::Uno::Graphics::Framebuffer* FramebufferPool__Lock(::uStatic* __this, ::app::Uno::Int2 size, int format, bool depth)
{
    return FramebufferPool__Lock_1(NULL, size.X, size.Y, format, depth);
}

::app::Uno::Graphics::Framebuffer* FramebufferPool__Lock_1(::uStatic* __this, int width, int height, int format, bool depth)
{
    FramebufferPool__EnsurePool(NULL);
    return ::uPtr< ::app::Fuse::FramebufferPoolImpl*>(FramebufferPool__framebufferPool)->Lock(width, height, format, depth);
}

void FramebufferPool__Release(::uStatic* __this, ::app::Uno::Graphics::Framebuffer* fb)
{
    FramebufferPool__EnsurePool(NULL);
    ::uPtr< ::app::Fuse::FramebufferPoolImpl*>(FramebufferPool__framebufferPool)->Release(fb);
}

}}
