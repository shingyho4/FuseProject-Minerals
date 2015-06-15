// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_BUNDLE_FILE_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_BUNDLE_FILE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct BundleFile; } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Uno_BundleFile__typeof();

struct IEnumerator__Uno_BundleFile
{
    ::app::Uno::BundleFile*(*__fp_get_Current)(void*);

    static ::app::Uno::BundleFile* Current(::uObject* __this) { return ((IEnumerator__Uno_BundleFile*)uGetInterfacePtr(__this, IEnumerator__Uno_BundleFile__typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
};

}}}


#endif
