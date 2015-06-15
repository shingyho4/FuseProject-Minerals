// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.CacheFramebuffer.h>
#include <app/Fuse.Elements.CacheTile.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>

namespace app {
namespace Fuse {
namespace Elements {

CacheTile__uType* CacheTile__typeof()
{
    static CacheTile__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (CacheTile__uType*)::uAllocValueType(sizeof(CacheTile__uType), "Fuse.Elements.CacheTile", sizeof(CacheTile), 0, 1);
        type->StrongRefOffsets[0] = offsetof(CacheTile, _framebuffer);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_framebuffer";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Graphics::Texture2D* CacheTile__get_Texture(CacheTile* __this)
{
    return ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::CacheFramebuffer*>(__this->_framebuffer)->Framebuffer())->ColorBuffer();
}

void CacheTile__EnsureHasFramebuffer(CacheTile* __this, ::uObject* owner)
{
    if (((__this->_framebuffer == NULL) || (::uPtr< ::app::Fuse::CacheFramebuffer*>(__this->_framebuffer)->Width() != __this->_rect.Size().X)) || (::uPtr< ::app::Fuse::CacheFramebuffer*>(__this->_framebuffer)->Height() != __this->_rect.Size().Y))
    {
        if (__this->_framebuffer != NULL)
        {
            ::uPtr< ::app::Fuse::CacheFramebuffer*>(__this->_framebuffer)->Dispose();
        }

        __this->_framebuffer = ::app::Fuse::CacheFramebuffer__New_1(NULL, owner, __this->_rect.Size().X, __this->_rect.Size().Y, 3, 0);
    }
}

}}}
