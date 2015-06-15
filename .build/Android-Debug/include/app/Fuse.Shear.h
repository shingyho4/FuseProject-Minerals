// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SHEAR_H__
#define __APP_FUSE_SHEAR_H__

#include <app/Fuse.Transform.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct FastMatrix; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {

struct Shear;

struct Shear__uType : ::app::Fuse::Transform__uType
{
};

Shear__uType* Shear__typeof();

float Shear__get_DegreesX(Shear* __this);
void Shear__set_DegreesX(Shear* __this, float value);
float Shear__get_DegreesY(Shear* __this);
void Shear__set_DegreesY(Shear* __this, float value);
::app::Uno::Float2 Shear__get_Degrees(Shear* __this);
void Shear__set_Degrees(Shear* __this, ::app::Uno::Float2 value);
void Shear__AppendTo(Shear* __this, ::app::Fuse::FastMatrix* m, float weight);
void Shear__PrependTo(Shear* __this, ::app::Fuse::FastMatrix* m);
void Shear___ObjInit_1(Shear* __this);
Shear* Shear__New_1(::uStatic* __this);

struct Shear : ::app::Fuse::Transform
{
    float _x;
    float _y;

    void _ObjInit_1() { Shear___ObjInit_1(this); }
    float DegreesX() { return Shear__get_DegreesX(this); }
    void DegreesX(float value) { Shear__set_DegreesX(this, value); }
    float DegreesY() { return Shear__get_DegreesY(this); }
    void DegreesY(float value) { Shear__set_DegreesY(this, value); }
    ::app::Uno::Float2 Degrees();
    void Degrees(::app::Uno::Float2 value);
};

}}

#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float2 Shear::Degrees() { return Shear__get_Degrees(this); }
inline void Shear::Degrees(::app::Uno::Float2 value) { Shear__set_Degrees(this, value); }

}}


#endif
