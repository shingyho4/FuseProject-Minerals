// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_DEFAULT_TEXT_RENDERER_IMPL_H__
#define __APP_FUSE_INTERNAL_DEFAULT_TEXT_RENDERER_IMPL_H__

#include <app/Fuse.Internal.ITextRenderer.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont; } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct BitmapFont; } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct FontFace; } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct TextRenderer; } } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Internal {

struct DefaultTextRendererImpl;

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont*> DefaultTextRendererImpl___bitmapFonts;
extern int DefaultTextRendererImpl___maxCharCount;
extern ::uStaticStrong< ::app::Uno::Content::Fonts::TextRenderer*> DefaultTextRendererImpl___renderer;

struct DefaultTextRendererImpl__uType : ::uClassType
{
    ::app::Fuse::Internal::ITextRenderer __interface_0;
};

DefaultTextRendererImpl__uType* DefaultTextRendererImpl__typeof();

::app::Uno::Content::Fonts::TextRenderer* DefaultTextRendererImpl__get_renderer(::uStatic* __this);
::app::Uno::Content::Fonts::FontFace* DefaultTextRendererImpl__get_FontFace(DefaultTextRendererImpl* __this);
void DefaultTextRendererImpl__set_FontFace(DefaultTextRendererImpl* __this, ::app::Uno::Content::Fonts::FontFace* value);
float DefaultTextRendererImpl__GetLineHeight(DefaultTextRendererImpl* __this, float fontSize);
::app::Uno::Float2 DefaultTextRendererImpl__MeasureString(DefaultTextRendererImpl* __this, float fontSize, float absoluteZoom, ::uString* s);
::app::Uno::Float2 DefaultTextRendererImpl__MeasureStringVirtual(DefaultTextRendererImpl* __this, float fontSize, float absoluteZoom, ::uString* s);
void DefaultTextRendererImpl__BeginRendering(DefaultTextRendererImpl* __this, float fontSize, float absoluteZoom, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 bounds, ::app::Uno::Float4 textColor, int maxTextLength);
void DefaultTextRendererImpl__EndRendering(DefaultTextRendererImpl* __this, ::app::Fuse::DrawContext* dc);
void DefaultTextRendererImpl__DrawLine(DefaultTextRendererImpl* __this, ::app::Fuse::DrawContext* dc, float x, float y, ::uString* line);
::app::Uno::Content::Fonts::BitmapFont* DefaultTextRendererImpl__GetBitmapFont(DefaultTextRendererImpl* __this, float fontSize, float absoluteZoom, bool includeZoom);
void DefaultTextRendererImpl__EnsureRendererCapacity(::uStatic* __this, int maxCharCount);
void DefaultTextRendererImpl___ObjInit(DefaultTextRendererImpl* __this, ::app::Uno::Content::Fonts::FontFace* fontFace);
DefaultTextRendererImpl* DefaultTextRendererImpl__New_1(::uStatic* __this, ::app::Uno::Content::Fonts::FontFace* fontFace);

struct DefaultTextRendererImpl : ::uObject
{
    float _fontSize;
    float _absoluteZoom;
    ::app::Uno::Float4x4 _transform;
    ::uStrong< ::app::Uno::Content::Fonts::BitmapFont*> _bitmapFont;
    ::uStrong< ::app::Uno::Content::Fonts::FontFace*> _FontFace;

    float GetLineHeight(float fontSize) { return DefaultTextRendererImpl__GetLineHeight(this, fontSize); }
    ::app::Uno::Float2 MeasureString(float fontSize, float absoluteZoom, ::uString* s);
    ::app::Uno::Float2 MeasureStringVirtual(float fontSize, float absoluteZoom, ::uString* s);
    void BeginRendering(float fontSize, float absoluteZoom, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 bounds, ::app::Uno::Float4 textColor, int maxTextLength);
    void EndRendering(::app::Fuse::DrawContext* dc) { DefaultTextRendererImpl__EndRendering(this, dc); }
    void DrawLine(::app::Fuse::DrawContext* dc, float x, float y, ::uString* line) { DefaultTextRendererImpl__DrawLine(this, dc, x, y, line); }
    ::app::Uno::Content::Fonts::BitmapFont* GetBitmapFont(float fontSize, float absoluteZoom, bool includeZoom) { return DefaultTextRendererImpl__GetBitmapFont(this, fontSize, absoluteZoom, includeZoom); }
    void _ObjInit(::app::Uno::Content::Fonts::FontFace* fontFace) { DefaultTextRendererImpl___ObjInit(this, fontFace); }
    ::app::Uno::Content::Fonts::FontFace* FontFace() { return DefaultTextRendererImpl__get_FontFace(this); }
    void FontFace(::app::Uno::Content::Fonts::FontFace* value) { DefaultTextRendererImpl__set_FontFace(this, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Internal {

inline ::app::Uno::Float2 DefaultTextRendererImpl::MeasureString(float fontSize, float absoluteZoom, ::uString* s) { return DefaultTextRendererImpl__MeasureString(this, fontSize, absoluteZoom, s); }
inline ::app::Uno::Float2 DefaultTextRendererImpl::MeasureStringVirtual(float fontSize, float absoluteZoom, ::uString* s) { return DefaultTextRendererImpl__MeasureStringVirtual(this, fontSize, absoluteZoom, s); }
inline void DefaultTextRendererImpl::BeginRendering(float fontSize, float absoluteZoom, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 bounds, ::app::Uno::Float4 textColor, int maxTextLength) { DefaultTextRendererImpl__BeginRendering(this, fontSize, absoluteZoom, transform, bounds, textColor, maxTextLength); }

}}}


#endif
