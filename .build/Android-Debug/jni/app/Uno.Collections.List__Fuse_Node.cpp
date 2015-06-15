// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Node.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Node__uType* List__Fuse_Node__typeof()
{
    static List__Fuse_Node__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Node__uType*)::uAllocClassType(sizeof(List__Fuse_Node__uType), "Uno.Collections.List<Fuse.Node>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__Fuse_Node, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Node List__Fuse_Node__GetEnumerator(List__Fuse_Node* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Node__New_1(NULL, __this);
}

void List__Fuse_Node__EnsureCapacity(List__Fuse_Node* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Node__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Node__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Node*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Node*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Node__Add(List__Fuse_Node* __this, ::app::Fuse::Node* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Node*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Node__Clear(List__Fuse_Node* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

}}}
