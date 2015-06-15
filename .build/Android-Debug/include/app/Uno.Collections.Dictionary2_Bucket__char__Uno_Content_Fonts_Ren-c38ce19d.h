// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__CHAR__UNO_CONTENT_FONTS_REN_C38CE19D_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__CHAR__UNO_CONTENT_FONTS_REN_C38CE19D_H__

#include <app/Uno.Content.Fonts.RenderedGlyph.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph;

struct Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__uType : ::uValueType
{
};

Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__uType* Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__typeof();

struct Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph
{
    ::uChar Key;
    ::app::Uno::Content::Fonts::RenderedGlyph Value;
    int State;

    Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph& operator =(const Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph& copy)
    {
        ::uCopyValue(this, Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__typeof(), &copy);
        return *this;
    }
};

}}}


#endif
