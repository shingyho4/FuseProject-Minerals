// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.PathGeometryRenderer.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.IWindow.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.ViewContext.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Shapes {

Shape__uType* Shape__typeof()
{
    static Shape__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Shape__uType*)::uAllocClassType(sizeof(Shape__uType), "Fuse.Shapes.Shape", ::app::Fuse::Elements::Element__typeof(), 6, 1);
        type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Shape__OnRooted;
        type->__fp_CalcRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Elements::Element*))Shape__CalcRenderBounds;
        type->__fp_OnDraw = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::DrawContext*))Shape__OnDraw;
        type->__fp_OnHitTestLocalVisual = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::HitTestContext*))Shape__OnHitTestLocalVisual;
        type->__fp_SoftDispose = (void(*)(::app::Fuse::Node*))Shape__SoftDispose;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();

        type->InterfaceOffsets[0] = offsetof(Shape__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Shape__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Shape__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(Shape__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(Shape__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(Shape__uType, __interface_5);

        type->StrongRefOffsets[0] = offsetof(Shape, _renderer);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_renderer";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::PathGeometryRenderer* Shape__get_Renderer(Shape* __this)
{
    __this->UpdatePath();
    return __this->_renderer;
}

::uObject* Shape__get_Fills(Shape* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Fills();
}

::uObject* Shape__get_Strokes(Shape* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Strokes();
}

void Shape__OnRooted(Shape* __this)
{
    ::app::Fuse::Elements::Element__OnRooted(__this);
    ::uObject* w = __this->Window();

    if (w != NULL)
    {
        ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->Density(::app::Fuse::IWindow::PPIZoomMultiplier(::uPtr< ::uObject*>(w)));
    }
}

void Shape__Invalidated(Shape* __this)
{
    __this->InvalidateVisual(12);
}

::app::Uno::Rect Shape__CalcRenderBounds(Shape* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Bounds();
}

void Shape__OnDraw(Shape* __this, ::app::Fuse::DrawContext* dc)
{
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Draw(::uPtr< ::app::Fuse::DrawContext*>(dc)->GetLocalToClipTransform((::app::Fuse::Node*)__this), __this->ActualSize());
}

void Shape__OnHitTestLocalVisual(Shape* __this, ::app::Fuse::HitTestContext* htc)
{
    ::uObject* hitPart = __this->GetHitPart(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint());

    if (hitPart != NULL)
    {
        htc->Hit((::app::Fuse::Node*)__this);
    }

    ::app::Fuse::Elements::Element__OnHitTestLocalVisual(__this, htc);
}

::uObject* Shape__GetHitPart(Shape* __this, ::app::Uno::Float2 localCoords)
{
    return ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->GetHitPart(localCoords);
}

void Shape__SoftDispose(Shape* __this)
{
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->SoftDispose();
}

void Shape___ObjInit_2(Shape* __this)
{
    __this->_renderer = ::app::Fuse::Drawing::PathGeometryRenderer__New_1(NULL);
    ::app::Fuse::Elements::Element___ObjInit_1(__this);
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->add_VisualInvalidated(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Shapes::Shape__Invalidated, __this));
}

}}}
