// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_TEXT_ELEMENT_H__
#define __APP_FUSE_ELEMENTS_TEXT_ELEMENT_H__

#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct HitTestContext; } }

namespace app {
namespace Fuse {
namespace Elements {

struct TextElement;

struct TextElement__uType : ::app::Fuse::Elements::Element__uType
{
    void(*__fp_OnTextChanged)(TextElement*);
    void(*__fp_OnIsMultilineChanged)(TextElement*);
    void(*__fp_OnTextWrappingChanged)(TextElement*);
    void(*__fp_OnLineSpacingChanged)(TextElement*);
    ::uString*(*__fp_get_Text)(TextElement*);
    void(*__fp_set_Text)(TextElement*, ::uString*);
};

TextElement__uType* TextElement__typeof();

::uString* TextElement__get_Text(TextElement* __this);
void TextElement__set_Text(TextElement* __this, ::uString* value);
bool TextElement__get_IsMultiline(TextElement* __this);
void TextElement__set_IsMultiline(TextElement* __this, bool value);
int TextElement__get_TextWrapping(TextElement* __this);
void TextElement__set_TextWrapping(TextElement* __this, int value);
float TextElement__get_LineSpacing(TextElement* __this);
void TextElement__set_LineSpacing(TextElement* __this, float value);
void TextElement__OnTextChanged(TextElement* __this);
void TextElement__OnIsMultilineChanged(TextElement* __this);
void TextElement__OnTextWrappingChanged(TextElement* __this);
void TextElement__OnHitTestLocalVisual(TextElement* __this, ::app::Fuse::HitTestContext* htc);
void TextElement__OnLineSpacingChanged(TextElement* __this);
void TextElement___ObjInit_2(TextElement* __this);
void TextElement__add_TextChanged(TextElement* __this, ::uDelegate* value);
void TextElement__remove_TextChanged(TextElement* __this, ::uDelegate* value);

struct TextElement : ::app::Fuse::Elements::Element
{
    ::uStrong< ::uString*> _text;
    bool _isMultiline;
    int _textWrapping;
    float _lineSpacing;
    ::uStrong< ::uDelegate*> TextChanged;

    void OnTextChanged() { (((TextElement__uType*)this->__obj_type)->__fp_OnTextChanged)(this); }
    void OnIsMultilineChanged() { (((TextElement__uType*)this->__obj_type)->__fp_OnIsMultilineChanged)(this); }
    void OnTextWrappingChanged() { (((TextElement__uType*)this->__obj_type)->__fp_OnTextWrappingChanged)(this); }
    void OnLineSpacingChanged() { (((TextElement__uType*)this->__obj_type)->__fp_OnLineSpacingChanged)(this); }
    void _ObjInit_2() { TextElement___ObjInit_2(this); }
    void add_TextChanged(::uDelegate* value) { TextElement__add_TextChanged(this, value); }
    void remove_TextChanged(::uDelegate* value) { TextElement__remove_TextChanged(this, value); }
    ::uString* Text() { return (((TextElement__uType*)this->__obj_type)->__fp_get_Text)(this); }
    void Text(::uString* value) { (((TextElement__uType*)this->__obj_type)->__fp_set_Text)(this, value); }
    bool IsMultiline() { return TextElement__get_IsMultiline(this); }
    void IsMultiline(bool value) { TextElement__set_IsMultiline(this, value); }
    int TextWrapping() { return TextElement__get_TextWrapping(this); }
    void TextWrapping(int value) { TextElement__set_TextWrapping(this, value); }
    float LineSpacing() { return TextElement__get_LineSpacing(this); }
    void LineSpacing(float value) { TextElement__set_LineSpacing(this, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Elements {

}}}


#endif
