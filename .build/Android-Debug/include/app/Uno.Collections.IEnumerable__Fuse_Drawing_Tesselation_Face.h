// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERABLE__FUSE_DRAWING_TESSELATION_FACE_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERABLE__FUSE_DRAWING_TESSELATION_FACE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerable__Fuse_Drawing_Tesselation_Face__typeof();

struct IEnumerable__Fuse_Drawing_Tesselation_Face
{
    ::uObject*(*__fp_GetEnumerator)(void*);

    static ::uObject* GetEnumerator(::uObject* __this) { return ((IEnumerable__Fuse_Drawing_Tesselation_Face*)uGetInterfacePtr(__this, IEnumerable__Fuse_Drawing_Tesselation_Face__typeof()))->__fp_GetEnumerator((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
};

}}}


#endif
