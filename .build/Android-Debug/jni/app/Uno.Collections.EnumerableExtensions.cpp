// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Batching.Batch.h>
#include <app/Fuse.Drawing.Border.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.PolygonDrawable.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Input.Capturer.h>
#include <app/Fuse.Internal.LineCacheLine.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__float2.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_B-277da65f.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_P-ea390e8a.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_PolygonDrawable.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Internal_LineCacheLine.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_PolygonDrawable.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Internal_LineCacheLine.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Border__Fuse_Dra-a3e61a65.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Contour__Fuse_Dr-da6edd25.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Tesselation_Face-ad236a2a.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Tesselation_Half-1f000792.h>
#include <app/Uno.Collections.UnionEnumerable__float2.h>
#include <app/Uno.Collections.WhereEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Func__Fuse_Drawing_Border__Fuse_Drawing_Contour.h>
#include <app/Uno.Func__Fuse_Drawing_Contour__Fuse_Drawing_Border.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_HalfEdge__float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.Predicate__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Predicate__Fuse_Drawing_Tesselation_HalfEdge.h>

namespace app {
namespace Uno {
namespace Collections {

EnumerableExtensions__uType* EnumerableExtensions__typeof()
{
    static EnumerableExtensions__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EnumerableExtensions__uType*)::uAllocClassType(sizeof(EnumerableExtensions__uType), "Uno.Collections.EnumerableExtensions");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* EnumerableExtensions__Select__Fuse_Drawing_Contour__Fuse_Drawing_Border(::uStatic* __this, ::uObject* self, ::uDelegate* func)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__New_1(NULL, self, func);
}

::uObject* EnumerableExtensions__Select__Fuse_Drawing_Border__Fuse_Drawing_Contour(::uStatic* __this, ::uObject* self, ::uDelegate* func)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__New_1(NULL, self, func);
}

::uObject* EnumerableExtensions__Select__Fuse_Drawing_Tesselation_HalfEdge__float2(::uStatic* __this, ::uObject* self, ::uDelegate* func)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__New_1(NULL, self, func);
}

::uObject* EnumerableExtensions__Select__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour(::uStatic* __this, ::uObject* self, ::uDelegate* func)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__New_1(NULL, self, func);
}

::uObject* EnumerableExtensions__Union__float2(::uStatic* __this, ::uObject* self, ::uObject* other)
{
    return (::uObject*)::app::Uno::Collections::UnionEnumerable__float2__New_1(NULL, self, other);
}

::uObject* EnumerableExtensions__Where__Fuse_Drawing_Tesselation_Face(::uStatic* __this, ::uObject* self, ::uDelegate* predicate)
{
    return (::uObject*)::app::Uno::Collections::WhereEnumerable__Fuse_Drawing_Tesselation_Face__New_1(NULL, self, predicate);
}

::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_Contour(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Contour* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Fuse::Drawing::Contour__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Contour*>(current)->Next)
    {
        res->ItemStrong< ::app::Fuse::Drawing::Contour*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Contour*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_Border(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Border* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Border::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Border* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Border::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Border__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Fuse::Drawing::Border__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Border* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Border*>(current)->Next)
    {
        res->ItemStrong< ::app::Fuse::Drawing::Border*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Border*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_PolygonDrawable(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_PolygonDrawable::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::PolygonDrawable* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_PolygonDrawable::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Fuse::Drawing::PolygonDrawable__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable*>(current)->Next)
    {
        res->ItemStrong< ::app::Fuse::Drawing::PolygonDrawable*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__float2(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__float2* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__float2::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Float2 item = ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__float2__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Uno::Float2__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__float2* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__float2*>(current)->Next)
    {
        res->Item< ::app::Uno::Float2>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__float2*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_Batching_Batch(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Batching_Batch::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Batching::Batch* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Batching_Batch::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Fuse::Drawing::Batching::Batch__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch*>(current)->Next)
    {
        res->ItemStrong< ::app::Fuse::Drawing::Batching::Batch*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Batching_Batch*>(current)->Item;
    }

    return res;
}

int EnumerableExtensions__Count__Fuse_Drawing_Tesselation_Face(::uStatic* __this, ::uObject* self)
{
    int c = 0;
    ::uObject* enumerator = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face::GetEnumerator(::uPtr< ::uObject*>(self));

    while (::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enumerator)))
    {
        c++;
    }

    return c;
}

::app::Fuse::Input::Capturer* EnumerableExtensions__First__Fuse_Input_Capturer(::uStatic* __this, ::uObject* self)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Input_Capturer::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Input::Capturer* item = ::app::Uno::Collections::IEnumerator__Fuse_Input_Capturer::Current(::uPtr< ::uObject*>(enum_123));
        return item;
    }

    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

::app::Fuse::Internal::LineCacheLine* EnumerableExtensions__First__Fuse_Internal_LineCacheLine(::uStatic* __this, ::uObject* self)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Internal_LineCacheLine::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Internal::LineCacheLine* item = ::app::Uno::Collections::IEnumerator__Fuse_Internal_LineCacheLine::Current(::uPtr< ::uObject*>(enum_123));
        return item;
    }

    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

::app::Fuse::Drawing::Tesselation::HalfEdge* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Tesselation_HalfEdge(::uStatic* __this, ::uObject* self, ::uDelegate* where)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Tesselation::HalfEdge* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge::Current(::uPtr< ::uObject*>(enum_123));

        if (::uPtr< ::uDelegate*>(where)->Invoke< bool, ::app::Fuse::Drawing::Tesselation::HalfEdge*>(item))
        {
            return item;
        }
    }

    return NULL;
}

::app::Fuse::Drawing::Brush* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Brush_1(::uStatic* __this, ::uObject* self)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Brush* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Brush::Current(::uPtr< ::uObject*>(enum_123));
        return item;
    }

    return NULL;
}

::app::Fuse::Drawing::Batching::Batch* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Batching_Batch_1(::uStatic* __this, ::uObject* self)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Batching_Batch::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Batching::Batch* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Batching_Batch::Current(::uPtr< ::uObject*>(enum_123));
        return item;
    }

    return NULL;
}

}}}
