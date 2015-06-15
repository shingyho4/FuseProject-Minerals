// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__UNO_U_X_RESOURCE_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__UNO_U_X_RESOURCE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace UX { struct Resource; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Uno_UX_Resource__typeof();

struct ICollection__Uno_UX_Resource
{
    int(*__fp_get_Count)(void*);
    void(*__fp_Add)(void*, ::app::Uno::UX::Resource*);

    static int Count(::uObject* __this) { return ((ICollection__Uno_UX_Resource*)uGetInterfacePtr(__this, ICollection__Uno_UX_Resource__typeof()))->__fp_get_Count((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static void Add(::uObject* __this, ::app::Uno::UX::Resource* item) { ((ICollection__Uno_UX_Resource*)uGetInterfacePtr(__this, ICollection__Uno_UX_Resource__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), item); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
