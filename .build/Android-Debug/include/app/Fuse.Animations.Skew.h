// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_SKEW_H__
#define __APP_FUSE_ANIMATIONS_SKEW_H__

#include <app/Fuse.Animations.TransformAnimator__Fuse_Shear.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Shear; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Skew;

struct Skew__uType : ::app::Fuse::Animations::TransformAnimator__Fuse_Shear__uType
{
};

Skew__uType* Skew__typeof();

float Skew__get_DegreesX(Skew* __this);
void Skew__set_DegreesX(Skew* __this, float value);
float Skew__get_DegreesY(Skew* __this);
void Skew__set_DegreesY(Skew* __this, float value);
::app::Uno::Float2 Skew__get_Degrees(Skew* __this);
void Skew__set_Degrees(Skew* __this, ::app::Uno::Float2 value);
void Skew__Update(Skew* __this, ::app::Fuse::Node* elm, ::app::Fuse::Shear* t);

struct Skew : ::app::Fuse::Animations::TransformAnimator__Fuse_Shear
{
    float _DegreesX;
    float _DegreesY;

    float DegreesX() { return Skew__get_DegreesX(this); }
    void DegreesX(float value) { Skew__set_DegreesX(this, value); }
    float DegreesY() { return Skew__get_DegreesY(this); }
    void DegreesY(float value) { Skew__set_DegreesY(this, value); }
    ::app::Uno::Float2 Degrees();
    void Degrees(::app::Uno::Float2 value);
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Skew::Degrees() { return Skew__get_Degrees(this); }
inline void Skew::Degrees(::app::Uno::Float2 value) { Skew__set_Degrees(this, value); }

}}}


#endif
