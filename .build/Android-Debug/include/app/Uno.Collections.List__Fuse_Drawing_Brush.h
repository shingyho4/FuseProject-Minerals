// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_BRUSH_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_BRUSH_H__

#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Drawing_Brush; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Drawing_Brush;

struct List__Fuse_Drawing_Brush__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Drawing_Brush __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush __interface_2;
};

List__Fuse_Drawing_Brush__uType* List__Fuse_Drawing_Brush__typeof();

int List__Fuse_Drawing_Brush__get_Count(List__Fuse_Drawing_Brush* __this);
::app::Fuse::Drawing::Brush* List__Fuse_Drawing_Brush__get_Item(List__Fuse_Drawing_Brush* __this, int index);
void List__Fuse_Drawing_Brush__set_Item(List__Fuse_Drawing_Brush* __this, int index, ::app::Fuse::Drawing::Brush* value);
::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Brush List__Fuse_Drawing_Brush__GetEnumerator(List__Fuse_Drawing_Brush* __this);
void List__Fuse_Drawing_Brush__BoundsCheck(List__Fuse_Drawing_Brush* __this, int index);
void List__Fuse_Drawing_Brush__EnsureCapacity(List__Fuse_Drawing_Brush* __this);
void List__Fuse_Drawing_Brush__Add(List__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* item);
void List__Fuse_Drawing_Brush__Clear(List__Fuse_Drawing_Brush* __this);
void List__Fuse_Drawing_Brush___ObjInit(List__Fuse_Drawing_Brush* __this);
List__Fuse_Drawing_Brush* List__Fuse_Drawing_Brush__New_1(::uStatic* __this);
::uObject* List__Fuse_Drawing_Brush__GetEnumerator_boxed(List__Fuse_Drawing_Brush* __this);

struct List__Fuse_Drawing_Brush : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Brush GetEnumerator();
    void BoundsCheck(int index) { List__Fuse_Drawing_Brush__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Drawing_Brush__EnsureCapacity(this); }
    void Add(::app::Fuse::Drawing::Brush* item) { List__Fuse_Drawing_Brush__Add(this, item); }
    void Clear() { List__Fuse_Drawing_Brush__Clear(this); }
    void _ObjInit() { List__Fuse_Drawing_Brush___ObjInit(this); }
    ::uObject* GetEnumerator_boxed() { return List__Fuse_Drawing_Brush__GetEnumerator_boxed(this); }
    int Count() { return List__Fuse_Drawing_Brush__get_Count(this); }
    ::app::Fuse::Drawing::Brush* Item(int index) { return List__Fuse_Drawing_Brush__get_Item(this, index); }
    void Item(int index, ::app::Fuse::Drawing::Brush* value) { List__Fuse_Drawing_Brush__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Brush.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Brush List__Fuse_Drawing_Brush::GetEnumerator() { return List__Fuse_Drawing_Brush__GetEnumerator(this); }

}}}


#endif
