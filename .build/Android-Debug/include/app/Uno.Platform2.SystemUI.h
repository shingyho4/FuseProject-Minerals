// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM2_SYSTEM_U_I_H__
#define __APP_UNO_PLATFORM2_SYSTEM_U_I_H__

#include <Uno/Platform2.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Platform2 { struct SystemUIWillResizeEventArgs; } } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Uno {
namespace Platform2 {

extern ::app::Uno::Rect SystemUI___cachedBottomFrame;
extern ::uStaticStrong< ::uDelegate*> SystemUI__TopFrameWillResize;
extern ::uStaticStrong< ::uDelegate*> SystemUI__BottomFrameWillResize;

struct SystemUI__uType : ::uClassType
{
};

SystemUI__uType* SystemUI__typeof();

::app::Uno::Rect SystemUI__get_TopFrame(::uStatic* __this);
::app::Uno::Rect SystemUI__GetStatusBarFrame(::uStatic* __this);
void SystemUI__OnWillResize(::uStatic* __this, ::app::Uno::Platform2::SystemUIWillResizeEventArgs* args);
void SystemUI__add_TopFrameWillResize(::uStatic* __this, ::uDelegate* value);
void SystemUI__remove_TopFrameWillResize(::uStatic* __this, ::uDelegate* value);
void SystemUI__add_BottomFrameWillResize(::uStatic* __this, ::uDelegate* value);

}}}


#endif
