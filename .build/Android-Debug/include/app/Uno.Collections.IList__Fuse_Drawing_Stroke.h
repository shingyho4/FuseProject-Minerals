// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_LIST__FUSE_DRAWING_STROKE_H__
#define __APP_UNO_COLLECTIONS_I_LIST__FUSE_DRAWING_STROKE_H__

#include <app/Uno.Collections.ICollection__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Stroke.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IList__Fuse_Drawing_Stroke__typeof();

struct IList__Fuse_Drawing_Stroke
{
    ::app::Fuse::Drawing::Stroke*(*__fp_get_Item)(void*, int);

    static ::app::Fuse::Drawing::Stroke* Item(::uObject* __this, int index) { return ((IList__Fuse_Drawing_Stroke*)uGetInterfacePtr(__this, IList__Fuse_Drawing_Stroke__typeof()))->__fp_get_Item((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), index); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
