// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FLOAT_H__
#define __APP_FUSE_INTERNAL_BLENDER__FLOAT_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__float;

struct Blender__float__uType : ::uClassType
{
    float(*__fp_Weight)(Blender__float*, float, float);
    float(*__fp_Add)(Blender__float*, float, float);
    float(*__fp_Sub)(Blender__float*, float, float);
    float(*__fp_Lerp)(Blender__float*, float, float, float);
    float(*__fp_ToUnit)(Blender__float*, float, float*);
    float(*__fp_Length)(Blender__float*, float);
    float(*__fp_get_Zero)(Blender__float*);
};

Blender__float__uType* Blender__float__typeof();

void Blender__float___ObjInit(Blender__float* __this);

struct Blender__float : ::uObject
{
    float Weight(float v, float w) { return (((Blender__float__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
    float Add(float a, float b) { return (((Blender__float__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    float Sub(float a, float b) { return (((Blender__float__uType*)this->__obj_type)->__fp_Sub)(this, a, b); }
    float Lerp(float a, float b, float d) { return (((Blender__float__uType*)this->__obj_type)->__fp_Lerp)(this, a, b, d); }
    float ToUnit(float a, float* length) { return (((Blender__float__uType*)this->__obj_type)->__fp_ToUnit)(this, a, length); }
    float Length(float a) { return (((Blender__float__uType*)this->__obj_type)->__fp_Length)(this, a); }
    void _ObjInit() { Blender__float___ObjInit(this); }
    float Zero() { return (((Blender__float__uType*)this->__obj_type)->__fp_get_Zero)(this); }
};

}}}

#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Internal {

}}}


#endif
