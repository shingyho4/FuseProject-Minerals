// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_BUNDLE_FILE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_BUNDLE_FILE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_BundleFile.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_BundleFile; } } }
namespace app { namespace Uno { struct BundleFile; } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_BundleFile;

struct List1_Enumerator__Uno_BundleFile__uType : ::uValueType
{
    ::app::Uno::Collections::IEnumerator__Uno_BundleFile __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_BundleFile__uType* List1_Enumerator__Uno_BundleFile__typeof();

::app::Uno::BundleFile* List1_Enumerator__Uno_BundleFile__get_Current(List1_Enumerator__Uno_BundleFile* __this);
void List1_Enumerator__Uno_BundleFile__Dispose(List1_Enumerator__Uno_BundleFile* __this);
bool List1_Enumerator__Uno_BundleFile__MoveNext(List1_Enumerator__Uno_BundleFile* __this);
void List1_Enumerator__Uno_BundleFile___ObjInit(List1_Enumerator__Uno_BundleFile* __this, ::app::Uno::Collections::List__Uno_BundleFile* source);
List1_Enumerator__Uno_BundleFile List1_Enumerator__Uno_BundleFile__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_BundleFile* source);

struct List1_Enumerator__Uno_BundleFile
{
    ::uStrong< ::app::Uno::Collections::List__Uno_BundleFile*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::BundleFile*> _current;

    void Dispose() { List1_Enumerator__Uno_BundleFile__Dispose(this); }
    bool MoveNext() { return List1_Enumerator__Uno_BundleFile__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::List__Uno_BundleFile* source) { List1_Enumerator__Uno_BundleFile___ObjInit(this, source); }
    ::app::Uno::BundleFile* Current() { return List1_Enumerator__Uno_BundleFile__get_Current(this); }

    List1_Enumerator__Uno_BundleFile& operator =(const List1_Enumerator__Uno_BundleFile& copy)
    {
        ::uCopyValue(this, List1_Enumerator__Uno_BundleFile__typeof(), &copy);
        return *this;
    }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
