// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_DEFAULT_TEXT_RENDERER_H__
#define __APP_FUSE_INTERNAL_DEFAULT_TEXT_RENDERER_H__

#include <app/Fuse.Internal.ITextRenderer.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct FontFace; } } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace Internal {

struct DefaultTextRenderer;

struct DefaultTextRenderer__uType : ::uClassType
{
    ::app::Fuse::Internal::ITextRenderer __interface_0;
};

DefaultTextRenderer__uType* DefaultTextRenderer__typeof();

float DefaultTextRenderer__GetLineHeight(DefaultTextRenderer* __this, float fontSize);
::app::Uno::Float2 DefaultTextRenderer__MeasureStringVirtual(DefaultTextRenderer* __this, float fontSize, float absoluteZoom, ::uString* s);
void DefaultTextRenderer__BeginRendering(DefaultTextRenderer* __this, float fontSize, float absoluteZoom, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 bounds, ::app::Uno::Float4 textColor, int maxTextLength);
void DefaultTextRenderer__DrawLine(DefaultTextRenderer* __this, ::app::Fuse::DrawContext* dc, float x, float y, ::uString* line);
void DefaultTextRenderer__EndRendering(DefaultTextRenderer* __this, ::app::Fuse::DrawContext* dc);
void DefaultTextRenderer___ObjInit_1(DefaultTextRenderer* __this, ::app::Uno::Content::Fonts::FontFace* fontFace);
DefaultTextRenderer* DefaultTextRenderer__New_2(::uStatic* __this, ::app::Uno::Content::Fonts::FontFace* fontFace);

struct DefaultTextRenderer : ::uObject
{
    ::uStrong< ::uObject*> _impl;

    float GetLineHeight(float fontSize) { return DefaultTextRenderer__GetLineHeight(this, fontSize); }
    ::app::Uno::Float2 MeasureStringVirtual(float fontSize, float absoluteZoom, ::uString* s);
    void BeginRendering(float fontSize, float absoluteZoom, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 bounds, ::app::Uno::Float4 textColor, int maxTextLength);
    void DrawLine(::app::Fuse::DrawContext* dc, float x, float y, ::uString* line) { DefaultTextRenderer__DrawLine(this, dc, x, y, line); }
    void EndRendering(::app::Fuse::DrawContext* dc) { DefaultTextRenderer__EndRendering(this, dc); }
    void _ObjInit_1(::app::Uno::Content::Fonts::FontFace* fontFace) { DefaultTextRenderer___ObjInit_1(this, fontFace); }
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Internal {

inline ::app::Uno::Float2 DefaultTextRenderer::MeasureStringVirtual(float fontSize, float absoluteZoom, ::uString* s) { return DefaultTextRenderer__MeasureStringVirtual(this, fontSize, absoluteZoom, s); }
inline void DefaultTextRenderer::BeginRendering(float fontSize, float absoluteZoom, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 bounds, ::app::Uno::Float4 textColor, int maxTextLength) { DefaultTextRenderer__BeginRendering(this, fontSize, absoluteZoom, transform, bounds, textColor, maxTextLength); }

}}}


#endif
