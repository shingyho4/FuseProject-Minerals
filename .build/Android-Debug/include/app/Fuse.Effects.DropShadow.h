// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_EFFECTS_DROP_SHADOW_H__
#define __APP_FUSE_EFFECTS_DROP_SHADOW_H__

#include <app/Fuse.Effects.BasicEffect.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Effects { struct EffectHelpers; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Effects {

struct DropShadow;

struct DropShadow__uType : ::app::Fuse::Effects::BasicEffect__uType
{
};

DropShadow__uType* DropShadow__typeof();

float DropShadow__get_Softness(DropShadow* __this);
void DropShadow__set_Softness(DropShadow* __this, float value);
::app::Uno::Float2 DropShadow__get_Offset(DropShadow* __this);
void DropShadow__set_Offset(DropShadow* __this, ::app::Uno::Float2 value);
float DropShadow__get_Multiplier(DropShadow* __this);
void DropShadow__set_Multiplier(DropShadow* __this, float value);
::app::Uno::Float4 DropShadow__get_Color(DropShadow* __this);
void DropShadow__set_Color(DropShadow* __this, ::app::Uno::Float4 value);
float DropShadow__get_Padding(DropShadow* __this);
bool DropShadow__get_ExtendsRenderBounds(DropShadow* __this);
::app::Uno::Rect DropShadow__get_RenderBounds(DropShadow* __this);
bool DropShadow__get_Active(DropShadow* __this);
void DropShadow__OnRender(DropShadow* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect elementRect);
void DropShadow__init_DrawCalls(DropShadow* __this);
void DropShadow___ObjInit_2(DropShadow* __this);
DropShadow* DropShadow__New_1(::uStatic* __this);

struct DropShadow : ::app::Fuse::Effects::BasicEffect
{
    float _softness;
    ::app::Uno::Float2 _offset;
    float _multiplier;
    ::app::Uno::Float4 _color;
    ::uStrong< ::app::Fuse::Effects::EffectHelpers*> _helpers;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> OnRender_VertexData_ea2c17ee_7_2_1;
    ::app::Uno::Float4x4 OnRender_LocalTransform_ea2c17ee_4_8_2;
    ::app::Uno::Float4x4 OnRender_LocalTransform_ea2c17ee_4_8_3;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_ea2c17ee;

    void init_DrawCalls() { DropShadow__init_DrawCalls(this); }
    void _ObjInit_2() { DropShadow___ObjInit_2(this); }
    float Softness() { return DropShadow__get_Softness(this); }
    void Softness(float value) { DropShadow__set_Softness(this, value); }
    ::app::Uno::Float2 Offset();
    void Offset(::app::Uno::Float2 value);
    float Multiplier() { return DropShadow__get_Multiplier(this); }
    void Multiplier(float value) { DropShadow__set_Multiplier(this, value); }
    ::app::Uno::Float4 Color();
    void Color(::app::Uno::Float4 value);
    float Padding() { return DropShadow__get_Padding(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Effects {

inline ::app::Uno::Float2 DropShadow::Offset() { return DropShadow__get_Offset(this); }
inline void DropShadow::Offset(::app::Uno::Float2 value) { DropShadow__set_Offset(this, value); }
inline ::app::Uno::Float4 DropShadow::Color() { return DropShadow__get_Color(this); }
inline void DropShadow::Color(::app::Uno::Float4 value) { DropShadow__set_Color(this, value); }

}}}


#endif
