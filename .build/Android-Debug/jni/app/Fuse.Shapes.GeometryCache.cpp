// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Shapes.GeometryCache.h>
#include <app/Fuse.Shapes.GeometryCacheEntry.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__string__Fuse_Shapes_GeometryCacheEntry.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__string__Fuse_Shapes_Geo-78841196.h>
#include <app/Uno.Collections.KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Shapes {

::uStaticStrong< GeometryCache*> GeometryCache___instance;

GeometryCache__uType* GeometryCache__typeof()
{
    static GeometryCache__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GeometryCache__uType*)::uAllocClassType(sizeof(GeometryCache__uType), "Fuse.Shapes.GeometryCache", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(GeometryCache, _cache);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_cache";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::PathGeometry* GeometryCache__GetOrParse(::uStatic* __this, ::uString* data)
{
    GeometryCache* ind_124;
    return ::uPtr< ::app::Fuse::Shapes::GeometryCache*>((ind_124 = GeometryCache___instance, (ind_124 != NULL) ? ind_124 : (GeometryCache___instance = GeometryCache__New_1(NULL))))->GetOrCreateImpl(data);
}

::app::Fuse::Drawing::PathGeometry* GeometryCache__GetOrCreateImpl(GeometryCache* __this, ::uString* data)
{
    ::app::Fuse::Shapes::GeometryCacheEntry* _entry;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry*>(__this->_cache)->TryGetValue(data, &_entry))
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry*>(__this->_cache)->Item(data, _entry = ::app::Fuse::Shapes::GeometryCacheEntry__New_1(NULL, ::app::Fuse::Drawing::PathGeometry__Parse(NULL, data)));
    }

    ::uPtr< ::app::Fuse::Shapes::GeometryCacheEntry*>(_entry)->LastUse = __this->_frame;
    return _entry->Geometry;
}

void GeometryCache__Update(GeometryCache* __this)
{
    __this->_frame++;
    ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry* newCache = ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry__New_1(NULL);

    for (::app::Uno::Collections::Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry enum_123 = ::uPtr< ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry*>(__this->_cache)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry entry = enum_123.Current();
        int framesSinceLastUse = __this->_frame - ::uPtr< ::app::Fuse::Shapes::GeometryCacheEntry*>(entry.Value())->LastUse;

        if ((framesSinceLastUse > 0) && (framesSinceLastUse <= 10))
        {
            ::uPtr< ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry*>(newCache)->Item(entry.Key(), entry.Value());
        }
    }

    __this->_cache = newCache;
}

void GeometryCache___ObjInit(GeometryCache* __this)
{
    __this->_cache = ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry__New_1(NULL);
    ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Shapes::GeometryCache__Update, __this), 0);
}

GeometryCache* GeometryCache__New_1(::uStatic* __this)
{
    GeometryCache* inst = (::app::Fuse::Shapes::GeometryCache*)::uAllocObject(sizeof(::app::Fuse::Shapes::GeometryCache), ::app::Fuse::Shapes::GeometryCache__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
