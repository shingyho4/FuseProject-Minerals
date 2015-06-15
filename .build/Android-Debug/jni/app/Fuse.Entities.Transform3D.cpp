// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.Entity.h>
#include <app/Fuse.Entities.Transform3D.h>
#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Math.h>
#include <app/Uno.Quaternion.h>

namespace app {
namespace Fuse {
namespace Entities {

Transform3D__uType* Transform3D__typeof()
{
    static Transform3D__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Transform3D__uType*)::uAllocClassType(sizeof(Transform3D__uType), "Fuse.Entities.Transform3D", ::app::Fuse::Transform__typeof(), 0, 1);
        type->__fp_OnAdded = (void(*)(::app::Fuse::Transform*, ::app::Fuse::Node*))Transform3D__OnAdded;
        type->__fp_OnRemoved = (void(*)(::app::Fuse::Transform*, ::app::Fuse::Node*))Transform3D__OnRemoved;
        type->__fp_AppendTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*, float))Transform3D__AppendTo;
        type->__fp_PrependTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*))Transform3D__PrependTo;

        type->StrongRefOffsets[0] = offsetof(Transform3D, _Entity);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Entity";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Entities::Entity* Transform3D__get_Entity(Transform3D* __this)
{
    return __this->_Entity;
}

void Transform3D__set_Entity(Transform3D* __this, ::app::Fuse::Entities::Entity* value)
{
    __this->_Entity = value;
}

::app::Uno::Float3 Transform3D__get_Position(Transform3D* __this)
{
    return __this->position;
}

void Transform3D__set_Position(Transform3D* __this, ::app::Uno::Float3 value)
{
    if (::app::Uno::Float3__op_Inequality(NULL, __this->position, value))
    {
        __this->position = value;
        __this->InvalidateLocal();
    }
}

::app::Uno::Float4 Transform3D__get_RotationQuaternion(Transform3D* __this)
{
    return __this->rotationQuaternion;
}

void Transform3D__set_RotationQuaternion(Transform3D* __this, ::app::Uno::Float4 value)
{
    __this->rotationQuaternion = value;
    __this->rotationDegrees = ::app::Uno::Quaternion__ToEulerAngleDegrees(NULL, value);
    __this->InvalidateLocal();
}

::app::Uno::Float3 Transform3D__get_Scaling(Transform3D* __this)
{
    return __this->scale;
}

void Transform3D__set_Scaling(Transform3D* __this, ::app::Uno::Float3 value)
{
    __this->scale = value;
    __this->InvalidateLocal();
}

void Transform3D__InvalidateLocal(Transform3D* __this)
{
    __this->OnMatrixChanged();
}

void Transform3D__OnAdded(Transform3D* __this, ::app::Fuse::Node* n)
{
    __this->Entity(::uAs< ::app::Fuse::Entities::Entity*>(n, ::app::Fuse::Entities::Entity__typeof()));
}

void Transform3D__OnRemoved(Transform3D* __this, ::app::Fuse::Node* n)
{
    __this->Entity(NULL);
}

void Transform3D__AppendTo(Transform3D* __this, ::app::Fuse::FastMatrix* m, float weight)
{
    if (::app::Uno::Float3__op_Inequality(NULL, __this->Scaling(), ::app::Uno::Float3__New_1(NULL, 1.0f)))
    {
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->AppendScale_1(::app::Uno::Math__Lerp_4(NULL, ::app::Uno::Float3__New_1(NULL, 1.0f), __this->Scaling(), weight));
    }

    if (::app::Uno::Float4__op_Inequality(NULL, __this->RotationQuaternion(), ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f)))
    {
        m->AppendRotationQuaternion(::app::Uno::Float4__op_Multiply(NULL, __this->RotationQuaternion(), weight));
    }

    if (::app::Uno::Float3__op_Inequality(NULL, __this->Position(), ::app::Uno::Float3__New_1(NULL, 0.0f)))
    {
        m->AppendTranslation_1(::app::Uno::Float3__op_Multiply(NULL, __this->Position(), weight));
    }
}

void Transform3D__PrependTo(Transform3D* __this, ::app::Fuse::FastMatrix* m)
{
    if (::app::Uno::Float3__op_Inequality(NULL, __this->Position(), ::app::Uno::Float3__New_1(NULL, 0.0f)))
    {
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependTranslation_1(__this->Position());
    }

    if (::app::Uno::Float4__op_Inequality(NULL, __this->RotationQuaternion(), ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f)))
    {
        m->PrependRotationQuaternion(__this->RotationQuaternion());
    }

    if (::app::Uno::Float3__op_Inequality(NULL, __this->Scaling(), ::app::Uno::Float3__New_1(NULL, 1.0f)))
    {
        m->PrependScale_1(__this->Scaling());
    }
}

}}}
