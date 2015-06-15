// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.FastMatrixTransform.h>
#include <app/Fuse.FastMatrix.h>

namespace app {
namespace Fuse {
namespace Animations {

FastMatrixTransform__uType* FastMatrixTransform__typeof()
{
    static FastMatrixTransform__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FastMatrixTransform__uType*)::uAllocClassType(sizeof(FastMatrixTransform__uType), "Fuse.Animations.FastMatrixTransform", ::app::Fuse::Transform__typeof(), 0, 1);
        type->__fp_AppendTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*, float))FastMatrixTransform__AppendTo;
        type->__fp_PrependTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*))FastMatrixTransform__PrependTo;

        type->StrongRefOffsets[0] = offsetof(FastMatrixTransform, Matrix);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Matrix";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void FastMatrixTransform__AppendTo(FastMatrixTransform* __this, ::app::Fuse::FastMatrix* m, float weight)
{
    ::uPtr< ::app::Fuse::FastMatrix*>(m)->AppendFastMatrix(__this->Matrix);
}

void FastMatrixTransform__PrependTo(FastMatrixTransform* __this, ::app::Fuse::FastMatrix* m)
{
    ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependFastMatrix(__this->Matrix);
}

void FastMatrixTransform__Changed(FastMatrixTransform* __this)
{
    __this->OnMatrixChanged();
}

void FastMatrixTransform___ObjInit_1(FastMatrixTransform* __this)
{
    __this->Matrix = ::app::Fuse::FastMatrix__Identity(NULL);
    ::app::Fuse::Transform___ObjInit(__this);
}

FastMatrixTransform* FastMatrixTransform__New_1(::uStatic* __this)
{
    FastMatrixTransform* inst = (::app::Fuse::Animations::FastMatrixTransform*)::uAllocObject(sizeof(::app::Fuse::Animations::FastMatrixTransform), ::app::Fuse::Animations::FastMatrixTransform__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
