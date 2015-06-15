// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.PathGeometryExtensions.h>
#include <app/Fuse.Drawing.PathGeometryRenderer.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Shapes.RegularPolygon.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Shapes {

RegularPolygon__uType* RegularPolygon__typeof()
{
    static RegularPolygon__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (RegularPolygon__uType*)::uAllocClassType(sizeof(RegularPolygon__uType), "Fuse.Shapes.RegularPolygon", ::app::Fuse::Shapes::Shape__typeof(), 6);
        type->__fp_UpdatePath = (void(*)(::app::Fuse::Shapes::Shape*))RegularPolygon__UpdatePath;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();

        type->InterfaceOffsets[0] = offsetof(RegularPolygon__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(RegularPolygon__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(RegularPolygon__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(RegularPolygon__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(RegularPolygon__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(RegularPolygon__uType, __interface_5);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float2 RegularPolygon__get_Offset_1(RegularPolygon* __this)
{
    return (__this->ActualSize().X > __this->ActualSize().Y) ? ::app::Uno::Float2__New_2(NULL, (__this->ActualSize().X * 0.5f) - (__this->ActualSize().Y * 0.5f), 0.0f) : ::app::Uno::Float2__New_2(NULL, 0.0f, (__this->ActualSize().Y * 0.5f) - (__this->ActualSize().X * 0.5f));
}

float RegularPolygon__get_Radius(RegularPolygon* __this)
{
    return ::app::Uno::Math__Min_1(NULL, __this->ActualSize().X, __this->ActualSize().Y) * 0.5f;
}

void RegularPolygon__UpdatePath(RegularPolygon* __this)
{
    if (__this->_sides < 3)
    {
        return;
    }

    if ((__this->_cachedSides == __this->_sides) && (__this->_cachedRadius == __this->Radius()))
    {
        return;
    }

    __this->_cachedSides = __this->_sides;
    __this->_cachedRadius = __this->Radius();
    __this->InvalidateRenderBounds();
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Geometry(::app::Fuse::Drawing::PathGeometryExtensions__RegularPolygon(NULL, ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::app::Fuse::Drawing::PathGeometry__New_1(NULL))->MoveTo_1(::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__New_1(NULL, __this->Radius()), __this->Offset_1())), __this->_sides, __this->Radius()));
}

}}}
