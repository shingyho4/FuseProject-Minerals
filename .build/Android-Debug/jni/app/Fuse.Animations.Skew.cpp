// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Skew.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Shear.h>

namespace app {
namespace Fuse {
namespace Animations {

Skew__uType* Skew__typeof()
{
    static Skew__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Skew__uType*)::uAllocClassType(sizeof(Skew__uType), "Fuse.Animations.Skew", ::app::Fuse::Animations::TransformAnimator__Fuse_Shear__typeof());
        type->__fp_Update = (void(*)(::app::Fuse::Animations::TransformAnimator__Fuse_Shear*, ::app::Fuse::Node*, ::app::Fuse::Shear*))Skew__Update;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float Skew__get_DegreesX(Skew* __this)
{
    return __this->_DegreesX;
}

void Skew__set_DegreesX(Skew* __this, float value)
{
    __this->_DegreesX = value;
}

float Skew__get_DegreesY(Skew* __this)
{
    return __this->_DegreesY;
}

void Skew__set_DegreesY(Skew* __this, float value)
{
    __this->_DegreesY = value;
}

::app::Uno::Float2 Skew__get_Degrees(Skew* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->DegreesX(), __this->DegreesY());
}

void Skew__set_Degrees(Skew* __this, ::app::Uno::Float2 value)
{
    __this->DegreesX(value.X);
    __this->DegreesY(value.Y);
}

void Skew__Update(Skew* __this, ::app::Fuse::Node* elm, ::app::Fuse::Shear* t)
{
    ::uPtr< ::app::Fuse::Shear*>(t)->Degrees(__this->Degrees());
}

}}}
