// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__INT__INT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__INT__INT_H__

#include <app/Uno.Collections.Dictionary2_Bucket__int__int.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__int__int;

struct Dictionary__int__int__uType : ::uClassType
{
};

Dictionary__int__int__uType* Dictionary__int__int__typeof();

void Dictionary__int__int__Rehash(Dictionary__int__int* __this);
void Dictionary__int__int__Add(Dictionary__int__int* __this, int key, int value);
bool Dictionary__int__int__TryGetValue(Dictionary__int__int* __this, int key, int* value);
void Dictionary__int__int___ObjInit(Dictionary__int__int* __this);
Dictionary__int__int* Dictionary__int__int__New_1(::uStatic* __this);

struct Dictionary__int__int : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void Rehash() { Dictionary__int__int__Rehash(this); }
    void Add(int key, int value) { Dictionary__int__int__Add(this, key, value); }
    bool TryGetValue(int key, int* value) { return Dictionary__int__int__TryGetValue(this, key, value); }
    void _ObjInit() { Dictionary__int__int___ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
