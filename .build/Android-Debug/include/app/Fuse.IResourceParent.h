// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_RESOURCE_PARENT_H__
#define __APP_FUSE_I_RESOURCE_PARENT_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {

::uInterfaceType* IResourceParent__typeof();

struct IResourceParent
{
    void(*__fp_ApplyStyle)(void*, ::uObject*);
    ::uObject*(*__fp_GetResource)(void*, ::uString*, ::uDelegate*);

    static void ApplyStyle(::uObject* __this, ::uObject* obj) { ((IResourceParent*)uGetInterfacePtr(__this, IResourceParent__typeof()))->__fp_ApplyStyle((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), obj); }
    static ::uObject* GetResource(::uObject* __this, ::uString* key, ::uDelegate* acceptor) { return ((IResourceParent*)uGetInterfacePtr(__this, IResourceParent__typeof()))->__fp_GetResource((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), key, acceptor); }
};

}}


#endif
