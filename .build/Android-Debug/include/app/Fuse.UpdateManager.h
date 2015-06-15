// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_UPDATE_MANAGER_H__
#define __APP_FUSE_UPDATE_MANAGER_H__

#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_UpdateListener; } } }

namespace app {
namespace Fuse {

extern ::uStaticStrong< ::app::Uno::Collections::List__Fuse_UpdateListener*> UpdateManager__listeners;
extern bool UpdateManager__hasListenersRemoved;
extern ::uStaticStrong< ::app::Uno::Collections::List__Fuse_UpdateListener*> UpdateManager__onces;
extern ::uStaticStrong< ::app::Uno::Collections::List__Fuse_UpdateListener*> UpdateManager__oncesPending;
extern int UpdateManager___frameIndex;

struct UpdateManager__uType : ::uClassType
{
};

UpdateManager__uType* UpdateManager__typeof();

int UpdateManager__get_FrameIndex(::uStatic* __this);
void UpdateManager__AddAction(::uStatic* __this, ::uDelegate* pu, int stage);
bool UpdateManager__RemoveFrom(::uStatic* __this, ::app::Uno::Collections::List__Fuse_UpdateListener* list, ::uDelegate* action, int stage);
void UpdateManager__RemoveAction(::uStatic* __this, ::uDelegate* pu, int stage);
void UpdateManager__AddOnceAction(::uStatic* __this, ::uDelegate* pu, int stage);
void UpdateManager__PerformNextFrame(::uStatic* __this, ::uDelegate* pu, int stage);
void UpdateManager__IncreaseFrameIndex(::uStatic* __this);
void UpdateManager__Update(::uStatic* __this);
void UpdateManager__Update_1(::uStatic* __this, int stage);
void UpdateManager___TypeInit(::uStatic* __this);

}}


#endif
