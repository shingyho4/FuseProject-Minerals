// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Triggers_Actions_TriggerAction.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Triggers_Actions_TriggerAction__uType* List__Fuse_Triggers_Actions_TriggerAction__typeof()
{
    static List__Fuse_Triggers_Actions_TriggerAction__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Triggers_Actions_TriggerAction__uType*)::uAllocClassType(sizeof(List__Fuse_Triggers_Actions_TriggerAction__uType), "Uno.Collections.List<Fuse.Triggers.Actions.TriggerAction>", ::uObject__typeof(), 2, 1);
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Triggers::Actions::TriggerAction*))List__Fuse_Triggers_Actions_TriggerAction__Add;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Triggers_Actions_TriggerAction__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Fuse_Triggers_Actions_TriggerAction__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List__Fuse_Triggers_Actions_TriggerAction__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(List__Fuse_Triggers_Actions_TriggerAction, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Triggers_Actions_TriggerAction__get_Count(List__Fuse_Triggers_Actions_TriggerAction* __this)
{
    return __this->_used;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction List__Fuse_Triggers_Actions_TriggerAction__GetEnumerator(List__Fuse_Triggers_Actions_TriggerAction* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__New_1(NULL, __this);
}

void List__Fuse_Triggers_Actions_TriggerAction__EnsureCapacity(List__Fuse_Triggers_Actions_TriggerAction* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Triggers::Actions::TriggerAction__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Triggers::Actions::TriggerAction__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Triggers::Actions::TriggerAction*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Triggers::Actions::TriggerAction*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Triggers_Actions_TriggerAction__Add(List__Fuse_Triggers_Actions_TriggerAction* __this, ::app::Fuse::Triggers::Actions::TriggerAction* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Triggers::Actions::TriggerAction*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Triggers_Actions_TriggerAction___ObjInit(List__Fuse_Triggers_Actions_TriggerAction* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Triggers_Actions_TriggerAction* List__Fuse_Triggers_Actions_TriggerAction__New_1(::uStatic* __this)
{
    List__Fuse_Triggers_Actions_TriggerAction* inst = (::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction), ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
