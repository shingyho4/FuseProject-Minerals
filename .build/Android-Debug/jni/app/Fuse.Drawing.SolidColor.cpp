// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.1.0\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Drawing {

SolidColor__uType* SolidColor__typeof()
{
    static SolidColor__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SolidColor__uType*)::uAllocClassType(sizeof(SolidColor__uType), "Fuse.Drawing.SolidColor", ::app::Fuse::Drawing::DynamicBrush__typeof());
        type->__fp_get_IsCompletelyTransparent = (bool(*)(::app::Fuse::Drawing::Brush*))SolidColor__get_IsCompletelyTransparent;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float4 SolidColor__get_Color(SolidColor* __this)
{
    return __this->_color;
}

void SolidColor__set_Color(SolidColor* __this, ::app::Uno::Float4 value)
{
    if (::app::Uno::Float4__op_Inequality(NULL, __this->_color, value))
    {
        __this->_color = value;
        __this->OnShadingChanged();
    }
}

bool SolidColor__get_IsCompletelyTransparent(SolidColor* __this)
{
    return ::app::Fuse::Drawing::DynamicBrush__get_IsCompletelyTransparent(__this) || (__this->Color().W == 0.0f);
}

void SolidColor___ObjInit_2(SolidColor* __this)
{
    ::app::Fuse::Drawing::DynamicBrush___ObjInit_1(__this);
    __this->_color = ::app::Uno::Float4__New_1(NULL, 1.0f);
}

SolidColor* SolidColor__New_1(::uStatic* __this)
{
    SolidColor* inst = (::app::Fuse::Drawing::SolidColor*)::uAllocObject(sizeof(::app::Fuse::Drawing::SolidColor), ::app::Fuse::Drawing::SolidColor__typeof());
    inst->_ObjInit_2();
    return inst;
}

}}}
