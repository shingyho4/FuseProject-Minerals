// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.Button.h>
#include <app/Uno.Type.h>
#include <app/Uno.UX.Template__Fuse_Controls_Button.h>

namespace app {
namespace Uno {
namespace UX {

Template__Fuse_Controls_Button__uType* Template__Fuse_Controls_Button__typeof()
{
    static Template__Fuse_Controls_Button__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Template__Fuse_Controls_Button__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_Button__uType), "Uno.UX.Template<Fuse.Controls.Button>", ::uObject__typeof(), 1);
        type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_Button__Apply;

        type->Implements[0] = ::app::Uno::UX::ITemplate__typeof();

        type->InterfaceOffsets[0] = offsetof(Template__Fuse_Controls_Button__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Template__Fuse_Controls_Button__get_Cascade(Template__Fuse_Controls_Button* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_Button__set_Cascade(Template__Fuse_Controls_Button* __this, bool value)
{
    __this->_cascade = value;
}

bool Template__Fuse_Controls_Button__get_AffectSubtypes(Template__Fuse_Controls_Button* __this)
{
    return __this->_affectSubtypes;
}

void Template__Fuse_Controls_Button__set_AffectSubtypes(Template__Fuse_Controls_Button* __this, bool value)
{
    __this->_affectSubtypes = value;
}

bool Template__Fuse_Controls_Button__Apply(Template__Fuse_Controls_Button* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::Button__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Button*>(obj, ::app::Fuse::Controls::Button__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::Button__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Button*>(obj, ::app::Fuse::Controls::Button__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

void Template__Fuse_Controls_Button___ObjInit(Template__Fuse_Controls_Button* __this)
{
    __this->_cascade = true;
}

}}}
