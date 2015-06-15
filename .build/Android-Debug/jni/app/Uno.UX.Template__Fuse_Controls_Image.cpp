// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.Image.h>
#include <app/Uno.Type.h>
#include <app/Uno.UX.Template__Fuse_Controls_Image.h>

namespace app {
namespace Uno {
namespace UX {

Template__Fuse_Controls_Image__uType* Template__Fuse_Controls_Image__typeof()
{
    static Template__Fuse_Controls_Image__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Template__Fuse_Controls_Image__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_Image__uType), "Uno.UX.Template<Fuse.Controls.Image>", ::uObject__typeof(), 1);
        type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_Image__Apply;

        type->Implements[0] = ::app::Uno::UX::ITemplate__typeof();

        type->InterfaceOffsets[0] = offsetof(Template__Fuse_Controls_Image__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Template__Fuse_Controls_Image__get_Cascade(Template__Fuse_Controls_Image* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_Image__set_Cascade(Template__Fuse_Controls_Image* __this, bool value)
{
    __this->_cascade = value;
}

bool Template__Fuse_Controls_Image__get_AffectSubtypes(Template__Fuse_Controls_Image* __this)
{
    return __this->_affectSubtypes;
}

void Template__Fuse_Controls_Image__set_AffectSubtypes(Template__Fuse_Controls_Image* __this, bool value)
{
    __this->_affectSubtypes = value;
}

bool Template__Fuse_Controls_Image__Apply(Template__Fuse_Controls_Image* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::Image__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Image*>(obj, ::app::Fuse::Controls::Image__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::Image__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Image*>(obj, ::app::Fuse::Controls::Image__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

void Template__Fuse_Controls_Image___ObjInit(Template__Fuse_Controls_Image* __this)
{
    __this->_cascade = true;
}

}}}
