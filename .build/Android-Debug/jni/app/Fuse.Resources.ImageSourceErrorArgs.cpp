// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Resources.ImageSourceErrorArgs.h>
#include <app/Uno.Exception.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Resources {

ImageSourceErrorArgs__uType* ImageSourceErrorArgs__typeof()
{
    static ImageSourceErrorArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ImageSourceErrorArgs__uType*)::uAllocClassType(sizeof(ImageSourceErrorArgs__uType), "Fuse.Resources.ImageSourceErrorArgs", ::app::Uno::EventArgs__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(ImageSourceErrorArgs, Reason);
        type->StrongRefOffsets[1] = offsetof(ImageSourceErrorArgs, ExceptionCause);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Reason";
        type->StrongRefNames[1] = "ExceptionCause";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void ImageSourceErrorArgs___ObjInit_1(ImageSourceErrorArgs* __this)
{
    ::app::Uno::EventArgs___ObjInit(__this);
}

ImageSourceErrorArgs* ImageSourceErrorArgs__New_2(::uStatic* __this)
{
    ImageSourceErrorArgs* inst = (::app::Fuse::Resources::ImageSourceErrorArgs*)::uAllocObject(sizeof(::app::Fuse::Resources::ImageSourceErrorArgs), ::app::Fuse::Resources::ImageSourceErrorArgs__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
