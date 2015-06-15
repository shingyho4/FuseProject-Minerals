// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_ENTITIES_COMPONENT_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_ENTITIES_COMPONENT_H__

#include <app/Uno.Collections.ICollection__Fuse_Entities_Component.h>
#include <app/Uno.Collections.IList__Fuse_Entities_Component.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Component; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Entities_Component; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Entities_Component;

struct ObservableList__Fuse_Entities_Component__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Entities_Component __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Entities_Component __interface_1;
};

ObservableList__Fuse_Entities_Component__uType* ObservableList__Fuse_Entities_Component__typeof();

int ObservableList__Fuse_Entities_Component__get_Count(ObservableList__Fuse_Entities_Component* __this);
::app::Fuse::Entities::Component* ObservableList__Fuse_Entities_Component__get_Item(ObservableList__Fuse_Entities_Component* __this, int index);
void ObservableList__Fuse_Entities_Component__Add(ObservableList__Fuse_Entities_Component* __this, ::app::Fuse::Entities::Component* item);
void ObservableList__Fuse_Entities_Component___ObjInit(ObservableList__Fuse_Entities_Component* __this, ::uDelegate* added, ::uDelegate* removed);
ObservableList__Fuse_Entities_Component* ObservableList__Fuse_Entities_Component__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);

struct ObservableList__Fuse_Entities_Component : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Entities_Component*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void Add(::app::Fuse::Entities::Component* item) { ObservableList__Fuse_Entities_Component__Add(this, item); }
    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Entities_Component___ObjInit(this, added, removed); }
    int Count() { return ObservableList__Fuse_Entities_Component__get_Count(this); }
    ::app::Fuse::Entities::Component* Item(int index) { return ObservableList__Fuse_Entities_Component__get_Item(this, index); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
