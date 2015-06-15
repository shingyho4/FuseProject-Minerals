// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_BUNDLE_FILE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_BUNDLE_FILE_H__

#include <app/Uno.Collections.ICollection__Uno_BundleFile.h>
#include <app/Uno.Collections.IList__Uno_BundleFile.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_BundleFile; } } }
namespace app { namespace Uno { struct BundleFile; } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_BundleFile;

struct List__Uno_BundleFile__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_BundleFile __interface_0;
    ::app::Uno::Collections::ICollection__Uno_BundleFile __interface_1;
};

List__Uno_BundleFile__uType* List__Uno_BundleFile__typeof();

int List__Uno_BundleFile__get_Count(List__Uno_BundleFile* __this);
::app::Uno::BundleFile* List__Uno_BundleFile__get_Item(List__Uno_BundleFile* __this, int index);
void List__Uno_BundleFile__set_Item(List__Uno_BundleFile* __this, int index, ::app::Uno::BundleFile* value);
::app::Uno::Collections::List1_Enumerator__Uno_BundleFile List__Uno_BundleFile__GetEnumerator(List__Uno_BundleFile* __this);
void List__Uno_BundleFile__BoundsCheck(List__Uno_BundleFile* __this, int index);
void List__Uno_BundleFile__EnsureCapacity(List__Uno_BundleFile* __this);
void List__Uno_BundleFile__Add(List__Uno_BundleFile* __this, ::app::Uno::BundleFile* item);
void List__Uno_BundleFile___ObjInit(List__Uno_BundleFile* __this);
List__Uno_BundleFile* List__Uno_BundleFile__New_1(::uStatic* __this);

struct List__Uno_BundleFile : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::app::Uno::Collections::List1_Enumerator__Uno_BundleFile GetEnumerator();
    void BoundsCheck(int index) { List__Uno_BundleFile__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Uno_BundleFile__EnsureCapacity(this); }
    void Add(::app::Uno::BundleFile* item) { List__Uno_BundleFile__Add(this, item); }
    void _ObjInit() { List__Uno_BundleFile___ObjInit(this); }
    int Count() { return List__Uno_BundleFile__get_Count(this); }
    ::app::Uno::BundleFile* Item(int index) { return List__Uno_BundleFile__get_Item(this, index); }
    void Item(int index, ::app::Uno::BundleFile* value) { List__Uno_BundleFile__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_BundleFile.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_BundleFile List__Uno_BundleFile::GetEnumerator() { return List__Uno_BundleFile__GetEnumerator(this); }

}}}


#endif
