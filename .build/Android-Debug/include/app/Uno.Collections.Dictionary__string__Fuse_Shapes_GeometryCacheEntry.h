// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__FUSE_SHAPES_GEOMETRY_CACHE_ENTRY_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__FUSE_SHAPES_GEOMETRY_CACHE_ENTRY_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Fuse_Shapes_Geometr-1275591a.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Shapes { struct GeometryCacheEntry; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Fuse_Shapes_GeometryCacheEntry;

struct Dictionary__string__Fuse_Shapes_GeometryCacheEntry__uType : ::uClassType
{
};

Dictionary__string__Fuse_Shapes_GeometryCacheEntry__uType* Dictionary__string__Fuse_Shapes_GeometryCacheEntry__typeof();

::app::Fuse::Shapes::GeometryCacheEntry* Dictionary__string__Fuse_Shapes_GeometryCacheEntry__get_Item(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* key);
void Dictionary__string__Fuse_Shapes_GeometryCacheEntry__set_Item(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry* value);
::app::Uno::Collections::Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry Dictionary__string__Fuse_Shapes_GeometryCacheEntry__GetEnumerator(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this);
void Dictionary__string__Fuse_Shapes_GeometryCacheEntry__Rehash(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this);
void Dictionary__string__Fuse_Shapes_GeometryCacheEntry__Add(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry* value);
bool Dictionary__string__Fuse_Shapes_GeometryCacheEntry__TryGetValue(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry** value);
void Dictionary__string__Fuse_Shapes_GeometryCacheEntry___ObjInit(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this);
Dictionary__string__Fuse_Shapes_GeometryCacheEntry* Dictionary__string__Fuse_Shapes_GeometryCacheEntry__New_1(::uStatic* __this);

struct Dictionary__string__Fuse_Shapes_GeometryCacheEntry : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::app::Uno::Collections::Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry GetEnumerator();
    void Rehash() { Dictionary__string__Fuse_Shapes_GeometryCacheEntry__Rehash(this); }
    void Add(::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry* value) { Dictionary__string__Fuse_Shapes_GeometryCacheEntry__Add(this, key, value); }
    bool TryGetValue(::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry** value) { return Dictionary__string__Fuse_Shapes_GeometryCacheEntry__TryGetValue(this, key, value); }
    void _ObjInit() { Dictionary__string__Fuse_Shapes_GeometryCacheEntry___ObjInit(this); }
    ::app::Fuse::Shapes::GeometryCacheEntry* Item(::uString* key) { return Dictionary__string__Fuse_Shapes_GeometryCacheEntry__get_Item(this, key); }
    void Item(::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry* value) { Dictionary__string__Fuse_Shapes_GeometryCacheEntry__set_Item(this, key, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__string__Fuse_Shapes_Geo-78841196.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry Dictionary__string__Fuse_Shapes_GeometryCacheEntry::GetEnumerator() { return Dictionary__string__Fuse_Shapes_GeometryCacheEntry__GetEnumerator(this); }

}}}


#endif
