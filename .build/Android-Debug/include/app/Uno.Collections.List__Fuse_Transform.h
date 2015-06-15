// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_TRANSFORM_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_TRANSFORM_H__

#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Transform; } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Transform;

struct List__Fuse_Transform__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Transform __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Transform __interface_1;
};

List__Fuse_Transform__uType* List__Fuse_Transform__typeof();

int List__Fuse_Transform__get_Count(List__Fuse_Transform* __this);
::app::Fuse::Transform* List__Fuse_Transform__get_Item(List__Fuse_Transform* __this, int index);
void List__Fuse_Transform__set_Item(List__Fuse_Transform* __this, int index, ::app::Fuse::Transform* value);
void List__Fuse_Transform__BoundsCheck(List__Fuse_Transform* __this, int index);
void List__Fuse_Transform__EnsureCapacity(List__Fuse_Transform* __this);
void List__Fuse_Transform__Add(List__Fuse_Transform* __this, ::app::Fuse::Transform* item);
bool List__Fuse_Transform__Remove(List__Fuse_Transform* __this, ::app::Fuse::Transform* item);
void List__Fuse_Transform__RemoveAt(List__Fuse_Transform* __this, int index);
void List__Fuse_Transform___ObjInit(List__Fuse_Transform* __this);
List__Fuse_Transform* List__Fuse_Transform__New_1(::uStatic* __this);

struct List__Fuse_Transform : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void BoundsCheck(int index) { List__Fuse_Transform__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Transform__EnsureCapacity(this); }
    void Add(::app::Fuse::Transform* item) { List__Fuse_Transform__Add(this, item); }
    bool Remove(::app::Fuse::Transform* item) { return List__Fuse_Transform__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Transform__RemoveAt(this, index); }
    void _ObjInit() { List__Fuse_Transform___ObjInit(this); }
    int Count() { return List__Fuse_Transform__get_Count(this); }
    ::app::Fuse::Transform* Item(int index) { return List__Fuse_Transform__get_Item(this, index); }
    void Item(int index, ::app::Fuse::Transform* value) { List__Fuse_Transform__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
