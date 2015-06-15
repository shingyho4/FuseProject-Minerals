// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TEXT_INPUT_TEMPLATE_H__
#define __APP_FUSE_CONTROLS_TEXT_INPUT_TEMPLATE_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_TextInput.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Controls { struct TextInput; } } }

namespace app {
namespace Fuse {
namespace Controls {

struct TextInputTemplate;

struct TextInputTemplate__uType : ::app::Uno::UX::Template__Fuse_Controls_TextInput__uType
{
};

TextInputTemplate__uType* TextInputTemplate__typeof();

void TextInputTemplate__OnApply(TextInputTemplate* __this, ::app::Fuse::Controls::TextInput* self);
void TextInputTemplate___ObjInit_1(TextInputTemplate* __this);
TextInputTemplate* TextInputTemplate__New_1(::uStatic* __this);

struct TextInputTemplate : ::app::Uno::UX::Template__Fuse_Controls_TextInput
{
    void _ObjInit_1() { TextInputTemplate___ObjInit_1(this); }
};

}}}


#endif
