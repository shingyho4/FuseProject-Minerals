// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Gestures.TappedArgs.h>
#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Node.h>

namespace app {
namespace Fuse {
namespace Gestures {

TappedArgs__uType* TappedArgs__typeof()
{
    static TappedArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TappedArgs__uType*)::uAllocClassType(sizeof(TappedArgs__uType), "Fuse.Gestures.TappedArgs", ::app::Fuse::Input::CustomPointerEventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void TappedArgs___ObjInit_4(TappedArgs* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::CustomPointerEventArgs___ObjInit_3(__this, args, node);
}

TappedArgs* TappedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node)
{
    TappedArgs* inst = (::app::Fuse::Gestures::TappedArgs*)::uAllocObject(sizeof(::app::Fuse::Gestures::TappedArgs), ::app::Fuse::Gestures::TappedArgs__typeof());
    inst->_ObjInit_4(args, node);
    return inst;
}

}}}
