// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_SIZING_CONTAINER_H__
#define __APP_FUSE_INTERNAL_SIZING_CONTAINER_H__

#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Internal {

struct SizingContainer;

struct SizingContainer__uType : ::uClassType
{
};

SizingContainer__uType* SizingContainer__typeof();

float SizingContainer__get_PaddingWidth(SizingContainer* __this);
float SizingContainer__get_PaddingHeight(SizingContainer* __this);
bool SizingContainer__SetStretchMode(SizingContainer* __this, int mode);
::app::Uno::Float2 SizingContainer__CalcScale(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2 desiredSize);
::app::Uno::Float2 SizingContainer__CalcContentSize(SizingContainer* __this, ::app::Uno::Float2 size, ::app::Uno::Int2 pixelSize);
::app::Uno::Float2 SizingContainer__SnapSize(SizingContainer* __this, ::app::Uno::Float2 sz);
::app::Uno::Float2 SizingContainer__CalcScale_1(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2 desiredSize, bool autoWidth, bool autoHeight);
::app::Uno::Float2 SizingContainer__CalcOrigin(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2 contentActualSize);
::app::Uno::Float4 SizingContainer__CalcClip(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2* origin, ::app::Uno::Float2* contentActualSize);
::app::Uno::Float2 SizingContainer__ExpandFillSize(SizingContainer* __this, ::app::Uno::Float2 size, ::app::Uno::Float2 fillSize, int fillSet);
void SizingContainer___ObjInit(SizingContainer* __this);
SizingContainer* SizingContainer__New_1(::uStatic* __this);

struct SizingContainer : ::uObject
{
    int stretchMode;
    int stretchDirection;
    int align;
    int stretchSizing;
    ::app::Uno::Float4 padding;
    float absoluteZoom;
    bool snapToPixels;

    bool SetStretchMode(int mode) { return SizingContainer__SetStretchMode(this, mode); }
    ::app::Uno::Float2 CalcScale(::app::Uno::Float2 availableSize, ::app::Uno::Float2 desiredSize);
    ::app::Uno::Float2 CalcContentSize(::app::Uno::Float2 size, ::app::Uno::Int2 pixelSize);
    ::app::Uno::Float2 SnapSize(::app::Uno::Float2 sz);
    ::app::Uno::Float2 CalcScale_1(::app::Uno::Float2 availableSize, ::app::Uno::Float2 desiredSize, bool autoWidth, bool autoHeight);
    ::app::Uno::Float2 CalcOrigin(::app::Uno::Float2 availableSize, ::app::Uno::Float2 contentActualSize);
    ::app::Uno::Float4 CalcClip(::app::Uno::Float2 availableSize, ::app::Uno::Float2* origin, ::app::Uno::Float2* contentActualSize);
    ::app::Uno::Float2 ExpandFillSize(::app::Uno::Float2 size, ::app::Uno::Float2 fillSize, int fillSet);
    void _ObjInit() { SizingContainer___ObjInit(this); }
    float PaddingWidth() { return SizingContainer__get_PaddingWidth(this); }
    float PaddingHeight() { return SizingContainer__get_PaddingHeight(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int2.h>

namespace app {
namespace Fuse {
namespace Internal {

inline ::app::Uno::Float2 SizingContainer::CalcScale(::app::Uno::Float2 availableSize, ::app::Uno::Float2 desiredSize) { return SizingContainer__CalcScale(this, availableSize, desiredSize); }
inline ::app::Uno::Float2 SizingContainer::CalcContentSize(::app::Uno::Float2 size, ::app::Uno::Int2 pixelSize) { return SizingContainer__CalcContentSize(this, size, pixelSize); }
inline ::app::Uno::Float2 SizingContainer::SnapSize(::app::Uno::Float2 sz) { return SizingContainer__SnapSize(this, sz); }
inline ::app::Uno::Float2 SizingContainer::CalcScale_1(::app::Uno::Float2 availableSize, ::app::Uno::Float2 desiredSize, bool autoWidth, bool autoHeight) { return SizingContainer__CalcScale_1(this, availableSize, desiredSize, autoWidth, autoHeight); }
inline ::app::Uno::Float2 SizingContainer::CalcOrigin(::app::Uno::Float2 availableSize, ::app::Uno::Float2 contentActualSize) { return SizingContainer__CalcOrigin(this, availableSize, contentActualSize); }
inline ::app::Uno::Float4 SizingContainer::CalcClip(::app::Uno::Float2 availableSize, ::app::Uno::Float2* origin, ::app::Uno::Float2* contentActualSize) { return SizingContainer__CalcClip(this, availableSize, origin, contentActualSize); }
inline ::app::Uno::Float2 SizingContainer::ExpandFillSize(::app::Uno::Float2 size, ::app::Uno::Float2 fillSize, int fillSet) { return SizingContainer__ExpandFillSize(this, size, fillSize, fillSet); }

}}}


#endif
