// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_CACHE_I_CACHE_H__
#define __APP_EXPERIMENTAL_CACHE_I_CACHE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Experimental {
namespace Cache {

::uInterfaceType* ICache__typeof();

struct ICache
{
    bool(*__fp_LoadRecord)(void*, ::uString*, ::uDelegate*);
    ::uObject*(*__fp_CreateRecord)(void*, ::uString*);
    void(*__fp_DeleteRecord)(void*, ::uString*);

    static bool LoadRecord(::uObject* __this, ::uString* id, ::uDelegate* onLoaded) { return ((ICache*)uGetInterfacePtr(__this, ICache__typeof()))->__fp_LoadRecord((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), id, onLoaded); }
    static ::uObject* CreateRecord(::uObject* __this, ::uString* id) { return ((ICache*)uGetInterfacePtr(__this, ICache__typeof()))->__fp_CreateRecord((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), id); }
    static void DeleteRecord(::uObject* __this, ::uString* id) { ((ICache*)uGetInterfacePtr(__this, ICache__typeof()))->__fp_DeleteRecord((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), id); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Experimental {
namespace Cache {

}}}


#endif
