// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_POLYGON_DRAWABLE_H__
#define __APP_FUSE_DRAWING_POLYGON_DRAWABLE_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }
namespace app { namespace Fuse { namespace Drawing { struct RendererContext; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct PolygonDrawable;

struct PolygonDrawable__uType : ::uClassType
{
};

PolygonDrawable__uType* PolygonDrawable__typeof();

bool PolygonDrawable__Intersects(PolygonDrawable* __this, ::app::Uno::Float2 p);
void PolygonDrawable__Draw(PolygonDrawable* __this, ::app::Fuse::Drawing::Brush* f, ::app::Fuse::Drawing::RendererContext* ctx);
void PolygonDrawable__Dispose(PolygonDrawable* __this);
::app::Uno::Rect PolygonDrawable__CalcBounds(PolygonDrawable* __this);
void PolygonDrawable__init_DrawCalls(PolygonDrawable* __this);
void PolygonDrawable__free_DrawCalls(PolygonDrawable* __this);
::app::Uno::Float2 PolygonDrawable__Draw_Scale_76ce9836_8_19_1(::uStatic* __this, int Scale_8_19_4, ::app::Uno::Float2 Scale_8_19_5, ::app::Uno::Float2 Scale_8_19_6);
::uArray* PolygonDrawable__Draw_Colors_76ce97f4_8_9_3(::uStatic* __this, ::uArray* Colors_8_9_3);
::uArray* PolygonDrawable__Draw_Offsets_76ce97f4_8_8_5(::uStatic* __this, ::uArray* Offsets_8_8_4);
void PolygonDrawable___ObjInit(PolygonDrawable* __this, ::uArray* vertices);
PolygonDrawable* PolygonDrawable__New_1(::uStatic* __this, ::uArray* vertices);

struct PolygonDrawable : ::uObject
{
    ::uStrong< ::uArray*> _vertices;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> _vbo;
    int Draw_BlendSrcRgb_76ce9859_6_4_5;
    int Draw_BlendSrcAlpha_76ce9859_6_6_6;
    int Draw_BlendDstRgb_76ce9859_6_5_7;
    int Draw_BlendDstAlpha_76ce9859_6_7_8;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_76ce9836;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_76ce9793;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_76ce97f4;

    bool Intersects(::app::Uno::Float2 p);
    void Draw(::app::Fuse::Drawing::Brush* f, ::app::Fuse::Drawing::RendererContext* ctx) { PolygonDrawable__Draw(this, f, ctx); }
    void Dispose() { PolygonDrawable__Dispose(this); }
    ::app::Uno::Rect CalcBounds();
    void init_DrawCalls() { PolygonDrawable__init_DrawCalls(this); }
    void free_DrawCalls() { PolygonDrawable__free_DrawCalls(this); }
    void _ObjInit(::uArray* vertices) { PolygonDrawable___ObjInit(this, vertices); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline bool PolygonDrawable::Intersects(::app::Uno::Float2 p) { return PolygonDrawable__Intersects(this, p); }
inline ::app::Uno::Rect PolygonDrawable::CalcBounds() { return PolygonDrawable__CalcBounds(this); }

}}}


#endif
