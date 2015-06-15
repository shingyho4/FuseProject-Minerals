// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.TextEntered.h>
#include <app/Fuse.Input.TextEnteredArgs.h>
#include <app/Fuse.Input.TextEnteredHandler.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Input {

TextEntered__uType* TextEntered__typeof()
{
    static TextEntered__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextEntered__uType*)::uAllocClassType(sizeof(TextEntered__uType), "Fuse.Input.TextEntered", ::app::Fuse::Input::Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__typeof());
        type->__fp_Invoke = (void(*)(::app::Fuse::Input::Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::TextEnteredArgs*))TextEntered__Invoke;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void TextEntered__Invoke(TextEntered* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::TextEnteredArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::TextEnteredArgs*>(sender, args);
}

void TextEntered___ObjInit_1(TextEntered* __this)
{
    ::app::Fuse::Input::Event__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs___ObjInit(__this);
}

TextEntered* TextEntered__New_1(::uStatic* __this)
{
    TextEntered* inst = (::app::Fuse::Input::TextEntered*)::uAllocObject(sizeof(::app::Fuse::Input::TextEntered), ::app::Fuse::Input::TextEntered__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
