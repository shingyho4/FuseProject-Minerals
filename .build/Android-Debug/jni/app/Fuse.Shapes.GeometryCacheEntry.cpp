// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Shapes.GeometryCacheEntry.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Shapes {

GeometryCacheEntry__uType* GeometryCacheEntry__typeof()
{
    static GeometryCacheEntry__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GeometryCacheEntry__uType*)::uAllocClassType(sizeof(GeometryCacheEntry__uType), "Fuse.Shapes.GeometryCacheEntry", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(GeometryCacheEntry, Geometry);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Geometry";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void GeometryCacheEntry___ObjInit(GeometryCacheEntry* __this, ::app::Fuse::Drawing::PathGeometry* geometry)
{
    __this->Geometry = geometry;
}

GeometryCacheEntry* GeometryCacheEntry__New_1(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* geometry)
{
    GeometryCacheEntry* inst = (::app::Fuse::Shapes::GeometryCacheEntry*)::uAllocObject(sizeof(::app::Fuse::Shapes::GeometryCacheEntry), ::app::Fuse::Shapes::GeometryCacheEntry__typeof());
    inst->_ObjInit(geometry);
    return inst;
}

}}}
