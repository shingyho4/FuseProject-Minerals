// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_STROKE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_STROKE_H__

#include <app/Uno.Collections.ICollection__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Drawing_Stroke; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Drawing_Stroke;

struct List__Fuse_Drawing_Stroke__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Drawing_Stroke __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke __interface_2;
};

List__Fuse_Drawing_Stroke__uType* List__Fuse_Drawing_Stroke__typeof();

int List__Fuse_Drawing_Stroke__get_Count(List__Fuse_Drawing_Stroke* __this);
::app::Fuse::Drawing::Stroke* List__Fuse_Drawing_Stroke__get_Item(List__Fuse_Drawing_Stroke* __this, int index);
void List__Fuse_Drawing_Stroke__set_Item(List__Fuse_Drawing_Stroke* __this, int index, ::app::Fuse::Drawing::Stroke* value);
::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Stroke List__Fuse_Drawing_Stroke__GetEnumerator(List__Fuse_Drawing_Stroke* __this);
void List__Fuse_Drawing_Stroke__BoundsCheck(List__Fuse_Drawing_Stroke* __this, int index);
void List__Fuse_Drawing_Stroke__EnsureCapacity(List__Fuse_Drawing_Stroke* __this);
void List__Fuse_Drawing_Stroke__Add(List__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* item);
void List__Fuse_Drawing_Stroke___ObjInit(List__Fuse_Drawing_Stroke* __this);
List__Fuse_Drawing_Stroke* List__Fuse_Drawing_Stroke__New_1(::uStatic* __this);
::uObject* List__Fuse_Drawing_Stroke__GetEnumerator_boxed(List__Fuse_Drawing_Stroke* __this);

struct List__Fuse_Drawing_Stroke : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Stroke GetEnumerator();
    void BoundsCheck(int index) { List__Fuse_Drawing_Stroke__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Drawing_Stroke__EnsureCapacity(this); }
    void Add(::app::Fuse::Drawing::Stroke* item) { List__Fuse_Drawing_Stroke__Add(this, item); }
    void _ObjInit() { List__Fuse_Drawing_Stroke___ObjInit(this); }
    ::uObject* GetEnumerator_boxed() { return List__Fuse_Drawing_Stroke__GetEnumerator_boxed(this); }
    int Count() { return List__Fuse_Drawing_Stroke__get_Count(this); }
    ::app::Fuse::Drawing::Stroke* Item(int index) { return List__Fuse_Drawing_Stroke__get_Item(this, index); }
    void Item(int index, ::app::Fuse::Drawing::Stroke* value) { List__Fuse_Drawing_Stroke__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Stroke List__Fuse_Drawing_Stroke::GetEnumerator() { return List__Fuse_Drawing_Stroke__GetEnumerator(this); }

}}}


#endif
