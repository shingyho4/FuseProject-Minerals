// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__CHAR__UNO_CONTENT_FONTS_C9E12673_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__CHAR__UNO_CONTENT_FONTS_C9E12673_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__char__Uno_Content_Fonts_RenderedGlyph; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph;

struct Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__uType : ::uValueType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__uType* Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__typeof();

::app::Uno::Collections::KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__get_Current(Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph* __this);
void Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__Dispose(Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph* __this);
bool Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__MoveNext(Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph* __this);
void Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* source);
Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* source);

struct Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph
{
    ::uStrong< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*> _source;
    ::app::Uno::Collections::KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph _current;
    int _iterator;
    int _version;

    void Dispose() { Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__Dispose(this); }
    bool MoveNext() { return Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* source) { Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(this, source); }
    ::app::Uno::Collections::KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph Current();

    Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph& operator =(const Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph& copy)
    {
        ::uCopyValue(this, Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__typeof(), &copy);
        return *this;
    }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph::Current() { return Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__get_Current(this); }

}}}


#endif
