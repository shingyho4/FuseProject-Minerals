// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__CHAR__UNO_CONTENT_FONTS_RENDERED_GLYPH_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__CHAR__UNO_CONTENT_FONTS_RENDERED_GLYPH_H__

#include <app/Uno.Content.Fonts.RenderedGlyph.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph;

struct KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__uType : ::uValueType
{
};

KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__uType* KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__typeof();

::uChar KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__get_Key(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph* __this);
::app::Uno::Content::Fonts::RenderedGlyph KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__get_Value(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph* __this);
void KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph* __this, ::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value);
KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__New_1(::uStatic* __this, ::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value);

struct KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph
{
    ::uChar _key;
    ::app::Uno::Content::Fonts::RenderedGlyph _value;

    void _ObjInit(::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value);
    ::uChar Key() { return KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__get_Key(this); }
    ::app::Uno::Content::Fonts::RenderedGlyph Value();

    KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph& operator =(const KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph& copy)
    {
        ::uCopyValue(this, KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__typeof(), &copy);
        return *this;
    }
};

}}}

#include <app/Uno.Char.h>

namespace app {
namespace Uno {
namespace Collections {

inline void KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph::_ObjInit(::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value) { KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(this, key, value); }
inline ::app::Uno::Content::Fonts::RenderedGlyph KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph::Value() { return KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__get_Value(this); }

}}}


#endif
