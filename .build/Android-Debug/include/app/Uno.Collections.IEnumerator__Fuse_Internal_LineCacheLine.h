// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__FUSE_INTERNAL_LINE_CACHE_LINE_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__FUSE_INTERNAL_LINE_CACHE_LINE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct LineCacheLine; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Fuse_Internal_LineCacheLine__typeof();

struct IEnumerator__Fuse_Internal_LineCacheLine
{
    ::app::Fuse::Internal::LineCacheLine*(*__fp_get_Current)(void*);

    static ::app::Fuse::Internal::LineCacheLine* Current(::uObject* __this) { return ((IEnumerator__Fuse_Internal_LineCacheLine*)uGetInterfacePtr(__this, IEnumerator__Fuse_Internal_LineCacheLine__typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
};

}}}


#endif
