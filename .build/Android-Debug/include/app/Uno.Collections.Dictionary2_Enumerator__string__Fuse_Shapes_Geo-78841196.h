// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__FUSE_SHAPES_GEO_78841196_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__FUSE_SHAPES_GEO_78841196_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Fuse_Shapes_GeometryCacheEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry;

struct Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__uType : ::uValueType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__uType* Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__typeof();

::app::Uno::Collections::KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__get_Current(Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry* __this);
void Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__Dispose(Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry* __this);
bool Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__MoveNext(Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry* __this);
void Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry___ObjInit(Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry* __this, ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry* source);
Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry* source);

struct Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry*> _source;
    ::app::Uno::Collections::KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry _current;
    int _iterator;
    int _version;

    void Dispose() { Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__Dispose(this); }
    bool MoveNext() { return Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry* source) { Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry___ObjInit(this, source); }
    ::app::Uno::Collections::KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry Current();

    Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry& operator =(const Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry& copy)
    {
        ::uCopyValue(this, Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__typeof(), &copy);
        return *this;
    }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry::Current() { return Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__get_Current(this); }

}}}


#endif
