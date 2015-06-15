// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/_.NavButton.h>
#include <app/Uno.Type.h>
#include <app/Uno.UX.Template__NavButton.h>

namespace app {
namespace Uno {
namespace UX {

Template__NavButton__uType* Template__NavButton__typeof()
{
    static Template__NavButton__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Template__NavButton__uType*)::uAllocClassType(sizeof(Template__NavButton__uType), "Uno.UX.Template<NavButton>", ::uObject__typeof(), 1);
        type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__NavButton__Apply;

        type->Implements[0] = ::app::Uno::UX::ITemplate__typeof();

        type->InterfaceOffsets[0] = offsetof(Template__NavButton__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Template__NavButton__get_Cascade(Template__NavButton* __this)
{
    return __this->_cascade;
}

void Template__NavButton__set_Cascade(Template__NavButton* __this, bool value)
{
    __this->_cascade = value;
}

bool Template__NavButton__get_AffectSubtypes(Template__NavButton* __this)
{
    return __this->_affectSubtypes;
}

void Template__NavButton__set_AffectSubtypes(Template__NavButton* __this, bool value)
{
    __this->_affectSubtypes = value;
}

bool Template__NavButton__Apply(Template__NavButton* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::NavButton__typeof()))
        {
            __this->OnApply(::uCast< ::app::NavButton*>(obj, ::app::NavButton__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::NavButton__typeof())
        {
            __this->OnApply(::uCast< ::app::NavButton*>(obj, ::app::NavButton__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

void Template__NavButton___ObjInit(Template__NavButton* __this)
{
    __this->_cascade = true;
}

}}}
