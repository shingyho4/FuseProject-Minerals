// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.Pointer_PointerRecord.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Pointer_PointerRecord.h>

namespace app {
namespace Uno {
namespace Collections {

KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__uType* KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__typeof()
{
    static KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__uType*)::uAllocValueType(sizeof(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__uType), "Uno.Collections.KeyValuePair<int,Fuse.Input.Pointer_PointerRecord>", sizeof(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord), 0, 1);
        type->StrongRefOffsets[0] = offsetof(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord, _value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__get_Key(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord* __this)
{
    return __this->_key;
}

void KeyValuePair__int__Fuse_Input_Pointer_PointerRecord___ObjInit(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord* __this, int key, ::app::Fuse::Input::Pointer_PointerRecord* value)
{
    __this->_key = key;
    __this->_value = value;
}

KeyValuePair__int__Fuse_Input_Pointer_PointerRecord KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__New_1(::uStatic* __this, int key, ::app::Fuse::Input::Pointer_PointerRecord* value)
{
    KeyValuePair__int__Fuse_Input_Pointer_PointerRecord inst = ::uDefault< KeyValuePair__int__Fuse_Input_Pointer_PointerRecord>();
    inst._ObjInit(key, value);
    return inst;
}

}}}
