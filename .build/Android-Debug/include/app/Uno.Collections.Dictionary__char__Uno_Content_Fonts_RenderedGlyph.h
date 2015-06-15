// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__CHAR__UNO_CONTENT_FONTS_RENDERED_GLYPH_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__CHAR__UNO_CONTENT_FONTS_RENDERED_GLYPH_H__

#include <app/Uno.Collections.Dictionary2_Bucket__char__Uno_Content_Fonts_Ren-c38ce19d.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph; } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct RenderedGlyph; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__char__Uno_Content_Fonts_RenderedGlyph;

struct Dictionary__char__Uno_Content_Fonts_RenderedGlyph__uType : ::uClassType
{
};

Dictionary__char__Uno_Content_Fonts_RenderedGlyph__uType* Dictionary__char__Uno_Content_Fonts_RenderedGlyph__typeof();

int Dictionary__char__Uno_Content_Fonts_RenderedGlyph__get_Count(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this);
::app::Uno::Collections::Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph Dictionary__char__Uno_Content_Fonts_RenderedGlyph__GetEnumerator(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this);
void Dictionary__char__Uno_Content_Fonts_RenderedGlyph__Rehash(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this);
void Dictionary__char__Uno_Content_Fonts_RenderedGlyph__Add(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this, ::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value);
bool Dictionary__char__Uno_Content_Fonts_RenderedGlyph__ContainsKey(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this, ::uChar key);
void Dictionary__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(Dictionary__char__Uno_Content_Fonts_RenderedGlyph* __this);
Dictionary__char__Uno_Content_Fonts_RenderedGlyph* Dictionary__char__Uno_Content_Fonts_RenderedGlyph__New_1(::uStatic* __this);

struct Dictionary__char__Uno_Content_Fonts_RenderedGlyph : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::app::Uno::Collections::Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph GetEnumerator();
    void Rehash() { Dictionary__char__Uno_Content_Fonts_RenderedGlyph__Rehash(this); }
    void Add(::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value);
    bool ContainsKey(::uChar key) { return Dictionary__char__Uno_Content_Fonts_RenderedGlyph__ContainsKey(this, key); }
    void _ObjInit() { Dictionary__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(this); }
    int Count() { return Dictionary__char__Uno_Content_Fonts_RenderedGlyph__get_Count(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__char__Uno_Content_Fonts-c9e12673.h>
#include <app/Uno.Content.Fonts.RenderedGlyph.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph Dictionary__char__Uno_Content_Fonts_RenderedGlyph::GetEnumerator() { return Dictionary__char__Uno_Content_Fonts_RenderedGlyph__GetEnumerator(this); }
inline void Dictionary__char__Uno_Content_Fonts_RenderedGlyph::Add(::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value) { Dictionary__char__Uno_Content_Fonts_RenderedGlyph__Add(this, key, value); }

}}}


#endif
