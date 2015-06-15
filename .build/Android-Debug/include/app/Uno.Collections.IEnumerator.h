// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__typeof();

struct IEnumerator
{
    bool(*__fp_MoveNext)(void*);

    static bool MoveNext(::uObject* __this) { return ((IEnumerator*)uGetInterfacePtr(__this, IEnumerator__typeof()))->__fp_MoveNext((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
