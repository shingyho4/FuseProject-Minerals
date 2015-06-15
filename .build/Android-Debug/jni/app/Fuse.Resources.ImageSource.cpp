// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Resources.ImageSourceErrorArgs.h>
#include <app/Fuse.Resources.ImageSourceErrorHandler.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Resources {

ImageSource__uType* ImageSource__typeof()
{
    static ImageSource__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ImageSource__uType*)::uAllocClassType(sizeof(ImageSource__uType), "Fuse.Resources.ImageSource", ::uObject__typeof(), 0, 2);
        type->__fp_OnPinChanged = ImageSource__OnPinChanged;

        type->StrongRefOffsets[0] = offsetof(ImageSource, Changed);
        type->StrongRefOffsets[1] = offsetof(ImageSource, Error);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Changed";
        type->StrongRefNames[1] = "Error";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool ImageSource__get_IsPinned(ImageSource* __this)
{
    return __this->_pinCount > 0;
}

void ImageSource__OnChanged(ImageSource* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Changed, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Changed)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void ImageSource__ProxyChanged(ImageSource* __this, ::uObject* s, ::app::Uno::EventArgs* a)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Changed, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Changed)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>(s, a);
    }
}

void ImageSource__OnError(ImageSource* __this, ::uString* msg, ::app::Uno::Exception* e)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Error, NULL))
    {
        ::app::Fuse::Resources::ImageSourceErrorArgs* sa = ::app::Fuse::Resources::ImageSourceErrorArgs__New_2(NULL);
        ::uPtr< ::app::Fuse::Resources::ImageSourceErrorArgs*>(sa)->Reason = msg;
        sa->ExceptionCause = e;
        ::uPtr< ::uDelegate*>(__this->Error)->InvokeVoid< ::uObject*, ::app::Fuse::Resources::ImageSourceErrorArgs*>((::uObject*)__this, sa);
    }
}

void ImageSource__ProxyError(ImageSource* __this, ::uObject* s, ::app::Fuse::Resources::ImageSourceErrorArgs* a)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Error, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Error)->InvokeVoid< ::uObject*, ::app::Fuse::Resources::ImageSourceErrorArgs*>(s, a);
    }
}

void ImageSource__Pin(ImageSource* __this)
{
    __this->_pinCount++;

    if (__this->_pinCount == 1)
    {
        __this->OnPinChanged();
    }
}

void ImageSource__Unpin(ImageSource* __this)
{
    __this->_pinCount--;

    if (__this->_pinCount == 0)
    {
        __this->OnPinChanged();
    }
}

void ImageSource__OnPinChanged(ImageSource* __this)
{
}

void ImageSource___ObjInit(ImageSource* __this)
{
}

void ImageSource__add_Changed(ImageSource* __this, ::uDelegate* value)
{
    __this->Changed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Changed, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void ImageSource__remove_Changed(ImageSource* __this, ::uDelegate* value)
{
    __this->Changed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Changed, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void ImageSource__add_Error(ImageSource* __this, ::uDelegate* value)
{
    __this->Error = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Error, (::uDelegate*)value), ::app::Fuse::Resources::ImageSourceErrorHandler__typeof());
}

void ImageSource__remove_Error(ImageSource* __this, ::uDelegate* value)
{
    __this->Error = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Error, (::uDelegate*)value), ::app::Fuse::Resources::ImageSourceErrorHandler__typeof());
}

}}}
