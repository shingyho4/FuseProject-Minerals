// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Cache__Fuse_Drawing_Contour.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawi-bf0e78b9.h>

namespace app {
namespace Fuse {
namespace Drawing {

Cache__Fuse_Drawing_Contour__uType* Cache__Fuse_Drawing_Contour__typeof()
{
    static Cache__Fuse_Drawing_Contour__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Cache__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(Cache__Fuse_Drawing_Contour__uType), "Fuse.Drawing.Cache<Fuse.Drawing.Contour>", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(Cache__Fuse_Drawing_Contour, _source);
        type->StrongRefOffsets[1] = offsetof(Cache__Fuse_Drawing_Contour, _cache);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_cache";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* Cache__Fuse_Drawing_Contour__get_Items(Cache__Fuse_Drawing_Contour* __this)
{
    __this->Evaluate();
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_Contour__New_1(NULL, __this->_cache);
}

int Cache__Fuse_Drawing_Contour__get_Length(Cache__Fuse_Drawing_Contour* __this)
{
    __this->Evaluate();
    return ::uPtr< ::uArray*>(__this->_cache)->Length();
}

void Cache__Fuse_Drawing_Contour__Evaluate(Cache__Fuse_Drawing_Contour* __this)
{
    if (__this->_cache == NULL)
    {
        __this->_cache = ::app::Uno::Collections::EnumerableExtensions__ToArray__Fuse_Drawing_Contour(NULL, __this->_source);
        __this->_source = NULL;
    }
}

void Cache__Fuse_Drawing_Contour___ObjInit_1(Cache__Fuse_Drawing_Contour* __this, ::uObject* source)
{
    __this->_source = source;
}

Cache__Fuse_Drawing_Contour* Cache__Fuse_Drawing_Contour__New_2(::uStatic* __this, ::uObject* source)
{
    Cache__Fuse_Drawing_Contour* inst = (::app::Fuse::Drawing::Cache__Fuse_Drawing_Contour*)::uAllocObject(sizeof(::app::Fuse::Drawing::Cache__Fuse_Drawing_Contour), ::app::Fuse::Drawing::Cache__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit_1(source);
    return inst;
}

}}}
