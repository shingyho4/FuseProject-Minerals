// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Rendering\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_BORDER_H__
#define __APP_FUSE_DRAWING_BORDER_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }
namespace app { namespace Fuse { namespace Drawing { struct RendererContext; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }

namespace app {
namespace Fuse {
namespace Drawing {

struct Border;

struct Border__uType : ::uClassType
{
};

Border__uType* Border__typeof();

::app::Fuse::Drawing::Contour* Border__get_Contour(Border* __this);
::uArray* Border__get_StrokeVertices(Border* __this);
int Border__get_VertexCount(Border* __this);
void Border__Draw(Border* __this, ::app::Fuse::Drawing::Brush* s, ::app::Fuse::Drawing::RendererContext* ctx);
void Border__Dispose(Border* __this);
void Border__CalculateStrokeVertices(Border* __this);
::app::Uno::Float2 Border__GetVertex(Border* __this, int indexWrap);
void Border__init_DrawCalls(Border* __this);
void Border__free_DrawCalls(Border* __this);
::app::Uno::Float2 Border__Draw_Scale_6891d9e6_8_19_1(::uStatic* __this, int Scale_8_19_4, ::app::Uno::Float2 Scale_8_19_5, ::app::Uno::Float2 Scale_8_19_6);
::uArray* Border__Draw_Colors_57bde9dc_8_9_3(::uStatic* __this, ::uArray* Colors_8_9_3);
::uArray* Border__Draw_Offsets_57bde9dc_8_8_5(::uStatic* __this, ::uArray* Offsets_8_8_4);
void Border___ObjInit(Border* __this, ::uArray* vertices, float offset, float width);
Border* Border__New_1(::uStatic* __this, ::uArray* vertices, float offset, float width);

struct Border : ::uObject
{
    ::uStrong< ::uArray*> _vertices;
    float _offset;
    float _width;
    ::uStrong< ::app::Fuse::Drawing::Contour*> _contour;
    ::uStrong< ::uArray*> _strokeVertices;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> _vbo;
    int Draw_BlendSrcRgb_e8c68b3f_6_4_7;
    int Draw_BlendSrcAlpha_e8c68b3f_6_6_8;
    int Draw_BlendDstRgb_e8c68b3f_6_5_9;
    int Draw_BlendDstAlpha_e8c68b3f_6_7_10;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_6891d9e6;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_b64abb21;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_57bde9dc;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_e8c68b3f;

    void Draw(::app::Fuse::Drawing::Brush* s, ::app::Fuse::Drawing::RendererContext* ctx) { Border__Draw(this, s, ctx); }
    void Dispose() { Border__Dispose(this); }
    void CalculateStrokeVertices() { Border__CalculateStrokeVertices(this); }
    ::app::Uno::Float2 GetVertex(int indexWrap);
    void init_DrawCalls() { Border__init_DrawCalls(this); }
    void free_DrawCalls() { Border__free_DrawCalls(this); }
    void _ObjInit(::uArray* vertices, float offset, float width) { Border___ObjInit(this, vertices, offset, width); }
    ::app::Fuse::Drawing::Contour* Contour() { return Border__get_Contour(this); }
    ::uArray* StrokeVertices() { return Border__get_StrokeVertices(this); }
    int VertexCount() { return Border__get_VertexCount(this); }
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline ::app::Uno::Float2 Border::GetVertex(int indexWrap) { return Border__GetVertex(this, indexWrap); }

}}}


#endif
