// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ROTATION_H__
#define __APP_FUSE_ROTATION_H__

#include <app/Fuse.Transform.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct FastMatrix; } }

namespace app {
namespace Fuse {

struct Rotation;

struct Rotation__uType : ::app::Fuse::Transform__uType
{
};

Rotation__uType* Rotation__typeof();

float Rotation__get_Degrees(Rotation* __this);
void Rotation__set_Degrees(Rotation* __this, float value);
void Rotation__AppendTo(Rotation* __this, ::app::Fuse::FastMatrix* m, float weight);
void Rotation__PrependTo(Rotation* __this, ::app::Fuse::FastMatrix* m);
void Rotation___ObjInit_1(Rotation* __this);
Rotation* Rotation__New_1(::uStatic* __this);

struct Rotation : ::app::Fuse::Transform
{
    float _degrees;

    void _ObjInit_1() { Rotation___ObjInit_1(this); }
    float Degrees() { return Rotation__get_Degrees(this); }
    void Degrees(float value) { Rotation__set_Degrees(this, value); }
};

}}

#include <app/Uno.Float.h>

namespace app {
namespace Fuse {

}}


#endif
