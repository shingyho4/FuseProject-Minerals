// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_LINKED_LIST_ENUMERABLE__FUSE_6FA82EFB_H__
#define __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_LINKED_LIST_ENUMERABLE__FUSE_6FA82EFB_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct HalfEdge; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

struct LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge;

struct LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge __interface_0;
    ::app::Fuse::Drawing::Tesselation::HalfEdge*(*__fp_GetNext)(LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge*, ::app::Fuse::Drawing::Tesselation::HalfEdge*);
};

LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__uType* LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof();

::uObject* LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__GetEnumerator(LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge* __this);
void LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge___ObjInit(LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* first);

struct LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Tesselation::HalfEdge*> _first;

    ::app::Fuse::Drawing::Tesselation::HalfEdge* GetNext(::app::Fuse::Drawing::Tesselation::HalfEdge* current) { return (((LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__uType*)this->__obj_type)->__fp_GetNext)(this, current); }
    ::uObject* GetEnumerator() { return LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__GetEnumerator(this); }
    void _ObjInit(::app::Fuse::Drawing::Tesselation::HalfEdge* first) { LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge___ObjInit(this, first); }
};

}}}}}


#endif
