// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.NonConsecutiveEnumerator.h>
#include <app/Uno.Float.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Drawing {

NonConsecutiveEnumerator__uType* NonConsecutiveEnumerator__typeof()
{
    static NonConsecutiveEnumerator__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NonConsecutiveEnumerator__uType*)::uAllocClassType(sizeof(NonConsecutiveEnumerator__uType), "Fuse.Drawing.NonConsecutiveEnumerator", ::uObject__typeof(), 3, 1);
        type->__interface_0.__fp_get_Current = (::app::Uno::Float2(*)(void*))NonConsecutiveEnumerator__get_Current;
        type->__interface_1.__fp_Dispose = (void(*)(void*))NonConsecutiveEnumerator__Dispose;
        type->__interface_2.__fp_MoveNext = (bool(*)(void*))NonConsecutiveEnumerator__MoveNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerator__float2__typeof();
        type->Implements[1] = ::app::Uno::IDisposable__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(NonConsecutiveEnumerator__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(NonConsecutiveEnumerator__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(NonConsecutiveEnumerator__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(NonConsecutiveEnumerator, _source);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float2 NonConsecutiveEnumerator__get_Current(NonConsecutiveEnumerator* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->_current.X, __this->_current.Y);
}

bool NonConsecutiveEnumerator__MoveNext(NonConsecutiveEnumerator* __this)
{
    if (!__this->_hasCurrent)
    {
        if (!::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source)))
        {
            return false;
        }

        __this->_first = ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(__this->_source));
        __this->_current = ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(__this->_source));
        __this->_hasCurrent = true;
        return true;
    }

    while (true)
    {
        if (!::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source)))
        {
            return false;
        }

        ::app::Uno::Float2 next = ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(__this->_source));

        if ((::app::Uno::Math__Abs_1(NULL, next.X - __this->_current.X) > 1e-05f) || (::app::Uno::Math__Abs_1(NULL, next.Y - __this->_current.Y) > 1e-05f))
        {
            __this->_current = next;
            return true;
        }
    }

    return false;
}

void NonConsecutiveEnumerator__Dispose(NonConsecutiveEnumerator* __this)
{
}

void NonConsecutiveEnumerator___ObjInit(NonConsecutiveEnumerator* __this, ::uObject* source)
{
    __this->_source = source;
}

NonConsecutiveEnumerator* NonConsecutiveEnumerator__New_1(::uStatic* __this, ::uObject* source)
{
    NonConsecutiveEnumerator* inst = (::app::Fuse::Drawing::NonConsecutiveEnumerator*)::uAllocObject(sizeof(::app::Fuse::Drawing::NonConsecutiveEnumerator), ::app::Fuse::Drawing::NonConsecutiveEnumerator__typeof());
    inst->_ObjInit(source);
    return inst;
}

}}}
