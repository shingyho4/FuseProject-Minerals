// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Rotate.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Rotation.h>

namespace app {
namespace Fuse {
namespace Animations {

Rotate__uType* Rotate__typeof()
{
    static Rotate__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Rotate__uType*)::uAllocClassType(sizeof(Rotate__uType), "Fuse.Animations.Rotate", ::app::Fuse::Animations::TransformAnimator__Fuse_Rotation__typeof());
        type->__fp_Update = (void(*)(::app::Fuse::Animations::TransformAnimator__Fuse_Rotation*, ::app::Fuse::Node*, ::app::Fuse::Rotation*))Rotate__Update;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float Rotate__get_Degrees(Rotate* __this)
{
    return __this->_Degrees;
}

void Rotate__set_Degrees(Rotate* __this, float value)
{
    __this->_Degrees = value;
}

void Rotate__Update(Rotate* __this, ::app::Fuse::Node* elm, ::app::Fuse::Rotation* t)
{
    ::uPtr< ::app::Fuse::Rotation*>(t)->Degrees(__this->Degrees());
}

}}}
