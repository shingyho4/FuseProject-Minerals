// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_I_AUTO_DISPOSABLE_H__
#define __APP_FUSE_RESOURCES_I_AUTO_DISPOSABLE_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Resources {

::uInterfaceType* IAutoDisposable__typeof();

struct IAutoDisposable
{
    bool(*__fp_get_ShouldDispose)(void*);

    static bool ShouldDispose(::uObject* __this) { return ((IAutoDisposable*)uGetInterfacePtr(__this, IAutoDisposable__typeof()))->__fp_get_ShouldDispose((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Resources {

}}}


#endif
