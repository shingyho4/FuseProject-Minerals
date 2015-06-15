// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_LINKED_LIST_ENUMERATOR__FUSE_65DF8E74_H__
#define __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_LINKED_LIST_ENUMERATOR__FUSE_65DF8E74_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct LinkedListEnumerable__Fuse_Drawing_Tesselation_Face; } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Face; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

struct LinkedListEnumerator__Fuse_Drawing_Tesselation_Face;

struct LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__uType* LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__typeof();

::app::Fuse::Drawing::Tesselation::Face* LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__get_Current(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face* __this);
void LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__Dispose(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face* __this);
bool LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__MoveNext(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face* __this);
void LinkedListEnumerator__Fuse_Drawing_Tesselation_Face___ObjInit(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face* __this, ::app::Fuse::Drawing::Tesselation::Face* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Face* enumerable);
LinkedListEnumerator__Fuse_Drawing_Tesselation_Face* LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Face* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Face* enumerable);

struct LinkedListEnumerator__Fuse_Drawing_Tesselation_Face : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Face*> _enumerable;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Face*> _next;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Face*> _current;

    void Dispose() { LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__Dispose(this); }
    bool MoveNext() { return LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__MoveNext(this); }
    void _ObjInit(::app::Fuse::Drawing::Tesselation::Face* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Face* enumerable) { LinkedListEnumerator__Fuse_Drawing_Tesselation_Face___ObjInit(this, first, enumerable); }
    ::app::Fuse::Drawing::Tesselation::Face* Current() { return LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__get_Current(this); }
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
