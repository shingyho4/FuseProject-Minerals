// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STRING_CACHE_H__
#define __APP_FUSE_STRING_CACHE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct StringCache_Cache; } }

namespace app {
namespace Fuse {

struct StringCache;

struct StringCache__uType : ::uClassType
{
};

StringCache__uType* StringCache__typeof();

bool StringCache__IsStringCached(StringCache* __this, ::uString* s);
::uByte StringCache__CacheString(StringCache* __this, ::uString* s);
void StringCache___ObjInit(StringCache* __this);
StringCache* StringCache__New_1(::uStatic* __this);

struct StringCache : ::uObject
{
    ::uStrong< ::uArray*> _cache;

    bool IsStringCached(::uString* s) { return StringCache__IsStringCached(this, s); }
    ::uByte CacheString(::uString* s) { return StringCache__CacheString(this, s); }
    void _ObjInit() { StringCache___ObjInit(this); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>

namespace app {
namespace Fuse {

}}


#endif
