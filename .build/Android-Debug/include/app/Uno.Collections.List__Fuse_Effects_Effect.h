// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_EFFECTS_EFFECT_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_EFFECTS_EFFECT_H__

#include <app/Uno.Collections.ICollection__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IList__Fuse_Effects_Effect.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Effects { struct Effect; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Effects_Effect; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Effects_Effect;

struct List__Fuse_Effects_Effect__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Effects_Effect __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Effects_Effect __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Effects_Effect __interface_2;
};

List__Fuse_Effects_Effect__uType* List__Fuse_Effects_Effect__typeof();

int List__Fuse_Effects_Effect__get_Count(List__Fuse_Effects_Effect* __this);
::app::Fuse::Effects::Effect* List__Fuse_Effects_Effect__get_Item(List__Fuse_Effects_Effect* __this, int index);
void List__Fuse_Effects_Effect__set_Item(List__Fuse_Effects_Effect* __this, int index, ::app::Fuse::Effects::Effect* value);
::app::Uno::Collections::List1_Enumerator__Fuse_Effects_Effect List__Fuse_Effects_Effect__GetEnumerator(List__Fuse_Effects_Effect* __this);
void List__Fuse_Effects_Effect__BoundsCheck(List__Fuse_Effects_Effect* __this, int index);
void List__Fuse_Effects_Effect__EnsureCapacity(List__Fuse_Effects_Effect* __this);
void List__Fuse_Effects_Effect__Add(List__Fuse_Effects_Effect* __this, ::app::Fuse::Effects::Effect* item);
bool List__Fuse_Effects_Effect__Remove(List__Fuse_Effects_Effect* __this, ::app::Fuse::Effects::Effect* item);
void List__Fuse_Effects_Effect__RemoveAt(List__Fuse_Effects_Effect* __this, int index);
void List__Fuse_Effects_Effect___ObjInit(List__Fuse_Effects_Effect* __this);
List__Fuse_Effects_Effect* List__Fuse_Effects_Effect__New_1(::uStatic* __this);
::uObject* List__Fuse_Effects_Effect__GetEnumerator_boxed(List__Fuse_Effects_Effect* __this);

struct List__Fuse_Effects_Effect : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::app::Uno::Collections::List1_Enumerator__Fuse_Effects_Effect GetEnumerator();
    void BoundsCheck(int index) { List__Fuse_Effects_Effect__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Effects_Effect__EnsureCapacity(this); }
    void Add(::app::Fuse::Effects::Effect* item) { List__Fuse_Effects_Effect__Add(this, item); }
    bool Remove(::app::Fuse::Effects::Effect* item) { return List__Fuse_Effects_Effect__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Effects_Effect__RemoveAt(this, index); }
    void _ObjInit() { List__Fuse_Effects_Effect___ObjInit(this); }
    ::uObject* GetEnumerator_boxed() { return List__Fuse_Effects_Effect__GetEnumerator_boxed(this); }
    int Count() { return List__Fuse_Effects_Effect__get_Count(this); }
    ::app::Fuse::Effects::Effect* Item(int index) { return List__Fuse_Effects_Effect__get_Item(this, index); }
    void Item(int index, ::app::Fuse::Effects::Effect* value) { List__Fuse_Effects_Effect__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Effects_Effect.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Effects_Effect List__Fuse_Effects_Effect::GetEnumerator() { return List__Fuse_Effects_Effect__GetEnumerator(this); }

}}}


#endif
