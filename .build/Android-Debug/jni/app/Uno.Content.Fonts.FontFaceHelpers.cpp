// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__char__float.h>
#include <app/Uno.Collections.Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo.h>
#include <app/Uno.Collections.Dictionary__char__Uno_Content_Fonts_RenderedGlyph.h>
#include <app/Uno.Collections.Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__char__Uno_Content_Fonts-c9e12673.h>
#include <app/Uno.Collections.KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph.h>
#include <app/Uno.Content.Fonts.BitmapFont.h>
#include <app/Uno.Content.Fonts.BitmapFont_CharPair.h>
#include <app/Uno.Content.Fonts.BitmapFont_GlyphInfo.h>
#include <app/Uno.Content.Fonts.FontFace.h>
#include <app/Uno.Content.Fonts.FontFaceHelpers.h>
#include <app/Uno.Content.Fonts.RenderedGlyph.h>
#include <app/Uno.Content.Images.Bitmap.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Graphics.FormatHelpers.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>
#include <app/Uno.UShort.h>
#include <app/Uno.UShort2.h>

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

FontFaceHelpers__uType* FontFaceHelpers__typeof()
{
    static FontFaceHelpers__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FontFaceHelpers__uType*)::uAllocClassType(sizeof(FontFaceHelpers__uType), "Uno.Content.Fonts.FontFaceHelpers");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Content::Fonts::BitmapFont* FontFaceHelpers__RenderSpriteFont(::uStatic* __this, ::app::Uno::Content::Fonts::FontFace* font, float size, ::uString* charset)
{
    ::app::Uno::Content::Fonts::BitmapFont* collection_123;
    ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* glyphs = ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph__New_1(NULL);
    ::uString* charsetInclWs = ::app::Uno::String__op_Addition(NULL, charset, ::uGetConstString(" \300\200"));
    int maxSize = 0;

    for (int i = 0; i < ::uPtr< ::uString*>(charsetInclWs)->Length(); i++)
    {
        ::uChar c = ::uPtr< ::uString*>(charsetInclWs)->Item(i);

        if (::uPtr< ::app::Uno::Content::Fonts::FontFace*>(font)->ContainsGlyph(size, c))
        {
            if (::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*>(glyphs)->ContainsKey(c))
            {
                continue;
            }

            ::app::Uno::Content::Fonts::RenderedGlyph g = ::uPtr< ::app::Uno::Content::Fonts::FontFace*>(font)->RenderGlyph(size, c);
            ::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*>(glyphs)->Add(c, g);

            if (g.Bitmap != NULL)
            {
                maxSize = ::app::Uno::Math__Max_8(NULL, maxSize, ::uPtr< ::app::Uno::Content::Images::Bitmap*>(g.Bitmap)->Size().X);
                maxSize = ::app::Uno::Math__Max_8(NULL, maxSize, ::uPtr< ::app::Uno::Content::Images::Bitmap*>(g.Bitmap)->Size().Y);
            }
        }
    }

    int sideCount = (int)::app::Uno::Math__Ceil_1(NULL, ::app::Uno::Math__Sqrt_1(NULL, (float)::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*>(glyphs)->Count()));
    int sideSize = ::app::Uno::Math__NextPow2(NULL, sideCount * maxSize);
    ::app::Uno::Content::Images::Bitmap* dst = ::app::Uno::Content::Images::Bitmap__New_1(NULL, ::app::Uno::Int2__New_2(NULL, sideSize, sideSize), 1, NULL);
    ::app::Uno::Graphics::Texture2D* tex = ::app::Uno::Graphics::Texture2D__New_2(NULL, ::uPtr< ::app::Uno::Content::Images::Bitmap*>(dst)->Size(), ::uPtr< ::app::Uno::Content::Images::Bitmap*>(dst)->Format(), true);
    collection_123 = ::app::Uno::Content::Fonts::BitmapFont__New_1(NULL);
    ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(collection_123)->Texture = tex;
    collection_123->Ascent = ::app::Uno::Math__Round_1(NULL, ::uPtr< ::app::Uno::Content::Fonts::FontFace*>(font)->GetAscender(size));
    collection_123->Descent = ::app::Uno::Math__Round_1(NULL, font->GetDescender(size));
    collection_123->LineHeight = ::app::Uno::Math__Round_1(NULL, font->GetLineHeight(size));
    collection_123->PixelSize = size;
    collection_123->PixelSpread = 0.0f;
    collection_123->FontFace = font;
    collection_123->FamilyName = font->FamilyName();
    collection_123->StyleName = font->StyleName();
    ::app::Uno::Content::Fonts::BitmapFont* result = collection_123;
    int gi = 0;

    for (::app::Uno::Collections::Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph enum_124 = glyphs->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph e = enum_124.Current();
        int dstX = (gi % sideCount) * (sideSize / sideCount);
        int dstY = ((gi / sideCount) % sideCount) * (sideSize / sideCount);
        gi++;
        ::app::Uno::Content::Images::Bitmap* src = e.Value().Bitmap;
        ::app::Uno::Float2 srcSize = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);

        if (src != NULL)
        {
            srcSize = ::app::Uno::Float2__op_Implicit(NULL, ::uPtr< ::app::Uno::Content::Images::Bitmap*>(src)->Size());
            int bpp = ::app::Uno::Graphics::FormatHelpers__GetStrideInBytes(NULL, src->Format());

            for (int srcY = 0; srcY < src->Size().Y; srcY++)
            {
                for (int srcX = 0; srcX < src->Size().X; srcX++)
                {
                    ::uPtr< ::app::Uno::Buffer*>(::uPtr< ::app::Uno::Content::Images::Bitmap*>(dst)->Buffer())->Item((((dstY + srcY) * ::uPtr< ::app::Uno::Content::Images::Bitmap*>(dst)->Size().X) + dstX) + srcX, ::uPtr< ::app::Uno::Buffer*>(src->Buffer())->Item(((srcY * src->Size().X) + srcX) * bpp));
                }
            }
        }

        ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo g = ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo();
        g.Advance = ::app::Uno::Math__Round_1(NULL, e.Value().Advance.X);
        g.Bearing = ::app::Uno::Math__Round_2(NULL, e.Value().Bearing);
        g.Size = srcSize;
        g.UpperLeft.X = (::uUShort)((65535.0 * (double)dstX) / (double)::uPtr< ::app::Uno::Content::Images::Bitmap*>(dst)->Size().X);
        g.UpperLeft.Y = (::uUShort)((65535.0 * (double)dstY) / (double)dst->Size().Y);
        g.LowerRight.X = (::uUShort)((65535.0 * (double)((float)dstX + srcSize.X)) / (double)dst->Size().X);
        g.LowerRight.Y = (::uUShort)((65535.0 * (double)((float)dstY + srcSize.Y)) / (double)dst->Size().Y);
        ::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(result)->Glyphs)->Add(e.Key(), g);
        ::uPtr< ::app::Uno::Collections::Dictionary__char__float*>(result->Advances)->Add(e.Key(), g.Advance);
    }

    ::uPtr< ::app::Uno::Graphics::Texture2D*>(tex)->Update_1(dst->Buffer());

    if (tex->SupportsMipmap())
    {
        tex->GenerateMipmap();
    }

    for (int i = 0; i < ::uPtr< ::uString*>(charsetInclWs)->Length(); i++)
    {
        ::uChar left = ::uPtr< ::uString*>(charsetInclWs)->Item(i);

        for (int j = 0; j < charsetInclWs->Length(); j++)
        {
            ::uChar right = ::uPtr< ::uString*>(charsetInclWs)->Item(j);
            ::app::Uno::Float2 kerning = ::app::Uno::Float2();

            if (::uPtr< ::app::Uno::Content::Fonts::FontFace*>(font)->TryGetKerning(size, left, right, &kerning) && (::app::Uno::Math__Abs_1(NULL, kerning.X) > 0.0f))
            {
                ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(result)->Kernings)->Item(::app::Uno::Content::Fonts::BitmapFont_CharPair__New_1(NULL, left, right), kerning.X);
            }
        }
    }

    return result;
}

}}}}
