// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__FUSE_DRAWING_TESSELATION_HALF_EDGE_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__FUSE_DRAWING_TESSELATION_HALF_EDGE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct HalfEdge; } } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Fuse_Drawing_Tesselation_HalfEdge__typeof();

struct IEnumerator__Fuse_Drawing_Tesselation_HalfEdge
{
    ::app::Fuse::Drawing::Tesselation::HalfEdge*(*__fp_get_Current)(void*);

    static ::app::Fuse::Drawing::Tesselation::HalfEdge* Current(::uObject* __this) { return ((IEnumerator__Fuse_Drawing_Tesselation_HalfEdge*)uGetInterfacePtr(__this, IEnumerator__Fuse_Drawing_Tesselation_HalfEdge__typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
};

}}}


#endif
