// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_CONCURRENT_COLLECTION1_DEFER_LOCK_IMPL__FUSE_ANIMA_F6EA1033_H__
#define __APP_UNO_COLLECTIONS_CONCURRENT_COLLECTION1_DEFER_LOCK_IMPL__FUSE_ANIMA_F6EA1033_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct ConcurrentCollection__Fuse_Animations_IMixerMaster; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster;

struct ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__uType* ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__typeof();

void ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__Dispose(ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster* __this);
void ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster___ObjInit(ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster* __this, ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster* c);
ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster* ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__New_1(::uStatic* __this, ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster* c);

struct ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster : ::uObject
{
    ::uStrong< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*> _collection;

    void Dispose() { ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__Dispose(this); }
    void _ObjInit(::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster* c) { ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster___ObjInit(this, c); }
};

}}}


#endif
