// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_DRAWING_STROKE_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_DRAWING_STROKE_H__

#include <app/Uno.Collections.ICollection__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_Stroke; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Drawing_Stroke;

struct ObservableList__Fuse_Drawing_Stroke__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Drawing_Stroke __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke __interface_2;
};

ObservableList__Fuse_Drawing_Stroke__uType* ObservableList__Fuse_Drawing_Stroke__typeof();

int ObservableList__Fuse_Drawing_Stroke__get_Count(ObservableList__Fuse_Drawing_Stroke* __this);
::app::Fuse::Drawing::Stroke* ObservableList__Fuse_Drawing_Stroke__get_Item(ObservableList__Fuse_Drawing_Stroke* __this, int index);
void ObservableList__Fuse_Drawing_Stroke__Add(ObservableList__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* item);
::uObject* ObservableList__Fuse_Drawing_Stroke__GetEnumerator(ObservableList__Fuse_Drawing_Stroke* __this);
void ObservableList__Fuse_Drawing_Stroke___ObjInit(ObservableList__Fuse_Drawing_Stroke* __this, ::uDelegate* added, ::uDelegate* removed);
ObservableList__Fuse_Drawing_Stroke* ObservableList__Fuse_Drawing_Stroke__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);

struct ObservableList__Fuse_Drawing_Stroke : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void Add(::app::Fuse::Drawing::Stroke* item) { ObservableList__Fuse_Drawing_Stroke__Add(this, item); }
    ::uObject* GetEnumerator() { return ObservableList__Fuse_Drawing_Stroke__GetEnumerator(this); }
    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Drawing_Stroke___ObjInit(this, added, removed); }
    int Count() { return ObservableList__Fuse_Drawing_Stroke__get_Count(this); }
    ::app::Fuse::Drawing::Stroke* Item(int index) { return ObservableList__Fuse_Drawing_Stroke__get_Item(this, index); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
