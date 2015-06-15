// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Layouts.Column.h>
#include <app/Fuse.Layouts.DefinitionBase.h>
#include <app/Fuse.Layouts.GridLayout.h>
#include <app/Fuse.Layouts.Row.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Layouts_Column.h>
#include <app/Uno.Action__Fuse_Layouts_Row.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Elements_Element.h>
#include <app/Uno.Collections.ICollection__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.ICollection__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.IList__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.IListExtensions.h>
#include <app/Uno.Collections.List__int.h>
#include <app/Uno.Collections.List1_Enumerator__int.h>
#include <app/Uno.Collections.ObservableList__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.ObservableList__Fuse_Layouts_Row.h>
#include <app/Uno.Float.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Layouts {

::uStaticStrong< ::app::Fuse::Layouts::Row*> GridLayout___staticDefaultRow;
::uStaticStrong< ::app::Fuse::Layouts::Column*> GridLayout___staticDefaultColumn;
::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___rowProperty;
::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___actualRowProperty;
::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___rowSpanProperty;
::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___columnProperty;
::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___actualColumnProperty;
::uStaticStrong< ::app::Fuse::PropertyHandle*> GridLayout___columnSpanProperty;

GridLayout__uType* GridLayout__typeof()
{
    static GridLayout__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GridLayout__uType*)::uAllocClassType(sizeof(GridLayout__uType), "Fuse.Layouts.GridLayout", ::app::Fuse::Layouts::Layout__typeof(), 0, 5);
        type->__fp_AddSubscriber = (void(*)(::app::Fuse::Layouts::Layout*, ::app::Fuse::Elements::Element*))GridLayout__AddSubscriber;
        type->__fp_RemoveSubscriber = (void(*)(::app::Fuse::Layouts::Layout*, ::app::Fuse::Elements::Element*))GridLayout__RemoveSubscriber;
        type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float2, int))GridLayout__GetContentSize;
        type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Layouts::Layout*, ::uObject*, ::app::Uno::Float4, ::app::Uno::Float2))GridLayout__ArrangePaddingBox;

        type->StrongRefOffsets[0] = offsetof(GridLayout, _defaultRow);
        type->StrongRefOffsets[1] = offsetof(GridLayout, _defaultColumn);
        type->StrongRefOffsets[2] = offsetof(GridLayout, _rows);
        type->StrongRefOffsets[3] = offsetof(GridLayout, _columns);
        type->StrongRefOffsets[4] = offsetof(GridLayout, _subscriber);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_defaultRow";
        type->StrongRefNames[1] = "_defaultColumn";
        type->StrongRefNames[2] = "_rows";
        type->StrongRefNames[3] = "_columns";
        type->StrongRefNames[4] = "_subscriber";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* GridLayout__get_Rows(GridLayout* __this)
{
    return (::uObject*)__this->_rows;
}

int GridLayout__get_RowCount(GridLayout* __this)
{
    return ::app::Uno::Collections::ICollection__Fuse_Layouts_Row::Count(::uPtr< ::uObject*>(__this->Rows()));
}

void GridLayout__set_RowCount(GridLayout* __this, int value)
{
    while (::app::Uno::Collections::ICollection__Fuse_Layouts_Row::Count(::uPtr< ::uObject*>(__this->Rows())) < value)
    {
        ::app::Uno::Collections::ICollection__Fuse_Layouts_Row::Add(::uPtr< ::uObject*>(__this->Rows()), __this->GenDefaultRow());
    }

    while (::app::Uno::Collections::ICollection__Fuse_Layouts_Row::Count(::uPtr< ::uObject*>(__this->Rows())) > value)
    {
        ::app::Uno::Collections::IListExtensions__RemoveLast__Fuse_Layouts_Row(NULL, __this->Rows());
    }

    __this->Changed();
}

::uObject* GridLayout__get_Columns(GridLayout* __this)
{
    return (::uObject*)__this->_columns;
}

int GridLayout__get_ColumnCount(GridLayout* __this)
{
    return ::app::Uno::Collections::ICollection__Fuse_Layouts_Column::Count(::uPtr< ::uObject*>(__this->Columns()));
}

void GridLayout__set_ColumnCount(GridLayout* __this, int value)
{
    while (::app::Uno::Collections::ICollection__Fuse_Layouts_Column::Count(::uPtr< ::uObject*>(__this->Columns())) < value)
    {
        ::app::Uno::Collections::ICollection__Fuse_Layouts_Column::Add(::uPtr< ::uObject*>(__this->Columns()), __this->GenDefaultColumn());
    }

    while (::app::Uno::Collections::ICollection__Fuse_Layouts_Column::Count(::uPtr< ::uObject*>(__this->Columns())) > value)
    {
        ::app::Uno::Collections::IListExtensions__RemoveLast__Fuse_Layouts_Column(NULL, __this->Columns());
    }

    __this->Changed();
}

::app::Fuse::Layouts::Row* GridLayout__GenDefaultRow(GridLayout* __this)
{
    ::app::Fuse::Layouts::Row* c = ::uPtr< ::app::Fuse::Layouts::Row*>(__this->_defaultRow)->CloneDef();
    ::uPtr< ::app::Fuse::Layouts::Row*>(c)->Implicit(true);
    return c;
}

::app::Fuse::Layouts::Column* GridLayout__GenDefaultColumn(GridLayout* __this)
{
    ::app::Fuse::Layouts::Column* c = ::uPtr< ::app::Fuse::Layouts::Column*>(__this->_defaultColumn)->CloneDef();
    ::uPtr< ::app::Fuse::Layouts::Column*>(c)->Implicit(true);
    return c;
}

::app::Fuse::Layouts::Column* GridLayout__GetColumnData(GridLayout* __this, int column)
{
    if ((column >= 0) && (column < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Count()))
    {
        return ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Item(column);
    }

    return NULL;
}

::app::Fuse::Layouts::Row* GridLayout__GetRowData(GridLayout* __this, int row)
{
    if ((row >= 0) && (row < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Count()))
    {
        return ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Item(row);
    }

    return NULL;
}

void GridLayout__SetRow(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int row)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->Set(GridLayout___rowProperty, ::uBox< int>(::app::Uno::Int__typeof(), row));
    elm->InvalidateLayout();
}

int GridLayout__GetActualRow(GridLayout* __this, ::app::Fuse::Elements::Element* elm, int index)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->TryGet(GridLayout___actualRowProperty, &v))
    {
        return ::uUnbox< int>(v);
    }

    return 0;
}

int GridLayout__GetRowSpan(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->TryGet(GridLayout___rowSpanProperty, &v))
    {
        return ::uUnbox< int>(v);
    }
    else
    {
        return 1;
    }
}

int GridLayout__GetColumn(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->TryGet(GridLayout___columnProperty, &v))
    {
        return ::uUnbox< int>(v);
    }
    else
    {
        return 0;
    }
}

void GridLayout__GetActualPositions(GridLayout* __this, ::uObject* elements)
{
    int columnCount = ::app::Uno::Math__Max_8(NULL, 1, ::app::Uno::Collections::ICollection__Fuse_Layouts_Column::Count(::uPtr< ::uObject*>(__this->Columns())));

    for (int n = 0; n < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(elements)); n++)
    {
        columnCount = ::app::Uno::Math__Max_8(NULL, columnCount, GridLayout__GetColumn(NULL, ::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(elements), n)) + GridLayout__GetColumnSpan(NULL, ::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(elements), n)));
    }

    ::app::Uno::Collections::List__int* rowAvail = ::app::Uno::Collections::List__int__New_2(NULL, columnCount);

    for (int c = 0; c < columnCount; c++)
    {
        ::uPtr< ::app::Uno::Collections::List__int*>(rowAvail)->Add(0);
    }

    int rowAt = 0;
    int colAt = 0;

    for (int n = 0; n < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(elements); n++)
    {
        ::app::Fuse::Elements::Element* elm = ::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(elements), n);
        ::uObject* v;
        bool haveCol = false;
        bool haveSpec = false;

        if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->TryGet(GridLayout___columnProperty, &v))
        {
            colAt = ::uUnbox< int>(v);
            haveCol = true;
            haveSpec = true;
        }

        if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->TryGet(GridLayout___rowProperty, &v))
        {
            rowAt = ::uUnbox< int>(v);

            if (!haveCol)
            {
                colAt = 0;
            }

            haveSpec = true;
        }

        if (!haveSpec)
        {
            while (rowAt < ::uPtr< ::app::Uno::Collections::List__int*>(rowAvail)->Item(colAt))
            {
                colAt++;

                if (colAt >= columnCount)
                {
                    rowAt++;
                    colAt = 0;
                }
            }
        }

        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->Set(GridLayout___actualRowProperty, ::uBox< int>(::app::Uno::Int__typeof(), rowAt));
        ::uPtr< ::app::Fuse::Properties*>(elm->Properties())->Set(GridLayout___actualColumnProperty, ::uBox< int>(::app::Uno::Int__typeof(), colAt));
        int xs = GridLayout__GetColumnSpan(NULL, elm);
        int ys = GridLayout__GetRowSpan(NULL, elm);

        for (int c = colAt; c < ::app::Uno::Math__Min_8(NULL, columnCount, colAt + xs); c++)
        {
            ::uPtr< ::app::Uno::Collections::List__int*>(rowAvail)->Item(c, rowAt + ys);
        }
    }

    int rowCount = ::app::Uno::Collections::ICollection__Fuse_Layouts_Row::Count(::uPtr< ::uObject*>(__this->Rows()));

    for (::app::Uno::Collections::List1_Enumerator__int enum_125 = rowAvail->GetEnumerator(); enum_125.MoveNext(); )
    {
        int r = enum_125.Current();
        rowCount = ::app::Uno::Math__Max_8(NULL, rowCount, r);
    }

    while (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Count() < rowCount)
    {
        ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Add(__this->GenDefaultRow());
    }

    while (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Count() < columnCount)
    {
        ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Add(__this->GenDefaultColumn());
    }
}

int GridLayout__GetActualColumn(GridLayout* __this, ::app::Fuse::Elements::Element* elm, int index)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->TryGet(GridLayout___actualColumnProperty, &v))
    {
        return ::uUnbox< int>(v);
    }

    return 0;
}

int GridLayout__GetColumnSpan(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->TryGet(GridLayout___columnSpanProperty, &v))
    {
        return ::uUnbox< int>(v);
    }

    return 1;
}

void GridLayout__Changed(GridLayout* __this)
{
    if (__this->_subscriber != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_subscriber)->InvalidateLayout();
    }
}

void GridLayout__RowAdded(GridLayout* __this, ::app::Fuse::Layouts::Row* r)
{
    if (::uPtr< ::app::Fuse::Layouts::Row*>(r)->Implicit())
    {
        return;
    }

    ::uPtr< ::app::Fuse::Layouts::Row*>(r)->add_Changed(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Layouts::GridLayout__Changed, __this));
    __this->Changed();
}

void GridLayout__RowRemoved(GridLayout* __this, ::app::Fuse::Layouts::Row* r)
{
    if (::uPtr< ::app::Fuse::Layouts::Row*>(r)->Implicit())
    {
        return;
    }

    ::uPtr< ::app::Fuse::Layouts::Row*>(r)->remove_Changed(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Layouts::GridLayout__Changed, __this));
    __this->Changed();
}

void GridLayout__ColumnAdded(GridLayout* __this, ::app::Fuse::Layouts::Column* c)
{
    if (::uPtr< ::app::Fuse::Layouts::Column*>(c)->Implicit())
    {
        return;
    }

    ::uPtr< ::app::Fuse::Layouts::Column*>(c)->add_Changed(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Layouts::GridLayout__Changed, __this));
    __this->Changed();
}

void GridLayout__ColumnRemoved(GridLayout* __this, ::app::Fuse::Layouts::Column* c)
{
    if (::uPtr< ::app::Fuse::Layouts::Column*>(c)->Implicit())
    {
        return;
    }

    ::uPtr< ::app::Fuse::Layouts::Column*>(c)->remove_Changed(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Layouts::GridLayout__Changed, __this));
    __this->Changed();
}

void GridLayout__AddSubscriber(GridLayout* __this, ::app::Fuse::Elements::Element* element)
{
    __this->_subscriber = element;
}

void GridLayout__RemoveSubscriber(GridLayout* __this, ::app::Fuse::Elements::Element* element)
{
    __this->_subscriber = NULL;
}

::app::Uno::Float2 GridLayout__GetContentSize(GridLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet)
{
    return __this->Measure(elements, fillSize, fillSet);
}

::app::Uno::Float2 GridLayout__Measure(GridLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet)
{
    __this->GetActualPositions(elements);
    bool fillHorizontal = (fillSet & 1) == 1;
    bool fillVertical = (fillSet & 2) == 2;
    float availableWidth = fillSize.X;
    float availableHeight = fillSize.Y;

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Count(); i++)
    {
        ::app::Fuse::Layouts::Column* c = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Item(i);

        if (::uPtr< ::app::Fuse::Layouts::Column*>(c)->WidthMetric() == 0)
        {
            ::uPtr< ::app::Fuse::Layouts::Column*>(c)->ActualWidth(::uPtr< ::app::Fuse::Layouts::Column*>(c)->Width());
            availableWidth = availableWidth - c->Width();
        }
        else
        {
            ::uPtr< ::app::Fuse::Layouts::Column*>(c)->ActualWidth(0.0f);
        }
    }

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Count(); i++)
    {
        ::app::Fuse::Layouts::Row* r = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Item(i);

        if (::uPtr< ::app::Fuse::Layouts::Row*>(r)->HeightMetric() == 0)
        {
            ::uPtr< ::app::Fuse::Layouts::Row*>(r)->ActualHeight(::uPtr< ::app::Fuse::Layouts::Row*>(r)->Height());
            availableHeight = availableHeight - r->Height();
        }
        else
        {
            ::uPtr< ::app::Fuse::Layouts::Row*>(r)->ActualHeight(0.0f);
        }
    }

    availableWidth = ::app::Uno::Math__Max_1(NULL, availableWidth, 0.0f);
    availableHeight = ::app::Uno::Math__Max_1(NULL, availableHeight, 0.0f);

    for (int n = 0; n < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(elements)); n++)
    {
        ::app::Fuse::Elements::Element* child = ::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(elements), n);
        int x = __this->GetActualColumn(child, n);
        int y = __this->GetActualRow(child, n);
        ::app::Fuse::Layouts::Column* c = __this->GetColumnData(x);

        if ((c != NULL) && (::uPtr< ::app::Fuse::Layouts::Column*>(c)->WidthMetric() != 2))
        {
            c = NULL;
        }

        ::app::Fuse::Layouts::Row* r = __this->GetRowData(y);

        if ((r != NULL) && (::uPtr< ::app::Fuse::Layouts::Row*>(r)->HeightMetric() != 2))
        {
            r = NULL;
        }

        if ((c == NULL) && (r == NULL))
        {
            continue;
        }

        ::app::Uno::Float2 cds = ::uPtr< ::app::Fuse::Elements::Element*>(child)->GetMarginSize(::app::Uno::Float2__New_1(NULL, 0.0f), 0);

        if (c != NULL)
        {
            float w = ::app::Uno::Math__Max_1(NULL, ::uPtr< ::app::Fuse::Layouts::Column*>(c)->ActualWidth(), cds.X);
            availableWidth = availableWidth - (w - c->ActualWidth());
            c->ActualWidth(w);
        }

        if (r != NULL)
        {
            float h = ::app::Uno::Math__Max_1(NULL, ::uPtr< ::app::Fuse::Layouts::Row*>(r)->ActualHeight(), cds.Y);
            availableHeight = availableHeight - (h - r->ActualHeight());
            r->ActualHeight(h);
        }
    }

    availableWidth = ::app::Uno::Math__Max_1(NULL, availableWidth, 0.0f);
    availableHeight = ::app::Uno::Math__Max_1(NULL, availableHeight, 0.0f);
    float widthProportion = 0.0f;
    float heightProportion = 0.0f;

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Count(); i++)
    {
        ::app::Fuse::Layouts::Column* c = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Item(i);

        if (::uPtr< ::app::Fuse::Layouts::Column*>(c)->WidthMetric() == 1)
        {
            widthProportion = widthProportion + ::uPtr< ::app::Fuse::Layouts::Column*>(c)->Width();
        }
    }

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Count(); i++)
    {
        ::app::Fuse::Layouts::Row* r = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Item(i);

        if (::uPtr< ::app::Fuse::Layouts::Row*>(r)->HeightMetric() == 1)
        {
            heightProportion = heightProportion + ::uPtr< ::app::Fuse::Layouts::Row*>(r)->Height();
        }
    }

    if (fillHorizontal)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Count(); i++)
        {
            ::app::Fuse::Layouts::Column* c = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Item(i);

            if (::uPtr< ::app::Fuse::Layouts::Column*>(c)->WidthMetric() == 1)
            {
                ::uPtr< ::app::Fuse::Layouts::Column*>(c)->ActualWidth((::uPtr< ::app::Fuse::Layouts::Column*>(c)->Width() * availableWidth) / widthProportion);
            }
        }
    }

    if (fillVertical)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Count(); i++)
        {
            ::app::Fuse::Layouts::Row* r = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Item(i);

            if (::uPtr< ::app::Fuse::Layouts::Row*>(r)->HeightMetric() == 1)
            {
                ::uPtr< ::app::Fuse::Layouts::Row*>(r)->ActualHeight((::uPtr< ::app::Fuse::Layouts::Row*>(r)->Height() * availableHeight) / heightProportion);
            }
        }
    }

    if (!fillHorizontal || !fillVertical)
    {
        for (int n = 0; n < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(elements)); n++)
        {
            ::app::Fuse::Elements::Element* child = ::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(elements), n);
            float width = availableWidth;
            float height = availableHeight;
            int x = __this->GetActualColumn(child, n);
            int y = __this->GetActualRow(child, n);
            ::app::Fuse::Layouts::Column* c = __this->GetColumnData(x);
            ::app::Fuse::Layouts::Row* r = __this->GetRowData(y);

            if (::uPtr< ::app::Fuse::Layouts::Column*>(c)->WidthMetric() != 1)
            {
                c = NULL;
            }

            if (::uPtr< ::app::Fuse::Layouts::Row*>(r)->HeightMetric() != 1)
            {
                r = NULL;
            }

            if ((c == NULL) && (r == NULL))
            {
                continue;
            }

            if (c != NULL)
            {
                width = ::uPtr< ::app::Fuse::Layouts::Column*>(c)->ActualWidth();
            }

            if (r != NULL)
            {
                height = ::uPtr< ::app::Fuse::Layouts::Row*>(r)->ActualHeight();
            }

            int sf = 0;

            if (fillHorizontal)
            {
                sf = sf | 1;
            }

            if (fillVertical)
            {
                sf = sf | 2;
            }

            ::app::Uno::Float2 cds = ::uPtr< ::app::Fuse::Elements::Element*>(child)->GetMarginSize(::app::Uno::Float2__New_2(NULL, width, height), sf);

            if (c != NULL)
            {
                if (!fillHorizontal)
                {
                    ::uPtr< ::app::Fuse::Layouts::Column*>(c)->ActualWidth(::app::Uno::Math__Max_1(NULL, ::uPtr< ::app::Fuse::Layouts::Column*>(c)->ActualWidth(), cds.X));
                }
            }

            if (r != NULL)
            {
                if (!fillVertical)
                {
                    ::uPtr< ::app::Fuse::Layouts::Row*>(r)->ActualHeight(::app::Uno::Math__Max_1(NULL, ::uPtr< ::app::Fuse::Layouts::Row*>(r)->ActualHeight(), cds.Y));
                }
            }
        }
    }

    float totalWidth = 0.0f;
    float totalHeight = 0.0f;

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Count(); i++)
    {
        ::app::Fuse::Layouts::Column* c = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Item(i);
        ::uPtr< ::app::Fuse::Layouts::Column*>(c)->ActualOffset(totalWidth);
        totalWidth = totalWidth + c->ActualWidth();
    }

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Count(); i++)
    {
        ::app::Fuse::Layouts::Row* r = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Item(i);
        ::uPtr< ::app::Fuse::Layouts::Row*>(r)->ActualOffset(totalHeight);
        totalHeight = totalHeight + r->ActualHeight();
    }

    return ::app::Uno::Float2__New_2(NULL, totalWidth, totalHeight);
}

void GridLayout__ArrangePaddingBox(GridLayout* __this, ::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize)
{
    __this->Measure(elements, ::app::Uno::Float2__op_Subtraction(NULL, ::app::Uno::Float2__op_Subtraction(NULL, availableSize, ::app::Uno::Float2__New_2(NULL, padding.X, padding.Y)), ::app::Uno::Float2__New_2(NULL, padding.Z, padding.W)), 3);
    ::app::Uno::Float2 paddingOffset = ::app::Uno::Float2__New_2(NULL, padding.X, padding.Y);

    for (int n = 0; n < ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Count(::uPtr< ::uObject*>(elements)); n++)
    {
        ::app::Fuse::Elements::Element* child = ::app::Uno::Collections::IList__Fuse_Elements_Element::Item(::uPtr< ::uObject*>(elements), n);
        int column = __this->GetActualColumn(child, n);
        int row = __this->GetActualRow(child, n);
        int rowSpan = GridLayout__GetRowSpan(NULL, child);
        int columnSpan = GridLayout__GetColumnSpan(NULL, child);
        float x = 0.0f;
        float y = 0.0f;
        float w = availableSize.X;
        float h = availableSize.Y;

        if ((column >= 0) && (column < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Count()))
        {
            ::app::Fuse::Layouts::Column* c = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Item(column);
            x = ::uPtr< ::app::Fuse::Layouts::Column*>(c)->ActualOffset();
            w = c->ActualWidth();

            for (int s = column + 1; s < ::app::Uno::Math__Min_8(NULL, ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Count(), column + columnSpan); ++s)
            {
                w = w + ::uPtr< ::app::Fuse::Layouts::Column*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column*>(__this->_columns)->Item(s))->ActualWidth();
            }
        }

        if ((row >= 0) && (row < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Count()))
        {
            ::app::Fuse::Layouts::Row* r = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Item(row);
            y = ::uPtr< ::app::Fuse::Layouts::Row*>(r)->ActualOffset();
            h = r->ActualHeight();

            for (int s = row + 1; s < ::app::Uno::Math__Min_8(NULL, ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Count(), row + rowSpan); ++s)
            {
                h = h + ::uPtr< ::app::Fuse::Layouts::Row*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*>(__this->_rows)->Item(s))->ActualHeight();
            }
        }

        ::uPtr< ::app::Fuse::Elements::Element*>(child)->ArrangeMarginBox(::app::Uno::Float2__op_Addition(NULL, paddingOffset, ::app::Uno::Float2__New_2(NULL, x, y)), ::app::Uno::Float2__New_2(NULL, w, h), 3);
    }
}

void GridLayout___TypeInit(::uStatic* __this)
{
    ::app::Fuse::Layouts::Row* collection_124;
    ::app::Fuse::Layouts::Column* collection_123;
    GridLayout___staticDefaultRow = (collection_124 = ::app::Fuse::Layouts::Row__New_1(NULL), ::uPtr< ::app::Fuse::Layouts::Row*>(collection_124)->HeightMetric(1), 1, ::uPtr< ::app::Fuse::Layouts::Row*>(collection_124)->Height(1.0f), 1.0f, collection_124);
    GridLayout___staticDefaultColumn = (collection_123 = ::app::Fuse::Layouts::Column__New_1(NULL), ::uPtr< ::app::Fuse::Layouts::Column*>(collection_123)->WidthMetric(1), 1, ::uPtr< ::app::Fuse::Layouts::Column*>(collection_123)->Width(1.0f), 1.0f, collection_123);
    GridLayout___rowProperty = ::app::Fuse::Properties__CreateHandle(NULL);
    GridLayout___actualRowProperty = ::app::Fuse::Properties__CreateHandle(NULL);
    GridLayout___rowSpanProperty = ::app::Fuse::Properties__CreateHandle(NULL);
    GridLayout___columnProperty = ::app::Fuse::Properties__CreateHandle(NULL);
    GridLayout___actualColumnProperty = ::app::Fuse::Properties__CreateHandle(NULL);
    GridLayout___columnSpanProperty = ::app::Fuse::Properties__CreateHandle(NULL);
}

void GridLayout___ObjInit_1(GridLayout* __this)
{
    __this->_defaultRow = GridLayout___staticDefaultRow;
    __this->_defaultColumn = GridLayout___staticDefaultColumn;
    ::app::Fuse::Layouts::Layout___ObjInit(__this);
    __this->_rows = ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Layouts_Row__typeof(), (const void*)::app::Fuse::Layouts::GridLayout__RowAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Layouts_Row__typeof(), (const void*)::app::Fuse::Layouts::GridLayout__RowRemoved, __this));
    __this->_columns = ::app::Uno::Collections::ObservableList__Fuse_Layouts_Column__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Layouts_Column__typeof(), (const void*)::app::Fuse::Layouts::GridLayout__ColumnAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Layouts_Column__typeof(), (const void*)::app::Fuse::Layouts::GridLayout__ColumnRemoved, __this));
}

GridLayout* GridLayout__New_1(::uStatic* __this)
{
    GridLayout* inst = (::app::Fuse::Layouts::GridLayout*)::uAllocObject(sizeof(::app::Fuse::Layouts::GridLayout), ::app::Fuse::Layouts::GridLayout__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
