// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Primitives\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Primitives.Track.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Gestures.DegreeSpan.h>
#include <app/Fuse.Gestures.SwipeGestureHelper.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Translation.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Primitives {

::uStaticStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> Track___horizontalGesture;

Track__uType* Track__typeof()
{
    static Track__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Track__uType*)::uAllocClassType(sizeof(Track__uType), "Fuse.Controls.Primitives.Track", ::app::Fuse::Controls::Primitives::RangeControl__typeof(), 7, 1);
        type->__fp_OnPlaced = (void(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2))Track__OnPlaced;
        type->__fp_OnResized = (void(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2))Track__OnResized;
        type->__fp_OnValueChanged = (void(*)(::app::Fuse::Controls::Primitives::RangeControl*))Track__OnValueChanged;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();

        type->InterfaceOffsets[0] = offsetof(Track__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Track__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Track__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(Track__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(Track__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(Track__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(Track__uType, __interface_6);

        type->StrongRefOffsets[0] = offsetof(Track, _thumbTransform);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_thumbTransform";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Elements::Element* Track__get_Thumb(Track* __this)
{
    return __this->VisualTree();
}

void Track__set_Thumb(Track* __this, ::app::Fuse::Elements::Element* value)
{
    if (__this->VisualTree() != value)
    {
        if (__this->VisualTree() != NULL)
        {
            ::app::Uno::Collections::ICollection__Fuse_Transform::Remove(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Elements::Element*>(__this->VisualTree())->Transforms()), (::app::Fuse::Transform*)__this->_thumbTransform);
        }

        __this->VisualTree(value);

        if (__this->VisualTree() != NULL)
        {
            ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Elements::Element*>(__this->VisualTree())->Transforms()), (::app::Fuse::Transform*)__this->_thumbTransform);
        }

        __this->UpdateThumbPosition();
    }
}

::app::Uno::Float2 Track__get_ThumbSize(Track* __this)
{
    return (__this->Thumb() != NULL) ? ::uPtr< ::app::Fuse::Elements::Element*>(__this->Thumb())->ActualSize() : ::app::Uno::Float2__New_1(NULL, 0.0f);
}

::app::Uno::Rect Track__get_ClientRect(Track* __this)
{
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_126 = ::app::Uno::Float4();
    return ::app::Uno::Rect__New_2(NULL, (ind_124 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_124.X, ind_124.Y)), ::app::Uno::Float2__op_Subtraction(NULL, ::app::Uno::Float2__op_Subtraction(NULL, __this->ActualSize(), (ind_125 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_125.X, ind_125.Y))), (ind_126 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_126.Z, ind_126.W))));
}

void Track__UpdateThumbPosition(Track* __this)
{
    ::uPtr< ::app::Fuse::Translation*>(__this->_thumbTransform)->X(__this->ValueToPosition(__this->Value()).X);
}

void Track__OnPlaced(Track* __this, ::app::Uno::Float2 oldPos)
{
    __this->UpdateThumbPosition();
    ::app::Fuse::Elements::Element__OnPlaced(__this, oldPos);
}

void Track__OnResized(Track* __this, ::app::Uno::Float2 oldSize)
{
    __this->UpdateThumbPosition();
    ::app::Fuse::Elements::Element__OnResized(__this, oldSize);
}

void Track__OnValueChanged(Track* __this)
{
    __this->UpdateThumbPosition();
    ::app::Fuse::Controls::Primitives::RangeControl__OnValueChanged(__this);
}

::app::Uno::Float2 Track__ValueToPosition(Track* __this, float val)
{
    val = ::app::Uno::Math__Clamp_1(NULL, val, __this->Minimum(), __this->Maximum());
    ::app::Uno::Rect clientRect = __this->ClientRect();
    return ::app::Uno::Float2__New_2(NULL, __this->Remap(val, __this->Minimum(), __this->Maximum(), clientRect.Left, clientRect.Right - __this->ThumbSize().X), clientRect.Center().Y);
}

float Track__Remap(Track* __this, float val, float min, float max, float newMin, float newMax)
{
    return (((val - min) / (max - min)) * (newMax - newMin)) + newMin;
}

void Track___TypeInit_3(::uStatic* __this)
{
    ::uArray* array_123;
    Track___horizontalGesture = ::app::Fuse::Gestures::SwipeGestureHelper__New_1(NULL, 10.0f, (array_123 = ::uNewArray(::app::Fuse::Gestures::DegreeSpan__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(0) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, 45.0f, 135.0f), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(1) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, -45.0f, -135.0f), array_123));
}

}}}}
