// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__UNO_BUNDLE_FILE_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__UNO_BUNDLE_FILE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct BundleFile; } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Uno_BundleFile__typeof();

struct ICollection__Uno_BundleFile
{
    void(*__fp_Add)(void*, ::app::Uno::BundleFile*);

    static void Add(::uObject* __this, ::app::Uno::BundleFile* item) { ((ICollection__Uno_BundleFile*)uGetInterfacePtr(__this, ICollection__Uno_BundleFile__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), item); }
};

}}}


#endif
