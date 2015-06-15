// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_DISPOSAL_MANAGER_H__
#define __APP_FUSE_RESOURCES_DISPOSAL_MANAGER_H__

#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Resources_IAutoDisposable; } } }

namespace app {
namespace Fuse {
namespace Resources {

extern ::uStaticStrong< ::app::Uno::Collections::List__Fuse_Resources_IAutoDisposable*> DisposalManager___items;
extern bool DisposalManager___actionAdded;

struct DisposalManager__uType : ::uClassType
{
};

DisposalManager__uType* DisposalManager__typeof();

void DisposalManager__Add(::uStatic* __this, ::uObject* item);
void DisposalManager__Remove(::uStatic* __this, ::uObject* item);
void DisposalManager__VerifyAttach(::uStatic* __this);
void DisposalManager__Update(::uStatic* __this);
void DisposalManager___TypeInit(::uStatic* __this);

}}}


#endif
