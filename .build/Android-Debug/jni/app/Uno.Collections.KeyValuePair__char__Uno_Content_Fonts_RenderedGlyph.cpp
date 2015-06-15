// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph.h>

namespace app {
namespace Uno {
namespace Collections {

KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__uType* KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__typeof()
{
    static KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__uType*)::uAllocValueType(sizeof(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__uType), "Uno.Collections.KeyValuePair<char,Uno.Content.Fonts.RenderedGlyph>", sizeof(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph), 0, 1);
        type->StrongRefOffsets[0] = offsetof(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph, _value.Bitmap);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_value.Bitmap";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uChar KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__get_Key(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
    return __this->_key;
}

::app::Uno::Content::Fonts::RenderedGlyph KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__get_Value(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
    return __this->_value;
}

void KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph* __this, ::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value)
{
    __this->_key = key;
    __this->_value = value;
}

KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__New_1(::uStatic* __this, ::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value)
{
    KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph inst = ::uDefault< KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph>();
    inst._ObjInit(key, value);
    return inst;
}

}}}
