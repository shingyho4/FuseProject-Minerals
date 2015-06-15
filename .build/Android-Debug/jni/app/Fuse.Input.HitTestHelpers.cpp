// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.HitTestResult.h>
#include <app/Fuse.Input.HitTestHelpers.h>
#include <app/Fuse.Input.SelectionQuery.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Input {

HitTestHelpers__uType* HitTestHelpers__typeof()
{
    static HitTestHelpers__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HitTestHelpers__uType*)::uAllocClassType(sizeof(HitTestHelpers__uType), "Fuse.Input.HitTestHelpers");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::HitTestResult* HitTestHelpers__HitTestNearest(::uStatic* __this, ::app::Fuse::Node* root, ::app::Uno::Float2 point)
{
    ::app::Fuse::Input::SelectionQuery* sq = ::app::Fuse::Input::SelectionQuery__New_1(NULL);
    return ::uPtr< ::app::Fuse::Input::SelectionQuery*>(sq)->Select(root, point);
}

}}}
