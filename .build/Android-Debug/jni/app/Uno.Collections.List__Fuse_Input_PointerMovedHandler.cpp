// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.PointerMovedHandler.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Input_PointerMovedHandler.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Input_PointerMovedHandler__uType* List__Fuse_Input_PointerMovedHandler__typeof()
{
    static List__Fuse_Input_PointerMovedHandler__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Input_PointerMovedHandler__uType*)::uAllocClassType(sizeof(List__Fuse_Input_PointerMovedHandler__uType), "Uno.Collections.List<Fuse.Input.PointerMovedHandler>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__Fuse_Input_PointerMovedHandler, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Input_PointerMovedHandler__get_Count(List__Fuse_Input_PointerMovedHandler* __this)
{
    return __this->_used;
}

::uDelegate* List__Fuse_Input_PointerMovedHandler__get_Item(List__Fuse_Input_PointerMovedHandler* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(index);
}

void List__Fuse_Input_PointerMovedHandler__set_Item(List__Fuse_Input_PointerMovedHandler* __this, int index, ::uDelegate* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(index) = value;
    __this->_version++;
}

void List__Fuse_Input_PointerMovedHandler__BoundsCheck(List__Fuse_Input_PointerMovedHandler* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Input_PointerMovedHandler___ObjInit(List__Fuse_Input_PointerMovedHandler* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Input_PointerMovedHandler* List__Fuse_Input_PointerMovedHandler__New_1(::uStatic* __this)
{
    List__Fuse_Input_PointerMovedHandler* inst = (::app::Uno::Collections::List__Fuse_Input_PointerMovedHandler*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Input_PointerMovedHandler), ::app::Uno::Collections::List__Fuse_Input_PointerMovedHandler__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
