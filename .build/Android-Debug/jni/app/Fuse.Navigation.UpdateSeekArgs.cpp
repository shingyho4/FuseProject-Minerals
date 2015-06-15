// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.UpdateSeekArgs.h>

namespace app {
namespace Fuse {
namespace Navigation {

UpdateSeekArgs__uType* UpdateSeekArgs__typeof()
{
    static UpdateSeekArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (UpdateSeekArgs__uType*)::uAllocClassType(sizeof(UpdateSeekArgs__uType), "Fuse.Navigation.UpdateSeekArgs", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float UpdateSeekArgs__get_Delta(UpdateSeekArgs* __this)
{
    return __this->_Delta;
}

void UpdateSeekArgs__set_Delta(UpdateSeekArgs* __this, float value)
{
    __this->_Delta = value;
}

float UpdateSeekArgs__get_Distance(UpdateSeekArgs* __this)
{
    return __this->_Distance;
}

void UpdateSeekArgs__set_Distance(UpdateSeekArgs* __this, float value)
{
    __this->_Distance = value;
}

float UpdateSeekArgs__get_RelativeDistance(UpdateSeekArgs* __this)
{
    return __this->Distance() / __this->_scale;
}

void UpdateSeekArgs___ObjInit(UpdateSeekArgs* __this, float delta, float distance, float scale, double time)
{
    __this->Delta(delta);
    __this->Distance(distance);
    __this->_scale = scale;
    __this->_time = time;
}

UpdateSeekArgs* UpdateSeekArgs__New_1(::uStatic* __this, float delta, float distance, float scale, double time)
{
    UpdateSeekArgs* inst = (::app::Fuse::Navigation::UpdateSeekArgs*)::uAllocObject(sizeof(::app::Fuse::Navigation::UpdateSeekArgs), ::app::Fuse::Navigation::UpdateSeekArgs__typeof());
    inst->_ObjInit(delta, distance, scale, time);
    return inst;
}

}}}
