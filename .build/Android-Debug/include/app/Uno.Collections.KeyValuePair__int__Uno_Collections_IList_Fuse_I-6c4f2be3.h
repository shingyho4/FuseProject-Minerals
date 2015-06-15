// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__UNO_COLLECTIONS_I_LIST_FUSE_I_6C4F2BE3_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__UNO_COLLECTIONS_I_LIST_FUSE_I_6C4F2BE3_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_;

struct KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___uType : ::uValueType
{
};

KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof();

::uObject* KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Value(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
void KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int key, ::uObject* value);
KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(::uStatic* __this, int key, ::uObject* value);

struct KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_
{
    int _key;
    ::uStrong< ::uObject*> _value;

    void _ObjInit(int key, ::uObject* value) { KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(this, key, value); }
    ::uObject* Value() { return KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Value(this); }

    KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_& operator =(const KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_& copy)
    {
        ::uCopyValue(this, KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof(), &copy);
        return *this;
    }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
