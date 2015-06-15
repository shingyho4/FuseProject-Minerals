// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__FUSE_DRAWING_P_EA390E8A_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__FUSE_DRAWING_P_EA390E8A_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PolygonDrawable; } } }

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable;

struct EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__uType* EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__typeof();

void EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable___ObjInit(EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* __this, ::app::Fuse::Drawing::PolygonDrawable* item, EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* next);
EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__New_1(::uStatic* __this, ::app::Fuse::Drawing::PolygonDrawable* item, EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* next);

struct EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::PolygonDrawable*> Item;
    ::uStrong< EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable*> Next;

    void _ObjInit(::app::Fuse::Drawing::PolygonDrawable* item, EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* next) { EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable___ObjInit(this, item, next); }
};

}}}


#endif
