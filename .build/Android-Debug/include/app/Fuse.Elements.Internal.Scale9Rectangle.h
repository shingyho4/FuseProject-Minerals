// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Drawing\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_INTERNAL_SCALE9_RECTANGLE_H__
#define __APP_FUSE_ELEMENTS_INTERNAL_SCALE9_RECTANGLE_H__

#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Graphics { struct IndexBuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Elements {
namespace Internal {

struct Scale9Rectangle;

extern ::uStaticStrong< Scale9Rectangle*> Scale9Rectangle__Impl;

struct Scale9Rectangle__uType : ::uClassType
{
};

Scale9Rectangle__uType* Scale9Rectangle__typeof();

void Scale9Rectangle__Draw(Scale9Rectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Node* element, ::app::Uno::Float2 size, ::app::Uno::Float2 scaleTextureSize, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float4 margin);
void Scale9Rectangle__init_DrawCalls(Scale9Rectangle* __this);
::uArray* Scale9Rectangle__Draw_Colors_7a51abd2_9_9_12(::uStatic* __this, ::uArray* Colors_9_9_15);
::uArray* Scale9Rectangle__Draw_Offsets_7a51abd2_9_8_14(::uStatic* __this, ::uArray* Offsets_9_8_16);
void Scale9Rectangle___TypeInit(::uStatic* __this);
void Scale9Rectangle___ObjInit(Scale9Rectangle* __this);
Scale9Rectangle* Scale9Rectangle__New_1(::uStatic* __this);

struct Scale9Rectangle : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> Draw_xv_697dbbc8_2_3_2;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Draw_xv_697dbbc8_2_3_3;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Draw_yv_697dbbc8_2_4_6;
    ::uStrong< ::uArray*> Draw_indices_697dbbc8_2_2_17;
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> Draw_xv_c80a8d0d_2_3_2;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Draw_xv_c80a8d0d_2_3_3;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Draw_yv_c80a8d0d_2_4_6;
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> Draw_xv_7a51abd2_2_3_2;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Draw_xv_7a51abd2_2_3_3;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Draw_yv_7a51abd2_2_4_6;
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> Draw_xv_958ebcef_2_3_2;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Draw_xv_958ebcef_2_3_3;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Draw_yv_958ebcef_2_4_6;
    int Draw_BlendSrcRgb_958ebcef_7_4_14;
    int Draw_BlendSrcAlpha_958ebcef_7_6_15;
    int Draw_BlendDstRgb_958ebcef_7_5_16;
    int Draw_BlendDstAlpha_958ebcef_7_7_17;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_697dbbc8;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_c80a8d0d;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_7a51abd2;

    void Draw(::app::Fuse::DrawContext* dc, ::app::Fuse::Node* element, ::app::Uno::Float2 size, ::app::Uno::Float2 scaleTextureSize, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float4 margin);
    void init_DrawCalls() { Scale9Rectangle__init_DrawCalls(this); }
    void _ObjInit() { Scale9Rectangle___ObjInit(this); }
};

}}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Elements {
namespace Internal {

inline void Scale9Rectangle::Draw(::app::Fuse::DrawContext* dc, ::app::Fuse::Node* element, ::app::Uno::Float2 size, ::app::Uno::Float2 scaleTextureSize, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float4 margin) { Scale9Rectangle__Draw(this, dc, element, size, scaleTextureSize, brush, margin); }

}}}}


#endif
