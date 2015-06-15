// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.Capturer.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Capturer.h>

namespace app {
namespace Uno {
namespace Collections {

KeyValuePair__int__Fuse_Input_Capturer__uType* KeyValuePair__int__Fuse_Input_Capturer__typeof()
{
    static KeyValuePair__int__Fuse_Input_Capturer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (KeyValuePair__int__Fuse_Input_Capturer__uType*)::uAllocValueType(sizeof(KeyValuePair__int__Fuse_Input_Capturer__uType), "Uno.Collections.KeyValuePair<int,Fuse.Input.Capturer>", sizeof(KeyValuePair__int__Fuse_Input_Capturer), 0, 1);
        type->StrongRefOffsets[0] = offsetof(KeyValuePair__int__Fuse_Input_Capturer, _value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int KeyValuePair__int__Fuse_Input_Capturer__get_Key(KeyValuePair__int__Fuse_Input_Capturer* __this)
{
    return __this->_key;
}

::app::Fuse::Input::Capturer* KeyValuePair__int__Fuse_Input_Capturer__get_Value(KeyValuePair__int__Fuse_Input_Capturer* __this)
{
    return __this->_value;
}

void KeyValuePair__int__Fuse_Input_Capturer___ObjInit(KeyValuePair__int__Fuse_Input_Capturer* __this, int key, ::app::Fuse::Input::Capturer* value)
{
    __this->_key = key;
    __this->_value = value;
}

KeyValuePair__int__Fuse_Input_Capturer KeyValuePair__int__Fuse_Input_Capturer__New_1(::uStatic* __this, int key, ::app::Fuse::Input::Capturer* value)
{
    KeyValuePair__int__Fuse_Input_Capturer inst = ::uDefault< KeyValuePair__int__Fuse_Input_Capturer>();
    inst._ObjInit(key, value);
    return inst;
}

}}}
