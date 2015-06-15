// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__STRING_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__STRING_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__string__string;

struct KeyValuePair__string__string__uType : ::uValueType
{
};

KeyValuePair__string__string__uType* KeyValuePair__string__string__typeof();

::uString* KeyValuePair__string__string__get_Key(KeyValuePair__string__string* __this);
::uString* KeyValuePair__string__string__get_Value(KeyValuePair__string__string* __this);
void KeyValuePair__string__string___ObjInit(KeyValuePair__string__string* __this, ::uString* key, ::uString* value);
KeyValuePair__string__string KeyValuePair__string__string__New_1(::uStatic* __this, ::uString* key, ::uString* value);

struct KeyValuePair__string__string
{
    ::uStrong< ::uString*> _key;
    ::uStrong< ::uString*> _value;

    void _ObjInit(::uString* key, ::uString* value) { KeyValuePair__string__string___ObjInit(this, key, value); }
    ::uString* Key() { return KeyValuePair__string__string__get_Key(this); }
    ::uString* Value() { return KeyValuePair__string__string__get_Value(this); }

    KeyValuePair__string__string& operator =(const KeyValuePair__string__string& copy)
    {
        ::uCopyValue(this, KeyValuePair__string__string__typeof(), &copy);
        return *this;
    }
};

}}}


#endif
