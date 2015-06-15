// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_THEME_TEMPLATE_H__
#define __APP_FUSE_BASIC_THEME_BASIC_THEME_TEMPLATE_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_BackButton.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme; } } }
namespace app { namespace Fuse { namespace Controls { struct BackButton; } } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicTheme_Template;

struct BasicTheme_Template__uType : ::app::Uno::UX::Template__Fuse_Controls_BackButton__uType
{
};

BasicTheme_Template__uType* BasicTheme_Template__typeof();

void BasicTheme_Template__OnApply(BasicTheme_Template* __this, ::app::Fuse::Controls::BackButton* self);
void BasicTheme_Template___ObjInit_1(BasicTheme_Template* __this, ::app::Fuse::BasicTheme::BasicTheme* parent);
BasicTheme_Template* BasicTheme_Template__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicTheme* parent);

struct BasicTheme_Template : ::app::Uno::UX::Template__Fuse_Controls_BackButton
{
    ::uStrong< ::app::Fuse::BasicTheme::BasicTheme*> __parent;

    void _ObjInit_1(::app::Fuse::BasicTheme::BasicTheme* parent) { BasicTheme_Template___ObjInit_1(this, parent); }
};

}}}


#endif
