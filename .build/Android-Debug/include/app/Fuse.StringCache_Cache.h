// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STRING_CACHE_CACHE_H__
#define __APP_FUSE_STRING_CACHE_CACHE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {

struct StringCache_Cache;

struct StringCache_Cache__uType : ::uClassType
{
};

StringCache_Cache__uType* StringCache_Cache__typeof();

::uString* StringCache_Cache__get_Value(StringCache_Cache* __this);
void StringCache_Cache__set_Value(StringCache_Cache* __this, ::uString* value);
double StringCache_Cache__get_LastTimeUsed(StringCache_Cache* __this);
void StringCache_Cache__set_LastTimeUsed(StringCache_Cache* __this, double value);
int StringCache_Cache__get_StringHash(StringCache_Cache* __this);
void StringCache_Cache__set_StringHash(StringCache_Cache* __this, int value);
double StringCache_Cache__get_IdleTime(StringCache_Cache* __this);
int StringCache_Cache__GetHashCode(StringCache_Cache* __this);
void StringCache_Cache__UpdateLastTimeUsed(StringCache_Cache* __this);
void StringCache_Cache___ObjInit(StringCache_Cache* __this, ::uString* s);
StringCache_Cache* StringCache_Cache__New_1(::uStatic* __this, ::uString* s);

struct StringCache_Cache : ::uObject
{
    ::uStrong< ::uString*> _Value;
    double _LastTimeUsed;
    int _StringHash;

    void UpdateLastTimeUsed() { StringCache_Cache__UpdateLastTimeUsed(this); }
    void _ObjInit(::uString* s) { StringCache_Cache___ObjInit(this, s); }
    ::uString* Value() { return StringCache_Cache__get_Value(this); }
    void Value(::uString* value) { StringCache_Cache__set_Value(this, value); }
    double LastTimeUsed() { return StringCache_Cache__get_LastTimeUsed(this); }
    void LastTimeUsed(double value) { StringCache_Cache__set_LastTimeUsed(this, value); }
    int StringHash() { return StringCache_Cache__get_StringHash(this); }
    void StringHash(int value) { StringCache_Cache__set_StringHash(this, value); }
    double IdleTime() { return StringCache_Cache__get_IdleTime(this); }
};

}}

#include <app/Uno.Double.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {

}}


#endif
