// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_I_ADD_REMOVE_CHILD_H__
#define __APP_FUSE_TRIGGERS_I_ADD_REMOVE_CHILD_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {

::uInterfaceType* IAddRemoveChild__typeof();

struct IAddRemoveChild
{
    void(*__fp_AddChild)(void*, ::app::Fuse::Node*);
    void(*__fp_RemoveChild)(void*, ::app::Fuse::Node*);

    static void AddChild(::uObject* __this, ::app::Fuse::Node* node) { ((IAddRemoveChild*)uGetInterfacePtr(__this, IAddRemoveChild__typeof()))->__fp_AddChild((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), node); }
    static void RemoveChild(::uObject* __this, ::app::Fuse::Node* node) { ((IAddRemoveChild*)uGetInterfacePtr(__this, IAddRemoveChild__typeof()))->__fp_RemoveChild((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), node); }
};

}}}


#endif
