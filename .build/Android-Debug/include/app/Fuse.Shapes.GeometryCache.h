// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SHAPES_GEOMETRY_CACHE_H__
#define __APP_FUSE_SHAPES_GEOMETRY_CACHE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Fuse_Shapes_GeometryCacheEntry; } } }

namespace app {
namespace Fuse {
namespace Shapes {

struct GeometryCache;

extern ::uStaticStrong< GeometryCache*> GeometryCache___instance;

struct GeometryCache__uType : ::uClassType
{
};

GeometryCache__uType* GeometryCache__typeof();

::app::Fuse::Drawing::PathGeometry* GeometryCache__GetOrParse(::uStatic* __this, ::uString* data);
::app::Fuse::Drawing::PathGeometry* GeometryCache__GetOrCreateImpl(GeometryCache* __this, ::uString* data);
void GeometryCache__Update(GeometryCache* __this);
void GeometryCache___ObjInit(GeometryCache* __this);
GeometryCache* GeometryCache__New_1(::uStatic* __this);

struct GeometryCache : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry*> _cache;
    int _frame;

    ::app::Fuse::Drawing::PathGeometry* GetOrCreateImpl(::uString* data) { return GeometryCache__GetOrCreateImpl(this, data); }
    void Update() { GeometryCache__Update(this); }
    void _ObjInit() { GeometryCache___ObjInit(this); }
};

}}}


#endif
