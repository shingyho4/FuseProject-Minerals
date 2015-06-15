// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.1.0\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.GradientStop.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>

namespace app {
namespace Fuse {
namespace Drawing {

GradientStop__uType* GradientStop__typeof()
{
    static GradientStop__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GradientStop__uType*)::uAllocClassType(sizeof(GradientStop__uType), "Fuse.Drawing.GradientStop", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(GradientStop, Changed);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Changed";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float GradientStop__get_Offset(GradientStop* __this)
{
    return __this->_offset;
}

void GradientStop__set_Offset(GradientStop* __this, float value)
{
    if (__this->_offset != value)
    {
        __this->_offset = value;
        __this->OnChanged();
    }
}

::app::Uno::Float4 GradientStop__get_Color(GradientStop* __this)
{
    return __this->_color;
}

void GradientStop__set_Color(GradientStop* __this, ::app::Uno::Float4 value)
{
    if (::app::Uno::Float4__op_Inequality(NULL, __this->_color, value))
    {
        __this->_color = value;
        __this->OnChanged();
    }
}

void GradientStop__OnChanged(GradientStop* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Changed, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Changed)->InvokeVoid();
    }
}

}}}
