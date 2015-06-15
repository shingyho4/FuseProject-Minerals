// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.BlendModeHelpers.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.Drawing.GradientStop.h>
#include <app/Fuse.Drawing.LinearGradient.h>
#include <app/Fuse.Drawing.PolygonDrawable.h>
#include <app/Fuse.Drawing.RendererContext.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.StaticSolidColor.h>
#include <app/Fuse.Drawing.TextureFill.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Geometry.Collision2D.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.SamplerState.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Math.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>

namespace app {
namespace Fuse {
namespace Drawing {

PolygonDrawable__uType* PolygonDrawable__typeof()
{
    static PolygonDrawable__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PolygonDrawable__uType*)::uAllocClassType(sizeof(PolygonDrawable__uType), "Fuse.Drawing.PolygonDrawable", ::uObject__typeof(), 0, 11);
        type->StrongRefOffsets[0] = offsetof(PolygonDrawable, _vertices);
        type->StrongRefOffsets[1] = offsetof(PolygonDrawable, _vbo);
        type->StrongRefOffsets[2] = offsetof(PolygonDrawable, _draw_76ce9836._constValues);
        type->StrongRefOffsets[3] = offsetof(PolygonDrawable, _draw_76ce9836._compiledProgram);
        type->StrongRefOffsets[4] = offsetof(PolygonDrawable, _draw_76ce9836._Program);
        type->StrongRefOffsets[5] = offsetof(PolygonDrawable, _draw_76ce9793._constValues);
        type->StrongRefOffsets[6] = offsetof(PolygonDrawable, _draw_76ce9793._compiledProgram);
        type->StrongRefOffsets[7] = offsetof(PolygonDrawable, _draw_76ce9793._Program);
        type->StrongRefOffsets[8] = offsetof(PolygonDrawable, _draw_76ce97f4._constValues);
        type->StrongRefOffsets[9] = offsetof(PolygonDrawable, _draw_76ce97f4._compiledProgram);
        type->StrongRefOffsets[10] = offsetof(PolygonDrawable, _draw_76ce97f4._Program);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_vertices";
        type->StrongRefNames[1] = "_vbo";
        type->StrongRefNames[2] = "_draw_76ce9836._constValues";
        type->StrongRefNames[3] = "_draw_76ce9836._compiledProgram";
        type->StrongRefNames[4] = "_draw_76ce9836._Program";
        type->StrongRefNames[5] = "_draw_76ce9793._constValues";
        type->StrongRefNames[6] = "_draw_76ce9793._compiledProgram";
        type->StrongRefNames[7] = "_draw_76ce9793._Program";
        type->StrongRefNames[8] = "_draw_76ce97f4._constValues";
        type->StrongRefNames[9] = "_draw_76ce97f4._compiledProgram";
        type->StrongRefNames[10] = "_draw_76ce97f4._Program";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool PolygonDrawable__Intersects(PolygonDrawable* __this, ::app::Uno::Float2 p)
{
    for (int i = 2; i < ::uPtr< ::uArray*>(__this->_vertices)->Length(); i = i + 3)
    {
        if (::app::Uno::Geometry::Collision2D__TriangleContainsPoint(NULL, ::uPtr< ::uArray*>(__this->_vertices)->Item< ::app::Uno::Float2>(i - 2), ::uPtr< ::uArray*>(__this->_vertices)->Item< ::app::Uno::Float2>(i - 1), ::uPtr< ::uArray*>(__this->_vertices)->Item< ::app::Uno::Float2>(i), p))
        {
            return true;
        }
    }

    return false;
}

void PolygonDrawable__Draw(PolygonDrawable* __this, ::app::Fuse::Drawing::Brush* f, ::app::Fuse::Drawing::RendererContext* ctx)
{
    ::app::Uno::Float4 ind_126 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_127 = ::app::Uno::Float4();

    if (::uIs(f, ::app::Fuse::Drawing::TextureFill__typeof()))
    {
        ::app::Uno::Float2 Scale_76ce9836_8_19_2 = PolygonDrawable__Draw_Scale_76ce9836_8_19_1(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->SizeMode(), ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->ElementSize(), (::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture() == NULL) ? ::app::Uno::Float2__New_1(NULL, 1.0f) : ::app::Uno::Float2__op_Implicit(NULL, ::uPtr< ::app::Uno::Graphics::Texture2D*>(::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture())->Size()));
        {
            __this->_draw_76ce9836.BlendEnabled(true);
            __this->_draw_76ce9836.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_76ce9836.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_76ce9836.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_76ce9836.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_76ce9836.DepthTestEnabled(false);
            __this->_draw_76ce9836.CullFace(0);
            __this->_draw_76ce9836.Const(0, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture() == NULL);
            __this->_draw_76ce9836.Use();
            __this->_draw_76ce9836.Attrib_1(1, 2, __this->_vbo, 8, 0);
            __this->_draw_76ce9836.Uniform_14(2, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->Transform());
            __this->_draw_76ce9836.Uniform_9(3, ::app::Uno::Float2__op_Multiply_1(NULL, (::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture() == NULL) ? ::app::Uno::Float2__New_1(NULL, 1.0f) : ::app::Uno::Float2__op_Implicit(NULL, ::uPtr< ::app::Uno::Graphics::Texture2D*>(::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture())->Size()), Scale_76ce9836_8_19_2));
            __this->_draw_76ce9836.Uniform_11(4, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->Color());
            __this->_draw_76ce9836.Uniform_8(5, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->Opacity());
            __this->_draw_76ce9836.Uniform_8(6, (::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->HorizontalAlignment() == 0) ? 0.0f : ((::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->HorizontalAlignment() == 1) ? ::app::Uno::Math__Floor_1(NULL, (ctx->ElementSize().X - ::app::Uno::Float2__op_Multiply_1(NULL, (::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture() == NULL) ? ::app::Uno::Float2__New_1(NULL, 1.0f) : ::app::Uno::Float2__op_Implicit(NULL, ::uPtr< ::app::Uno::Graphics::Texture2D*>(::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture())->Size()), Scale_76ce9836_8_19_2).X) * 0.5f) : ((::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->HorizontalAlignment() == 2) ? (ctx->ElementSize().X - ::app::Uno::Float2__op_Multiply_1(NULL, (::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture() == NULL) ? ::app::Uno::Float2__New_1(NULL, 1.0f) : ::app::Uno::Float2__op_Implicit(NULL, ::uPtr< ::app::Uno::Graphics::Texture2D*>(::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture())->Size()), Scale_76ce9836_8_19_2).X) : 0.0f)));
            __this->_draw_76ce9836.Uniform_8(7, (::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->VerticalAlignment() == 0) ? 0.0f : ((::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->VerticalAlignment() == 4) ? ::app::Uno::Math__Floor_1(NULL, (ctx->ElementSize().Y - ::app::Uno::Float2__op_Multiply_1(NULL, (::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture() == NULL) ? ::app::Uno::Float2__New_1(NULL, 1.0f) : ::app::Uno::Float2__op_Implicit(NULL, ::uPtr< ::app::Uno::Graphics::Texture2D*>(::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture())->Size()), Scale_76ce9836_8_19_2).Y) * 0.5f) : ((::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->VerticalAlignment() == 5) ? (ctx->ElementSize().Y - ::app::Uno::Float2__op_Multiply_1(NULL, (::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture() == NULL) ? ::app::Uno::Float2__New_1(NULL, 1.0f) : ::app::Uno::Float2__op_Implicit(NULL, ::uPtr< ::app::Uno::Graphics::Texture2D*>(::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture())->Size()), Scale_76ce9836_8_19_2).Y) : 0.0f)));
            __this->_draw_76ce9836.Sampler_3(8, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture(), ::app::Uno::Graphics::SamplerState__New_1(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->MinFilter(), ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(f, ::app::Fuse::Drawing::TextureFill__typeof()))->MagFilter(), 10497));
            __this->_draw_76ce9836.DrawArrays(::uPtr< ::uArray*>(__this->_vertices)->Length());
        }
    }
    else if (::uIs(f, ::app::Fuse::Drawing::SolidColor__typeof()))
    {
        {
            __this->_draw_76ce9793.BlendEnabled(true);
            __this->_draw_76ce9793.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_76ce9793.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_76ce9793.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_76ce9793.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_76ce9793.DepthTestEnabled(false);
            __this->_draw_76ce9793.CullFace(0);
            __this->_draw_76ce9793.Use();
            __this->_draw_76ce9793.Attrib_1(0, 2, __this->_vbo, 8, 0);
            __this->_draw_76ce9793.Uniform_14(1, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->Transform());
            __this->_draw_76ce9793.Uniform_11(2, ::app::Uno::Float4__New_7(NULL, ::app::Uno::Float3__op_Multiply(NULL, ::app::Uno::Float3__op_Multiply(NULL, (ind_126 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_126.X, ind_126.Y, ind_126.Z)), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity()), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W * ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity()));
            __this->_draw_76ce9793.DrawArrays(::uPtr< ::uArray*>(__this->_vertices)->Length());
        }
    }
    else if (::uIs(f, ::app::Fuse::Drawing::LinearGradient__typeof()))
    {
        ::uArray* Colors_76ce97f4_8_9_4 = PolygonDrawable__Draw_Colors_76ce97f4_8_9_3(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->SortedStops());
        ::uArray* Offsets_76ce97f4_8_8_6 = PolygonDrawable__Draw_Offsets_76ce97f4_8_8_5(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->SortedStops());
        {
            __this->_draw_76ce97f4.BlendEnabled(true);
            __this->_draw_76ce97f4.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_76ce97f4.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_76ce97f4.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_76ce97f4.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_76ce97f4.DepthTestEnabled(false);
            __this->_draw_76ce97f4.CullFace(0);
            __this->_draw_76ce97f4.Const_1(0, ::uPtr< ::uArray*>(Colors_76ce97f4_8_9_4)->Length());
            __this->_draw_76ce97f4.Const_1(1, ::uPtr< ::uArray*>(Offsets_76ce97f4_8_8_6)->Length());
            __this->_draw_76ce97f4.Use();
            __this->_draw_76ce97f4.Attrib_1(2, 2, __this->_vbo, 8, 0);
            __this->_draw_76ce97f4.Uniform_14(3, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->Transform());
            __this->_draw_76ce97f4.Uniform_9(4, ctx->ElementSize());
            __this->_draw_76ce97f4.Uniform_9(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint());
            __this->_draw_76ce97f4.Uniform_9(6, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint());
            __this->_draw_76ce97f4.Uniform_18(7, Colors_76ce97f4_8_9_4);
            __this->_draw_76ce97f4.Uniform_15(8, Offsets_76ce97f4_8_8_6);
            __this->_draw_76ce97f4.Uniform_8(9, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
            __this->_draw_76ce97f4.DrawArrays(::uPtr< ::uArray*>(__this->_vertices)->Length());
        }
    }
    else if (::uIs(f, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
    {
        {
            __this->_draw_76ce9793.BlendEnabled(true);
            __this->_draw_76ce9793.BlendSrcRgb(__this->Draw_BlendSrcRgb_76ce9859_6_4_5);
            __this->_draw_76ce9793.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_76ce9859_6_6_6);
            __this->_draw_76ce9793.BlendDstRgb(__this->Draw_BlendDstRgb_76ce9859_6_5_7);
            __this->_draw_76ce9793.BlendDstAlpha(__this->Draw_BlendDstAlpha_76ce9859_6_7_8);
            __this->_draw_76ce9793.DepthTestEnabled(false);
            __this->_draw_76ce9793.CullFace(0);
            __this->_draw_76ce9793.Use();
            __this->_draw_76ce9793.Attrib_1(0, 2, __this->_vbo, 8, 0);
            __this->_draw_76ce9793.Uniform_14(1, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->Transform());
            __this->_draw_76ce9793.Uniform_11(2, ::app::Uno::Float4__New_7(NULL, ::app::Uno::Float3__op_Multiply(NULL, (ind_127 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(f, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_127.X, ind_127.Y, ind_127.Z)), ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(f, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W), ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(f, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W));
            __this->_draw_76ce9793.DrawArrays(::uPtr< ::uArray*>(__this->_vertices)->Length());
        }
    }
}

void PolygonDrawable__Dispose(PolygonDrawable* __this)
{
    __this->free_DrawCalls();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->_vbo)->Dispose();
}

::app::Uno::Rect PolygonDrawable__CalcBounds(PolygonDrawable* __this)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();

    if (::uPtr< ::uArray*>(__this->_vertices)->Length() == 0)
    {
        return ::app::Uno::Rect__New_1(NULL, 0.0f, 0.0f, 0.0f, 0.0f);
    }

    ::app::Uno::Float2 min = ::uPtr< ::uArray*>(__this->_vertices)->Item< ::app::Uno::Float2>(0);
    ::app::Uno::Float2 max = ::uPtr< ::uArray*>(__this->_vertices)->Item< ::app::Uno::Float2>(0);

    for (array_123 = __this->_vertices, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Uno::Float2 v = ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(index_124);
        min = ::app::Uno::Math__Min_3(NULL, min, v);
        max = ::app::Uno::Math__Max_3(NULL, max, v);
    }

    return ::app::Uno::Rect__New_1(NULL, min.X, min.Y, max.X, max.Y);
}

void PolygonDrawable__init_DrawCalls(PolygonDrawable* __this)
{
    __this->Draw_BlendSrcRgb_76ce9859_6_4_5 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, 0);
    __this->Draw_BlendSrcAlpha_76ce9859_6_6_6 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, 0);
    __this->Draw_BlendDstRgb_76ce9859_6_5_7 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, 0);
    __this->Draw_BlendDstAlpha_76ce9859_6_7_8 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, 0);
    __this->_draw_76ce9836 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 309), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_76ce9793 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 310), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_76ce97f4 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 311), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

void PolygonDrawable__free_DrawCalls(PolygonDrawable* __this)
{
}

::app::Uno::Float2 PolygonDrawable__Draw_Scale_76ce9836_8_19_1(::uStatic* __this, int Scale_8_19_4, ::app::Uno::Float2 Scale_8_19_5, ::app::Uno::Float2 Scale_8_19_6)
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

::uArray* PolygonDrawable__Draw_Colors_76ce97f4_8_9_3(::uStatic* __this, ::uArray* Colors_8_9_3)
{
    ::uArray* cols = ::uNewArray(::app::Uno::Float4__typeof(), ::app::Uno::Math__Max_8(NULL, ::uPtr< ::uArray*>(Colors_8_9_3)->Length(), 1));

    for (int i = 0; i < Colors_8_9_3->Length(); i++)
    {
        cols->Item< ::app::Uno::Float4>(i) = ::uPtr< ::app::Fuse::Drawing::GradientStop*>(Colors_8_9_3->Item< ::app::Fuse::Drawing::GradientStop*>(i))->Color();
    }

    return cols;
}

::uArray* PolygonDrawable__Draw_Offsets_76ce97f4_8_8_5(::uStatic* __this, ::uArray* Offsets_8_8_4)
{
    ::uArray* ofs = ::uNewArray(::app::Uno::Float__typeof(), ::app::Uno::Math__Max_8(NULL, ::uPtr< ::uArray*>(Offsets_8_8_4)->Length(), 1));

    for (int i = 0; i < Offsets_8_8_4->Length(); i++)
    {
        ofs->Item< float>(i) = ::uPtr< ::app::Fuse::Drawing::GradientStop*>(Offsets_8_8_4->Item< ::app::Fuse::Drawing::GradientStop*>(i))->Offset();
    }

    return ofs;
}

void PolygonDrawable___ObjInit(PolygonDrawable* __this, ::uArray* vertices)
{
    __this->_vertices = vertices;
    __this->_vbo = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, vertices), 0);
    __this->init_DrawCalls();
}

PolygonDrawable* PolygonDrawable__New_1(::uStatic* __this, ::uArray* vertices)
{
    PolygonDrawable* inst = (::app::Fuse::Drawing::PolygonDrawable*)::uAllocObject(sizeof(::app::Fuse::Drawing::PolygonDrawable), ::app::Fuse::Drawing::PolygonDrawable__typeof());
    inst->_ObjInit(vertices);
    return inst;
}

}}}
