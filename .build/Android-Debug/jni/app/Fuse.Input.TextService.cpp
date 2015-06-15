// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.Event__Fuse_Input_TextEnteredHandler__Fuse_Input_Tex-12d7caae.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.InputEventArgs.h>
#include <app/Fuse.Input.TextEntered.h>
#include <app/Fuse.Input.TextEnteredArgs.h>
#include <app/Fuse.Input.TextService.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Input {

::uStaticStrong< ::app::Fuse::Input::TextEntered*> TextService___textEntered;

TextService__uType* TextService__typeof()
{
    static TextService__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextService__uType*)::uAllocClassType(sizeof(TextService__uType), "Fuse.Input.TextService");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Input::Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* TextService__get_TextEntered(::uStatic* __this)
{
    return (::app::Fuse::Input::Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs*)TextService___textEntered;
}

bool TextService__RaiseTextEntered(::uStatic* __this, ::uString* text)
{
    if (::app::Fuse::Input::Focus__get_FocusedNode(NULL) != NULL)
    {
        ::app::Fuse::Input::TextEnteredArgs* args = ::app::Fuse::Input::TextEnteredArgs__New_3(NULL, text, ::app::Fuse::Input::Focus__get_FocusedNode(NULL));
        ::uPtr< ::app::Fuse::Input::Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs*>(TextService__get_TextEntered(NULL))->RaiseWithBubble(args, 0);
        return ::uPtr< ::app::Fuse::Input::TextEnteredArgs*>(args)->IsHandled();
    }

    return false;
}

void TextService___TypeInit(::uStatic* __this)
{
    TextService___textEntered = ::app::Fuse::Input::TextEntered__New_1(NULL);
}

}}}
