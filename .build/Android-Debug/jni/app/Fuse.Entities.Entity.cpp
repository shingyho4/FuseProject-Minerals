// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawArgs.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.DrawHandler.h>
#include <app/Fuse.Entities.Component.h>
#include <app/Fuse.Entities.Entity.h>
#include <app/Fuse.Entities.Frustum.h>
#include <app/Fuse.Entities.MeshRenderer.h>
#include <app/Fuse.Entities.Transform3D.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.HitTestHandler.h>
#include <app/Fuse.IWindow.h>
#include <app/Fuse.Transform.h>
#include <app/Uno.Action__Fuse_Entities_Component.h>
#include <app/Uno.Action__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.ICollection__Fuse_Entities_Component.h>
#include <app/Uno.Collections.ICollection__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Entities_Component.h>
#include <app/Uno.Collections.IList__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Collections.ObservableList__Fuse_Entities_Component.h>
#include <app/Uno.Collections.ObservableList__Fuse_Entities_Entity.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Object.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Entities {

Entity__uType* Entity__typeof()
{
    static Entity__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Entity__uType*)::uAllocClassType(sizeof(Entity__uType), "Fuse.Entities.Entity", ::app::Fuse::Node__typeof(), 3, 5);
        type->__fp_get_SubNodeCount = (int(*)(::app::Fuse::Node*))Entity__get_SubNodeCount;
        type->__fp_Draw = (void(*)(::app::Fuse::Node*, ::app::Fuse::DrawContext*))Entity__Draw;
        type->__fp_OnHitTest = (void(*)(::app::Fuse::Node*, ::app::Fuse::HitTestContext*))Entity__OnHitTest;
        type->__fp_GetSubNode = (::app::Fuse::Node*(*)(::app::Fuse::Node*, int))Entity__GetSubNode;

        type->__interface_2.__fp_get_ViewTransform = (::app::Uno::Float4x4(*)(void*))Entity__Fuse_ICamera_get_ViewTransform;
        type->__interface_2.__fp_get_ProjectionTransform = (::app::Uno::Float4x4(*)(void*))Entity__Fuse_ICamera_get_ProjectionTransform;
        type->__interface_2.__fp_get_ViewProjectionTransform = (::app::Uno::Float4x4(*)(void*))Entity__Fuse_ICamera_get_ViewProjectionTransform;
        type->__interface_2.__fp_get_WorldPosition = (::app::Uno::Float3(*)(void*))Entity__Fuse_ICamera_get_WorldPosition;
        type->__interface_0.__fp_WindowToLocal = (::app::Uno::Float2(*)(void*, ::app::Uno::Float2))::app::Fuse::Node__WindowToLocal;
        type->__interface_0.__fp_get_IsRooted = (bool(*)(void*))::app::Fuse::Node__get_IsRooted;
        type->__interface_0.__fp_get_Window = (::uObject*(*)(void*))::app::Fuse::Node__get_Window;
        type->__interface_1.__fp_ApplyStyle = (void(*)(void*, ::uObject*))::app::Fuse::Node__ApplyStyle_1;
        type->__interface_1.__fp_GetResource = (::uObject*(*)(void*, ::uString*, ::uDelegate*))::app::Fuse::Node__GetResource;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::ICamera__typeof();

        type->InterfaceOffsets[0] = offsetof(Entity__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Entity__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Entity__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(Entity, _children);
        type->StrongRefOffsets[1] = offsetof(Entity, _components);
        type->StrongRefOffsets[2] = offsetof(Entity, ComponentDraw);
        type->StrongRefOffsets[3] = offsetof(Entity, ComponentHitTest);
        type->StrongRefOffsets[4] = offsetof(Entity, _MeshRenderer);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_children";
        type->StrongRefNames[1] = "_components";
        type->StrongRefNames[2] = "ComponentDraw";
        type->StrongRefNames[3] = "ComponentHitTest";
        type->StrongRefNames[4] = "_MeshRenderer";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float4x4 Entity__Fuse_ICamera_get_ViewTransform(Entity* __this)
{
    __this->EnsureFrustum();
    return ::uPtr< ::app::Fuse::Entities::Frustum*>(__this->Frustum())->GetView(__this->Aspect());
}

::app::Uno::Float4x4 Entity__Fuse_ICamera_get_ProjectionTransform(Entity* __this)
{
    __this->EnsureFrustum();
    return ::uPtr< ::app::Fuse::Entities::Frustum*>(__this->Frustum())->GetProjection(__this->Aspect());
}

::app::Uno::Float4x4 Entity__Fuse_ICamera_get_ViewProjectionTransform(Entity* __this)
{
    __this->EnsureFrustum();
    return ::uPtr< ::app::Fuse::Entities::Frustum*>(__this->Frustum())->GetViewProjection(__this->Aspect());
}

::app::Uno::Float3 Entity__Fuse_ICamera_get_WorldPosition(Entity* __this)
{
    return __this->WorldPosition();
}

float Entity__get_Aspect(Entity* __this)
{
    __this->EnsureFrustum();

    if (::uPtr< ::app::Fuse::Entities::Frustum*>(__this->Frustum())->HasExplicitAspect())
    {
        return ::uPtr< ::app::Fuse::Entities::Frustum*>(__this->Frustum())->ExplicitAspect();
    }

    ::uObject* w = __this->Window();
    return (w == NULL) ? 1.0f : ::app::Fuse::IWindow::Size(::uPtr< ::uObject*>(w)).Ratio();
}

::uObject* Entity__get_Children(Entity* __this)
{
    if (__this->_children == NULL)
    {
        __this->_children = ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Entities_Entity__typeof(), (const void*)::app::Fuse::Entities::Entity__OnChildAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Entities_Entity__typeof(), (const void*)::app::Fuse::Entities::Entity__OnChildRemoved, __this));
    }

    return (::uObject*)__this->_children;
}

bool Entity__get_HasChildren(Entity* __this)
{
    return (__this->_children != NULL) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity*>(__this->_children)->Count() > 0);
}

::uObject* Entity__get_Components(Entity* __this)
{
    if (__this->_components == NULL)
    {
        __this->_components = ::app::Uno::Collections::ObservableList__Fuse_Entities_Component__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Entities_Component__typeof(), (const void*)::app::Fuse::Entities::Entity__OnComponentAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Entities_Component__typeof(), (const void*)::app::Fuse::Entities::Entity__OnComponentRemoved, __this));
    }

    return (::uObject*)__this->_components;
}

Entity* Entity__get_ParentEntity(Entity* __this)
{
    return ::uAs< Entity*>(__this->Parent(), Entity__typeof());
}

::app::Uno::Float3 Entity__get_WorldPosition(Entity* __this)
{
    ::app::Uno::Float3 scale = ::app::Uno::Float3();
    ::app::Uno::Float3 translation = ::app::Uno::Float3();
    ::app::Uno::Float4 rotation = ::app::Uno::Float4();
    ::app::Uno::Matrix__Decompose(NULL, __this->WorldTransform(), &scale, &rotation, &translation);
    return translation;
}

void Entity__set_WorldPosition(Entity* __this, ::app::Uno::Float3 value)
{
    ::app::Uno::Float4x4 localToAbs = __this->WorldTransform();
    ::app::Uno::Float4x4 absToLocal = ::app::Uno::Matrix__Invert(NULL, localToAbs);
    ::app::Uno::Float4x4 localToParent = __this->LocalTransform();
    ::app::Uno::Float4x4 absToParent = ::app::Uno::Matrix__Mul_11(NULL, absToLocal, localToParent);
    ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->Transform())->Position(::app::Uno::Vector__TransformCoordinate(NULL, value, absToParent));
}

::app::Fuse::Entities::Frustum* Entity__get_Frustum(Entity* __this)
{
    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Component*>(__this->_components)->Count(); i++)
    {
        if (::uIs(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Component*>(__this->_components)->Item(i), ::app::Fuse::Entities::Frustum__typeof()))
        {
            return ::uCast< ::app::Fuse::Entities::Frustum*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Component*>(__this->_components)->Item(i), ::app::Fuse::Entities::Frustum__typeof());
        }
    }

    return NULL;
}

::app::Fuse::Entities::Transform3D* Entity__get_Transform(Entity* __this)
{
    for (int i = ::app::Uno::Collections::ICollection__Fuse_Transform::Count(::uPtr< ::uObject*>(__this->Transforms())); (i--) > 0; )
    {
        if (::uIs(::app::Uno::Collections::IList__Fuse_Transform::Item(::uPtr< ::uObject*>(__this->Transforms()), i), ::app::Fuse::Entities::Transform3D__typeof()))
        {
            return ::uCast< ::app::Fuse::Entities::Transform3D*>(::app::Uno::Collections::IList__Fuse_Transform::Item(::uPtr< ::uObject*>(__this->Transforms()), i), ::app::Fuse::Entities::Transform3D__typeof());
        }
    }

    return NULL;
}

::app::Fuse::Entities::MeshRenderer* Entity__get_MeshRenderer(Entity* __this)
{
    return __this->_MeshRenderer;
}

void Entity__set_MeshRenderer(Entity* __this, ::app::Fuse::Entities::MeshRenderer* value)
{
    __this->_MeshRenderer = value;
}

int Entity__get_SubNodeCount(Entity* __this)
{
    return ::app::Uno::Collections::ICollection__Fuse_Entities_Entity::Count(::uPtr< ::uObject*>(__this->Children()));
}

void Entity__EnsureFrustum(Entity* __this)
{
    if (__this->Frustum() == NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Entities_Component::Add(::uPtr< ::uObject*>(__this->Components()), (::app::Fuse::Entities::Component*)::app::Fuse::Entities::Frustum__New_2(NULL));
    }
}

void Entity__OnChildAdded(Entity* __this, Entity* c)
{
    ::uPtr< ::app::Fuse::Entities::Entity*>(c)->OnAdded((::uObject*)__this);
}

void Entity__OnChildRemoved(Entity* __this, Entity* c)
{
    ::uPtr< ::app::Fuse::Entities::Entity*>(c)->OnRemoved((::uObject*)__this);
}

void Entity__OnComponentAdded(Entity* __this, ::app::Fuse::Entities::Component* c)
{
    ::uPtr< ::app::Fuse::Entities::Component*>(c)->Added(__this);
}

void Entity__OnComponentRemoved(Entity* __this, ::app::Fuse::Entities::Component* c)
{
    ::uPtr< ::app::Fuse::Entities::Component*>(c)->Removed(__this);
}

void Entity__Draw(Entity* __this, ::app::Fuse::DrawContext* dc)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ComponentDraw, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ComponentDraw)->InvokeVoid< ::uObject*, ::app::Fuse::DrawArgs*>((::uObject*)__this, ::app::Fuse::DrawArgs__New_2(NULL, dc));
    }

    if (__this->HasChildren())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity*>(__this->_children)->Count(); i++)
        {
            ::uPtr< ::app::Fuse::Entities::Entity*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity*>(__this->_children)->Item(i))->Draw(dc);
        }
    }
}

void Entity__OnHitTest(Entity* __this, ::app::Fuse::HitTestContext* htc)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ComponentHitTest, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ComponentHitTest)->InvokeVoid< ::uObject*, ::app::Fuse::HitTestContext*>((::uObject*)__this, htc);
    }

    if (__this->HasChildren())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity*>(__this->_children)->Count(); i++)
        {
            ::uPtr< ::app::Fuse::Entities::Entity*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity*>(__this->_children)->Item(i))->HitTest(htc);
        }
    }
}

::app::Fuse::Node* Entity__GetSubNode(Entity* __this, int index)
{
    return (::app::Fuse::Node*)::app::Uno::Collections::IList__Fuse_Entities_Entity::Item(::uPtr< ::uObject*>(__this->Children()), index);
}

void Entity__add_ComponentDraw(Entity* __this, ::uDelegate* value)
{
    __this->ComponentDraw = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ComponentDraw, (::uDelegate*)value), ::app::Fuse::DrawHandler__typeof());
}

void Entity__remove_ComponentDraw(Entity* __this, ::uDelegate* value)
{
    __this->ComponentDraw = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ComponentDraw, (::uDelegate*)value), ::app::Fuse::DrawHandler__typeof());
}

void Entity__add_ComponentHitTest(Entity* __this, ::uDelegate* value)
{
    __this->ComponentHitTest = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ComponentHitTest, (::uDelegate*)value), ::app::Fuse::HitTestHandler__typeof());
}

void Entity__remove_ComponentHitTest(Entity* __this, ::uDelegate* value)
{
    __this->ComponentHitTest = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ComponentHitTest, (::uDelegate*)value), ::app::Fuse::HitTestHandler__typeof());
}

}}}
