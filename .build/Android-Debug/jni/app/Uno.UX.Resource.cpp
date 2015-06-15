// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.String.h>
#include <app/Uno.UX.Resource.h>

namespace app {
namespace Uno {
namespace UX {

Resource__uType* Resource__typeof()
{
    static Resource__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Resource__uType*)::uAllocClassType(sizeof(Resource__uType), "Uno.UX.Resource", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(Resource, _Key);
        type->StrongRefOffsets[1] = offsetof(Resource, _Value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Key";
        type->StrongRefNames[1] = "_Value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* Resource__get_Key(Resource* __this)
{
    return __this->_Key;
}

void Resource__set_Key(Resource* __this, ::uString* value)
{
    __this->_Key = value;
}

::uObject* Resource__get_Value(Resource* __this)
{
    return __this->_Value;
}

void Resource__set_Value(Resource* __this, ::uObject* value)
{
    __this->_Value = value;
}

void Resource___ObjInit(Resource* __this, ::uString* key, ::uObject* value)
{
    __this->Key(key);
    __this->Value(value);
}

Resource* Resource__New_1(::uStatic* __this, ::uString* key, ::uObject* value)
{
    Resource* inst = (::app::Uno::UX::Resource*)::uAllocObject(sizeof(::app::Uno::UX::Resource), ::app::Uno::UX::Resource__typeof());
    inst->_ObjInit(key, value);
    return inst;
}

}}}
