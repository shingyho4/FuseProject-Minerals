// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_INTERNAL_IMAGE_ELEMENT_DRAW_H__
#define __APP_FUSE_ELEMENTS_INTERNAL_IMAGE_ELEMENT_DRAW_H__

#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Elements {
namespace Internal {

struct ImageElementDraw;

extern ::uStaticStrong< ImageElementDraw*> ImageElementDraw__Impl;

struct ImageElementDraw__uType : ::uClassType
{
};

ImageElementDraw__uType* ImageElementDraw__typeof();

void ImageElementDraw__Draw(ImageElementDraw* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 offset, ::app::Uno::Float2 size, ::app::Uno::Float2 uvPosition, ::app::Uno::Float2 uvSize, ::app::Fuse::Drawing::Brush* brush);
void ImageElementDraw__init_DrawCalls(ImageElementDraw* __this);
::uArray* ImageElementDraw__Draw_Colors_1d9a9690_13_9_8(::uStatic* __this, ::uArray* Colors_13_9_4);
::uArray* ImageElementDraw__Draw_Offsets_1d9a9690_13_8_10(::uStatic* __this, ::uArray* Offsets_13_8_5);
void ImageElementDraw___TypeInit(::uStatic* __this);
void ImageElementDraw___ObjInit(ImageElementDraw* __this);
ImageElementDraw* ImageElementDraw__New_1(::uStatic* __this);

struct ImageElementDraw : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Draw_VertexData_cc6a686_7_2_1;
    ::app::Uno::Float4x4 Draw_LocalTransform_cc6a686_4_8_2;
    ::app::Uno::Float4x4 Draw_LocalTransform_cc6a686_4_8_3;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Draw_VertexData_cfe1b555_7_2_1;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Draw_VertexData_1d9a9690_7_2_1;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Draw_VertexData_9d65e537_7_2_1;
    int Draw_BlendSrcRgb_9d65e537_11_4_10;
    int Draw_BlendSrcAlpha_9d65e537_11_6_11;
    int Draw_BlendDstRgb_9d65e537_11_5_12;
    int Draw_BlendDstAlpha_9d65e537_11_7_13;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_cc6a686;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_cfe1b555;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_1d9a9690;

    void Draw(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 offset, ::app::Uno::Float2 size, ::app::Uno::Float2 uvPosition, ::app::Uno::Float2 uvSize, ::app::Fuse::Drawing::Brush* brush);
    void init_DrawCalls() { ImageElementDraw__init_DrawCalls(this); }
    void _ObjInit() { ImageElementDraw___ObjInit(this); }
};

}}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Elements {
namespace Internal {

inline void ImageElementDraw::Draw(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 offset, ::app::Uno::Float2 size, ::app::Uno::Float2 uvPosition, ::app::Uno::Float2 uvSize, ::app::Fuse::Drawing::Brush* brush) { ImageElementDraw__Draw(this, dc, element, offset, size, uvPosition, uvSize, brush); }

}}}}


#endif
