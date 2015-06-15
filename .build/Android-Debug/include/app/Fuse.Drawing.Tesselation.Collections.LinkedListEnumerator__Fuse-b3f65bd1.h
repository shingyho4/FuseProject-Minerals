// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_LINKED_LIST_ENUMERATOR__FUSE_B3F65BD1_H__
#define __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_LINKED_LIST_ENUMERATOR__FUSE_B3F65BD1_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Vertex.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex; } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Vertex; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

struct LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex;

struct LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Vertex __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__uType* LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__typeof();

::app::Fuse::Drawing::Tesselation::Vertex* LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__get_Current(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex* __this);
void LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__Dispose(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex* __this);
bool LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__MoveNext(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex* __this);
void LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex___ObjInit(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex* __this, ::app::Fuse::Drawing::Tesselation::Vertex* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex* enumerable);
LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex* LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex* enumerable);

struct LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex*> _enumerable;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Vertex*> _next;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Vertex*> _current;

    void Dispose() { LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__Dispose(this); }
    bool MoveNext() { return LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__MoveNext(this); }
    void _ObjInit(::app::Fuse::Drawing::Tesselation::Vertex* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex* enumerable) { LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex___ObjInit(this, first, enumerable); }
    ::app::Fuse::Drawing::Tesselation::Vertex* Current() { return LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__get_Current(this); }
};

}}}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

}}}}}


#endif
