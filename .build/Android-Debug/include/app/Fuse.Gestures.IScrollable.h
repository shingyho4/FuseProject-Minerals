// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_I_SCROLLABLE_H__
#define __APP_FUSE_GESTURES_I_SCROLLABLE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Gestures {

::uInterfaceType* IScrollable__typeof();

struct IScrollable
{
    ::app::Uno::Float2(*__fp_get_ScrollPosition)(void*);
    void(*__fp_set_ScrollPosition)(void*, ::app::Uno::Float2);
    int(*__fp_get_AllowedScrollDirections)(void*);
    void(*__fp_set_AllowedScrollDirections)(void*, int);
    ::app::Uno::Float2(*__fp_get_MaxScroll)(void*);
    ::app::Uno::Float2(*__fp_get_MinScroll)(void*);
    ::app::Uno::Float2(*__fp_GetNodeScrollPosition)(void*, ::app::Fuse::Node*);
    void(*__fp_Goto)(void*, ::app::Uno::Float2);
    void(*__fp_add_RequestBringIntoView)(void*, ::uDelegate*);
    void(*__fp_remove_RequestBringIntoView)(void*, ::uDelegate*);

    static ::app::Uno::Float2 ScrollPosition(::uObject* __this);
    static void ScrollPosition(::uObject* __this, ::app::Uno::Float2 value);
    static int AllowedScrollDirections(::uObject* __this) { return ((IScrollable*)uGetInterfacePtr(__this, IScrollable__typeof()))->__fp_get_AllowedScrollDirections((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static void AllowedScrollDirections(::uObject* __this, int value) { ((IScrollable*)uGetInterfacePtr(__this, IScrollable__typeof()))->__fp_set_AllowedScrollDirections((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), value); }
    static ::app::Uno::Float2 MaxScroll(::uObject* __this);
    static ::app::Uno::Float2 MinScroll(::uObject* __this);
    static ::app::Uno::Float2 GetNodeScrollPosition(::uObject* __this, ::app::Fuse::Node* n);
    static void Goto(::uObject* __this, ::app::Uno::Float2 position);
    static void add_RequestBringIntoView(::uObject* __this, ::uDelegate* value) { ((IScrollable*)uGetInterfacePtr(__this, IScrollable__typeof()))->__fp_add_RequestBringIntoView((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), value); }
    static void remove_RequestBringIntoView(::uObject* __this, ::uDelegate* value) { ((IScrollable*)uGetInterfacePtr(__this, IScrollable__typeof()))->__fp_remove_RequestBringIntoView((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), value); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Gestures {

inline ::app::Uno::Float2 IScrollable::ScrollPosition(::uObject* __this) { return ((IScrollable*)uGetInterfacePtr(__this, IScrollable__typeof()))->__fp_get_ScrollPosition((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
inline void IScrollable::ScrollPosition(::uObject* __this, ::app::Uno::Float2 value) { ((IScrollable*)uGetInterfacePtr(__this, IScrollable__typeof()))->__fp_set_ScrollPosition((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), value); }
inline ::app::Uno::Float2 IScrollable::MaxScroll(::uObject* __this) { return ((IScrollable*)uGetInterfacePtr(__this, IScrollable__typeof()))->__fp_get_MaxScroll((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
inline ::app::Uno::Float2 IScrollable::MinScroll(::uObject* __this) { return ((IScrollable*)uGetInterfacePtr(__this, IScrollable__typeof()))->__fp_get_MinScroll((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
inline ::app::Uno::Float2 IScrollable::GetNodeScrollPosition(::uObject* __this, ::app::Fuse::Node* n) { return ((IScrollable*)uGetInterfacePtr(__this, IScrollable__typeof()))->__fp_GetNodeScrollPosition((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), n); }
inline void IScrollable::Goto(::uObject* __this, ::app::Uno::Float2 position) { ((IScrollable*)uGetInterfacePtr(__this, IScrollable__typeof()))->__fp_Goto((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), position); }

}}}


#endif
