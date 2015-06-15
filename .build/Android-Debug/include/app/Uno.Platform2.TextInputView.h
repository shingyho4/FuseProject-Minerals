// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM2_TEXT_INPUT_VIEW_H__
#define __APP_UNO_PLATFORM2_TEXT_INPUT_VIEW_H__

#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Platform2.View.h>
#include <Uno/Platform2.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct BundleFile; } }

namespace app {
namespace Uno {
namespace Platform2 {

struct TextInputView;

struct TextInputView__uType : ::app::Uno::Platform2::View__uType
{
};

TextInputView__uType* TextInputView__typeof();

void TextInputView__Finalize(TextInputView* __this);
bool TextInputView__get_IsMultiline(TextInputView* __this);
void TextInputView__set_IsMultiline(TextInputView* __this, bool value);
bool TextInputView__get_IsPassword(TextInputView* __this);
void TextInputView__set_IsPassword(TextInputView* __this, bool value);
int TextInputView__get_InputHint(TextInputView* __this);
void TextInputView__set_InputHint(TextInputView* __this, int value);
::uString* TextInputView__get_Placeholder(TextInputView* __this);
void TextInputView__set_Placeholder(TextInputView* __this, ::uString* value);
::uString* TextInputView__get_Text(TextInputView* __this);
void TextInputView__set_Text(TextInputView* __this, ::uString* value);
bool TextInputView__get_IsEditing(TextInputView* __this);
void TextInputView__set_IsEditing(TextInputView* __this, bool value);
::uString* TextInputView__get_FontName(TextInputView* __this);
void TextInputView__set_FontName(TextInputView* __this, ::uString* value);
::app::Uno::BundleFile* TextInputView__get_FontFile(TextInputView* __this);
void TextInputView__set_FontFile(TextInputView* __this, ::app::Uno::BundleFile* value);
float TextInputView__get_FontSize(TextInputView* __this);
void TextInputView__set_FontSize(TextInputView* __this, float value);
int TextInputView__get_TextAlignment(TextInputView* __this);
void TextInputView__set_TextAlignment(TextInputView* __this, int value);
int TextInputView__get_TextWrapping(TextInputView* __this);
void TextInputView__set_TextWrapping(TextInputView* __this, int value);
::app::Uno::Float3 TextInputView__get_CaretColor(TextInputView* __this);
void TextInputView__set_CaretColor(TextInputView* __this, ::app::Uno::Float3 value);
::app::Uno::Float4 TextInputView__get_TextColor(TextInputView* __this);
void TextInputView__set_TextColor(TextInputView* __this, ::app::Uno::Float4 value);
::app::Uno::Float4 TextInputView__get_SelectionColor(TextInputView* __this);
void TextInputView__set_SelectionColor(TextInputView* __this, ::app::Uno::Float4 value);
void TextInputView__Destroy(TextInputView* __this);
void TextInputView__ResetStateOnHandleChanged(TextInputView* __this);
void TextInputView__SetIsMultiline(TextInputView* __this, bool __isMultiline);
void TextInputView__SetIsPassword(TextInputView* __this, bool __isPassword);
void TextInputView__SetInputHint(TextInputView* __this, int __inputHint);
void TextInputView__SetPlaceholder(TextInputView* __this, ::uString* __placeholder);
void TextInputView___SetText(TextInputView* __this, ::uString* value, bool fromNativeEvent);
void TextInputView__SetTextFromNativeEvent(TextInputView* __this, ::uString* value);
void TextInputView__OnTextChanged(TextInputView* __this);
void TextInputView__SetText(TextInputView* __this, ::uString* __text);
void TextInputView__OnReturnPressed(TextInputView* __this);
void TextInputView__OnIsEditingChanged(TextInputView* __this);
void TextInputView__SetIsEditing(TextInputView* __this, bool __editing);
void TextInputView__SetFontName(TextInputView* __this, ::uString* __fontName);
void TextInputView__SetFontFile(TextInputView* __this, ::app::Uno::BundleFile* __bundleFile);
void TextInputView__SetFontSize(TextInputView* __this, float __fontSize);
void TextInputView__SetTextAlignment(TextInputView* __this, int __alignment);
void TextInputView__SetTextWrapping(TextInputView* __this, int __wrapping);
void TextInputView__SetCaretColor(TextInputView* __this, ::app::Uno::Float3 __color);
void TextInputView__SetTextColor(TextInputView* __this, ::app::Uno::Float4 __color);
void TextInputView__SetSelectionColor(TextInputView* __this, ::app::Uno::Float4 __color);
void TextInputView__add_TextChanged(TextInputView* __this, ::uDelegate* value);
void TextInputView__remove_TextChanged(TextInputView* __this, ::uDelegate* value);

struct TextInputView : ::app::Uno::Platform2::View
{
    uPlatform2::TextInputView _private_1;
    bool _isMultiline;
    bool _isPassword;
    int _inputHint;
    ::uStrong< ::uString*> _placeholder;
    ::uStrong< ::uString*> _text;
    bool _isEditing;
    ::uStrong< ::uString*> _fontName;
    ::uStrong< ::app::Uno::BundleFile*> _fontFile;
    float _fontSize;
    int _textAlignment;
    int _textWrapping;
    ::app::Uno::Float3 _caretColor;
    ::app::Uno::Float4 _textColor;
    ::app::Uno::Float4 _selectionColor;
    ::uStrong< ::uDelegate*> TextChanged;
    ::uStrong< ::uDelegate*> ReturnPressed;
    ::uStrong< ::uDelegate*> IsEditingChanged;

    void Destroy() { TextInputView__Destroy(this); }
    void SetIsMultiline(bool __isMultiline) { TextInputView__SetIsMultiline(this, __isMultiline); }
    void SetIsPassword(bool __isPassword) { TextInputView__SetIsPassword(this, __isPassword); }
    void SetInputHint(int __inputHint) { TextInputView__SetInputHint(this, __inputHint); }
    void SetPlaceholder(::uString* __placeholder) { TextInputView__SetPlaceholder(this, __placeholder); }
    void _SetText(::uString* value, bool fromNativeEvent) { TextInputView___SetText(this, value, fromNativeEvent); }
    void SetTextFromNativeEvent(::uString* value) { TextInputView__SetTextFromNativeEvent(this, value); }
    void OnTextChanged() { TextInputView__OnTextChanged(this); }
    void SetText(::uString* __text) { TextInputView__SetText(this, __text); }
    void OnReturnPressed() { TextInputView__OnReturnPressed(this); }
    void OnIsEditingChanged() { TextInputView__OnIsEditingChanged(this); }
    void SetIsEditing(bool __editing) { TextInputView__SetIsEditing(this, __editing); }
    void SetFontName(::uString* __fontName) { TextInputView__SetFontName(this, __fontName); }
    void SetFontFile(::app::Uno::BundleFile* __bundleFile) { TextInputView__SetFontFile(this, __bundleFile); }
    void SetFontSize(float __fontSize) { TextInputView__SetFontSize(this, __fontSize); }
    void SetTextAlignment(int __alignment) { TextInputView__SetTextAlignment(this, __alignment); }
    void SetTextWrapping(int __wrapping) { TextInputView__SetTextWrapping(this, __wrapping); }
    void SetCaretColor(::app::Uno::Float3 __color);
    void SetTextColor(::app::Uno::Float4 __color);
    void SetSelectionColor(::app::Uno::Float4 __color);
    void add_TextChanged(::uDelegate* value) { TextInputView__add_TextChanged(this, value); }
    void remove_TextChanged(::uDelegate* value) { TextInputView__remove_TextChanged(this, value); }
    bool IsMultiline() { return TextInputView__get_IsMultiline(this); }
    void IsMultiline(bool value) { TextInputView__set_IsMultiline(this, value); }
    bool IsPassword() { return TextInputView__get_IsPassword(this); }
    void IsPassword(bool value) { TextInputView__set_IsPassword(this, value); }
    int InputHint() { return TextInputView__get_InputHint(this); }
    void InputHint(int value) { TextInputView__set_InputHint(this, value); }
    ::uString* Placeholder() { return TextInputView__get_Placeholder(this); }
    void Placeholder(::uString* value) { TextInputView__set_Placeholder(this, value); }
    ::uString* Text() { return TextInputView__get_Text(this); }
    void Text(::uString* value) { TextInputView__set_Text(this, value); }
    bool IsEditing() { return TextInputView__get_IsEditing(this); }
    void IsEditing(bool value) { TextInputView__set_IsEditing(this, value); }
    ::uString* FontName() { return TextInputView__get_FontName(this); }
    void FontName(::uString* value) { TextInputView__set_FontName(this, value); }
    ::app::Uno::BundleFile* FontFile() { return TextInputView__get_FontFile(this); }
    void FontFile(::app::Uno::BundleFile* value) { TextInputView__set_FontFile(this, value); }
    float FontSize() { return TextInputView__get_FontSize(this); }
    void FontSize(float value) { TextInputView__set_FontSize(this, value); }
    int TextAlignment() { return TextInputView__get_TextAlignment(this); }
    void TextAlignment(int value) { TextInputView__set_TextAlignment(this, value); }
    int TextWrapping() { return TextInputView__get_TextWrapping(this); }
    void TextWrapping(int value) { TextInputView__set_TextWrapping(this, value); }
    ::app::Uno::Float3 CaretColor();
    void CaretColor(::app::Uno::Float3 value);
    ::app::Uno::Float4 TextColor();
    void TextColor(::app::Uno::Float4 value);
    ::app::Uno::Float4 SelectionColor();
    void SelectionColor(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>

namespace app {
namespace Uno {
namespace Platform2 {

inline void TextInputView::SetCaretColor(::app::Uno::Float3 __color) { TextInputView__SetCaretColor(this, __color); }
inline void TextInputView::SetTextColor(::app::Uno::Float4 __color) { TextInputView__SetTextColor(this, __color); }
inline void TextInputView::SetSelectionColor(::app::Uno::Float4 __color) { TextInputView__SetSelectionColor(this, __color); }
inline ::app::Uno::Float3 TextInputView::CaretColor() { return TextInputView__get_CaretColor(this); }
inline void TextInputView::CaretColor(::app::Uno::Float3 value) { TextInputView__set_CaretColor(this, value); }
inline ::app::Uno::Float4 TextInputView::TextColor() { return TextInputView__get_TextColor(this); }
inline void TextInputView::TextColor(::app::Uno::Float4 value) { TextInputView__set_TextColor(this, value); }
inline ::app::Uno::Float4 TextInputView::SelectionColor() { return TextInputView__get_SelectionColor(this); }
inline void TextInputView::SelectionColor(::app::Uno::Float4 value) { TextInputView__set_SelectionColor(this, value); }

}}}


#endif
