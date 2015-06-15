// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_ACTUAL_SIZE_H__
#define __APP_FUSE_I_ACTUAL_SIZE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {

::uInterfaceType* IActualSize__typeof();

struct IActualSize
{
    ::app::Uno::Float3(*__fp_get_ActualSize)(void*);
    void(*__fp_add_Resized)(void*, ::uDelegate*);
    void(*__fp_remove_Resized)(void*, ::uDelegate*);

    static ::app::Uno::Float3 ActualSize(::uObject* __this);
    static void add_Resized(::uObject* __this, ::uDelegate* value) { ((IActualSize*)uGetInterfacePtr(__this, IActualSize__typeof()))->__fp_add_Resized((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), value); }
    static void remove_Resized(::uObject* __this, ::uDelegate* value) { ((IActualSize*)uGetInterfacePtr(__this, IActualSize__typeof()))->__fp_remove_Resized((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), value); }
};

}}

#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float3 IActualSize::ActualSize(::uObject* __this) { return ((IActualSize*)uGetInterfacePtr(__this, IActualSize__typeof()))->__fp_get_ActualSize((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }

}}


#endif
