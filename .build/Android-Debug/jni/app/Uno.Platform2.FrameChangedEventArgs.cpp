// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Platform2.FrameChangedEventArgs.h>

namespace app {
namespace Uno {
namespace Platform2 {

FrameChangedEventArgs__uType* FrameChangedEventArgs__typeof()
{
    static FrameChangedEventArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FrameChangedEventArgs__uType*)::uAllocClassType(sizeof(FrameChangedEventArgs__uType), "Uno.Platform2.FrameChangedEventArgs", ::app::Uno::EventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Rect FrameChangedEventArgs__get_NewFrame(FrameChangedEventArgs* __this)
{
    return __this->_NewFrame;
}

void FrameChangedEventArgs__set_NewFrame(FrameChangedEventArgs* __this, ::app::Uno::Rect value)
{
    __this->_NewFrame = value;
}

void FrameChangedEventArgs___ObjInit_1(FrameChangedEventArgs* __this, ::app::Uno::Rect newFrame)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->NewFrame(newFrame);
}

FrameChangedEventArgs* FrameChangedEventArgs__New_2(::uStatic* __this, ::app::Uno::Rect newFrame)
{
    FrameChangedEventArgs* inst = (::app::Uno::Platform2::FrameChangedEventArgs*)::uAllocObject(sizeof(::app::Uno::Platform2::FrameChangedEventArgs), ::app::Uno::Platform2::FrameChangedEventArgs__typeof());
    inst->_ObjInit_1(newFrame);
    return inst;
}

}}}
