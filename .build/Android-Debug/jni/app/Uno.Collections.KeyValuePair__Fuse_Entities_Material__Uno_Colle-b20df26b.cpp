// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.Material.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Entities_Material__Uno_Colle-b20df26b.h>
#include <app/Uno.Collections.List__Fuse_Entities_Entry.h>

namespace app {
namespace Uno {
namespace Collections {

KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType* KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof()
{
    static KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType*)::uAllocValueType(sizeof(KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType), "Uno.Collections.KeyValuePair<Fuse.Entities.Material,Uno.Collections.List<Fuse.Entities.Entry>>", sizeof(KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_), 0, 2);
        type->StrongRefOffsets[0] = offsetof(KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_, _key);
        type->StrongRefOffsets[1] = offsetof(KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_, _value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_key";
        type->StrongRefNames[1] = "_value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Entities::Material* KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Key(KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
    return __this->_key;
}

::app::Uno::Collections::List__Fuse_Entities_Entry* KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Value(KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this)
{
    return __this->_value;
}

void KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Material* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value)
{
    __this->_key = key;
    __this->_value = value;
}

KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___New_1(::uStatic* __this, ::app::Fuse::Entities::Material* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value)
{
    KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ inst = ::uDefault< KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_>();
    inst._ObjInit(key, value);
    return inst;
}

}}}
