// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_STYLE_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_STYLE_H__

#include <app/Uno.Collections.ICollection__Fuse_Style.h>
#include <app/Uno.Collections.IList__Fuse_Style.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Style; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Style; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Style;

struct ObservableList__Fuse_Style__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Style __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Style __interface_1;
};

ObservableList__Fuse_Style__uType* ObservableList__Fuse_Style__typeof();

int ObservableList__Fuse_Style__get_Count(ObservableList__Fuse_Style* __this);
::app::Fuse::Style* ObservableList__Fuse_Style__get_Item(ObservableList__Fuse_Style* __this, int index);
void ObservableList__Fuse_Style__Add(ObservableList__Fuse_Style* __this, ::app::Fuse::Style* item);
void ObservableList__Fuse_Style___ObjInit(ObservableList__Fuse_Style* __this, ::uDelegate* added, ::uDelegate* removed);
ObservableList__Fuse_Style* ObservableList__Fuse_Style__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);

struct ObservableList__Fuse_Style : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Style*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void Add(::app::Fuse::Style* item) { ObservableList__Fuse_Style__Add(this, item); }
    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Style___ObjInit(this, added, removed); }
    int Count() { return ObservableList__Fuse_Style__get_Count(this); }
    ::app::Fuse::Style* Item(int index) { return ObservableList__Fuse_Style__get_Item(this, index); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
