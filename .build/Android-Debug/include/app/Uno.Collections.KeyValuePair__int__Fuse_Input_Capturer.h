// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__FUSE_INPUT_CAPTURER_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__FUSE_INPUT_CAPTURER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct Capturer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__int__Fuse_Input_Capturer;

struct KeyValuePair__int__Fuse_Input_Capturer__uType : ::uValueType
{
};

KeyValuePair__int__Fuse_Input_Capturer__uType* KeyValuePair__int__Fuse_Input_Capturer__typeof();

int KeyValuePair__int__Fuse_Input_Capturer__get_Key(KeyValuePair__int__Fuse_Input_Capturer* __this);
::app::Fuse::Input::Capturer* KeyValuePair__int__Fuse_Input_Capturer__get_Value(KeyValuePair__int__Fuse_Input_Capturer* __this);
void KeyValuePair__int__Fuse_Input_Capturer___ObjInit(KeyValuePair__int__Fuse_Input_Capturer* __this, int key, ::app::Fuse::Input::Capturer* value);
KeyValuePair__int__Fuse_Input_Capturer KeyValuePair__int__Fuse_Input_Capturer__New_1(::uStatic* __this, int key, ::app::Fuse::Input::Capturer* value);

struct KeyValuePair__int__Fuse_Input_Capturer
{
    int _key;
    ::uStrong< ::app::Fuse::Input::Capturer*> _value;

    void _ObjInit(int key, ::app::Fuse::Input::Capturer* value) { KeyValuePair__int__Fuse_Input_Capturer___ObjInit(this, key, value); }
    int Key() { return KeyValuePair__int__Fuse_Input_Capturer__get_Key(this); }
    ::app::Fuse::Input::Capturer* Value() { return KeyValuePair__int__Fuse_Input_Capturer__get_Value(this); }

    KeyValuePair__int__Fuse_Input_Capturer& operator =(const KeyValuePair__int__Fuse_Input_Capturer& copy)
    {
        ::uCopyValue(this, KeyValuePair__int__Fuse_Input_Capturer__typeof(), &copy);
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
