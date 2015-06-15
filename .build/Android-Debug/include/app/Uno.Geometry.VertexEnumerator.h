// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.1.0\Curves\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GEOMETRY_VERTEX_ENUMERATOR_H__
#define __APP_UNO_GEOMETRY_VERTEX_ENUMERATOR_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Geometry { struct Vertex; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Uno {
namespace Geometry {

struct VertexEnumerator;

struct VertexEnumerator__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__float2 __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

VertexEnumerator__uType* VertexEnumerator__typeof();

::app::Uno::Float2 VertexEnumerator__get_Current(VertexEnumerator* __this);
bool VertexEnumerator__MoveNext(VertexEnumerator* __this);
void VertexEnumerator__Dispose(VertexEnumerator* __this);
void VertexEnumerator___ObjInit(VertexEnumerator* __this, ::app::Uno::Geometry::Vertex* head);
VertexEnumerator* VertexEnumerator__New_1(::uStatic* __this, ::app::Uno::Geometry::Vertex* head);

struct VertexEnumerator : ::uObject
{
    ::uStrong< ::app::Uno::Geometry::Vertex*> _head;
    ::uStrong< ::app::Uno::Geometry::Vertex*> _current;

    bool MoveNext() { return VertexEnumerator__MoveNext(this); }
    void Dispose() { VertexEnumerator__Dispose(this); }
    void _ObjInit(::app::Uno::Geometry::Vertex* head) { VertexEnumerator___ObjInit(this, head); }
    ::app::Uno::Float2 Current();
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Uno {
namespace Geometry {

inline ::app::Uno::Float2 VertexEnumerator::Current() { return VertexEnumerator__get_Current(this); }

}}}


#endif
