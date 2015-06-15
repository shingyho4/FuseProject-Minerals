// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Platform2.SystemUIWillResizeEventArgs.h>

namespace app {
namespace Uno {
namespace Platform2 {

SystemUIWillResizeEventArgs__uType* SystemUIWillResizeEventArgs__typeof()
{
    static SystemUIWillResizeEventArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SystemUIWillResizeEventArgs__uType*)::uAllocClassType(sizeof(SystemUIWillResizeEventArgs__uType), "Uno.Platform2.SystemUIWillResizeEventArgs", ::app::Uno::EventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int SystemUIWillResizeEventArgs__get_ID(SystemUIWillResizeEventArgs* __this)
{
    return __this->_ID;
}

void SystemUIWillResizeEventArgs__set_ID(SystemUIWillResizeEventArgs* __this, int value)
{
    __this->_ID = value;
}

int SystemUIWillResizeEventArgs__get_ResizeReason(SystemUIWillResizeEventArgs* __this)
{
    return __this->_ResizeReason;
}

void SystemUIWillResizeEventArgs__set_ResizeReason(SystemUIWillResizeEventArgs* __this, int value)
{
    __this->_ResizeReason = value;
}

::app::Uno::Rect SystemUIWillResizeEventArgs__get_StartFrame(SystemUIWillResizeEventArgs* __this)
{
    return __this->_StartFrame;
}

void SystemUIWillResizeEventArgs__set_StartFrame(SystemUIWillResizeEventArgs* __this, ::app::Uno::Rect value)
{
    __this->_StartFrame = value;
}

::app::Uno::Rect SystemUIWillResizeEventArgs__get_EndFrame(SystemUIWillResizeEventArgs* __this)
{
    return __this->_EndFrame;
}

void SystemUIWillResizeEventArgs__set_EndFrame(SystemUIWillResizeEventArgs* __this, ::app::Uno::Rect value)
{
    __this->_EndFrame = value;
}

bool SystemUIWillResizeEventArgs__get_IsAnimated(SystemUIWillResizeEventArgs* __this)
{
    return __this->_IsAnimated;
}

void SystemUIWillResizeEventArgs__set_IsAnimated(SystemUIWillResizeEventArgs* __this, bool value)
{
    __this->_IsAnimated = value;
}

double SystemUIWillResizeEventArgs__get_AnimationDuration(SystemUIWillResizeEventArgs* __this)
{
    return __this->_AnimationDuration;
}

void SystemUIWillResizeEventArgs__set_AnimationDuration(SystemUIWillResizeEventArgs* __this, double value)
{
    __this->_AnimationDuration = value;
}

int SystemUIWillResizeEventArgs__get_AnimationCurve(SystemUIWillResizeEventArgs* __this)
{
    return __this->_AnimationCurve;
}

void SystemUIWillResizeEventArgs__set_AnimationCurve(SystemUIWillResizeEventArgs* __this, int value)
{
    __this->_AnimationCurve = value;
}

void SystemUIWillResizeEventArgs___ObjInit_1(SystemUIWillResizeEventArgs* __this, int id, int resizeReason, ::app::Uno::Rect endFrame, ::app::Uno::Rect startFrame, double animationDuration, int animationCurve)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->ID(id);
    __this->ResizeReason(resizeReason);
    __this->StartFrame(startFrame);
    __this->EndFrame(endFrame);

    if (animationDuration != 0.0)
    {
        __this->IsAnimated(true);
        __this->AnimationDuration(animationDuration);
        __this->AnimationCurve(animationCurve);
    }
}

SystemUIWillResizeEventArgs* SystemUIWillResizeEventArgs__New_2(::uStatic* __this, int id, int resizeReason, ::app::Uno::Rect endFrame, ::app::Uno::Rect startFrame, double animationDuration, int animationCurve)
{
    SystemUIWillResizeEventArgs* inst = (::app::Uno::Platform2::SystemUIWillResizeEventArgs*)::uAllocObject(sizeof(::app::Uno::Platform2::SystemUIWillResizeEventArgs), ::app::Uno::Platform2::SystemUIWillResizeEventArgs__typeof());
    inst->_ObjInit_1(id, resizeReason, endFrame, startFrame, animationDuration, animationCurve);
    return inst;
}

}}}
