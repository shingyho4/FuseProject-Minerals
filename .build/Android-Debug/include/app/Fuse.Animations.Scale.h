// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_SCALE_H__
#define __APP_FUSE_ANIMATIONS_SCALE_H__

#include <app/Fuse.Animations.TransformAnimator__Fuse_Scaling.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Scaling; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Scale;

struct Scale__uType : ::app::Fuse::Animations::TransformAnimator__Fuse_Scaling__uType
{
};

Scale__uType* Scale__typeof();

float Scale__get_Factor(Scale* __this);
void Scale__set_Factor(Scale* __this, float value);
void Scale__Update(Scale* __this, ::app::Fuse::Node* elm, ::app::Fuse::Scaling* t);

struct Scale : ::app::Fuse::Animations::TransformAnimator__Fuse_Scaling
{
    float _Factor;

    float Factor() { return Scale__get_Factor(this); }
    void Factor(float value) { Scale__set_Factor(this, value); }
};

}}}

#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
