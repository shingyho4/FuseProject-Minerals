// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FLOAT4_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FLOAT4_H__

#include <app/Fuse.Animations.IMixerHandle__float4.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__float4; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__float4;

struct MixerHandle__float4__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__float4 __interface_0;
};

MixerHandle__float4__uType* MixerHandle__float4__typeof();

bool MixerHandle__float4__get_HasValue(MixerHandle__float4* __this);
int MixerHandle__float4__get_MixOp(MixerHandle__float4* __this);
void MixerHandle__float4__set_MixOp(MixerHandle__float4* __this, int value);
int MixerHandle__float4__get_Priority(MixerHandle__float4* __this);
void MixerHandle__float4__set_Priority(MixerHandle__float4* __this, int value);
void MixerHandle__float4__Unregister(MixerHandle__float4* __this);
void MixerHandle__float4__Set(MixerHandle__float4* __this, ::app::Uno::Float4 value, float strength);
void MixerHandle__float4___ObjInit(MixerHandle__float4* __this, ::app::Fuse::Animations::MasterBase__float4* master, int mode, int priority);
MixerHandle__float4* MixerHandle__float4__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__float4* master, int mode, int priority);

struct MixerHandle__float4 : ::uObject
{
    ::app::Uno::Float4 Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__float4*> Master;
    int _MixOp;
    int _Priority;

    void Unregister() { MixerHandle__float4__Unregister(this); }
    void Set(::app::Uno::Float4 value, float strength);
    void _ObjInit(::app::Fuse::Animations::MasterBase__float4* master, int mode, int priority) { MixerHandle__float4___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__float4__get_HasValue(this); }
    int MixOp() { return MixerHandle__float4__get_MixOp(this); }
    void MixOp(int value) { MixerHandle__float4__set_MixOp(this, value); }
    int Priority() { return MixerHandle__float4__get_Priority(this); }
    void Priority(int value) { MixerHandle__float4__set_Priority(this, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Animations {

inline void MixerHandle__float4::Set(::app::Uno::Float4 value, float strength) { MixerHandle__float4__Set(this, value, strength); }

}}}


#endif
