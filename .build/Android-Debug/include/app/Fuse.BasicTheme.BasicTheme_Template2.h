// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_THEME_TEMPLATE2_H__
#define __APP_FUSE_BASIC_THEME_BASIC_THEME_TEMPLATE2_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_TextInput.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme_Fuse_Animations_Change___float4_Value_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme_Fuse_Elements_Element_float_Height_Property; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme_Fuse_Elements_Element_float4_TextColor_Property; } } }
namespace app { namespace Fuse { namespace Controls { struct TextInput; } } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicTheme_Template2;

struct BasicTheme_Template2__uType : ::app::Uno::UX::Template__Fuse_Controls_TextInput__uType
{
};

BasicTheme_Template2__uType* BasicTheme_Template2__typeof();

void BasicTheme_Template2__OnApply(BasicTheme_Template2* __this, ::app::Fuse::Controls::TextInput* self);
void BasicTheme_Template2___ObjInit_1(BasicTheme_Template2* __this, ::app::Fuse::BasicTheme::BasicTheme* parent);
BasicTheme_Template2* BasicTheme_Template2__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicTheme* parent);

struct BasicTheme_Template2 : ::app::Uno::UX::Template__Fuse_Controls_TextInput
{
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme*> __parent;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Animations_Change___float4_Value_Property*> _changeTextInputDividerFill1_Value_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Animations_Change___float4_Value_Property*> _changeTextInputDividerFill2_Value_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Elements_Element_float4_TextColor_Property*> self_TextColor_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property*> _textInputDivider_Color_inst;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Elements_Element_float_Height_Property*> _dividerRect_Height_inst;

    void _ObjInit_1(::app::Fuse::BasicTheme::BasicTheme* parent) { BasicTheme_Template2___ObjInit_1(this, parent); }
};

}}}


#endif