// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary2_Bucket__char__Uno_Content_Fonts_Ren-c38ce19d.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__uType* Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__typeof()
{
    static Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__uType*)::uAllocValueType(sizeof(Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__uType), "Uno.Collections.Dictionary2_Bucket<char,Uno.Content.Fonts.RenderedGlyph>", sizeof(Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph, Value.Bitmap);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Value.Bitmap";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
