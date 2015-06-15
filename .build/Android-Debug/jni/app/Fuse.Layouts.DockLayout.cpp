// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Layouts.DockLayout.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IList__Fuse_Elements_Element.h>
#include <app/Uno.Float.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Layouts {

::uStaticStrong< ::app::Fuse::PropertyHandle*> DockLayout___dockProperty;

DockLayout__uType* DockLayout__typeof()
{
    static DockLayout__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DockLayout__uType*)::uAllocClassType(sizeof(DockLayout__uType), "Fuse.Layouts.DockLayout", ::app::Fuse::Layouts::Layout__typeof(), 0, 1);
        type->__fp_AddSubscriber = (void(*)(::app::Fuse::Layouts::Layout*, ::app::Fuse::Elements::Element*))DockLayout__AddSubscriber;
        type->__fp_RemoveSubscriber = (void(*)(::app::Fuse::Layouts::Layout*, ::app::Fuse::Elements::Element*))DockLayout__RemoveSubscriber;
        type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float2, int))DockLayout__GetContentSize;
        type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float4, ::app::Uno::Float2))DockLayout__ArrangePaddingBox;

        type->StrongRefOffsets[0] = offsetof(DockLayout, _subscriber);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_subscriber";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void DockLayout__SetDock(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int dock)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->Set(DockLayout___dockProperty, ::uBox< int>(::app::Uno::Int__typeof(), dock));
    elm->InvalidateLayout();
}

int DockLayout__GetDock(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    ::uObject* val;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->TryGet(DockLayout___dockProperty, &val))
    {
        return ::uUnbox< int>(val);
    }

    return 4;
}

void DockLayout__AddSubscriber(DockLayout* __this, ::app::Fuse::Elements::Element* element)
{
    __this->_subscriber = element;
}

void DockLayout__RemoveSubscriber(DockLayout* __this, ::app::Fuse::Elements::Element* element)
{
    __this->_subscriber = NULL;
}

::app::Uno::Float2 DockLayout__GetContentSize(DockLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet)
{
    return __this->MeasureSubtree(elements, 0, fillSize, fillSet);
}

::app::Uno::Float2 DockLayout__MeasureSubtree(DockLayout* __this, ::uObject* elements, int childIndex, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Fuse::Elements::Element* c;

    if (childIndex >= ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(elements)))
    {
        ::app::Uno::Float2 mx = ::app::Uno::Float2__New_1(NULL, 0.0f);

        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(elements)); ++i)
        {
            c = ::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(elements), i);

            if (DockLayout__GetDock(NULL, c) == 4)
            {
                ::app::Uno::Float2 sz = ::uPtr< ::app::Fuse::Elements::Element*>(c)->GetMarginSize(fillSize, fillSet);
                mx = ::app::Uno::Math__Max_3(NULL, sz, mx);
            }
        }

        return mx;
    }

    c = ::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(elements), childIndex);

    switch (DockLayout__GetDock(NULL, c))
    {
        case 0:
        case 1:
        {
            {
                ::app::Uno::Float2 cds = ::uPtr< ::app::Fuse::Elements::Element*>(c)->GetMarginSize(fillSize, fillSet & -2);
                fillSize.X = fillSize.X - cds.X;
                ::app::Uno::Float2 subtree = __this->MeasureSubtree(elements, childIndex + 1, fillSize, fillSet);
                return ::app::Uno::Float2__New_2(NULL, cds.X + subtree.X, ::app::Uno::Math__Max_1(NULL, cds.Y, subtree.Y));
            }
        }
        case 2:
        case 3:
        {
            {
                ::app::Uno::Float2 cds = ::uPtr< ::app::Fuse::Elements::Element*>(c)->GetMarginSize(fillSize, fillSet & -3);
                fillSize.Y = fillSize.Y - cds.Y;
                ::app::Uno::Float2 subtree = __this->MeasureSubtree(elements, childIndex + 1, fillSize, fillSet);
                return ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Max_1(NULL, cds.X, subtree.X), cds.Y + subtree.Y);
            }
        }
        case 4:
        {
            return __this->MeasureSubtree(elements, childIndex + 1, fillSize, fillSet);
        }
    }

    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

void DockLayout__ArrangePaddingBox(DockLayout* __this, ::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 finalSize)
{
    ::app::Uno::Float2 availablePosition = ::app::Uno::Float2__New_2(NULL, padding.X, padding.Y);
    ::app::Uno::Float2 availableSize = ::app::Uno::Float2__op_Subtraction(NULL, ::app::Uno::Float2__op_Subtraction(NULL, finalSize, ::app::Uno::Float2__New_2(NULL, padding.X, padding.Y)), ::app::Uno::Float2__New_2(NULL, padding.Z, padding.W));

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(elements)); i++)
    {
        ::app::Fuse::Elements::Element* c = ::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(elements), i);
        int d = DockLayout__GetDock(NULL, c);
        int sf = ((d == 0) || (d == 1)) ? 2 : 1;
        ::app::Uno::Float2 desiredSize = ::uPtr< ::app::Fuse::Elements::Element*>(c)->GetMarginSize(availableSize, sf);

        switch (d)
        {
            case 0:
            {
                desiredSize.Y = availableSize.Y;
                ::uPtr< ::app::Fuse::Elements::Element*>(c)->ArrangeMarginBox(availablePosition, desiredSize, 3);
                availablePosition.X = availablePosition.X + desiredSize.X;
                availableSize.X = availableSize.X - desiredSize.X;
                break;
            }
            case 1:
            {
                desiredSize.Y = availableSize.Y;
                ::uPtr< ::app::Fuse::Elements::Element*>(c)->ArrangeMarginBox(::app::Uno::Float2__New_2(NULL, (availablePosition.X + availableSize.X) - desiredSize.X, availablePosition.Y), desiredSize, 3);
                availableSize.X = availableSize.X - desiredSize.X;
                break;
            }
            case 2:
            {
                desiredSize.X = availableSize.X;
                ::uPtr< ::app::Fuse::Elements::Element*>(c)->ArrangeMarginBox(availablePosition, desiredSize, 3);
                availablePosition.Y = availablePosition.Y + desiredSize.Y;
                availableSize.Y = availableSize.Y - desiredSize.Y;
                break;
            }
            case 3:
            {
                desiredSize.X = availableSize.X;
                ::uPtr< ::app::Fuse::Elements::Element*>(c)->ArrangeMarginBox(::app::Uno::Float2__New_2(NULL, availablePosition.X, (availablePosition.Y + availableSize.Y) - desiredSize.Y), desiredSize, 3);
                availableSize.Y = availableSize.Y - desiredSize.Y;
                break;
            }
            case 4:
            {
                break;
            }
        }

        availableSize = ::app::Uno::Math__Max_3(NULL, availableSize, ::app::Uno::Float2__New_1(NULL, 0.0f));
    }

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(elements)); ++i)
    {
        ::app::Fuse::Elements::Element* c = ::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(elements), i);

        if (DockLayout__GetDock(NULL, c) != 4)
        {
            continue;
        }

        ::uPtr< ::app::Fuse::Elements::Element*>(c)->ArrangeMarginBox(availablePosition, availableSize, 3);
    }
}

void DockLayout___TypeInit(::uStatic* __this)
{
    DockLayout___dockProperty = ::app::Fuse::Properties__CreateHandle(NULL);
}

void DockLayout___ObjInit_1(DockLayout* __this)
{
    ::app::Fuse::Layouts::Layout___ObjInit(__this);
}

DockLayout* DockLayout__New_1(::uStatic* __this)
{
    DockLayout* inst = (::app::Fuse::Layouts::DockLayout*)::uAllocObject(sizeof(::app::Fuse::Layouts::DockLayout), ::app::Fuse::Layouts::DockLayout__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
