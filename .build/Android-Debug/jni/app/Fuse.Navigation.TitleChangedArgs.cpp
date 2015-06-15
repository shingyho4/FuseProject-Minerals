// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.ITitleNode.h>
#include <app/Fuse.Navigation.TitleChangedArgs.h>

namespace app {
namespace Fuse {
namespace Navigation {

TitleChangedArgs__uType* TitleChangedArgs__typeof()
{
    static TitleChangedArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TitleChangedArgs__uType*)::uAllocClassType(sizeof(TitleChangedArgs__uType), "Fuse.Navigation.TitleChangedArgs", ::app::Uno::EventArgs__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(TitleChangedArgs, _NewTitleNode);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_NewTitleNode";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* TitleChangedArgs__get_NewTitleNode(TitleChangedArgs* __this)
{
    return __this->_NewTitleNode;
}

void TitleChangedArgs__set_NewTitleNode(TitleChangedArgs* __this, ::uObject* value)
{
    __this->_NewTitleNode = value;
}

void TitleChangedArgs___ObjInit_1(TitleChangedArgs* __this, ::uObject* newTitleNode)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->NewTitleNode(newTitleNode);
}

TitleChangedArgs* TitleChangedArgs__New_2(::uStatic* __this, ::uObject* newTitleNode)
{
    TitleChangedArgs* inst = (::app::Fuse::Navigation::TitleChangedArgs*)::uAllocObject(sizeof(::app::Fuse::Navigation::TitleChangedArgs), ::app::Fuse::Navigation::TitleChangedArgs__typeof());
    inst->_ObjInit_1(newTitleNode);
    return inst;
}

}}}
