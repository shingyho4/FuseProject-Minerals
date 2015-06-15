// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Cache__float2.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

Cache__float2__uType* Cache__float2__typeof()
{
    static Cache__float2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Cache__float2__uType*)::uAllocClassType(sizeof(Cache__float2__uType), "Fuse.Drawing.Cache<float2>", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(Cache__float2, _source);
        type->StrongRefOffsets[1] = offsetof(Cache__float2, _cache);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_cache";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* Cache__float2__get_Items(Cache__float2* __this)
{
    __this->Evaluate();
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2__New_1(NULL, __this->_cache);
}

int Cache__float2__get_Length(Cache__float2* __this)
{
    __this->Evaluate();
    return ::uPtr< ::uArray*>(__this->_cache)->Length();
}

::app::Uno::Float2 Cache__float2__get_Item(Cache__float2* __this, int index)
{
    __this->Evaluate();
    return ::uPtr< ::uArray*>(__this->_cache)->Item< ::app::Uno::Float2>(index);
}

void Cache__float2__Evaluate(Cache__float2* __this)
{
    if (__this->_cache == NULL)
    {
        __this->_cache = ::app::Uno::Collections::EnumerableExtensions__ToArray__float2(NULL, __this->_source);
        __this->_source = NULL;
    }
}

void Cache__float2___ObjInit_1(Cache__float2* __this, ::uObject* source)
{
    __this->_source = source;
}

Cache__float2* Cache__float2__New_2(::uStatic* __this, ::uObject* source)
{
    Cache__float2* inst = (::app::Fuse::Drawing::Cache__float2*)::uAllocObject(sizeof(::app::Fuse::Drawing::Cache__float2), ::app::Fuse::Drawing::Cache__float2__typeof());
    inst->_ObjInit_1(source);
    return inst;
}

}}}
