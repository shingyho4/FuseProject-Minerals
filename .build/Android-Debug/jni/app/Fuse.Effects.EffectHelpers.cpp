// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Effects.EffectHelpers.h>
#include <app/Fuse.FramebufferPool.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.RenderTarget.h>
#include <app/Uno.Graphics.SamplerState.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Math.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Fuse {
namespace Effects {

EffectHelpers__uType* EffectHelpers__typeof()
{
    static EffectHelpers__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EffectHelpers__uType*)::uAllocClassType(sizeof(EffectHelpers__uType), "Fuse.Effects.EffectHelpers", ::uObject__typeof(), 0, 5);
        type->StrongRefOffsets[0] = offsetof(EffectHelpers, DirectionalBlur_VertexData_294f65c8_2_5_2);
        type->StrongRefOffsets[1] = offsetof(EffectHelpers, DirectionalBlur_VertexData_294f65c8_2_5_3);
        type->StrongRefOffsets[2] = offsetof(EffectHelpers, _draw_294f65c8._constValues);
        type->StrongRefOffsets[3] = offsetof(EffectHelpers, _draw_294f65c8._compiledProgram);
        type->StrongRefOffsets[4] = offsetof(EffectHelpers, _draw_294f65c8._Program);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "DirectionalBlur_VertexData_294f65c8_2_5_2";
        type->StrongRefNames[1] = "DirectionalBlur_VertexData_294f65c8_2_5_3";
        type->StrongRefNames[2] = "_draw_294f65c8._constValues";
        type->StrongRefNames[3] = "_draw_294f65c8._compiledProgram";
        type->StrongRefNames[4] = "_draw_294f65c8._Program";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Graphics::Framebuffer* EffectHelpers__Blur(EffectHelpers* __this, ::app::Uno::Graphics::Texture2D* original, ::app::Fuse::DrawContext* dc, float zoom, float amount)
{
    ::app::Uno::Graphics::Framebuffer* b1 = __this->BlurHorizontal(dc, original, ::app::Uno::Math__Max_1(NULL, 1.0f, (2.0f * zoom) * amount), amount);
    ::app::Uno::Graphics::Framebuffer* b2 = __this->BlurVertical(dc, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(b1)->ColorBuffer(), ::app::Uno::Math__Max_1(NULL, 1.0f, (2.0f * zoom) * amount), amount);
    ::app::Fuse::FramebufferPool__Release(NULL, b1);
    ::app::Uno::Graphics::Framebuffer* b3 = __this->BlurHorizontal(dc, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(b2)->ColorBuffer(), 1.0f, amount);
    ::app::Fuse::FramebufferPool__Release(NULL, b2);
    ::app::Uno::Graphics::Framebuffer* b4 = __this->BlurVertical(dc, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(b3)->ColorBuffer(), 1.0f, amount);
    ::app::Fuse::FramebufferPool__Release(NULL, b3);
    ::app::Uno::Graphics::Framebuffer* b5 = __this->BlurHorizontal(dc, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(b4)->ColorBuffer(), ::app::Uno::Math__Max_1(NULL, 1.0f, 3.0f * amount), amount);
    ::app::Fuse::FramebufferPool__Release(NULL, b4);
    ::app::Uno::Graphics::Framebuffer* b6 = __this->BlurVertical(dc, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(b5)->ColorBuffer(), ::app::Uno::Math__Max_1(NULL, 1.0f, 3.0f * amount), amount);
    ::app::Fuse::FramebufferPool__Release(NULL, b5);
    ::app::Uno::Graphics::Framebuffer* b7 = __this->BlurHorizontal(dc, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(b6)->ColorBuffer(), 1.0f, amount);
    ::app::Fuse::FramebufferPool__Release(NULL, b6);
    ::app::Uno::Graphics::Framebuffer* blur = __this->BlurVertical(dc, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(b7)->ColorBuffer(), 1.0f, amount);
    ::app::Fuse::FramebufferPool__Release(NULL, b7);
    return blur;
}

::app::Uno::Graphics::Framebuffer* EffectHelpers__BlurHorizontal(EffectHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, float h, float amount)
{
    int nw = (int)((float)::uPtr< ::app::Uno::Graphics::Texture2D*>(tex)->Size().X / h);
    int nh = tex->Size().Y;
    ::app::Uno::Graphics::Framebuffer* fb = ::app::Fuse::FramebufferPool__Lock_1(NULL, nw, nh, 3, false);
    ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushRenderTarget(fb);
    dc->Clear(::app::Uno::Float4__New_1(NULL, 0.0f), 1.0f);
    __this->DirectionalBlur(tex, ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f), amount);
    dc->PopRenderTarget();
    return fb;
}

::app::Uno::Graphics::Framebuffer* EffectHelpers__BlurVertical(EffectHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, float h, float amount)
{
    int nw = ::uPtr< ::app::Uno::Graphics::Texture2D*>(tex)->Size().X;
    int nh = (int)((float)tex->Size().Y / h);
    ::app::Uno::Graphics::Framebuffer* fb = ::app::Fuse::FramebufferPool__Lock_1(NULL, nw, nh, 3, false);
    ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushRenderTarget(fb);
    dc->Clear(::app::Uno::Float4__New_1(NULL, 0.0f), 1.0f);
    __this->DirectionalBlur(tex, ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f), amount);
    dc->PopRenderTarget();
    return fb;
}

void EffectHelpers__DirectionalBlur(EffectHelpers* __this, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float2 dir, float amount)
{
    ::app::Uno::Float2 delta_294f65c8_3_3_6 = ::app::Uno::Float2__op_Multiply(NULL, ::app::Uno::Float2__New_2(NULL, dir.X / (float)::uPtr< ::app::Uno::Graphics::Texture2D*>(tex)->Size().X, dir.Y / (float)::uPtr< ::app::Uno::Graphics::Texture2D*>(tex)->Size().Y), ::app::Uno::Math__Sqrt_1(NULL, amount));
    {
        __this->_draw_294f65c8.DepthTestEnabled(false);
        __this->_draw_294f65c8.Use();
        __this->_draw_294f65c8.Attrib_1(0, 2, __this->DirectionalBlur_VertexData_294f65c8_2_5_3, 8, 0);
        __this->_draw_294f65c8.Uniform_9(1, ::app::Uno::Float2__op_Multiply(NULL, delta_294f65c8_3_3_6, 1.407333f));
        __this->_draw_294f65c8.Uniform_9(2, ::app::Uno::Float2__op_Multiply(NULL, delta_294f65c8_3_3_6, 3.294215f));
        __this->_draw_294f65c8.Sampler_3(3, tex, ::app::Uno::Graphics::SamplerState__get_LinearClamp(NULL));
        __this->_draw_294f65c8.Draw(6, 2, __this->DirectionalBlur_VertexData_294f65c8_2_5_2);
    }
}

void EffectHelpers__init_DrawCalls(EffectHelpers* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;
    __this->DirectionalBlur_VertexData_294f65c8_2_5_2 = ::app::Uno::Graphics::IndexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_6(NULL, (array_123 = ::uNewArray(::app::Uno::UShort__typeof(), 6), ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(0) = 0, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(1) = 1, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(2) = 2, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(3) = 2, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(4) = 3, ::uPtr< ::uArray*>(array_123)->Item< ::uUShort>(5) = 0, array_123)), 0);
    __this->DirectionalBlur_VertexData_294f65c8_2_5_3 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, (array_124 = ::uNewArray(::app::Uno::Float2__typeof(), 4), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_124)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f), array_124)), 0);
    __this->_draw_294f65c8 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 139), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

void EffectHelpers___ObjInit(EffectHelpers* __this)
{
    __this->init_DrawCalls();
}

EffectHelpers* EffectHelpers__New_1(::uStatic* __this)
{
    EffectHelpers* inst = (::app::Fuse::Effects::EffectHelpers*)::uAllocObject(sizeof(::app::Fuse::Effects::EffectHelpers), ::app::Fuse::Effects::EffectHelpers__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
