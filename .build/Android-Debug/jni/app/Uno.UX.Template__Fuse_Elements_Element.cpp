// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.Element.h>
#include <app/Uno.Type.h>
#include <app/Uno.UX.Template__Fuse_Elements_Element.h>

namespace app {
namespace Uno {
namespace UX {

Template__Fuse_Elements_Element__uType* Template__Fuse_Elements_Element__typeof()
{
    static Template__Fuse_Elements_Element__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Template__Fuse_Elements_Element__uType*)::uAllocClassType(sizeof(Template__Fuse_Elements_Element__uType), "Uno.UX.Template<Fuse.Elements.Element>", ::uObject__typeof(), 1);
        type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Elements_Element__Apply;

        type->Implements[0] = ::app::Uno::UX::ITemplate__typeof();

        type->InterfaceOffsets[0] = offsetof(Template__Fuse_Elements_Element__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Template__Fuse_Elements_Element__get_Cascade(Template__Fuse_Elements_Element* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Elements_Element__set_Cascade(Template__Fuse_Elements_Element* __this, bool value)
{
    __this->_cascade = value;
}

bool Template__Fuse_Elements_Element__get_AffectSubtypes(Template__Fuse_Elements_Element* __this)
{
    return __this->_affectSubtypes;
}

void Template__Fuse_Elements_Element__set_AffectSubtypes(Template__Fuse_Elements_Element* __this, bool value)
{
    __this->_affectSubtypes = value;
}

bool Template__Fuse_Elements_Element__Apply(Template__Fuse_Elements_Element* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Elements::Element__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Elements::Element*>(obj, ::app::Fuse::Elements::Element__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Elements::Element__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Elements::Element*>(obj, ::app::Fuse::Elements::Element__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

void Template__Fuse_Elements_Element___ObjInit(Template__Fuse_Elements_Element* __this)
{
    __this->_cascade = true;
}

}}}
