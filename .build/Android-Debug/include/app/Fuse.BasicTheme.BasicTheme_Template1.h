// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_THEME_TEMPLATE1_H__
#define __APP_FUSE_BASIC_THEME_BASIC_THEME_TEMPLATE1_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_Button.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme_Fuse_Animations_Change___float4_Value_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme_Fuse_Elements_Element_float_Opacity_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme_Fuse_Elements_Element_float4_TextColor_Property; } } }
namespace app { namespace Fuse { namespace Controls { struct Button; } } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicTheme_Template1;

struct BasicTheme_Template1__uType : ::app::Uno::UX::Template__Fuse_Controls_Button__uType
{
};

BasicTheme_Template1__uType* BasicTheme_Template1__typeof();

void BasicTheme_Template1__OnApply(BasicTheme_Template1* __this, ::app::Fuse::Controls::Button* self);
void BasicTheme_Template1___ObjInit_1(BasicTheme_Template1* __this, ::app::Fuse::BasicTheme::BasicTheme* parent);
BasicTheme_Template1* BasicTheme_Template1__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicTheme* parent);

struct BasicTheme_Template1 : ::app::Uno::UX::Template__Fuse_Controls_Button
{
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme*> __parent;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property*> _buttonBackground_Color_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Animations_Change___float4_Value_Property*> _pressed_Value_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Elements_Element_float_Opacity_Property*> self_Opacity_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Elements_Element_float4_TextColor_Property*> self_TextColor_inst;

    void _ObjInit_1(::app::Fuse::BasicTheme::BasicTheme* parent) { BasicTheme_Template1___ObjInit_1(this, parent); }
};

}}}


#endif
