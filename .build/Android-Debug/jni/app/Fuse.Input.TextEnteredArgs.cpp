// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.TextEnteredArgs.h>
#include <app/Fuse.Node.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Input {

TextEnteredArgs__uType* TextEnteredArgs__typeof()
{
    static TextEnteredArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextEnteredArgs__uType*)::uAllocClassType(sizeof(TextEnteredArgs__uType), "Fuse.Input.TextEnteredArgs", ::app::Fuse::Input::InputEventArgs__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(TextEnteredArgs, _Text);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Text";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* TextEnteredArgs__get_Text(TextEnteredArgs* __this)
{
    return __this->_Text;
}

void TextEnteredArgs__set_Text(TextEnteredArgs* __this, ::uString* value)
{
    __this->_Text = value;
}

void TextEnteredArgs___ObjInit_2(TextEnteredArgs* __this, ::uString* text, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::InputEventArgs___ObjInit_1(__this, node);
    __this->Text(text);
}

TextEnteredArgs* TextEnteredArgs__New_3(::uStatic* __this, ::uString* text, ::app::Fuse::Node* node)
{
    TextEnteredArgs* inst = (::app::Fuse::Input::TextEnteredArgs*)::uAllocObject(sizeof(::app::Fuse::Input::TextEnteredArgs), ::app::Fuse::Input::TextEnteredArgs__typeof());
    inst->_ObjInit_2(text, node);
    return inst;
}

}}}
