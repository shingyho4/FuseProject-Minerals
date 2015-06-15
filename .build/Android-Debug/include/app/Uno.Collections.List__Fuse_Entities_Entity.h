// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ENTITIES_ENTITY_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ENTITIES_ENTITY_H__

#include <app/Uno.Collections.ICollection__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.IList__Fuse_Entities_Entity.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Entities_Entity;

struct List__Fuse_Entities_Entity__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Entities_Entity __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Entities_Entity __interface_1;
};

List__Fuse_Entities_Entity__uType* List__Fuse_Entities_Entity__typeof();

int List__Fuse_Entities_Entity__get_Count(List__Fuse_Entities_Entity* __this);
::app::Fuse::Entities::Entity* List__Fuse_Entities_Entity__get_Item(List__Fuse_Entities_Entity* __this, int index);
void List__Fuse_Entities_Entity__set_Item(List__Fuse_Entities_Entity* __this, int index, ::app::Fuse::Entities::Entity* value);
void List__Fuse_Entities_Entity__BoundsCheck(List__Fuse_Entities_Entity* __this, int index);

struct List__Fuse_Entities_Entity : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void BoundsCheck(int index) { List__Fuse_Entities_Entity__BoundsCheck(this, index); }
    int Count() { return List__Fuse_Entities_Entity__get_Count(this); }
    ::app::Fuse::Entities::Entity* Item(int index) { return List__Fuse_Entities_Entity__get_Item(this, index); }
    void Item(int index, ::app::Fuse::Entities::Entity* value) { List__Fuse_Entities_Entity__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
