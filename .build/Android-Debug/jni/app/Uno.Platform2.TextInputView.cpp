// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.BundleFile.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform2.TextInputView.h>
#include <app/Uno.Platform2.TextInputView_PrivateState.h>
#include <app/Uno.Platform2.ViewNativeHandle.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Platform2 {

TextInputView__uType* TextInputView__typeof()
{
    static TextInputView__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextInputView__uType*)::uAllocClassType(sizeof(TextInputView__uType), "Uno.Platform2.TextInputView", ::app::Uno::Platform2::View__typeof(), 0, 7);
        type->__fp_Finalize = (void(*)(::uObject*))TextInputView__Finalize;
        type->__fp_ResetStateOnHandleChanged = (void(*)(::app::Uno::Platform2::View*))TextInputView__ResetStateOnHandleChanged;

        type->StrongRefOffsets[0] = offsetof(TextInputView, _placeholder);
        type->StrongRefOffsets[1] = offsetof(TextInputView, _text);
        type->StrongRefOffsets[2] = offsetof(TextInputView, _fontName);
        type->StrongRefOffsets[3] = offsetof(TextInputView, _fontFile);
        type->StrongRefOffsets[4] = offsetof(TextInputView, TextChanged);
        type->StrongRefOffsets[5] = offsetof(TextInputView, ReturnPressed);
        type->StrongRefOffsets[6] = offsetof(TextInputView, IsEditingChanged);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_placeholder";
        type->StrongRefNames[1] = "_text";
        type->StrongRefNames[2] = "_fontName";
        type->StrongRefNames[3] = "_fontFile";
        type->StrongRefNames[4] = "TextChanged";
        type->StrongRefNames[5] = "ReturnPressed";
        type->StrongRefNames[6] = "IsEditingChanged";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void TextInputView__Finalize(TextInputView* __this)
{
    __this->Destroy();
}

bool TextInputView__get_IsMultiline(TextInputView* __this)
{
    return __this->_isMultiline;
}

void TextInputView__set_IsMultiline(TextInputView* __this, bool value)
{
    if (__this->_isMultiline == value)
    {
        return;
    }

    __this->_isMultiline = value;

    if (::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->Handle()))
    {
        __this->SetIsMultiline(__this->_isMultiline);
    }
}

bool TextInputView__get_IsPassword(TextInputView* __this)
{
    return __this->_isPassword;
}

void TextInputView__set_IsPassword(TextInputView* __this, bool value)
{
    if (__this->_isPassword == value)
    {
        return;
    }

    __this->_isPassword = value;

    if (::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->Handle()))
    {
        __this->SetIsPassword(__this->_isPassword);
    }
}

int TextInputView__get_InputHint(TextInputView* __this)
{
    return __this->_inputHint;
}

void TextInputView__set_InputHint(TextInputView* __this, int value)
{
    if (__this->_inputHint == value)
    {
        return;
    }

    __this->_inputHint = value;

    if (::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->Handle()))
    {
        __this->SetInputHint(__this->_inputHint);
    }
}

::uString* TextInputView__get_Placeholder(TextInputView* __this)
{
    return __this->_placeholder;
}

void TextInputView__set_Placeholder(TextInputView* __this, ::uString* value)
{
    if (::app::Uno::String__op_Equality(NULL, __this->_placeholder, value))
    {
        return;
    }

    __this->_placeholder = value;

    if (::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->Handle()))
    {
        __this->SetPlaceholder(__this->_placeholder);
    }
}

::uString* TextInputView__get_Text(TextInputView* __this)
{
    return __this->_text;
}

void TextInputView__set_Text(TextInputView* __this, ::uString* value)
{
    __this->_SetText(value, false);
}

bool TextInputView__get_IsEditing(TextInputView* __this)
{
    return __this->_isEditing;
}

void TextInputView__set_IsEditing(TextInputView* __this, bool value)
{
    if (__this->_isEditing == value)
    {
        return;
    }

    __this->_isEditing = value;

    if (::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->Handle()))
    {
        __this->SetIsEditing(__this->_isEditing);
    }

    __this->OnIsEditingChanged();
}

::uString* TextInputView__get_FontName(TextInputView* __this)
{
    return __this->_fontName;
}

void TextInputView__set_FontName(TextInputView* __this, ::uString* value)
{
    if (::app::Uno::String__op_Equality(NULL, __this->_fontName, value))
    {
        return;
    }

    __this->_fontName = value;

    if (::app::Uno::String__op_Inequality(NULL, __this->_fontName, NULL))
    {
        __this->_fontFile = NULL;

        if (::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->Handle()))
        {
            __this->SetFontName(__this->_fontName);
        }
    }
}

::app::Uno::BundleFile* TextInputView__get_FontFile(TextInputView* __this)
{
    return __this->_fontFile;
}

void TextInputView__set_FontFile(TextInputView* __this, ::app::Uno::BundleFile* value)
{
    if (__this->_fontFile == value)
    {
        return;
    }

    __this->_fontFile = value;

    if (__this->_fontFile != NULL)
    {
        __this->_fontName = NULL;

        if (::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->Handle()))
        {
            __this->SetFontFile(__this->_fontFile);
        }
    }
}

float TextInputView__get_FontSize(TextInputView* __this)
{
    return __this->_fontSize;
}

void TextInputView__set_FontSize(TextInputView* __this, float value)
{
    if (__this->_fontSize == value)
    {
        return;
    }

    __this->_fontSize = value;

    if (((double)__this->_fontSize != 0.0) && ::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->Handle()))
    {
        __this->SetFontSize(__this->_fontSize);
    }
}

int TextInputView__get_TextAlignment(TextInputView* __this)
{
    return __this->_textAlignment;
}

void TextInputView__set_TextAlignment(TextInputView* __this, int value)
{
    if (__this->_textAlignment == value)
    {
        return;
    }

    __this->_textAlignment = value;

    if (::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->Handle()))
    {
        __this->SetTextAlignment(__this->_textAlignment);
    }
}

int TextInputView__get_TextWrapping(TextInputView* __this)
{
    return __this->_textWrapping;
}

void TextInputView__set_TextWrapping(TextInputView* __this, int value)
{
    if (__this->_textWrapping == value)
    {
        return;
    }

    __this->_textWrapping = value;

    if (::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->Handle()))
    {
        __this->SetTextWrapping(__this->_textWrapping);
    }
}

::app::Uno::Float3 TextInputView__get_CaretColor(TextInputView* __this)
{
    return __this->_caretColor;
}

void TextInputView__set_CaretColor(TextInputView* __this, ::app::Uno::Float3 value)
{
    if (::app::Uno::Float3__op_Equality(NULL, __this->_caretColor, value))
    {
        return;
    }

    __this->_caretColor = value;

    if (::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->Handle()))
    {
        __this->SetCaretColor(__this->_caretColor);
    }
}

::app::Uno::Float4 TextInputView__get_TextColor(TextInputView* __this)
{
    return __this->_textColor;
}

void TextInputView__set_TextColor(TextInputView* __this, ::app::Uno::Float4 value)
{
    if (::app::Uno::Float4__op_Equality(NULL, __this->_textColor, value))
    {
        return;
    }

    __this->_textColor = value;

    if (::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->Handle()))
    {
        __this->SetTextColor(__this->_textColor);
    }
}

::app::Uno::Float4 TextInputView__get_SelectionColor(TextInputView* __this)
{
    return __this->_selectionColor;
}

void TextInputView__set_SelectionColor(TextInputView* __this, ::app::Uno::Float4 value)
{
    if (::app::Uno::Float4__op_Equality(NULL, __this->_selectionColor, value))
    {
        return;
    }

    __this->_selectionColor = value;

    if (::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->Handle()))
    {
        __this->SetSelectionColor(__this->_selectionColor);
    }
}

void TextInputView__Destroy(TextInputView* __this)
{
    __this->_private_1.Destroy(__this);
}

void TextInputView__ResetStateOnHandleChanged(TextInputView* __this)
{
    ::app::Uno::Platform2::View__ResetStateOnHandleChanged(__this);
    __this->IsEditing(false);

    if (::app::Uno::Platform2::ViewNativeHandle__op_LogicalNot(NULL, __this->Handle()))
    {
        return;
    }

    __this->SetIsMultiline(__this->IsMultiline());
    __this->SetIsPassword(__this->IsPassword());
    __this->SetInputHint(__this->InputHint());
    __this->SetPlaceholder(__this->Placeholder());
    __this->SetText(__this->Text());

    if (::app::Uno::String__op_Inequality(NULL, __this->FontName(), NULL))
    {
        __this->SetFontName(__this->FontName());
    }
    else if (__this->FontFile() != NULL)
    {
        __this->SetFontFile(__this->FontFile());
    }

    if ((double)__this->FontSize() != 0.0)
    {
        __this->SetFontSize(__this->FontSize());
    }

    __this->SetTextAlignment(__this->TextAlignment());
    __this->SetTextWrapping(__this->TextWrapping());
    __this->SetCaretColor(__this->CaretColor());
    __this->SetSelectionColor(__this->SelectionColor());
    __this->SetTextColor(__this->TextColor());
}

void TextInputView__SetIsMultiline(TextInputView* __this, bool __isMultiline)
{
    __this->_private_1.SetIsMultiline(__this, __isMultiline);
}

void TextInputView__SetIsPassword(TextInputView* __this, bool __isPassword)
{
    __this->_private_1.SetIsPassword(__this, __isPassword);
}

void TextInputView__SetInputHint(TextInputView* __this, int __inputHint)
{
    __this->_private_1.SetInputHint(__this, __inputHint);
}

void TextInputView__SetPlaceholder(TextInputView* __this, ::uString* __placeholder)
{
    __this->_private_1.SetPlaceholder(__this, __placeholder);
}

void TextInputView___SetText(TextInputView* __this, ::uString* value, bool fromNativeEvent)
{
    if (::app::Uno::String__op_Equality(NULL, __this->_text, value))
    {
        return;
    }

    __this->_text = value;

    if (!fromNativeEvent && ::app::Uno::Platform2::ViewNativeHandle__op_Implicit(NULL, __this->Handle()))
    {
        __this->SetText(__this->_text);
    }

    __this->OnTextChanged();
}

void TextInputView__SetTextFromNativeEvent(TextInputView* __this, ::uString* value)
{
    __this->_SetText(value, true);
}

void TextInputView__OnTextChanged(TextInputView* __this)
{
    ::uDelegate* handler = __this->TextChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void TextInputView__SetText(TextInputView* __this, ::uString* __text)
{
    __this->_private_1.SetText(__this, __text);
}

void TextInputView__OnReturnPressed(TextInputView* __this)
{
    ::uDelegate* handler = __this->ReturnPressed;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void TextInputView__OnIsEditingChanged(TextInputView* __this)
{
    ::uDelegate* handler = __this->IsEditingChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void TextInputView__SetIsEditing(TextInputView* __this, bool __editing)
{
    __this->_private_1.SetIsEditing(__this, __editing);
}

void TextInputView__SetFontName(TextInputView* __this, ::uString* __fontName)
{
    __this->_private_1.SetFontName(__this, __fontName);
}

void TextInputView__SetFontFile(TextInputView* __this, ::app::Uno::BundleFile* __bundleFile)
{
    __this->_private_1.SetFontFile(__this, __bundleFile);
}

void TextInputView__SetFontSize(TextInputView* __this, float __fontSize)
{
    __this->_private_1.SetFontSize(__this, __fontSize);
}

void TextInputView__SetTextAlignment(TextInputView* __this, int __alignment)
{
    __this->_private_1.SetTextAlignment(__this, __alignment);
}

void TextInputView__SetTextWrapping(TextInputView* __this, int __wrapping)
{
    __this->_private_1.SetTextWrapping(__this, __wrapping);
}

void TextInputView__SetCaretColor(TextInputView* __this, ::app::Uno::Float3 __color)
{
    __this->_private_1.SetCaretColor(__this, __color);
}

void TextInputView__SetTextColor(TextInputView* __this, ::app::Uno::Float4 __color)
{
    __this->_private_1.SetTextColor(__this, __color);
}

void TextInputView__SetSelectionColor(TextInputView* __this, ::app::Uno::Float4 __color)
{
    __this->_private_1.SetSelectionColor(__this, __color);
}

void TextInputView__add_TextChanged(TextInputView* __this, ::uDelegate* value)
{
    __this->TextChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TextChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void TextInputView__remove_TextChanged(TextInputView* __this, ::uDelegate* value)
{
    __this->TextChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->TextChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

}}}
