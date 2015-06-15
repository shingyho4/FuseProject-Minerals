// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.IList__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.KeyValuePair__int__Uno_Collections_IList_Fuse_I-6c4f2be3.h>

namespace app {
namespace Uno {
namespace Collections {

KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof()
{
    static KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___uType*)::uAllocValueType(sizeof(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___uType), "Uno.Collections.KeyValuePair<int,Uno.Collections.IList<Fuse.Input.Capturer>>", sizeof(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_), 0, 1);
        type->StrongRefOffsets[0] = offsetof(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_, _value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Value(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
    return __this->_value;
}

void KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int key, ::uObject* value)
{
    __this->_key = key;
    __this->_value = value;
}

KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(::uStatic* __this, int key, ::uObject* value)
{
    KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ inst = ::uDefault< KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_>();
    inst._ObjInit(key, value);
    return inst;
}

}}}
