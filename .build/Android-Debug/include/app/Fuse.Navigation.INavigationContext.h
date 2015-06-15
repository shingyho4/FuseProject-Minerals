// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_I_NAVIGATION_CONTEXT_H__
#define __APP_FUSE_NAVIGATION_I_NAVIGATION_CONTEXT_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

::uInterfaceType* INavigationContext__typeof();

struct INavigationContext
{
    bool(*__fp_get_CanGoBack)(void*);
    bool(*__fp_get_CanGoForward)(void*);
    void(*__fp_GoForward)(void*);
    void(*__fp_GoBack)(void*);
    void(*__fp_Goto)(void*, ::app::Fuse::Node*);
    void(*__fp_Toggle)(void*, ::app::Fuse::Node*);
    void(*__fp_add_Navigated)(void*, ::uDelegate*);
    void(*__fp_remove_Navigated)(void*, ::uDelegate*);

    static bool CanGoBack(::uObject* __this) { return ((INavigationContext*)uGetInterfacePtr(__this, INavigationContext__typeof()))->__fp_get_CanGoBack((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static bool CanGoForward(::uObject* __this) { return ((INavigationContext*)uGetInterfacePtr(__this, INavigationContext__typeof()))->__fp_get_CanGoForward((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static void GoForward(::uObject* __this) { ((INavigationContext*)uGetInterfacePtr(__this, INavigationContext__typeof()))->__fp_GoForward((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static void GoBack(::uObject* __this) { ((INavigationContext*)uGetInterfacePtr(__this, INavigationContext__typeof()))->__fp_GoBack((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static void Goto(::uObject* __this, ::app::Fuse::Node* node) { ((INavigationContext*)uGetInterfacePtr(__this, INavigationContext__typeof()))->__fp_Goto((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), node); }
    static void Toggle(::uObject* __this, ::app::Fuse::Node* node) { ((INavigationContext*)uGetInterfacePtr(__this, INavigationContext__typeof()))->__fp_Toggle((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), node); }
    static void add_Navigated(::uObject* __this, ::uDelegate* value) { ((INavigationContext*)uGetInterfacePtr(__this, INavigationContext__typeof()))->__fp_add_Navigated((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), value); }
    static void remove_Navigated(::uObject* __this, ::uDelegate* value) { ((INavigationContext*)uGetInterfacePtr(__this, INavigationContext__typeof()))->__fp_remove_Navigated((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), value); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Navigation {

}}}


#endif
