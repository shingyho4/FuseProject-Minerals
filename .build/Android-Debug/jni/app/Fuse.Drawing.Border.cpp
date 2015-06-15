// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Rendering\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.BlendModeHelpers.h>
#include <app/Fuse.Drawing.Border.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.Drawing.GradientStop.h>
#include <app/Fuse.Drawing.LinearGradient.h>
#include <app/Fuse.Drawing.RendererContext.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.StaticSolidColor.h>
#include <app/Fuse.Drawing.TextureFill.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Geometry.Collision2D.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.SamplerState.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Math.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Drawing {

Border__uType* Border__typeof()
{
    static Border__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Border__uType*)::uAllocClassType(sizeof(Border__uType), "Fuse.Drawing.Border", ::uObject__typeof(), 0, 16);
        type->StrongRefOffsets[0] = offsetof(Border, _vertices);
        type->StrongRefOffsets[1] = offsetof(Border, _contour);
        type->StrongRefOffsets[2] = offsetof(Border, _strokeVertices);
        type->StrongRefOffsets[3] = offsetof(Border, _vbo);
        type->StrongRefOffsets[4] = offsetof(Border, _draw_6891d9e6._constValues);
        type->StrongRefOffsets[5] = offsetof(Border, _draw_6891d9e6._compiledProgram);
        type->StrongRefOffsets[6] = offsetof(Border, _draw_6891d9e6._Program);
        type->StrongRefOffsets[7] = offsetof(Border, _draw_b64abb21._constValues);
        type->StrongRefOffsets[8] = offsetof(Border, _draw_b64abb21._compiledProgram);
        type->StrongRefOffsets[9] = offsetof(Border, _draw_b64abb21._Program);
        type->StrongRefOffsets[10] = offsetof(Border, _draw_57bde9dc._constValues);
        type->StrongRefOffsets[11] = offsetof(Border, _draw_57bde9dc._compiledProgram);
        type->StrongRefOffsets[12] = offsetof(Border, _draw_57bde9dc._Program);
        type->StrongRefOffsets[13] = offsetof(Border, _draw_e8c68b3f._constValues);
        type->StrongRefOffsets[14] = offsetof(Border, _draw_e8c68b3f._compiledProgram);
        type->StrongRefOffsets[15] = offsetof(Border, _draw_e8c68b3f._Program);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_vertices";
        type->StrongRefNames[1] = "_contour";
        type->StrongRefNames[2] = "_strokeVertices";
        type->StrongRefNames[3] = "_vbo";
        type->StrongRefNames[4] = "_draw_6891d9e6._constValues";
        type->StrongRefNames[5] = "_draw_6891d9e6._compiledProgram";
        type->StrongRefNames[6] = "_draw_6891d9e6._Program";
        type->StrongRefNames[7] = "_draw_b64abb21._constValues";
        type->StrongRefNames[8] = "_draw_b64abb21._compiledProgram";
        type->StrongRefNames[9] = "_draw_b64abb21._Program";
        type->StrongRefNames[10] = "_draw_57bde9dc._constValues";
        type->StrongRefNames[11] = "_draw_57bde9dc._compiledProgram";
        type->StrongRefNames[12] = "_draw_57bde9dc._Program";
        type->StrongRefNames[13] = "_draw_e8c68b3f._constValues";
        type->StrongRefNames[14] = "_draw_e8c68b3f._compiledProgram";
        type->StrongRefNames[15] = "_draw_e8c68b3f._Program";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Contour* Border__get_Contour(Border* __this)
{
    __this->CalculateStrokeVertices();
    return __this->_contour;
}

::uArray* Border__get_StrokeVertices(Border* __this)
{
    __this->CalculateStrokeVertices();
    return __this->_strokeVertices;
}

int Border__get_VertexCount(Border* __this)
{
    return ::uPtr< ::uArray*>(__this->_vertices)->Length() + 1;
}

void Border__Draw(Border* __this, ::app::Fuse::Drawing::Brush* s, ::app::Fuse::Drawing::RendererContext* ctx)
{
    if (::uPtr< ::uArray*>(__this->_vertices)->Length() < 2)
    {
        return;
    }

    if (::uPtr< ::uArray*>(__this->StrokeVertices())->Length() < 4)
    {
        return;
    }

    if (::uIs(s, ::app::Fuse::Drawing::TextureFill__typeof()))
    {
        ::app::Uno::Float2 Scale_6891d9e6_8_19_2 = Border__Draw_Scale_6891d9e6_8_19_1(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->SizeMode(), ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->ElementSize(), (::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture() == NULL) ? ::app::Uno::Float2__New_1(NULL, 1.0f) : ::app::Uno::Float2__op_Implicit(NULL, ::uPtr< ::app::Uno::Graphics::Texture2D*>(::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture())->Size()));
        {
            __this->_draw_6891d9e6.BlendEnabled(true);
            __this->_draw_6891d9e6.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_6891d9e6.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_6891d9e6.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_6891d9e6.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_6891d9e6.CullFace(0);
            __this->_draw_6891d9e6.PrimitiveType(4);
            __this->_draw_6891d9e6.Const(0, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture() == NULL);
            __this->_draw_6891d9e6.Use();
            __this->_draw_6891d9e6.Attrib_1(1, 4, __this->_vbo, 16, 0);
            __this->_draw_6891d9e6.Uniform_14(2, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->Transform());
            __this->_draw_6891d9e6.Uniform_9(3, ::app::Uno::Float2__op_Multiply_1(NULL, (::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture() == NULL) ? ::app::Uno::Float2__New_1(NULL, 1.0f) : ::app::Uno::Float2__op_Implicit(NULL, ::uPtr< ::app::Uno::Graphics::Texture2D*>(::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture())->Size()), Scale_6891d9e6_8_19_2));
            __this->_draw_6891d9e6.Uniform_11(4, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->Color());
            __this->_draw_6891d9e6.Uniform_8(5, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->Opacity());
            __this->_draw_6891d9e6.Uniform_8(6, (::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->HorizontalAlignment() == 0) ? 0.0f : ((::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->HorizontalAlignment() == 1) ? ::app::Uno::Math__Floor_1(NULL, (ctx->ElementSize().X - ::app::Uno::Float2__op_Multiply_1(NULL, (::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture() == NULL) ? ::app::Uno::Float2__New_1(NULL, 1.0f) : ::app::Uno::Float2__op_Implicit(NULL, ::uPtr< ::app::Uno::Graphics::Texture2D*>(::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture())->Size()), Scale_6891d9e6_8_19_2).X) * 0.5f) : ((::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->HorizontalAlignment() == 2) ? (ctx->ElementSize().X - ::app::Uno::Float2__op_Multiply_1(NULL, (::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture() == NULL) ? ::app::Uno::Float2__New_1(NULL, 1.0f) : ::app::Uno::Float2__op_Implicit(NULL, ::uPtr< ::app::Uno::Graphics::Texture2D*>(::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture())->Size()), Scale_6891d9e6_8_19_2).X) : 0.0f)));
            __this->_draw_6891d9e6.Uniform_8(7, (::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->VerticalAlignment() == 0) ? 0.0f : ((::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->VerticalAlignment() == 4) ? ::app::Uno::Math__Floor_1(NULL, (ctx->ElementSize().Y - ::app::Uno::Float2__op_Multiply_1(NULL, (::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture() == NULL) ? ::app::Uno::Float2__New_1(NULL, 1.0f) : ::app::Uno::Float2__op_Implicit(NULL, ::uPtr< ::app::Uno::Graphics::Texture2D*>(::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture())->Size()), Scale_6891d9e6_8_19_2).Y) * 0.5f) : ((::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->VerticalAlignment() == 5) ? (ctx->ElementSize().Y - ::app::Uno::Float2__op_Multiply_1(NULL, (::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture() == NULL) ? ::app::Uno::Float2__New_1(NULL, 1.0f) : ::app::Uno::Float2__op_Implicit(NULL, ::uPtr< ::app::Uno::Graphics::Texture2D*>(::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture())->Size()), Scale_6891d9e6_8_19_2).Y) : 0.0f)));
            __this->_draw_6891d9e6.Sampler_3(8, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture(), ::app::Uno::Graphics::SamplerState__New_1(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->MinFilter(), ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(s, ::app::Fuse::Drawing::TextureFill__typeof()))->MagFilter(), 10497));
            __this->_draw_6891d9e6.DrawArrays(::uPtr< ::uArray*>(__this->StrokeVertices())->Length());
        }
    }
    else if (::uIs(s, ::app::Fuse::Drawing::SolidColor__typeof()))
    {
        {
            __this->_draw_b64abb21.BlendEnabled(true);
            __this->_draw_b64abb21.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(s, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_b64abb21.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(s, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_b64abb21.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(s, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_b64abb21.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(s, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_b64abb21.CullFace(0);
            __this->_draw_b64abb21.PrimitiveType(4);
            __this->_draw_b64abb21.Use();
            __this->_draw_b64abb21.Attrib_1(0, 4, __this->_vbo, 16, 0);
            __this->_draw_b64abb21.Uniform_14(1, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->Transform());
            __this->_draw_b64abb21.Uniform_11(2, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(s, ::app::Fuse::Drawing::SolidColor__typeof()))->Color());
            __this->_draw_b64abb21.Uniform_8(3, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(s, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity());
            __this->_draw_b64abb21.DrawArrays(::uPtr< ::uArray*>(__this->StrokeVertices())->Length());
        }
    }
    else if (::uIs(s, ::app::Fuse::Drawing::LinearGradient__typeof()))
    {
        ::uArray* Colors_57bde9dc_8_9_4 = Border__Draw_Colors_57bde9dc_8_9_3(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->SortedStops());
        ::uArray* Offsets_57bde9dc_8_8_6 = Border__Draw_Offsets_57bde9dc_8_8_5(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->SortedStops());
        {
            __this->_draw_57bde9dc.BlendEnabled(true);
            __this->_draw_57bde9dc.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_57bde9dc.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_57bde9dc.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_57bde9dc.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_57bde9dc.CullFace(0);
            __this->_draw_57bde9dc.PrimitiveType(4);
            __this->_draw_57bde9dc.Const_1(0, ::uPtr< ::uArray*>(Colors_57bde9dc_8_9_4)->Length());
            __this->_draw_57bde9dc.Const_1(1, ::uPtr< ::uArray*>(Offsets_57bde9dc_8_8_6)->Length());
            __this->_draw_57bde9dc.Use();
            __this->_draw_57bde9dc.Attrib_1(2, 4, __this->_vbo, 16, 0);
            __this->_draw_57bde9dc.Uniform_14(3, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->Transform());
            __this->_draw_57bde9dc.Uniform_9(4, ctx->ElementSize());
            __this->_draw_57bde9dc.Uniform_9(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint());
            __this->_draw_57bde9dc.Uniform_9(6, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint());
            __this->_draw_57bde9dc.Uniform_18(7, Colors_57bde9dc_8_9_4);
            __this->_draw_57bde9dc.Uniform_15(8, Offsets_57bde9dc_8_8_6);
            __this->_draw_57bde9dc.Uniform_8(9, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
            __this->_draw_57bde9dc.DrawArrays(::uPtr< ::uArray*>(__this->StrokeVertices())->Length());
        }
    }
    else if (::uIs(s, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
    {
        {
            __this->_draw_e8c68b3f.BlendEnabled(true);
            __this->_draw_e8c68b3f.BlendSrcRgb(__this->Draw_BlendSrcRgb_e8c68b3f_6_4_7);
            __this->_draw_e8c68b3f.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_e8c68b3f_6_6_8);
            __this->_draw_e8c68b3f.BlendDstRgb(__this->Draw_BlendDstRgb_e8c68b3f_6_5_9);
            __this->_draw_e8c68b3f.BlendDstAlpha(__this->Draw_BlendDstAlpha_e8c68b3f_6_7_10);
            __this->_draw_e8c68b3f.CullFace(0);
            __this->_draw_e8c68b3f.PrimitiveType(4);
            __this->_draw_e8c68b3f.Use();
            __this->_draw_e8c68b3f.Attrib_1(0, 4, __this->_vbo, 16, 0);
            __this->_draw_e8c68b3f.Uniform_14(1, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->Transform());
            __this->_draw_e8c68b3f.Uniform_11(2, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(s, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color());
            __this->_draw_e8c68b3f.DrawArrays(::uPtr< ::uArray*>(__this->StrokeVertices())->Length());
        }
    }
}

void Border__Dispose(Border* __this)
{
    __this->free_DrawCalls();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->_vbo)->Dispose();
}

void Border__CalculateStrokeVertices(Border* __this)
{
    if (__this->_strokeVertices != NULL)
    {
        return;
    }

    if (::uPtr< ::uArray*>(__this->_vertices)->Length() < 2)
    {
        __this->_strokeVertices = ::uNewArray(::app::Uno::Float4__typeof(), 0);
        __this->_contour = ::app::Fuse::Drawing::Contour__New_1(NULL, true, ::uNewArray(::app::Uno::Float2__typeof(), 0));
        return;
    }

    ::uArray* vertices = ::uNewArray(::app::Uno::Float4__typeof(), __this->VertexCount() * 2);
    ::uArray* shrinkedContour = ::uNewArray(::app::Uno::Float2__typeof(), __this->VertexCount());
    int v = 0;
    int s = 0;
    float dist = 0.0f;

    for (int i = 0; i < __this->VertexCount(); i++)
    {
        ::app::Uno::Float2 last = __this->GetVertex(i - 1);
        ::app::Uno::Float2 current = __this->GetVertex(i);
        ::app::Uno::Float2 next = __this->GetVertex(i + 1);
        float len = ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Subtraction(NULL, last, current));

        if (i > 0)
        {
            dist = dist + len;
        }

        if (len < 1e-05f)
        {
            continue;
        }

        ::app::Uno::Float2 lv = ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Subtraction(NULL, current, last));
        ::app::Uno::Float2 rv = ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Subtraction(NULL, next, current));
        ::app::Uno::Float2 lvn = ::app::Uno::Float2__New_2(NULL, -lv.Y, lv.X);
        ::app::Uno::Float2 rvn = ::app::Uno::Float2__New_2(NULL, -rv.Y, rv.X);
        ::app::Uno::Float2 bn0 = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Addition(NULL, rvn, lvn), 2.0f);
        ::app::Uno::Float2 bisectNormal = ((::app::Uno::Math__Abs_1(NULL, bn0.X) + ::app::Uno::Math__Abs_1(NULL, bn0.Y)) < 1e-05f) ? lvn : ::app::Uno::Vector__Normalize(NULL, bn0);
        ::app::Uno::Float4 outer = ::app::Uno::Float4();
        ::app::Uno::Float4 inner = ::app::Uno::Float4();
        float angle = ::app::Uno::Geometry::Collision2D__AngleBetween(NULL, lv, bisectNormal);

        if (((angle < 0.2f) || (angle > 2.94159269f)) || (len < 1.0f))
        {
            ::app::Uno::Float2 lvo = ::app::Uno::Float2__op_Addition(NULL, current, ::app::Uno::Float2__op_Multiply(NULL, bisectNormal, __this->_width + __this->_offset));
            ::app::Uno::Float2 lvi = ::app::Uno::Float2__op_Addition(NULL, current, ::app::Uno::Float2__op_Multiply(NULL, bisectNormal, __this->_offset));
            outer = ::app::Uno::Float4__New_3(NULL, lvo, 0.0f, dist);
            inner = ::app::Uno::Float4__New_3(NULL, lvi, 1.0f, dist);
        }
        else
        {
            ::app::Uno::Float2 lvo = ::app::Uno::Float2__op_Addition(NULL, last, ::app::Uno::Float2__op_Multiply(NULL, lvn, __this->_width + __this->_offset));
            ::app::Uno::Float2 lvi = ::app::Uno::Float2__op_Addition(NULL, last, ::app::Uno::Float2__op_Multiply(NULL, lvn, __this->_offset));
            outer = ::app::Uno::Float4__New_3(NULL, ::app::Uno::Geometry::Collision2D__LineIntersectionPointVector(NULL, lvo, lv, current, bisectNormal), 0.0f, dist);
            inner = ::app::Uno::Float4__New_3(NULL, ::app::Uno::Geometry::Collision2D__LineIntersectionPointVector(NULL, lvi, lv, current, bisectNormal), 1.0f, dist);
        }

        ::uPtr< ::uArray*>(vertices)->Item< ::app::Uno::Float4>(v++) = outer;
        vertices->Item< ::app::Uno::Float4>(v++) = inner;
        ::uPtr< ::uArray*>(shrinkedContour)->Item< ::app::Uno::Float2>(s++) = ::app::Uno::Float2__New_2(NULL, inner.X, inner.Y);
    }

    __this->_strokeVertices = vertices;
    __this->_vbo = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_3(NULL, vertices), 0);
    __this->_contour = ::app::Fuse::Drawing::Contour__New_1(NULL, true, shrinkedContour);
}

::app::Uno::Float2 Border__GetVertex(Border* __this, int indexWrap)
{
    while (indexWrap < 0)
    {
        indexWrap = indexWrap + ::uPtr< ::uArray*>(__this->_vertices)->Length();
    }

    while (indexWrap >= ::uPtr< ::uArray*>(__this->_vertices)->Length())
    {
        indexWrap = indexWrap - ::uPtr< ::uArray*>(__this->_vertices)->Length();
    }

    return ::uPtr< ::uArray*>(__this->_vertices)->Item< ::app::Uno::Float2>(indexWrap);
}

void Border__init_DrawCalls(Border* __this)
{
    __this->Draw_BlendSrcRgb_e8c68b3f_6_4_7 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, 0);
    __this->Draw_BlendSrcAlpha_e8c68b3f_6_6_8 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, 0);
    __this->Draw_BlendDstRgb_e8c68b3f_6_5_9 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, 0);
    __this->Draw_BlendDstAlpha_e8c68b3f_6_7_10 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, 0);
    __this->_draw_6891d9e6 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 127), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_b64abb21 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 128), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_57bde9dc = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 129), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_e8c68b3f = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 130), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

void Border__free_DrawCalls(Border* __this)
{
}

::app::Uno::Float2 Border__Draw_Scale_6891d9e6_8_19_1(::uStatic* __this, int Scale_8_19_4, ::app::Uno::Float2 Scale_8_19_5, ::app::Uno::Float2 Scale_8_19_6)
{
    switch (Scale_8_19_4)
    {
        case 2:
        {
            return ::app::Uno::Float2__New_1(NULL, (Scale_8_19_5.Ratio() > Scale_8_19_6.Ratio()) ? (Scale_8_19_5.Y / Scale_8_19_6.Y) : (Scale_8_19_5.X / Scale_8_19_6.X));
        }
        case 1:
        {
            return ::app::Uno::Float2__New_1(NULL, (Scale_8_19_5.Ratio() > Scale_8_19_6.Ratio()) ? (Scale_8_19_5.X / Scale_8_19_6.X) : (Scale_8_19_5.Y / Scale_8_19_6.Y));
        }
        case 4:
        {
            return ::app::Uno::Float2__New_1(NULL, Scale_8_19_5.X / Scale_8_19_6.Y);
        }
        case 5:
        {
            return ::app::Uno::Float2__New_1(NULL, Scale_8_19_5.Y / Scale_8_19_6.Y);
        }
        case 3:
        {
            return ::app::Uno::Float2__op_Division(NULL, Scale_8_19_5, Scale_8_19_6);
        }
    }

    return ::app::Uno::Float2__New_1(NULL, 1.0f);
}

::uArray* Border__Draw_Colors_57bde9dc_8_9_3(::uStatic* __this, ::uArray* Colors_8_9_3)
{
    ::uArray* cols = ::uNewArray(::app::Uno::Float4__typeof(), ::app::Uno::Math__Max_8(NULL, ::uPtr< ::uArray*>(Colors_8_9_3)->Length(), 1));

    for (int i = 0; i < Colors_8_9_3->Length(); i++)
    {
        cols->Item< ::app::Uno::Float4>(i) = ::uPtr< ::app::Fuse::Drawing::GradientStop*>(Colors_8_9_3->Item< ::app::Fuse::Drawing::GradientStop*>(i))->Color();
    }

    return cols;
}

::uArray* Border__Draw_Offsets_57bde9dc_8_8_5(::uStatic* __this, ::uArray* Offsets_8_8_4)
{
    ::uArray* ofs = ::uNewArray(::app::Uno::Float__typeof(), ::app::Uno::Math__Max_8(NULL, ::uPtr< ::uArray*>(Offsets_8_8_4)->Length(), 1));

    for (int i = 0; i < Offsets_8_8_4->Length(); i++)
    {
        ofs->Item< float>(i) = ::uPtr< ::app::Fuse::Drawing::GradientStop*>(Offsets_8_8_4->Item< ::app::Fuse::Drawing::GradientStop*>(i))->Offset();
    }

    return ofs;
}

void Border___ObjInit(Border* __this, ::uArray* vertices, float offset, float width)
{
    __this->_vertices = vertices;
    __this->_offset = offset;
    __this->_width = width;
    __this->init_DrawCalls();
}

Border* Border__New_1(::uStatic* __this, ::uArray* vertices, float offset, float width)
{
    Border* inst = (::app::Fuse::Drawing::Border*)::uAllocObject(sizeof(::app::Fuse::Drawing::Border), ::app::Fuse::Drawing::Border__typeof());
    inst->_ObjInit(vertices, offset, width);
    return inst;
}

}}}
