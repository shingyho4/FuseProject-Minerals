// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Border.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Border.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawing_Border.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Fuse_Drawing_Border.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

ArrayEnumerable__Fuse_Drawing_Border__uType* ArrayEnumerable__Fuse_Drawing_Border__typeof()
{
    static ArrayEnumerable__Fuse_Drawing_Border__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ArrayEnumerable__Fuse_Drawing_Border__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Fuse_Drawing_Border__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.Border>", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Fuse_Drawing_Border__GetEnumerator;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Border__typeof();

        type->InterfaceOffsets[0] = offsetof(ArrayEnumerable__Fuse_Drawing_Border__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(ArrayEnumerable__Fuse_Drawing_Border, _source);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* ArrayEnumerable__Fuse_Drawing_Border__GetEnumerator(ArrayEnumerable__Fuse_Drawing_Border* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Drawing_Border__New_1(NULL, __this->_source);
}

void ArrayEnumerable__Fuse_Drawing_Border___ObjInit(ArrayEnumerable__Fuse_Drawing_Border* __this, ::uArray* source)
{
    __this->_source = source;
}

ArrayEnumerable__Fuse_Drawing_Border* ArrayEnumerable__Fuse_Drawing_Border__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Fuse_Drawing_Border* inst = (::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_Border*)::uAllocObject(sizeof(::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_Border), ::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_Border__typeof());
    inst->_ObjInit(source);
    return inst;
}

}}}}}
