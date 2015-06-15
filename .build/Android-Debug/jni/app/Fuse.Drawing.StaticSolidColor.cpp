// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.1.0\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.StaticSolidColor.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Drawing {

StaticSolidColor__uType* StaticSolidColor__typeof()
{
    static StaticSolidColor__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (StaticSolidColor__uType*)::uAllocClassType(sizeof(StaticSolidColor__uType), "Fuse.Drawing.StaticSolidColor", ::app::Fuse::Drawing::StaticBrush__typeof());
        type->__fp_get_IsCompletelyTransparent = (bool(*)(::app::Fuse::Drawing::Brush*))StaticSolidColor__get_IsCompletelyTransparent;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool StaticSolidColor__get_IsCompletelyTransparent(StaticSolidColor* __this)
{
    return ::app::Fuse::Drawing::Brush__get_IsCompletelyTransparent(__this) || (__this->Color().W == 0.0f);
}

::app::Uno::Float4 StaticSolidColor__get_Color(StaticSolidColor* __this)
{
    return __this->_color;
}

void StaticSolidColor___ObjInit_2(StaticSolidColor* __this, ::app::Uno::Float4 color)
{
    ::app::Fuse::Drawing::StaticBrush___ObjInit_1(__this);
    __this->_color = color;
}

StaticSolidColor* StaticSolidColor__New_1(::uStatic* __this, ::app::Uno::Float4 color)
{
    StaticSolidColor* inst = (::app::Fuse::Drawing::StaticSolidColor*)::uAllocObject(sizeof(::app::Fuse::Drawing::StaticSolidColor), ::app::Fuse::Drawing::StaticSolidColor__typeof());
    inst->_ObjInit_2(color);
    return inst;
}

}}}
