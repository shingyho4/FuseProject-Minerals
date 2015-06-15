// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_CAPTURER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_CAPTURER_H__

#include <app/Uno.Collections.ICollection__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IList__Fuse_Input_Capturer.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct Capturer; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Input_Capturer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Input_Capturer;

struct List__Fuse_Input_Capturer__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Input_Capturer __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Input_Capturer __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Input_Capturer __interface_2;
};

List__Fuse_Input_Capturer__uType* List__Fuse_Input_Capturer__typeof();

int List__Fuse_Input_Capturer__get_Count(List__Fuse_Input_Capturer* __this);
::app::Fuse::Input::Capturer* List__Fuse_Input_Capturer__get_Item(List__Fuse_Input_Capturer* __this, int index);
void List__Fuse_Input_Capturer__set_Item(List__Fuse_Input_Capturer* __this, int index, ::app::Fuse::Input::Capturer* value);
::app::Uno::Collections::List1_Enumerator__Fuse_Input_Capturer List__Fuse_Input_Capturer__GetEnumerator(List__Fuse_Input_Capturer* __this);
void List__Fuse_Input_Capturer__BoundsCheck(List__Fuse_Input_Capturer* __this, int index);
void List__Fuse_Input_Capturer__EnsureCapacity(List__Fuse_Input_Capturer* __this);
void List__Fuse_Input_Capturer__Add(List__Fuse_Input_Capturer* __this, ::app::Fuse::Input::Capturer* item);
void List__Fuse_Input_Capturer__RemoveAt(List__Fuse_Input_Capturer* __this, int index);
void List__Fuse_Input_Capturer__Clear(List__Fuse_Input_Capturer* __this);
void List__Fuse_Input_Capturer___ObjInit(List__Fuse_Input_Capturer* __this);
List__Fuse_Input_Capturer* List__Fuse_Input_Capturer__New_1(::uStatic* __this);
::uObject* List__Fuse_Input_Capturer__GetEnumerator_boxed(List__Fuse_Input_Capturer* __this);

struct List__Fuse_Input_Capturer : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::app::Uno::Collections::List1_Enumerator__Fuse_Input_Capturer GetEnumerator();
    void BoundsCheck(int index) { List__Fuse_Input_Capturer__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Input_Capturer__EnsureCapacity(this); }
    void Add(::app::Fuse::Input::Capturer* item) { List__Fuse_Input_Capturer__Add(this, item); }
    void RemoveAt(int index) { List__Fuse_Input_Capturer__RemoveAt(this, index); }
    void Clear() { List__Fuse_Input_Capturer__Clear(this); }
    void _ObjInit() { List__Fuse_Input_Capturer___ObjInit(this); }
    ::uObject* GetEnumerator_boxed() { return List__Fuse_Input_Capturer__GetEnumerator_boxed(this); }
    int Count() { return List__Fuse_Input_Capturer__get_Count(this); }
    ::app::Fuse::Input::Capturer* Item(int index) { return List__Fuse_Input_Capturer__get_Item(this, index); }
    void Item(int index, ::app::Fuse::Input::Capturer* value) { List__Fuse_Input_Capturer__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_Capturer.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Input_Capturer List__Fuse_Input_Capturer::GetEnumerator() { return List__Fuse_Input_Capturer__GetEnumerator(this); }

}}}


#endif
