// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__FUSE_INPUT_POINTER_POINTER_RECORD_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__FUSE_INPUT_POINTER_POINTER_RECORD_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct Pointer_PointerRecord; } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__int__Fuse_Input_Pointer_PointerRecord;

struct KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__uType : ::uValueType
{
};

KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__uType* KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__typeof();

int KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__get_Key(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord* __this);
void KeyValuePair__int__Fuse_Input_Pointer_PointerRecord___ObjInit(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord* __this, int key, ::app::Fuse::Input::Pointer_PointerRecord* value);
KeyValuePair__int__Fuse_Input_Pointer_PointerRecord KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__New_1(::uStatic* __this, int key, ::app::Fuse::Input::Pointer_PointerRecord* value);

struct KeyValuePair__int__Fuse_Input_Pointer_PointerRecord
{
    int _key;
    ::uStrong< ::app::Fuse::Input::Pointer_PointerRecord*> _value;

    void _ObjInit(int key, ::app::Fuse::Input::Pointer_PointerRecord* value) { KeyValuePair__int__Fuse_Input_Pointer_PointerRecord___ObjInit(this, key, value); }
    int Key() { return KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__get_Key(this); }

    KeyValuePair__int__Fuse_Input_Pointer_PointerRecord& operator =(const KeyValuePair__int__Fuse_Input_Pointer_PointerRecord& copy)
    {
        ::uCopyValue(this, KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__typeof(), &copy);
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
