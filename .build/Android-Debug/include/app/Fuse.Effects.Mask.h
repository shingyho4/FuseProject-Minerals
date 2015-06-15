// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_EFFECTS_MASK_H__
#define __APP_FUSE_EFFECTS_MASK_H__

#include <app/Fuse.Effects.BasicEffect.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Effects {

struct Mask;

struct Mask__uType : ::app::Fuse::Effects::BasicEffect__uType
{
};

Mask__uType* Mask__typeof();

::app::Uno::Graphics::Texture2D* Mask__get_Texture(Mask* __this);
void Mask__set_Texture(Mask* __this, ::app::Uno::Graphics::Texture2D* value);
void Mask__OnRender(Mask* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect elementRect);

struct Mask : ::app::Fuse::Effects::BasicEffect
{
    ::uStrong< ::app::Uno::Graphics::Texture2D*> _mask;
    int _mode;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> OnRender_VertexData_e56a2f35_7_2_1;
    ::app::Uno::Float4x4 OnRender_LocalTransform_e56a2f35_4_8_2;
    ::app::Uno::Float4x4 OnRender_LocalTransform_e56a2f35_4_8_3;
    ::app::Uno::Float4x4 OnRender_LocalTransform_e56a2f35_4_8_4;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> OnRender_VertexData_97b14dfa_7_2_1;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> OnRender_VertexData_f63e1f3f_7_2_1;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_e56a2f35;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_97b14dfa;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_f63e1f3f;

    ::app::Uno::Graphics::Texture2D* Texture() { return Mask__get_Texture(this); }
    void Texture(::app::Uno::Graphics::Texture2D* value) { Mask__set_Texture(this, value); }
};

}}}

#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Effects {

}}}


#endif
