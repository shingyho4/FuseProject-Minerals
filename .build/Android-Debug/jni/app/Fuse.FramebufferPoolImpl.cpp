// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.CacheFramebuffer.h>
#include <app/Fuse.FramebufferPoolImpl.h>
#include <app/Fuse.Profiling.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Action.h>
#include <app/Uno.Collections.Dictionary__framebuffer__int.h>
#include <app/Uno.Collections.HashSet__framebuffer.h>
#include <app/Uno.Collections.List__framebuffer.h>
#include <app/Uno.Collections.List__Fuse_CacheFramebuffer.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_CacheFramebuffer.h>
#include <app/Uno.Diagnostics.Clock.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {

FramebufferPoolImpl__uType* FramebufferPoolImpl__typeof()
{
    static FramebufferPoolImpl__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FramebufferPoolImpl__uType*)::uAllocClassType(sizeof(FramebufferPoolImpl__uType), "Fuse.FramebufferPoolImpl", ::uObject__typeof(), 0, 4);
        type->StrongRefOffsets[0] = offsetof(FramebufferPoolImpl, framebufferPool);
        type->StrongRefOffsets[1] = offsetof(FramebufferPoolImpl, lastFrameUsed);
        type->StrongRefOffsets[2] = offsetof(FramebufferPoolImpl, lockedFramebuffers);
        type->StrongRefOffsets[3] = offsetof(FramebufferPoolImpl, cacheFramebuffers);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "framebufferPool";
        type->StrongRefNames[1] = "lastFrameUsed";
        type->StrongRefNames[2] = "lockedFramebuffers";
        type->StrongRefNames[3] = "cacheFramebuffers";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Graphics::Framebuffer* FramebufferPoolImpl__FindBuffer(FramebufferPoolImpl* __this, int width, int height, int format, int flags)
{
    width = ::app::Uno::Math__Max_8(NULL, 1, width);
    height = ::app::Uno::Math__Max_8(NULL, 1, height);

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->framebufferPool)->Count(); i++)
    {
        ::app::Uno::Graphics::Framebuffer* fb = ::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->framebufferPool)->Item(i);

        if (::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->Size().X != width)
        {
            continue;
        }

        if (::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->Size().Y != height)
        {
            continue;
        }

        if (::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->Format() != format)
        {
            continue;
        }

        if (::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->HasDepth() != ((flags & 1) == 1))
        {
            continue;
        }

        if (::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->SupportsMipmap() != ((flags & 2) == 2))
        {
            continue;
        }

        ::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->framebufferPool)->RemoveAt(i);
        ::uPtr< ::app::Uno::Collections::HashSet__framebuffer*>(__this->lockedFramebuffers)->Add(fb);
        ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__int*>(__this->lastFrameUsed)->Item(fb, __this->frame);
        return fb;
    }

    int maxSize = ::app::Uno::Graphics::Texture2D__get_MaxSize(NULL);

    if ((width > maxSize) || (height > maxSize))
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Attempted to allocate "), ::uBox< int>(::app::Uno::Int__typeof(), width)), ::uGetConstString("x")), ::uBox< int>(::app::Uno::Int__typeof(), height)), ::uGetConstString(" framebuffer, max is ")), ::uBox< int>(::app::Uno::Int__typeof(), maxSize)), ::uGetConstString("x")), ::uBox< int>(::app::Uno::Int__typeof(), maxSize))));
    }

    double t = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL);
    ::app::Uno::Graphics::Framebuffer* buffer = ::app::Uno::Graphics::Framebuffer__New_1(NULL, ::app::Uno::Int2__New_2(NULL, width, height), format, flags);
    ::app::Fuse::Profiling__NewFramebuffer(NULL, buffer, ::app::Uno::Diagnostics::Clock__GetSeconds(NULL) - t);
    return buffer;
}

void FramebufferPoolImpl__Register(FramebufferPoolImpl* __this, ::app::Fuse::CacheFramebuffer* cfb)
{
    __this->framebuffersProvidedSinceLastCollect = __this->framebuffersProvidedSinceLastCollect + 1;
    __this->pixelsProvidedSinceLastCollect = __this->pixelsProvidedSinceLastCollect + (::uPtr< ::app::Fuse::CacheFramebuffer*>(cfb)->Width() * ::uPtr< ::app::Fuse::CacheFramebuffer*>(cfb)->Height());
    ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->cacheFramebuffers)->Add(cfb);

    if (__this->pixelsProvidedSinceLastCollect > 10000000)
    {
        __this->CollectCacheFramebuffers();
    }
    else if (__this->framebuffersProvidedSinceLastCollect > 50)
    {
        __this->CollectCacheFramebuffers();
    }
}

void FramebufferPoolImpl__UnRegister(FramebufferPoolImpl* __this, ::app::Fuse::CacheFramebuffer* cfb)
{
    __this->framebuffersProvidedSinceLastCollect = 0;
    __this->pixelsProvidedSinceLastCollect = __this->pixelsProvidedSinceLastCollect - (::uPtr< ::app::Fuse::CacheFramebuffer*>(cfb)->Width() * ::uPtr< ::app::Fuse::CacheFramebuffer*>(cfb)->Height());
    ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->cacheFramebuffers)->Remove(cfb);
}

void FramebufferPoolImpl__CollectCacheFramebuffers(FramebufferPoolImpl* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->cacheFramebuffers)->Count() < 3)
    {
        return;
    }

    int sum = 0;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_CacheFramebuffer enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->cacheFramebuffers)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::CacheFramebuffer* cfb = enum_123.Current();
        sum = sum + ::uPtr< ::app::Fuse::CacheFramebuffer*>(cfb)->FramesSinceLastUse();
    }

    int avg = sum / ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->cacheFramebuffers)->Count();
    int limit = avg + 3;

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->cacheFramebuffers)->Count(); i++)
    {
        ::app::Fuse::CacheFramebuffer* c = ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->cacheFramebuffers)->Item(i);

        if (!::uPtr< ::app::Fuse::CacheFramebuffer*>(c)->IsPinned() && (::uPtr< ::app::Fuse::CacheFramebuffer*>(c)->FramesSinceLastUse() >= limit))
        {
            ::uPtr< ::app::Fuse::CacheFramebuffer*>(c)->Collect();
            ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->cacheFramebuffers)->RemoveAt(i--);
        }
    }

    __this->framebuffersProvidedSinceLastCollect = 0;
    __this->pixelsProvidedSinceLastCollect = 0;
}

::app::Uno::Graphics::Framebuffer* FramebufferPoolImpl__Lock(FramebufferPoolImpl* __this, int width, int height, int format, bool depth)
{
    ::app::Uno::Graphics::Framebuffer* fb = __this->FindBuffer(width, height, format, depth ? 1 : 0);
    ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__int*>(__this->lastFrameUsed)->Item(fb, __this->frame);
    ::uPtr< ::app::Uno::Collections::HashSet__framebuffer*>(__this->lockedFramebuffers)->Add(fb);
    return fb;
}

void FramebufferPoolImpl__Release(FramebufferPoolImpl* __this, ::app::Uno::Graphics::Framebuffer* fb)
{
    if (::uPtr< ::app::Uno::Collections::HashSet__framebuffer*>(__this->lockedFramebuffers)->Contains(fb))
    {
        ::uPtr< ::app::Uno::Collections::HashSet__framebuffer*>(__this->lockedFramebuffers)->Remove(fb);
        ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__int*>(__this->lastFrameUsed)->Item(fb, __this->frame);
        ::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->framebufferPool)->Add(fb);
    }
}

void FramebufferPoolImpl__Update(FramebufferPoolImpl* __this)
{
    __this->frame++;

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->framebufferPool)->Count(); i++)
    {
        ::app::Uno::Graphics::Framebuffer* fb = ::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->framebufferPool)->Item(i);
        int framesSinceUse = int();
        ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__int*>(__this->lastFrameUsed)->TryGetValue(fb, &framesSinceUse);
        framesSinceUse = __this->frame - framesSinceUse;

        if (framesSinceUse < 0)
        {
            U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("Pool is leaking")));
        }

        if (framesSinceUse > 1)
        {
            ::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->Dispose();
            ::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->framebufferPool)->RemoveAt(i--);
            ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__int*>(__this->lastFrameUsed)->Remove(fb);
        }
    }
}

void FramebufferPoolImpl___ObjInit(FramebufferPoolImpl* __this)
{
    __this->framebufferPool = ::app::Uno::Collections::List__framebuffer__New_1(NULL);
    __this->lastFrameUsed = ::app::Uno::Collections::Dictionary__framebuffer__int__New_1(NULL);
    __this->lockedFramebuffers = ::app::Uno::Collections::HashSet__framebuffer__New_1(NULL);
    __this->cacheFramebuffers = ::app::Uno::Collections::List__Fuse_CacheFramebuffer__New_1(NULL);
    ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::FramebufferPoolImpl__Update, __this), 0);
}

FramebufferPoolImpl* FramebufferPoolImpl__New_1(::uStatic* __this)
{
    FramebufferPoolImpl* inst = (::app::Fuse::FramebufferPoolImpl*)::uAllocObject(sizeof(::app::Fuse::FramebufferPoolImpl), ::app::Fuse::FramebufferPoolImpl__typeof());
    inst->_ObjInit();
    return inst;
}

}}
