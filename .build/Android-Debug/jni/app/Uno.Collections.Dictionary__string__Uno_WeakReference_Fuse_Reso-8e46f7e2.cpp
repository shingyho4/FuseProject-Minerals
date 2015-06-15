// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.Dictionary__string__Uno_WeakReference_Fuse_Reso-8e46f7e2.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType* Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof()
{
    static Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType*)::uAllocClassType(sizeof(Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType), "Uno.Collections.Dictionary<string,Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_, _buckets);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_buckets";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl____ObjInit(Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___New_1(::uStatic* __this)
{
    Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* inst = (::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_*)::uAllocObject(sizeof(::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_), ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof());
    inst->_ObjInit();
    return inst;
}

}}}
