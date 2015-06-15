// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.App.h>
#include <app/Fuse.CacheFramebuffer.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Elements.Cache.h>
#include <app/Fuse.Elements.CacheHelper.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.ICamera.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.OrthographicCamera.h>
#include <app/Fuse.ViewContext.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.RenderTarget.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Elements {

bool Cache__IsCaching;
::uStaticStrong< ::app::Fuse::Elements::CacheHelper*> Cache__cacheHelper;

Cache__uType* Cache__typeof()
{
    static Cache__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Cache__uType*)::uAllocClassType(sizeof(Cache__uType), "Fuse.Elements.Cache", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(Cache, _element);
        type->StrongRefOffsets[1] = offsetof(Cache, _cacheTiles);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_element";
        type->StrongRefNames[1] = "_cacheTiles";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uArray* Cache__get_CacheTiles(Cache* __this)
{
    return __this->_cacheTiles;
}

int Cache__get_MaxTileSize(Cache* __this)
{
    return ::app::Uno::Graphics::Texture2D__get_MaxSize(NULL);
}

bool Cache__GetCachePreference(Cache* __this, ::app::Fuse::DrawContext* dc)
{
    switch (::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->CachingMode())
    {
        case 2:
        {
            return false;
        }
        case 1:
        {
            return true;
        }
    }

    if (__this->_isValid && !::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->IsVisualInvalid())
    {
        return true;
    }

    if (::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->HasActiveEffects() && !::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->IsVisualInvalid())
    {
        return true;
    }

    ::app::Uno::Recti cachingRect = __this->GetCachingRect(dc);

    if (((double)cachingRect.Size().X > ((double)::uPtr< ::app::Uno::Graphics::RenderTarget*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->RenderTarget())->Size().X * 1.2)) || ((double)cachingRect.Size().Y > ((double)::uPtr< ::app::Uno::Graphics::RenderTarget*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->RenderTarget())->Size().Y * 1.2)))
    {
        return false;
    }

    if (::uIs(::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->Parent(), ::app::Fuse::App__typeof()))
    {
    }
    else if (::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->ParentElement() == NULL)
    {
        return __this->GetCachePreferenceCore(dc);
    }
    else
    {
        if (!::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->IsRedrawCheap())
        {
            return __this->GetCachePreferenceCore(dc);
        }
    }

    return false;
}

bool Cache__GetCachePreferenceCore(Cache* __this, ::app::Fuse::DrawContext* dc)
{
    if (!::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->IsVisualInvalid())
    {
        if (!Cache__IsCaching)
        {
            return true;
        }
    }

    return false;
}

void Cache__Invalidate(Cache* __this)
{
    __this->_isValid = false;
}

void Cache__DrawHeuristically(Cache* __this, ::app::Fuse::DrawContext* dc)
{
    if (__this->GetCachePreference(dc))
    {
        __this->PinAndValidate(dc);
        __this->Blit(dc, ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->Opacity());
        __this->Unpin();
    }
    else
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->CompositEffects(dc);
    }
}

::app::Uno::Recti Cache__ConservativelySnapToCoveringIntegers(::uStatic* __this, ::app::Uno::Rect r)
{
    ::app::Uno::Int2 origin = ::app::Uno::Int2__op_Explicit(NULL, ::app::Uno::Math__Floor_2(NULL, r.LeftTop()));
    ::app::Uno::Int2 size = ::app::Uno::Int2__op_Explicit(NULL, ::app::Uno::Math__Ceil_2(NULL, ::app::Uno::Float2__op_Addition_1(NULL, ::app::Uno::Float2__op_Subtraction(NULL, r.RightBottom(), r.LeftTop()), 0.01f)));
    return ::app::Uno::Recti__New_1(NULL, origin.X, origin.Y, (origin.X + size.X) + 1, (origin.Y + size.Y) + 1);
}

::app::Uno::Recti Cache__GetCachingRect(Cache* __this, ::app::Fuse::DrawContext* dc)
{
    return ::app::Uno::Recti__Inflate_1(NULL, Cache__ConservativelySnapToCoveringIntegers(NULL, ::app::Uno::Rect__Scale_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->RenderBoundsWithEffects(), ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->AbsoluteZoom())), 1);
}

::app::Uno::Float4x4 Cache__CalculateCompositMatrix(Cache* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Recti cachingRect)
{
    ::app::Uno::Float4x4 translation = ::app::Uno::Matrix__Translation_1(NULL, (float)cachingRect.Left / ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->AbsoluteZoom(), (float)cachingRect.Top / ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->AbsoluteZoom(), 0.0f);
    return ::app::Uno::Matrix__Mul_11(NULL, translation, ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->WorldTransform());
}

void Cache__PinAndValidate(Cache* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Uno::Recti cacheRect = __this->GetCachingRect(dc);

    if (!::app::Uno::Recti__Equals_2(NULL, cacheRect, __this->_cacheRect))
    {
        int numTilesX = ((cacheRect.Size().X + __this->MaxTileSize()) - 1) / __this->MaxTileSize();
        int numTilesY = ((cacheRect.Size().Y + __this->MaxTileSize()) - 1) / __this->MaxTileSize();
        int numTiles = numTilesX * numTilesY;

        if ((__this->_cacheTiles == NULL) || (numTiles != ::uPtr< ::uArray*>(__this->_cacheTiles)->Length()))
        {
            __this->_cacheTiles = ::uNewArray(::app::Fuse::Elements::CacheTile__typeof(), numTiles);
        }

        for (int y = 0; y < numTilesY; ++y)
        {
            for (int x = 0; x < numTilesX; ++x)
            {
                int tile = x + (y * numTilesX);
                ::app::Uno::Int2 Position = ::app::Uno::Int2__New_2(NULL, x * __this->MaxTileSize(), y * __this->MaxTileSize());
                ::uPtr< ::uArray*>(__this->_cacheTiles)->Item< ::app::Fuse::Elements::CacheTile>(tile)._rect = ::app::Uno::Recti__New_1(NULL, cacheRect.Left + Position.X, cacheRect.Top + Position.Y, (cacheRect.Left + Position.X) + ::app::Uno::Math__Min_8(NULL, cacheRect.Size().X - Position.X, __this->MaxTileSize()), (cacheRect.Top + Position.Y) + ::app::Uno::Math__Min_8(NULL, cacheRect.Size().Y - Position.Y, __this->MaxTileSize()));
            }
        }
    }

    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_cacheTiles)->Length(); ++i)
    {
        ::uPtr< ::uArray*>(__this->_cacheTiles)->Item< ::app::Fuse::Elements::CacheTile>(i).EnsureHasFramebuffer((::uObject*)__this->_element);
        ::uPtr< ::uArray*>(__this->_cacheTiles)->Item< ::app::Fuse::Elements::CacheTile>(i)._compositMatrix = __this->CalculateCompositMatrix(dc, ::uPtr< ::uArray*>(__this->_cacheTiles)->Item< ::app::Fuse::Elements::CacheTile>(i)._rect);
        ::uPtr< ::app::Fuse::CacheFramebuffer*>(::uPtr< ::uArray*>(__this->_cacheTiles)->Item< ::app::Fuse::Elements::CacheTile>(i)._framebuffer)->Pin();

        if (!::uPtr< ::app::Fuse::CacheFramebuffer*>(::uPtr< ::uArray*>(__this->_cacheTiles)->Item< ::app::Fuse::Elements::CacheTile>(i)._framebuffer)->IsContentValid() || !__this->_isValid)
        {
            __this->Repaint(dc, ::uPtr< ::uArray*>(__this->_cacheTiles)->Item< ::app::Fuse::Elements::CacheTile>(i));
        }
    }

    __this->_isValid = true;
}

void Cache__Unpin(Cache* __this)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();

    for (array_123 = __this->_cacheTiles, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Fuse::Elements::CacheTile tile = ::uPtr< ::uArray*>(array_123)->Item< ::app::Fuse::Elements::CacheTile>(index_124);
        ::uPtr< ::app::Fuse::CacheFramebuffer*>(tile._framebuffer)->Unpin(true);
    }
}

void Cache__Repaint(Cache* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::CacheTile tile)
{
    ::app::Fuse::OrthographicCamera* cc = ::app::Fuse::OrthographicCamera__New_1(NULL, ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)tile._rect.Minimum().X, (float)tile._rect.Minimum().Y), ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->AbsoluteZoom()), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)tile._rect.Size().X, (float)tile._rect.Size().Y), ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->AbsoluteZoom()), ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->WorldTransformInverse());
    ::uObject* oldCam = ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushCamera((::uObject*)cc);
    bool oldIsCaching = Cache__IsCaching;
    Cache__IsCaching = true;
    dc->PushRenderTarget(::uPtr< ::app::Fuse::CacheFramebuffer*>(tile._framebuffer)->Framebuffer());
    dc->Clear(::app::Uno::Float4__New_1(NULL, 0.0f), 1.0f);
    ::app::Uno::Recti oldScissor = dc->PushScissor(::app::Uno::Recti__New_1(NULL, 0, 0, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::CacheFramebuffer*>(tile._framebuffer)->Framebuffer())->Size().X, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::CacheFramebuffer*>(tile._framebuffer)->Framebuffer())->Size().Y));
    ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->CompositEffects(dc);
    dc->PopScissor(oldScissor);
    dc->PopRenderTarget();
    dc->PopCamera(oldCam);
    Cache__IsCaching = oldIsCaching;
}

void Cache__Blit(Cache* __this, ::app::Fuse::DrawContext* dc, float opacity)
{
    ::uPtr< ::app::Fuse::Elements::CacheHelper*>(Cache__cacheHelper)->Blit(dc, __this, opacity);
}

void Cache___TypeInit(::uStatic* __this)
{
    Cache__cacheHelper = ::app::Fuse::Elements::CacheHelper__New_1(NULL);
}

void Cache___ObjInit(Cache* __this, ::app::Fuse::Elements::Element* elm)
{
    __this->_element = elm;

    if (__this->_element == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL));
    }
}

Cache* Cache__New_1(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    Cache* inst = (::app::Fuse::Elements::Cache*)::uAllocObject(sizeof(::app::Fuse::Elements::Cache), ::app::Fuse::Elements::Cache__typeof());
    inst->_ObjInit(elm);
    return inst;
}

}}}
