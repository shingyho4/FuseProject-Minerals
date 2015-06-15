// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_EFFECTS_EFFECT_HELPERS_H__
#define __APP_FUSE_EFFECTS_EFFECT_HELPERS_H__

#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct IndexBuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Effects {

struct EffectHelpers;

struct EffectHelpers__uType : ::uClassType
{
};

EffectHelpers__uType* EffectHelpers__typeof();

::app::Uno::Graphics::Framebuffer* EffectHelpers__Blur(EffectHelpers* __this, ::app::Uno::Graphics::Texture2D* original, ::app::Fuse::DrawContext* dc, float zoom, float amount);
::app::Uno::Graphics::Framebuffer* EffectHelpers__BlurHorizontal(EffectHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, float h, float amount);
::app::Uno::Graphics::Framebuffer* EffectHelpers__BlurVertical(EffectHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, float h, float amount);
void EffectHelpers__DirectionalBlur(EffectHelpers* __this, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float2 dir, float amount);
void EffectHelpers__init_DrawCalls(EffectHelpers* __this);
void EffectHelpers___ObjInit(EffectHelpers* __this);
EffectHelpers* EffectHelpers__New_1(::uStatic* __this);

struct EffectHelpers : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> DirectionalBlur_VertexData_294f65c8_2_5_2;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> DirectionalBlur_VertexData_294f65c8_2_5_3;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_294f65c8;

    ::app::Uno::Graphics::Framebuffer* Blur(::app::Uno::Graphics::Texture2D* original, ::app::Fuse::DrawContext* dc, float zoom, float amount) { return EffectHelpers__Blur(this, original, dc, zoom, amount); }
    ::app::Uno::Graphics::Framebuffer* BlurHorizontal(::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, float h, float amount) { return EffectHelpers__BlurHorizontal(this, dc, tex, h, amount); }
    ::app::Uno::Graphics::Framebuffer* BlurVertical(::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, float h, float amount) { return EffectHelpers__BlurVertical(this, dc, tex, h, amount); }
    void DirectionalBlur(::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float2 dir, float amount);
    void init_DrawCalls() { EffectHelpers__init_DrawCalls(this); }
    void _ObjInit() { EffectHelpers___ObjInit(this); }
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Effects {

inline void EffectHelpers::DirectionalBlur(::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float2 dir, float amount) { EffectHelpers__DirectionalBlur(this, tex, dir, amount); }

}}}


#endif
