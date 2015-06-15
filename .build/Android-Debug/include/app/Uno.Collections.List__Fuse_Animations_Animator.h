// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_ANIMATOR_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_ANIMATOR_H__

#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Animator; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_Animator; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_Animator;

struct List__Fuse_Animations_Animator__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Animations_Animator __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator __interface_1;
};

List__Fuse_Animations_Animator__uType* List__Fuse_Animations_Animator__typeof();

int List__Fuse_Animations_Animator__get_Count(List__Fuse_Animations_Animator* __this);
::app::Fuse::Animations::Animator* List__Fuse_Animations_Animator__get_Item(List__Fuse_Animations_Animator* __this, int index);
void List__Fuse_Animations_Animator__set_Item(List__Fuse_Animations_Animator* __this, int index, ::app::Fuse::Animations::Animator* value);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_Animator List__Fuse_Animations_Animator__GetEnumerator(List__Fuse_Animations_Animator* __this);
void List__Fuse_Animations_Animator__BoundsCheck(List__Fuse_Animations_Animator* __this, int index);
void List__Fuse_Animations_Animator__EnsureCapacity(List__Fuse_Animations_Animator* __this);
void List__Fuse_Animations_Animator__Add(List__Fuse_Animations_Animator* __this, ::app::Fuse::Animations::Animator* item);
void List__Fuse_Animations_Animator___ObjInit(List__Fuse_Animations_Animator* __this);
List__Fuse_Animations_Animator* List__Fuse_Animations_Animator__New_1(::uStatic* __this);

struct List__Fuse_Animations_Animator : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_Animator GetEnumerator();
    void BoundsCheck(int index) { List__Fuse_Animations_Animator__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Animations_Animator__EnsureCapacity(this); }
    void Add(::app::Fuse::Animations::Animator* item) { List__Fuse_Animations_Animator__Add(this, item); }
    void _ObjInit() { List__Fuse_Animations_Animator___ObjInit(this); }
    int Count() { return List__Fuse_Animations_Animator__get_Count(this); }
    ::app::Fuse::Animations::Animator* Item(int index) { return List__Fuse_Animations_Animator__get_Item(this, index); }
    void Item(int index, ::app::Fuse::Animations::Animator* value) { List__Fuse_Animations_Animator__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_Animator.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_Animator List__Fuse_Animations_Animator::GetEnumerator() { return List__Fuse_Animations_Animator__GetEnumerator(this); }

}}}


#endif
