// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.BasicTheme.BasicTheme_Fuse_Elements_Element_float_Width_Property.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace BasicTheme {

BasicTheme_Fuse_Elements_Element_float_Width_Property__uType* BasicTheme_Fuse_Elements_Element_float_Width_Property__typeof()
{
    static BasicTheme_Fuse_Elements_Element_float_Width_Property__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BasicTheme_Fuse_Elements_Element_float_Width_Property__uType*)::uAllocClassType(sizeof(BasicTheme_Fuse_Elements_Element_float_Width_Property__uType), "Fuse.BasicTheme.BasicTheme.Fuse_Elements_Element_float_Width_Property", ::app::Uno::UX::Property__float__typeof(), 0, 1);
        type->__fp_OnGet = (float(*)(::app::Uno::UX::Property__float*))BasicTheme_Fuse_Elements_Element_float_Width_Property__OnGet;
        type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float*, float))BasicTheme_Fuse_Elements_Element_float_Width_Property__OnSet;

        type->StrongRefOffsets[0] = offsetof(BasicTheme_Fuse_Elements_Element_float_Width_Property, _obj);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_obj";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float BasicTheme_Fuse_Elements_Element_float_Width_Property__OnGet(BasicTheme_Fuse_Elements_Element_float_Width_Property* __this)
{
    return ::uPtr< ::app::Fuse::Elements::Element*>(__this->_obj)->Width();
}

void BasicTheme_Fuse_Elements_Element_float_Width_Property__OnSet(BasicTheme_Fuse_Elements_Element_float_Width_Property* __this, float v)
{
    ::uPtr< ::app::Fuse::Elements::Element*>(__this->_obj)->Width(v);
}

void BasicTheme_Fuse_Elements_Element_float_Width_Property___ObjInit_2(BasicTheme_Fuse_Elements_Element_float_Width_Property* __this, ::app::Fuse::Elements::Element* obj)
{
    ::app::Uno::UX::Property__float___ObjInit_1(__this, 0);
    __this->_obj = obj;
}

BasicTheme_Fuse_Elements_Element_float_Width_Property* BasicTheme_Fuse_Elements_Element_float_Width_Property__New_1(::uStatic* __this, ::app::Fuse::Elements::Element* obj)
{
    BasicTheme_Fuse_Elements_Element_float_Width_Property* inst = (::app::Fuse::BasicTheme::BasicTheme_Fuse_Elements_Element_float_Width_Property*)::uAllocObject(sizeof(::app::Fuse::BasicTheme::BasicTheme_Fuse_Elements_Element_float_Width_Property), ::app::Fuse::BasicTheme::BasicTheme_Fuse_Elements_Element_float_Width_Property__typeof());
    inst->_ObjInit_2(obj);
    return inst;
}

}}}
