// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_FRAMEBUFFER_POOL_IMPL_H__
#define __APP_FUSE_FRAMEBUFFER_POOL_IMPL_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct CacheFramebuffer; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__framebuffer__int; } } }
namespace app { namespace Uno { namespace Collections { struct HashSet__framebuffer; } } }
namespace app { namespace Uno { namespace Collections { struct List__framebuffer; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_CacheFramebuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Fuse {

struct FramebufferPoolImpl;

struct FramebufferPoolImpl__uType : ::uClassType
{
};

FramebufferPoolImpl__uType* FramebufferPoolImpl__typeof();

::app::Uno::Graphics::Framebuffer* FramebufferPoolImpl__FindBuffer(FramebufferPoolImpl* __this, int width, int height, int format, int flags);
void FramebufferPoolImpl__Register(FramebufferPoolImpl* __this, ::app::Fuse::CacheFramebuffer* cfb);
void FramebufferPoolImpl__UnRegister(FramebufferPoolImpl* __this, ::app::Fuse::CacheFramebuffer* cfb);
void FramebufferPoolImpl__CollectCacheFramebuffers(FramebufferPoolImpl* __this);
::app::Uno::Graphics::Framebuffer* FramebufferPoolImpl__Lock(FramebufferPoolImpl* __this, int width, int height, int format, bool depth);
void FramebufferPoolImpl__Release(FramebufferPoolImpl* __this, ::app::Uno::Graphics::Framebuffer* fb);
void FramebufferPoolImpl__Update(FramebufferPoolImpl* __this);
void FramebufferPoolImpl___ObjInit(FramebufferPoolImpl* __this);
FramebufferPoolImpl* FramebufferPoolImpl__New_1(::uStatic* __this);

struct FramebufferPoolImpl : ::uObject
{
    int frame;
    ::uStrong< ::app::Uno::Collections::List__framebuffer*> framebufferPool;
    ::uStrong< ::app::Uno::Collections::Dictionary__framebuffer__int*> lastFrameUsed;
    ::uStrong< ::app::Uno::Collections::HashSet__framebuffer*> lockedFramebuffers;
    ::uStrong< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*> cacheFramebuffers;
    int framebuffersProvidedSinceLastCollect;
    int pixelsProvidedSinceLastCollect;

    ::app::Uno::Graphics::Framebuffer* FindBuffer(int width, int height, int format, int flags) { return FramebufferPoolImpl__FindBuffer(this, width, height, format, flags); }
    void Register(::app::Fuse::CacheFramebuffer* cfb) { FramebufferPoolImpl__Register(this, cfb); }
    void UnRegister(::app::Fuse::CacheFramebuffer* cfb) { FramebufferPoolImpl__UnRegister(this, cfb); }
    void CollectCacheFramebuffers() { FramebufferPoolImpl__CollectCacheFramebuffers(this); }
    ::app::Uno::Graphics::Framebuffer* Lock(int width, int height, int format, bool depth) { return FramebufferPoolImpl__Lock(this, width, height, format, depth); }
    void Release(::app::Uno::Graphics::Framebuffer* fb) { FramebufferPoolImpl__Release(this, fb); }
    void Update() { FramebufferPoolImpl__Update(this); }
    void _ObjInit() { FramebufferPoolImpl___ObjInit(this); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {

}}


#endif
