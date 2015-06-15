// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.TraverseNodeExtensions.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Predicate__Fuse_Node.h>

namespace app {
namespace Fuse {
namespace Input {

TraverseNodeExtensions__uType* TraverseNodeExtensions__typeof()
{
    static TraverseNodeExtensions__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TraverseNodeExtensions__uType*)::uAllocClassType(sizeof(TraverseNodeExtensions__uType), "Fuse.Input.TraverseNodeExtensions");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Node* TraverseNodeExtensions__FindNextChild(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* filter)
{
    ::app::Fuse::Node* someNode = ::uAs< ::app::Fuse::Node*>(node, ::app::Fuse::Node__typeof());

    if (someNode != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Fuse::Node*>(someNode)->SubNodeCount(); i++)
        {
            ::app::Fuse::Node* child = ::uPtr< ::app::Fuse::Node*>(someNode)->GetSubNode(i);

            if (::uPtr< ::uDelegate*>(filter)->Invoke< bool, ::app::Fuse::Node*>(child))
            {
                return child;
            }

            return TraverseNodeExtensions__FindNextChild(NULL, child, filter);
        }
    }

    ::app::Fuse::Node* sibling = TraverseNodeExtensions__FindNextSibling(NULL, node);

    if (sibling != NULL)
    {
        if (::uPtr< ::uDelegate*>(filter)->Invoke< bool, ::app::Fuse::Node*>(sibling))
        {
            return sibling;
        }

        return TraverseNodeExtensions__FindNextChild(NULL, sibling, filter);
    }

    return NULL;
}

::app::Fuse::Node* TraverseNodeExtensions__FindPreviousChild(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* filter)
{
    ::app::Fuse::Node* someNode = ::uAs< ::app::Fuse::Node*>(node, ::app::Fuse::Node__typeof());

    if (someNode != NULL)
    {
        for (int i = ::uPtr< ::app::Fuse::Node*>(someNode)->SubNodeCount() - 1; i >= 0; i--)
        {
            ::app::Fuse::Node* child = ::uPtr< ::app::Fuse::Node*>(someNode)->GetSubNode(i);

            if (::uPtr< ::uDelegate*>(filter)->Invoke< bool, ::app::Fuse::Node*>(child))
            {
                return child;
            }

            return TraverseNodeExtensions__FindPreviousChild(NULL, child, filter);
        }
    }

    ::app::Fuse::Node* sibling = TraverseNodeExtensions__FindPreviousSibling(NULL, node);

    if (sibling != NULL)
    {
        if (::uPtr< ::uDelegate*>(filter)->Invoke< bool, ::app::Fuse::Node*>(sibling))
        {
            return sibling;
        }

        return TraverseNodeExtensions__FindPreviousChild(NULL, sibling, filter);
    }

    return NULL;
}

::app::Fuse::Node* TraverseNodeExtensions__FindNextSibling(::uStatic* __this, ::app::Fuse::Node* node)
{
    if (node == NULL)
    {
        return NULL;
    }

    ::app::Fuse::Node* parent = ::uPtr< ::app::Fuse::Node*>(node)->ParentNode();

    if (parent == NULL)
    {
        return NULL;
    }

    ::app::Fuse::Node* child = TraverseNodeExtensions__FindNextChild_1(NULL, parent, node);

    if (child != NULL)
    {
        return child;
    }

    return TraverseNodeExtensions__FindNextSibling(NULL, parent);
}

::app::Fuse::Node* TraverseNodeExtensions__FindPreviousSibling(::uStatic* __this, ::app::Fuse::Node* node)
{
    if (node == NULL)
    {
        return NULL;
    }

    ::app::Fuse::Node* parent = ::uPtr< ::app::Fuse::Node*>(node)->ParentNode();

    if (parent == NULL)
    {
        return NULL;
    }

    ::app::Fuse::Node* child = TraverseNodeExtensions__FindPreviousChild_1(NULL, ::uAs< ::app::Fuse::Node*>(parent, ::app::Fuse::Node__typeof()), node);

    if (child != NULL)
    {
        return child;
    }

    return TraverseNodeExtensions__FindPreviousSibling(NULL, parent);
}

::app::Fuse::Node* TraverseNodeExtensions__FindNextChild_1(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Node* currentChild)
{
    if (((node != NULL) && (currentChild != NULL)) && (::uPtr< ::app::Fuse::Node*>(node)->SubNodeCount() > 0))
    {
        for (int i = 0; i < ::uPtr< ::app::Fuse::Node*>(node)->SubNodeCount(); i++)
        {
            if (::uPtr< ::app::Fuse::Node*>(node)->GetSubNode(i) == currentChild)
            {
                if ((i + 1) < ::uPtr< ::app::Fuse::Node*>(node)->SubNodeCount())
                {
                    return ::uPtr< ::app::Fuse::Node*>(node)->GetSubNode(i + 1);
                }
            }
        }
    }

    return NULL;
}

::app::Fuse::Node* TraverseNodeExtensions__FindPreviousChild_1(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Node* currentChild)
{
    if (((node != NULL) && (currentChild != NULL)) && (::uPtr< ::app::Fuse::Node*>(node)->SubNodeCount() > 0))
    {
        for (int i = 0; i < ::uPtr< ::app::Fuse::Node*>(node)->SubNodeCount(); i++)
        {
            if (::uPtr< ::app::Fuse::Node*>(node)->GetSubNode(i) == currentChild)
            {
                if ((i - 1) >= 0)
                {
                    return ::uPtr< ::app::Fuse::Node*>(node)->GetSubNode(i - 1);
                }
            }
        }
    }

    return NULL;
}

}}}
