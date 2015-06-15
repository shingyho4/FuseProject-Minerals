// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.Rotation.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {

Rotation__uType* Rotation__typeof()
{
    static Rotation__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Rotation__uType*)::uAllocClassType(sizeof(Rotation__uType), "Fuse.Rotation", ::app::Fuse::Transform__typeof());
        type->__fp_AppendTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*, float))Rotation__AppendTo;
        type->__fp_PrependTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*))Rotation__PrependTo;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float Rotation__get_Degrees(Rotation* __this)
{
    return __this->_degrees;
}

void Rotation__set_Degrees(Rotation* __this, float value)
{
    if (__this->_degrees != value)
    {
        __this->_degrees = value;
        __this->OnMatrixChanged();
    }
}

void Rotation__AppendTo(Rotation* __this, ::app::Fuse::FastMatrix* m, float weight)
{
    if (__this->Degrees() != 0.0f)
    {
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->AppendRotation(::app::Uno::Math__DegreesToRadians_1(NULL, __this->Degrees() * weight));
    }
}

void Rotation__PrependTo(Rotation* __this, ::app::Fuse::FastMatrix* m)
{
    if (__this->Degrees() != 0.0f)
    {
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependRotation(::app::Uno::Math__DegreesToRadians_1(NULL, __this->Degrees()));
    }
}

void Rotation___ObjInit_1(Rotation* __this)
{
    ::app::Fuse::Transform___ObjInit(__this);
}

Rotation* Rotation__New_1(::uStatic* __this)
{
    Rotation* inst = (::app::Fuse::Rotation*)::uAllocObject(sizeof(::app::Fuse::Rotation), ::app::Fuse::Rotation__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}
