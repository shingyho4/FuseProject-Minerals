// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_PATH_GEOMETRY_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_PATH_GEOMETRY_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Drawing_PathGeometry;

struct List__Fuse_Drawing_PathGeometry__uType : ::uClassType
{
};

List__Fuse_Drawing_PathGeometry__uType* List__Fuse_Drawing_PathGeometry__typeof();

int List__Fuse_Drawing_PathGeometry__get_Count(List__Fuse_Drawing_PathGeometry* __this);
::app::Fuse::Drawing::PathGeometry* List__Fuse_Drawing_PathGeometry__get_Item(List__Fuse_Drawing_PathGeometry* __this, int index);
void List__Fuse_Drawing_PathGeometry__set_Item(List__Fuse_Drawing_PathGeometry* __this, int index, ::app::Fuse::Drawing::PathGeometry* value);
void List__Fuse_Drawing_PathGeometry__BoundsCheck(List__Fuse_Drawing_PathGeometry* __this, int index);
void List__Fuse_Drawing_PathGeometry__EnsureCapacity(List__Fuse_Drawing_PathGeometry* __this);
void List__Fuse_Drawing_PathGeometry__Add(List__Fuse_Drawing_PathGeometry* __this, ::app::Fuse::Drawing::PathGeometry* item);
void List__Fuse_Drawing_PathGeometry___ObjInit(List__Fuse_Drawing_PathGeometry* __this);
List__Fuse_Drawing_PathGeometry* List__Fuse_Drawing_PathGeometry__New_1(::uStatic* __this);

struct List__Fuse_Drawing_PathGeometry : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void BoundsCheck(int index) { List__Fuse_Drawing_PathGeometry__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Drawing_PathGeometry__EnsureCapacity(this); }
    void Add(::app::Fuse::Drawing::PathGeometry* item) { List__Fuse_Drawing_PathGeometry__Add(this, item); }
    void _ObjInit() { List__Fuse_Drawing_PathGeometry___ObjInit(this); }
    int Count() { return List__Fuse_Drawing_PathGeometry__get_Count(this); }
    ::app::Fuse::Drawing::PathGeometry* Item(int index) { return List__Fuse_Drawing_PathGeometry__get_Item(this, index); }
    void Item(int index, ::app::Fuse::Drawing::PathGeometry* value) { List__Fuse_Drawing_PathGeometry__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
