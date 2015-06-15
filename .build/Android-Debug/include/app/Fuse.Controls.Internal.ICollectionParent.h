// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_INTERNAL_I_COLLECTION_PARENT_H__
#define __APP_FUSE_CONTROLS_INTERNAL_I_COLLECTION_PARENT_H__

#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Internal {

::uInterfaceType* ICollectionParent__typeof();

struct ICollectionParent
{
    void(*__fp_OnCollectionChildAdded)(void*, ::uObject*, ::app::Fuse::Elements::Element*);
    void(*__fp_OnCollectionChildRemoved)(void*, ::uObject*, ::app::Fuse::Elements::Element*);

    static void OnCollectionChildAdded(::uObject* __this, ::uObject* where, ::app::Fuse::Elements::Element* elm) { ((ICollectionParent*)uGetInterfacePtr(__this, ICollectionParent__typeof()))->__fp_OnCollectionChildAdded((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), where, elm); }
    static void OnCollectionChildRemoved(::uObject* __this, ::uObject* where, ::app::Fuse::Elements::Element* elm) { ((ICollectionParent*)uGetInterfacePtr(__this, ICollectionParent__typeof()))->__fp_OnCollectionChildRemoved((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), where, elm); }
};

}}}}


#endif
