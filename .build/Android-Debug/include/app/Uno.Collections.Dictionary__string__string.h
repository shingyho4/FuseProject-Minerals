// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__STRING_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__STRING_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__string.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__string; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__string;

struct Dictionary__string__string__uType : ::uClassType
{
};

Dictionary__string__string__uType* Dictionary__string__string__typeof();

int Dictionary__string__string__get_Count(Dictionary__string__string* __this);
::uString* Dictionary__string__string__get_Item(Dictionary__string__string* __this, ::uString* key);
void Dictionary__string__string__set_Item(Dictionary__string__string* __this, ::uString* key, ::uString* value);
::app::Uno::Collections::Dictionary2_Enumerator__string__string Dictionary__string__string__GetEnumerator(Dictionary__string__string* __this);
void Dictionary__string__string__Rehash(Dictionary__string__string* __this);
void Dictionary__string__string__Add(Dictionary__string__string* __this, ::uString* key, ::uString* value);
bool Dictionary__string__string__TryGetValue(Dictionary__string__string* __this, ::uString* key, ::uString** value);
bool Dictionary__string__string__ContainsKey(Dictionary__string__string* __this, ::uString* key);
void Dictionary__string__string___ObjInit(Dictionary__string__string* __this);
Dictionary__string__string* Dictionary__string__string__New_1(::uStatic* __this);

struct Dictionary__string__string : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::app::Uno::Collections::Dictionary2_Enumerator__string__string GetEnumerator();
    void Rehash() { Dictionary__string__string__Rehash(this); }
    void Add(::uString* key, ::uString* value) { Dictionary__string__string__Add(this, key, value); }
    bool TryGetValue(::uString* key, ::uString** value) { return Dictionary__string__string__TryGetValue(this, key, value); }
    bool ContainsKey(::uString* key) { return Dictionary__string__string__ContainsKey(this, key); }
    void _ObjInit() { Dictionary__string__string___ObjInit(this); }
    int Count() { return Dictionary__string__string__get_Count(this); }
    ::uString* Item(::uString* key) { return Dictionary__string__string__get_Item(this, key); }
    void Item(::uString* key, ::uString* value) { Dictionary__string__string__set_Item(this, key, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__string__string.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__string__string Dictionary__string__string::GetEnumerator() { return Dictionary__string__string__GetEnumerator(this); }

}}}


#endif
