// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_U_X_RESOURCE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_U_X_RESOURCE_H__

#include <app/Uno.Collections.ICollection__Uno_UX_Resource.h>
#include <app/Uno.Collections.IList__Uno_UX_Resource.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace UX { struct Resource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_UX_Resource;

struct List__Uno_UX_Resource__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_UX_Resource __interface_0;
    ::app::Uno::Collections::ICollection__Uno_UX_Resource __interface_1;
};

List__Uno_UX_Resource__uType* List__Uno_UX_Resource__typeof();

int List__Uno_UX_Resource__get_Count(List__Uno_UX_Resource* __this);
::app::Uno::UX::Resource* List__Uno_UX_Resource__get_Item(List__Uno_UX_Resource* __this, int index);
void List__Uno_UX_Resource__set_Item(List__Uno_UX_Resource* __this, int index, ::app::Uno::UX::Resource* value);
void List__Uno_UX_Resource__BoundsCheck(List__Uno_UX_Resource* __this, int index);
void List__Uno_UX_Resource__EnsureCapacity(List__Uno_UX_Resource* __this);
void List__Uno_UX_Resource__Add(List__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item);
bool List__Uno_UX_Resource__Remove(List__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item);
void List__Uno_UX_Resource__RemoveAt(List__Uno_UX_Resource* __this, int index);
void List__Uno_UX_Resource___ObjInit(List__Uno_UX_Resource* __this);
List__Uno_UX_Resource* List__Uno_UX_Resource__New_1(::uStatic* __this);

struct List__Uno_UX_Resource : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void BoundsCheck(int index) { List__Uno_UX_Resource__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Uno_UX_Resource__EnsureCapacity(this); }
    void Add(::app::Uno::UX::Resource* item) { List__Uno_UX_Resource__Add(this, item); }
    bool Remove(::app::Uno::UX::Resource* item) { return List__Uno_UX_Resource__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_UX_Resource__RemoveAt(this, index); }
    void _ObjInit() { List__Uno_UX_Resource___ObjInit(this); }
    int Count() { return List__Uno_UX_Resource__get_Count(this); }
    ::app::Uno::UX::Resource* Item(int index) { return List__Uno_UX_Resource__get_Item(this, index); }
    void Item(int index, ::app::Uno::UX::Resource* value) { List__Uno_UX_Resource__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
