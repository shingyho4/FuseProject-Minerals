// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_I_TOGGLE_H__
#define __APP_FUSE_CONTROLS_I_TOGGLE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Controls {

::uInterfaceType* IToggle__typeof();

struct IToggle
{
    bool(*__fp_get_Toggled)(void*);
    void(*__fp_set_Toggled)(void*, bool);

    static bool Toggled(::uObject* __this) { return ((IToggle*)uGetInterfacePtr(__this, IToggle__typeof()))->__fp_get_Toggled((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static void Toggled(::uObject* __this, bool value) { ((IToggle*)uGetInterfacePtr(__this, IToggle__typeof()))->__fp_set_Toggled((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), value); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Controls {

}}}


#endif
