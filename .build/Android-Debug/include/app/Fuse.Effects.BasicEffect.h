// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Effects\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_EFFECTS_BASIC_EFFECT_H__
#define __APP_FUSE_EFFECTS_BASIC_EFFECT_H__

#include <app/Fuse.Effects.Effect.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Rect; } }
namespace app { namespace Uno { struct Recti; } }

namespace app {
namespace Fuse {
namespace Effects {

struct BasicEffect;

struct BasicEffect__uType : ::app::Fuse::Effects::Effect__uType
{
    void(*__fp_OnRender)(BasicEffect*, ::app::Fuse::DrawContext*, ::app::Uno::Rect);
};

BasicEffect__uType* BasicEffect__typeof();

void BasicEffect__Render(BasicEffect* __this, ::app::Fuse::DrawContext* dc);
::app::Uno::Recti BasicEffect__ConservativelySnapToCoveringIntegers(::uStatic* __this, ::app::Uno::Rect r);
::app::Uno::Rect BasicEffect__GetLocalElementRect(BasicEffect* __this);
void BasicEffect___ObjInit_1(BasicEffect* __this, int effectType);

struct BasicEffect : ::app::Fuse::Effects::Effect
{
    void OnRender(::app::Fuse::DrawContext* dc, ::app::Uno::Rect region);
    ::app::Uno::Rect GetLocalElementRect();
    void _ObjInit_1(int effectType) { BasicEffect___ObjInit_1(this, effectType); }
};

}}}

#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Effects {

inline void BasicEffect::OnRender(::app::Fuse::DrawContext* dc, ::app::Uno::Rect region) { (((BasicEffect__uType*)this->__obj_type)->__fp_OnRender)(this, dc, region); }
inline ::app::Uno::Rect BasicEffect::GetLocalElementRect() { return BasicEffect__GetLocalElementRect(this); }

}}}


#endif
