// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.PolygonDrawable.h>
#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Fuse_Drawi-aa4b4717.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType* ArrayEnumerator__Fuse_Drawing_PolygonDrawable__typeof()
{
    static ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Fuse.Drawing.PolygonDrawable>", ::uObject__typeof(), 3, 2);
        type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::PolygonDrawable*(*)(void*))ArrayEnumerator__Fuse_Drawing_PolygonDrawable__get_Current;
        type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Fuse_Drawing_PolygonDrawable__Dispose;
        type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Fuse_Drawing_PolygonDrawable__MoveNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_PolygonDrawable__typeof();
        type->Implements[1] = ::app::Uno::IDisposable__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable, _source);
        type->StrongRefOffsets[1] = offsetof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable, _current);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_current";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::PolygonDrawable* ArrayEnumerator__Fuse_Drawing_PolygonDrawable__get_Current(ArrayEnumerator__Fuse_Drawing_PolygonDrawable* __this)
{
    return __this->_current;
}

void ArrayEnumerator__Fuse_Drawing_PolygonDrawable__Dispose(ArrayEnumerator__Fuse_Drawing_PolygonDrawable* __this)
{
}

bool ArrayEnumerator__Fuse_Drawing_PolygonDrawable__MoveNext(ArrayEnumerator__Fuse_Drawing_PolygonDrawable* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Fuse::Drawing::PolygonDrawable*>(__this->_iterator);
        return true;
    }

    return false;
}

void ArrayEnumerator__Fuse_Drawing_PolygonDrawable___ObjInit(ArrayEnumerator__Fuse_Drawing_PolygonDrawable* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

ArrayEnumerator__Fuse_Drawing_PolygonDrawable* ArrayEnumerator__Fuse_Drawing_PolygonDrawable__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Fuse_Drawing_PolygonDrawable* inst = (::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Drawing_PolygonDrawable*)::uAllocObject(sizeof(::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Drawing_PolygonDrawable), ::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Drawing_PolygonDrawable__typeof());
    inst->_ObjInit(source);
    return inst;
}

}}}}}
