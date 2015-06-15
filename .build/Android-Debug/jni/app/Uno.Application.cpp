// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Application.h>
#include <app/Uno.Graphics.GraphicsContext.h>
#include <app/Uno.Platform.Window.h>

namespace app {
namespace Uno {

::uStaticStrong< Application*> Application___Current;

Application__uType* Application__typeof()
{
    static Application__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Application__uType*)::uAllocClassType(sizeof(Application__uType), "Uno.Application", ::uObject__typeof(), 0, 2);
        type->__fp_Update = Application__Update;
        type->__fp_Draw = Application__Draw;

        type->StrongRefOffsets[0] = offsetof(Application, _Window);
        type->StrongRefOffsets[1] = offsetof(Application, _GraphicsContext);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Window";
        type->StrongRefNames[1] = "_GraphicsContext";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

Application* Application__get_Current(::uStatic* __this)
{
    return Application___Current;
}

void Application__set_Current(::uStatic* __this, Application* value)
{
    Application___Current = value;
}

::app::Uno::Platform::Window* Application__get_Window(Application* __this)
{
    return __this->_Window;
}

void Application__set_Window(Application* __this, ::app::Uno::Platform::Window* value)
{
    __this->_Window = value;
}

::app::Uno::Graphics::GraphicsContext* Application__get_GraphicsContext(Application* __this)
{
    return __this->_GraphicsContext;
}

void Application__set_GraphicsContext(Application* __this, ::app::Uno::Graphics::GraphicsContext* value)
{
    __this->_GraphicsContext = value;
}

::app::Uno::Float4 Application__get_ClearColor(Application* __this)
{
    return __this->_ClearColor;
}

void Application__set_ClearColor(Application* __this, ::app::Uno::Float4 value)
{
    __this->_ClearColor = value;
}

float Application__get_ClearDepth(Application* __this)
{
    return __this->_ClearDepth;
}

void Application__set_ClearDepth(Application* __this, float value)
{
    __this->_ClearDepth = value;
}

bool Application__get_DrawNextFrame(Application* __this)
{
    return __this->_DrawNextFrame;
}

void Application__set_DrawNextFrame(Application* __this, bool value)
{
    __this->_DrawNextFrame = value;
}

double Application__get_FrameTime(Application* __this)
{
    return __this->_FrameTime;
}

void Application__set_FrameTime(Application* __this, double value)
{
    __this->_FrameTime = value;
}

double Application__get_FrameInterval(Application* __this)
{
    return __this->_FrameInterval;
}

void Application__set_FrameInterval(Application* __this, double value)
{
    __this->_FrameInterval = value;
}

void Application__Load(Application* __this)
{
}

void Application__Update(Application* __this)
{
}

void Application__Draw(Application* __this)
{
}

void Application___ObjInit(Application* __this)
{
    Application__set_Current(NULL, __this);
    __this->Window(::app::Uno::Platform::Window__New_1(NULL));
    __this->GraphicsContext(::app::Uno::Graphics::GraphicsContext__New_1(NULL));
    __this->ClearColor(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    __this->ClearDepth(1.0f);
    __this->DrawNextFrame(true);
}

}}
