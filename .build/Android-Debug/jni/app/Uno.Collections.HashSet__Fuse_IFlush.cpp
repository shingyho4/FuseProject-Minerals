// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.IFlush.h>
#include <app/Uno.Collections.Dictionary__Fuse_IFlush__bool.h>
#include <app/Uno.Collections.HashSet__Fuse_IFlush.h>

namespace app {
namespace Uno {
namespace Collections {

HashSet__Fuse_IFlush__uType* HashSet__Fuse_IFlush__typeof()
{
    static HashSet__Fuse_IFlush__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HashSet__Fuse_IFlush__uType*)::uAllocClassType(sizeof(HashSet__Fuse_IFlush__uType), "Uno.Collections.HashSet<Fuse.IFlush>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(HashSet__Fuse_IFlush, _map);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_map";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool HashSet__Fuse_IFlush__Add(HashSet__Fuse_IFlush* __this, ::uObject* item)
{
    bool result = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_map)->ContainsKey(item);
    ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_map)->Item(item, true);
    return result;
}

void HashSet__Fuse_IFlush__Clear(HashSet__Fuse_IFlush* __this)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_map)->Clear();
}

::app::Uno::Collections::HashSet1_Enumerator__Fuse_IFlush HashSet__Fuse_IFlush__GetEnumerator(HashSet__Fuse_IFlush* __this)
{
    return ::app::Uno::Collections::HashSet1_Enumerator__Fuse_IFlush__New_1(NULL, __this->_map);
}

void HashSet__Fuse_IFlush___ObjInit(HashSet__Fuse_IFlush* __this)
{
    __this->_map = ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool__New_1(NULL);
}

HashSet__Fuse_IFlush* HashSet__Fuse_IFlush__New_1(::uStatic* __this)
{
    HashSet__Fuse_IFlush* inst = (::app::Uno::Collections::HashSet__Fuse_IFlush*)::uAllocObject(sizeof(::app::Uno::Collections::HashSet__Fuse_IFlush), ::app::Uno::Collections::HashSet__Fuse_IFlush__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
