// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.TextEnteredHandler.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Input_TextEnteredHandler.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Input_TextEnteredHandler__uType* List__Fuse_Input_TextEnteredHandler__typeof()
{
    static List__Fuse_Input_TextEnteredHandler__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Input_TextEnteredHandler__uType*)::uAllocClassType(sizeof(List__Fuse_Input_TextEnteredHandler__uType), "Uno.Collections.List<Fuse.Input.TextEnteredHandler>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__Fuse_Input_TextEnteredHandler, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Input_TextEnteredHandler__get_Count(List__Fuse_Input_TextEnteredHandler* __this)
{
    return __this->_used;
}

::uDelegate* List__Fuse_Input_TextEnteredHandler__get_Item(List__Fuse_Input_TextEnteredHandler* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(index);
}

void List__Fuse_Input_TextEnteredHandler__set_Item(List__Fuse_Input_TextEnteredHandler* __this, int index, ::uDelegate* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(index) = value;
    __this->_version++;
}

void List__Fuse_Input_TextEnteredHandler__BoundsCheck(List__Fuse_Input_TextEnteredHandler* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Input_TextEnteredHandler___ObjInit(List__Fuse_Input_TextEnteredHandler* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Input_TextEnteredHandler* List__Fuse_Input_TextEnteredHandler__New_1(::uStatic* __this)
{
    List__Fuse_Input_TextEnteredHandler* inst = (::app::Uno::Collections::List__Fuse_Input_TextEnteredHandler*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Input_TextEnteredHandler), ::app::Uno::Collections::List__Fuse_Input_TextEnteredHandler__typeof());
    inst->_ObjInit();
    return inst;
}

}}}