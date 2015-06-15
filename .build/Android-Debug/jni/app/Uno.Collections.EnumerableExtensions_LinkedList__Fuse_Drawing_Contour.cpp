// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Contour.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_Contour.h>

namespace app {
namespace Uno {
namespace Collections {

EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__uType* EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__typeof()
{
    static EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Fuse.Drawing.Contour>", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(EnumerableExtensions_LinkedList__Fuse_Drawing_Contour, Item);
        type->StrongRefOffsets[1] = offsetof(EnumerableExtensions_LinkedList__Fuse_Drawing_Contour, Next);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Item";
        type->StrongRefNames[1] = "Next";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void EnumerableExtensions_LinkedList__Fuse_Drawing_Contour___ObjInit(EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* __this, ::app::Fuse::Drawing::Contour* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::app::Fuse::Drawing::Contour* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* next)
{
    EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* inst = (::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Contour*)::uAllocObject(sizeof(::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Contour), ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

}}}
