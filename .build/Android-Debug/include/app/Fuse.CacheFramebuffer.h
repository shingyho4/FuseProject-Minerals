// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CACHE_FRAMEBUFFER_H__
#define __APP_FUSE_CACHE_FRAMEBUFFER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Fuse {

struct CacheFramebuffer;

struct CacheFramebuffer__uType : ::uClassType
{
};

CacheFramebuffer__uType* CacheFramebuffer__typeof();

bool CacheFramebuffer__get_IsPinned(CacheFramebuffer* __this);
::app::Uno::Graphics::Framebuffer* CacheFramebuffer__get_Framebuffer(CacheFramebuffer* __this);
bool CacheFramebuffer__get_IsContentValid(CacheFramebuffer* __this);
int CacheFramebuffer__get_FramesSinceLastUse(CacheFramebuffer* __this);
int CacheFramebuffer__get_Width(CacheFramebuffer* __this);
void CacheFramebuffer__set_Width(CacheFramebuffer* __this, int value);
int CacheFramebuffer__get_Height(CacheFramebuffer* __this);
void CacheFramebuffer__set_Height(CacheFramebuffer* __this, int value);
int CacheFramebuffer__get_Format(CacheFramebuffer* __this);
void CacheFramebuffer__set_Format(CacheFramebuffer* __this, int value);
int CacheFramebuffer__get_Flags(CacheFramebuffer* __this);
void CacheFramebuffer__set_Flags(CacheFramebuffer* __this, int value);
void CacheFramebuffer__EnsurePinned(CacheFramebuffer* __this);
void CacheFramebuffer__Collect(CacheFramebuffer* __this);
void CacheFramebuffer__Dispose(CacheFramebuffer* __this);
void CacheFramebuffer__Pin(CacheFramebuffer* __this);
void CacheFramebuffer__Unpin(CacheFramebuffer* __this, bool validate);
void CacheFramebuffer___ObjInit(CacheFramebuffer* __this, ::uObject* owner, int width, int height, int format, int flags);
CacheFramebuffer* CacheFramebuffer__New_1(::uStatic* __this, ::uObject* owner, int width, int height, int format, int flags);

struct CacheFramebuffer : ::uObject
{
    bool _isPinned;
    ::uStrong< ::app::Uno::Graphics::Framebuffer*> _fb;
    bool _isContentValid;
    int _lastFrameUsed;
    ::uStrong< ::uObject*> _owner;
    int _Width;
    int _Height;
    int _Format;
    int _Flags;

    void EnsurePinned() { CacheFramebuffer__EnsurePinned(this); }
    void Collect() { CacheFramebuffer__Collect(this); }
    void Dispose() { CacheFramebuffer__Dispose(this); }
    void Pin() { CacheFramebuffer__Pin(this); }
    void Unpin(bool validate) { CacheFramebuffer__Unpin(this, validate); }
    void _ObjInit(::uObject* owner, int width, int height, int format, int flags) { CacheFramebuffer___ObjInit(this, owner, width, height, format, flags); }
    bool IsPinned() { return CacheFramebuffer__get_IsPinned(this); }
    ::app::Uno::Graphics::Framebuffer* Framebuffer() { return CacheFramebuffer__get_Framebuffer(this); }
    bool IsContentValid() { return CacheFramebuffer__get_IsContentValid(this); }
    int FramesSinceLastUse() { return CacheFramebuffer__get_FramesSinceLastUse(this); }
    int Width() { return CacheFramebuffer__get_Width(this); }
    void Width(int value) { CacheFramebuffer__set_Width(this, value); }
    int Height() { return CacheFramebuffer__get_Height(this); }
    void Height(int value) { CacheFramebuffer__set_Height(this, value); }
    int Format() { return CacheFramebuffer__get_Format(this); }
    void Format(int value) { CacheFramebuffer__set_Format(this, value); }
    int Flags() { return CacheFramebuffer__get_Flags(this); }
    void Flags(int value) { CacheFramebuffer__set_Flags(this, value); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {

}}


#endif
