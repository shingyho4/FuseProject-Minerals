// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ENTITIES_ENTRY_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ENTITIES_ENTRY_H__

#include <app/Fuse.Entities.Entry.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Entities_Entry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Entities_Entry;

struct List1_Enumerator__Fuse_Entities_Entry__uType : ::uValueType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

List1_Enumerator__Fuse_Entities_Entry__uType* List1_Enumerator__Fuse_Entities_Entry__typeof();

::app::Fuse::Entities::Entry List1_Enumerator__Fuse_Entities_Entry__get_Current(List1_Enumerator__Fuse_Entities_Entry* __this);
void List1_Enumerator__Fuse_Entities_Entry__Dispose(List1_Enumerator__Fuse_Entities_Entry* __this);
bool List1_Enumerator__Fuse_Entities_Entry__MoveNext(List1_Enumerator__Fuse_Entities_Entry* __this);
void List1_Enumerator__Fuse_Entities_Entry___ObjInit(List1_Enumerator__Fuse_Entities_Entry* __this, ::app::Uno::Collections::List__Fuse_Entities_Entry* source);
List1_Enumerator__Fuse_Entities_Entry List1_Enumerator__Fuse_Entities_Entry__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Entities_Entry* source);

struct List1_Enumerator__Fuse_Entities_Entry
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Entities_Entry*> _source;
    int _version;
    int _iterator;
    ::app::Fuse::Entities::Entry _current;

    void Dispose() { List1_Enumerator__Fuse_Entities_Entry__Dispose(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Entities_Entry__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::List__Fuse_Entities_Entry* source) { List1_Enumerator__Fuse_Entities_Entry___ObjInit(this, source); }
    ::app::Fuse::Entities::Entry Current();

    List1_Enumerator__Fuse_Entities_Entry& operator =(const List1_Enumerator__Fuse_Entities_Entry& copy)
    {
        ::uCopyValue(this, List1_Enumerator__Fuse_Entities_Entry__typeof(), &copy);
        return *this;
    }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Fuse::Entities::Entry List1_Enumerator__Fuse_Entities_Entry::Current() { return List1_Enumerator__Fuse_Entities_Entry__get_Current(this); }

}}}


#endif
