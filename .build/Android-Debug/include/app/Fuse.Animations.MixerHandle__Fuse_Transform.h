// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_TRANSFORM_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_TRANSFORM_H__

#include <app/Fuse.Animations.IMixerHandle__Fuse_Transform.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Transform; } } }
namespace app { namespace Fuse { struct Transform; } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__Fuse_Transform;

struct MixerHandle__Fuse_Transform__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__Fuse_Transform __interface_0;
};

MixerHandle__Fuse_Transform__uType* MixerHandle__Fuse_Transform__typeof();

bool MixerHandle__Fuse_Transform__get_HasValue(MixerHandle__Fuse_Transform* __this);
int MixerHandle__Fuse_Transform__get_MixOp(MixerHandle__Fuse_Transform* __this);
void MixerHandle__Fuse_Transform__set_MixOp(MixerHandle__Fuse_Transform* __this, int value);
int MixerHandle__Fuse_Transform__get_Priority(MixerHandle__Fuse_Transform* __this);
void MixerHandle__Fuse_Transform__set_Priority(MixerHandle__Fuse_Transform* __this, int value);
void MixerHandle__Fuse_Transform__Unregister(MixerHandle__Fuse_Transform* __this);
void MixerHandle__Fuse_Transform__Set(MixerHandle__Fuse_Transform* __this, ::app::Fuse::Transform* value, float strength);
void MixerHandle__Fuse_Transform___ObjInit(MixerHandle__Fuse_Transform* __this, ::app::Fuse::Animations::MasterBase__Fuse_Transform* master, int mode, int priority);
MixerHandle__Fuse_Transform* MixerHandle__Fuse_Transform__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Transform* master, int mode, int priority);

struct MixerHandle__Fuse_Transform : ::uObject
{
    ::uStrong< ::app::Fuse::Transform*> Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__Fuse_Transform*> Master;
    int _MixOp;
    int _Priority;

    void Unregister() { MixerHandle__Fuse_Transform__Unregister(this); }
    void Set(::app::Fuse::Transform* value, float strength) { MixerHandle__Fuse_Transform__Set(this, value, strength); }
    void _ObjInit(::app::Fuse::Animations::MasterBase__Fuse_Transform* master, int mode, int priority) { MixerHandle__Fuse_Transform___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__Fuse_Transform__get_HasValue(this); }
    int MixOp() { return MixerHandle__Fuse_Transform__get_MixOp(this); }
    void MixOp(int value) { MixerHandle__Fuse_Transform__set_MixOp(this, value); }
    int Priority() { return MixerHandle__Fuse_Transform__get_Priority(this); }
    void Priority(int value) { MixerHandle__Fuse_Transform__set_Priority(this, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
