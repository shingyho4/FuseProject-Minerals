// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_TEXT_ENTERED_H__
#define __APP_FUSE_INPUT_TEXT_ENTERED_H__

#include <app/Fuse.Input.Event__Fuse_Input_TextEnteredHandler__Fuse_Input_Tex-12d7caae.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct TextEnteredArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct TextEntered;

struct TextEntered__uType : ::app::Fuse::Input::Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__uType
{
};

TextEntered__uType* TextEntered__typeof();

void TextEntered__Invoke(TextEntered* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::TextEnteredArgs* args);
void TextEntered___ObjInit_1(TextEntered* __this);
TextEntered* TextEntered__New_1(::uStatic* __this);

struct TextEntered : ::app::Fuse::Input::Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs
{
    void _ObjInit_1() { TextEntered___ObjInit_1(this); }
};

}}}


#endif
