// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_TRANSFORM_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_TRANSFORM_H__

#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Transform; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Transform; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Transform;

struct ObservableList__Fuse_Transform__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Transform __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Transform __interface_1;
};

ObservableList__Fuse_Transform__uType* ObservableList__Fuse_Transform__typeof();

int ObservableList__Fuse_Transform__get_Count(ObservableList__Fuse_Transform* __this);
::app::Fuse::Transform* ObservableList__Fuse_Transform__get_Item(ObservableList__Fuse_Transform* __this, int index);
void ObservableList__Fuse_Transform__Add(ObservableList__Fuse_Transform* __this, ::app::Fuse::Transform* item);
void ObservableList__Fuse_Transform__RemoveAt(ObservableList__Fuse_Transform* __this, int index);
bool ObservableList__Fuse_Transform__Remove(ObservableList__Fuse_Transform* __this, ::app::Fuse::Transform* item);
void ObservableList__Fuse_Transform___ObjInit(ObservableList__Fuse_Transform* __this, ::uDelegate* added, ::uDelegate* removed);
ObservableList__Fuse_Transform* ObservableList__Fuse_Transform__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);

struct ObservableList__Fuse_Transform : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Transform*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void Add(::app::Fuse::Transform* item) { ObservableList__Fuse_Transform__Add(this, item); }
    void RemoveAt(int index) { ObservableList__Fuse_Transform__RemoveAt(this, index); }
    bool Remove(::app::Fuse::Transform* item) { return ObservableList__Fuse_Transform__Remove(this, item); }
    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Transform___ObjInit(this, added, removed); }
    int Count() { return ObservableList__Fuse_Transform__get_Count(this); }
    ::app::Fuse::Transform* Item(int index) { return ObservableList__Fuse_Transform__get_Item(this, index); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
