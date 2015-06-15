// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.EndSeekArgs.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Navigation {

EndSeekArgs__uType* EndSeekArgs__typeof()
{
    static EndSeekArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EndSeekArgs__uType*)::uAllocClassType(sizeof(EndSeekArgs__uType), "Fuse.Navigation.EndSeekArgs", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int EndSeekArgs__get_SnapTo(EndSeekArgs* __this)
{
    return __this->_SnapTo;
}

void EndSeekArgs__set_SnapTo(EndSeekArgs* __this, int value)
{
    __this->_SnapTo = value;
}

void EndSeekArgs___ObjInit(EndSeekArgs* __this, int snapTo)
{
    __this->SnapTo(snapTo);
}

EndSeekArgs* EndSeekArgs__New_1(::uStatic* __this, int snapTo)
{
    EndSeekArgs* inst = (::app::Fuse::Navigation::EndSeekArgs*)::uAllocObject(sizeof(::app::Fuse::Navigation::EndSeekArgs), ::app::Fuse::Navigation::EndSeekArgs__typeof());
    inst->_ObjInit(snapTo);
    return inst;
}

}}}
