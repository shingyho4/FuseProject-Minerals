// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.TextEdit.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Elements {

TextEdit__uType* TextEdit__typeof()
{
    static TextEdit__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextEdit__uType*)::uAllocClassType(sizeof(TextEdit__uType), "Fuse.Elements.TextEdit", ::app::Fuse::Elements::TextElement__typeof(), 6);
        type->__fp_OnIsPasswordChanged = TextEdit__OnIsPasswordChanged;
        type->__fp_OnInputHintChanged = TextEdit__OnInputHintChanged;
        type->__fp_OnCaretColorChanged = TextEdit__OnCaretColorChanged;
        type->__fp_OnSelectionColorChanged = TextEdit__OnSelectionColorChanged;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();

        type->InterfaceOffsets[0] = offsetof(TextEdit__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(TextEdit__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(TextEdit__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(TextEdit__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(TextEdit__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(TextEdit__uType, __interface_5);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool TextEdit__get_IsPassword(TextEdit* __this)
{
    return __this->_isPassword;
}

void TextEdit__set_IsPassword(TextEdit* __this, bool value)
{
    if (__this->_isPassword != value)
    {
        __this->_isPassword = value;
        __this->OnIsPasswordChanged();
    }
}

int TextEdit__get_InputHint(TextEdit* __this)
{
    return __this->_inputHint;
}

void TextEdit__set_InputHint(TextEdit* __this, int value)
{
    if (__this->_inputHint != value)
    {
        __this->_inputHint = value;
        __this->OnInputHintChanged();
    }
}

::app::Uno::Float3 TextEdit__get_CaretColor(TextEdit* __this)
{
    return __this->_caretColor;
}

void TextEdit__set_CaretColor(TextEdit* __this, ::app::Uno::Float3 value)
{
    if (::app::Uno::Float3__op_Inequality(NULL, __this->_caretColor, value))
    {
        __this->_caretColor = value;
        __this->OnCaretColorChanged();
    }
}

::app::Uno::Float4 TextEdit__get_SelectionColor(TextEdit* __this)
{
    return __this->_selectionColor;
}

void TextEdit__set_SelectionColor(TextEdit* __this, ::app::Uno::Float4 value)
{
    if (::app::Uno::Float4__op_Inequality(NULL, __this->_selectionColor, value))
    {
        __this->_selectionColor = value;
        __this->OnSelectionColorChanged();
    }
}

void TextEdit__OnIsPasswordChanged(TextEdit* __this)
{
}

void TextEdit__OnInputHintChanged(TextEdit* __this)
{
}

void TextEdit__OnCaretColorChanged(TextEdit* __this)
{
}

void TextEdit__OnSelectionColorChanged(TextEdit* __this)
{
}

}}}
