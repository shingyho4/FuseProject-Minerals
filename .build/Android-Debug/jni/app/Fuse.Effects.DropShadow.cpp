// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Effects.DropShadow.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Effects.EffectHelpers.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.FramebufferPool.h>
#include <app/Fuse.ICamera.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.ViewContext.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>

namespace app {
namespace Fuse {
namespace Effects {

DropShadow__uType* DropShadow__typeof()
{
    static DropShadow__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DropShadow__uType*)::uAllocClassType(sizeof(DropShadow__uType), "Fuse.Effects.DropShadow", ::app::Fuse::Effects::BasicEffect__typeof(), 0, 5);
        type->__fp_get_ExtendsRenderBounds = (bool(*)(::app::Fuse::Effects::Effect*))DropShadow__get_ExtendsRenderBounds;
        type->__fp_get_RenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Effects::Effect*))DropShadow__get_RenderBounds;
        type->__fp_get_Active = (bool(*)(::app::Fuse::Effects::Effect*))DropShadow__get_Active;
        type->__fp_OnRender = (void(*)(::app::Fuse::Effects::BasicEffect*, ::app::Fuse::DrawContext*, ::app::Uno::Rect))DropShadow__OnRender;

        type->StrongRefOffsets[0] = offsetof(DropShadow, _helpers);
        type->StrongRefOffsets[1] = offsetof(DropShadow, OnRender_VertexData_ea2c17ee_7_2_1);
        type->StrongRefOffsets[2] = offsetof(DropShadow, _draw_ea2c17ee._constValues);
        type->StrongRefOffsets[3] = offsetof(DropShadow, _draw_ea2c17ee._compiledProgram);
        type->StrongRefOffsets[4] = offsetof(DropShadow, _draw_ea2c17ee._Program);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_helpers";
        type->StrongRefNames[1] = "OnRender_VertexData_ea2c17ee_7_2_1";
        type->StrongRefNames[2] = "_draw_ea2c17ee._constValues";
        type->StrongRefNames[3] = "_draw_ea2c17ee._compiledProgram";
        type->StrongRefNames[4] = "_draw_ea2c17ee._Program";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float DropShadow__get_Softness(DropShadow* __this)
{
    return __this->_softness;
}

void DropShadow__set_Softness(DropShadow* __this, float value)
{
    if (__this->_softness != value)
    {
        __this->_softness = value;

        if (__this->Active())
        {
            __this->OnRenderingChanged();
        }
    }
}

::app::Uno::Float2 DropShadow__get_Offset(DropShadow* __this)
{
    return __this->_offset;
}

void DropShadow__set_Offset(DropShadow* __this, ::app::Uno::Float2 value)
{
    if (::app::Uno::Float2__op_Inequality(NULL, __this->_offset, value))
    {
        __this->_offset = value;

        if (__this->Active())
        {
            __this->OnRenderingChanged();
        }
    }
}

float DropShadow__get_Multiplier(DropShadow* __this)
{
    return __this->_multiplier;
}

void DropShadow__set_Multiplier(DropShadow* __this, float value)
{
    if (__this->_multiplier != value)
    {
        bool wasActive = __this->Active();
        __this->_multiplier = value;

        if (wasActive || __this->Active())
        {
            __this->OnRenderingChanged();
        }
    }
}

::app::Uno::Float4 DropShadow__get_Color(DropShadow* __this)
{
    return __this->_color;
}

void DropShadow__set_Color(DropShadow* __this, ::app::Uno::Float4 value)
{
    if (::app::Uno::Float4__op_Inequality(NULL, __this->_color, value))
    {
        bool wasActive = __this->Active();
        __this->_color = value;

        if (wasActive || __this->Active())
        {
            __this->OnRenderingChanged();
        }
    }
}

float DropShadow__get_Padding(DropShadow* __this)
{
    return ::app::Uno::Math__Sqrt_1(NULL, __this->Softness()) * 10.0f;
}

bool DropShadow__get_ExtendsRenderBounds(DropShadow* __this)
{
    return true;
}

::app::Uno::Rect DropShadow__get_RenderBounds(DropShadow* __this)
{
    return ::app::Uno::Rect__Translate(NULL, ::app::Uno::Rect__Inflate_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->RenderBounds(), __this->Padding()), __this->Offset());
}

bool DropShadow__get_Active(DropShadow* __this)
{
    return (__this->Color().W * __this->Multiplier()) > 0.0f;
}

void DropShadow__OnRender(DropShadow* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect elementRect)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    float softness = ::app::Uno::Math__Sqrt_1(NULL, __this->Softness()) * 10.0f;
    ::app::Uno::Graphics::Framebuffer* temp = ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->CaptureRegion(dc, elementRect, ::app::Uno::Float2__New_1(NULL, __this->Padding()));

    if (temp == NULL)
    {
        return;
    }

    ::app::Uno::Graphics::Framebuffer* blur = ::uPtr< ::app::Fuse::Effects::EffectHelpers*>(__this->_helpers)->Blur(::uPtr< ::app::Uno::Graphics::Framebuffer*>(temp)->ColorBuffer(), dc, ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom(), softness * 0.016f);
    ::app::Uno::Float4x4 LocalTransform_ea2c17ee_4_8_4 = ::app::Uno::Matrix__Mul_7(NULL, __this->OnRender_LocalTransform_ea2c17ee_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)temp->Size().X, (float)temp->Size().Y), ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom()).X, ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)temp->Size().X, (float)temp->Size().Y), ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->AbsoluteZoom()).Y, 1.0f), __this->OnRender_LocalTransform_ea2c17ee_4_8_3, ::app::Uno::Matrix__Translation_1(NULL, ::app::Uno::Float2__op_Subtraction(NULL, ::app::Uno::Float2__op_Subtraction_1(NULL, __this->Offset(), __this->Padding()), elementRect.Minimum()).X, ::app::Uno::Float2__op_Subtraction(NULL, ::app::Uno::Float2__op_Subtraction_1(NULL, __this->Offset(), __this->Padding()), elementRect.Minimum()).Y, 0.0f));
    {
        __this->_draw_ea2c17ee.BlendEnabled(true);
        __this->_draw_ea2c17ee.BlendSrcRgb(2);
        __this->_draw_ea2c17ee.BlendDstRgb(3);
        __this->_draw_ea2c17ee.BlendDstAlpha(3);
        __this->_draw_ea2c17ee.DepthTestEnabled(false);
        __this->_draw_ea2c17ee.CullFace(0);
        __this->_draw_ea2c17ee.Use();
        __this->_draw_ea2c17ee.Attrib_1(0, 2, __this->OnRender_VertexData_ea2c17ee_7_2_1, 8, 0);
        __this->_draw_ea2c17ee.Uniform_14(1, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera())));
        __this->_draw_ea2c17ee.Uniform_8(2, __this->Color().W);
        __this->_draw_ea2c17ee.Uniform_8(3, __this->Multiplier());
        __this->_draw_ea2c17ee.Uniform_10(4, (ind_123 = __this->Color(), ::app::Uno::Float3__New_2(NULL, ind_123.X, ind_123.Y, ind_123.Z)));
        __this->_draw_ea2c17ee.Uniform_14(5, ((::app::Fuse::Node*)__this->Element() != NULL) ? ::app::Uno::Matrix__Mul_11(NULL, LocalTransform_ea2c17ee_4_8_4, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)__this->Element())->WorldTransform()) : LocalTransform_ea2c17ee_4_8_4);
        __this->_draw_ea2c17ee.Sampler_2(6, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(blur)->ColorBuffer());
        __this->_draw_ea2c17ee.DrawArrays(6);
    }

    ::app::Fuse::FramebufferPool__Release(NULL, blur);
    ::app::Fuse::FramebufferPool__Release(NULL, temp);
}

void DropShadow__init_DrawCalls(DropShadow* __this)
{
    ::uArray* array_124;
    __this->OnRender_VertexData_ea2c17ee_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, (array_124 = ::uNewArray(::app::Uno::Float2__typeof(), 6), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f), array_124)), 0);
    __this->OnRender_LocalTransform_ea2c17ee_4_8_2 = ::app::Uno::Matrix__Translation_1(NULL, -::app::Uno::Float2__New_1(NULL, 0.0f).X, -::app::Uno::Float2__New_1(NULL, 0.0f).Y, 0.0f);
    __this->OnRender_LocalTransform_ea2c17ee_4_8_3 = ::app::Uno::Matrix__RotationZ(NULL, 0.0f);
    __this->_draw_ea2c17ee = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 323), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

void DropShadow___ObjInit_2(DropShadow* __this)
{
    __this->_helpers = ::app::Fuse::Effects::EffectHelpers__New_1(NULL);
    ::app::Fuse::Effects::BasicEffect___ObjInit_1(__this, 0);
    __this->Softness(2.0f);
    __this->Color(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    __this->Multiplier(1.0f);
    __this->init_DrawCalls();
}

DropShadow* DropShadow__New_1(::uStatic* __this)
{
    DropShadow* inst = (::app::Fuse::Effects::DropShadow*)::uAllocObject(sizeof(::app::Fuse::Effects::DropShadow), ::app::Fuse::Effects::DropShadow__typeof());
    inst->_ObjInit_2();
    return inst;
}

}}}
