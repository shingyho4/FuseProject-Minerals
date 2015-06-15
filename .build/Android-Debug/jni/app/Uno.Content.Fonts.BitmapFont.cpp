// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.Dictionary__char__float.h>
#include <app/Uno.Collections.Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo.h>
#include <app/Uno.Collections.Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float.h>
#include <app/Uno.Content.Fonts.BitmapFont.h>
#include <app/Uno.Content.Fonts.FontFace.h>
#include <app/Uno.Float.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

BitmapFont__uType* BitmapFont__typeof()
{
    static BitmapFont__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BitmapFont__uType*)::uAllocClassType(sizeof(BitmapFont__uType), "Uno.Content.Fonts.BitmapFont", ::uObject__typeof(), 0, 7);
        type->StrongRefOffsets[0] = offsetof(BitmapFont, Glyphs);
        type->StrongRefOffsets[1] = offsetof(BitmapFont, Advances);
        type->StrongRefOffsets[2] = offsetof(BitmapFont, Kernings);
        type->StrongRefOffsets[3] = offsetof(BitmapFont, Texture);
        type->StrongRefOffsets[4] = offsetof(BitmapFont, FamilyName);
        type->StrongRefOffsets[5] = offsetof(BitmapFont, StyleName);
        type->StrongRefOffsets[6] = offsetof(BitmapFont, FontFace);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Glyphs";
        type->StrongRefNames[1] = "Advances";
        type->StrongRefNames[2] = "Kernings";
        type->StrongRefNames[3] = "Texture";
        type->StrongRefNames[4] = "FamilyName";
        type->StrongRefNames[5] = "StyleName";
        type->StrongRefNames[6] = "FontFace";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void BitmapFont___ObjInit(BitmapFont* __this)
{
    __this->Glyphs = ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__New_1(NULL);
    __this->Advances = ::app::Uno::Collections::Dictionary__char__float__New_1(NULL);
    __this->Kernings = ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__New_1(NULL);
}

BitmapFont* BitmapFont__New_1(::uStatic* __this)
{
    BitmapFont* inst = (::app::Uno::Content::Fonts::BitmapFont*)::uAllocObject(sizeof(::app::Uno::Content::Fonts::BitmapFont), ::app::Uno::Content::Fonts::BitmapFont__typeof());
    inst->_ObjInit();
    return inst;
}

}}}}
