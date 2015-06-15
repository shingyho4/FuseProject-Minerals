// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.PathGeometryExtensions.h>
#include <app/Fuse.Drawing.PathGeometryRenderer.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Shapes.Star.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Shapes {

Star__uType* Star__typeof()
{
    static Star__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Star__uType*)::uAllocClassType(sizeof(Star__uType), "Fuse.Shapes.Star", ::app::Fuse::Shapes::Shape__typeof(), 6);
        type->__fp_UpdatePath = (void(*)(::app::Fuse::Shapes::Shape*))Star__UpdatePath;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();

        type->InterfaceOffsets[0] = offsetof(Star__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Star__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Star__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(Star__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(Star__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(Star__uType, __interface_5);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float2 Star__get_Offset_1(Star* __this)
{
    return (__this->ActualSize().X > __this->ActualSize().Y) ? ::app::Uno::Float2__New_2(NULL, (__this->ActualSize().X * 0.5f) - (__this->ActualSize().Y * 0.5f), 0.0f) : ::app::Uno::Float2__New_2(NULL, 0.0f, (__this->ActualSize().Y * 0.5f) - (__this->ActualSize().X * 0.5f));
}

float Star__get_Radius(Star* __this)
{
    return ::app::Uno::Math__Min_1(NULL, __this->ActualSize().X, __this->ActualSize().Y) * 0.5f;
}

float Star__get_Ratio(Star* __this)
{
    return __this->_ratio;
}

void Star__set_Ratio(Star* __this, float value)
{
    if (value == __this->_ratio)
    {
        return;
    }

    __this->_ratio = value;
    __this->InvalidateVisual(12);
}

float Star__get_RoundRatio(Star* __this)
{
    return __this->_roundRatio;
}

void Star__set_RoundRatio(Star* __this, float value)
{
    if (value == __this->_roundRatio)
    {
        return;
    }

    __this->_roundRatio = value;
    __this->InvalidateVisual(12);
}

float Star__get_SpokeRadius(Star* __this)
{
    return __this->Radius() * __this->Ratio();
}

float Star__get_RotationDegrees(Star* __this)
{
    return __this->_degrees;
}

void Star__set_RotationDegrees(Star* __this, float value)
{
    if (value == __this->_degrees)
    {
        return;
    }

    __this->_degrees = value;
    __this->InvalidateVisual(12);
}

float Star__get_RotationRadians(Star* __this)
{
    return (__this->_degrees / 180.0f) * 3.14159274f;
}

void Star__UpdatePath(Star* __this)
{
    if (__this->_points < 3)
    {
        return;
    }

    if (((((__this->_cachedPoints == __this->_points) && (__this->_cachedRadius == __this->Radius())) && (__this->_cachedSpokeRadius == __this->SpokeRadius())) && (__this->_cachedDegrees == __this->RotationDegrees())) && (__this->_cachedRoundRatio == __this->RoundRatio()))
    {
        return;
    }

    __this->_cachedPoints = __this->_points;
    __this->_cachedRadius = __this->Radius();
    __this->_cachedSpokeRadius = __this->SpokeRadius();
    __this->_cachedDegrees = __this->RotationDegrees();
    __this->_cachedRoundRatio = __this->RoundRatio();
    __this->InvalidateRenderBounds();
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Geometry(::app::Fuse::Drawing::PathGeometryExtensions__Star(NULL, ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::app::Fuse::Drawing::PathGeometry__New_1(NULL))->MoveTo_1(::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__New_1(NULL, __this->Radius()), __this->Offset_1())), __this->_points, __this->Radius(), __this->SpokeRadius(), __this->RoundRatio(), __this->RotationRadians()));
}

}}}
