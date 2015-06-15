// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.PathGeometryExtensions.h>
#include <app/Fuse.Drawing.PathGeometryRenderer.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Shapes.Ellipse.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Shapes {

Ellipse__uType* Ellipse__typeof()
{
    static Ellipse__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Ellipse__uType*)::uAllocClassType(sizeof(Ellipse__uType), "Fuse.Shapes.Ellipse", ::app::Fuse::Shapes::Shape__typeof(), 6);
        type->__fp_UpdatePath = (void(*)(::app::Fuse::Shapes::Shape*))Ellipse__UpdatePath;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();

        type->InterfaceOffsets[0] = offsetof(Ellipse__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Ellipse__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Ellipse__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(Ellipse__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(Ellipse__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(Ellipse__uType, __interface_5);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Ellipse__UpdatePath(Ellipse* __this)
{
    ::app::Uno::Float2 radius = ::app::Uno::Float2__op_Multiply(NULL, __this->ActualSize(), 0.5f);

    if (::app::Uno::Float2__op_Equality(NULL, __this->_cachedRadius, radius))
    {
        return;
    }

    __this->_cachedRadius = radius;
    __this->InvalidateRenderBounds();
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Geometry(::app::Fuse::Drawing::PathGeometryExtensions__Ellipse(NULL, ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::app::Fuse::Drawing::PathGeometry__New_1(NULL))->MoveTo_1(radius), radius));
}

}}}
