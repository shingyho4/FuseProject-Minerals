// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Drawing\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.BlendModeHelpers.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.Drawing.GradientStop.h>
#include <app/Fuse.Drawing.LinearGradient.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.StaticSolidColor.h>
#include <app/Fuse.Drawing.TextureFill.h>
#include <app/Fuse.Elements.Internal.Scale9Rectangle.h>
#include <app/Fuse.ICamera.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.ViewContext.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.SamplerState.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Fuse {
namespace Elements {
namespace Internal {

::uStaticStrong< Scale9Rectangle*> Scale9Rectangle__Impl;

Scale9Rectangle__uType* Scale9Rectangle__typeof()
{
    static Scale9Rectangle__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Scale9Rectangle__uType*)::uAllocClassType(sizeof(Scale9Rectangle__uType), "Fuse.Elements.Internal.Scale9Rectangle", ::uObject__typeof(), 0, 22);
        type->StrongRefOffsets[0] = offsetof(Scale9Rectangle, Draw_xv_697dbbc8_2_3_2);
        type->StrongRefOffsets[1] = offsetof(Scale9Rectangle, Draw_xv_697dbbc8_2_3_3);
        type->StrongRefOffsets[2] = offsetof(Scale9Rectangle, Draw_yv_697dbbc8_2_4_6);
        type->StrongRefOffsets[3] = offsetof(Scale9Rectangle, Draw_indices_697dbbc8_2_2_17);
        type->StrongRefOffsets[4] = offsetof(Scale9Rectangle, Draw_xv_c80a8d0d_2_3_2);
        type->StrongRefOffsets[5] = offsetof(Scale9Rectangle, Draw_xv_c80a8d0d_2_3_3);
        type->StrongRefOffsets[6] = offsetof(Scale9Rectangle, Draw_yv_c80a8d0d_2_4_6);
        type->StrongRefOffsets[7] = offsetof(Scale9Rectangle, Draw_xv_7a51abd2_2_3_2);
        type->StrongRefOffsets[8] = offsetof(Scale9Rectangle, Draw_xv_7a51abd2_2_3_3);
        type->StrongRefOffsets[9] = offsetof(Scale9Rectangle, Draw_yv_7a51abd2_2_4_6);
        type->StrongRefOffsets[10] = offsetof(Scale9Rectangle, Draw_xv_958ebcef_2_3_2);
        type->StrongRefOffsets[11] = offsetof(Scale9Rectangle, Draw_xv_958ebcef_2_3_3);
        type->StrongRefOffsets[12] = offsetof(Scale9Rectangle, Draw_yv_958ebcef_2_4_6);
        type->StrongRefOffsets[13] = offsetof(Scale9Rectangle, _draw_697dbbc8._constValues);
        type->StrongRefOffsets[14] = offsetof(Scale9Rectangle, _draw_697dbbc8._compiledProgram);
        type->StrongRefOffsets[15] = offsetof(Scale9Rectangle, _draw_697dbbc8._Program);
        type->StrongRefOffsets[16] = offsetof(Scale9Rectangle, _draw_c80a8d0d._constValues);
        type->StrongRefOffsets[17] = offsetof(Scale9Rectangle, _draw_c80a8d0d._compiledProgram);
        type->StrongRefOffsets[18] = offsetof(Scale9Rectangle, _draw_c80a8d0d._Program);
        type->StrongRefOffsets[19] = offsetof(Scale9Rectangle, _draw_7a51abd2._constValues);
        type->StrongRefOffsets[20] = offsetof(Scale9Rectangle, _draw_7a51abd2._compiledProgram);
        type->StrongRefOffsets[21] = offsetof(Scale9Rectangle, _draw_7a51abd2._Program);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Draw_xv_697dbbc8_2_3_2";
        type->StrongRefNames[1] = "Draw_xv_697dbbc8_2_3_3";
        type->StrongRefNames[2] = "Draw_yv_697dbbc8_2_4_6";
        type->StrongRefNames[3] = "Draw_indices_697dbbc8_2_2_17";
        type->StrongRefNames[4] = "Draw_xv_c80a8d0d_2_3_2";
        type->StrongRefNames[5] = "Draw_xv_c80a8d0d_2_3_3";
        type->StrongRefNames[6] = "Draw_yv_c80a8d0d_2_4_6";
        type->StrongRefNames[7] = "Draw_xv_7a51abd2_2_3_2";
        type->StrongRefNames[8] = "Draw_xv_7a51abd2_2_3_3";
        type->StrongRefNames[9] = "Draw_yv_7a51abd2_2_4_6";
        type->StrongRefNames[10] = "Draw_xv_958ebcef_2_3_2";
        type->StrongRefNames[11] = "Draw_xv_958ebcef_2_3_3";
        type->StrongRefNames[12] = "Draw_yv_958ebcef_2_4_6";
        type->StrongRefNames[13] = "_draw_697dbbc8._constValues";
        type->StrongRefNames[14] = "_draw_697dbbc8._compiledProgram";
        type->StrongRefNames[15] = "_draw_697dbbc8._Program";
        type->StrongRefNames[16] = "_draw_c80a8d0d._constValues";
        type->StrongRefNames[17] = "_draw_c80a8d0d._compiledProgram";
        type->StrongRefNames[18] = "_draw_c80a8d0d._Program";
        type->StrongRefNames[19] = "_draw_7a51abd2._constValues";
        type->StrongRefNames[20] = "_draw_7a51abd2._compiledProgram";
        type->StrongRefNames[21] = "_draw_7a51abd2._Program";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Scale9Rectangle__Draw(Scale9Rectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Node* element, ::app::Uno::Float2 size, ::app::Uno::Float2 scaleTextureSize, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float4 margin)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();

    if (::uIs(brush, ::app::Fuse::Drawing::TextureFill__typeof()))
    {
        {
            __this->_draw_697dbbc8.BlendEnabled(true);
            __this->_draw_697dbbc8.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_697dbbc8.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_697dbbc8.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_697dbbc8.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_697dbbc8.DepthTestEnabled(false);
            __this->_draw_697dbbc8.CullFace(0);
            __this->_draw_697dbbc8.Const(0, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture() == NULL);
            __this->_draw_697dbbc8.Use();
            __this->_draw_697dbbc8.Attrib_1(1, 3, __this->Draw_xv_697dbbc8_2_3_3, 12, 0);
            __this->_draw_697dbbc8.Attrib_1(2, 3, __this->Draw_yv_697dbbc8_2_4_6, 12, 0);
            __this->_draw_697dbbc8.Uniform_8(3, margin.X);
            __this->_draw_697dbbc8.Uniform_8(4, size.X - margin.Z);
            __this->_draw_697dbbc8.Uniform_8(5, size.X);
            __this->_draw_697dbbc8.Uniform_8(6, margin.Y);
            __this->_draw_697dbbc8.Uniform_8(7, size.Y - margin.W);
            __this->_draw_697dbbc8.Uniform_8(8, size.Y);
            __this->_draw_697dbbc8.Uniform_14(9, ::uPtr< ::app::Fuse::Node*>(element)->WorldTransform());
            __this->_draw_697dbbc8.Uniform_14(10, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera())));
            __this->_draw_697dbbc8.Uniform_8(11, scaleTextureSize.X - margin.Z);
            __this->_draw_697dbbc8.Uniform_8(12, scaleTextureSize.X);
            __this->_draw_697dbbc8.Uniform_8(13, scaleTextureSize.Y - margin.W);
            __this->_draw_697dbbc8.Uniform_8(14, scaleTextureSize.Y);
            __this->_draw_697dbbc8.Uniform_9(15, scaleTextureSize);
            __this->_draw_697dbbc8.Uniform_11(16, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->Color());
            __this->_draw_697dbbc8.Uniform_8(17, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->Opacity());
            __this->_draw_697dbbc8.Sampler_3(18, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture(), ::app::Uno::Graphics::SamplerState__New_1(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->MinFilter(), ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->MagFilter(), 10497));
            __this->_draw_697dbbc8.Draw(::uPtr< ::uArray*>(__this->Draw_indices_697dbbc8_2_2_17)->Length(), 2, __this->Draw_xv_697dbbc8_2_3_2);
        }
    }
    else if (::uIs(brush, ::app::Fuse::Drawing::SolidColor__typeof()))
    {
        {
            __this->_draw_c80a8d0d.BlendEnabled(true);
            __this->_draw_c80a8d0d.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_c80a8d0d.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_c80a8d0d.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_c80a8d0d.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_c80a8d0d.DepthTestEnabled(false);
            __this->_draw_c80a8d0d.CullFace(0);
            __this->_draw_c80a8d0d.Use();
            __this->_draw_c80a8d0d.Attrib_1(0, 3, __this->Draw_xv_c80a8d0d_2_3_3, 12, 0);
            __this->_draw_c80a8d0d.Attrib_1(1, 3, __this->Draw_yv_c80a8d0d_2_4_6, 12, 0);
            __this->_draw_c80a8d0d.Uniform_8(2, margin.X);
            __this->_draw_c80a8d0d.Uniform_8(3, size.X - margin.Z);
            __this->_draw_c80a8d0d.Uniform_8(4, size.X);
            __this->_draw_c80a8d0d.Uniform_8(5, margin.Y);
            __this->_draw_c80a8d0d.Uniform_8(6, size.Y - margin.W);
            __this->_draw_c80a8d0d.Uniform_8(7, size.Y);
            __this->_draw_c80a8d0d.Uniform_14(8, ::uPtr< ::app::Fuse::Node*>(element)->WorldTransform());
            __this->_draw_c80a8d0d.Uniform_14(9, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera())));
            __this->_draw_c80a8d0d.Uniform_11(10, ::app::Uno::Float4__New_7(NULL, ::app::Uno::Float3__op_Multiply(NULL, ::app::Uno::Float3__op_Multiply(NULL, (ind_123 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_123.X, ind_123.Y, ind_123.Z)), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity()), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W * ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity()));
            __this->_draw_c80a8d0d.Draw(::uPtr< ::uArray*>(__this->Draw_indices_697dbbc8_2_2_17)->Length(), 2, __this->Draw_xv_c80a8d0d_2_3_2);
        }
    }
    else if (::uIs(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))
    {
        ::uArray* Colors_7a51abd2_9_9_13 = Scale9Rectangle__Draw_Colors_7a51abd2_9_9_12(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->SortedStops());
        ::uArray* Offsets_7a51abd2_9_8_15 = Scale9Rectangle__Draw_Offsets_7a51abd2_9_8_14(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->SortedStops());
        {
            __this->_draw_7a51abd2.BlendEnabled(true);
            __this->_draw_7a51abd2.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_7a51abd2.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_7a51abd2.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_7a51abd2.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_7a51abd2.DepthTestEnabled(false);
            __this->_draw_7a51abd2.CullFace(0);
            __this->_draw_7a51abd2.Const_1(0, ::uPtr< ::uArray*>(Colors_7a51abd2_9_9_13)->Length());
            __this->_draw_7a51abd2.Const_1(1, ::uPtr< ::uArray*>(Offsets_7a51abd2_9_8_15)->Length());
            __this->_draw_7a51abd2.Use();
            __this->_draw_7a51abd2.Attrib_1(2, 3, __this->Draw_xv_7a51abd2_2_3_3, 12, 0);
            __this->_draw_7a51abd2.Attrib_1(3, 3, __this->Draw_yv_7a51abd2_2_4_6, 12, 0);
            __this->_draw_7a51abd2.Uniform_8(4, margin.X);
            __this->_draw_7a51abd2.Uniform_8(5, size.X - margin.Z);
            __this->_draw_7a51abd2.Uniform_8(6, size.X);
            __this->_draw_7a51abd2.Uniform_8(7, margin.Y);
            __this->_draw_7a51abd2.Uniform_8(8, size.Y - margin.W);
            __this->_draw_7a51abd2.Uniform_8(9, size.Y);
            __this->_draw_7a51abd2.Uniform_14(10, ::uPtr< ::app::Fuse::Node*>(element)->WorldTransform());
            __this->_draw_7a51abd2.Uniform_14(11, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera())));
            __this->_draw_7a51abd2.Uniform_8(12, scaleTextureSize.X - margin.Z);
            __this->_draw_7a51abd2.Uniform_8(13, scaleTextureSize.X);
            __this->_draw_7a51abd2.Uniform_8(14, scaleTextureSize.Y - margin.W);
            __this->_draw_7a51abd2.Uniform_8(15, scaleTextureSize.Y);
            __this->_draw_7a51abd2.Uniform_9(16, scaleTextureSize);
            __this->_draw_7a51abd2.Uniform_9(17, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint());
            __this->_draw_7a51abd2.Uniform_9(18, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint());
            __this->_draw_7a51abd2.Uniform_18(19, Colors_7a51abd2_9_9_13);
            __this->_draw_7a51abd2.Uniform_15(20, Offsets_7a51abd2_9_8_15);
            __this->_draw_7a51abd2.Uniform_8(21, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
            __this->_draw_7a51abd2.Draw(::uPtr< ::uArray*>(__this->Draw_indices_697dbbc8_2_2_17)->Length(), 2, __this->Draw_xv_7a51abd2_2_3_2);
        }
    }
    else if (::uIs(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
    {
        {
            __this->_draw_c80a8d0d.BlendEnabled(true);
            __this->_draw_c80a8d0d.BlendSrcRgb(__this->Draw_BlendSrcRgb_958ebcef_7_4_14);
            __this->_draw_c80a8d0d.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_958ebcef_7_6_15);
            __this->_draw_c80a8d0d.BlendDstRgb(__this->Draw_BlendDstRgb_958ebcef_7_5_16);
            __this->_draw_c80a8d0d.BlendDstAlpha(__this->Draw_BlendDstAlpha_958ebcef_7_7_17);
            __this->_draw_c80a8d0d.DepthTestEnabled(false);
            __this->_draw_c80a8d0d.CullFace(0);
            __this->_draw_c80a8d0d.Use();
            __this->_draw_c80a8d0d.Attrib_1(0, 3, __this->Draw_xv_958ebcef_2_3_3, 12, 0);
            __this->_draw_c80a8d0d.Attrib_1(1, 3, __this->Draw_yv_958ebcef_2_4_6, 12, 0);
            __this->_draw_c80a8d0d.Uniform_8(2, margin.X);
            __this->_draw_c80a8d0d.Uniform_8(3, size.X - margin.Z);
            __this->_draw_c80a8d0d.Uniform_8(4, size.X);
            __this->_draw_c80a8d0d.Uniform_8(5, margin.Y);
            __this->_draw_c80a8d0d.Uniform_8(6, size.Y - margin.W);
            __this->_draw_c80a8d0d.Uniform_8(7, size.Y);
            __this->_draw_c80a8d0d.Uniform_14(8, ::uPtr< ::app::Fuse::Node*>(element)->WorldTransform());
            __this->_draw_c80a8d0d.Uniform_14(9, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera())));
            __this->_draw_c80a8d0d.Uniform_11(10, ::app::Uno::Float4__New_7(NULL, ::app::Uno::Float3__op_Multiply(NULL, (ind_124 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_124.X, ind_124.Y, ind_124.Z)), ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W), ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W));
            __this->_draw_c80a8d0d.Draw(::uPtr< ::uArray*>(__this->Draw_indices_697dbbc8_2_2_17)->Length(), 2, __this->Draw_xv_958ebcef_2_3_2);
        }
    }
}

void Scale9Rectangle__init_DrawCalls(Scale9Rectangle* __this)
{
    ::uArray* array_125;
    ::uArray* array_126;
    ::uArray* array_127;
    array_125 = ::uNewArray(::app::Uno::Float3__typeof(), 16);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(0) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(1) = ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(2) = ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(3) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(4) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(5) = ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(6) = ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(7) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(8) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(9) = ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(10) = ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(11) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(12) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(13) = ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(14) = ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float3>(15) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f);
    ::uArray* xverts_697dbbc8_2_0_0 = array_125;
    array_126 = ::uNewArray(::app::Uno::UShort__typeof(), 54);
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(0) = 0;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(1) = 4;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(2) = 5;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(3) = 0;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(4) = 5;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(5) = 1;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(6) = 1;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(7) = 5;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(8) = 6;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(9) = 1;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(10) = 6;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(11) = 2;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(12) = 2;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(13) = 6;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(14) = 7;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(15) = 2;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(16) = 7;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(17) = 3;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(18) = 4;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(19) = 8;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(20) = 9;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(21) = 4;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(22) = 9;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(23) = 5;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(24) = 5;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(25) = 9;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(26) = 10;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(27) = 5;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(28) = 10;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(29) = 6;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(30) = 6;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(31) = 10;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(32) = 11;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(33) = 6;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(34) = 11;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(35) = 7;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(36) = 8;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(37) = 12;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(38) = 13;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(39) = 8;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(40) = 13;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(41) = 9;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(42) = 9;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(43) = 13;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(44) = 14;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(45) = 9;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(46) = 14;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(47) = 10;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(48) = 10;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(49) = 14;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(50) = 15;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(51) = 10;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(52) = 15;
    ::uPtr< ::uArray*>(array_126)->Item< ::uUShort>(53) = 11;
    ::uArray* indices_697dbbc8_2_2_1 = array_126;
    __this->Draw_xv_697dbbc8_2_3_2 = ::app::Uno::Graphics::IndexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_6(NULL, indices_697dbbc8_2_2_1), 0);
    __this->Draw_xv_697dbbc8_2_3_3 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_2(NULL, xverts_697dbbc8_2_0_0), 0);
    array_127 = ::uNewArray(::app::Uno::Float3__typeof(), 16);
    ::uPtr< ::uArray*>(array_127)->Item< ::app::Uno::Float3>(0) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_127)->Item< ::app::Uno::Float3>(1) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_127)->Item< ::app::Uno::Float3>(2) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_127)->Item< ::app::Uno::Float3>(3) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_127)->Item< ::app::Uno::Float3>(4) = ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_127)->Item< ::app::Uno::Float3>(5) = ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_127)->Item< ::app::Uno::Float3>(6) = ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_127)->Item< ::app::Uno::Float3>(7) = ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_127)->Item< ::app::Uno::Float3>(8) = ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f);
    ::uPtr< ::uArray*>(array_127)->Item< ::app::Uno::Float3>(9) = ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f);
    ::uPtr< ::uArray*>(array_127)->Item< ::app::Uno::Float3>(10) = ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f);
    ::uPtr< ::uArray*>(array_127)->Item< ::app::Uno::Float3>(11) = ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f);
    ::uPtr< ::uArray*>(array_127)->Item< ::app::Uno::Float3>(12) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f);
    ::uPtr< ::uArray*>(array_127)->Item< ::app::Uno::Float3>(13) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f);
    ::uPtr< ::uArray*>(array_127)->Item< ::app::Uno::Float3>(14) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f);
    ::uPtr< ::uArray*>(array_127)->Item< ::app::Uno::Float3>(15) = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f);
    ::uArray* yverts_697dbbc8_2_1_5 = array_127;
    __this->Draw_yv_697dbbc8_2_4_6 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_2(NULL, yverts_697dbbc8_2_1_5), 0);
    __this->Draw_indices_697dbbc8_2_2_17 = indices_697dbbc8_2_2_1;
    __this->Draw_xv_c80a8d0d_2_3_2 = ::app::Uno::Graphics::IndexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_6(NULL, indices_697dbbc8_2_2_1), 0);
    __this->Draw_xv_c80a8d0d_2_3_3 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_2(NULL, xverts_697dbbc8_2_0_0), 0);
    __this->Draw_yv_c80a8d0d_2_4_6 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_2(NULL, yverts_697dbbc8_2_1_5), 0);
    __this->Draw_xv_7a51abd2_2_3_2 = ::app::Uno::Graphics::IndexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_6(NULL, indices_697dbbc8_2_2_1), 0);
    __this->Draw_xv_7a51abd2_2_3_3 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_2(NULL, xverts_697dbbc8_2_0_0), 0);
    __this->Draw_yv_7a51abd2_2_4_6 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_2(NULL, yverts_697dbbc8_2_1_5), 0);
    __this->Draw_xv_958ebcef_2_3_2 = ::app::Uno::Graphics::IndexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_6(NULL, indices_697dbbc8_2_2_1), 0);
    __this->Draw_xv_958ebcef_2_3_3 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_2(NULL, xverts_697dbbc8_2_0_0), 0);
    __this->Draw_yv_958ebcef_2_4_6 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_2(NULL, yverts_697dbbc8_2_1_5), 0);
    __this->Draw_BlendSrcRgb_958ebcef_7_4_14 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, 0);
    __this->Draw_BlendSrcAlpha_958ebcef_7_6_15 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, 0);
    __this->Draw_BlendDstRgb_958ebcef_7_5_16 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, 0);
    __this->Draw_BlendDstAlpha_958ebcef_7_7_17 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, 0);
    __this->_draw_697dbbc8 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 131), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_c80a8d0d = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 132), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_7a51abd2 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 133), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

::uArray* Scale9Rectangle__Draw_Colors_7a51abd2_9_9_12(::uStatic* __this, ::uArray* Colors_9_9_15)
{
    ::uArray* cols = ::uNewArray(::app::Uno::Float4__typeof(), ::app::Uno::Math__Max_8(NULL, ::uPtr< ::uArray*>(Colors_9_9_15)->Length(), 1));

    for (int i = 0; i < Colors_9_9_15->Length(); i++)
    {
        cols->Item< ::app::Uno::Float4>(i) = ::uPtr< ::app::Fuse::Drawing::GradientStop*>(Colors_9_9_15->Item< ::app::Fuse::Drawing::GradientStop*>(i))->Color();
    }

    return cols;
}

::uArray* Scale9Rectangle__Draw_Offsets_7a51abd2_9_8_14(::uStatic* __this, ::uArray* Offsets_9_8_16)
{
    ::uArray* ofs = ::uNewArray(::app::Uno::Float__typeof(), ::app::Uno::Math__Max_8(NULL, ::uPtr< ::uArray*>(Offsets_9_8_16)->Length(), 1));

    for (int i = 0; i < Offsets_9_8_16->Length(); i++)
    {
        ofs->Item< float>(i) = ::uPtr< ::app::Fuse::Drawing::GradientStop*>(Offsets_9_8_16->Item< ::app::Fuse::Drawing::GradientStop*>(i))->Offset();
    }

    return ofs;
}

void Scale9Rectangle___TypeInit(::uStatic* __this)
{
    Scale9Rectangle__Impl = Scale9Rectangle__New_1(NULL);
}

void Scale9Rectangle___ObjInit(Scale9Rectangle* __this)
{
    __this->init_DrawCalls();
}

Scale9Rectangle* Scale9Rectangle__New_1(::uStatic* __this)
{
    Scale9Rectangle* inst = (::app::Fuse::Elements::Internal::Scale9Rectangle*)::uAllocObject(sizeof(::app::Fuse::Elements::Internal::Scale9Rectangle), ::app::Fuse::Elements::Internal::Scale9Rectangle__typeof());
    inst->_ObjInit();
    return inst;
}

}}}}
