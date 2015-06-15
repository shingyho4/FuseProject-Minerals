// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Effects.Desaturate.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.FramebufferPool.h>
#include <app/Fuse.ICamera.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.ViewContext.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Matrix.h>

namespace app {
namespace Fuse {
namespace Effects {

Desaturate__uType* Desaturate__typeof()
{
    static Desaturate__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Desaturate__uType*)::uAllocClassType(sizeof(Desaturate__uType), "Fuse.Effects.Desaturate", ::app::Fuse::Effects::BasicEffect__typeof(), 0, 4);
        type->__fp_OnRender = (void(*)(::app::Fuse::Effects::BasicEffect*, ::app::Fuse::DrawContext*, ::app::Uno::Rect))Desaturate__OnRender;

        type->StrongRefOffsets[0] = offsetof(Desaturate, OnRender_VertexData_bd5b5311_7_2_1);
        type->StrongRefOffsets[1] = offsetof(Desaturate, _draw_bd5b5311._constValues);
        type->StrongRefOffsets[2] = offsetof(Desaturate, _draw_bd5b5311._compiledProgram);
        type->StrongRefOffsets[3] = offsetof(Desaturate, _draw_bd5b5311._Program);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "OnRender_VertexData_bd5b5311_7_2_1";
        type->StrongRefNames[1] = "_draw_bd5b5311._constValues";
        type->StrongRefNames[2] = "_draw_bd5b5311._compiledProgram";
        type->StrongRefNames[3] = "_draw_bd5b5311._Program";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float Desaturate__get_Amount(Desaturate* __this)
{
    return __this->_amount;
}

void Desaturate__set_Amount(Desaturate* __this, float value)
{
    if (__this->_amount != value)
    {
        __this->_amount = value;
        __this->OnRenderingChanged();
    }
}

void Desaturate__OnRender(Desaturate* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect elementRect)
{
    ::app::Uno::Graphics::Framebuffer* original = ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->CaptureRegion(dc, elementRect, ::app::Uno::Float2__op_Implicit(NULL, ::app::Uno::Int2__New_1(NULL, 0)));

    if (original == NULL)
    {
        return;
    }

    ::app::Uno::Float4x4 LocalTransform_bd5b5311_4_8_5 = ::app::Uno::Matrix__Mul_7(NULL, __this->OnRender_LocalTransform_bd5b5311_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, elementRect.Size().X, elementRect.Size().Y, 1.0f), __this->OnRender_LocalTransform_bd5b5311_4_8_3, __this->OnRender_LocalTransform_bd5b5311_4_8_4);
    {
        __this->_draw_bd5b5311.BlendEnabled(true);
        __this->_draw_bd5b5311.BlendSrcRgb(2);
        __this->_draw_bd5b5311.BlendDstRgb(3);
        __this->_draw_bd5b5311.BlendDstAlpha(3);
        __this->_draw_bd5b5311.DepthTestEnabled(false);
        __this->_draw_bd5b5311.CullFace(0);
        __this->_draw_bd5b5311.Use();
        __this->_draw_bd5b5311.Attrib_1(0, 2, __this->OnRender_VertexData_bd5b5311_7_2_1, 8, 0);
        __this->_draw_bd5b5311.Uniform_14(1, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera())));
        __this->_draw_bd5b5311.Uniform_8(2, __this->Amount());
        __this->_draw_bd5b5311.Uniform_14(3, ((::app::Fuse::Node*)__this->Element() != NULL) ? ::app::Uno::Matrix__Mul_11(NULL, LocalTransform_bd5b5311_4_8_5, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)__this->Element())->WorldTransform()) : LocalTransform_bd5b5311_4_8_5);
        __this->_draw_bd5b5311.Sampler_2(4, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(original)->ColorBuffer());
        __this->_draw_bd5b5311.DrawArrays(6);
    }

    ::app::Fuse::FramebufferPool__Release(NULL, original);
}

}}}
