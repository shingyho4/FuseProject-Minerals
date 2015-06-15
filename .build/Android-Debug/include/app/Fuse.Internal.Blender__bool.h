// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__BOOL_H__
#define __APP_FUSE_INTERNAL_BLENDER__BOOL_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__bool;

struct Blender__bool__uType : ::uClassType
{
    bool(*__fp_Weight)(Blender__bool*, bool, float);
    bool(*__fp_Add)(Blender__bool*, bool, bool);
};

Blender__bool__uType* Blender__bool__typeof();

struct Blender__bool : ::uObject
{
    bool Weight(bool v, float w) { return (((Blender__bool__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
    bool Add(bool a, bool b) { return (((Blender__bool__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Internal {

}}}


#endif
