// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Buffer.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo.h>
#include <app/Uno.Collections.Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float.h>
#include <app/Uno.Content.Fonts.BitmapFont.h>
#include <app/Uno.Content.Fonts.BitmapFont_CharPair.h>
#include <app/Uno.Content.Fonts.DefaultTextTransform.h>
#include <app/Uno.Content.Fonts.FontFace.h>
#include <app/Uno.Content.Fonts.FontFaceHelpers.h>
#include <app/Uno.Content.Fonts.RenderedGlyph.h>
#include <app/Uno.Content.Fonts.TextRenderer.h>
#include <app/Uno.Content.Fonts.TextShader.h>
#include <app/Uno.Content.Fonts.TextShaderData.h>
#include <app/Uno.Content.Fonts.TextTransform.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>
#include <app/Uno.UShort.h>
#include <app/Uno.UShort2.h>

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

TextRenderer__uType* TextRenderer__typeof()
{
    static TextRenderer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextRenderer__uType*)::uAllocClassType(sizeof(TextRenderer__uType), "Uno.Content.Fonts.TextRenderer", ::uObject__typeof(), 0, 7);
        type->StrongRefOffsets[0] = offsetof(TextRenderer, _font);
        type->StrongRefOffsets[1] = offsetof(TextRenderer, _shader);
        type->StrongRefOffsets[2] = offsetof(TextRenderer, _transform);
        type->StrongRefOffsets[3] = offsetof(TextRenderer, _buffer);
        type->StrongRefOffsets[4] = offsetof(TextRenderer, _vbo);
        type->StrongRefOffsets[5] = offsetof(TextRenderer, _ibo);
        type->StrongRefOffsets[6] = offsetof(TextRenderer, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_font";
        type->StrongRefNames[1] = "_shader";
        type->StrongRefNames[2] = "_transform";
        type->StrongRefNames[3] = "_buffer";
        type->StrongRefNames[4] = "_vbo";
        type->StrongRefNames[5] = "_ibo";
        type->StrongRefNames[6] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool TextRenderer__get_HasBegun(TextRenderer* __this)
{
    return __this->_HasBegun;
}

void TextRenderer__set_HasBegun(TextRenderer* __this, bool value)
{
    __this->_HasBegun = value;
}

::app::Uno::Content::Fonts::TextTransform* TextRenderer__get_Transform(TextRenderer* __this)
{
    return __this->_transform;
}

void TextRenderer__set_Transform(TextRenderer* __this, ::app::Uno::Content::Fonts::TextTransform* value)
{
    __this->_transform = value;
}

::app::Uno::Float4 TextRenderer__get_Color(TextRenderer* __this)
{
    return ::app::Uno::Float4__New_2(NULL, (float)__this->_color.X / 255.0f, (float)__this->_color.Y / 255.0f, (float)__this->_color.Z / 255.0f, (float)__this->_color.W / 255.0f);
}

void TextRenderer__set_Color(TextRenderer* __this, ::app::Uno::Float4 value)
{
    __this->_color = ::app::Uno::Byte4__New_1(NULL, (::uByte)(::app::Uno::Math__Saturate_1(NULL, value.X) * 255.0f), (::uByte)(::app::Uno::Math__Saturate_1(NULL, value.Y) * 255.0f), (::uByte)(::app::Uno::Math__Saturate_1(NULL, value.Z) * 255.0f), (::uByte)(::app::Uno::Math__Saturate_1(NULL, value.W) * 255.0f));
}

void TextRenderer__Begin(TextRenderer* __this, ::app::Uno::Content::Fonts::BitmapFont* font)
{
    __this->_font = font;
    ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->CharCount = 0;
    __this->HasBegun(true);
}

::app::Uno::Float2 TextRenderer__MeasureString(TextRenderer* __this, ::uString* text)
{
    return __this->MeasureString_1(text, 0, ::uPtr< ::uString*>(text)->Length());
}

::app::Uno::Float2 TextRenderer__MeasureString_1(TextRenderer* __this, ::uString* text, int startIndex, int length)
{
    if ((__this->_font == NULL) || ::app::Uno::String__op_Equality(NULL, text, NULL))
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    float caret = 0.0f;
    ::uChar last = 0;

    for (int i = startIndex; i < (startIndex + length); i++)
    {
        ::uChar c = ::uPtr< ::uString*>(text)->Item(i);

        if ((i == 0) && (c == 8203))
        {
            continue;
        }

        ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo ci = ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo();

        if (::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->Glyphs)->TryGetValue(c, &ci))
        {
            float kerning = float();

            if (::uPtr< ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->Kernings)->TryGetValue(::app::Uno::Content::Fonts::BitmapFont_CharPair__New_1(NULL, last, c), &kerning))
            {
                caret = caret + (kerning * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale);
            }

            caret = caret + ((ci.Advance * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale) + __this->_tracking);
        }
        else if ((::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->FontFace != NULL) && ::uPtr< ::app::Uno::Content::Fonts::FontFace*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->FontFace)->ContainsGlyph(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->PixelSize, c))
        {
            ::app::Uno::Content::Fonts::RenderedGlyph rg = ::uPtr< ::app::Uno::Content::Fonts::FontFace*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->FontFace)->RenderGlyph(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->PixelSize, c);
            ::app::Uno::Float2 kerning = ::app::Uno::Float2();

            if (::uPtr< ::app::Uno::Content::Fonts::FontFace*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->FontFace)->TryGetKerning(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->PixelSize, last, c, &kerning))
            {
                caret = caret + (kerning.X * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale);
            }

            caret = caret + ((::app::Uno::Math__Round_1(NULL, rg.Advance.X) * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale) + __this->_tracking);
        }

        last = c;
    }

    return ::app::Uno::Float2__New_2(NULL, caret, ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->Ascent + ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->Descent);
}

void TextRenderer__WriteString(TextRenderer* __this, ::app::Uno::Float2 caret, ::uString* text)
{
    __this->WriteString_1(caret, text, 0, ::uPtr< ::uString*>(text)->Length());
}

void TextRenderer__WriteGlyph(TextRenderer* __this, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo ci, ::app::Uno::Float2 caret)
{
    if ((ci.UpperLeft.X != ci.LowerRight.X) && (ci.UpperLeft.Y != ci.LowerRight.Y))
    {
        ::app::Uno::Float2 p = ::app::Uno::Float2__op_Addition(NULL, caret, ::app::Uno::Float2__op_Multiply(NULL, ci.Bearing, ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale));
        int o = ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->CharCount * 64;
        ::app::Uno::Float2 s = ::app::Uno::Float2__op_Multiply(NULL, ci.Size, ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetFloat(o, p.X, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetFloat(o + 4, p.Y + s.Y, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetUShort(o + 8, ci.UpperLeft.X, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetUShort(o + 10, ci.LowerRight.Y, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetByte4(o + 12, __this->_color);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetFloat(o + 16, p.X + s.X, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetFloat(o + 20, p.Y + s.Y, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetUShort(o + 24, ci.LowerRight.X, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetUShort(o + 26, ci.LowerRight.Y, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetByte4(o + 28, __this->_color);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetFloat(o + 32, p.X + s.X, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetFloat(o + 36, p.Y, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetUShort(o + 40, ci.LowerRight.X, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetUShort(o + 42, ci.UpperLeft.Y, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetByte4(o + 44, __this->_color);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetFloat(o + 48, p.X, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetFloat(o + 52, p.Y, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetUShort(o + 56, ci.UpperLeft.X, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetUShort(o + 58, ci.UpperLeft.Y, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetByte4(o + 60, __this->_color);
        ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->CharCount++;
    }
}

void TextRenderer__WriteString_1(TextRenderer* __this, ::app::Uno::Float2 caret, ::uString* text, int startIndex, int length)
{
    ::uChar last = 0;

    if (::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->PixelSpread > 0.0f)
    {
        caret = ::app::Uno::Float2__op_Subtraction(NULL, caret, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__New_1(NULL, ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->PixelSpread * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale), ::app::Uno::Float2__New_2(NULL, 1.0f, 2.0f)));
    }

    for (int i = startIndex; i < (startIndex + length); i++)
    {
        ::uChar c = ::uPtr< ::uString*>(text)->Item(i);

        if ((i == 0) && (c == 8203))
        {
            continue;
        }

        ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo ci = ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo();

        if (::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->Glyphs)->TryGetValue(c, &ci))
        {
            float kerning = float();

            if (::uPtr< ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->Kernings)->TryGetValue(::app::Uno::Content::Fonts::BitmapFont_CharPair__New_1(NULL, last, c), &kerning))
            {
                caret.X = caret.X + (kerning * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale);
            }

            if ((ci.UpperLeft.X != ci.LowerRight.X) && (ci.UpperLeft.Y != ci.LowerRight.Y))
            {
                __this->WriteGlyph(ci, caret);

                if (::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->CharCount == __this->_maxCharCount)
                {
                    __this->End();
                    __this->Begin(__this->_font);
                }
            }

            caret.X = caret.X + ((ci.Advance * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale) + __this->_tracking);
        }
        else if ((::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->FontFace != NULL) && ::uPtr< ::app::Uno::Content::Fonts::FontFace*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->FontFace)->ContainsGlyph(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->PixelSize, c))
        {
            ::app::Uno::Content::Fonts::BitmapFont* oldFont = __this->_font;
            ::app::Uno::Content::Fonts::BitmapFont* tempFont = ::app::Uno::Content::Fonts::FontFaceHelpers__RenderSpriteFont(NULL, ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(oldFont)->FontFace, ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(oldFont)->PixelSize, ::app::Uno::Char::ToString(c));

            if (::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(tempFont)->Glyphs)->TryGetValue(c, &ci))
            {
                float kerning = float();

                if (::uPtr< ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(tempFont)->Kernings)->TryGetValue(::app::Uno::Content::Fonts::BitmapFont_CharPair__New_1(NULL, last, c), &kerning))
                {
                    caret.X = caret.X + (kerning * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale);
                }

                if ((ci.UpperLeft.X != ci.LowerRight.X) && (ci.UpperLeft.Y != ci.LowerRight.Y))
                {
                    __this->End();
                    __this->Begin(tempFont);
                    __this->WriteGlyph(ci, caret);
                    __this->End();
                    __this->Begin(oldFont);
                }

                caret.X = caret.X + ((ci.Advance * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale) + __this->_tracking);
            }
        }

        last = c;
    }
}

void TextRenderer__End(TextRenderer* __this)
{
    if (::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->CharCount > 0)
    {
        ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->_vbo)->Update(__this->_buffer);
        ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontTexture = ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->Texture;
        ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontSpread = ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->PixelSpread;
        ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->ClipSpaceMatrix = ::uPtr< ::app::Uno::Content::Fonts::TextTransform*>(__this->_transform)->ResolveClipSpaceMatrix();
        ::uPtr< ::app::Uno::Content::Fonts::TextShader*>(__this->_shader)->Draw(__this->_data);
        ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->CharCount = 0;
    }

    __this->_font = NULL;
    __this->HasBegun(false);
}

void TextRenderer___ObjInit(TextRenderer* __this, int maxCharCount, ::app::Uno::Content::Fonts::TextShader* shader, ::app::Uno::Content::Fonts::TextTransform* transform)
{
    __this->_color = ::app::Uno::Byte4__New_1(NULL, 255, 255, 255, 255);
    __this->_maxCharCount = maxCharCount;
    ::app::Uno::Buffer* indexBuffer = ::app::Uno::Buffer__New_3(NULL, (maxCharCount * 6) * 2);

    for (int i = 0; i < maxCharCount; i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(indexBuffer)->SetUShort(i * 12, (::uUShort)(i * 4), true);
        indexBuffer->SetUShort((i * 12) + 2, (::uUShort)((i * 4) + 1), true);
        indexBuffer->SetUShort((i * 12) + 4, (::uUShort)((i * 4) + 2), true);
        indexBuffer->SetUShort((i * 12) + 6, (::uUShort)(i * 4), true);
        indexBuffer->SetUShort((i * 12) + 8, (::uUShort)((i * 4) + 2), true);
        indexBuffer->SetUShort((i * 12) + 10, (::uUShort)((i * 4) + 3), true);
    }

    __this->_ibo = ::app::Uno::Graphics::IndexBuffer__New_3(NULL, indexBuffer, 0);
    __this->_vbo = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, 2);
    __this->_buffer = ::app::Uno::Buffer__New_3(NULL, (maxCharCount * 4) * 16);
    __this->_data = ::app::Uno::Content::Fonts::TextShaderData__New_1(NULL, __this->_ibo, __this->_vbo);
    __this->_shader = shader;
    __this->_transform = (transform != NULL) ? transform : (::app::Uno::Content::Fonts::TextTransform*)::app::Uno::Content::Fonts::DefaultTextTransform__New_1(NULL);
}

TextRenderer* TextRenderer__New_1(::uStatic* __this, int maxCharCount, ::app::Uno::Content::Fonts::TextShader* shader, ::app::Uno::Content::Fonts::TextTransform* transform)
{
    TextRenderer* inst = (::app::Uno::Content::Fonts::TextRenderer*)::uAllocObject(sizeof(::app::Uno::Content::Fonts::TextRenderer), ::app::Uno::Content::Fonts::TextRenderer__typeof());
    inst->_ObjInit(maxCharCount, shader, transform);
    return inst;
}

}}}}
