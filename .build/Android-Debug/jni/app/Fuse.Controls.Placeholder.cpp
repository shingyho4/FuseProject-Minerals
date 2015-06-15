// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.Placeholder.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Controls {

Placeholder__uType* Placeholder__typeof()
{
    static Placeholder__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Placeholder__uType*)::uAllocClassType(sizeof(Placeholder__uType), "Fuse.Controls.Placeholder", ::app::Fuse::Controls::Control__typeof(), 7, 1);
        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();

        type->InterfaceOffsets[0] = offsetof(Placeholder__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Placeholder__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Placeholder__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(Placeholder__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(Placeholder__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(Placeholder__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(Placeholder__uType, __interface_6);

        type->StrongRefOffsets[0] = offsetof(Placeholder, _Target);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Target";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Elements::Element* Placeholder__get_Target(Placeholder* __this)
{
    return __this->_Target;
}

void Placeholder__set_Target(Placeholder* __this, ::app::Fuse::Elements::Element* value)
{
    __this->_Target = value;
}

void Placeholder__AcquireTarget(Placeholder* __this)
{
    if (__this->Target() == NULL)
    {
        return;
    }

    Placeholder* oldParent = ::uAs< Placeholder*>(::uPtr< ::app::Fuse::Elements::Element*>(__this->Target())->Parent(), Placeholder__typeof());

    if (oldParent == NULL)
    {
        return;
    }

    ::uPtr< ::app::Fuse::Controls::Placeholder*>(oldParent)->VisualTree(NULL);
    __this->VisualTree(__this->Target());
}

}}}
