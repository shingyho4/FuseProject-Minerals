// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_ROTATE_H__
#define __APP_FUSE_ANIMATIONS_ROTATE_H__

#include <app/Fuse.Animations.TransformAnimator__Fuse_Rotation.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Rotation; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Rotate;

struct Rotate__uType : ::app::Fuse::Animations::TransformAnimator__Fuse_Rotation__uType
{
};

Rotate__uType* Rotate__typeof();

float Rotate__get_Degrees(Rotate* __this);
void Rotate__set_Degrees(Rotate* __this, float value);
void Rotate__Update(Rotate* __this, ::app::Fuse::Node* elm, ::app::Fuse::Rotation* t);

struct Rotate : ::app::Fuse::Animations::TransformAnimator__Fuse_Rotation
{
    float _Degrees;

    float Degrees() { return Rotate__get_Degrees(this); }
    void Degrees(float value) { Rotate__set_Degrees(this, value); }
};

}}}

#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
