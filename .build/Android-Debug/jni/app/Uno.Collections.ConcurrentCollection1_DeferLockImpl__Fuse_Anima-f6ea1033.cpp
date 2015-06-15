// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.ConcurrentCollection__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Collections.ConcurrentCollection1_DeferLockImpl__Fuse_Anima-f6ea1033.h>

namespace app {
namespace Uno {
namespace Collections {

ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__uType* ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__typeof()
{
    static ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__uType*)::uAllocClassType(sizeof(ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__uType), "Uno.Collections.ConcurrentCollection1_DeferLockImpl<Fuse.Animations.IMixerMaster>", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_Dispose = (void(*)(void*))ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__Dispose;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster, _collection);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_collection";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__Dispose(ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster* __this)
{
    ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(__this->_collection)->EndDefer();
}

void ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster___ObjInit(ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster* __this, ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster* c)
{
    __this->_collection = c;
}

ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster* ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__New_1(::uStatic* __this, ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster* c)
{
    ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster* inst = (::app::Uno::Collections::ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster*)::uAllocObject(sizeof(::app::Uno::Collections::ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster), ::app::Uno::Collections::ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__typeof());
    inst->_ObjInit(c);
    return inst;
}

}}}
