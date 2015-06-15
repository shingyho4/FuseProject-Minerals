// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_APPLICATION_H__
#define __APP_UNO_APPLICATION_H__

#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Graphics { struct GraphicsContext; } } }
namespace app { namespace Uno { namespace Platform { struct Window; } } }

namespace app {
namespace Uno {

struct Application;

extern ::uStaticStrong< Application*> Application___Current;

struct Application__uType : ::uClassType
{
    void(*__fp_Update)(Application*);
    void(*__fp_Draw)(Application*);
};

Application__uType* Application__typeof();

Application* Application__get_Current(::uStatic* __this);
void Application__set_Current(::uStatic* __this, Application* value);
::app::Uno::Platform::Window* Application__get_Window(Application* __this);
void Application__set_Window(Application* __this, ::app::Uno::Platform::Window* value);
::app::Uno::Graphics::GraphicsContext* Application__get_GraphicsContext(Application* __this);
void Application__set_GraphicsContext(Application* __this, ::app::Uno::Graphics::GraphicsContext* value);
::app::Uno::Float4 Application__get_ClearColor(Application* __this);
void Application__set_ClearColor(Application* __this, ::app::Uno::Float4 value);
float Application__get_ClearDepth(Application* __this);
void Application__set_ClearDepth(Application* __this, float value);
bool Application__get_DrawNextFrame(Application* __this);
void Application__set_DrawNextFrame(Application* __this, bool value);
double Application__get_FrameTime(Application* __this);
void Application__set_FrameTime(Application* __this, double value);
double Application__get_FrameInterval(Application* __this);
void Application__set_FrameInterval(Application* __this, double value);
void Application__Load(Application* __this);
void Application__Update(Application* __this);
void Application__Draw(Application* __this);
void Application___ObjInit(Application* __this);

struct Application : ::uObject
{
    ::uStrong< ::app::Uno::Platform::Window*> _Window;
    ::uStrong< ::app::Uno::Graphics::GraphicsContext*> _GraphicsContext;
    ::app::Uno::Float4 _ClearColor;
    float _ClearDepth;
    bool _DrawNextFrame;
    double _FrameTime;
    double _FrameInterval;

    void Load() { Application__Load(this); }
    void Update() { (((Application__uType*)this->__obj_type)->__fp_Update)(this); }
    void Draw() { (((Application__uType*)this->__obj_type)->__fp_Draw)(this); }
    void _ObjInit() { Application___ObjInit(this); }
    ::app::Uno::Platform::Window* Window() { return Application__get_Window(this); }
    void Window(::app::Uno::Platform::Window* value) { Application__set_Window(this, value); }
    ::app::Uno::Graphics::GraphicsContext* GraphicsContext() { return Application__get_GraphicsContext(this); }
    void GraphicsContext(::app::Uno::Graphics::GraphicsContext* value) { Application__set_GraphicsContext(this, value); }
    ::app::Uno::Float4 ClearColor();
    void ClearColor(::app::Uno::Float4 value);
    float ClearDepth() { return Application__get_ClearDepth(this); }
    void ClearDepth(float value) { Application__set_ClearDepth(this, value); }
    bool DrawNextFrame() { return Application__get_DrawNextFrame(this); }
    void DrawNextFrame(bool value) { Application__set_DrawNextFrame(this, value); }
    double FrameTime() { return Application__get_FrameTime(this); }
    void FrameTime(double value) { Application__set_FrameTime(this, value); }
    double FrameInterval() { return Application__get_FrameInterval(this); }
    void FrameInterval(double value) { Application__set_FrameInterval(this, value); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>

namespace app {
namespace Uno {

inline ::app::Uno::Float4 Application::ClearColor() { return Application__get_ClearColor(this); }
inline void Application::ClearColor(::app::Uno::Float4 value) { Application__set_ClearColor(this, value); }

}}


#endif
