// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Behavior.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.HitTestCallback.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.IWindow.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Node_HitTestRecord.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.Resources.ResourceRegistry.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Behavior.h>
#include <app/Uno.Action__Fuse_Style.h>
#include <app/Uno.Action__Fuse_Transform.h>
#include <app/Uno.Action__object__object.h>
#include <app/Uno.Action__Uno_UX_Resource.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Fuse_Style.h>
#include <app/Uno.Collections.ICollection__Uno_UX_Resource.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Style.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Uno_UX_Resource.h>
#include <app/Uno.Collections.List__Uno_EventHandler.h>
#include <app/Uno.Collections.ObservableList__Fuse_Behavior.h>
#include <app/Uno.Collections.ObservableList__Fuse_Style.h>
#include <app/Uno.Collections.ObservableList__Fuse_Transform.h>
#include <app/Uno.Collections.ObservableList__Uno_UX_Resource.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Predicate__object.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Resource.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {

::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___isEnabledChangedHandle;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___handleHandle;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___resourcesHandle;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___styleHandle;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___addedHandle;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___removedHandle;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___rootedHandle;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___unrootedHandle;

Node__uType* Node__typeof()
{
    static Node__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Node__uType*)::uAllocClassType(sizeof(Node__uType), "Fuse.Node", ::uObject__typeof(), 2, 9);
        type->__fp_get_IsVisible = Node__get_IsVisible;
        type->__fp_get_SubNodeCount = Node__get_SubNodeCount;
        type->__fp_get_DrawNextFrame = Node__get_DrawNextFrame;
        type->__fp_OnIsEnabledChanged = Node__OnIsEnabledChanged;
        type->__fp_OnHitTest = Node__OnHitTest;
        type->__fp_OnResetStyle = Node__OnResetStyle;
        type->__fp_OnApplyStyle = Node__OnApplyStyle;
        type->__fp_PrependImplicitTransform = Node__PrependImplicitTransform;
        type->__fp_PrependTransformOrigin = Node__PrependTransformOrigin;
        type->__fp_PrependInverseTransformOrigin = Node__PrependInverseTransformOrigin;
        type->__fp_InvalidateLocalTransform = Node__InvalidateLocalTransform;
        type->__fp_OnWorldTransformValidated = Node__OnWorldTransformValidated;
        type->__fp_OnAdded = Node__OnAdded;
        type->__fp_OnRemoved = Node__OnRemoved;
        type->__fp_OnRooted = Node__OnRooted;
        type->__fp_OnUnrooted = Node__OnUnrooted;
        type->__fp_SoftDispose = Node__SoftDispose;
        type->__fp_GetSubNode = Node__GetSubNode;
        type->__fp_ParentToLocal = Node__ParentToLocal;
        type->__fp_Draw = Node__Draw;

        type->__interface_0.__fp_WindowToLocal = (::app::Uno::Float2(*)(void*, ::app::Uno::Float2))Node__WindowToLocal;
        type->__interface_0.__fp_get_IsRooted = (bool(*)(void*))Node__get_IsRooted;
        type->__interface_0.__fp_get_Window = (::uObject*(*)(void*))Node__get_Window;
        type->__interface_1.__fp_ApplyStyle = (void(*)(void*, ::uObject*))Node__ApplyStyle_1;
        type->__interface_1.__fp_GetResource = (::uObject*(*)(void*, ::uString*, ::uDelegate*))Node__GetResource;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();

        type->InterfaceOffsets[0] = offsetof(Node__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Node__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(Node, _behaviors);
        type->StrongRefOffsets[1] = offsetof(Node, _transforms);
        type->StrongRefOffsets[2] = offsetof(Node, _worldTransformInverse);
        type->StrongRefOffsets[3] = offsetof(Node, _worldTransform);
        type->StrongRefOffsets[4] = offsetof(Node, _localTransform);
        type->StrongRefOffsets[5] = offsetof(Node, _localTransformInverse);
        type->StrongRefOffsets[6] = offsetof(Node, _properties);
        type->StrongRefOffsets[7] = offsetof(Node, _host);
        type->StrongRefOffsets[8] = offsetof(Node, _updateListeners);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_behaviors";
        type->StrongRefNames[1] = "_transforms";
        type->StrongRefNames[2] = "_worldTransformInverse";
        type->StrongRefNames[3] = "_worldTransform";
        type->StrongRefNames[4] = "_localTransform";
        type->StrongRefNames[5] = "_localTransformInverse";
        type->StrongRefNames[6] = "_properties";
        type->StrongRefNames[7] = "_host";
        type->StrongRefNames[8] = "_updateListeners";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* Node__get_Behaviors(Node* __this)
{
    if (__this->_behaviors == NULL)
    {
        __this->_behaviors = ::app::Uno::Collections::ObservableList__Fuse_Behavior__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Behavior__typeof(), (const void*)::app::Fuse::Node__OnBehaviorAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Behavior__typeof(), (const void*)::app::Fuse::Node__OnBehaviorRemoved, __this));
    }

    return (::uObject*)__this->_behaviors;
}

bool Node__get_IsEnabled(Node* __this)
{
    return !__this->HasBit(5);
}

void Node__set_IsEnabled(Node* __this, bool value)
{
    if (value)
    {
        __this->SetBit(4);
        __this->ClearBit(3);
    }
    else
    {
        __this->ClearBit(4);
        __this->SetBit(3);
    }

    __this->UpdateDisabled();
}

bool Node__get_IsVisible(Node* __this)
{
    return true;
}

::uObject* Node__get_Resources(Node* __this)
{
    if (!__this->HasResources())
    {
        __this->SetBit(1);
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Set(Node___resourcesHandle, (::uObject*)::app::Uno::Collections::ObservableList__Uno_UX_Resource__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_Resource__typeof(), (const void*)::app::Fuse::Node__OnResourceChanged, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_Resource__typeof(), (const void*)::app::Fuse::Node__OnResourceChanged, __this)));
    }

    return (::uObject*)::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Get(Node___resourcesHandle);
}

bool Node__get_HasResources(Node* __this)
{
    return __this->HasBit(1);
}

::uObject* Node__get_Styles(Node* __this)
{
    ::uObject* listobj;

    if (!::uPtr< ::app::Fuse::Properties*>(__this->Properties())->TryGet(Node___styleHandle, &listobj))
    {
        listobj = (::uObject*)::app::Uno::Collections::ObservableList__Fuse_Style__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Style__typeof(), (const void*)::app::Fuse::Node__StyleAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Style__typeof(), (const void*)::app::Fuse::Node__StyleRemoved, __this));
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Set(Node___styleHandle, listobj);
    }

    return (::uObject*)listobj;
}

::uObject* Node__get_Window(Node* __this)
{
    return (__this->Parent() != NULL) ? ::app::Fuse::INodeParent::Window(::uPtr< ::uObject*>(__this->Parent())) : NULL;
}

::uObject* Node__get_Transforms(Node* __this)
{
    if (__this->_transforms == NULL)
    {
        __this->_transforms = ::app::Uno::Collections::ObservableList__Fuse_Transform__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Transform__typeof(), (const void*)::app::Fuse::Node__OnTransformAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Transform__typeof(), (const void*)::app::Fuse::Node__OnTransformRemoved, __this));
    }

    return (::uObject*)__this->_transforms;
}

bool Node__get_HasExplicitTransforms(Node* __this)
{
    return (__this->_transforms != NULL) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Transform*>(__this->_transforms)->Count() > 0);
}

::app::Uno::Float4x4 Node__get_WorldTransformInverse(Node* __this)
{
    if ((__this->_worldTransformInverseCacheVersion != __this->_worldTransformVersion) || !__this->IsWorldMatrixValid())
    {
        __this->_worldTransformInverse = ::app::Fuse::FastMatrix__FromFloat4x4(NULL, __this->WorldTransform());
        ::uPtr< ::app::Fuse::FastMatrix*>(__this->_worldTransformInverse)->Invert();
        __this->_worldTransformInverseCacheVersion = __this->_worldTransformVersion;
    }

    return ::uPtr< ::app::Fuse::FastMatrix*>(__this->_worldTransformInverse)->Matrix();
}

::app::Uno::Float4x4 Node__get_WorldTransform(Node* __this)
{
    return ::uPtr< ::app::Fuse::FastMatrix*>(__this->WorldTransformInternal())->Matrix();
}

::app::Fuse::FastMatrix* Node__get_WorldTransformInternal(Node* __this)
{
    if (!__this->IsWorldMatrixValid())
    {
        __this->_worldTransform = __this->CalcWorldTransform();
        __this->_worldTransformCacheVersion = ++__this->_worldTransformVersion;

        if (__this->ParentNode() != NULL)
        {
            __this->_worldTransformParentCacheVersion = ::uPtr< ::app::Fuse::Node*>(__this->ParentNode())->_worldTransformVersion;
        }

        __this->OnWorldTransformValidated();
    }

    return __this->_worldTransform;
}

::app::Uno::Float4x4 Node__get_LocalTransform(Node* __this)
{
    return ::uPtr< ::app::Fuse::FastMatrix*>(__this->LocalTransformInternal())->Matrix();
}

::app::Fuse::FastMatrix* Node__get_LocalTransformInternal(Node* __this)
{
    if (__this->_localTransform == NULL)
    {
        __this->_localTransform = ::app::Fuse::FastMatrix__Identity(NULL);
        __this->PrependLocalTransform(__this->_localTransform);
    }

    return __this->_localTransform;
}

::app::Uno::Float4x4 Node__get_LocalTransformInverse(Node* __this)
{
    if (__this->_localTransformInverse == NULL)
    {
        __this->_localTransformInverse = ::app::Fuse::FastMatrix__FromFloat4x4(NULL, __this->LocalTransform());
        ::uPtr< ::app::Fuse::FastMatrix*>(__this->_localTransformInverse)->Invert();
    }

    return ::uPtr< ::app::Fuse::FastMatrix*>(__this->_localTransformInverse)->Matrix();
}

::app::Fuse::Properties* Node__get_Properties(Node* __this)
{
    if (__this->_properties == NULL)
    {
        __this->_properties = ::app::Fuse::Properties__New_1(NULL);
    }

    return __this->_properties;
}

::uObject* Node__get_Parent(Node* __this)
{
    return __this->_host;
}

Node* Node__get_ParentNode(Node* __this)
{
    return ::uAs< Node*>(__this->_host, Node__typeof());
}

bool Node__get_IsRooted(Node* __this)
{
    return (__this->Parent() != NULL) && ::app::Fuse::INodeParent::IsRooted(::uPtr< ::uObject*>(__this->Parent()));
}

int Node__get_SubNodeCount(Node* __this)
{
    return 0;
}

bool Node__get_DrawNextFrame(Node* __this)
{
    return true;
}

void Node__AddStyleBehavior(Node* __this, ::app::Fuse::Behavior* b)
{
    ::uPtr< ::app::Fuse::Behavior*>(b)->AddedByStyle = true;
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(__this->Behaviors()), b);
}

void Node__OnBehaviorAdded(Node* __this, ::app::Fuse::Behavior* b)
{
    if (__this->IsRooted())
    {
        ::uPtr< ::app::Fuse::Behavior*>(b)->Rooted(__this);
    }
}

void Node__OnBehaviorRemoved(Node* __this, ::app::Fuse::Behavior* b)
{
    if (__this->IsRooted())
    {
        ::uPtr< ::app::Fuse::Behavior*>(b)->Unrooted(__this);
        b->AddedByStyle = false;
    }
}

void Node__RootBehaviors(Node* __this)
{
    if (__this->_behaviors != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Behavior*>(__this->_behaviors)->Count(); i++)
        {
            ::uPtr< ::app::Fuse::Behavior*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Behavior*>(__this->_behaviors)->Item(i))->Rooted(__this);
        }
    }
}

void Node__UnrootBehaviors(Node* __this)
{
    if (__this->_behaviors != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Behavior*>(__this->_behaviors)->Count(); i++)
        {
            ::uPtr< ::app::Fuse::Behavior*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Behavior*>(__this->_behaviors)->Item(i))->Unrooted(__this);
        }
    }
}

bool Node__HasBit(Node* __this, int nb)
{
    return (__this->_nodebits & (1 << nb)) != 0;
}

void Node__SetBit(Node* __this, int nb)
{
    __this->_nodebits = __this->_nodebits | (1 << nb);
}

void Node__ClearBit(Node* __this, int nb)
{
    __this->_nodebits = __this->_nodebits & ~(1 << nb);
}

void Node__RaiseEvent(Node* __this, ::app::Fuse::PropertyHandle* ph, int ne)
{
    if (__this->HasBit(ne))
    {
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->ForeachInList(ph, ::uNewDelegateNonVirt(::app::Uno::Action__object__object__typeof(), (const void*)::app::Fuse::Node__InvokeEventHandler, __this), (::uObject*)::app::Uno::EventArgs__Empty);
    }
}

void Node__InvokeEventHandler(Node* __this, ::uObject* obj, ::uObject* args)
{
    ::uPtr< ::uDelegate*>(::uCast< ::uDelegate*>(obj, ::app::Uno::EventHandler__typeof()))->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::uCast< ::app::Uno::EventArgs*>(args, ::app::Uno::EventArgs__typeof()));
}

void Node__AddEventHandler(Node* __this, ::app::Fuse::PropertyHandle* ph, int ne, ::uObject* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->AddToList(ph, handler);
    __this->SetBit(ne);
}

void Node__RemoveEventHandler(Node* __this, ::app::Fuse::PropertyHandle* ph, int ne, ::uObject* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->RemoveFromList(ph, handler);
    ::uObject* foo;

    if (!::uPtr< ::app::Fuse::Properties*>(__this->Properties())->TryGet(ph, &foo))
    {
        __this->ClearBit(ne);
    }
}

void Node__UpdateDisabled(Node* __this)
{
    __this->ChangeDisabled(__this->CalcIsDisabled());
}

bool Node__CalcIsDisabled(Node* __this)
{
    if (__this->HasBit(4))
    {
        return false;
    }

    if (__this->HasBit(3))
    {
        return true;
    }

    if (__this->ParentNode() != NULL)
    {
        return ::uPtr< ::app::Fuse::Node*>(__this->ParentNode())->CalcIsDisabled();
    }

    return false;
}

void Node__ChangeDisabled(Node* __this, bool set)
{
    if (__this->HasBit(4))
    {
        set = false;
    }

    if (__this->HasBit(3))
    {
        set = true;
    }

    if (set == __this->HasBit(5))
    {
        return;
    }

    if (set)
    {
        __this->SetBit(5);
    }
    else
    {
        __this->ClearBit(5);
    }

    for (int i = 0; i < __this->SubNodeCount(); ++i)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->GetSubNode(i))->ChangeDisabled(set);
    }

    __this->OnIsEnabledChanged();
}

void Node__OnIsEnabledChanged(Node* __this)
{
    __this->RaiseEvent(Node___isEnabledChangedHandle, 8);
}

void Node__HitTest(Node* __this, ::app::Fuse::HitTestContext* htc)
{
    if (!__this->IsVisible())
    {
        return;
    }

    ::app::Uno::Float2 old = ::uPtr< ::app::Fuse::HitTestContext*>(htc)->PushLocalPoint(__this->ParentToLocal(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint()));
    __this->OnHitTest(htc);
    htc->PopLocalPoint(old);
}

void Node__OnHitTest(Node* __this, ::app::Fuse::HitTestContext* htc)
{
}

Node* Node__GetHitWindowPoint(Node* __this, ::app::Uno::Float2 windowPoint)
{
    ::app::Fuse::Node_HitTestRecord* htr = ::app::Fuse::Node_HitTestRecord__New_1(NULL);
    ::app::Fuse::HitTestContext* htc = ::app::Fuse::HitTestContext__New_1(NULL, windowPoint, ::uNewDelegateNonVirt(::app::Fuse::HitTestCallback__typeof(), (const void*)::app::Fuse::Node_HitTestRecord__HitTestCallback, htr));

    if (__this->Parent() != NULL)
    {
        ::uPtr< ::app::Fuse::HitTestContext*>(htc)->PushLocalPoint(::app::Fuse::INodeParent::WindowToLocal(::uPtr< ::uObject*>(__this->Parent()), windowPoint));
    }

    __this->HitTest(htc);
    return ::uPtr< ::app::Fuse::Node_HitTestRecord*>(htr)->Node;
}

::uObject* Node__GetResource(Node* __this, ::uString* key, ::uDelegate* acceptor)
{
    if (__this->HasResources())
    {
        for (int i = 0; i < ::app::Uno::Collections::ICollection__Uno_UX_Resource::Count(::uPtr< ::uObject*>(__this->Resources())); i++)
        {
            ::app::Uno::UX::Resource* r = ::app::Uno::Collections::IList__Uno_UX_Resource::Item(::uPtr< ::uObject*>(__this->Resources()), i);

            if (::app::Uno::String__op_Equality(NULL, ::uPtr< ::app::Uno::UX::Resource*>(r)->Key(), key) && (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)acceptor, NULL) || ::uPtr< ::uDelegate*>(acceptor)->Invoke< bool, ::uObject*>(::uPtr< ::app::Uno::UX::Resource*>(r)->Value())))
            {
                return ::uPtr< ::app::Uno::UX::Resource*>(r)->Value();
            }
        }
    }

    if (__this->HasBit(7))
    {
        for (int si = 0; si < ::app::Uno::Collections::ICollection__Fuse_Style::Count(::uPtr< ::uObject*>(__this->Styles())); si++)
        {
            ::app::Fuse::Style* s = ::app::Uno::Collections::IList__Fuse_Style::Item(::uPtr< ::uObject*>(__this->Styles()), si);

            for (int i = 0; i < ::app::Uno::Collections::ICollection__Uno_UX_Resource::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Style*>(s)->Resources())); i++)
            {
                ::app::Uno::UX::Resource* r = ::app::Uno::Collections::IList__Uno_UX_Resource::Item(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Style*>(s)->Resources()), i);

                if (::app::Uno::String__op_Equality(NULL, ::uPtr< ::app::Uno::UX::Resource*>(r)->Key(), key) && (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)acceptor, NULL) || ::uPtr< ::uDelegate*>(acceptor)->Invoke< bool, ::uObject*>(::uPtr< ::app::Uno::UX::Resource*>(r)->Value())))
                {
                    return ::uPtr< ::app::Uno::UX::Resource*>(r)->Value();
                }
            }
        }
    }

    if (__this->Parent() != NULL)
    {
        return ::app::Fuse::IResourceParent::GetResource(::uPtr< ::uObject*>(__this->Parent()), key, acceptor);
    }

    return NULL;
}

void Node__OnResourceChanged(Node* __this, ::app::Uno::UX::Resource* res)
{
    ::app::Fuse::Resources::ResourceRegistry__NotifyResourceChanged(NULL, ::uPtr< ::app::Uno::UX::Resource*>(res)->Key());
}

void Node__StyleAdded(Node* __this, ::app::Fuse::Style* s)
{
    ::uPtr< ::app::Fuse::Style*>(s)->add_TemplatesChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Node__ResetStyle, __this));
    __this->SetBit(7);
    __this->ResetStyle();
}

void Node__StyleRemoved(Node* __this, ::app::Fuse::Style* s)
{
    ::uPtr< ::app::Fuse::Style*>(s)->remove_TemplatesChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Node__ResetStyle, __this));

    if (::app::Uno::Collections::ICollection__Fuse_Style::Count(::uPtr< ::uObject*>(__this->Styles())) == 0)
    {
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Clear(Node___styleHandle);
        __this->ClearBit(7);
    }

    __this->ResetStyle();
}

void Node__ApplyStyle(Node* __this)
{
    __this->ApplyStyle_1((::uObject*)__this);
}

void Node__ResetStyle(Node* __this)
{
    if (__this->HasBit(0))
    {
        __this->OnResetStyle();
        __this->ApplyStyle();
    }

    for (int i = 0; i < __this->SubNodeCount(); i++)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->GetSubNode(i))->ResetStyle();
    }
}

void Node__OnResetStyle(Node* __this)
{
    if (__this->_behaviors != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Behavior*>(__this->_behaviors)->Count(); i++)
        {
            if (::uPtr< ::app::Fuse::Behavior*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Behavior*>(__this->_behaviors)->Item(i))->AddedByStyle)
            {
                ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Behavior*>(__this->_behaviors)->RemoveAt(i--);
            }
        }
    }

    if (__this->_transforms != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Transform*>(__this->_transforms)->Count(); i++)
        {
            if (::uPtr< ::app::Fuse::Transform*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Transform*>(__this->_transforms)->Item(i))->AddedByStyle)
            {
                ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Transform*>(__this->_transforms)->RemoveAt(i--);
            }
        }
    }
}

void Node__ApplyStyle_1(Node* __this, ::uObject* target)
{
    __this->OnApplyStyle(target);
}

void Node__OnApplyStyle(Node* __this, ::uObject* target)
{
    if (__this->HasBit(7))
    {
        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Style::Count(::uPtr< ::uObject*>(__this->Styles())); i++)
        {
            if (!::uPtr< ::app::Fuse::Style*>(::app::Uno::Collections::IList__Fuse_Style::Item(::uPtr< ::uObject*>(__this->Styles()), i))->Apply(target))
            {
                return;
            }
        }
    }

    if (__this->Parent() != NULL)
    {
        ::app::Fuse::IResourceParent::ApplyStyle(::uPtr< ::uObject*>(__this->Parent()), target);
    }
}

void Node__PrependImplicitTransform(Node* __this, ::app::Fuse::FastMatrix* m)
{
}

void Node__PrependTransformOrigin(Node* __this, ::app::Fuse::FastMatrix* m)
{
}

void Node__PrependInverseTransformOrigin(Node* __this, ::app::Fuse::FastMatrix* m)
{
}

void Node__OnTransformAdded(Node* __this, ::app::Fuse::Transform* t)
{
    ::uPtr< ::app::Fuse::Transform*>(t)->Added(__this);
    t->add_MatrixChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Transform__typeof(), (const void*)::app::Fuse::Node__OnMatrixChanged, __this));
    __this->OnMatrixChanged(t);
}

void Node__OnTransformRemoved(Node* __this, ::app::Fuse::Transform* t)
{
    ::uPtr< ::app::Fuse::Transform*>(t)->Removed(__this);
    t->remove_MatrixChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Transform__typeof(), (const void*)::app::Fuse::Node__OnMatrixChanged, __this));
    __this->OnMatrixChanged(t);
    t->AddedByStyle = false;
}

void Node__OnMatrixChanged(Node* __this, ::app::Fuse::Transform* t)
{
    __this->InvalidateLocalTransform();
}

void Node__InvalidateLocalTransform(Node* __this)
{
    __this->_localTransform = NULL;
    __this->_localTransformInverse = NULL;
    __this->_worldTransformVersion++;
}

bool Node__IsWorldMatrixValid(Node* __this)
{
    if ((__this->_worldTransformCacheVersion != __this->_worldTransformVersion) || (__this->_worldTransform == NULL))
    {
        return false;
    }

    if (__this->ParentNode() != NULL)
    {
        return (__this->_worldTransformParentCacheVersion == ::uPtr< ::app::Fuse::Node*>(__this->ParentNode())->_worldTransformVersion) && ::uPtr< ::app::Fuse::Node*>(__this->ParentNode())->IsWorldMatrixValid();
    }

    return true;
}

void Node__OnWorldTransformValidated(Node* __this)
{
}

::app::Fuse::FastMatrix* Node__CalcWorldTransform(Node* __this)
{
    ::app::Fuse::FastMatrix* m = __this->LocalTransformInternal();

    if (__this->ParentNode() != NULL)
    {
        m = ::uPtr< ::app::Fuse::FastMatrix*>(m)->Mul(::uPtr< ::app::Fuse::Node*>(__this->ParentNode())->WorldTransformInternal());
    }

    return m;
}

::app::Uno::Float4x4 Node__GetTransformTo(Node* __this, Node* ancestor)
{
    ::app::Fuse::FastMatrix* m = __this->LocalTransformInternal();
    Node* n = __this->ParentNode();

    while ((n != NULL) && (n != ancestor))
    {
        m = ::uPtr< ::app::Fuse::FastMatrix*>(m)->Mul(::uPtr< ::app::Fuse::Node*>(n)->LocalTransformInternal());
        n = ::uPtr< ::app::Fuse::Node*>(n)->ParentNode();
    }

    return ::uPtr< ::app::Fuse::FastMatrix*>(m)->Matrix();
}

void Node__PrependLocalTransform(Node* __this, ::app::Fuse::FastMatrix* m)
{
    __this->PrependImplicitTransform(m);
    __this->PrependExplicitTransforms(m);
}

void Node__PrependExplicitTransforms(Node* __this, ::app::Fuse::FastMatrix* m)
{
    if (__this->HasExplicitTransforms())
    {
        __this->PrependTransformOrigin(m);

        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Transform*>(__this->_transforms)->Count(); i++)
        {
            ::uPtr< ::app::Fuse::Transform*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Transform*>(__this->_transforms)->Item(i))->PrependTo(m);
        }

        __this->PrependInverseTransformOrigin(m);
    }
}

::app::Uno::Float2 Node__WindowToLocal(Node* __this, ::app::Uno::Float2 windowCoord)
{
    ::app::Uno::Float2 parentCoord = (__this->Parent() == NULL) ? windowCoord : ::app::Fuse::INodeParent::WindowToLocal(::uPtr< ::uObject*>(__this->Parent()), windowCoord);
    return ::app::Uno::Vector__TransformCoordinate_1(NULL, parentCoord, __this->LocalTransformInverse());
}

void Node__OnAdded(Node* __this, ::uObject* host)
{
    if (__this->_host != NULL)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::Object::ToString(__this), ::uGetConstString(" already has a host")), (host != __this->_host) ? ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString(" ("), ::app::Uno::Object::ToString(::uPtr< ::uObject*>(host))), ::uGetConstString(")")) : ::uGetConstString(""))));
    }

    __this->RaiseEvent(Node___addedHandle, 9);
    __this->_host = host;

    if (::app::Fuse::INodeParent::IsRooted(::uPtr< ::uObject*>(host)))
    {
        __this->MarkRooted();
    }
}

void Node__OnRemoved(Node* __this, ::uObject* host)
{
    if (__this->_host == host)
    {
        __this->RaiseEvent(Node___removedHandle, 10);
        __this->_host = NULL;

        if (::app::Fuse::INodeParent::IsRooted(::uPtr< ::uObject*>(host)))
        {
            __this->MarkUnrooted();
        }
    }
    else
    {
        U_THROW(::app::Uno::Exception__New_2(NULL));
    }
}

void Node__DoUpdate(Node* __this)
{
    if (__this->_updateListeners != NULL)
    {
        ::uArray* u = ::uPtr< ::app::Uno::Collections::List__Uno_EventHandler*>(__this->_updateListeners)->ToArray();

        for (int i = 0; i < ::uPtr< ::uArray*>(u)->Length(); i++)
        {
            ::uPtr< ::uDelegate*>(::uPtr< ::uArray*>(u)->Item< ::uDelegate*>(i))->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
        }
    }
}

void Node__MarkRooted(Node* __this)
{
    if (__this->_localIsRooted)
    {
        return;
    }

    __this->_localIsRooted = true;
    __this->UpdateDisabled();
    __this->RootBehaviors();
    __this->EnsureInitialized();
    __this->RaiseEvent(Node___rootedHandle, 11);

    if (__this->_updateListeners != NULL)
    {
        ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Node__DoUpdate, __this), 0);
    }

    for (int i = 0; i < __this->SubNodeCount(); i++)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->GetSubNode(i))->MarkRooted();
    }

    __this->OnRooted();
}

void Node__OnRooted(Node* __this)
{
}

void Node__MarkUnrooted(Node* __this)
{
    if (!__this->_localIsRooted)
    {
        return;
    }

    __this->_localIsRooted = false;
    __this->RaiseEvent(Node___unrootedHandle, 12);

    if (__this->_updateListeners != NULL)
    {
        ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Node__DoUpdate, __this), 0);
    }

    __this->UnrootBehaviors();
    __this->SoftDispose();

    for (int i = 0; i < __this->SubNodeCount(); i++)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->GetSubNode(i))->MarkUnrooted();
    }

    __this->OnUnrooted();
}

void Node__OnUnrooted(Node* __this)
{
}

void Node__SoftDispose(Node* __this)
{
}

void Node__EnsureInitialized(Node* __this)
{
    if (!__this->HasBit(0))
    {
        __this->OnInitialize();
        __this->ApplyStyle();
        __this->SetBit(0);
    }
    else
    {
        __this->ResetStyle();
    }
}

void Node__OnInitialize(Node* __this)
{
}

Node* Node__GetSubNode(Node* __this, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL));
}

::app::Uno::Float2 Node__ParentToLocal(Node* __this, ::app::Uno::Float2 parentPoint)
{
    return parentPoint;
}

void Node__Draw(Node* __this, ::app::Fuse::DrawContext* dc)
{
}

void Node___TypeInit(::uStatic* __this)
{
    Node___isEnabledChangedHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Node___handleHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Node___resourcesHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Node___styleHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Node___addedHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Node___removedHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Node___rootedHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Node___unrootedHandle = ::app::Fuse::Properties__CreateHandle(NULL);
}

void Node___ObjInit(Node* __this)
{
    __this->_worldTransformInverseCacheVersion = -1;
    __this->_worldTransformCacheVersion = -1;
    __this->_worldTransformParentCacheVersion = -1;
}

void Node__add_Removed(Node* __this, ::uDelegate* value)
{
    __this->AddEventHandler(Node___removedHandle, 10, (::uObject*)value);
}

void Node__remove_Removed(Node* __this, ::uDelegate* value)
{
    __this->RemoveEventHandler(Node___removedHandle, 10, (::uObject*)value);
}

void Node__add_Update(Node* __this, ::uDelegate* value)
{
    if (__this->_updateListeners == NULL)
    {
        __this->_updateListeners = ::app::Uno::Collections::List__Uno_EventHandler__New_1(NULL);

        if (__this->IsRooted())
        {
            ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Node__DoUpdate, __this), 0);
        }
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_EventHandler*>(__this->_updateListeners)->Add(value);
}

void Node__remove_Update(Node* __this, ::uDelegate* value)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_EventHandler*>(__this->_updateListeners)->Remove(value);

    if (::uPtr< ::app::Uno::Collections::List__Uno_EventHandler*>(__this->_updateListeners)->Count() == 0)
    {
        __this->_updateListeners = NULL;

        if (__this->IsRooted())
        {
            ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Node__DoUpdate, __this), 0);
        }
    }
}

void Node__add_IsEnabledChanged(Node* __this, ::uDelegate* value)
{
    __this->AddEventHandler(Node___isEnabledChangedHandle, 8, (::uObject*)value);
}

void Node__remove_IsEnabledChanged(Node* __this, ::uDelegate* value)
{
    __this->RemoveEventHandler(Node___isEnabledChangedHandle, 8, (::uObject*)value);
}

void Node__add_Rooted(Node* __this, ::uDelegate* value)
{
    __this->AddEventHandler(Node___rootedHandle, 11, (::uObject*)value);
}

void Node__remove_Rooted(Node* __this, ::uDelegate* value)
{
    __this->RemoveEventHandler(Node___rootedHandle, 11, (::uObject*)value);
}

}}
