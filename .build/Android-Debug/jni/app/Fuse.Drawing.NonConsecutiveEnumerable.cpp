// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.NonConsecutiveEnumerable.h>
#include <app/Fuse.Drawing.NonConsecutiveEnumerator.h>
#include <app/Uno.Collections.IEnumerator__float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

NonConsecutiveEnumerable__uType* NonConsecutiveEnumerable__typeof()
{
    static NonConsecutiveEnumerable__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NonConsecutiveEnumerable__uType*)::uAllocClassType(sizeof(NonConsecutiveEnumerable__uType), "Fuse.Drawing.NonConsecutiveEnumerable", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))NonConsecutiveEnumerable__GetEnumerator;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__float2__typeof();

        type->InterfaceOffsets[0] = offsetof(NonConsecutiveEnumerable__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(NonConsecutiveEnumerable, _source);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* NonConsecutiveEnumerable__GetEnumerator(NonConsecutiveEnumerable* __this)
{
    return (::uObject*)::app::Fuse::Drawing::NonConsecutiveEnumerator__New_1(NULL, ::app::Uno::Collections::IEnumerable__float2::GetEnumerator(::uPtr< ::uObject*>(__this->_source)));
}

void NonConsecutiveEnumerable___ObjInit(NonConsecutiveEnumerable* __this, ::uObject* source)
{
    __this->_source = source;
}

NonConsecutiveEnumerable* NonConsecutiveEnumerable__New_1(::uStatic* __this, ::uObject* source)
{
    NonConsecutiveEnumerable* inst = (::app::Fuse::Drawing::NonConsecutiveEnumerable*)::uAllocObject(sizeof(::app::Fuse::Drawing::NonConsecutiveEnumerable), ::app::Fuse::Drawing::NonConsecutiveEnumerable__typeof());
    inst->_ObjInit(source);
    return inst;
}

}}}
