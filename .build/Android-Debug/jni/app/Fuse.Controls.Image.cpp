// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.ImageElement.h>
#include <app/Uno.BundleFile.h>

namespace app {
namespace Fuse {
namespace Controls {

Image__uType* Image__typeof()
{
    static Image__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Image__uType*)::uAllocClassType(sizeof(Image__uType), "Fuse.Controls.Image", ::app::Fuse::Controls::Panel__typeof(), 9, 1);
        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();
        type->Implements[7] = ::app::Fuse::Navigation::INavigationPanel__typeof();
        type->Implements[8] = ::app::Fuse::Triggers::IAddRemoveChild__typeof();

        type->InterfaceOffsets[0] = offsetof(Image__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Image__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Image__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(Image__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(Image__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(Image__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(Image__uType, __interface_6);
        type->InterfaceOffsets[7] = offsetof(Image__uType, __interface_7);
        type->InterfaceOffsets[8] = offsetof(Image__uType, __interface_8);

        type->StrongRefOffsets[0] = offsetof(Image, _img);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_img";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::BundleFile* Image__get_File(Image* __this)
{
    return ::uPtr< ::app::Fuse::Elements::ImageElement*>(__this->_img)->File();
}

void Image__set_File(Image* __this, ::app::Uno::BundleFile* value)
{
    ::uPtr< ::app::Fuse::Elements::ImageElement*>(__this->_img)->File(value);
}

void Image___ObjInit_4(Image* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    __this->_img = ::app::Fuse::Elements::ImageElement__New_1(NULL);
    __this->VisualTree((::app::Fuse::Elements::Element*)__this->_img);
}

Image* Image__New_2(::uStatic* __this)
{
    Image* inst = (::app::Fuse::Controls::Image*)::uAllocObject(sizeof(::app::Fuse::Controls::Image), ::app::Fuse::Controls::Image__typeof());
    inst->_ObjInit_4();
    return inst;
}

}}}
