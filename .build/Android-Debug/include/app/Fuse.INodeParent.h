// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_NODE_PARENT_H__
#define __APP_FUSE_I_NODE_PARENT_H__

#include <app/Fuse.IResourceParent.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {

::uInterfaceType* INodeParent__typeof();

struct INodeParent
{
    bool(*__fp_get_IsRooted)(void*);
    ::uObject*(*__fp_get_Window)(void*);
    ::app::Uno::Float2(*__fp_WindowToLocal)(void*, ::app::Uno::Float2);

    static bool IsRooted(::uObject* __this) { return ((INodeParent*)uGetInterfacePtr(__this, INodeParent__typeof()))->__fp_get_IsRooted((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static ::uObject* Window(::uObject* __this) { return ((INodeParent*)uGetInterfacePtr(__this, INodeParent__typeof()))->__fp_get_Window((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static ::app::Uno::Float2 WindowToLocal(::uObject* __this, ::app::Uno::Float2 windowCoord);
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float2 INodeParent::WindowToLocal(::uObject* __this, ::app::Uno::Float2 windowCoord) { return ((INodeParent*)uGetInterfacePtr(__this, INodeParent__typeof()))->__fp_WindowToLocal((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), windowCoord); }

}}


#endif
