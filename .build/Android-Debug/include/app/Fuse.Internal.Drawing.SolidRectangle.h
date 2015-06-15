// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_DRAWING_SOLID_RECTANGLE_H__
#define __APP_FUSE_INTERNAL_DRAWING_SOLID_RECTANGLE_H__

#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Internal {
namespace Drawing {

struct SolidRectangle;

extern ::uStaticStrong< SolidRectangle*> SolidRectangle__Impl;

struct SolidRectangle__uType : ::uClassType
{
};

SolidRectangle__uType* SolidRectangle__typeof();

void SolidRectangle__DrawElement(SolidRectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* element, ::app::Fuse::Drawing::Brush* brush);
void SolidRectangle__init_DrawCalls(SolidRectangle* __this);
::uArray* SolidRectangle__DrawElement_Colors_1318df98_13_9_8(::uStatic* __this, ::uArray* Colors_13_9_2);
::uArray* SolidRectangle__DrawElement_Offsets_1318df98_13_8_10(::uStatic* __this, ::uArray* Offsets_13_8_3);
void SolidRectangle___TypeInit(::uStatic* __this);
void SolidRectangle___ObjInit(SolidRectangle* __this);
SolidRectangle* SolidRectangle__New_1(::uStatic* __this);

struct SolidRectangle : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_23eccfa2_7_2_1;
    ::app::Uno::Float4x4 DrawElement_LocalTransform_23eccfa2_4_8_2;
    ::app::Uno::Float4x4 DrawElement_LocalTransform_23eccfa2_4_8_3;
    ::app::Uno::Float4x4 DrawElement_LocalTransform_23eccfa2_4_8_4;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_b48c0e53_7_2_1;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_1318df98_7_2_1;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_e707de71_7_2_1;
    int DrawElement_BlendSrcRgb_e707de71_11_4_10;
    int DrawElement_BlendSrcAlpha_e707de71_11_6_11;
    int DrawElement_BlendDstRgb_e707de71_11_5_12;
    int DrawElement_BlendDstAlpha_e707de71_11_7_13;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_23eccfa2;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_b48c0e53;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_1318df98;

    void DrawElement(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* element, ::app::Fuse::Drawing::Brush* brush) { SolidRectangle__DrawElement(this, dc, element, brush); }
    void init_DrawCalls() { SolidRectangle__init_DrawCalls(this); }
    void _ObjInit() { SolidRectangle___ObjInit(this); }
};

}}}}


#endif
