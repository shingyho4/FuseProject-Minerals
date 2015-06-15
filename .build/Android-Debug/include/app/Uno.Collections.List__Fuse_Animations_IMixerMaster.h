// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_I_MIXER_MASTER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_I_MIXER_MASTER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_IMixerMaster; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_IMixerMaster;

struct List__Fuse_Animations_IMixerMaster__uType : ::uClassType
{
};

List__Fuse_Animations_IMixerMaster__uType* List__Fuse_Animations_IMixerMaster__typeof();

int List__Fuse_Animations_IMixerMaster__get_Count(List__Fuse_Animations_IMixerMaster* __this);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_IMixerMaster List__Fuse_Animations_IMixerMaster__GetEnumerator(List__Fuse_Animations_IMixerMaster* __this);
void List__Fuse_Animations_IMixerMaster__BoundsCheck(List__Fuse_Animations_IMixerMaster* __this, int index);
void List__Fuse_Animations_IMixerMaster__EnsureCapacity(List__Fuse_Animations_IMixerMaster* __this);
void List__Fuse_Animations_IMixerMaster__Add(List__Fuse_Animations_IMixerMaster* __this, ::uObject* item);
bool List__Fuse_Animations_IMixerMaster__Remove(List__Fuse_Animations_IMixerMaster* __this, ::uObject* item);
void List__Fuse_Animations_IMixerMaster__RemoveAt(List__Fuse_Animations_IMixerMaster* __this, int index);
void List__Fuse_Animations_IMixerMaster__Clear(List__Fuse_Animations_IMixerMaster* __this);
bool List__Fuse_Animations_IMixerMaster__Contains(List__Fuse_Animations_IMixerMaster* __this, ::uObject* item);
void List__Fuse_Animations_IMixerMaster___ObjInit(List__Fuse_Animations_IMixerMaster* __this);
List__Fuse_Animations_IMixerMaster* List__Fuse_Animations_IMixerMaster__New_1(::uStatic* __this);

struct List__Fuse_Animations_IMixerMaster : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_IMixerMaster GetEnumerator();
    void BoundsCheck(int index) { List__Fuse_Animations_IMixerMaster__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Animations_IMixerMaster__EnsureCapacity(this); }
    void Add(::uObject* item) { List__Fuse_Animations_IMixerMaster__Add(this, item); }
    bool Remove(::uObject* item) { return List__Fuse_Animations_IMixerMaster__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_IMixerMaster__RemoveAt(this, index); }
    void Clear() { List__Fuse_Animations_IMixerMaster__Clear(this); }
    bool Contains(::uObject* item) { return List__Fuse_Animations_IMixerMaster__Contains(this, item); }
    void _ObjInit() { List__Fuse_Animations_IMixerMaster___ObjInit(this); }
    int Count() { return List__Fuse_Animations_IMixerMaster__get_Count(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_IMixerMaster List__Fuse_Animations_IMixerMaster::GetEnumerator() { return List__Fuse_Animations_IMixerMaster__GetEnumerator(this); }

}}}


#endif
