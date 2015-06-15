// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ENTITIES_COMPONENT_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ENTITIES_COMPONENT_H__

#include <app/Uno.Collections.ICollection__Fuse_Entities_Component.h>
#include <app/Uno.Collections.IList__Fuse_Entities_Component.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Component; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Entities_Component;

struct List__Fuse_Entities_Component__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Entities_Component __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Entities_Component __interface_1;
};

List__Fuse_Entities_Component__uType* List__Fuse_Entities_Component__typeof();

int List__Fuse_Entities_Component__get_Count(List__Fuse_Entities_Component* __this);
::app::Fuse::Entities::Component* List__Fuse_Entities_Component__get_Item(List__Fuse_Entities_Component* __this, int index);
void List__Fuse_Entities_Component__set_Item(List__Fuse_Entities_Component* __this, int index, ::app::Fuse::Entities::Component* value);
void List__Fuse_Entities_Component__BoundsCheck(List__Fuse_Entities_Component* __this, int index);
void List__Fuse_Entities_Component__EnsureCapacity(List__Fuse_Entities_Component* __this);
void List__Fuse_Entities_Component__Add(List__Fuse_Entities_Component* __this, ::app::Fuse::Entities::Component* item);
void List__Fuse_Entities_Component___ObjInit(List__Fuse_Entities_Component* __this);
List__Fuse_Entities_Component* List__Fuse_Entities_Component__New_1(::uStatic* __this);

struct List__Fuse_Entities_Component : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void BoundsCheck(int index) { List__Fuse_Entities_Component__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Entities_Component__EnsureCapacity(this); }
    void Add(::app::Fuse::Entities::Component* item) { List__Fuse_Entities_Component__Add(this, item); }
    void _ObjInit() { List__Fuse_Entities_Component___ObjInit(this); }
    int Count() { return List__Fuse_Entities_Component__get_Count(this); }
    ::app::Fuse::Entities::Component* Item(int index) { return List__Fuse_Entities_Component__get_Item(this, index); }
    void Item(int index, ::app::Fuse::Entities::Component* value) { List__Fuse_Entities_Component__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
