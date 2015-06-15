// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\$.uno'.
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
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.Internal.ImageElementDraw.h>
#include <app/Fuse.ICamera.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.ViewContext.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Graphics.SamplerState.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>

namespace app {
namespace Fuse {
namespace Elements {
namespace Internal {

::uStaticStrong< ImageElementDraw*> ImageElementDraw__Impl;

ImageElementDraw__uType* ImageElementDraw__typeof()
{
    static ImageElementDraw__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ImageElementDraw__uType*)::uAllocClassType(sizeof(ImageElementDraw__uType), "Fuse.Elements.Internal.ImageElementDraw", ::uObject__typeof(), 0, 13);
        type->StrongRefOffsets[0] = offsetof(ImageElementDraw, Draw_VertexData_cc6a686_7_2_1);
        type->StrongRefOffsets[1] = offsetof(ImageElementDraw, Draw_VertexData_cfe1b555_7_2_1);
        type->StrongRefOffsets[2] = offsetof(ImageElementDraw, Draw_VertexData_1d9a9690_7_2_1);
        type->StrongRefOffsets[3] = offsetof(ImageElementDraw, Draw_VertexData_9d65e537_7_2_1);
        type->StrongRefOffsets[4] = offsetof(ImageElementDraw, _draw_cc6a686._constValues);
        type->StrongRefOffsets[5] = offsetof(ImageElementDraw, _draw_cc6a686._compiledProgram);
        type->StrongRefOffsets[6] = offsetof(ImageElementDraw, _draw_cc6a686._Program);
        type->StrongRefOffsets[7] = offsetof(ImageElementDraw, _draw_cfe1b555._constValues);
        type->StrongRefOffsets[8] = offsetof(ImageElementDraw, _draw_cfe1b555._compiledProgram);
        type->StrongRefOffsets[9] = offsetof(ImageElementDraw, _draw_cfe1b555._Program);
        type->StrongRefOffsets[10] = offsetof(ImageElementDraw, _draw_1d9a9690._constValues);
        type->StrongRefOffsets[11] = offsetof(ImageElementDraw, _draw_1d9a9690._compiledProgram);
        type->StrongRefOffsets[12] = offsetof(ImageElementDraw, _draw_1d9a9690._Program);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Draw_VertexData_cc6a686_7_2_1";
        type->StrongRefNames[1] = "Draw_VertexData_cfe1b555_7_2_1";
        type->StrongRefNames[2] = "Draw_VertexData_1d9a9690_7_2_1";
        type->StrongRefNames[3] = "Draw_VertexData_9d65e537_7_2_1";
        type->StrongRefNames[4] = "_draw_cc6a686._constValues";
        type->StrongRefNames[5] = "_draw_cc6a686._compiledProgram";
        type->StrongRefNames[6] = "_draw_cc6a686._Program";
        type->StrongRefNames[7] = "_draw_cfe1b555._constValues";
        type->StrongRefNames[8] = "_draw_cfe1b555._compiledProgram";
        type->StrongRefNames[9] = "_draw_cfe1b555._Program";
        type->StrongRefNames[10] = "_draw_1d9a9690._constValues";
        type->StrongRefNames[11] = "_draw_1d9a9690._compiledProgram";
        type->StrongRefNames[12] = "_draw_1d9a9690._Program";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void ImageElementDraw__Draw(ImageElementDraw* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 offset, ::app::Uno::Float2 size, ::app::Uno::Float2 uvPosition, ::app::Uno::Float2 uvSize, ::app::Fuse::Drawing::Brush* brush)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();

    if (::uIs(brush, ::app::Fuse::Drawing::TextureFill__typeof()))
    {
        ::app::Uno::Float4x4 LocalTransform_cc6a686_4_8_4 = ::app::Uno::Matrix__Mul_7(NULL, __this->Draw_LocalTransform_cc6a686_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, size.X, size.Y, 1.0f), __this->Draw_LocalTransform_cc6a686_4_8_3, ::app::Uno::Matrix__Translation_1(NULL, offset.X, offset.Y, 0.0f));
        {
            __this->_draw_cc6a686.BlendEnabled(true);
            __this->_draw_cc6a686.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_cc6a686.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_cc6a686.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_cc6a686.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_cc6a686.DepthTestEnabled(false);
            __this->_draw_cc6a686.CullFace(0);
            __this->_draw_cc6a686.Const(0, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture() == NULL);
            __this->_draw_cc6a686.Use();
            __this->_draw_cc6a686.Attrib_1(1, 2, __this->Draw_VertexData_cc6a686_7_2_1, 8, 0);
            __this->_draw_cc6a686.Uniform_14(2, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera())));
            __this->_draw_cc6a686.Uniform_9(3, uvSize);
            __this->_draw_cc6a686.Uniform_9(4, uvPosition);
            __this->_draw_cc6a686.Uniform_11(5, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->Color());
            __this->_draw_cc6a686.Uniform_8(6, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->Opacity());
            __this->_draw_cc6a686.Uniform_14(7, ((::app::Fuse::Node*)element != NULL) ? ::app::Uno::Matrix__Mul_11(NULL, LocalTransform_cc6a686_4_8_4, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)element)->WorldTransform()) : LocalTransform_cc6a686_4_8_4);
            __this->_draw_cc6a686.Sampler_3(8, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture(), ::app::Uno::Graphics::SamplerState__New_1(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->MinFilter(), ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->MagFilter(), 10497));
            __this->_draw_cc6a686.DrawArrays(6);
        }
    }
    else if (::uIs(brush, ::app::Fuse::Drawing::SolidColor__typeof()))
    {
        ::app::Uno::Float4x4 LocalTransform_cfe1b555_4_8_2 = ::app::Uno::Matrix__Mul_7(NULL, __this->Draw_LocalTransform_cc6a686_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, size.X, size.Y, 1.0f), __this->Draw_LocalTransform_cc6a686_4_8_3, ::app::Uno::Matrix__Translation_1(NULL, offset.X, offset.Y, 0.0f));
        {
            __this->_draw_cfe1b555.BlendEnabled(true);
            __this->_draw_cfe1b555.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_cfe1b555.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_cfe1b555.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_cfe1b555.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_cfe1b555.DepthTestEnabled(false);
            __this->_draw_cfe1b555.CullFace(0);
            __this->_draw_cfe1b555.Use();
            __this->_draw_cfe1b555.Attrib_1(0, 2, __this->Draw_VertexData_cfe1b555_7_2_1, 8, 0);
            __this->_draw_cfe1b555.Uniform_14(1, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera())));
            __this->_draw_cfe1b555.Uniform_11(2, ::app::Uno::Float4__New_7(NULL, ::app::Uno::Float3__op_Multiply(NULL, ::app::Uno::Float3__op_Multiply(NULL, (ind_123 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_123.X, ind_123.Y, ind_123.Z)), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity()), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W * ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity()));
            __this->_draw_cfe1b555.Uniform_14(3, ((::app::Fuse::Node*)element != NULL) ? ::app::Uno::Matrix__Mul_11(NULL, LocalTransform_cfe1b555_4_8_2, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)element)->WorldTransform()) : LocalTransform_cfe1b555_4_8_2);
            __this->_draw_cfe1b555.DrawArrays(6);
        }
    }
    else if (::uIs(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))
    {
        ::app::Uno::Float4x4 LocalTransform_1d9a9690_4_8_2 = ::app::Uno::Matrix__Mul_7(NULL, __this->Draw_LocalTransform_cc6a686_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, size.X, size.Y, 1.0f), __this->Draw_LocalTransform_cc6a686_4_8_3, ::app::Uno::Matrix__Translation_1(NULL, offset.X, offset.Y, 0.0f));
        ::uArray* Colors_1d9a9690_13_9_9 = ImageElementDraw__Draw_Colors_1d9a9690_13_9_8(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->SortedStops());
        ::uArray* Offsets_1d9a9690_13_8_11 = ImageElementDraw__Draw_Offsets_1d9a9690_13_8_10(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->SortedStops());
        {
            __this->_draw_1d9a9690.BlendEnabled(true);
            __this->_draw_1d9a9690.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_1d9a9690.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_1d9a9690.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_1d9a9690.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_1d9a9690.DepthTestEnabled(false);
            __this->_draw_1d9a9690.CullFace(0);
            __this->_draw_1d9a9690.Const_1(0, ::uPtr< ::uArray*>(Colors_1d9a9690_13_9_9)->Length());
            __this->_draw_1d9a9690.Const_1(1, ::uPtr< ::uArray*>(Offsets_1d9a9690_13_8_11)->Length());
            __this->_draw_1d9a9690.Use();
            __this->_draw_1d9a9690.Attrib_1(2, 2, __this->Draw_VertexData_1d9a9690_7_2_1, 8, 0);
            __this->_draw_1d9a9690.Uniform_14(3, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera())));
            __this->_draw_1d9a9690.Uniform_9(4, uvSize);
            __this->_draw_1d9a9690.Uniform_9(5, uvPosition);
            __this->_draw_1d9a9690.Uniform_9(6, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint());
            __this->_draw_1d9a9690.Uniform_9(7, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint());
            __this->_draw_1d9a9690.Uniform_18(8, Colors_1d9a9690_13_9_9);
            __this->_draw_1d9a9690.Uniform_15(9, Offsets_1d9a9690_13_8_11);
            __this->_draw_1d9a9690.Uniform_8(10, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
            __this->_draw_1d9a9690.Uniform_14(11, ((::app::Fuse::Node*)element != NULL) ? ::app::Uno::Matrix__Mul_11(NULL, LocalTransform_1d9a9690_4_8_2, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)element)->WorldTransform()) : LocalTransform_1d9a9690_4_8_2);
            __this->_draw_1d9a9690.DrawArrays(6);
        }
    }
    else if (::uIs(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
    {
        ::app::Uno::Float4x4 LocalTransform_9d65e537_4_8_2 = ::app::Uno::Matrix__Mul_7(NULL, __this->Draw_LocalTransform_cc6a686_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, size.X, size.Y, 1.0f), __this->Draw_LocalTransform_cc6a686_4_8_3, ::app::Uno::Matrix__Translation_1(NULL, offset.X, offset.Y, 0.0f));
        {
            __this->_draw_cfe1b555.BlendEnabled(true);
            __this->_draw_cfe1b555.BlendSrcRgb(__this->Draw_BlendSrcRgb_9d65e537_11_4_10);
            __this->_draw_cfe1b555.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_9d65e537_11_6_11);
            __this->_draw_cfe1b555.BlendDstRgb(__this->Draw_BlendDstRgb_9d65e537_11_5_12);
            __this->_draw_cfe1b555.BlendDstAlpha(__this->Draw_BlendDstAlpha_9d65e537_11_7_13);
            __this->_draw_cfe1b555.DepthTestEnabled(false);
            __this->_draw_cfe1b555.CullFace(0);
            __this->_draw_cfe1b555.Use();
            __this->_draw_cfe1b555.Attrib_1(0, 2, __this->Draw_VertexData_9d65e537_7_2_1, 8, 0);
            __this->_draw_cfe1b555.Uniform_14(1, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera())));
            __this->_draw_cfe1b555.Uniform_11(2, ::app::Uno::Float4__New_7(NULL, ::app::Uno::Float3__op_Multiply(NULL, (ind_124 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_124.X, ind_124.Y, ind_124.Z)), ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W), ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W));
            __this->_draw_cfe1b555.Uniform_14(3, ((::app::Fuse::Node*)element != NULL) ? ::app::Uno::Matrix__Mul_11(NULL, LocalTransform_9d65e537_4_8_2, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)element)->WorldTransform()) : LocalTransform_9d65e537_4_8_2);
            __this->_draw_cfe1b555.DrawArrays(6);
        }
    }
}

void ImageElementDraw__init_DrawCalls(ImageElementDraw* __this)
{
    ::uArray* array_125;
    array_125 = ::uNewArray(::app::Uno::Float2__typeof(), 6);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f);
    ::uArray* Vertices_cc6a686_7_1_0 = array_125;
    __this->Draw_VertexData_cc6a686_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_cc6a686_7_1_0), 0);
    __this->Draw_LocalTransform_cc6a686_4_8_2 = ::app::Uno::Matrix__Translation_1(NULL, -::app::Uno::Float2__New_1(NULL, 0.0f).X, -::app::Uno::Float2__New_1(NULL, 0.0f).Y, 0.0f);
    __this->Draw_LocalTransform_cc6a686_4_8_3 = ::app::Uno::Matrix__RotationZ(NULL, 0.0f);
    __this->Draw_VertexData_cfe1b555_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_cc6a686_7_1_0), 0);
    __this->Draw_VertexData_1d9a9690_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_cc6a686_7_1_0), 0);
    __this->Draw_VertexData_9d65e537_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_cc6a686_7_1_0), 0);
    __this->Draw_BlendSrcRgb_9d65e537_11_4_10 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, 0);
    __this->Draw_BlendSrcAlpha_9d65e537_11_6_11 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, 0);
    __this->Draw_BlendDstRgb_9d65e537_11_5_12 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, 0);
    __this->Draw_BlendDstAlpha_9d65e537_11_7_13 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, 0);
    __this->_draw_cc6a686 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 134), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_cfe1b555 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 122), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_1d9a9690 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 135), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

::uArray* ImageElementDraw__Draw_Colors_1d9a9690_13_9_8(::uStatic* __this, ::uArray* Colors_13_9_4)
{
    ::uArray* cols = ::uNewArray(::app::Uno::Float4__typeof(), ::app::Uno::Math__Max_8(NULL, ::uPtr< ::uArray*>(Colors_13_9_4)->Length(), 1));

    for (int i = 0; i < Colors_13_9_4->Length(); i++)
    {
        cols->Item< ::app::Uno::Float4>(i) = ::uPtr< ::app::Fuse::Drawing::GradientStop*>(Colors_13_9_4->Item< ::app::Fuse::Drawing::GradientStop*>(i))->Color();
    }

    return cols;
}

::uArray* ImageElementDraw__Draw_Offsets_1d9a9690_13_8_10(::uStatic* __this, ::uArray* Offsets_13_8_5)
{
    ::uArray* ofs = ::uNewArray(::app::Uno::Float__typeof(), ::app::Uno::Math__Max_8(NULL, ::uPtr< ::uArray*>(Offsets_13_8_5)->Length(), 1));

    for (int i = 0; i < Offsets_13_8_5->Length(); i++)
    {
        ofs->Item< float>(i) = ::uPtr< ::app::Fuse::Drawing::GradientStop*>(Offsets_13_8_5->Item< ::app::Fuse::Drawing::GradientStop*>(i))->Offset();
    }

    return ofs;
}

void ImageElementDraw___TypeInit(::uStatic* __this)
{
    ImageElementDraw__Impl = ImageElementDraw__New_1(NULL);
}

void ImageElementDraw___ObjInit(ImageElementDraw* __this)
{
    __this->init_DrawCalls();
}

ImageElementDraw* ImageElementDraw__New_1(::uStatic* __this)
{
    ImageElementDraw* inst = (::app::Fuse::Elements::Internal::ImageElementDraw*)::uAllocObject(sizeof(::app::Fuse::Elements::Internal::ImageElementDraw), ::app::Fuse::Elements::Internal::ImageElementDraw__typeof());
    inst->_ObjInit();
    return inst;
}

}}}}
