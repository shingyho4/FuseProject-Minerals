// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_CACHE_TILE_H__
#define __APP_FUSE_ELEMENTS_CACHE_TILE_H__

#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <app/Uno.Recti.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct CacheFramebuffer; } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }

namespace app {
namespace Fuse {
namespace Elements {

struct CacheTile;

struct CacheTile__uType : ::uValueType
{
};

CacheTile__uType* CacheTile__typeof();

::app::Uno::Graphics::Texture2D* CacheTile__get_Texture(CacheTile* __this);
void CacheTile__EnsureHasFramebuffer(CacheTile* __this, ::uObject* owner);

struct CacheTile
{
    ::app::Uno::Float4x4 _compositMatrix;
    ::uStrong< ::app::Fuse::CacheFramebuffer*> _framebuffer;
    ::app::Uno::Recti _rect;

    void EnsureHasFramebuffer(::uObject* owner) { CacheTile__EnsureHasFramebuffer(this, owner); }
    ::app::Uno::Graphics::Texture2D* Texture() { return CacheTile__get_Texture(this); }

    CacheTile& operator =(const CacheTile& copy)
    {
        ::uCopyValue(this, CacheTile__typeof(), &copy);
        return *this;
    }
};

}}}


#endif
