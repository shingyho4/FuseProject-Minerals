// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_HASH_SET1_ENUMERATOR__FUSE_I_FLUSH_H__
#define __APP_UNO_COLLECTIONS_HASH_SET1_ENUMERATOR__FUSE_I_FLUSH_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_IFlush__bool; } } }

namespace app {
namespace Uno {
namespace Collections {

struct HashSet1_Enumerator__Fuse_IFlush;

struct HashSet1_Enumerator__Fuse_IFlush__uType : ::uValueType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

HashSet1_Enumerator__Fuse_IFlush__uType* HashSet1_Enumerator__Fuse_IFlush__typeof();

::uObject* HashSet1_Enumerator__Fuse_IFlush__get_Current(HashSet1_Enumerator__Fuse_IFlush* __this);
void HashSet1_Enumerator__Fuse_IFlush__Dispose(HashSet1_Enumerator__Fuse_IFlush* __this);
bool HashSet1_Enumerator__Fuse_IFlush__MoveNext(HashSet1_Enumerator__Fuse_IFlush* __this);
void HashSet1_Enumerator__Fuse_IFlush___ObjInit(HashSet1_Enumerator__Fuse_IFlush* __this, ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool* source);
HashSet1_Enumerator__Fuse_IFlush HashSet1_Enumerator__Fuse_IFlush__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool* source);

struct HashSet1_Enumerator__Fuse_IFlush
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*> _source;
    ::uStrong< ::uObject*> _current;
    int _iterator;
    int _version;

    void Dispose() { HashSet1_Enumerator__Fuse_IFlush__Dispose(this); }
    bool MoveNext() { return HashSet1_Enumerator__Fuse_IFlush__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_IFlush__bool* source) { HashSet1_Enumerator__Fuse_IFlush___ObjInit(this, source); }
    ::uObject* Current() { return HashSet1_Enumerator__Fuse_IFlush__get_Current(this); }

    HashSet1_Enumerator__Fuse_IFlush& operator =(const HashSet1_Enumerator__Fuse_IFlush& copy)
    {
        ::uCopyValue(this, HashSet1_Enumerator__Fuse_IFlush__typeof(), &copy);
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
