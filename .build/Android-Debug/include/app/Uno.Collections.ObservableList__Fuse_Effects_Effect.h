// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_EFFECTS_EFFECT_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_EFFECTS_EFFECT_H__

#include <app/Uno.Collections.ICollection__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IList__Fuse_Effects_Effect.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Effects { struct Effect; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Effects_Effect; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Effects_Effect;

struct ObservableList__Fuse_Effects_Effect__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Effects_Effect __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Effects_Effect __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Effects_Effect __interface_2;
};

ObservableList__Fuse_Effects_Effect__uType* ObservableList__Fuse_Effects_Effect__typeof();

int ObservableList__Fuse_Effects_Effect__get_Count(ObservableList__Fuse_Effects_Effect* __this);
::app::Fuse::Effects::Effect* ObservableList__Fuse_Effects_Effect__get_Item(ObservableList__Fuse_Effects_Effect* __this, int index);
void ObservableList__Fuse_Effects_Effect__Add(ObservableList__Fuse_Effects_Effect* __this, ::app::Fuse::Effects::Effect* item);
void ObservableList__Fuse_Effects_Effect__RemoveAt(ObservableList__Fuse_Effects_Effect* __this, int index);
bool ObservableList__Fuse_Effects_Effect__Remove(ObservableList__Fuse_Effects_Effect* __this, ::app::Fuse::Effects::Effect* item);
::uObject* ObservableList__Fuse_Effects_Effect__GetEnumerator(ObservableList__Fuse_Effects_Effect* __this);
void ObservableList__Fuse_Effects_Effect___ObjInit(ObservableList__Fuse_Effects_Effect* __this, ::uDelegate* added, ::uDelegate* removed);
ObservableList__Fuse_Effects_Effect* ObservableList__Fuse_Effects_Effect__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);

struct ObservableList__Fuse_Effects_Effect : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Effects_Effect*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void Add(::app::Fuse::Effects::Effect* item) { ObservableList__Fuse_Effects_Effect__Add(this, item); }
    void RemoveAt(int index) { ObservableList__Fuse_Effects_Effect__RemoveAt(this, index); }
    bool Remove(::app::Fuse::Effects::Effect* item) { return ObservableList__Fuse_Effects_Effect__Remove(this, item); }
    ::uObject* GetEnumerator() { return ObservableList__Fuse_Effects_Effect__GetEnumerator(this); }
    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Effects_Effect___ObjInit(this, added, removed); }
    int Count() { return ObservableList__Fuse_Effects_Effect__get_Count(this); }
    ::app::Fuse::Effects::Effect* Item(int index) { return ObservableList__Fuse_Effects_Effect__get_Item(this, index); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
