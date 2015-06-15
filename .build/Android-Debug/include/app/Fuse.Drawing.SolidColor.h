// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.1.0\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_SOLID_COLOR_H__
#define __APP_FUSE_DRAWING_SOLID_COLOR_H__

#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Uno.Float4.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {

struct SolidColor;

struct SolidColor__uType : ::app::Fuse::Drawing::DynamicBrush__uType
{
};

SolidColor__uType* SolidColor__typeof();

::app::Uno::Float4 SolidColor__get_Color(SolidColor* __this);
void SolidColor__set_Color(SolidColor* __this, ::app::Uno::Float4 value);
bool SolidColor__get_IsCompletelyTransparent(SolidColor* __this);
void SolidColor___ObjInit_2(SolidColor* __this);
SolidColor* SolidColor__New_1(::uStatic* __this);

struct SolidColor : ::app::Fuse::Drawing::DynamicBrush
{
    ::app::Uno::Float4 _color;

    void _ObjInit_2() { SolidColor___ObjInit_2(this); }
    ::app::Uno::Float4 Color();
    void Color(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline ::app::Uno::Float4 SolidColor::Color() { return SolidColor__get_Color(this); }
inline void SolidColor::Color(::app::Uno::Float4 value) { SolidColor__set_Color(this, value); }

}}}


#endif
