// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_ANIMATOR_H__
#define __APP_FUSE_ANIMATIONS_ANIMATOR_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct Animator;

struct Animator__uType : ::uClassType
{
    ::app::Fuse::Animations::AnimatorState*(*__fp_CreateState)(Animator*, ::app::Fuse::Animations::CreateStateParams*);
    double(*__fp_GetDurationWithDelay)(Animator*, int);
    int(*__fp_get_AnimatorVariant)(Animator*);
};

Animator__uType* Animator__typeof();

double Animator__get_Delay(Animator* __this);
void Animator__set_Delay(Animator* __this, double value);
int Animator__get_AnimatorVariant(Animator* __this);
int Animator__get_MixOp(Animator* __this);
void Animator__set_MixOp(Animator* __this, int value);
double Animator__GetDurationWithDelay(Animator* __this, int dir);
void Animator___ObjInit(Animator* __this);

struct Animator : ::uObject
{
    ::uStrong< ::uObject*> Mixer;
    int _mixOp;
    double _Delay;

    ::app::Fuse::Animations::AnimatorState* CreateState(::app::Fuse::Animations::CreateStateParams* p) { return (((Animator__uType*)this->__obj_type)->__fp_CreateState)(this, p); }
    double GetDurationWithDelay(int dir) { return (((Animator__uType*)this->__obj_type)->__fp_GetDurationWithDelay)(this, dir); }
    void _ObjInit() { Animator___ObjInit(this); }
    double Delay() { return Animator__get_Delay(this); }
    void Delay(double value) { Animator__set_Delay(this, value); }
    int AnimatorVariant() { return (((Animator__uType*)this->__obj_type)->__fp_get_AnimatorVariant)(this); }
    int MixOp() { return Animator__get_MixOp(this); }
    void MixOp(int value) { Animator__set_MixOp(this, value); }
};

}}}

#include <app/Uno.Double.h>

namespace app {
namespace Fuse {
namespace Animations {

}}}


#endif
