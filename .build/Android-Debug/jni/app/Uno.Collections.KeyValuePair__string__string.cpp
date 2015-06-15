// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.KeyValuePair__string__string.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

KeyValuePair__string__string__uType* KeyValuePair__string__string__typeof()
{
    static KeyValuePair__string__string__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (KeyValuePair__string__string__uType*)::uAllocValueType(sizeof(KeyValuePair__string__string__uType), "Uno.Collections.KeyValuePair<string,string>", sizeof(KeyValuePair__string__string), 0, 2);
        type->StrongRefOffsets[0] = offsetof(KeyValuePair__string__string, _key);
        type->StrongRefOffsets[1] = offsetof(KeyValuePair__string__string, _value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_key";
        type->StrongRefNames[1] = "_value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* KeyValuePair__string__string__get_Key(KeyValuePair__string__string* __this)
{
    return __this->_key;
}

::uString* KeyValuePair__string__string__get_Value(KeyValuePair__string__string* __this)
{
    return __this->_value;
}

void KeyValuePair__string__string___ObjInit(KeyValuePair__string__string* __this, ::uString* key, ::uString* value)
{
    __this->_key = key;
    __this->_value = value;
}

KeyValuePair__string__string KeyValuePair__string__string__New_1(::uStatic* __this, ::uString* key, ::uString* value)
{
    KeyValuePair__string__string inst = ::uDefault< KeyValuePair__string__string>();
    inst._ObjInit(key, value);
    return inst;
}

}}}
