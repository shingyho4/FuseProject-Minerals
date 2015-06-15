// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Cache__float2.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.NonConsecutiveExtension.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

Contour__uType* Contour__typeof()
{
    static Contour__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Contour__uType*)::uAllocClassType(sizeof(Contour__uType), "Fuse.Drawing.Contour", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Contour, _vertices);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_vertices";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int Contour__get_VertexCount(Contour* __this)
{
    return __this->_count;
}

::uObject* Contour__get_Vertices(Contour* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Items();
}

::app::Uno::Float2 Contour__get_Item(Contour* __this, int vertexIndex)
{
    if (__this->IsClosed())
    {
        while (vertexIndex < 0)
        {
            vertexIndex = vertexIndex + __this->VertexCount();
        }

        while (vertexIndex >= __this->VertexCount())
        {
            vertexIndex = vertexIndex - __this->VertexCount();
        }

        return ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(vertexIndex);
    }
    else
    {
        if (vertexIndex < 0)
        {
            return ::app::Uno::Float2__op_Addition(NULL, ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(0), ::app::Uno::Float2__op_Subtraction(NULL, ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(0), ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(1)));
        }

        if (vertexIndex >= ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length())
        {
            return ::app::Uno::Float2__op_Addition(NULL, ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length() - 1), ::app::Uno::Float2__op_Subtraction(NULL, ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length() - 1), ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length() - 2)));
        }

        return ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(vertexIndex);
    }
}

bool Contour__get_IsClosed(Contour* __this)
{
    return __this->_IsClosed;
}

void Contour__set_IsClosed(Contour* __this, bool value)
{
    __this->_IsClosed = value;
}

void Contour___ObjInit(Contour* __this, bool isClosed, ::uArray* vertices)
{
    __this->_ObjInit_1(isClosed, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2__New_1(NULL, vertices));
}

Contour* Contour__New_1(::uStatic* __this, bool isClosed, ::uArray* vertices)
{
    Contour* inst = (::app::Fuse::Drawing::Contour*)::uAllocObject(sizeof(::app::Fuse::Drawing::Contour), ::app::Fuse::Drawing::Contour__typeof());
    inst->_ObjInit(isClosed, vertices);
    return inst;
}

void Contour___ObjInit_1(Contour* __this, bool isClosed, ::uObject* vertices)
{
    __this->_vertices = ::app::Fuse::Drawing::Cache__float2__New_2(NULL, ::app::Fuse::Drawing::NonConsecutiveExtension__NonConsecutive(NULL, vertices));
    __this->IsClosed(isClosed);
    __this->_count = (isClosed && ::app::Uno::Float2__op_Equality(NULL, ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(0), ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length() - 1))) ? (::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length() - 1) : ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length();
}

Contour* Contour__New_2(::uStatic* __this, bool isClosed, ::uObject* vertices)
{
    Contour* inst = (::app::Fuse::Drawing::Contour*)::uAllocObject(sizeof(::app::Fuse::Drawing::Contour), ::app::Fuse::Drawing::Contour__typeof());
    inst->_ObjInit_1(isClosed, vertices);
    return inst;
}

}}}
