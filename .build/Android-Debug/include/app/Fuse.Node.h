// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NODE_H__
#define __APP_FUSE_NODE_H__

#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Behavior; } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct FastMatrix; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Fuse { struct Properties; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Fuse { struct Style; } }
namespace app { namespace Fuse { struct Transform; } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_EventHandler; } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Behavior; } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Transform; } } }
namespace app { namespace Uno { namespace UX { struct Resource; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {

struct Node;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___isEnabledChangedHandle;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___handleHandle;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___resourcesHandle;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___styleHandle;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___addedHandle;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___removedHandle;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___rootedHandle;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___unrootedHandle;

struct Node__uType : ::uClassType
{
    ::app::Fuse::INodeParent __interface_0;
    ::app::Fuse::IResourceParent __interface_1;
    void(*__fp_OnIsEnabledChanged)(Node*);
    void(*__fp_OnHitTest)(Node*, ::app::Fuse::HitTestContext*);
    void(*__fp_OnResetStyle)(Node*);
    void(*__fp_OnApplyStyle)(Node*, ::uObject*);
    void(*__fp_PrependImplicitTransform)(Node*, ::app::Fuse::FastMatrix*);
    void(*__fp_PrependTransformOrigin)(Node*, ::app::Fuse::FastMatrix*);
    void(*__fp_PrependInverseTransformOrigin)(Node*, ::app::Fuse::FastMatrix*);
    void(*__fp_InvalidateLocalTransform)(Node*);
    void(*__fp_OnWorldTransformValidated)(Node*);
    void(*__fp_OnAdded)(Node*, ::uObject*);
    void(*__fp_OnRemoved)(Node*, ::uObject*);
    void(*__fp_OnRooted)(Node*);
    void(*__fp_OnUnrooted)(Node*);
    void(*__fp_SoftDispose)(Node*);
    Node*(*__fp_GetSubNode)(Node*, int);
    ::app::Uno::Float2(*__fp_ParentToLocal)(Node*, ::app::Uno::Float2);
    void(*__fp_Draw)(Node*, ::app::Fuse::DrawContext*);
    bool(*__fp_get_IsVisible)(Node*);
    int(*__fp_get_SubNodeCount)(Node*);
    bool(*__fp_get_DrawNextFrame)(Node*);
};

Node__uType* Node__typeof();

::uObject* Node__get_Behaviors(Node* __this);
bool Node__get_IsEnabled(Node* __this);
void Node__set_IsEnabled(Node* __this, bool value);
bool Node__get_IsVisible(Node* __this);
::uObject* Node__get_Resources(Node* __this);
bool Node__get_HasResources(Node* __this);
::uObject* Node__get_Styles(Node* __this);
::uObject* Node__get_Window(Node* __this);
::uObject* Node__get_Transforms(Node* __this);
bool Node__get_HasExplicitTransforms(Node* __this);
::app::Uno::Float4x4 Node__get_WorldTransformInverse(Node* __this);
::app::Uno::Float4x4 Node__get_WorldTransform(Node* __this);
::app::Fuse::FastMatrix* Node__get_WorldTransformInternal(Node* __this);
::app::Uno::Float4x4 Node__get_LocalTransform(Node* __this);
::app::Fuse::FastMatrix* Node__get_LocalTransformInternal(Node* __this);
::app::Uno::Float4x4 Node__get_LocalTransformInverse(Node* __this);
::app::Fuse::Properties* Node__get_Properties(Node* __this);
::uObject* Node__get_Parent(Node* __this);
Node* Node__get_ParentNode(Node* __this);
bool Node__get_IsRooted(Node* __this);
int Node__get_SubNodeCount(Node* __this);
bool Node__get_DrawNextFrame(Node* __this);
void Node__AddStyleBehavior(Node* __this, ::app::Fuse::Behavior* b);
void Node__OnBehaviorAdded(Node* __this, ::app::Fuse::Behavior* b);
void Node__OnBehaviorRemoved(Node* __this, ::app::Fuse::Behavior* b);
void Node__RootBehaviors(Node* __this);
void Node__UnrootBehaviors(Node* __this);
bool Node__HasBit(Node* __this, int nb);
void Node__SetBit(Node* __this, int nb);
void Node__ClearBit(Node* __this, int nb);
void Node__RaiseEvent(Node* __this, ::app::Fuse::PropertyHandle* ph, int ne);
void Node__InvokeEventHandler(Node* __this, ::uObject* obj, ::uObject* args);
void Node__AddEventHandler(Node* __this, ::app::Fuse::PropertyHandle* ph, int ne, ::uObject* handler);
void Node__RemoveEventHandler(Node* __this, ::app::Fuse::PropertyHandle* ph, int ne, ::uObject* handler);
void Node__UpdateDisabled(Node* __this);
bool Node__CalcIsDisabled(Node* __this);
void Node__ChangeDisabled(Node* __this, bool set);
void Node__OnIsEnabledChanged(Node* __this);
void Node__HitTest(Node* __this, ::app::Fuse::HitTestContext* htc);
void Node__OnHitTest(Node* __this, ::app::Fuse::HitTestContext* htc);
Node* Node__GetHitWindowPoint(Node* __this, ::app::Uno::Float2 windowPoint);
::uObject* Node__GetResource(Node* __this, ::uString* key, ::uDelegate* acceptor);
void Node__OnResourceChanged(Node* __this, ::app::Uno::UX::Resource* res);
void Node__StyleAdded(Node* __this, ::app::Fuse::Style* s);
void Node__StyleRemoved(Node* __this, ::app::Fuse::Style* s);
void Node__ApplyStyle(Node* __this);
void Node__ResetStyle(Node* __this);
void Node__OnResetStyle(Node* __this);
void Node__ApplyStyle_1(Node* __this, ::uObject* target);
void Node__OnApplyStyle(Node* __this, ::uObject* target);
void Node__PrependImplicitTransform(Node* __this, ::app::Fuse::FastMatrix* m);
void Node__PrependTransformOrigin(Node* __this, ::app::Fuse::FastMatrix* m);
void Node__PrependInverseTransformOrigin(Node* __this, ::app::Fuse::FastMatrix* m);
void Node__OnTransformAdded(Node* __this, ::app::Fuse::Transform* t);
void Node__OnTransformRemoved(Node* __this, ::app::Fuse::Transform* t);
void Node__OnMatrixChanged(Node* __this, ::app::Fuse::Transform* t);
void Node__InvalidateLocalTransform(Node* __this);
bool Node__IsWorldMatrixValid(Node* __this);
void Node__OnWorldTransformValidated(Node* __this);
::app::Fuse::FastMatrix* Node__CalcWorldTransform(Node* __this);
::app::Uno::Float4x4 Node__GetTransformTo(Node* __this, Node* ancestor);
void Node__PrependLocalTransform(Node* __this, ::app::Fuse::FastMatrix* m);
void Node__PrependExplicitTransforms(Node* __this, ::app::Fuse::FastMatrix* m);
::app::Uno::Float2 Node__WindowToLocal(Node* __this, ::app::Uno::Float2 windowCoord);
void Node__OnAdded(Node* __this, ::uObject* host);
void Node__OnRemoved(Node* __this, ::uObject* host);
void Node__DoUpdate(Node* __this);
void Node__MarkRooted(Node* __this);
void Node__OnRooted(Node* __this);
void Node__MarkUnrooted(Node* __this);
void Node__OnUnrooted(Node* __this);
void Node__SoftDispose(Node* __this);
void Node__EnsureInitialized(Node* __this);
void Node__OnInitialize(Node* __this);
Node* Node__GetSubNode(Node* __this, int index);
::app::Uno::Float2 Node__ParentToLocal(Node* __this, ::app::Uno::Float2 parentPoint);
void Node__Draw(Node* __this, ::app::Fuse::DrawContext* dc);
void Node___TypeInit(::uStatic* __this);
void Node___ObjInit(Node* __this);
void Node__add_Removed(Node* __this, ::uDelegate* value);
void Node__remove_Removed(Node* __this, ::uDelegate* value);
void Node__add_Update(Node* __this, ::uDelegate* value);
void Node__remove_Update(Node* __this, ::uDelegate* value);
void Node__add_IsEnabledChanged(Node* __this, ::uDelegate* value);
void Node__remove_IsEnabledChanged(Node* __this, ::uDelegate* value);
void Node__add_Rooted(Node* __this, ::uDelegate* value);
void Node__remove_Rooted(Node* __this, ::uDelegate* value);

struct Node : ::uObject
{
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Behavior*> _behaviors;
    int _nodebits;
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Transform*> _transforms;
    int _worldTransformVersion;
    ::uStrong< ::app::Fuse::FastMatrix*> _worldTransformInverse;
    int _worldTransformInverseCacheVersion;
    int _worldTransformCacheVersion;
    int _worldTransformParentCacheVersion;
    ::uStrong< ::app::Fuse::FastMatrix*> _worldTransform;
    ::uStrong< ::app::Fuse::FastMatrix*> _localTransform;
    ::uStrong< ::app::Fuse::FastMatrix*> _localTransformInverse;
    ::uStrong< ::app::Fuse::Properties*> _properties;
    ::uStrong< ::uObject*> _host;
    ::uStrong< ::app::Uno::Collections::List__Uno_EventHandler*> _updateListeners;
    bool _localIsRooted;

    void AddStyleBehavior(::app::Fuse::Behavior* b) { Node__AddStyleBehavior(this, b); }
    void OnBehaviorAdded(::app::Fuse::Behavior* b) { Node__OnBehaviorAdded(this, b); }
    void OnBehaviorRemoved(::app::Fuse::Behavior* b) { Node__OnBehaviorRemoved(this, b); }
    void RootBehaviors() { Node__RootBehaviors(this); }
    void UnrootBehaviors() { Node__UnrootBehaviors(this); }
    bool HasBit(int nb) { return Node__HasBit(this, nb); }
    void SetBit(int nb) { Node__SetBit(this, nb); }
    void ClearBit(int nb) { Node__ClearBit(this, nb); }
    void RaiseEvent(::app::Fuse::PropertyHandle* ph, int ne) { Node__RaiseEvent(this, ph, ne); }
    void InvokeEventHandler(::uObject* obj, ::uObject* args) { Node__InvokeEventHandler(this, obj, args); }
    void AddEventHandler(::app::Fuse::PropertyHandle* ph, int ne, ::uObject* handler) { Node__AddEventHandler(this, ph, ne, handler); }
    void RemoveEventHandler(::app::Fuse::PropertyHandle* ph, int ne, ::uObject* handler) { Node__RemoveEventHandler(this, ph, ne, handler); }
    void UpdateDisabled() { Node__UpdateDisabled(this); }
    bool CalcIsDisabled() { return Node__CalcIsDisabled(this); }
    void ChangeDisabled(bool set) { Node__ChangeDisabled(this, set); }
    void OnIsEnabledChanged() { (((Node__uType*)this->__obj_type)->__fp_OnIsEnabledChanged)(this); }
    void HitTest(::app::Fuse::HitTestContext* htc) { Node__HitTest(this, htc); }
    void OnHitTest(::app::Fuse::HitTestContext* htc) { (((Node__uType*)this->__obj_type)->__fp_OnHitTest)(this, htc); }
    Node* GetHitWindowPoint(::app::Uno::Float2 windowPoint);
    ::uObject* GetResource(::uString* key, ::uDelegate* acceptor) { return Node__GetResource(this, key, acceptor); }
    void OnResourceChanged(::app::Uno::UX::Resource* res) { Node__OnResourceChanged(this, res); }
    void StyleAdded(::app::Fuse::Style* s) { Node__StyleAdded(this, s); }
    void StyleRemoved(::app::Fuse::Style* s) { Node__StyleRemoved(this, s); }
    void ApplyStyle() { Node__ApplyStyle(this); }
    void ResetStyle() { Node__ResetStyle(this); }
    void OnResetStyle() { (((Node__uType*)this->__obj_type)->__fp_OnResetStyle)(this); }
    void ApplyStyle_1(::uObject* target) { Node__ApplyStyle_1(this, target); }
    void OnApplyStyle(::uObject* target) { (((Node__uType*)this->__obj_type)->__fp_OnApplyStyle)(this, target); }
    void PrependImplicitTransform(::app::Fuse::FastMatrix* m) { (((Node__uType*)this->__obj_type)->__fp_PrependImplicitTransform)(this, m); }
    void PrependTransformOrigin(::app::Fuse::FastMatrix* m) { (((Node__uType*)this->__obj_type)->__fp_PrependTransformOrigin)(this, m); }
    void PrependInverseTransformOrigin(::app::Fuse::FastMatrix* m) { (((Node__uType*)this->__obj_type)->__fp_PrependInverseTransformOrigin)(this, m); }
    void OnTransformAdded(::app::Fuse::Transform* t) { Node__OnTransformAdded(this, t); }
    void OnTransformRemoved(::app::Fuse::Transform* t) { Node__OnTransformRemoved(this, t); }
    void OnMatrixChanged(::app::Fuse::Transform* t) { Node__OnMatrixChanged(this, t); }
    void InvalidateLocalTransform() { (((Node__uType*)this->__obj_type)->__fp_InvalidateLocalTransform)(this); }
    bool IsWorldMatrixValid() { return Node__IsWorldMatrixValid(this); }
    void OnWorldTransformValidated() { (((Node__uType*)this->__obj_type)->__fp_OnWorldTransformValidated)(this); }
    ::app::Fuse::FastMatrix* CalcWorldTransform() { return Node__CalcWorldTransform(this); }
    ::app::Uno::Float4x4 GetTransformTo(Node* ancestor);
    void PrependLocalTransform(::app::Fuse::FastMatrix* m) { Node__PrependLocalTransform(this, m); }
    void PrependExplicitTransforms(::app::Fuse::FastMatrix* m) { Node__PrependExplicitTransforms(this, m); }
    ::app::Uno::Float2 WindowToLocal(::app::Uno::Float2 windowCoord);
    void OnAdded(::uObject* host) { (((Node__uType*)this->__obj_type)->__fp_OnAdded)(this, host); }
    void OnRemoved(::uObject* host) { (((Node__uType*)this->__obj_type)->__fp_OnRemoved)(this, host); }
    void DoUpdate() { Node__DoUpdate(this); }
    void MarkRooted() { Node__MarkRooted(this); }
    void OnRooted() { (((Node__uType*)this->__obj_type)->__fp_OnRooted)(this); }
    void MarkUnrooted() { Node__MarkUnrooted(this); }
    void OnUnrooted() { (((Node__uType*)this->__obj_type)->__fp_OnUnrooted)(this); }
    void SoftDispose() { (((Node__uType*)this->__obj_type)->__fp_SoftDispose)(this); }
    void EnsureInitialized() { Node__EnsureInitialized(this); }
    void OnInitialize() { Node__OnInitialize(this); }
    Node* GetSubNode(int index) { return (((Node__uType*)this->__obj_type)->__fp_GetSubNode)(this, index); }
    ::app::Uno::Float2 ParentToLocal(::app::Uno::Float2 parentPoint);
    void Draw(::app::Fuse::DrawContext* dc) { (((Node__uType*)this->__obj_type)->__fp_Draw)(this, dc); }
    void _ObjInit() { Node___ObjInit(this); }
    void add_Removed(::uDelegate* value) { Node__add_Removed(this, value); }
    void remove_Removed(::uDelegate* value) { Node__remove_Removed(this, value); }
    void add_Update(::uDelegate* value) { Node__add_Update(this, value); }
    void remove_Update(::uDelegate* value) { Node__remove_Update(this, value); }
    void add_IsEnabledChanged(::uDelegate* value) { Node__add_IsEnabledChanged(this, value); }
    void remove_IsEnabledChanged(::uDelegate* value) { Node__remove_IsEnabledChanged(this, value); }
    void add_Rooted(::uDelegate* value) { Node__add_Rooted(this, value); }
    void remove_Rooted(::uDelegate* value) { Node__remove_Rooted(this, value); }
    ::uObject* Behaviors() { return Node__get_Behaviors(this); }
    bool IsEnabled() { return Node__get_IsEnabled(this); }
    void IsEnabled(bool value) { Node__set_IsEnabled(this, value); }
    bool IsVisible() { return (((Node__uType*)this->__obj_type)->__fp_get_IsVisible)(this); }
    ::uObject* Resources() { return Node__get_Resources(this); }
    bool HasResources() { return Node__get_HasResources(this); }
    ::uObject* Styles() { return Node__get_Styles(this); }
    ::uObject* Window() { return Node__get_Window(this); }
    ::uObject* Transforms() { return Node__get_Transforms(this); }
    bool HasExplicitTransforms() { return Node__get_HasExplicitTransforms(this); }
    ::app::Uno::Float4x4 WorldTransformInverse();
    ::app::Uno::Float4x4 WorldTransform();
    ::app::Fuse::FastMatrix* WorldTransformInternal() { return Node__get_WorldTransformInternal(this); }
    ::app::Uno::Float4x4 LocalTransform();
    ::app::Fuse::FastMatrix* LocalTransformInternal() { return Node__get_LocalTransformInternal(this); }
    ::app::Uno::Float4x4 LocalTransformInverse();
    ::app::Fuse::Properties* Properties() { return Node__get_Properties(this); }
    ::uObject* Parent() { return Node__get_Parent(this); }
    Node* ParentNode() { return Node__get_ParentNode(this); }
    bool IsRooted() { return Node__get_IsRooted(this); }
    int SubNodeCount() { return (((Node__uType*)this->__obj_type)->__fp_get_SubNodeCount)(this); }
    bool DrawNextFrame() { return (((Node__uType*)this->__obj_type)->__fp_get_DrawNextFrame)(this); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {

inline Node* Node::GetHitWindowPoint(::app::Uno::Float2 windowPoint) { return Node__GetHitWindowPoint(this, windowPoint); }
inline ::app::Uno::Float4x4 Node::GetTransformTo(Node* ancestor) { return Node__GetTransformTo(this, ancestor); }
inline ::app::Uno::Float2 Node::WindowToLocal(::app::Uno::Float2 windowCoord) { return Node__WindowToLocal(this, windowCoord); }
inline ::app::Uno::Float2 Node::ParentToLocal(::app::Uno::Float2 parentPoint) { return (((Node__uType*)this->__obj_type)->__fp_ParentToLocal)(this, parentPoint); }
inline ::app::Uno::Float4x4 Node::WorldTransformInverse() { return Node__get_WorldTransformInverse(this); }
inline ::app::Uno::Float4x4 Node::WorldTransform() { return Node__get_WorldTransform(this); }
inline ::app::Uno::Float4x4 Node::LocalTransform() { return Node__get_LocalTransform(this); }
inline ::app::Uno::Float4x4 Node::LocalTransformInverse() { return Node__get_LocalTransformInverse(this); }

}}


#endif
