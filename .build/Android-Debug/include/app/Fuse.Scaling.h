// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCALING_H__
#define __APP_FUSE_SCALING_H__

#include <app/Fuse.Transform.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct FastMatrix; } }

namespace app {
namespace Fuse {

struct Scaling;

struct Scaling__uType : ::app::Fuse::Transform__uType
{
};

Scaling__uType* Scaling__typeof();

float Scaling__get_Factor(Scaling* __this);
void Scaling__set_Factor(Scaling* __this, float value);
bool Scaling__get_IsIdentity(Scaling* __this);
void Scaling__AppendTo(Scaling* __this, ::app::Fuse::FastMatrix* m, float weight);
void Scaling__PrependTo(Scaling* __this, ::app::Fuse::FastMatrix* m);
void Scaling___ObjInit_1(Scaling* __this);
Scaling* Scaling__New_1(::uStatic* __this);

struct Scaling : ::app::Fuse::Transform
{
    float _factor;

    void _ObjInit_1() { Scaling___ObjInit_1(this); }
    float Factor() { return Scaling__get_Factor(this); }
    void Factor(float value) { Scaling__set_Factor(this, value); }
    bool IsIdentity() { return Scaling__get_IsIdentity(this); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {

}}


#endif
