// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.1.0\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_GRADIENT_STOP_H__
#define __APP_FUSE_DRAWING_GRADIENT_STOP_H__

#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {

struct GradientStop;

struct GradientStop__uType : ::uClassType
{
};

GradientStop__uType* GradientStop__typeof();

float GradientStop__get_Offset(GradientStop* __this);
void GradientStop__set_Offset(GradientStop* __this, float value);
::app::Uno::Float4 GradientStop__get_Color(GradientStop* __this);
void GradientStop__set_Color(GradientStop* __this, ::app::Uno::Float4 value);
void GradientStop__OnChanged(GradientStop* __this);

struct GradientStop : ::uObject
{
    float _offset;
    ::app::Uno::Float4 _color;
    ::uStrong< ::uDelegate*> Changed;

    void OnChanged() { GradientStop__OnChanged(this); }
    float Offset() { return GradientStop__get_Offset(this); }
    void Offset(float value) { GradientStop__set_Offset(this, value); }
    ::app::Uno::Float4 Color();
    void Color(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline ::app::Uno::Float4 GradientStop::Color() { return GradientStop__get_Color(this); }
inline void GradientStop::Color(::app::Uno::Float4 value) { GradientStop__set_Color(this, value); }

}}}


#endif
