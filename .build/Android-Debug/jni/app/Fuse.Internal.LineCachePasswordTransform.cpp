// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.LineCachePasswordTransform.h>
#include <app/Uno.Char.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Internal {

LineCachePasswordTransform__uType* LineCachePasswordTransform__typeof()
{
    static LineCachePasswordTransform__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (LineCachePasswordTransform__uType*)::uAllocClassType(sizeof(LineCachePasswordTransform__uType), "Fuse.Internal.LineCachePasswordTransform", ::uObject__typeof(), 1);
        type->__interface_0.__fp_Transform = (::uString*(*)(void*, ::uString*))LineCachePasswordTransform__Transform;

        type->Implements[0] = ::app::Fuse::Internal::LineCacheTransform__typeof();

        type->InterfaceOffsets[0] = offsetof(LineCachePasswordTransform__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool LineCachePasswordTransform__SetReveal(LineCachePasswordTransform* __this, int r)
{
    bool b = r != __this->_reveal;
    __this->_reveal = r;
    return b;
}

::uString* LineCachePasswordTransform__Transform(LineCachePasswordTransform* __this, ::uString* text)
{
    ::uChar replacement = 183;
    ::uArray* buffer = ::uNewArray(::app::Uno::Char__typeof(), ::uPtr< ::uString*>(text)->Length());

    for (int i = 0; i < buffer->Length(); ++i)
    {
        buffer->Item< ::uChar>(i) = replacement;
    }

    if (__this->_reveal != -1)
    {
        buffer->Item< ::uChar>(__this->_reveal) = text->Item(__this->_reveal);
    }

    return ::uNewStringFromArray(buffer);
}

void LineCachePasswordTransform___ObjInit(LineCachePasswordTransform* __this)
{
    __this->_reveal = -1;
}

LineCachePasswordTransform* LineCachePasswordTransform__New_1(::uStatic* __this)
{
    LineCachePasswordTransform* inst = (::app::Fuse::Internal::LineCachePasswordTransform*)::uAllocObject(sizeof(::app::Fuse::Internal::LineCachePasswordTransform), ::app::Fuse::Internal::LineCachePasswordTransform__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
