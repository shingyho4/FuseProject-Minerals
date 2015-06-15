// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__UNO_BUNDLE_FILE_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__UNO_BUNDLE_FILE_H__

#include <app/Uno.Collections.ICollection__Uno_BundleFile.h>
#include <app/Uno.Collections.IList__Uno_BundleFile.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_BundleFile; } } }
namespace app { namespace Uno { struct BundleFile; } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Uno_BundleFile;

struct ObservableList__Uno_BundleFile__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_BundleFile __interface_0;
    ::app::Uno::Collections::ICollection__Uno_BundleFile __interface_1;
};

ObservableList__Uno_BundleFile__uType* ObservableList__Uno_BundleFile__typeof();

int ObservableList__Uno_BundleFile__get_Count(ObservableList__Uno_BundleFile* __this);
::app::Uno::BundleFile* ObservableList__Uno_BundleFile__get_Item(ObservableList__Uno_BundleFile* __this, int index);
void ObservableList__Uno_BundleFile__Add(ObservableList__Uno_BundleFile* __this, ::app::Uno::BundleFile* item);
::uObject* ObservableList__Uno_BundleFile__GetEnumerator(ObservableList__Uno_BundleFile* __this);
void ObservableList__Uno_BundleFile___ObjInit(ObservableList__Uno_BundleFile* __this, ::uDelegate* added, ::uDelegate* removed);
ObservableList__Uno_BundleFile* ObservableList__Uno_BundleFile__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);

struct ObservableList__Uno_BundleFile : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Uno_BundleFile*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void Add(::app::Uno::BundleFile* item) { ObservableList__Uno_BundleFile__Add(this, item); }
    ::uObject* GetEnumerator() { return ObservableList__Uno_BundleFile__GetEnumerator(this); }
    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Uno_BundleFile___ObjInit(this, added, removed); }
    int Count() { return ObservableList__Uno_BundleFile__get_Count(this); }
    ::app::Uno::BundleFile* Item(int index) { return ObservableList__Uno_BundleFile__get_Item(this, index); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
