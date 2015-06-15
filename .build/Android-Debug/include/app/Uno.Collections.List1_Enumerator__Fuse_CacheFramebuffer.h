// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_CACHE_FRAMEBUFFER_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_CACHE_FRAMEBUFFER_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct CacheFramebuffer; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_CacheFramebuffer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_CacheFramebuffer;

struct List1_Enumerator__Fuse_CacheFramebuffer__uType : ::uValueType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

List1_Enumerator__Fuse_CacheFramebuffer__uType* List1_Enumerator__Fuse_CacheFramebuffer__typeof();

::app::Fuse::CacheFramebuffer* List1_Enumerator__Fuse_CacheFramebuffer__get_Current(List1_Enumerator__Fuse_CacheFramebuffer* __this);
void List1_Enumerator__Fuse_CacheFramebuffer__Dispose(List1_Enumerator__Fuse_CacheFramebuffer* __this);
bool List1_Enumerator__Fuse_CacheFramebuffer__MoveNext(List1_Enumerator__Fuse_CacheFramebuffer* __this);
void List1_Enumerator__Fuse_CacheFramebuffer___ObjInit(List1_Enumerator__Fuse_CacheFramebuffer* __this, ::app::Uno::Collections::List__Fuse_CacheFramebuffer* source);
List1_Enumerator__Fuse_CacheFramebuffer List1_Enumerator__Fuse_CacheFramebuffer__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_CacheFramebuffer* source);

struct List1_Enumerator__Fuse_CacheFramebuffer
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::CacheFramebuffer*> _current;

    void Dispose() { List1_Enumerator__Fuse_CacheFramebuffer__Dispose(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_CacheFramebuffer__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::List__Fuse_CacheFramebuffer* source) { List1_Enumerator__Fuse_CacheFramebuffer___ObjInit(this, source); }
    ::app::Fuse::CacheFramebuffer* Current() { return List1_Enumerator__Fuse_CacheFramebuffer__get_Current(this); }

    List1_Enumerator__Fuse_CacheFramebuffer& operator =(const List1_Enumerator__Fuse_CacheFramebuffer& copy)
    {
        ::uCopyValue(this, List1_Enumerator__Fuse_CacheFramebuffer__typeof(), &copy);
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
