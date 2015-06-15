// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_DRAWING_BRUSH_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__FUSE_DRAWING_BRUSH_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Brush.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Fuse_Drawing_Brush__typeof();

struct ICollection__Fuse_Drawing_Brush
{
    void(*__fp_Clear)(void*);
    void(*__fp_Add)(void*, ::app::Fuse::Drawing::Brush*);

    static void Clear(::uObject* __this) { ((ICollection__Fuse_Drawing_Brush*)uGetInterfacePtr(__this, ICollection__Fuse_Drawing_Brush__typeof()))->__fp_Clear((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static void Add(::uObject* __this, ::app::Fuse::Drawing::Brush* item) { ((ICollection__Fuse_Drawing_Brush*)uGetInterfacePtr(__this, ICollection__Fuse_Drawing_Brush__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), item); }
};

}}}


#endif
