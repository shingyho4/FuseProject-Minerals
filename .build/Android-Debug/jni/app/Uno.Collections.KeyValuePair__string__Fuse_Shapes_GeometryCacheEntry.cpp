// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Shapes.GeometryCacheEntry.h>
#include <app/Uno.Collections.KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__uType* KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__typeof()
{
    static KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__uType*)::uAllocValueType(sizeof(KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__uType), "Uno.Collections.KeyValuePair<string,Fuse.Shapes.GeometryCacheEntry>", sizeof(KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry), 0, 2);
        type->StrongRefOffsets[0] = offsetof(KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry, _key);
        type->StrongRefOffsets[1] = offsetof(KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry, _value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_key";
        type->StrongRefNames[1] = "_value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__get_Key(KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry* __this)
{
    return __this->_key;
}

::app::Fuse::Shapes::GeometryCacheEntry* KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__get_Value(KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry* __this)
{
    return __this->_value;
}

void KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry___ObjInit(KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry* value)
{
    __this->_key = key;
    __this->_value = value;
}

KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__New_1(::uStatic* __this, ::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry* value)
{
    KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry inst = ::uDefault< KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry>();
    inst._ObjInit(key, value);
    return inst;
}

}}}
