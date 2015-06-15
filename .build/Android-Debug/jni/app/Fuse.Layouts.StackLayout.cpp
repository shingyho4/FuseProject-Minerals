// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Layouts.StackLayout.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IList__Fuse_Elements_Element.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Layouts {

StackLayout__uType* StackLayout__typeof()
{
    static StackLayout__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (StackLayout__uType*)::uAllocClassType(sizeof(StackLayout__uType), "Fuse.Layouts.StackLayout", ::app::Fuse::Layouts::Layout__typeof(), 0, 1);
        type->__fp_AddSubscriber = (void(*)(::app::Fuse::Layouts::Layout*, ::app::Fuse::Elements::Element*))StackLayout__AddSubscriber;
        type->__fp_RemoveSubscriber = (void(*)(::app::Fuse::Layouts::Layout*, ::app::Fuse::Elements::Element*))StackLayout__RemoveSubscriber;
        type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float2, int))StackLayout__GetContentSize;
        type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float4, ::app::Uno::Float2))StackLayout__ArrangePaddingBox;

        type->StrongRefOffsets[0] = offsetof(StackLayout, _subscriber);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_subscriber";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int StackLayout__get_Orientation(StackLayout* __this)
{
    return __this->_orientation;
}

void StackLayout__set_Orientation(StackLayout* __this, int value)
{
    if (__this->_orientation != value)
    {
        __this->_orientation = value;
        __this->OnOrientationChanged();
    }
}

void StackLayout__OnOrientationChanged(StackLayout* __this)
{
    if (__this->_subscriber != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_subscriber)->InvalidateLayout();
    }
}

void StackLayout__AddSubscriber(StackLayout* __this, ::app::Fuse::Elements::Element* element)
{
    __this->_subscriber = element;
}

void StackLayout__RemoveSubscriber(StackLayout* __this, ::app::Fuse::Elements::Element* element)
{
    __this->_subscriber = NULL;
}

::app::Uno::Float2 StackLayout__GetContentSize(StackLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet)
{
    int orientation = __this->Orientation();

    if (orientation == 1)
    {
        fillSet = fillSet & -3;
    }
    else
    {
        fillSet = fillSet & -2;
    }

    ::app::Uno::Float2 size = __this->GetElementsSize(elements, fillSize, fillSet);
    bool recalc = false;

    if (orientation == 1)
    {
        if (!((fillSet & 1) == 1))
        {
            fillSize.X = size.X;
            fillSet = fillSet | 1;
            recalc = true;
        }
    }
    else
    {
        if (!((fillSet & 2) == 2))
        {
            fillSize.Y = size.Y;
            fillSet = fillSet | 2;
            recalc = true;
        }
    }

    if (recalc)
    {
        size = __this->GetElementsSize(elements, fillSize, fillSet);
    }

    return size;
}

::app::Uno::Float2 StackLayout__GetElementsSize(StackLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet)
{
    int orientation = __this->Orientation();
    ::app::Uno::Float2 desiredSize = ::app::Uno::Float2__New_1(NULL, 0.0f);

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(elements)); i++)
    {
        ::app::Fuse::Elements::Element* c = ::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(elements), i);
        ::app::Uno::Float2 cds = ::uPtr< ::app::Fuse::Elements::Element*>(c)->GetMarginSize(fillSize, fillSet);

        if (orientation == 0)
        {
            desiredSize.X = desiredSize.X + cds.X;
            desiredSize.Y = ::app::Uno::Math__Max_1(NULL, desiredSize.Y, cds.Y);
        }
        else
        {
            desiredSize.X = ::app::Uno::Math__Max_1(NULL, desiredSize.X, cds.X);
            desiredSize.Y = desiredSize.Y + cds.Y;
        }
    }

    return desiredSize;
}

void StackLayout__ArrangePaddingBox(StackLayout* __this, ::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize)
{
    float d = 0.0f;
    int orientation = __this->Orientation();
    ::app::Uno::Float2 paddingOffset = ::app::Uno::Float2__New_2(NULL, padding.X, padding.Y);
    ::app::Uno::Float2 pad = ::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__New_2(NULL, padding.X, padding.Y), ::app::Uno::Float2__New_2(NULL, padding.Z, padding.W));
    ::app::Uno::Float2 avs = ::app::Uno::Float2__op_Subtraction(NULL, availableSize, pad);
    int sf = (orientation == 1) ? 1 : 2;

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(elements)); i++)
    {
        ::app::Fuse::Elements::Element* c = ::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(elements), i);

        if (orientation == 0)
        {
            ::app::Uno::Float2 cds = ::uPtr< ::app::Fuse::Elements::Element*>(c)->ArrangeMarginBox(::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__New_2(NULL, d, 0.0f), paddingOffset), avs, sf);
            d = d + cds.X;
        }
        else
        {
            ::app::Uno::Float2 cds = ::uPtr< ::app::Fuse::Elements::Element*>(c)->ArrangeMarginBox(::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__New_2(NULL, 0.0f, d), paddingOffset), avs, sf);
            d = d + cds.Y;
        }
    }
}

void StackLayout___ObjInit_1(StackLayout* __this)
{
    __this->_orientation = 1;
    ::app::Fuse::Layouts::Layout___ObjInit(__this);
}

StackLayout* StackLayout__New_1(::uStatic* __this)
{
    StackLayout* inst = (::app::Fuse::Layouts::StackLayout*)::uAllocObject(sizeof(::app::Fuse::Layouts::StackLayout), ::app::Fuse::Layouts::StackLayout__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
