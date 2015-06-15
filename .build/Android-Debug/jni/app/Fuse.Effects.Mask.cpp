// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Effects.Mask.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.FramebufferPool.h>
#include <app/Fuse.ICamera.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.ViewContext.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.SamplerState.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Matrix.h>

namespace app {
namespace Fuse {
namespace Effects {

Mask__uType* Mask__typeof()
{
    static Mask__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Mask__uType*)::uAllocClassType(sizeof(Mask__uType), "Fuse.Effects.Mask", ::app::Fuse::Effects::BasicEffect__typeof(), 0, 13);
        type->__fp_OnRender = (void(*)(::app::Fuse::Effects::BasicEffect*, ::app::Fuse::DrawContext*, ::app::Uno::Rect))Mask__OnRender;

        type->StrongRefOffsets[0] = offsetof(Mask, _mask);
        type->StrongRefOffsets[1] = offsetof(Mask, OnRender_VertexData_e56a2f35_7_2_1);
        type->StrongRefOffsets[2] = offsetof(Mask, OnRender_VertexData_97b14dfa_7_2_1);
        type->StrongRefOffsets[3] = offsetof(Mask, OnRender_VertexData_f63e1f3f_7_2_1);
        type->StrongRefOffsets[4] = offsetof(Mask, _draw_e56a2f35._constValues);
        type->StrongRefOffsets[5] = offsetof(Mask, _draw_e56a2f35._compiledProgram);
        type->StrongRefOffsets[6] = offsetof(Mask, _draw_e56a2f35._Program);
        type->StrongRefOffsets[7] = offsetof(Mask, _draw_97b14dfa._constValues);
        type->StrongRefOffsets[8] = offsetof(Mask, _draw_97b14dfa._compiledProgram);
        type->StrongRefOffsets[9] = offsetof(Mask, _draw_97b14dfa._Program);
        type->StrongRefOffsets[10] = offsetof(Mask, _draw_f63e1f3f._constValues);
        type->StrongRefOffsets[11] = offsetof(Mask, _draw_f63e1f3f._compiledProgram);
        type->StrongRefOffsets[12] = offsetof(Mask, _draw_f63e1f3f._Program);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_mask";
        type->StrongRefNames[1] = "OnRender_VertexData_e56a2f35_7_2_1";
        type->StrongRefNames[2] = "OnRender_VertexData_97b14dfa_7_2_1";
        type->StrongRefNames[3] = "OnRender_VertexData_f63e1f3f_7_2_1";
        type->StrongRefNames[4] = "_draw_e56a2f35._constValues";
        type->StrongRefNames[5] = "_draw_e56a2f35._compiledProgram";
        type->StrongRefNames[6] = "_draw_e56a2f35._Program";
        type->StrongRefNames[7] = "_draw_97b14dfa._constValues";
        type->StrongRefNames[8] = "_draw_97b14dfa._compiledProgram";
        type->StrongRefNames[9] = "_draw_97b14dfa._Program";
        type->StrongRefNames[10] = "_draw_f63e1f3f._constValues";
        type->StrongRefNames[11] = "_draw_f63e1f3f._compiledProgram";
        type->StrongRefNames[12] = "_draw_f63e1f3f._Program";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Graphics::Texture2D* Mask__get_Texture(Mask* __this)
{
    return __this->_mask;
}

void Mask__set_Texture(Mask* __this, ::app::Uno::Graphics::Texture2D* value)
{
    if (__this->_mask != value)
    {
        __this->_mask = value;
        __this->OnRenderingChanged();
    }
}

void Mask__OnRender(Mask* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect elementRect)
{
    ::app::Uno::Graphics::Framebuffer* original = ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->CaptureRegion(dc, elementRect, ::app::Uno::Float2__New_1(NULL, 0.0f));

    if (original == NULL)
    {
        return;
    }

    switch (__this->_mode)
    {
        case 0:
        {
            ::app::Uno::Float4x4 LocalTransform_e56a2f35_4_8_5 = ::app::Uno::Matrix__Mul_7(NULL, __this->OnRender_LocalTransform_e56a2f35_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, elementRect.Size().X, elementRect.Size().Y, 1.0f), __this->OnRender_LocalTransform_e56a2f35_4_8_3, __this->OnRender_LocalTransform_e56a2f35_4_8_4);
            {
                __this->_draw_e56a2f35.BlendEnabled(true);
                __this->_draw_e56a2f35.BlendSrcRgb(2);
                __this->_draw_e56a2f35.BlendDstRgb(3);
                __this->_draw_e56a2f35.BlendDstAlpha(3);
                __this->_draw_e56a2f35.DepthTestEnabled(false);
                __this->_draw_e56a2f35.CullFace(0);
                __this->_draw_e56a2f35.Use();
                __this->_draw_e56a2f35.Attrib_1(0, 2, __this->OnRender_VertexData_e56a2f35_7_2_1, 8, 0);
                __this->_draw_e56a2f35.Uniform_14(1, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera())));
                __this->_draw_e56a2f35.Uniform_9(2, ::app::Uno::Float2__op_Division(NULL, elementRect.Size(), ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->ActualSize()));
                __this->_draw_e56a2f35.Uniform_14(3, ((::app::Fuse::Node*)__this->Element() != NULL) ? ::app::Uno::Matrix__Mul_11(NULL, LocalTransform_e56a2f35_4_8_5, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)__this->Element())->WorldTransform()) : LocalTransform_e56a2f35_4_8_5);
                __this->_draw_e56a2f35.Sampler_2(4, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(original)->ColorBuffer());
                __this->_draw_e56a2f35.Sampler_3(5, __this->Texture(), ::app::Uno::Graphics::SamplerState__get_LinearClamp(NULL));
                __this->_draw_e56a2f35.DrawArrays(6);
            }

            break;
        }
        case 1:
        {
            ::app::Uno::Float4x4 LocalTransform_97b14dfa_4_8_2 = ::app::Uno::Matrix__Mul_7(NULL, __this->OnRender_LocalTransform_e56a2f35_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, elementRect.Size().X, elementRect.Size().Y, 1.0f), __this->OnRender_LocalTransform_e56a2f35_4_8_3, __this->OnRender_LocalTransform_e56a2f35_4_8_4);
            {
                __this->_draw_97b14dfa.BlendEnabled(true);
                __this->_draw_97b14dfa.BlendSrcRgb(2);
                __this->_draw_97b14dfa.BlendDstRgb(3);
                __this->_draw_97b14dfa.BlendDstAlpha(3);
                __this->_draw_97b14dfa.DepthTestEnabled(false);
                __this->_draw_97b14dfa.CullFace(0);
                __this->_draw_97b14dfa.Use();
                __this->_draw_97b14dfa.Attrib_1(0, 2, __this->OnRender_VertexData_97b14dfa_7_2_1, 8, 0);
                __this->_draw_97b14dfa.Uniform_14(1, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera())));
                __this->_draw_97b14dfa.Uniform_9(2, ::app::Uno::Float2__op_Division(NULL, elementRect.Size(), ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->ActualSize()));
                __this->_draw_97b14dfa.Uniform_14(3, ((::app::Fuse::Node*)__this->Element() != NULL) ? ::app::Uno::Matrix__Mul_11(NULL, LocalTransform_97b14dfa_4_8_2, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)__this->Element())->WorldTransform()) : LocalTransform_97b14dfa_4_8_2);
                __this->_draw_97b14dfa.Sampler_2(4, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(original)->ColorBuffer());
                __this->_draw_97b14dfa.Sampler_3(5, __this->Texture(), ::app::Uno::Graphics::SamplerState__get_LinearClamp(NULL));
                __this->_draw_97b14dfa.DrawArrays(6);
            }

            break;
        }
        case 2:
        {
            ::app::Uno::Float4x4 LocalTransform_f63e1f3f_4_8_2 = ::app::Uno::Matrix__Mul_7(NULL, __this->OnRender_LocalTransform_e56a2f35_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, elementRect.Size().X, elementRect.Size().Y, 1.0f), __this->OnRender_LocalTransform_e56a2f35_4_8_3, __this->OnRender_LocalTransform_e56a2f35_4_8_4);
            {
                __this->_draw_f63e1f3f.BlendEnabled(true);
                __this->_draw_f63e1f3f.BlendSrcRgb(2);
                __this->_draw_f63e1f3f.BlendDstRgb(3);
                __this->_draw_f63e1f3f.BlendDstAlpha(3);
                __this->_draw_f63e1f3f.DepthTestEnabled(false);
                __this->_draw_f63e1f3f.CullFace(0);
                __this->_draw_f63e1f3f.Use();
                __this->_draw_f63e1f3f.Attrib_1(0, 2, __this->OnRender_VertexData_f63e1f3f_7_2_1, 8, 0);
                __this->_draw_f63e1f3f.Uniform_14(1, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera())));
                __this->_draw_f63e1f3f.Uniform_9(2, ::app::Uno::Float2__op_Division(NULL, elementRect.Size(), ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element())->ActualSize()));
                __this->_draw_f63e1f3f.Uniform_14(3, ((::app::Fuse::Node*)__this->Element() != NULL) ? ::app::Uno::Matrix__Mul_11(NULL, LocalTransform_f63e1f3f_4_8_2, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)__this->Element())->WorldTransform()) : LocalTransform_f63e1f3f_4_8_2);
                __this->_draw_f63e1f3f.Sampler_2(4, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(original)->ColorBuffer());
                __this->_draw_f63e1f3f.Sampler_3(5, __this->Texture(), ::app::Uno::Graphics::SamplerState__get_LinearClamp(NULL));
                __this->_draw_f63e1f3f.DrawArrays(6);
            }

            break;
        }
    }

    ::app::Fuse::FramebufferPool__Release(NULL, original);
}

}}}
