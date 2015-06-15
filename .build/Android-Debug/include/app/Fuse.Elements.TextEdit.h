// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_TEXT_EDIT_H__
#define __APP_FUSE_ELEMENTS_TEXT_EDIT_H__

#include <app/Fuse.Elements.TextElement.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Elements {

struct TextEdit;

struct TextEdit__uType : ::app::Fuse::Elements::TextElement__uType
{
    void(*__fp_OnIsPasswordChanged)(TextEdit*);
    void(*__fp_OnInputHintChanged)(TextEdit*);
    void(*__fp_OnCaretColorChanged)(TextEdit*);
    void(*__fp_OnSelectionColorChanged)(TextEdit*);
};

TextEdit__uType* TextEdit__typeof();

bool TextEdit__get_IsPassword(TextEdit* __this);
void TextEdit__set_IsPassword(TextEdit* __this, bool value);
int TextEdit__get_InputHint(TextEdit* __this);
void TextEdit__set_InputHint(TextEdit* __this, int value);
::app::Uno::Float3 TextEdit__get_CaretColor(TextEdit* __this);
void TextEdit__set_CaretColor(TextEdit* __this, ::app::Uno::Float3 value);
::app::Uno::Float4 TextEdit__get_SelectionColor(TextEdit* __this);
void TextEdit__set_SelectionColor(TextEdit* __this, ::app::Uno::Float4 value);
void TextEdit__OnIsPasswordChanged(TextEdit* __this);
void TextEdit__OnInputHintChanged(TextEdit* __this);
void TextEdit__OnCaretColorChanged(TextEdit* __this);
void TextEdit__OnSelectionColorChanged(TextEdit* __this);

struct TextEdit : ::app::Fuse::Elements::TextElement
{
    bool _isPassword;
    int _inputHint;
    ::app::Uno::Float3 _caretColor;
    ::app::Uno::Float4 _selectionColor;

    void OnIsPasswordChanged() { (((TextEdit__uType*)this->__obj_type)->__fp_OnIsPasswordChanged)(this); }
    void OnInputHintChanged() { (((TextEdit__uType*)this->__obj_type)->__fp_OnInputHintChanged)(this); }
    void OnCaretColorChanged() { (((TextEdit__uType*)this->__obj_type)->__fp_OnCaretColorChanged)(this); }
    void OnSelectionColorChanged() { (((TextEdit__uType*)this->__obj_type)->__fp_OnSelectionColorChanged)(this); }
    bool IsPassword() { return TextEdit__get_IsPassword(this); }
    void IsPassword(bool value) { TextEdit__set_IsPassword(this, value); }
    int InputHint() { return TextEdit__get_InputHint(this); }
    void InputHint(int value) { TextEdit__set_InputHint(this, value); }
    ::app::Uno::Float3 CaretColor();
    void CaretColor(::app::Uno::Float3 value);
    ::app::Uno::Float4 SelectionColor();
    void SelectionColor(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Elements {

inline ::app::Uno::Float3 TextEdit::CaretColor() { return TextEdit__get_CaretColor(this); }
inline void TextEdit::CaretColor(::app::Uno::Float3 value) { TextEdit__set_CaretColor(this, value); }
inline ::app::Uno::Float4 TextEdit::SelectionColor() { return TextEdit__get_SelectionColor(this); }
inline void TextEdit::SelectionColor(::app::Uno::Float4 value) { TextEdit__set_SelectionColor(this, value); }

}}}


#endif
