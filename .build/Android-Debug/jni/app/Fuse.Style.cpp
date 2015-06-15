// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Resources.ResourceRegistry.h>
#include <app/Fuse.Style.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Uno_UX_ITemplate.h>
#include <app/Uno.Action__Uno_UX_Resource.h>
#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IList__Uno_UX_Resource.h>
#include <app/Uno.Collections.ObservableList__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.ObservableList__Uno_UX_Resource.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Resource.h>

namespace app {
namespace Fuse {

Style__uType* Style__typeof()
{
    static Style__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Style__uType*)::uAllocClassType(sizeof(Style__uType), "Fuse.Style", ::uObject__typeof(), 1, 3);
        type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Style__Apply;

        type->Implements[0] = ::app::Uno::UX::ITemplate__typeof();

        type->InterfaceOffsets[0] = offsetof(Style__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(Style, _templates);
        type->StrongRefOffsets[1] = offsetof(Style, _resources);
        type->StrongRefOffsets[2] = offsetof(Style, TemplatesChanged);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_templates";
        type->StrongRefNames[1] = "_resources";
        type->StrongRefNames[2] = "TemplatesChanged";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* Style__get_Templates(Style* __this)
{
    ::uObject* ind_123 = __this->_templates;
    return (ind_123 != NULL) ? ind_123 : (__this->_templates = (::uObject*)::app::Uno::Collections::ObservableList__Uno_UX_ITemplate__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_ITemplate__typeof(), (const void*)::app::Fuse::Style__OnTemplateChanged, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_ITemplate__typeof(), (const void*)::app::Fuse::Style__OnTemplateChanged, __this)));
}

bool Style__get_HasResources(Style* __this)
{
    return __this->_resources != NULL;
}

::uObject* Style__get_Resources(Style* __this)
{
    if (__this->_resources == NULL)
    {
        __this->_resources = (::uObject*)::app::Uno::Collections::ObservableList__Uno_UX_Resource__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_Resource__typeof(), (const void*)::app::Fuse::Style__OnResourceChanged, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_Resource__typeof(), (const void*)::app::Fuse::Style__OnResourceChanged, __this));
    }

    return __this->_resources;
}

void Style__OnTemplateChanged(Style* __this, ::uObject* _)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TemplatesChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->TemplatesChanged)->InvokeVoid();
    }
}

bool Style__Apply(Style* __this, ::uObject* target)
{
    if (__this->_templates != NULL)
    {
        for (int i = 0; i < ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Count(::uPtr< ::uObject*>(__this->_templates)); i++)
        {
            if (!::app::Uno::UX::ITemplate::Apply(::uPtr< ::uObject*>(::app::Uno::Collections::IList__Uno_UX_ITemplate::Item(::uPtr< ::uObject*>(__this->_templates), i)), target))
            {
                return false;
            }
        }
    }

    return true;
}

void Style__OnResourceChanged(Style* __this, ::app::Uno::UX::Resource* r)
{
    ::app::Fuse::Resources::ResourceRegistry__NotifyResourceChanged(NULL, ::uPtr< ::app::Uno::UX::Resource*>(r)->Key());
}

void Style___ObjInit(Style* __this)
{
}

Style* Style__New_1(::uStatic* __this)
{
    Style* inst = (::app::Fuse::Style*)::uAllocObject(sizeof(::app::Fuse::Style), ::app::Fuse::Style__typeof());
    inst->_ObjInit();
    return inst;
}

void Style__add_TemplatesChanged(Style* __this, ::uDelegate* value)
{
    __this->TemplatesChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TemplatesChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void Style__remove_TemplatesChanged(Style* __this, ::uDelegate* value)
{
    __this->TemplatesChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->TemplatesChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

}}
