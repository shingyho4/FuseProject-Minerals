// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_LIST__FUSE_BEHAVIOR_H__
#define __APP_UNO_COLLECTIONS_I_LIST__FUSE_BEHAVIOR_H__

#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Behavior; } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IList__Fuse_Behavior__typeof();

struct IList__Fuse_Behavior
{
    ::app::Fuse::Behavior*(*__fp_get_Item)(void*, int);

    static ::app::Fuse::Behavior* Item(::uObject* __this, int index) { return ((IList__Fuse_Behavior*)uGetInterfacePtr(__this, IList__Fuse_Behavior__typeof()))->__fp_get_Item((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), index); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
