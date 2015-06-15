// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_CAMERA_H__
#define __APP_FUSE_I_CAMERA_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {

::uInterfaceType* ICamera__typeof();

struct ICamera
{
    ::app::Uno::Float4x4(*__fp_get_ProjectionTransform)(void*);
    ::app::Uno::Float4x4(*__fp_get_ViewProjectionTransform)(void*);
    ::app::Uno::Float4x4(*__fp_get_ViewTransform)(void*);
    ::app::Uno::Float3(*__fp_get_WorldPosition)(void*);

    static ::app::Uno::Float4x4 ProjectionTransform(::uObject* __this);
    static ::app::Uno::Float4x4 ViewProjectionTransform(::uObject* __this);
    static ::app::Uno::Float4x4 ViewTransform(::uObject* __this);
    static ::app::Uno::Float3 WorldPosition(::uObject* __this);
};

}}

#include <app/Uno.Float3.h>
#include <app/Uno.Float4x4.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float4x4 ICamera::ProjectionTransform(::uObject* __this) { return ((ICamera*)uGetInterfacePtr(__this, ICamera__typeof()))->__fp_get_ProjectionTransform((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
inline ::app::Uno::Float4x4 ICamera::ViewProjectionTransform(::uObject* __this) { return ((ICamera*)uGetInterfacePtr(__this, ICamera__typeof()))->__fp_get_ViewProjectionTransform((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
inline ::app::Uno::Float4x4 ICamera::ViewTransform(::uObject* __this) { return ((ICamera*)uGetInterfacePtr(__this, ICamera__typeof()))->__fp_get_ViewTransform((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
inline ::app::Uno::Float3 ICamera::WorldPosition(::uObject* __this) { return ((ICamera*)uGetInterfacePtr(__this, ICamera__typeof()))->__fp_get_WorldPosition((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }

}}


#endif
