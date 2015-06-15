// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Int.h>
#include <app/Uno.Platform.TextInputEventArgs.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Platform {

TextInputEventArgs__uType* TextInputEventArgs__typeof()
{
    static TextInputEventArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextInputEventArgs__uType*)::uAllocClassType(sizeof(TextInputEventArgs__uType), "Uno.Platform.TextInputEventArgs", ::app::Uno::EventArgs__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(TextInputEventArgs, _Text);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Text";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool TextInputEventArgs__get_Handled(TextInputEventArgs* __this)
{
    return __this->_Handled;
}

void TextInputEventArgs__set_Handled(TextInputEventArgs* __this, bool value)
{
    __this->_Handled = value;
}

::uString* TextInputEventArgs__get_Text(TextInputEventArgs* __this)
{
    return __this->_Text;
}

void TextInputEventArgs__set_Text(TextInputEventArgs* __this, ::uString* value)
{
    __this->_Text = value;
}

int TextInputEventArgs__get_Modifiers(TextInputEventArgs* __this)
{
    return __this->_Modifiers;
}

void TextInputEventArgs__set_Modifiers(TextInputEventArgs* __this, int value)
{
    __this->_Modifiers = value;
}

void TextInputEventArgs___ObjInit_1(TextInputEventArgs* __this, ::uString* text, int modifiers)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Text(text);
    __this->Modifiers(modifiers);
}

TextInputEventArgs* TextInputEventArgs__New_2(::uStatic* __this, ::uString* text, int modifiers)
{
    TextInputEventArgs* inst = (::app::Uno::Platform::TextInputEventArgs*)::uAllocObject(sizeof(::app::Uno::Platform::TextInputEventArgs), ::app::Uno::Platform::TextInputEventArgs__typeof());
    inst->_ObjInit_1(text, modifiers);
    return inst;
}

}}}
