// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_CONTOUR_H__
#define __APP_FUSE_DRAWING_CONTOUR_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Cache__float2; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct Contour;

struct Contour__uType : ::uClassType
{
};

Contour__uType* Contour__typeof();

int Contour__get_VertexCount(Contour* __this);
::uObject* Contour__get_Vertices(Contour* __this);
::app::Uno::Float2 Contour__get_Item(Contour* __this, int vertexIndex);
bool Contour__get_IsClosed(Contour* __this);
void Contour__set_IsClosed(Contour* __this, bool value);
void Contour___ObjInit(Contour* __this, bool isClosed, ::uArray* vertices);
Contour* Contour__New_1(::uStatic* __this, bool isClosed, ::uArray* vertices);
void Contour___ObjInit_1(Contour* __this, bool isClosed, ::uObject* vertices);
Contour* Contour__New_2(::uStatic* __this, bool isClosed, ::uObject* vertices);

struct Contour : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Cache__float2*> _vertices;
    int _count;
    bool _IsClosed;

    void _ObjInit(bool isClosed, ::uArray* vertices) { Contour___ObjInit(this, isClosed, vertices); }
    void _ObjInit_1(bool isClosed, ::uObject* vertices) { Contour___ObjInit_1(this, isClosed, vertices); }
    int VertexCount() { return Contour__get_VertexCount(this); }
    ::uObject* Vertices() { return Contour__get_Vertices(this); }
    ::app::Uno::Float2 Item(int vertexIndex);
    bool IsClosed() { return Contour__get_IsClosed(this); }
    void IsClosed(bool value) { Contour__set_IsClosed(this, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline ::app::Uno::Float2 Contour::Item(int vertexIndex) { return Contour__get_Item(this, vertexIndex); }

}}}


#endif
