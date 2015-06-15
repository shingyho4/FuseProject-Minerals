// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Transform.h>
#include <app/Uno.Action__Fuse_Transform.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>

namespace app {
namespace Fuse {

Transform__uType* Transform__typeof()
{
    static Transform__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Transform__uType*)::uAllocClassType(sizeof(Transform__uType), "Fuse.Transform", ::uObject__typeof(), 0, 1);
        type->__fp_OnAdded = Transform__OnAdded;
        type->__fp_OnRemoved = Transform__OnRemoved;

        type->StrongRefOffsets[0] = offsetof(Transform, MatrixChanged);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "MatrixChanged";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Transform__Added(Transform* __this, ::app::Fuse::Node* n)
{
    __this->OnAdded(n);
}

void Transform__Removed(Transform* __this, ::app::Fuse::Node* n)
{
    __this->OnRemoved(n);
}

void Transform__OnAdded(Transform* __this, ::app::Fuse::Node* n)
{
}

void Transform__OnRemoved(Transform* __this, ::app::Fuse::Node* n)
{
}

void Transform__OnMatrixChanged(Transform* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->MatrixChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->MatrixChanged)->InvokeVoid< Transform*>(__this);
    }
}

void Transform___ObjInit(Transform* __this)
{
}

void Transform__add_MatrixChanged(Transform* __this, ::uDelegate* value)
{
    __this->MatrixChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->MatrixChanged, (::uDelegate*)value), ::app::Uno::Action__Fuse_Transform__typeof());
}

void Transform__remove_MatrixChanged(Transform* __this, ::uDelegate* value)
{
    __this->MatrixChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->MatrixChanged, (::uDelegate*)value), ::app::Uno::Action__Fuse_Transform__typeof());
}

}}
