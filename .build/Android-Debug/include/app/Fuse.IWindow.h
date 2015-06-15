// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_WINDOW_H__
#define __APP_FUSE_I_WINDOW_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {

::uInterfaceType* IWindow__typeof();

struct IWindow
{
    ::app::Uno::Float2(*__fp_get_Size)(void*);
    float(*__fp_get_Density)(void*);
    float(*__fp_get_PPIZoomMultiplier)(void*);
    bool(*__fp_get_IsOnscreenKeyboardVisible)(void*);
    ::app::Uno::Float2(*__fp_get_OnscreenKeyboardSize)(void*);

    static ::app::Uno::Float2 Size(::uObject* __this);
    static float Density(::uObject* __this) { return ((IWindow*)uGetInterfacePtr(__this, IWindow__typeof()))->__fp_get_Density((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static float PPIZoomMultiplier(::uObject* __this) { return ((IWindow*)uGetInterfacePtr(__this, IWindow__typeof()))->__fp_get_PPIZoomMultiplier((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static bool IsOnscreenKeyboardVisible(::uObject* __this) { return ((IWindow*)uGetInterfacePtr(__this, IWindow__typeof()))->__fp_get_IsOnscreenKeyboardVisible((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static ::app::Uno::Float2 OnscreenKeyboardSize(::uObject* __this);
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float2 IWindow::Size(::uObject* __this) { return ((IWindow*)uGetInterfacePtr(__this, IWindow__typeof()))->__fp_get_Size((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
inline ::app::Uno::Float2 IWindow::OnscreenKeyboardSize(::uObject* __this) { return ((IWindow*)uGetInterfacePtr(__this, IWindow__typeof()))->__fp_get_OnscreenKeyboardSize((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }

}}


#endif
