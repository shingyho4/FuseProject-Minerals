// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.ProgressSpan.h>

namespace app {
namespace Fuse {
namespace Navigation {

ProgressSpan__uType* ProgressSpan__typeof()
{
    static ProgressSpan__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ProgressSpan__uType*)::uAllocClassType(sizeof(ProgressSpan__uType), "Fuse.Navigation.ProgressSpan", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

double ProgressSpan__get_From(ProgressSpan* __this)
{
    return __this->_From;
}

void ProgressSpan__set_From(ProgressSpan* __this, double value)
{
    __this->_From = value;
}

double ProgressSpan__get_To(ProgressSpan* __this)
{
    return __this->_To;
}

void ProgressSpan__set_To(ProgressSpan* __this, double value)
{
    __this->_To = value;
}

void ProgressSpan___ObjInit(ProgressSpan* __this, double from, double to)
{
    __this->From(from);
    __this->To(to);
}

ProgressSpan* ProgressSpan__New_1(::uStatic* __this, double from, double to)
{
    ProgressSpan* inst = (::app::Fuse::Navigation::ProgressSpan*)::uAllocObject(sizeof(::app::Fuse::Navigation::ProgressSpan), ::app::Fuse::Navigation::ProgressSpan__typeof());
    inst->_ObjInit(from, to);
    return inst;
}

}}}
