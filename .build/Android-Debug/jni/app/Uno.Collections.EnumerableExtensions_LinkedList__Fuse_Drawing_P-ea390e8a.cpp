// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.PolygonDrawable.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_P-ea390e8a.h>

namespace app {
namespace Uno {
namespace Collections {

EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__uType* EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__typeof()
{
    static EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Fuse.Drawing.PolygonDrawable>", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable, Item);
        type->StrongRefOffsets[1] = offsetof(EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable, Next);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Item";
        type->StrongRefNames[1] = "Next";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable___ObjInit(EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* __this, ::app::Fuse::Drawing::PolygonDrawable* item, EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__New_1(::uStatic* __this, ::app::Fuse::Drawing::PolygonDrawable* item, EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* next)
{
    EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* inst = (::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable*)::uAllocObject(sizeof(::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable), ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

}}}
