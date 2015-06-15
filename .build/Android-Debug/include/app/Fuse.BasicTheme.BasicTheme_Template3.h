// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_THEME_TEMPLATE3_H__
#define __APP_FUSE_BASIC_THEME_BASIC_THEME_TEMPLATE3_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_Slider.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme_Fuse_Elements_Element_float_Width_Property; } } }
namespace app { namespace Fuse { namespace Controls { struct Slider; } } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicTheme_Template3;

struct BasicTheme_Template3__uType : ::app::Uno::UX::Template__Fuse_Controls_Slider__uType
{
};

BasicTheme_Template3__uType* BasicTheme_Template3__typeof();

void BasicTheme_Template3__OnApply(BasicTheme_Template3* __this, ::app::Fuse::Controls::Slider* self);
void BasicTheme_Template3___ObjInit_1(BasicTheme_Template3* __this, ::app::Fuse::BasicTheme::BasicTheme* parent);
BasicTheme_Template3* BasicTheme_Template3__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicTheme* parent);

struct BasicTheme_Template3 : ::app::Uno::UX::Template__Fuse_Controls_Slider
{
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme*> __parent;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Elements_Element_float_Width_Property*> _progressTrack_Width_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property*> _sliderThumbFill_Color_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property*> _sliderTrackFill_Color_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property*> _sliderThumbFill2_Color_inst;

    void _ObjInit_1(::app::Fuse::BasicTheme::BasicTheme* parent) { BasicTheme_Template3___ObjInit_1(this, parent); }
};

}}}


#endif
