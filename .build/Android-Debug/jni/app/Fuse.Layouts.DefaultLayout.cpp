// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Layouts.DefaultLayout.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IList__Fuse_Elements_Element.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Layouts {

DefaultLayout__uType* DefaultLayout__typeof()
{
    static DefaultLayout__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DefaultLayout__uType*)::uAllocClassType(sizeof(DefaultLayout__uType), "Fuse.Layouts.DefaultLayout", ::app::Fuse::Layouts::Layout__typeof());
        type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float2, int))DefaultLayout__GetContentSize;
        type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float4, ::app::Uno::Float2))DefaultLayout__ArrangePaddingBox;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float2 DefaultLayout__GetContentSize(DefaultLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Uno::Float2 size = __this->GetElementsSize(elements, fillSize, fillSet);
    bool recalc = false;

    if (!((fillSet & 1) == 1))
    {
        fillSize.X = size.X;
        fillSet = fillSet | 1;
        recalc = true;
    }

    if (!((fillSet & 2) == 2))
    {
        fillSize.Y = size.Y;
        fillSet = fillSet | 2;
        recalc = true;
    }

    if (recalc)
    {
        size = __this->GetElementsSize(elements, fillSize, fillSet);
    }

    return size;
}

::app::Uno::Float2 DefaultLayout__GetElementsSize(DefaultLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Uno::Float2 ds = ::app::Uno::Float2__New_1(NULL, 0.0f);

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(elements)); i++)
    {
        ds = ::app::Uno::Math__Max_3(NULL, ds, ::uPtr< ::app::Fuse::Elements::Element*>(::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(elements), i))->GetMarginSize(fillSize, fillSet));
    }

    return ds;
}

void DefaultLayout__ArrangePaddingBox(DefaultLayout* __this, ::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize)
{
    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(elements)); i++)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(elements), i))->ArrangeMarginBox(::app::Uno::Float2__New_2(NULL, padding.X, padding.Y), ::app::Uno::Float2__op_Subtraction(NULL, ::app::Uno::Float2__op_Subtraction(NULL, availableSize, ::app::Uno::Float2__New_2(NULL, padding.X, padding.Y)), ::app::Uno::Float2__New_2(NULL, padding.Z, padding.W)), 3);
    }
}

void DefaultLayout___ObjInit_1(DefaultLayout* __this)
{
    ::app::Fuse::Layouts::Layout___ObjInit(__this);
}

DefaultLayout* DefaultLayout__New_1(::uStatic* __this)
{
    DefaultLayout* inst = (::app::Fuse::Layouts::DefaultLayout*)::uAllocObject(sizeof(::app::Fuse::Layouts::DefaultLayout), ::app::Fuse::Layouts::DefaultLayout__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
