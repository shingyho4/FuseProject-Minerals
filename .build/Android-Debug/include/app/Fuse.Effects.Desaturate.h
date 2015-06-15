// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_EFFECTS_DESATURATE_H__
#define __APP_FUSE_EFFECTS_DESATURATE_H__

#include <app/Fuse.Effects.BasicEffect.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Effects {

struct Desaturate;

struct Desaturate__uType : ::app::Fuse::Effects::BasicEffect__uType
{
};

Desaturate__uType* Desaturate__typeof();

float Desaturate__get_Amount(Desaturate* __this);
void Desaturate__set_Amount(Desaturate* __this, float value);
void Desaturate__OnRender(Desaturate* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect elementRect);

struct Desaturate : ::app::Fuse::Effects::BasicEffect
{
    float _amount;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> OnRender_VertexData_bd5b5311_7_2_1;
    ::app::Uno::Float4x4 OnRender_LocalTransform_bd5b5311_4_8_2;
    ::app::Uno::Float4x4 OnRender_LocalTransform_bd5b5311_4_8_3;
    ::app::Uno::Float4x4 OnRender_LocalTransform_bd5b5311_4_8_4;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_bd5b5311;

    float Amount() { return Desaturate__get_Amount(this); }
    void Amount(float value) { Desaturate__set_Amount(this, value); }
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Effects {

}}}


#endif
