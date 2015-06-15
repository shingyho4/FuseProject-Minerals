// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.PathGeometryExtensions.h>
#include <app/Fuse.Drawing.PathGeometryRenderer.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Shapes.Circle.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Shapes {

Circle__uType* Circle__typeof()
{
    static Circle__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Circle__uType*)::uAllocClassType(sizeof(Circle__uType), "Fuse.Shapes.Circle", ::app::Fuse::Shapes::Shape__typeof(), 6);
        type->__fp_UpdatePath = (void(*)(::app::Fuse::Shapes::Shape*))Circle__UpdatePath;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();

        type->InterfaceOffsets[0] = offsetof(Circle__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Circle__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Circle__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(Circle__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(Circle__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(Circle__uType, __interface_5);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float2 Circle__get_CenterOffset(Circle* __this)
{
    return (__this->ActualSize().X > __this->ActualSize().Y) ? ::app::Uno::Float2__New_2(NULL, (__this->ActualSize().X * 0.5f) - __this->_cachedRadius, 0.0f) : ::app::Uno::Float2__New_2(NULL, 0.0f, (__this->ActualSize().Y * 0.5f) - __this->_cachedRadius);
}

float Circle__get_Radius(Circle* __this)
{
    return ::app::Uno::Math__Min_1(NULL, __this->ActualSize().X, __this->ActualSize().Y) * 0.5f;
}

void Circle__UpdatePath(Circle* __this)
{
    if (__this->_cachedRadius == __this->Radius())
    {
        return;
    }

    __this->_cachedRadius = __this->Radius();
    __this->InvalidateRenderBounds();
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Geometry(::app::Fuse::Drawing::PathGeometryExtensions__Circle(NULL, ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::app::Fuse::Drawing::PathGeometry__New_1(NULL))->MoveTo_1(::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__New_1(NULL, __this->Radius()), __this->CenterOffset())), __this->Radius()));
}

void Circle___ObjInit_3(Circle* __this)
{
    __this->_cachedRadius = 0.0f;
    ::app::Fuse::Shapes::Shape___ObjInit_2(__this);
}

Circle* Circle__New_1(::uStatic* __this)
{
    Circle* inst = (::app::Fuse::Shapes::Circle*)::uAllocObject(sizeof(::app::Fuse::Shapes::Circle), ::app::Fuse::Shapes::Circle__typeof());
    inst->_ObjInit_3();
    return inst;
}

}}}
