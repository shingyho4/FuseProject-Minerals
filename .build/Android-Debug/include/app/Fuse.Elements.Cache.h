// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_CACHE_H__
#define __APP_FUSE_ELEMENTS_CACHE_H__

#include <app/Fuse.Elements.CacheTile.h>
#include <app/Uno.Object.h>
#include <app/Uno.Recti.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct CacheHelper; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Elements {

struct Cache;

extern bool Cache__IsCaching;
extern ::uStaticStrong< ::app::Fuse::Elements::CacheHelper*> Cache__cacheHelper;

struct Cache__uType : ::uClassType
{
};

Cache__uType* Cache__typeof();

::uArray* Cache__get_CacheTiles(Cache* __this);
int Cache__get_MaxTileSize(Cache* __this);
bool Cache__GetCachePreference(Cache* __this, ::app::Fuse::DrawContext* dc);
bool Cache__GetCachePreferenceCore(Cache* __this, ::app::Fuse::DrawContext* dc);
void Cache__Invalidate(Cache* __this);
void Cache__DrawHeuristically(Cache* __this, ::app::Fuse::DrawContext* dc);
::app::Uno::Recti Cache__ConservativelySnapToCoveringIntegers(::uStatic* __this, ::app::Uno::Rect r);
::app::Uno::Recti Cache__GetCachingRect(Cache* __this, ::app::Fuse::DrawContext* dc);
::app::Uno::Float4x4 Cache__CalculateCompositMatrix(Cache* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Recti cachingRect);
void Cache__PinAndValidate(Cache* __this, ::app::Fuse::DrawContext* dc);
void Cache__Unpin(Cache* __this);
void Cache__Repaint(Cache* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::CacheTile tile);
void Cache__Blit(Cache* __this, ::app::Fuse::DrawContext* dc, float opacity);
void Cache___TypeInit(::uStatic* __this);
void Cache___ObjInit(Cache* __this, ::app::Fuse::Elements::Element* elm);
Cache* Cache__New_1(::uStatic* __this, ::app::Fuse::Elements::Element* elm);

struct Cache : ::uObject
{
    bool _isValid;
    ::uStrong< ::app::Fuse::Elements::Element*> _element;
    ::app::Uno::Recti _cacheRect;
    ::uStrong< ::uArray*> _cacheTiles;

    bool GetCachePreference(::app::Fuse::DrawContext* dc) { return Cache__GetCachePreference(this, dc); }
    bool GetCachePreferenceCore(::app::Fuse::DrawContext* dc) { return Cache__GetCachePreferenceCore(this, dc); }
    void Invalidate() { Cache__Invalidate(this); }
    void DrawHeuristically(::app::Fuse::DrawContext* dc) { Cache__DrawHeuristically(this, dc); }
    ::app::Uno::Recti GetCachingRect(::app::Fuse::DrawContext* dc);
    ::app::Uno::Float4x4 CalculateCompositMatrix(::app::Fuse::DrawContext* dc, ::app::Uno::Recti cachingRect);
    void PinAndValidate(::app::Fuse::DrawContext* dc) { Cache__PinAndValidate(this, dc); }
    void Unpin() { Cache__Unpin(this); }
    void Repaint(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::CacheTile tile);
    void Blit(::app::Fuse::DrawContext* dc, float opacity) { Cache__Blit(this, dc, opacity); }
    void _ObjInit(::app::Fuse::Elements::Element* elm) { Cache___ObjInit(this, elm); }
    ::uArray* CacheTiles() { return Cache__get_CacheTiles(this); }
    int MaxTileSize() { return Cache__get_MaxTileSize(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Elements {

inline ::app::Uno::Recti Cache::GetCachingRect(::app::Fuse::DrawContext* dc) { return Cache__GetCachingRect(this, dc); }
inline ::app::Uno::Float4x4 Cache::CalculateCompositMatrix(::app::Fuse::DrawContext* dc, ::app::Uno::Recti cachingRect) { return Cache__CalculateCompositMatrix(this, dc, cachingRect); }
inline void Cache::Repaint(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::CacheTile tile) { Cache__Repaint(this, dc, tile); }

}}}


#endif
