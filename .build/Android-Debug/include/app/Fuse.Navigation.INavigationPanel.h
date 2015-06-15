// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_I_NAVIGATION_PANEL_H__
#define __APP_FUSE_NAVIGATION_I_NAVIGATION_PANEL_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Navigation {

::uInterfaceType* INavigationPanel__typeof();

struct INavigationPanel
{
    ::app::Uno::Float2(*__fp_get_ActualSize)(void*);
    bool(*__fp_get_HasChildren)(void*);
    int(*__fp_get_ChildCount)(void*);
    bool(*__fp_ContainsChild)(void*, ::app::Fuse::Node*);
    void(*__fp_AddChildAt)(void*, int, ::app::Fuse::Node*);
    void(*__fp_RemoveChildAt)(void*, int);
    ::app::Fuse::Node*(*__fp_GetChild)(void*, int);
    void(*__fp_add_ChildAdded)(void*, ::uDelegate*);
    void(*__fp_remove_ChildAdded)(void*, ::uDelegate*);
    void(*__fp_add_ChildRemoved)(void*, ::uDelegate*);
    void(*__fp_remove_ChildRemoved)(void*, ::uDelegate*);
    void(*__fp_add_Resized)(void*, ::uDelegate*);
    void(*__fp_remove_Resized)(void*, ::uDelegate*);
    void(*__fp_add_Update)(void*, ::uDelegate*);
    void(*__fp_remove_Update)(void*, ::uDelegate*);

    static ::app::Uno::Float2 ActualSize(::uObject* __this);
    static bool HasChildren(::uObject* __this) { return ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_get_HasChildren((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static int ChildCount(::uObject* __this) { return ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_get_ChildCount((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static bool ContainsChild(::uObject* __this, ::app::Fuse::Node* n) { return ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_ContainsChild((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), n); }
    static void AddChildAt(::uObject* __this, int index, ::app::Fuse::Node* n) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_AddChildAt((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), index, n); }
    static void RemoveChildAt(::uObject* __this, int index) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_RemoveChildAt((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), index); }
    static ::app::Fuse::Node* GetChild(::uObject* __this, int index) { return ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_GetChild((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), index); }
    static void add_ChildAdded(::uObject* __this, ::uDelegate* value) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_add_ChildAdded((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), value); }
    static void remove_ChildAdded(::uObject* __this, ::uDelegate* value) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_remove_ChildAdded((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), value); }
    static void add_ChildRemoved(::uObject* __this, ::uDelegate* value) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_add_ChildRemoved((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), value); }
    static void remove_ChildRemoved(::uObject* __this, ::uDelegate* value) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_remove_ChildRemoved((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), value); }
    static void add_Resized(::uObject* __this, ::uDelegate* value) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_add_Resized((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), value); }
    static void remove_Resized(::uObject* __this, ::uDelegate* value) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_remove_Resized((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), value); }
    static void add_Update(::uObject* __this, ::uDelegate* value) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_add_Update((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), value); }
    static void remove_Update(::uObject* __this, ::uDelegate* value) { ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_remove_Update((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Navigation {

inline ::app::Uno::Float2 INavigationPanel::ActualSize(::uObject* __this) { return ((INavigationPanel*)uGetInterfacePtr(__this, INavigationPanel__typeof()))->__fp_get_ActualSize((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }

}}}


#endif
