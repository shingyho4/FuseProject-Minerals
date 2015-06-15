// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.BasicTheme.BasicTheme_Fuse_Elements_Element_float4_TextCol-60124f9c.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace BasicTheme {

BasicTheme_Fuse_Elements_Element_float4_TextColor_Property__uType* BasicTheme_Fuse_Elements_Element_float4_TextColor_Property__typeof()
{
    static BasicTheme_Fuse_Elements_Element_float4_TextColor_Property__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BasicTheme_Fuse_Elements_Element_float4_TextColor_Property__uType*)::uAllocClassType(sizeof(BasicTheme_Fuse_Elements_Element_float4_TextColor_Property__uType), "Fuse.BasicTheme.BasicTheme.Fuse_Elements_Element_float4_TextColor_Property", ::app::Uno::UX::Property__float4__typeof(), 0, 1);
        type->__fp_OnGet = (::app::Uno::Float4(*)(::app::Uno::UX::Property__float4*))BasicTheme_Fuse_Elements_Element_float4_TextColor_Property__OnGet;
        type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float4*, ::app::Uno::Float4))BasicTheme_Fuse_Elements_Element_float4_TextColor_Property__OnSet;

        type->StrongRefOffsets[0] = offsetof(BasicTheme_Fuse_Elements_Element_float4_TextColor_Property, _obj);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_obj";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float4 BasicTheme_Fuse_Elements_Element_float4_TextColor_Property__OnGet(BasicTheme_Fuse_Elements_Element_float4_TextColor_Property* __this)
{
    return ::uPtr< ::app::Fuse::Elements::Element*>(__this->_obj)->TextColor();
}

void BasicTheme_Fuse_Elements_Element_float4_TextColor_Property__OnSet(BasicTheme_Fuse_Elements_Element_float4_TextColor_Property* __this, ::app::Uno::Float4 v)
{
    ::uPtr< ::app::Fuse::Elements::Element*>(__this->_obj)->TextColor(v);
}

void BasicTheme_Fuse_Elements_Element_float4_TextColor_Property___ObjInit_2(BasicTheme_Fuse_Elements_Element_float4_TextColor_Property* __this, ::app::Fuse::Elements::Element* obj)
{
    ::app::Uno::UX::Property__float4___ObjInit_1(__this, 0);
    __this->_obj = obj;
}

BasicTheme_Fuse_Elements_Element_float4_TextColor_Property* BasicTheme_Fuse_Elements_Element_float4_TextColor_Property__New_1(::uStatic* __this, ::app::Fuse::Elements::Element* obj)
{
    BasicTheme_Fuse_Elements_Element_float4_TextColor_Property* inst = (::app::Fuse::BasicTheme::BasicTheme_Fuse_Elements_Element_float4_TextColor_Property*)::uAllocObject(sizeof(::app::Fuse::BasicTheme::BasicTheme_Fuse_Elements_Element_float4_TextColor_Property), ::app::Fuse::BasicTheme::BasicTheme_Fuse_Elements_Element_float4_TextColor_Property__typeof());
    inst->_ObjInit_2(obj);
    return inst;
}

}}}
