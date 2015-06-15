// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.1.0\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_LINEAR_GRADIENT_H__
#define __APP_FUSE_DRAWING_LINEAR_GRADIENT_H__

#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Uno.Float2.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }

namespace app {
namespace Fuse {
namespace Drawing {

struct LinearGradient;

struct LinearGradient__uType : ::app::Fuse::Drawing::DynamicBrush__uType
{
};

LinearGradient__uType* LinearGradient__typeof();

::uArray* LinearGradient__get_SortedStops(LinearGradient* __this);
::app::Uno::Float2 LinearGradient__get_StartPoint(LinearGradient* __this);
void LinearGradient__set_StartPoint(LinearGradient* __this, ::app::Uno::Float2 value);
::app::Uno::Float2 LinearGradient__get_EndPoint(LinearGradient* __this);
void LinearGradient__set_EndPoint(LinearGradient* __this, ::app::Uno::Float2 value);

struct LinearGradient : ::app::Fuse::Drawing::DynamicBrush
{
    ::uStrong< ::uArray*> _sortedStops;
    ::app::Uno::Float2 _startPoint;
    ::app::Uno::Float2 _endPoint;

    ::uArray* SortedStops() { return LinearGradient__get_SortedStops(this); }
    ::app::Uno::Float2 StartPoint() { return LinearGradient__get_StartPoint(this); }
    void StartPoint(::app::Uno::Float2 value) { LinearGradient__set_StartPoint(this, value); }
    ::app::Uno::Float2 EndPoint() { return LinearGradient__get_EndPoint(this); }
    void EndPoint(::app::Uno::Float2 value) { LinearGradient__set_EndPoint(this, value); }
};

}}}


#endif
