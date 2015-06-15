// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.Shear.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {

Shear__uType* Shear__typeof()
{
    static Shear__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Shear__uType*)::uAllocClassType(sizeof(Shear__uType), "Fuse.Shear", ::app::Fuse::Transform__typeof());
        type->__fp_AppendTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*, float))Shear__AppendTo;
        type->__fp_PrependTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*))Shear__PrependTo;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float Shear__get_DegreesX(Shear* __this)
{
    return __this->_x;
}

void Shear__set_DegreesX(Shear* __this, float value)
{
    if (__this->_x != value)
    {
        __this->_x = value;
        __this->OnMatrixChanged();
    }
}

float Shear__get_DegreesY(Shear* __this)
{
    return __this->_y;
}

void Shear__set_DegreesY(Shear* __this, float value)
{
    if (__this->_y != value)
    {
        __this->_y = value;
        __this->OnMatrixChanged();
    }
}

::app::Uno::Float2 Shear__get_Degrees(Shear* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->DegreesX(), __this->DegreesY());
}

void Shear__set_Degrees(Shear* __this, ::app::Uno::Float2 value)
{
    if ((__this->_x != value.X) || (__this->_y != value.Y))
    {
        __this->_x = value.X;
        __this->_y = value.Y;
        __this->OnMatrixChanged();
    }
}

void Shear__AppendTo(Shear* __this, ::app::Fuse::FastMatrix* m, float weight)
{
    ::app::Uno::Float2 v = ::app::Uno::Float2__op_Multiply(NULL, __this->Degrees(), weight);
    ::uPtr< ::app::Fuse::FastMatrix*>(m)->AppendShear(::app::Uno::Math__DegreesToRadians_1(NULL, v.X), ::app::Uno::Math__DegreesToRadians_1(NULL, v.Y));
}

void Shear__PrependTo(Shear* __this, ::app::Fuse::FastMatrix* m)
{
    ::app::Uno::Float2 v = __this->Degrees();
    ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependShear(::app::Uno::Math__DegreesToRadians_1(NULL, v.X), ::app::Uno::Math__DegreesToRadians_1(NULL, v.Y));
}

void Shear___ObjInit_1(Shear* __this)
{
    ::app::Fuse::Transform___ObjInit(__this);
}

Shear* Shear__New_1(::uStatic* __this)
{
    Shear* inst = (::app::Fuse::Shear*)::uAllocObject(sizeof(::app::Fuse::Shear), ::app::Fuse::Shear__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}
