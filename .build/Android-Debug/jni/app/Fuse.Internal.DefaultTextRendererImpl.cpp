// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawContext.h>
#include <app/Fuse.ICamera.h>
#include <app/Fuse.Internal.DefaultTextRendererImpl.h>
#include <app/Fuse.Internal.DefaultTextRendererImpl_FontKey.h>
#include <app/Fuse.Internal.ProperTextTransform.h>
#include <app/Fuse.ViewContext.h>
#include <app/Uno.Collections.Dictionary__Fuse_Internal_DefaultTextRendererIm-3293050d.h>
#include <app/Uno.Content.Fonts.BitmapFont.h>
#include <app/Uno.Content.Fonts.FontFace.h>
#include <app/Uno.Content.Fonts.FontFaceHelpers.h>
#include <app/Uno.Content.Fonts.SpriteFontShader.h>
#include <app/Uno.Content.Fonts.TextRenderer.h>
#include <app/Uno.Content.Fonts.TextShader.h>
#include <app/Uno.Content.Fonts.TextTransform.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Internal {

::uStaticStrong< ::app::Uno::Collections::Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont*> DefaultTextRendererImpl___bitmapFonts;
int DefaultTextRendererImpl___maxCharCount;
::uStaticStrong< ::app::Uno::Content::Fonts::TextRenderer*> DefaultTextRendererImpl___renderer;

DefaultTextRendererImpl__uType* DefaultTextRendererImpl__typeof()
{
    static DefaultTextRendererImpl__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DefaultTextRendererImpl__uType*)::uAllocClassType(sizeof(DefaultTextRendererImpl__uType), "Fuse.Internal.DefaultTextRendererImpl", ::uObject__typeof(), 1, 2);
        type->__interface_0.__fp_GetLineHeight = (float(*)(void*, float))DefaultTextRendererImpl__GetLineHeight;
        type->__interface_0.__fp_MeasureStringVirtual = (::app::Uno::Float2(*)(void*, float, float, ::uString*))DefaultTextRendererImpl__MeasureStringVirtual;
        type->__interface_0.__fp_BeginRendering = (void(*)(void*, float, float, ::app::Uno::Float4x4, ::app::Uno::Float2, ::app::Uno::Float4, int))DefaultTextRendererImpl__BeginRendering;
        type->__interface_0.__fp_DrawLine = (void(*)(void*, ::app::Fuse::DrawContext*, float, float, ::uString*))DefaultTextRendererImpl__DrawLine;
        type->__interface_0.__fp_EndRendering = (void(*)(void*, ::app::Fuse::DrawContext*))DefaultTextRendererImpl__EndRendering;

        type->Implements[0] = ::app::Fuse::Internal::ITextRenderer__typeof();

        type->InterfaceOffsets[0] = offsetof(DefaultTextRendererImpl__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(DefaultTextRendererImpl, _bitmapFont);
        type->StrongRefOffsets[1] = offsetof(DefaultTextRendererImpl, _FontFace);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_bitmapFont";
        type->StrongRefNames[1] = "_FontFace";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Content::Fonts::TextRenderer* DefaultTextRendererImpl__get_renderer(::uStatic* __this)
{
    if (DefaultTextRendererImpl___renderer == NULL)
    {
        DefaultTextRendererImpl___renderer = ::app::Uno::Content::Fonts::TextRenderer__New_1(NULL, 100, (::app::Uno::Content::Fonts::TextShader*)::app::Uno::Content::Fonts::SpriteFontShader__New_1(NULL), NULL);
        ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRendererImpl___renderer)->Transform((::app::Uno::Content::Fonts::TextTransform*)::app::Fuse::Internal::ProperTextTransform__New_1(NULL));
    }

    return DefaultTextRendererImpl___renderer;
}

::app::Uno::Content::Fonts::FontFace* DefaultTextRendererImpl__get_FontFace(DefaultTextRendererImpl* __this)
{
    return __this->_FontFace;
}

void DefaultTextRendererImpl__set_FontFace(DefaultTextRendererImpl* __this, ::app::Uno::Content::Fonts::FontFace* value)
{
    __this->_FontFace = value;
}

float DefaultTextRendererImpl__GetLineHeight(DefaultTextRendererImpl* __this, float fontSize)
{
    if (__this->FontFace() == NULL)
    {
        return 0.0f;
    }

    float size = ::app::Uno::Math__Clamp_1(NULL, fontSize, 4.0f, 400.0f);
    float lineHeight = ::uPtr< ::app::Uno::Content::Fonts::FontFace*>(__this->FontFace())->GetLineHeight(size);
    return lineHeight;
}

::app::Uno::Float2 DefaultTextRendererImpl__MeasureString(DefaultTextRendererImpl* __this, float fontSize, float absoluteZoom, ::uString* s)
{
    if (::app::Uno::String__op_Equality(NULL, s, NULL))
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    ::app::Uno::Content::Fonts::BitmapFont* bitmapFont = __this->GetBitmapFont(fontSize, absoluteZoom, true);
    bool hasBegun = ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRendererImpl__get_renderer(NULL))->HasBegun();

    if (!hasBegun)
    {
        ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRendererImpl__get_renderer(NULL))->Begin(bitmapFont);
    }

    ::app::Uno::Float2 ret = ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRendererImpl__get_renderer(NULL))->MeasureString(s);

    if (!hasBegun)
    {
        ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRendererImpl__get_renderer(NULL))->End();
    }

    return ret;
}

::app::Uno::Float2 DefaultTextRendererImpl__MeasureStringVirtual(DefaultTextRendererImpl* __this, float fontSize, float absoluteZoom, ::uString* s)
{
    return ::app::Uno::Math__Ceil_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, __this->MeasureString(fontSize, absoluteZoom, s), absoluteZoom));
}

void DefaultTextRendererImpl__BeginRendering(DefaultTextRendererImpl* __this, float fontSize, float absoluteZoom, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 bounds, ::app::Uno::Float4 textColor, int maxTextLength)
{
    __this->_fontSize = fontSize;
    __this->_absoluteZoom = absoluteZoom;
    __this->_transform = transform;
    __this->_bitmapFont = __this->GetBitmapFont(__this->_fontSize, __this->_absoluteZoom, true);
    DefaultTextRendererImpl__EnsureRendererCapacity(NULL, maxTextLength);
    ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRendererImpl__get_renderer(NULL))->Begin(__this->_bitmapFont);
    ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRendererImpl__get_renderer(NULL))->Color(textColor);
}

void DefaultTextRendererImpl__EndRendering(DefaultTextRendererImpl* __this, ::app::Fuse::DrawContext* dc)
{
    ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRendererImpl__get_renderer(NULL))->End();
}

void DefaultTextRendererImpl__DrawLine(DefaultTextRendererImpl* __this, ::app::Fuse::DrawContext* dc, float x, float y, ::uString* line)
{
    float lineHeight = ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_bitmapFont)->LineHeight;
    float lineOffsetY = lineHeight - ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_bitmapFont)->Descent;
    ::app::Uno::Float2 p = ::app::Uno::Float2__New_2(NULL, x, y + lineOffsetY);

    if (::uPtr< ::app::Fuse::DrawContext*>(dc)->ResolutionMultiplier() != 1.0f)
    {
        ::app::Uno::Float4x4 scale = ::app::Uno::Matrix__Scaling_2(NULL, 1.0f / ::uPtr< ::app::Fuse::DrawContext*>(dc)->ResolutionMultiplier());
        ::uPtr< ::app::Uno::Content::Fonts::TextTransform*>(::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRendererImpl__get_renderer(NULL))->Transform())->Matrix(::app::Uno::Matrix__Mul_11(NULL, scale, __this->_transform));
    }
    else
    {
        ::uPtr< ::app::Uno::Content::Fonts::TextTransform*>(::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRendererImpl__get_renderer(NULL))->Transform())->Matrix(__this->_transform);
    }

    ::uPtr< ::app::Fuse::Internal::ProperTextTransform*>(::uAs< ::app::Fuse::Internal::ProperTextTransform*>(::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRendererImpl__get_renderer(NULL))->Transform(), ::app::Fuse::Internal::ProperTextTransform__typeof()))->ViewProjectionTransform = ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera()));
    ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRendererImpl__get_renderer(NULL))->WriteString(p, line);
}

::app::Uno::Content::Fonts::BitmapFont* DefaultTextRendererImpl__GetBitmapFont(DefaultTextRendererImpl* __this, float fontSize, float absoluteZoom, bool includeZoom)
{
    int size = (int)::app::Uno::Math__Floor_1(NULL, ::app::Uno::Math__Clamp_1(NULL, fontSize * (includeZoom ? absoluteZoom : 1.0f), 4.0f, 400.0f));
    ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey* key = ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey__New_1(NULL, __this->FontFace(), size);
    ::app::Uno::Content::Fonts::BitmapFont* bmpfont;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont*>(DefaultTextRendererImpl___bitmapFonts)->TryGetValue(key, &bmpfont))
    {
        bmpfont = ::app::Uno::Content::Fonts::FontFaceHelpers__RenderSpriteFont(NULL, __this->FontFace(), (float)size, ::uGetConstString("!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ\303\206\303\230\303\205[\\]^_`abcdefghijklmnopqrstuvwxyz\303\246\303\270\303\245\302\250{|}~\302\260\342\200\242"));
        ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont*>(DefaultTextRendererImpl___bitmapFonts)->Add(key, bmpfont);
    }

    return bmpfont;
}

void DefaultTextRendererImpl__EnsureRendererCapacity(::uStatic* __this, int maxCharCount)
{
    if (maxCharCount <= DefaultTextRendererImpl___maxCharCount)
    {
        return;
    }

    DefaultTextRendererImpl___maxCharCount = ::app::Uno::Math__Max_8(NULL, DefaultTextRendererImpl___maxCharCount * 2, maxCharCount);
    DefaultTextRendererImpl___renderer = ::app::Uno::Content::Fonts::TextRenderer__New_1(NULL, DefaultTextRendererImpl___maxCharCount, (::app::Uno::Content::Fonts::TextShader*)::app::Uno::Content::Fonts::SpriteFontShader__New_1(NULL), NULL);
    ::uPtr< ::app::Uno::Content::Fonts::TextRenderer*>(DefaultTextRendererImpl___renderer)->Transform((::app::Uno::Content::Fonts::TextTransform*)::app::Fuse::Internal::ProperTextTransform__New_1(NULL));
}

void DefaultTextRendererImpl___ObjInit(DefaultTextRendererImpl* __this, ::app::Uno::Content::Fonts::FontFace* fontFace)
{
    if (DefaultTextRendererImpl___bitmapFonts == NULL)
    {
        DefaultTextRendererImpl___maxCharCount = 100;
        DefaultTextRendererImpl___bitmapFonts = ::app::Uno::Collections::Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__New_1(NULL);
    }

    __this->FontFace(fontFace);
}

DefaultTextRendererImpl* DefaultTextRendererImpl__New_1(::uStatic* __this, ::app::Uno::Content::Fonts::FontFace* fontFace)
{
    DefaultTextRendererImpl* inst = (::app::Fuse::Internal::DefaultTextRendererImpl*)::uAllocObject(sizeof(::app::Fuse::Internal::DefaultTextRendererImpl), ::app::Fuse::Internal::DefaultTextRendererImpl__typeof());
    inst->_ObjInit(fontFace);
    return inst;
}

}}}
