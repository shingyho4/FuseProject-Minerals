// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.Scaling.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {

Scaling__uType* Scaling__typeof()
{
    static Scaling__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Scaling__uType*)::uAllocClassType(sizeof(Scaling__uType), "Fuse.Scaling", ::app::Fuse::Transform__typeof());
        type->__fp_AppendTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*, float))Scaling__AppendTo;
        type->__fp_PrependTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*))Scaling__PrependTo;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float Scaling__get_Factor(Scaling* __this)
{
    return __this->_factor;
}

void Scaling__set_Factor(Scaling* __this, float value)
{
    if (__this->_factor != value)
    {
        __this->_factor = value;
        __this->OnMatrixChanged();
    }
}

bool Scaling__get_IsIdentity(Scaling* __this)
{
    return ::app::Uno::Math__Abs_1(NULL, __this->_factor - 1.0f) < 1e-05f;
}

void Scaling__AppendTo(Scaling* __this, ::app::Fuse::FastMatrix* m, float weight)
{
    if (!__this->IsIdentity())
    {
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->AppendScale(::app::Uno::Math__Lerp_1(NULL, 1.0f, __this->Factor(), weight));
    }
}

void Scaling__PrependTo(Scaling* __this, ::app::Fuse::FastMatrix* m)
{
    if (!__this->IsIdentity())
    {
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependScale(__this->Factor());
    }
}

void Scaling___ObjInit_1(Scaling* __this)
{
    __this->_factor = 1.0f;
    ::app::Fuse::Transform___ObjInit(__this);
}

Scaling* Scaling__New_1(::uStatic* __this)
{
    Scaling* inst = (::app::Fuse::Scaling*)::uAllocObject(sizeof(::app::Fuse::Scaling), ::app::Fuse::Scaling__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}
