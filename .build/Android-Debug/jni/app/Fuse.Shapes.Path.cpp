// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.PathGeometryRenderer.h>
#include <app/Fuse.Drawing.WindingRules.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Internal.SizingContainer.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Shapes.GeometryCache.h>
#include <app/Fuse.Shapes.Path.h>
#include <app/Fuse.ViewContext.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Predicate__int.h>
#include <app/Uno.String.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Shapes {

Path__uType* Path__typeof()
{
    static Path__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Path__uType*)::uAllocClassType(sizeof(Path__uType), "Fuse.Shapes.Path", ::app::Fuse::Shapes::Shape__typeof(), 6, 1);
        type->__fp_UpdatePath = (void(*)(::app::Fuse::Shapes::Shape*))Path__UpdatePath;
        type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))Path__GetContentSize;
        type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2))Path__ArrangePaddingBox;
        type->__fp_OnDraw = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::DrawContext*))Path__OnDraw;
        type->__fp_CalcRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Elements::Element*))Path__CalcRenderBounds;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();

        type->InterfaceOffsets[0] = offsetof(Path__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Path__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Path__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(Path__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(Path__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(Path__uType, __interface_5);

        type->StrongRefOffsets[0] = offsetof(Path, sizing);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "sizing";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* Path__get_Data(Path* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Geometry())->ToString();
}

void Path__set_Data(Path* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Geometry(::app::Fuse::Shapes::GeometryCache__GetOrParse(NULL, value));
}

int Path__get_FillRule(Path* __this)
{
    return __this->_fillRule;
}

void Path__set_FillRule(Path* __this, int value)
{
    __this->_fillRule = value;
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->FillRule((__this->_fillRule == 1) ? ::uNewDelegateNonVirt(::app::Uno::Predicate__int__typeof(), (const void*)::app::Fuse::Drawing::WindingRules__Odd) : ::uNewDelegateNonVirt(::app::Uno::Predicate__int__typeof(), (const void*)::app::Fuse::Drawing::WindingRules__NonZero));
}

void Path__UpdatePath(Path* __this)
{
}

::app::Uno::Float2 Path__GetNaturalContentSize(Path* __this)
{
    ::app::Uno::Float2 hi = ::app::Uno::Float2__New_1(NULL, 0.0f);
    ::app::Uno::Float2 lo = ::app::Uno::Float2__New_1(NULL, 0.0f);

    switch (__this->_fitMode)
    {
        case 0:
        {
            lo = ::app::Uno::Float2__New_1(NULL, 0.0f);
            hi = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Maximum();
            break;
        }
        case 1:
        {
            hi = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Maximum();
            ::app::Uno::Float4 s = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->StrokePadding();
            hi.X = hi.X + s.Item(2);
            hi.Y = hi.Y + s.Item(3);
            lo.X = lo.X - s.Item(0);
            lo.Y = lo.Y - s.Item(1);
            break;
        }
        case 2:
        {
            lo = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Minimum();
            hi = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Maximum();
            break;
        }
        case 3:
        {
            {
                lo = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Minimum();
                hi = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Maximum();
                ::app::Uno::Float4 s = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->StrokePadding();
                lo.X = lo.X - s.Item(0);
                lo.Y = lo.Y - s.Item(1);
                hi.X = hi.X + s.Item(2);
                hi.Y = hi.Y + s.Item(3);
                break;
            }
        }
    }

    ::app::Uno::Float2 natural = ::app::Uno::Float2__op_Subtraction(NULL, hi, lo);
    return natural;
}

::app::Uno::Float2 Path__GetContentSize(Path* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Uno::Float2 natural = __this->GetNaturalContentSize();
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->padding = ::app::Uno::Float4__New_1(NULL, 0.0f);
    ::app::Uno::Float2 r = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->ExpandFillSize(natural, fillSize, fillSet);
    return r;
}

void Path__ArrangePaddingBox(Path* __this, ::app::Uno::Float2 size)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->padding = __this->Padding();
    ::app::Uno::Float2 contentDesiredSize = __this->GetNaturalContentSize();
    ::app::Uno::Float2 scale = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->CalcScale(size, contentDesiredSize);
    __this->_origin = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->CalcOrigin(size, ::app::Uno::Float2__op_Multiply_1(NULL, contentDesiredSize, scale));

    if (__this->_scaleMode == 0)
    {
        ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->PreScale(scale);
    }
    else
    {
        __this->_postScale = scale;
    }

    switch (__this->_fitMode)
    {
        case 0:
        {
            break;
        }
        case 1:
        {
            __this->_origin = ::app::Uno::Float2__op_Addition(NULL, __this->_origin, (ind_123 = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->StrokePadding(), ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y)));
            break;
        }
        case 2:
        {
            __this->_origin = ::app::Uno::Float2__op_Subtraction(NULL, __this->_origin, ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Minimum());
            break;
        }
        case 3:
        {
            __this->_origin = ::app::Uno::Float2__op_Subtraction(NULL, __this->_origin, ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Minimum());
            __this->_origin = ::app::Uno::Float2__op_Addition(NULL, __this->_origin, (ind_124 = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->StrokePadding(), ::app::Uno::Float2__New_2(NULL, ind_124.X, ind_124.Y)));
            break;
        }
    }
}

void Path__OnDraw(Path* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Uno::Float4x4 r = __this->AlignMatrix(::uPtr< ::app::Fuse::DrawContext*>(dc)->GetLocalToClipTransform((::app::Fuse::Node*)__this));
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Draw(r, __this->ActualSize());
}

::app::Uno::Float4x4 Path__AlignMatrix(Path* __this, ::app::Uno::Float4x4 b)
{
    ::app::Uno::Float4x4 t = ::app::Uno::Matrix__Translation(NULL, ::app::Uno::Float3__New_3(NULL, __this->_origin, 0.0f));
    ::app::Uno::Float4x4 r0 = ::app::Uno::Matrix__Mul_11(NULL, t, b);
    ::app::Uno::Float4x4 s = ::app::Uno::Matrix__Scaling(NULL, ::app::Uno::Float3__New_3(NULL, __this->_postScale, 1.0f));
    ::app::Uno::Float4x4 r1 = ::app::Uno::Matrix__Mul_11(NULL, s, r0);
    return r1;
}

::app::Uno::Rect Path__CalcRenderBounds(Path* __this)
{
    ::app::Uno::Float4x4 m = __this->AlignMatrix(::app::Uno::Float4x4__get_Identity(NULL));
    ::app::Uno::Rect b = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Bounds();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Vector__Transform_4(NULL, b.Minimum(), m);
    ::app::Uno::Float2 tl = ::app::Uno::Float2__New_2(NULL, ind_125.X, ind_125.Y);
    ::app::Uno::Float4 ind_126 = ::app::Uno::Vector__Transform_4(NULL, b.Maximum(), m);
    ::app::Uno::Float2 br = ::app::Uno::Float2__New_2(NULL, ind_126.X, ind_126.Y);
    return ::app::Uno::Rect__New_2(NULL, tl, ::app::Uno::Float2__op_Subtraction(NULL, br, tl));
}

void Path___ObjInit_3(Path* __this)
{
    __this->sizing = ::app::Fuse::Internal::SizingContainer__New_1(NULL);
    __this->_fitMode = 2;
    __this->_scaleMode = 1;
    __this->_postScale = ::app::Uno::Float2__New_1(NULL, 1.0f);
    ::app::Fuse::Shapes::Shape___ObjInit_2(__this);
}

Path* Path__New_1(::uStatic* __this)
{
    Path* inst = (::app::Fuse::Shapes::Path*)::uAllocObject(sizeof(::app::Fuse::Shapes::Path), ::app::Fuse::Shapes::Path__typeof());
    inst->_ObjInit_3();
    return inst;
}

}}}
