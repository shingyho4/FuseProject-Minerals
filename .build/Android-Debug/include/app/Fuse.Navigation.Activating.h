// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_ACTIVATING_H__
#define __APP_FUSE_NAVIGATION_ACTIVATING_H__

#include <app/Fuse.Navigation.NavigationTrigger.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct NavigationArgs; } } }

namespace app {
namespace Fuse {
namespace Navigation {

struct Activating;

struct Activating__uType : ::app::Fuse::Navigation::NavigationTrigger__uType
{
};

Activating__uType* Activating__typeof();

void Activating__ForceUpdate(Activating* __this);
double Activating__InvertProgress(Activating* __this, double p);
void Activating__OnNavigationStateChanged(Activating* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state);

struct Activating : ::app::Fuse::Navigation::NavigationTrigger
{
    double InvertProgress(double p) { return Activating__InvertProgress(this, p); }
};

}}}

#include <app/Uno.Double.h>

namespace app {
namespace Fuse {
namespace Navigation {

}}}


#endif
