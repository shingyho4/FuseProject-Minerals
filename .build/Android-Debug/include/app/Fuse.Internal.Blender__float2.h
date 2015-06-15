// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FLOAT2_H__
#define __APP_FUSE_INTERNAL_BLENDER__FLOAT2_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__float2;

struct Blender__float2__uType : ::uClassType
{
    ::app::Uno::Float2(*__fp_Weight)(Blender__float2*, ::app::Uno::Float2, float);
    ::app::Uno::Float2(*__fp_Add)(Blender__float2*, ::app::Uno::Float2, ::app::Uno::Float2);
    ::app::Uno::Float2(*__fp_Sub)(Blender__float2*, ::app::Uno::Float2, ::app::Uno::Float2);
    ::app::Uno::Float2(*__fp_Lerp)(Blender__float2*, ::app::Uno::Float2, ::app::Uno::Float2, float);
    ::app::Uno::Float2(*__fp_ToUnit)(Blender__float2*, ::app::Uno::Float2, float*);
    float(*__fp_Length)(Blender__float2*, ::app::Uno::Float2);
    ::app::Uno::Float2(*__fp_get_Zero)(Blender__float2*);
};

Blender__float2__uType* Blender__float2__typeof();

::app::Uno::Float2 Blender__float2__UnitWeight(Blender__float2* __this, ::app::Uno::Float2 v, float w);
void Blender__float2___ObjInit(Blender__float2* __this);

struct Blender__float2 : ::uObject
{
    ::app::Uno::Float2 Weight(::app::Uno::Float2 v, float w);
    ::app::Uno::Float2 Add(::app::Uno::Float2 a, ::app::Uno::Float2 b);
    ::app::Uno::Float2 Sub(::app::Uno::Float2 a, ::app::Uno::Float2 b);
    ::app::Uno::Float2 Lerp(::app::Uno::Float2 a, ::app::Uno::Float2 b, float d);
    ::app::Uno::Float2 ToUnit(::app::Uno::Float2 a, float* length);
    float Length(::app::Uno::Float2 a);
    ::app::Uno::Float2 UnitWeight(::app::Uno::Float2 v, float w);
    void _ObjInit() { Blender__float2___ObjInit(this); }
    ::app::Uno::Float2 Zero();
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Internal {

inline ::app::Uno::Float2 Blender__float2::Weight(::app::Uno::Float2 v, float w) { return (((Blender__float2__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
inline ::app::Uno::Float2 Blender__float2::Add(::app::Uno::Float2 a, ::app::Uno::Float2 b) { return (((Blender__float2__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
inline ::app::Uno::Float2 Blender__float2::Sub(::app::Uno::Float2 a, ::app::Uno::Float2 b) { return (((Blender__float2__uType*)this->__obj_type)->__fp_Sub)(this, a, b); }
inline ::app::Uno::Float2 Blender__float2::Lerp(::app::Uno::Float2 a, ::app::Uno::Float2 b, float d) { return (((Blender__float2__uType*)this->__obj_type)->__fp_Lerp)(this, a, b, d); }
inline ::app::Uno::Float2 Blender__float2::ToUnit(::app::Uno::Float2 a, float* length) { return (((Blender__float2__uType*)this->__obj_type)->__fp_ToUnit)(this, a, length); }
inline float Blender__float2::Length(::app::Uno::Float2 a) { return (((Blender__float2__uType*)this->__obj_type)->__fp_Length)(this, a); }
inline ::app::Uno::Float2 Blender__float2::UnitWeight(::app::Uno::Float2 v, float w) { return Blender__float2__UnitWeight(this, v, w); }
inline ::app::Uno::Float2 Blender__float2::Zero() { return (((Blender__float2__uType*)this->__obj_type)->__fp_get_Zero)(this); }

}}}


#endif
