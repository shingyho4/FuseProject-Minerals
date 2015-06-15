// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.1.0\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.GradientStop.h>
#include <app/Fuse.Drawing.LinearGradient.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Drawing {

LinearGradient__uType* LinearGradient__typeof()
{
    static LinearGradient__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (LinearGradient__uType*)::uAllocClassType(sizeof(LinearGradient__uType), "Fuse.Drawing.LinearGradient", ::app::Fuse::Drawing::DynamicBrush__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(LinearGradient, _sortedStops);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_sortedStops";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uArray* LinearGradient__get_SortedStops(LinearGradient* __this)
{
    return __this->_sortedStops;
}

::app::Uno::Float2 LinearGradient__get_StartPoint(LinearGradient* __this)
{
    return __this->_startPoint;
}

void LinearGradient__set_StartPoint(LinearGradient* __this, ::app::Uno::Float2 value)
{
    if (::app::Uno::Float2__op_Inequality(NULL, __this->_startPoint, value))
    {
        __this->_startPoint = value;
        __this->OnShadingChanged();
    }
}

::app::Uno::Float2 LinearGradient__get_EndPoint(LinearGradient* __this)
{
    return __this->_endPoint;
}

void LinearGradient__set_EndPoint(LinearGradient* __this, ::app::Uno::Float2 value)
{
    if (::app::Uno::Float2__op_Inequality(NULL, __this->_endPoint, value))
    {
        __this->_endPoint = value;
        __this->OnShadingChanged();
    }
}

}}}
