// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Controls.TextInputTemplate.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.TextEdit.h>
#include <app/Fuse.Elements.TextElement.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Template__Fuse_Controls_TextInput.h>

namespace app {
namespace Fuse {
namespace Controls {

::uStaticStrong< ::app::Uno::UX::Template__Fuse_Controls_TextInput*> TextInput___baseTemplate;

TextInput__uType* TextInput__typeof()
{
    static TextInput__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextInput__uType*)::uAllocClassType(sizeof(TextInput__uType), "Fuse.Controls.TextInput", ::app::Fuse::Controls::Control__typeof(), 7, 3);
        type->__fp_OnApplyStyle = (void(*)(::app::Fuse::Node*, ::uObject*))TextInput__OnApplyStyle;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();

        type->InterfaceOffsets[0] = offsetof(TextInput__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(TextInput__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(TextInput__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(TextInput__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(TextInput__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(TextInput__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(TextInput__uType, __interface_6);

        type->StrongRefOffsets[0] = offsetof(TextInput, _editor);
        type->StrongRefOffsets[1] = offsetof(TextInput, _text);
        type->StrongRefOffsets[2] = offsetof(TextInput, TextChanged);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_editor";
        type->StrongRefNames[1] = "_text";
        type->StrongRefNames[2] = "TextChanged";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Elements::TextEdit* TextInput__get_Editor(TextInput* __this)
{
    return __this->_editor;
}

void TextInput__set_Editor(TextInput* __this, ::app::Fuse::Elements::TextEdit* value)
{
    if (__this->_editor != value)
    {
        if (__this->_editor != NULL)
        {
            ::uPtr< ::app::Fuse::Elements::TextEdit*>(__this->_editor)->remove_TextChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Controls::TextInput__OnEditorTextChanged, __this));
        }

        __this->_editor = value;

        if (__this->_editor != NULL)
        {
            ::uPtr< ::app::Fuse::Elements::TextEdit*>(__this->_editor)->add_TextChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::Controls::TextInput__OnEditorTextChanged, __this));
        }

        __this->VisualTree((::app::Fuse::Elements::Element*)value);
        __this->PushProperties();
    }
}

bool TextInput__get_IsMultiline(TextInput* __this)
{
    return __this->_isMultiline;
}

void TextInput__set_IsMultiline(TextInput* __this, bool value)
{
    __this->_isMultiline = value;

    if (__this->Editor() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::TextEdit*>(__this->Editor())->IsMultiline(value);
    }
}

int TextInput__get_TextWrapping(TextInput* __this)
{
    return __this->_textWrapping;
}

void TextInput__set_TextWrapping(TextInput* __this, int value)
{
    __this->_textWrapping = value;

    if (__this->Editor() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::TextEdit*>(__this->Editor())->TextWrapping(value);
    }
}

bool TextInput__get_IsPassword(TextInput* __this)
{
    return __this->_isPassword;
}

void TextInput__set_IsPassword(TextInput* __this, bool value)
{
    __this->_isPassword = value;

    if (__this->Editor() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::TextEdit*>(__this->Editor())->IsPassword(value);
    }
}

int TextInput__get_InputHint(TextInput* __this)
{
    return __this->_inputHint;
}

void TextInput__set_InputHint(TextInput* __this, int value)
{
    __this->_inputHint = value;

    if (__this->Editor() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::TextEdit*>(__this->Editor())->InputHint(value);
    }
}

::uString* TextInput__get_Text(TextInput* __this)
{
    return __this->_text;
}

void TextInput__set_Text(TextInput* __this, ::uString* value)
{
    if (::app::Uno::String__op_Inequality(NULL, __this->_text, value))
    {
        __this->_text = value;
        __this->OnTextChanged();
    }

    if (__this->Editor() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::TextEdit*>(__this->Editor())->Text(value);
    }
}

::app::Uno::Float3 TextInput__get_CaretColor(TextInput* __this)
{
    return __this->_caretColor;
}

void TextInput__set_CaretColor(TextInput* __this, ::app::Uno::Float3 value)
{
    __this->_caretColor = value;

    if (__this->Editor() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::TextEdit*>(__this->Editor())->CaretColor(value);
    }
}

::app::Uno::Float4 TextInput__get_SelectionColor(TextInput* __this)
{
    return __this->_selectionColor;
}

void TextInput__set_SelectionColor(TextInput* __this, ::app::Uno::Float4 value)
{
    __this->_selectionColor = value;

    if (__this->Editor() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::TextEdit*>(__this->Editor())->SelectionColor(value);
    }
}

void TextInput__OnEditorTextChanged(TextInput* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->Text(::uPtr< ::app::Fuse::Elements::TextEdit*>(__this->Editor())->Text());
}

void TextInput__PushProperties(TextInput* __this)
{
    if (__this->Editor() == NULL)
    {
        return;
    }

    ::uPtr< ::app::Fuse::Elements::TextEdit*>(__this->Editor())->IsMultiline(__this->IsMultiline());
    ::uPtr< ::app::Fuse::Elements::TextEdit*>(__this->Editor())->TextWrapping(__this->TextWrapping());
    ::uPtr< ::app::Fuse::Elements::TextEdit*>(__this->Editor())->IsPassword(__this->IsPassword());
    ::uPtr< ::app::Fuse::Elements::TextEdit*>(__this->Editor())->InputHint(__this->InputHint());
    ::uPtr< ::app::Fuse::Elements::TextEdit*>(__this->Editor())->Text(__this->Text());
    ::uPtr< ::app::Fuse::Elements::TextEdit*>(__this->Editor())->CaretColor(__this->CaretColor());
    ::uPtr< ::app::Fuse::Elements::TextEdit*>(__this->Editor())->SelectionColor(__this->SelectionColor());
    ::app::Fuse::Input::Focus__SetIsFocusable(NULL, (::app::Fuse::Node*)__this->_editor, ::app::Fuse::Input::Focus__IsFocusable(NULL, (::app::Fuse::Node*)__this));
}

void TextInput__OnTextChanged(TextInput* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TextChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->TextChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void TextInput__OnApplyStyle(TextInput* __this, ::uObject* target)
{
    ::app::Fuse::Node__OnApplyStyle(__this, target);

    if (target == __this)
    {
        ::uPtr< ::app::Uno::UX::Template__Fuse_Controls_TextInput*>(TextInput___baseTemplate)->Apply((::uObject*)::uAs< TextInput*>(target, TextInput__typeof()));
    }
}

void TextInput___TypeInit_3(::uStatic* __this)
{
    TextInput___baseTemplate = (::app::Uno::UX::Template__Fuse_Controls_TextInput*)::app::Fuse::Controls::TextInputTemplate__New_1(NULL);
}

void TextInput__add_TextChanged(TextInput* __this, ::uDelegate* value)
{
    __this->TextChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TextChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void TextInput__remove_TextChanged(TextInput* __this, ::uDelegate* value)
{
    __this->TextChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->TextChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

}}}
