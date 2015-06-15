// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.HitTestResult.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Node_HitTestRecord.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {

Node_HitTestRecord__uType* Node_HitTestRecord__typeof()
{
    static Node_HitTestRecord__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Node_HitTestRecord__uType*)::uAllocClassType(sizeof(Node_HitTestRecord__uType), "Fuse.Node.HitTestRecord", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Node_HitTestRecord, Node);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Node";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Node_HitTestRecord__HitTestCallback(Node_HitTestRecord* __this, ::app::Fuse::HitTestResult* result)
{
    if (__this->Node == NULL)
    {
        __this->Node = ::uPtr< ::app::Fuse::HitTestResult*>(result)->HitObject();
    }
}

void Node_HitTestRecord___ObjInit(Node_HitTestRecord* __this)
{
}

Node_HitTestRecord* Node_HitTestRecord__New_1(::uStatic* __this)
{
    Node_HitTestRecord* inst = (::app::Fuse::Node_HitTestRecord*)::uAllocObject(sizeof(::app::Fuse::Node_HitTestRecord), ::app::Fuse::Node_HitTestRecord__typeof());
    inst->_ObjInit();
    return inst;
}

}}
