// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_THEME_FUSE_ELEMENTS_ELEMENT_FLOAT_OPACITY_PROPERTY_H__
#define __APP_FUSE_BASIC_THEME_BASIC_THEME_FUSE_ELEMENTS_ELEMENT_FLOAT_OPACITY_PROPERTY_H__

#include <app/Uno.UX.Property__float.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicTheme_Fuse_Elements_Element_float_Opacity_Property;

struct BasicTheme_Fuse_Elements_Element_float_Opacity_Property__uType : ::app::Uno::UX::Property__float__uType
{
};

BasicTheme_Fuse_Elements_Element_float_Opacity_Property__uType* BasicTheme_Fuse_Elements_Element_float_Opacity_Property__typeof();

float BasicTheme_Fuse_Elements_Element_float_Opacity_Property__OnGet(BasicTheme_Fuse_Elements_Element_float_Opacity_Property* __this);
void BasicTheme_Fuse_Elements_Element_float_Opacity_Property__OnSet(BasicTheme_Fuse_Elements_Element_float_Opacity_Property* __this, float v);
void BasicTheme_Fuse_Elements_Element_float_Opacity_Property___ObjInit_2(BasicTheme_Fuse_Elements_Element_float_Opacity_Property* __this, ::app::Fuse::Elements::Element* obj);
BasicTheme_Fuse_Elements_Element_float_Opacity_Property* BasicTheme_Fuse_Elements_Element_float_Opacity_Property__New_1(::uStatic* __this, ::app::Fuse::Elements::Element* obj);

struct BasicTheme_Fuse_Elements_Element_float_Opacity_Property : ::app::Uno::UX::Property__float
{
    ::uStrong< ::app::Fuse::Elements::Element*> _obj;

    void _ObjInit_2(::app::Fuse::Elements::Element* obj) { BasicTheme_Fuse_Elements_Element_float_Opacity_Property___ObjInit_2(this, obj); }
};

}}}

#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace BasicTheme {

}}}


#endif
