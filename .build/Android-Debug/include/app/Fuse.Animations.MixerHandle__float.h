// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FLOAT_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FLOAT_H__

#include <app/Fuse.Animations.IMixerHandle__float.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__float; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__float;

struct MixerHandle__float__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__float __interface_0;
};

MixerHandle__float__uType* MixerHandle__float__typeof();

bool MixerHandle__float__get_HasValue(MixerHandle__float* __this);
int MixerHandle__float__get_MixOp(MixerHandle__float* __this);
void MixerHandle__float__set_MixOp(MixerHandle__float* __this, int value);
int MixerHandle__float__get_Priority(MixerHandle__float* __this);
void MixerHandle__float__set_Priority(MixerHandle__float* __this, int value);
void MixerHandle__float__Unregister(MixerHandle__float* __this);
void MixerHandle__float__Set(MixerHandle__float* __this, float value, float strength);
void MixerHandle__float___ObjInit(MixerHandle__float* __this, ::app::Fuse::Animations::MasterBase__float* master, int mode, int priority);
MixerHandle__float* MixerHandle__float__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__float* master, int mode, int priority);

struct MixerHandle__float : ::uObject
{
    float Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__float*> Master;
    int _MixOp;
    int _Priority;

    void Unregister() { MixerHandle__float__Unregister(this); }
    void Set(float value, float strength) { MixerHandle__float__Set(this, value, strength); }
    void _ObjInit(::app::Fuse::Animations::MasterBase__float* master, int mode, int priority) { MixerHandle__float___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__float__get_HasValue(this); }
    int MixOp() { return MixerHandle__float__get_MixOp(this); }
    void MixOp(int value) { MixerHandle__float__set_MixOp(this, value); }
    int Priority() { return MixerHandle__float__get_Priority(this); }
    void Priority(int value) { MixerHandle__float__set_Priority(this, value); }
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
