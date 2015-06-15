// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.HitTestCallback.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.HitTestResult.h>
#include <app/Fuse.Input.SelectionQuery.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Input {

SelectionQuery__uType* SelectionQuery__typeof()
{
    static SelectionQuery__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SelectionQuery__uType*)::uAllocClassType(sizeof(SelectionQuery__uType), "Fuse.Input.SelectionQuery", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(SelectionQuery, _result);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_result";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::HitTestResult* SelectionQuery__Select(SelectionQuery* __this, ::app::Fuse::Node* root, ::app::Uno::Float2 point)
{
    ::app::Fuse::HitTestContext* args = ::app::Fuse::HitTestContext__New_1(NULL, point, ::uNewDelegateNonVirt(::app::Fuse::HitTestCallback__typeof(), (const void*)::app::Fuse::Input::SelectionQuery__Select_1, __this));
    ::uPtr< ::app::Fuse::Node*>(root)->HitTest(args);
    ::uPtr< ::app::Fuse::HitTestContext*>(args)->Dispose();
    return __this->_result;
}

void SelectionQuery__Select_1(SelectionQuery* __this, ::app::Fuse::HitTestResult* result)
{
    __this->count++;

    if ((__this->_result == NULL) || ((::uPtr< ::app::Fuse::HitTestResult*>(__this->_result)->HasHitDistance() && ::uPtr< ::app::Fuse::HitTestResult*>(result)->HasHitDistance()) && (::uPtr< ::app::Fuse::HitTestResult*>(result)->HitDistance() < ::uPtr< ::app::Fuse::HitTestResult*>(__this->_result)->HitDistance())))
    {
        __this->_result = result;
    }
}

void SelectionQuery___ObjInit(SelectionQuery* __this)
{
}

SelectionQuery* SelectionQuery__New_1(::uStatic* __this)
{
    SelectionQuery* inst = (::app::Fuse::Input::SelectionQuery*)::uAllocObject(sizeof(::app::Fuse::Input::SelectionQuery), ::app::Fuse::Input::SelectionQuery__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
