// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Collections.ConcurrentCollection__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Collections.ConcurrentCollection1_DeferLockImpl__Fuse_Anima-f6ea1033.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Collections.List__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.IDisposable.h>

namespace app {
namespace Uno {
namespace Collections {

ConcurrentCollection__Fuse_Animations_IMixerMaster__uType* ConcurrentCollection__Fuse_Animations_IMixerMaster__typeof()
{
    static ConcurrentCollection__Fuse_Animations_IMixerMaster__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ConcurrentCollection__Fuse_Animations_IMixerMaster__uType*)::uAllocClassType(sizeof(ConcurrentCollection__Fuse_Animations_IMixerMaster__uType), "Uno.Collections.ConcurrentCollection<Fuse.Animations.IMixerMaster>", ::uObject__typeof(), 0, 4);
        type->StrongRefOffsets[0] = offsetof(ConcurrentCollection__Fuse_Animations_IMixerMaster, _back);
        type->StrongRefOffsets[1] = offsetof(ConcurrentCollection__Fuse_Animations_IMixerMaster, _add);
        type->StrongRefOffsets[2] = offsetof(ConcurrentCollection__Fuse_Animations_IMixerMaster, _remove);
        type->StrongRefOffsets[3] = offsetof(ConcurrentCollection__Fuse_Animations_IMixerMaster, _lockImpl);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_back";
        type->StrongRefNames[1] = "_add";
        type->StrongRefNames[2] = "_remove";
        type->StrongRefNames[3] = "_lockImpl";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int ConcurrentCollection__Fuse_Animations_IMixerMaster__get_Count(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this)
{
    return (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_back)->Count() + ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_add)->Count()) - ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_remove)->Count();
}

void ConcurrentCollection__Fuse_Animations_IMixerMaster__DeferChanges(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this)
{
    __this->_defer = true;
}

void ConcurrentCollection__Fuse_Animations_IMixerMaster__EndDefer(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this)
{
    __this->_defer = false;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Animations_IMixerMaster enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_remove)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::uObject* r = enum_123.Current();
        ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_back)->Remove(r);
    }

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Animations_IMixerMaster enum_124 = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_add)->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::uObject* a = enum_124.Current();
        ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_back)->Add(a);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_remove)->Clear();
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_add)->Clear();
}

void ConcurrentCollection__Fuse_Animations_IMixerMaster__Add(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this, ::uObject* item)
{
    if (__this->_defer)
    {
        ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_add)->Add(item);
    }
    else
    {
        ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_back)->Add(item);
    }
}

bool ConcurrentCollection__Fuse_Animations_IMixerMaster__Remove(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this, ::uObject* item)
{
    if (__this->_defer)
    {
        if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_add)->Remove(item))
        {
            return true;
        }

        if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_back)->Contains(item))
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_remove)->Add(item);
            return true;
        }

        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_back)->Remove(item);
}

::uObject* ConcurrentCollection__Fuse_Animations_IMixerMaster__GetEnumerator(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Animations_IMixerMaster__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_back)->GetEnumerator());
}

::uObject* ConcurrentCollection__Fuse_Animations_IMixerMaster__DeferLock(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this)
{
    if (__this->_lockImpl == NULL)
    {
        __this->_lockImpl = ::app::Uno::Collections::ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__New_1(NULL, __this);
    }

    __this->DeferChanges();
    return (::uObject*)__this->_lockImpl;
}

void ConcurrentCollection__Fuse_Animations_IMixerMaster___ObjInit(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this)
{
    __this->_back = ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster__New_1(NULL);
    __this->_add = ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster__New_1(NULL);
    __this->_remove = ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster__New_1(NULL);
}

ConcurrentCollection__Fuse_Animations_IMixerMaster* ConcurrentCollection__Fuse_Animations_IMixerMaster__New_1(::uStatic* __this)
{
    ConcurrentCollection__Fuse_Animations_IMixerMaster* inst = (::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*)::uAllocObject(sizeof(::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster), ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
