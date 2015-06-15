// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_BEHAVIOR_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_BEHAVIOR_H__

#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Behavior; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Behavior; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Behavior;

struct ObservableList__Fuse_Behavior__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Behavior __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Behavior __interface_1;
};

ObservableList__Fuse_Behavior__uType* ObservableList__Fuse_Behavior__typeof();

int ObservableList__Fuse_Behavior__get_Count(ObservableList__Fuse_Behavior* __this);
::app::Fuse::Behavior* ObservableList__Fuse_Behavior__get_Item(ObservableList__Fuse_Behavior* __this, int index);
void ObservableList__Fuse_Behavior__Add(ObservableList__Fuse_Behavior* __this, ::app::Fuse::Behavior* item);
void ObservableList__Fuse_Behavior__RemoveAt(ObservableList__Fuse_Behavior* __this, int index);
bool ObservableList__Fuse_Behavior__Remove(ObservableList__Fuse_Behavior* __this, ::app::Fuse::Behavior* item);
void ObservableList__Fuse_Behavior___ObjInit(ObservableList__Fuse_Behavior* __this, ::uDelegate* added, ::uDelegate* removed);
ObservableList__Fuse_Behavior* ObservableList__Fuse_Behavior__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);

struct ObservableList__Fuse_Behavior : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Behavior*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void Add(::app::Fuse::Behavior* item) { ObservableList__Fuse_Behavior__Add(this, item); }
    void RemoveAt(int index) { ObservableList__Fuse_Behavior__RemoveAt(this, index); }
    bool Remove(::app::Fuse::Behavior* item) { return ObservableList__Fuse_Behavior__Remove(this, item); }
    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Behavior___ObjInit(this, added, removed); }
    int Count() { return ObservableList__Fuse_Behavior__get_Count(this); }
    ::app::Fuse::Behavior* Item(int index) { return ObservableList__Fuse_Behavior__get_Item(this, index); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
