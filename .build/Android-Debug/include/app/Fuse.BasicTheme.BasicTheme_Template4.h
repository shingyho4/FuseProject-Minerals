// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_THEME_TEMPLATE4_H__
#define __APP_FUSE_BASIC_THEME_BASIC_THEME_TEMPLATE4_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_Switch.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme_Fuse_Animations_Change___float4_Value_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme_Fuse_Elements_Element_float_Opacity_Property; } } }
namespace app { namespace Fuse { namespace Controls { struct Switch; } } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicTheme_Template4;

struct BasicTheme_Template4__uType : ::app::Uno::UX::Template__Fuse_Controls_Switch__uType
{
};

BasicTheme_Template4__uType* BasicTheme_Template4__typeof();

void BasicTheme_Template4__OnApply(BasicTheme_Template4* __this, ::app::Fuse::Controls::Switch* self);
void BasicTheme_Template4___ObjInit_1(BasicTheme_Template4* __this, ::app::Fuse::BasicTheme::BasicTheme* parent);
BasicTheme_Template4* BasicTheme_Template4__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicTheme* parent);

struct BasicTheme_Template4 : ::app::Uno::UX::Template__Fuse_Controls_Switch
{
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme*> __parent;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property*> _thumbFill_Color_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property*> _trackFill_Color_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property*> _thumbFill2_Color_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Elements_Element_float_Opacity_Property*> _switchThumb2_Opacity_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Animations_Change___float4_Value_Property*> _trackFillAnim_Value_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Animations_Change___float4_Value_Property*> _thumbFill1Anim_Value_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Animations_Change___float4_Value_Property*> _thumbFill2Anim_Value_inst;

    void _ObjInit_1(::app::Fuse::BasicTheme::BasicTheme* parent) { BasicTheme_Template4___ObjInit_1(this, parent); }
};

}}}


#endif
