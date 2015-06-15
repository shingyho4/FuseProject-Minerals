// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_I_FLUSH__BOOL_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_I_FLUSH__BOOL_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_IFlush__bool.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Fuse_IFlush__bool;

struct Dictionary__Fuse_IFlush__bool__uType : ::uClassType
{
};

Dictionary__Fuse_IFlush__bool__uType* Dictionary__Fuse_IFlush__bool__typeof();

bool Dictionary__Fuse_IFlush__bool__get_Item(Dictionary__Fuse_IFlush__bool* __this, ::uObject* key);
void Dictionary__Fuse_IFlush__bool__set_Item(Dictionary__Fuse_IFlush__bool* __this, ::uObject* key, bool value);
void Dictionary__Fuse_IFlush__bool__Rehash(Dictionary__Fuse_IFlush__bool* __this);
void Dictionary__Fuse_IFlush__bool__Clear(Dictionary__Fuse_IFlush__bool* __this);
void Dictionary__Fuse_IFlush__bool__Add(Dictionary__Fuse_IFlush__bool* __this, ::uObject* key, bool value);
bool Dictionary__Fuse_IFlush__bool__ContainsKey(Dictionary__Fuse_IFlush__bool* __this, ::uObject* key);
void Dictionary__Fuse_IFlush__bool___ObjInit(Dictionary__Fuse_IFlush__bool* __this);
Dictionary__Fuse_IFlush__bool* Dictionary__Fuse_IFlush__bool__New_1(::uStatic* __this);

struct Dictionary__Fuse_IFlush__bool : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void Rehash() { Dictionary__Fuse_IFlush__bool__Rehash(this); }
    void Clear() { Dictionary__Fuse_IFlush__bool__Clear(this); }
    void Add(::uObject* key, bool value) { Dictionary__Fuse_IFlush__bool__Add(this, key, value); }
    bool ContainsKey(::uObject* key) { return Dictionary__Fuse_IFlush__bool__ContainsKey(this, key); }
    void _ObjInit() { Dictionary__Fuse_IFlush__bool___ObjInit(this); }
    bool Item(::uObject* key) { return Dictionary__Fuse_IFlush__bool__get_Item(this, key); }
    void Item(::uObject* key, bool value) { Dictionary__Fuse_IFlush__bool__set_Item(this, key, value); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
