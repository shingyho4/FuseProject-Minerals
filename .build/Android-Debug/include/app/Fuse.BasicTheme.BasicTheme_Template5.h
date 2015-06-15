// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_THEME_TEMPLATE5_H__
#define __APP_FUSE_BASIC_THEME_BASIC_THEME_TEMPLATE5_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_NavigationBar.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme; } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property; } } }
namespace app { namespace Fuse { namespace Controls { struct NavigationBar; } } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicTheme_Template5;

struct BasicTheme_Template5__uType : ::app::Uno::UX::Template__Fuse_Controls_NavigationBar__uType
{
};

BasicTheme_Template5__uType* BasicTheme_Template5__typeof();

void BasicTheme_Template5__OnApply(BasicTheme_Template5* __this, ::app::Fuse::Controls::NavigationBar* self);
void BasicTheme_Template5___ObjInit_1(BasicTheme_Template5* __this, ::app::Fuse::BasicTheme::BasicTheme* parent);
BasicTheme_Template5* BasicTheme_Template5__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicTheme* parent);

struct BasicTheme_Template5 : ::app::Uno::UX::Template__Fuse_Controls_NavigationBar
{
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme*> __parent;
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property*> _navigationBarFill_Color_inst;

    void _ObjInit_1(::app::Fuse::BasicTheme::BasicTheme* parent) { BasicTheme_Template5___ObjInit_1(this, parent); }
};

}}}


#endif
