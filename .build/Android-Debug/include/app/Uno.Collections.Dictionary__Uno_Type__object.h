// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__UNO_TYPE__OBJECT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__UNO_TYPE__OBJECT_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Uno_Type__object.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Uno_Type__object;

struct Dictionary__Uno_Type__object__uType : ::uClassType
{
};

Dictionary__Uno_Type__object__uType* Dictionary__Uno_Type__object__typeof();

void Dictionary__Uno_Type__object__Rehash(Dictionary__Uno_Type__object* __this);
void Dictionary__Uno_Type__object__Add(Dictionary__Uno_Type__object* __this, ::uType* key, ::uObject* value);
bool Dictionary__Uno_Type__object__TryGetValue(Dictionary__Uno_Type__object* __this, ::uType* key, ::uObject** value);
void Dictionary__Uno_Type__object___ObjInit(Dictionary__Uno_Type__object* __this);
Dictionary__Uno_Type__object* Dictionary__Uno_Type__object__New_1(::uStatic* __this);

struct Dictionary__Uno_Type__object : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void Rehash() { Dictionary__Uno_Type__object__Rehash(this); }
    void Add(::uType* key, ::uObject* value) { Dictionary__Uno_Type__object__Add(this, key, value); }
    bool TryGetValue(::uType* key, ::uObject** value) { return Dictionary__Uno_Type__object__TryGetValue(this, key, value); }
    void _ObjInit() { Dictionary__Uno_Type__object___ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
