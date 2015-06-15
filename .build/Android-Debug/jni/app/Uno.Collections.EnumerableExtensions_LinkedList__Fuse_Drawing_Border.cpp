// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Border.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_Border.h>

namespace app {
namespace Uno {
namespace Collections {

EnumerableExtensions_LinkedList__Fuse_Drawing_Border__uType* EnumerableExtensions_LinkedList__Fuse_Drawing_Border__typeof()
{
    static EnumerableExtensions_LinkedList__Fuse_Drawing_Border__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EnumerableExtensions_LinkedList__Fuse_Drawing_Border__uType*)::uAllocClassType(sizeof(EnumerableExtensions_LinkedList__Fuse_Drawing_Border__uType), "Uno.Collections.EnumerableExtensions_LinkedList<Fuse.Drawing.Border>", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(EnumerableExtensions_LinkedList__Fuse_Drawing_Border, Item);
        type->StrongRefOffsets[1] = offsetof(EnumerableExtensions_LinkedList__Fuse_Drawing_Border, Next);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Item";
        type->StrongRefNames[1] = "Next";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void EnumerableExtensions_LinkedList__Fuse_Drawing_Border___ObjInit(EnumerableExtensions_LinkedList__Fuse_Drawing_Border* __this, ::app::Fuse::Drawing::Border* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Border* next)
{
    __this->Item = item;
    __this->Next = next;
}

EnumerableExtensions_LinkedList__Fuse_Drawing_Border* EnumerableExtensions_LinkedList__Fuse_Drawing_Border__New_1(::uStatic* __this, ::app::Fuse::Drawing::Border* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Border* next)
{
    EnumerableExtensions_LinkedList__Fuse_Drawing_Border* inst = (::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Border*)::uAllocObject(sizeof(::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Border), ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Border__typeof());
    inst->_ObjInit(item, next);
    return inst;
}

}}}
