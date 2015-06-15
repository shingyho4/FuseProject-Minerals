// This file was generated based on 'D:\Shing\work\OCIO\FuseProject\MyMineral\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/_.MainView_Fuse_Drawing_SolidColor_float4_Color_Property.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Uno.Int.h>

namespace app {

MainView_Fuse_Drawing_SolidColor_float4_Color_Property__uType* MainView_Fuse_Drawing_SolidColor_float4_Color_Property__typeof()
{
    static MainView_Fuse_Drawing_SolidColor_float4_Color_Property__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MainView_Fuse_Drawing_SolidColor_float4_Color_Property__uType*)::uAllocClassType(sizeof(MainView_Fuse_Drawing_SolidColor_float4_Color_Property__uType), "MainView.Fuse_Drawing_SolidColor_float4_Color_Property", ::app::Uno::UX::Property__float4__typeof(), 0, 1);
        type->__fp_OnGet = (::app::Uno::Float4(*)(::app::Uno::UX::Property__float4*))MainView_Fuse_Drawing_SolidColor_float4_Color_Property__OnGet;
        type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float4*, ::app::Uno::Float4))MainView_Fuse_Drawing_SolidColor_float4_Color_Property__OnSet;

        type->StrongRefOffsets[0] = offsetof(MainView_Fuse_Drawing_SolidColor_float4_Color_Property, _obj);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_obj";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float4 MainView_Fuse_Drawing_SolidColor_float4_Color_Property__OnGet(MainView_Fuse_Drawing_SolidColor_float4_Color_Property* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::SolidColor*>(__this->_obj)->Color();
}

void MainView_Fuse_Drawing_SolidColor_float4_Color_Property__OnSet(MainView_Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::app::Uno::Float4 v)
{
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(__this->_obj)->Color(v);
}

void MainView_Fuse_Drawing_SolidColor_float4_Color_Property___ObjInit_2(MainView_Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::app::Fuse::Drawing::SolidColor* obj)
{
    ::app::Uno::UX::Property__float4___ObjInit_1(__this, 0);
    __this->_obj = obj;
}

MainView_Fuse_Drawing_SolidColor_float4_Color_Property* MainView_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(::uStatic* __this, ::app::Fuse::Drawing::SolidColor* obj)
{
    MainView_Fuse_Drawing_SolidColor_float4_Color_Property* inst = (::app::MainView_Fuse_Drawing_SolidColor_float4_Color_Property*)::uAllocObject(sizeof(::app::MainView_Fuse_Drawing_SolidColor_float4_Color_Property), ::app::MainView_Fuse_Drawing_SolidColor_float4_Color_Property__typeof());
    inst->_ObjInit_2(obj);
    return inst;
}

}
