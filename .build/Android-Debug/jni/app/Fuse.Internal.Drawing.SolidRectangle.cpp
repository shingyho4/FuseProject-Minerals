// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
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
#include <app/Fuse.ICamera.h>
#include <app/Fuse.Internal.Drawing.SolidRectangle.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.ViewContext.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
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
namespace Internal {
namespace Drawing {

::uStaticStrong< SolidRectangle*> SolidRectangle__Impl;

SolidRectangle__uType* SolidRectangle__typeof()
{
    static SolidRectangle__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SolidRectangle__uType*)::uAllocClassType(sizeof(SolidRectangle__uType), "Fuse.Internal.Drawing.SolidRectangle", ::uObject__typeof(), 0, 13);
        type->StrongRefOffsets[0] = offsetof(SolidRectangle, DrawElement_VertexData_23eccfa2_7_2_1);
        type->StrongRefOffsets[1] = offsetof(SolidRectangle, DrawElement_VertexData_b48c0e53_7_2_1);
        type->StrongRefOffsets[2] = offsetof(SolidRectangle, DrawElement_VertexData_1318df98_7_2_1);
        type->StrongRefOffsets[3] = offsetof(SolidRectangle, DrawElement_VertexData_e707de71_7_2_1);
        type->StrongRefOffsets[4] = offsetof(SolidRectangle, _draw_23eccfa2._constValues);
        type->StrongRefOffsets[5] = offsetof(SolidRectangle, _draw_23eccfa2._compiledProgram);
        type->StrongRefOffsets[6] = offsetof(SolidRectangle, _draw_23eccfa2._Program);
        type->StrongRefOffsets[7] = offsetof(SolidRectangle, _draw_b48c0e53._constValues);
        type->StrongRefOffsets[8] = offsetof(SolidRectangle, _draw_b48c0e53._compiledProgram);
        type->StrongRefOffsets[9] = offsetof(SolidRectangle, _draw_b48c0e53._Program);
        type->StrongRefOffsets[10] = offsetof(SolidRectangle, _draw_1318df98._constValues);
        type->StrongRefOffsets[11] = offsetof(SolidRectangle, _draw_1318df98._compiledProgram);
        type->StrongRefOffsets[12] = offsetof(SolidRectangle, _draw_1318df98._Program);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "DrawElement_VertexData_23eccfa2_7_2_1";
        type->StrongRefNames[1] = "DrawElement_VertexData_b48c0e53_7_2_1";
        type->StrongRefNames[2] = "DrawElement_VertexData_1318df98_7_2_1";
        type->StrongRefNames[3] = "DrawElement_VertexData_e707de71_7_2_1";
        type->StrongRefNames[4] = "_draw_23eccfa2._constValues";
        type->StrongRefNames[5] = "_draw_23eccfa2._compiledProgram";
        type->StrongRefNames[6] = "_draw_23eccfa2._Program";
        type->StrongRefNames[7] = "_draw_b48c0e53._constValues";
        type->StrongRefNames[8] = "_draw_b48c0e53._compiledProgram";
        type->StrongRefNames[9] = "_draw_b48c0e53._Program";
        type->StrongRefNames[10] = "_draw_1318df98._constValues";
        type->StrongRefNames[11] = "_draw_1318df98._compiledProgram";
        type->StrongRefNames[12] = "_draw_1318df98._Program";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void SolidRectangle__DrawElement(SolidRectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* element, ::app::Fuse::Drawing::Brush* brush)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();

    if (::uIs(brush, ::app::Fuse::Drawing::TextureFill__typeof()))
    {
        ::app::Uno::Float4x4 LocalTransform_23eccfa2_4_8_5 = ::app::Uno::Matrix__Mul_7(NULL, __this->DrawElement_LocalTransform_23eccfa2_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize().X, ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize().Y, 1.0f), __this->DrawElement_LocalTransform_23eccfa2_4_8_3, __this->DrawElement_LocalTransform_23eccfa2_4_8_4);
        {
            __this->_draw_23eccfa2.BlendEnabled(true);
            __this->_draw_23eccfa2.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_23eccfa2.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_23eccfa2.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_23eccfa2.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->BlendMode()));
            __this->_draw_23eccfa2.DepthTestEnabled(false);
            __this->_draw_23eccfa2.CullFace(0);
            __this->_draw_23eccfa2.Const(0, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture() == NULL);
            __this->_draw_23eccfa2.Use();
            __this->_draw_23eccfa2.Attrib_1(1, 2, __this->DrawElement_VertexData_23eccfa2_7_2_1, 8, 0);
            __this->_draw_23eccfa2.Uniform_14(2, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera())));
            __this->_draw_23eccfa2.Uniform_11(3, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->Color());
            __this->_draw_23eccfa2.Uniform_8(4, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->Opacity());
            __this->_draw_23eccfa2.Uniform_14(5, ((::app::Fuse::Node*)element != NULL) ? ::app::Uno::Matrix__Mul_11(NULL, LocalTransform_23eccfa2_4_8_5, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)element)->WorldTransform()) : LocalTransform_23eccfa2_4_8_5);
            __this->_draw_23eccfa2.Sampler_3(6, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->Texture(), ::app::Uno::Graphics::SamplerState__New_1(NULL, ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->MinFilter(), ::uPtr< ::app::Fuse::Drawing::TextureFill*>(::uAs< ::app::Fuse::Drawing::TextureFill*>(brush, ::app::Fuse::Drawing::TextureFill__typeof()))->MagFilter(), 10497));
            __this->_draw_23eccfa2.DrawArrays(6);
        }
    }
    else if (::uIs(brush, ::app::Fuse::Drawing::SolidColor__typeof()))
    {
        ::app::Uno::Float4x4 LocalTransform_b48c0e53_4_8_2 = ::app::Uno::Matrix__Mul_7(NULL, __this->DrawElement_LocalTransform_23eccfa2_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize().X, ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize().Y, 1.0f), __this->DrawElement_LocalTransform_23eccfa2_4_8_3, __this->DrawElement_LocalTransform_23eccfa2_4_8_4);
        {
            __this->_draw_b48c0e53.BlendEnabled(true);
            __this->_draw_b48c0e53.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_b48c0e53.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_b48c0e53.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_b48c0e53.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_b48c0e53.DepthTestEnabled(false);
            __this->_draw_b48c0e53.CullFace(0);
            __this->_draw_b48c0e53.Use();
            __this->_draw_b48c0e53.Attrib_1(0, 2, __this->DrawElement_VertexData_b48c0e53_7_2_1, 8, 0);
            __this->_draw_b48c0e53.Uniform_14(1, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera())));
            __this->_draw_b48c0e53.Uniform_11(2, ::app::Uno::Float4__New_7(NULL, ::app::Uno::Float3__op_Multiply(NULL, ::app::Uno::Float3__op_Multiply(NULL, (ind_123 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_123.X, ind_123.Y, ind_123.Z)), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity()), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W * ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity()));
            __this->_draw_b48c0e53.Uniform_14(3, ((::app::Fuse::Node*)element != NULL) ? ::app::Uno::Matrix__Mul_11(NULL, LocalTransform_b48c0e53_4_8_2, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)element)->WorldTransform()) : LocalTransform_b48c0e53_4_8_2);
            __this->_draw_b48c0e53.DrawArrays(6);
        }
    }
    else if (::uIs(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))
    {
        ::app::Uno::Float4x4 LocalTransform_1318df98_4_8_2 = ::app::Uno::Matrix__Mul_7(NULL, __this->DrawElement_LocalTransform_23eccfa2_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize().X, ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize().Y, 1.0f), __this->DrawElement_LocalTransform_23eccfa2_4_8_3, __this->DrawElement_LocalTransform_23eccfa2_4_8_4);
        ::uArray* Colors_1318df98_13_9_9 = SolidRectangle__DrawElement_Colors_1318df98_13_9_8(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->SortedStops());
        ::uArray* Offsets_1318df98_13_8_11 = SolidRectangle__DrawElement_Offsets_1318df98_13_8_10(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->SortedStops());
        {
            __this->_draw_1318df98.BlendEnabled(true);
            __this->_draw_1318df98.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_1318df98.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_1318df98.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_1318df98.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_1318df98.DepthTestEnabled(false);
            __this->_draw_1318df98.CullFace(0);
            __this->_draw_1318df98.Const_1(0, ::uPtr< ::uArray*>(Colors_1318df98_13_9_9)->Length());
            __this->_draw_1318df98.Const_1(1, ::uPtr< ::uArray*>(Offsets_1318df98_13_8_11)->Length());
            __this->_draw_1318df98.Use();
            __this->_draw_1318df98.Attrib_1(2, 2, __this->DrawElement_VertexData_1318df98_7_2_1, 8, 0);
            __this->_draw_1318df98.Uniform_14(3, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera())));
            __this->_draw_1318df98.Uniform_9(4, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint());
            __this->_draw_1318df98.Uniform_9(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint());
            __this->_draw_1318df98.Uniform_18(6, Colors_1318df98_13_9_9);
            __this->_draw_1318df98.Uniform_15(7, Offsets_1318df98_13_8_11);
            __this->_draw_1318df98.Uniform_8(8, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
            __this->_draw_1318df98.Uniform_14(9, ((::app::Fuse::Node*)element != NULL) ? ::app::Uno::Matrix__Mul_11(NULL, LocalTransform_1318df98_4_8_2, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)element)->WorldTransform()) : LocalTransform_1318df98_4_8_2);
            __this->_draw_1318df98.DrawArrays(6);
        }
    }
    else if (::uIs(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
    {
        ::app::Uno::Float4x4 LocalTransform_e707de71_4_8_2 = ::app::Uno::Matrix__Mul_7(NULL, __this->DrawElement_LocalTransform_23eccfa2_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize().X, ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize().Y, 1.0f), __this->DrawElement_LocalTransform_23eccfa2_4_8_3, __this->DrawElement_LocalTransform_23eccfa2_4_8_4);
        {
            __this->_draw_b48c0e53.BlendEnabled(true);
            __this->_draw_b48c0e53.BlendSrcRgb(__this->DrawElement_BlendSrcRgb_e707de71_11_4_10);
            __this->_draw_b48c0e53.BlendSrcAlpha(__this->DrawElement_BlendSrcAlpha_e707de71_11_6_11);
            __this->_draw_b48c0e53.BlendDstRgb(__this->DrawElement_BlendDstRgb_e707de71_11_5_12);
            __this->_draw_b48c0e53.BlendDstAlpha(__this->DrawElement_BlendDstAlpha_e707de71_11_7_13);
            __this->_draw_b48c0e53.DepthTestEnabled(false);
            __this->_draw_b48c0e53.CullFace(0);
            __this->_draw_b48c0e53.Use();
            __this->_draw_b48c0e53.Attrib_1(0, 2, __this->DrawElement_VertexData_e707de71_7_2_1, 8, 0);
            __this->_draw_b48c0e53.Uniform_14(1, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera())));
            __this->_draw_b48c0e53.Uniform_11(2, ::app::Uno::Float4__New_7(NULL, ::app::Uno::Float3__op_Multiply(NULL, (ind_124 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_124.X, ind_124.Y, ind_124.Z)), ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W), ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W));
            __this->_draw_b48c0e53.Uniform_14(3, ((::app::Fuse::Node*)element != NULL) ? ::app::Uno::Matrix__Mul_11(NULL, LocalTransform_e707de71_4_8_2, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)element)->WorldTransform()) : LocalTransform_e707de71_4_8_2);
            __this->_draw_b48c0e53.DrawArrays(6);
        }
    }
}

void SolidRectangle__init_DrawCalls(SolidRectangle* __this)
{
    ::uArray* array_125;
    array_125 = ::uNewArray(::app::Uno::Float2__typeof(), 6);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_125)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f);
    ::uArray* Vertices_23eccfa2_7_1_0 = array_125;
    __this->DrawElement_VertexData_23eccfa2_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_23eccfa2_7_1_0), 0);
    __this->DrawElement_LocalTransform_23eccfa2_4_8_2 = ::app::Uno::Matrix__Translation_1(NULL, -::app::Uno::Float2__New_1(NULL, 0.0f).X, -::app::Uno::Float2__New_1(NULL, 0.0f).Y, 0.0f);
    __this->DrawElement_LocalTransform_23eccfa2_4_8_3 = ::app::Uno::Matrix__RotationZ(NULL, 0.0f);
    __this->DrawElement_LocalTransform_23eccfa2_4_8_4 = ::app::Uno::Matrix__Translation_1(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f).X, ::app::Uno::Float2__New_1(NULL, 0.0f).Y, 0.0f);
    __this->DrawElement_VertexData_b48c0e53_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_23eccfa2_7_1_0), 0);
    __this->DrawElement_VertexData_1318df98_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_23eccfa2_7_1_0), 0);
    __this->DrawElement_VertexData_e707de71_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_23eccfa2_7_1_0), 0);
    __this->DrawElement_BlendSrcRgb_e707de71_11_4_10 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, 0);
    __this->DrawElement_BlendSrcAlpha_e707de71_11_6_11 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, 0);
    __this->DrawElement_BlendDstRgb_e707de71_11_5_12 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, 0);
    __this->DrawElement_BlendDstAlpha_e707de71_11_7_13 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, 0);
    __this->_draw_23eccfa2 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 306), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_b48c0e53 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 307), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_1318df98 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 308), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

::uArray* SolidRectangle__DrawElement_Colors_1318df98_13_9_8(::uStatic* __this, ::uArray* Colors_13_9_2)
{
    ::uArray* cols = ::uNewArray(::app::Uno::Float4__typeof(), ::app::Uno::Math__Max_8(NULL, ::uPtr< ::uArray*>(Colors_13_9_2)->Length(), 1));

    for (int i = 0; i < Colors_13_9_2->Length(); i++)
    {
        cols->Item< ::app::Uno::Float4>(i) = ::uPtr< ::app::Fuse::Drawing::GradientStop*>(Colors_13_9_2->Item< ::app::Fuse::Drawing::GradientStop*>(i))->Color();
    }

    return cols;
}

::uArray* SolidRectangle__DrawElement_Offsets_1318df98_13_8_10(::uStatic* __this, ::uArray* Offsets_13_8_3)
{
    ::uArray* ofs = ::uNewArray(::app::Uno::Float__typeof(), ::app::Uno::Math__Max_8(NULL, ::uPtr< ::uArray*>(Offsets_13_8_3)->Length(), 1));

    for (int i = 0; i < Offsets_13_8_3->Length(); i++)
    {
        ofs->Item< float>(i) = ::uPtr< ::app::Fuse::Drawing::GradientStop*>(Offsets_13_8_3->Item< ::app::Fuse::Drawing::GradientStop*>(i))->Offset();
    }

    return ofs;
}

void SolidRectangle___TypeInit(::uStatic* __this)
{
    SolidRectangle__Impl = SolidRectangle__New_1(NULL);
}

void SolidRectangle___ObjInit(SolidRectangle* __this)
{
    __this->init_DrawCalls();
}

SolidRectangle* SolidRectangle__New_1(::uStatic* __this)
{
    SolidRectangle* inst = (::app::Fuse::Internal::Drawing::SolidRectangle*)::uAllocObject(sizeof(::app::Fuse::Internal::Drawing::SolidRectangle), ::app::Fuse::Internal::Drawing::SolidRectangle__typeof());
    inst->_ObjInit();
    return inst;
}

}}}}
