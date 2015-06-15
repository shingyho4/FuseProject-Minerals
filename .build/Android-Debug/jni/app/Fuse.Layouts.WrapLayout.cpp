// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Layouts.WrapLayout.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IList__Fuse_Elements_Element.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Layouts {

WrapLayout__uType* WrapLayout__typeof()
{
    static WrapLayout__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (WrapLayout__uType*)::uAllocClassType(sizeof(WrapLayout__uType), "Fuse.Layouts.WrapLayout", ::app::Fuse::Layouts::Layout__typeof());
        type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float2, int))WrapLayout__GetContentSize;
        type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float4, ::app::Uno::Float2))WrapLayout__ArrangePaddingBox;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float WrapLayout__get_ItemHeight(WrapLayout* __this)
{
    return __this->_itemHeight;
}

void WrapLayout__set_ItemHeight(WrapLayout* __this, float value)
{
    __this->_itemHeight = value;
    __this->_hasItemHeight = true;
}

float WrapLayout__get_ItemWidth(WrapLayout* __this)
{
    return __this->_itemWidth;
}

void WrapLayout__set_ItemWidth(WrapLayout* __this, float value)
{
    __this->_itemWidth = value;
    __this->_hasItemWidth = true;
}

int WrapLayout__get_Orientation(WrapLayout* __this)
{
    return __this->_orientation;
}

void WrapLayout__set_Orientation(WrapLayout* __this, int value)
{
    __this->_orientation = value;
    __this->_hasOrientation = true;
}

int WrapLayout__get_FlowDirection(WrapLayout* __this)
{
    return __this->_flowDirection;
}

void WrapLayout__set_FlowDirection(WrapLayout* __this, int value)
{
    __this->_flowDirection = value;
    __this->_hasFlowDirection = true;
}

::app::Uno::Float2 WrapLayout__GetContentSize(WrapLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet)
{
    float max = 0.0f;
    ::uArray* total = ::uNewArray(::app::Uno::Float__typeof(), 2);
    float current = 0.0f;
    int x = (__this->Orientation() == 0) ? 0 : 1;
    int y = (__this->Orientation() == 0) ? 1 : 0;
    bool hasSizeFlag = (((__this->Orientation() == 0) && ((fillSet & 1) == 1)) || ((__this->Orientation() == 1) && ((fillSet & 2) == 2))) ? true : false;
    float availableSize = (__this->Orientation() == 0) ? fillSize.X : fillSize.Y;
    bool isEmpty = true;

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(elements)); )
    {
        ::app::Uno::Float2 eSize = ::uPtr< ::app::Fuse::Elements::Element*>(::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(elements), i))->GetMarginSize(fillSize, 0);
        eSize = ::app::Uno::Float2__New_2(NULL, __this->_hasItemWidth ? __this->ItemWidth() : eSize.X, __this->_hasItemHeight ? __this->ItemHeight() : eSize.Y);
        float eX = (__this->Orientation() == 0) ? eSize.X : eSize.Y;
        float eY = (__this->Orientation() == 0) ? eSize.Y : eSize.X;

        if ((isEmpty && (eX > availableSize)) && hasSizeFlag)
        {
            ::uPtr< ::uArray*>(total)->Item< float>(x) = availableSize;
            total->Item< float>(y) = total->Item< float>(y) + ::app::Uno::Math__Max_1(NULL, max, eY);
            max = 0.0f;
            i++;
            continue;
        }

        if (((current + eX) > availableSize) && hasSizeFlag)
        {
            ::uPtr< ::uArray*>(total)->Item< float>(x) = ::app::Uno::Math__Max_1(NULL, current, ::uPtr< ::uArray*>(total)->Item< float>(x));
            total->Item< float>(y) = total->Item< float>(y) + max;
            max = 0.0f;
            current = 0.0f;
            isEmpty = true;
            continue;
        }

        max = ::app::Uno::Math__Max_1(NULL, eY, max);
        ::uPtr< ::uArray*>(total)->Item< float>(x) = ::app::Uno::Math__Max_1(NULL, current, ::uPtr< ::uArray*>(total)->Item< float>(x));
        current = current + eX;
        isEmpty = false;
        i++;
    }

    total->Item< float>(x) = ::app::Uno::Math__Max_1(NULL, current, total->Item< float>(x));
    total->Item< float>(y) = ::app::Uno::Math__Max_1(NULL, max, total->Item< float>(y) + max);
    ::app::Uno::Float2 ret = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Min_1(NULL, total->Item< float>(0), fillSize.X), ::app::Uno::Math__Min_1(NULL, total->Item< float>(1), fillSize.Y));
    return ret;
}

void WrapLayout__ArrangePaddingBox(WrapLayout* __this, ::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    float x = 0.0f;
    float y = 0.0f;
    float largestY = 0.0f;
    float largestX = 0.0f;
    float minX = 0.0f;
    bool firstChild = true;
    int lastWrap = 0;
    bool lastWasWrap = false;
    ::uArray* placements = ::uNewArray(::app::Uno::Float4__typeof(), ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(elements)));
    ::uArray* largest = ::uNewArray(::app::Uno::Float__typeof(), ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(elements));

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(elements); i++)
    {
        lastWasWrap = false;
        ::app::Fuse::Elements::Element* e = ::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(elements), i);
        ::app::Uno::Float2 eSize = ::uPtr< ::app::Fuse::Elements::Element*>(e)->GetMarginSize(availableSize, 0);
        float eX = __this->_hasItemWidth ? __this->ItemWidth() : eSize.X;
        float eY = __this->_hasItemHeight ? __this->ItemHeight() : eSize.Y;

        if (__this->Orientation() == 0)
        {
            if (((x + eX) > availableSize.X) && !firstChild)
            {
                y = y + largestY;

                for (int j = lastWrap; j < i; j++)
                {
                    ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(j).W = largestY;
                }

                lastWrap = i;
                largestY = 0.0f;
                x = 0.0f;
                lastWasWrap = true;
            }

            largestY = ::app::Uno::Math__Max_1(NULL, eY, largestY);

            if (__this->FlowDirection() == 0)
            {
                ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(i) = ::app::Uno::Float4__New_2(NULL, x, y, eX, eY);
            }
            else
            {
                placements->Item< ::app::Uno::Float4>(i) = ::app::Uno::Float4__New_2(NULL, (availableSize.X - x) - eX, y, eX, eY);
            }

            x = x + eX;
        }
        else
        {
            if (((y + eY) > availableSize.Y) && !firstChild)
            {
                x = x + largestX;

                for (int j = lastWrap; j < i; j++)
                {
                    ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(j).Z = largestX;

                    if (__this->FlowDirection() == 1)
                    {
                        ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(j).X = ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(j).X - largestX;
                        minX = ::app::Uno::Math__Min_1(NULL, minX, placements->Item< ::app::Uno::Float4>(j).X);
                    }
                }

                lastWrap = i;
                largestX = 0.0f;
                y = 0.0f;
                lastWasWrap = true;
            }

            largestX = ::app::Uno::Math__Max_1(NULL, eX, largestX);

            if (__this->FlowDirection() == 0)
            {
                ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(i) = ::app::Uno::Float4__New_2(NULL, x, y, eX, eY);
            }
            else
            {
                placements->Item< ::app::Uno::Float4>(i) = ::app::Uno::Float4__New_2(NULL, availableSize.X - x, y, eX, eY);
            }

            y = y + eY;
        }

        firstChild = false;
    }

    if (((lastWrap == 0) || (lastWrap == (::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(elements) - 1))) || !lastWasWrap)
    {
        for (int i = lastWrap; i < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(elements); i++)
        {
            if (__this->Orientation() == 0)
            {
                ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(i).W = largestY;
            }
            else
            {
                placements->Item< ::app::Uno::Float4>(i).Z = largestX;
            }

            if (__this->FlowDirection() == 1)
            {
                ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(i).X = ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(i).X - largestX;
                minX = ::app::Uno::Math__Min_1(NULL, minX, placements->Item< ::app::Uno::Float4>(i).X);
            }
        }
    }

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(elements); i++)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(elements), i))->ArrangeMarginBox(::app::Uno::Float2__op_Subtraction(NULL, ::app::Uno::Float2__op_Subtraction(NULL, (ind_123 = ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(i), ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y)), ::app::Uno::Float2__New_2(NULL, ::uPtr< ::uArray*>(largest)->Item< float>(i), 0.0f)), ::app::Uno::Float2__New_2(NULL, minX, 0.0f)), ::app::Uno::Float2__New_2(NULL, ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(i).Z, ::uPtr< ::uArray*>(placements)->Item< ::app::Uno::Float4>(i).W), 3);
    }
}

}}}
