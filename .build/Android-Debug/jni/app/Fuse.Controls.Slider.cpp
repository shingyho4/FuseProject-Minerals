// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.Slider.h>

namespace app {
namespace Fuse {
namespace Controls {

Slider__uType* Slider__typeof()
{
    static Slider__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Slider__uType*)::uAllocClassType(sizeof(Slider__uType), "Fuse.Controls.Slider", ::app::Fuse::Controls::Primitives::Track__typeof(), 7);
        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();

        type->InterfaceOffsets[0] = offsetof(Slider__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Slider__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Slider__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(Slider__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(Slider__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(Slider__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(Slider__uType, __interface_6);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
