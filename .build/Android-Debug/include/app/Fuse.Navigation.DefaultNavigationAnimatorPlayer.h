// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_DEFAULT_NAVIGATION_ANIMATOR_PLAYER_H__
#define __APP_FUSE_NAVIGATION_DEFAULT_NAVIGATION_ANIMATOR_PLAYER_H__

#include <app/Fuse.Navigation.INavigationAnimatorPlayer.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct ProgressTimer; } } }

namespace app {
namespace Fuse {
namespace Navigation {

struct DefaultNavigationAnimatorPlayer;

struct DefaultNavigationAnimatorPlayer__uType : ::uClassType
{
    ::app::Fuse::Navigation::INavigationAnimatorPlayer __interface_0;
};

DefaultNavigationAnimatorPlayer__uType* DefaultNavigationAnimatorPlayer__typeof();

void DefaultNavigationAnimatorPlayer__Update(DefaultNavigationAnimatorPlayer* __this);
void DefaultNavigationAnimatorPlayer__EnsureAtEnd(DefaultNavigationAnimatorPlayer* __this);
void DefaultNavigationAnimatorPlayer___ObjInit(DefaultNavigationAnimatorPlayer* __this, ::app::Fuse::Navigation::ProgressTimer* progressTimer, ::uObject* animators, ::uDelegate* progressSetCallback, ::uDelegate* doneCallback);
DefaultNavigationAnimatorPlayer* DefaultNavigationAnimatorPlayer__New_1(::uStatic* __this, ::app::Fuse::Navigation::ProgressTimer* progressTimer, ::uObject* animators, ::uDelegate* progressSetCallback, ::uDelegate* doneCallback);

struct DefaultNavigationAnimatorPlayer : ::uObject
{
    ::uStrong< ::app::Fuse::Navigation::ProgressTimer*> _progressTimer;
    ::uStrong< ::uObject*> _animators;
    ::uStrong< ::uDelegate*> _progressSetCallback;
    ::uStrong< ::uDelegate*> _doneCallback;

    void Update() { DefaultNavigationAnimatorPlayer__Update(this); }
    void EnsureAtEnd() { DefaultNavigationAnimatorPlayer__EnsureAtEnd(this); }
    void _ObjInit(::app::Fuse::Navigation::ProgressTimer* progressTimer, ::uObject* animators, ::uDelegate* progressSetCallback, ::uDelegate* doneCallback) { DefaultNavigationAnimatorPlayer___ObjInit(this, progressTimer, animators, progressSetCallback, doneCallback); }
};

}}}


#endif
