// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.CacheFramebuffer.h>
#include <app/Fuse.FramebufferPool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {

CacheFramebuffer__uType* CacheFramebuffer__typeof()
{
    static CacheFramebuffer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (CacheFramebuffer__uType*)::uAllocClassType(sizeof(CacheFramebuffer__uType), "Fuse.CacheFramebuffer", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(CacheFramebuffer, _fb);
        type->StrongRefOffsets[1] = offsetof(CacheFramebuffer, _owner);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_fb";
        type->StrongRefNames[1] = "_owner";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool CacheFramebuffer__get_IsPinned(CacheFramebuffer* __this)
{
    return __this->_isPinned;
}

::app::Uno::Graphics::Framebuffer* CacheFramebuffer__get_Framebuffer(CacheFramebuffer* __this)
{
    __this->EnsurePinned();
    return __this->_fb;
}

bool CacheFramebuffer__get_IsContentValid(CacheFramebuffer* __this)
{
    __this->EnsurePinned();
    return __this->_isContentValid;
}

int CacheFramebuffer__get_FramesSinceLastUse(CacheFramebuffer* __this)
{
    return ::app::Fuse::FramebufferPool__get_Frame(NULL) - __this->_lastFrameUsed;
}

int CacheFramebuffer__get_Width(CacheFramebuffer* __this)
{
    return __this->_Width;
}

void CacheFramebuffer__set_Width(CacheFramebuffer* __this, int value)
{
    __this->_Width = value;
}

int CacheFramebuffer__get_Height(CacheFramebuffer* __this)
{
    return __this->_Height;
}

void CacheFramebuffer__set_Height(CacheFramebuffer* __this, int value)
{
    __this->_Height = value;
}

int CacheFramebuffer__get_Format(CacheFramebuffer* __this)
{
    return __this->_Format;
}

void CacheFramebuffer__set_Format(CacheFramebuffer* __this, int value)
{
    __this->_Format = value;
}

int CacheFramebuffer__get_Flags(CacheFramebuffer* __this)
{
    return __this->_Flags;
}

void CacheFramebuffer__set_Flags(CacheFramebuffer* __this, int value)
{
    __this->_Flags = value;
}

void CacheFramebuffer__EnsurePinned(CacheFramebuffer* __this)
{
    if (!__this->IsPinned())
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("Cannot access unpinned CacheFramebuffer")));
    }
}

void CacheFramebuffer__Collect(CacheFramebuffer* __this)
{
    if (__this->_fb != NULL)
    {
        ::app::Fuse::FramebufferPool__Release(NULL, __this->_fb);
    }

    __this->_fb = NULL;
    __this->_isContentValid = false;
}

void CacheFramebuffer__Dispose(CacheFramebuffer* __this)
{
    __this->Collect();
    ::app::Fuse::FramebufferPool__UnRegister(NULL, __this);
}

void CacheFramebuffer__Pin(CacheFramebuffer* __this)
{
    __this->_isPinned = true;
    __this->_lastFrameUsed = ::app::Fuse::FramebufferPool__get_Frame(NULL);

    if (__this->_fb == NULL)
    {
        __this->_fb = ::app::Fuse::FramebufferPool__Lock_1(NULL, __this->Width(), __this->Height(), __this->Format(), (__this->Flags() & 1) == 1);
        ::app::Fuse::FramebufferPool__Register(NULL, __this);
    }
}

void CacheFramebuffer__Unpin(CacheFramebuffer* __this, bool validate)
{
    __this->EnsurePinned();
    __this->_isPinned = false;

    if (validate)
    {
        __this->_isContentValid = true;
    }

    __this->_lastFrameUsed = ::app::Fuse::FramebufferPool__get_Frame(NULL);
}

void CacheFramebuffer___ObjInit(CacheFramebuffer* __this, ::uObject* owner, int width, int height, int format, int flags)
{
    __this->_owner = owner;
    __this->Width(width);
    __this->Height(height);
    __this->Format(format);
    __this->Flags(flags);
}

CacheFramebuffer* CacheFramebuffer__New_1(::uStatic* __this, ::uObject* owner, int width, int height, int format, int flags)
{
    CacheFramebuffer* inst = (::app::Fuse::CacheFramebuffer*)::uAllocObject(sizeof(::app::Fuse::CacheFramebuffer), ::app::Fuse::CacheFramebuffer__typeof());
    inst->_ObjInit(owner, width, height, format, flags);
    return inst;
}

}}
