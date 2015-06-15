// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_INTERNAL_LINE_CACHE_LINE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_INTERNAL_LINE_CACHE_LINE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Internal_LineCacheLine.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct LineCacheLine; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Internal_LineCacheLine; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Internal_LineCacheLine;

struct List1_Enumerator__Fuse_Internal_LineCacheLine__uType : ::uValueType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Internal_LineCacheLine __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Internal_LineCacheLine__uType* List1_Enumerator__Fuse_Internal_LineCacheLine__typeof();

::app::Fuse::Internal::LineCacheLine* List1_Enumerator__Fuse_Internal_LineCacheLine__get_Current(List1_Enumerator__Fuse_Internal_LineCacheLine* __this);
void List1_Enumerator__Fuse_Internal_LineCacheLine__Dispose(List1_Enumerator__Fuse_Internal_LineCacheLine* __this);
bool List1_Enumerator__Fuse_Internal_LineCacheLine__MoveNext(List1_Enumerator__Fuse_Internal_LineCacheLine* __this);
void List1_Enumerator__Fuse_Internal_LineCacheLine___ObjInit(List1_Enumerator__Fuse_Internal_LineCacheLine* __this, ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine* source);
List1_Enumerator__Fuse_Internal_LineCacheLine List1_Enumerator__Fuse_Internal_LineCacheLine__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine* source);

struct List1_Enumerator__Fuse_Internal_LineCacheLine
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Internal_LineCacheLine*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Internal::LineCacheLine*> _current;

    void Dispose() { List1_Enumerator__Fuse_Internal_LineCacheLine__Dispose(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Internal_LineCacheLine__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::List__Fuse_Internal_LineCacheLine* source) { List1_Enumerator__Fuse_Internal_LineCacheLine___ObjInit(this, source); }
    ::app::Fuse::Internal::LineCacheLine* Current() { return List1_Enumerator__Fuse_Internal_LineCacheLine__get_Current(this); }

    List1_Enumerator__Fuse_Internal_LineCacheLine& operator =(const List1_Enumerator__Fuse_Internal_LineCacheLine& copy)
    {
        ::uCopyValue(this, List1_Enumerator__Fuse_Internal_LineCacheLine__typeof(), &copy);
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
