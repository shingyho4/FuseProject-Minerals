// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_PROFILE_CLIENT_H__
#define __APP_FUSE_I_PROFILE_CLIENT_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Fuse {

::uInterfaceType* IProfileClient__typeof();

struct IProfileClient
{
    void(*__fp_Write)(void*, ::app::Uno::Buffer*, int);

    static void Write(::uObject* __this, ::app::Uno::Buffer* data, int count) { ((IProfileClient*)uGetInterfacePtr(__this, IProfileClient__typeof()))->__fp_Write((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), data, count); }
};

}}

#include <app/Uno.Int.h>

namespace app {
namespace Fuse {

}}


#endif
