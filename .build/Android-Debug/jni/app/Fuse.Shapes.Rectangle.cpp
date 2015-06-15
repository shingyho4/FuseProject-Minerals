// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.PathGeometryExtensions.h>
#include <app/Fuse.Drawing.PathGeometryRenderer.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Shapes.Rectangle.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Shapes {

Rectangle__uType* Rectangle__typeof()
{
    static Rectangle__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Rectangle__uType*)::uAllocClassType(sizeof(Rectangle__uType), "Fuse.Shapes.Rectangle", ::app::Fuse::Shapes::Shape__typeof(), 6);
        type->__fp_OnHitTestLocalVisual = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::HitTestContext*))Rectangle__OnHitTestLocalVisual;
        type->__fp_UpdatePath = (void(*)(::app::Fuse::Shapes::Shape*))Rectangle__UpdatePath;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();

        type->InterfaceOffsets[0] = offsetof(Rectangle__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Rectangle__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Rectangle__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(Rectangle__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(Rectangle__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(Rectangle__uType, __interface_5);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float4 Rectangle__get_CornerRadius(Rectangle* __this)
{
    return __this->_cornerRadius;
}

void Rectangle__set_CornerRadius(Rectangle* __this, ::app::Uno::Float4 value)
{
    __this->_cornerRadius = value;
    __this->_maxRadius = ::app::Uno::Math__Max_1(NULL, ::app::Uno::Math__Max_1(NULL, __this->_cornerRadius.X, __this->_cornerRadius.Y), ::app::Uno::Math__Max_1(NULL, __this->_cornerRadius.Z, __this->_cornerRadius.W));
    __this->InvalidateVisual(12);
}

void Rectangle__OnHitTestLocalVisual(Rectangle* __this, ::app::Fuse::HitTestContext* htc)
{
    bool isInsideBounds = __this->IsPointInside(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint());

    if (!isInsideBounds)
    {
        return;
    }

    if ((__this->_maxRadius < 2.0f) && isInsideBounds)
    {
        ::uPtr< ::app::Fuse::HitTestContext*>(htc)->Hit((::app::Fuse::Node*)__this);
    }
    else
    {
        ::app::Fuse::Shapes::Shape__OnHitTestLocalVisual(__this, htc);
    }
}

void Rectangle__UpdatePath(Rectangle* __this)
{
    float t = __this->Padding().Y;
    float b = __this->ActualSize().Y - __this->Padding().W;
    float l = __this->Padding().X;
    float r = __this->ActualSize().X - __this->Padding().Z;
    ::app::Uno::Float4 radius = __this->_cornerRadius;
    ::app::Uno::Float2 size = ::app::Uno::Float2__New_2(NULL, r - l, b - t);
    ::app::Uno::Float2 position = ::app::Uno::Float2__New_2(NULL, l, t);

    if ((((::app::Uno::Float4__op_Equality(NULL, __this->_cachedRadius, radius) && (__this->_cachedSize.X == size.X)) && (__this->_cachedSize.Y == size.Y)) && (__this->_cachedPosition.X == position.X)) && (__this->_cachedPosition.X == position.X))
    {
        return;
    }

    __this->_cachedRadius = radius;
    __this->_cachedSize = size;
    __this->_cachedPosition = position;
    __this->InvalidateRenderBounds();
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Geometry(::app::Fuse::Drawing::PathGeometryExtensions__Rectangle(NULL, ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::app::Fuse::Drawing::PathGeometry__New_1(NULL))->MoveTo_1(position), size, radius));
}

void Rectangle___ObjInit_3(Rectangle* __this)
{
    ::app::Fuse::Shapes::Shape___ObjInit_2(__this);
}

Rectangle* Rectangle__New_1(::uStatic* __this)
{
    Rectangle* inst = (::app::Fuse::Shapes::Rectangle*)::uAllocObject(sizeof(::app::Fuse::Shapes::Rectangle), ::app::Fuse::Shapes::Rectangle__typeof());
    inst->_ObjInit_3();
    return inst;
}

}}}
