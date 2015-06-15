// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Scale.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Scaling.h>

namespace app {
namespace Fuse {
namespace Animations {

Scale__uType* Scale__typeof()
{
    static Scale__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Scale__uType*)::uAllocClassType(sizeof(Scale__uType), "Fuse.Animations.Scale", ::app::Fuse::Animations::TransformAnimator__Fuse_Scaling__typeof());
        type->__fp_Update = (void(*)(::app::Fuse::Animations::TransformAnimator__Fuse_Scaling*, ::app::Fuse::Node*, ::app::Fuse::Scaling*))Scale__Update;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float Scale__get_Factor(Scale* __this)
{
    return __this->_Factor;
}

void Scale__set_Factor(Scale* __this, float value)
{
    __this->_Factor = value;
}

void Scale__Update(Scale* __this, ::app::Fuse::Node* elm, ::app::Fuse::Scaling* t)
{
    ::uPtr< ::app::Fuse::Scaling*>(t)->Factor(__this->Factor());
}

}}}
