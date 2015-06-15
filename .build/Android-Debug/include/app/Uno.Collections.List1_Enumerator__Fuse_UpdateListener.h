// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_UPDATE_LISTENER_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_UPDATE_LISTENER_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct UpdateListener; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_UpdateListener; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_UpdateListener;

struct List1_Enumerator__Fuse_UpdateListener__uType : ::uValueType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

List1_Enumerator__Fuse_UpdateListener__uType* List1_Enumerator__Fuse_UpdateListener__typeof();

::app::Fuse::UpdateListener* List1_Enumerator__Fuse_UpdateListener__get_Current(List1_Enumerator__Fuse_UpdateListener* __this);
void List1_Enumerator__Fuse_UpdateListener__Dispose(List1_Enumerator__Fuse_UpdateListener* __this);
bool List1_Enumerator__Fuse_UpdateListener__MoveNext(List1_Enumerator__Fuse_UpdateListener* __this);
void List1_Enumerator__Fuse_UpdateListener___ObjInit(List1_Enumerator__Fuse_UpdateListener* __this, ::app::Uno::Collections::List__Fuse_UpdateListener* source);
List1_Enumerator__Fuse_UpdateListener List1_Enumerator__Fuse_UpdateListener__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_UpdateListener* source);

struct List1_Enumerator__Fuse_UpdateListener
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_UpdateListener*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::UpdateListener*> _current;

    void Dispose() { List1_Enumerator__Fuse_UpdateListener__Dispose(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_UpdateListener__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::List__Fuse_UpdateListener* source) { List1_Enumerator__Fuse_UpdateListener___ObjInit(this, source); }
    ::app::Fuse::UpdateListener* Current() { return List1_Enumerator__Fuse_UpdateListener__get_Current(this); }

    List1_Enumerator__Fuse_UpdateListener& operator =(const List1_Enumerator__Fuse_UpdateListener& copy)
    {
        ::uCopyValue(this, List1_Enumerator__Fuse_UpdateListener__typeof(), &copy);
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
