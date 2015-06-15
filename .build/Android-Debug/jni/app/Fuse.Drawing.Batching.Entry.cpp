// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Batching.Entry.h>
#include <app/Uno.Content.Models.ModelMesh.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Batching {

Entry__uType* Entry__typeof()
{
    static Entry__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Entry__uType*)::uAllocClassType(sizeof(Entry__uType), "Fuse.Drawing.Batching.Entry", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Entry, Mesh);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Mesh";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Entry___ObjInit(Entry* __this, ::app::Uno::Content::Models::ModelMesh* m, int instanceId)
{
    __this->Mesh = m;
    __this->InstanceIndex = instanceId;
}

Entry* Entry__New_1(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* m, int instanceId)
{
    Entry* inst = (::app::Fuse::Drawing::Batching::Entry*)::uAllocObject(sizeof(::app::Fuse::Drawing::Batching::Entry), ::app::Fuse::Drawing::Batching::Entry__typeof());
    inst->_ObjInit(m, instanceId);
    return inst;
}

}}}}
