// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TEXT_INPUT_H__
#define __APP_FUSE_CONTROLS_TEXT_INPUT_H__

#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Internal.ICollectionParent.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct TextEdit; } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_TextInput; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Controls {

struct TextInput;

extern ::uStaticStrong< ::app::Uno::UX::Template__Fuse_Controls_TextInput*> TextInput___baseTemplate;

struct TextInput__uType : ::app::Fuse::Controls::Control__uType
{
};

TextInput__uType* TextInput__typeof();

::app::Fuse::Elements::TextEdit* TextInput__get_Editor(TextInput* __this);
void TextInput__set_Editor(TextInput* __this, ::app::Fuse::Elements::TextEdit* value);
bool TextInput__get_IsMultiline(TextInput* __this);
void TextInput__set_IsMultiline(TextInput* __this, bool value);
int TextInput__get_TextWrapping(TextInput* __this);
void TextInput__set_TextWrapping(TextInput* __this, int value);
bool TextInput__get_IsPassword(TextInput* __this);
void TextInput__set_IsPassword(TextInput* __this, bool value);
int TextInput__get_InputHint(TextInput* __this);
void TextInput__set_InputHint(TextInput* __this, int value);
::uString* TextInput__get_Text(TextInput* __this);
void TextInput__set_Text(TextInput* __this, ::uString* value);
::app::Uno::Float3 TextInput__get_CaretColor(TextInput* __this);
void TextInput__set_CaretColor(TextInput* __this, ::app::Uno::Float3 value);
::app::Uno::Float4 TextInput__get_SelectionColor(TextInput* __this);
void TextInput__set_SelectionColor(TextInput* __this, ::app::Uno::Float4 value);
void TextInput__OnEditorTextChanged(TextInput* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void TextInput__PushProperties(TextInput* __this);
void TextInput__OnTextChanged(TextInput* __this);
void TextInput__OnApplyStyle(TextInput* __this, ::uObject* target);
void TextInput___TypeInit_3(::uStatic* __this);
void TextInput__add_TextChanged(TextInput* __this, ::uDelegate* value);
void TextInput__remove_TextChanged(TextInput* __this, ::uDelegate* value);

struct TextInput : ::app::Fuse::Controls::Control
{
    ::uStrong< ::app::Fuse::Elements::TextEdit*> _editor;
    bool _isMultiline;
    int _textWrapping;
    bool _isPassword;
    int _inputHint;
    ::uStrong< ::uString*> _text;
    ::app::Uno::Float3 _caretColor;
    ::app::Uno::Float4 _selectionColor;
    ::uStrong< ::uDelegate*> TextChanged;

    void OnEditorTextChanged(::uObject* sender, ::app::Uno::EventArgs* args) { TextInput__OnEditorTextChanged(this, sender, args); }
    void PushProperties() { TextInput__PushProperties(this); }
    void OnTextChanged() { TextInput__OnTextChanged(this); }
    void add_TextChanged(::uDelegate* value) { TextInput__add_TextChanged(this, value); }
    void remove_TextChanged(::uDelegate* value) { TextInput__remove_TextChanged(this, value); }
    ::app::Fuse::Elements::TextEdit* Editor() { return TextInput__get_Editor(this); }
    void Editor(::app::Fuse::Elements::TextEdit* value) { TextInput__set_Editor(this, value); }
    bool IsMultiline() { return TextInput__get_IsMultiline(this); }
    void IsMultiline(bool value) { TextInput__set_IsMultiline(this, value); }
    int TextWrapping() { return TextInput__get_TextWrapping(this); }
    void TextWrapping(int value) { TextInput__set_TextWrapping(this, value); }
    bool IsPassword() { return TextInput__get_IsPassword(this); }
    void IsPassword(bool value) { TextInput__set_IsPassword(this, value); }
    int InputHint() { return TextInput__get_InputHint(this); }
    void InputHint(int value) { TextInput__set_InputHint(this, value); }
    ::uString* Text() { return TextInput__get_Text(this); }
    void Text(::uString* value) { TextInput__set_Text(this, value); }
    ::app::Uno::Float3 CaretColor();
    void CaretColor(::app::Uno::Float3 value);
    ::app::Uno::Float4 SelectionColor();
    void SelectionColor(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Controls {

inline ::app::Uno::Float3 TextInput::CaretColor() { return TextInput__get_CaretColor(this); }
inline void TextInput::CaretColor(::app::Uno::Float3 value) { TextInput__set_CaretColor(this, value); }
inline ::app::Uno::Float4 TextInput::SelectionColor() { return TextInput__get_SelectionColor(this); }
inline void TextInput::SelectionColor(::app::Uno::Float4 value) { TextInput__set_SelectionColor(this, value); }

}}}


#endif
