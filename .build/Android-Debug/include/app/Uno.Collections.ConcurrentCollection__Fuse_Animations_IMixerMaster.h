// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_CONCURRENT_COLLECTION__FUSE_ANIMATIONS_I_MIXER_MASTER_H__
#define __APP_UNO_COLLECTIONS_CONCURRENT_COLLECTION__FUSE_ANIMATIONS_I_MIXER_MASTER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_IMixerMaster; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ConcurrentCollection__Fuse_Animations_IMixerMaster;

struct ConcurrentCollection__Fuse_Animations_IMixerMaster__uType : ::uClassType
{
};

ConcurrentCollection__Fuse_Animations_IMixerMaster__uType* ConcurrentCollection__Fuse_Animations_IMixerMaster__typeof();

int ConcurrentCollection__Fuse_Animations_IMixerMaster__get_Count(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this);
void ConcurrentCollection__Fuse_Animations_IMixerMaster__DeferChanges(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this);
void ConcurrentCollection__Fuse_Animations_IMixerMaster__EndDefer(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this);
void ConcurrentCollection__Fuse_Animations_IMixerMaster__Add(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this, ::uObject* item);
bool ConcurrentCollection__Fuse_Animations_IMixerMaster__Remove(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this, ::uObject* item);
::uObject* ConcurrentCollection__Fuse_Animations_IMixerMaster__GetEnumerator(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this);
::uObject* ConcurrentCollection__Fuse_Animations_IMixerMaster__DeferLock(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this);
void ConcurrentCollection__Fuse_Animations_IMixerMaster___ObjInit(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this);
ConcurrentCollection__Fuse_Animations_IMixerMaster* ConcurrentCollection__Fuse_Animations_IMixerMaster__New_1(::uStatic* __this);

struct ConcurrentCollection__Fuse_Animations_IMixerMaster : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*> _back;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*> _add;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*> _remove;
    bool _defer;
    ::uStrong< ::app::Uno::Collections::ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster*> _lockImpl;

    void DeferChanges() { ConcurrentCollection__Fuse_Animations_IMixerMaster__DeferChanges(this); }
    void EndDefer() { ConcurrentCollection__Fuse_Animations_IMixerMaster__EndDefer(this); }
    void Add(::uObject* item) { ConcurrentCollection__Fuse_Animations_IMixerMaster__Add(this, item); }
    bool Remove(::uObject* item) { return ConcurrentCollection__Fuse_Animations_IMixerMaster__Remove(this, item); }
    ::uObject* GetEnumerator() { return ConcurrentCollection__Fuse_Animations_IMixerMaster__GetEnumerator(this); }
    ::uObject* DeferLock() { return ConcurrentCollection__Fuse_Animations_IMixerMaster__DeferLock(this); }
    void _ObjInit() { ConcurrentCollection__Fuse_Animations_IMixerMaster___ObjInit(this); }
    int Count() { return ConcurrentCollection__Fuse_Animations_IMixerMaster__get_Count(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
