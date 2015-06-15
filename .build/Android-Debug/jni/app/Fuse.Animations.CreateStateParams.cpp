// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Double.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Animations {

CreateStateParams__uType* CreateStateParams__typeof()
{
    static CreateStateParams__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (CreateStateParams__uType*)::uAllocClassType(sizeof(CreateStateParams__uType), "Fuse.Animations.CreateStateParams", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(CreateStateParams, Attached);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Attached";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void CreateStateParams___ObjInit(CreateStateParams* __this)
{
}

CreateStateParams* CreateStateParams__New_1(::uStatic* __this)
{
    CreateStateParams* inst = (::app::Fuse::Animations::CreateStateParams*)::uAllocObject(sizeof(::app::Fuse::Animations::CreateStateParams), ::app::Fuse::Animations::CreateStateParams__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
