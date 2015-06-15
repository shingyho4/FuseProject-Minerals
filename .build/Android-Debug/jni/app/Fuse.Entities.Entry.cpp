// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.Entry.h>
#include <app/Fuse.Entities.Mesh.h>

namespace app {
namespace Fuse {
namespace Entities {

Entry__uType* Entry__typeof()
{
    static Entry__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Entry__uType*)::uAllocValueType(sizeof(Entry__uType), "Fuse.Entities.Entry", sizeof(Entry), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Entry, Mesh);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Mesh";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Entry___ObjInit(Entry* __this, ::app::Fuse::Entities::Mesh* m, ::app::Uno::Float4x4 t, ::app::Uno::Float4x4 worldInverse)
{
    __this->Mesh = m;
    __this->World = t;
    __this->WorldInverse = worldInverse;
}

Entry Entry__New_1(::uStatic* __this, ::app::Fuse::Entities::Mesh* m, ::app::Uno::Float4x4 t, ::app::Uno::Float4x4 worldInverse)
{
    Entry inst = ::uDefault< Entry>();
    inst._ObjInit(m, t, worldInverse);
    return inst;
}

}}}
