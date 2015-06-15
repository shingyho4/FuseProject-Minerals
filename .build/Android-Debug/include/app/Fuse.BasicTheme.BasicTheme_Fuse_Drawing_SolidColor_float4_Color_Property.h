// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BASIC_THEME_BASIC_THEME_FUSE_DRAWING_SOLID_COLOR_FLOAT4_COLOR_PROPERTY_H__
#define __APP_FUSE_BASIC_THEME_BASIC_THEME_FUSE_DRAWING_SOLID_COLOR_FLOAT4_COLOR_PROPERTY_H__

#include <app/Uno.UX.Property__float4.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct SolidColor; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace BasicTheme {

struct BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property;

struct BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property__uType : ::app::Uno::UX::Property__float4__uType
{
};

BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property__uType* BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property__typeof();

::app::Uno::Float4 BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property__OnGet(BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property* __this);
void BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property__OnSet(BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::app::Uno::Float4 v);
void BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property___ObjInit_2(BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::app::Fuse::Drawing::SolidColor* obj);
BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property* BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(::uStatic* __this, ::app::Fuse::Drawing::SolidColor* obj);

struct BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property : ::app::Uno::UX::Property__float4
{
    ::uStrong< ::app::Fuse::Drawing::SolidColor*> _obj;

    void _ObjInit_2(::app::Fuse::Drawing::SolidColor* obj) { BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property___ObjInit_2(this, obj); }
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace BasicTheme {

}}}


#endif
