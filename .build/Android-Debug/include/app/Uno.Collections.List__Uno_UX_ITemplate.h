// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_U_X_I_TEMPLATE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_U_X_I_TEMPLATE_H__

#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_UX_ITemplate;

struct List__Uno_UX_ITemplate__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_UX_ITemplate __interface_0;
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate __interface_1;
};

List__Uno_UX_ITemplate__uType* List__Uno_UX_ITemplate__typeof();

int List__Uno_UX_ITemplate__get_Count(List__Uno_UX_ITemplate* __this);
::uObject* List__Uno_UX_ITemplate__get_Item(List__Uno_UX_ITemplate* __this, int index);
void List__Uno_UX_ITemplate__set_Item(List__Uno_UX_ITemplate* __this, int index, ::uObject* value);
void List__Uno_UX_ITemplate__BoundsCheck(List__Uno_UX_ITemplate* __this, int index);
void List__Uno_UX_ITemplate__EnsureCapacity(List__Uno_UX_ITemplate* __this);
void List__Uno_UX_ITemplate__Add(List__Uno_UX_ITemplate* __this, ::uObject* item);
void List__Uno_UX_ITemplate___ObjInit(List__Uno_UX_ITemplate* __this);
List__Uno_UX_ITemplate* List__Uno_UX_ITemplate__New_1(::uStatic* __this);

struct List__Uno_UX_ITemplate : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void BoundsCheck(int index) { List__Uno_UX_ITemplate__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Uno_UX_ITemplate__EnsureCapacity(this); }
    void Add(::uObject* item) { List__Uno_UX_ITemplate__Add(this, item); }
    void _ObjInit() { List__Uno_UX_ITemplate___ObjInit(this); }
    int Count() { return List__Uno_UX_ITemplate__get_Count(this); }
    ::uObject* Item(int index) { return List__Uno_UX_ITemplate__get_Item(this, index); }
    void Item(int index, ::uObject* value) { List__Uno_UX_ITemplate__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
