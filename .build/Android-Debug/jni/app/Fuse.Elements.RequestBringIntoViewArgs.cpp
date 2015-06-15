// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.RequestBringIntoViewArgs.h>

namespace app {
namespace Fuse {
namespace Elements {

RequestBringIntoViewArgs__uType* RequestBringIntoViewArgs__typeof()
{
    static RequestBringIntoViewArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (RequestBringIntoViewArgs__uType*)::uAllocClassType(sizeof(RequestBringIntoViewArgs__uType), "Fuse.Elements.RequestBringIntoViewArgs", ::app::Uno::EventArgs__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(RequestBringIntoViewArgs, _Element);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Element";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Elements::Element* RequestBringIntoViewArgs__get_Element(RequestBringIntoViewArgs* __this)
{
    return __this->_Element;
}

void RequestBringIntoViewArgs__set_Element(RequestBringIntoViewArgs* __this, ::app::Fuse::Elements::Element* value)
{
    __this->_Element = value;
}

void RequestBringIntoViewArgs___ObjInit_1(RequestBringIntoViewArgs* __this, ::app::Fuse::Elements::Element* elm)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Element(elm);
}

RequestBringIntoViewArgs* RequestBringIntoViewArgs__New_2(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    RequestBringIntoViewArgs* inst = (::app::Fuse::Elements::RequestBringIntoViewArgs*)::uAllocObject(sizeof(::app::Fuse::Elements::RequestBringIntoViewArgs), ::app::Fuse::Elements::RequestBringIntoViewArgs__typeof());
    inst->_ObjInit_1(elm);
    return inst;
}

}}}
