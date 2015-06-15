// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Uno.Action__object__object.h>
#include <app/Uno.Action__object__object__.h>

namespace app {
namespace Fuse {

::uStaticStrong< ::uObject*> Properties__NoValue;

Properties__uType* Properties__typeof()
{
    static Properties__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Properties__uType*)::uAllocClassType(sizeof(Properties__uType), "Fuse.Properties", ::uObject__typeof(), 0, 3);
        type->StrongRefOffsets[0] = offsetof(Properties, _next);
        type->StrongRefOffsets[1] = offsetof(Properties, _handle);
        type->StrongRefOffsets[2] = offsetof(Properties, _value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_next";
        type->StrongRefNames[1] = "_handle";
        type->StrongRefNames[2] = "_value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::PropertyHandle* Properties__CreateHandle(::uStatic* __this)
{
    return ::app::Fuse::PropertyHandle__New_1(NULL);
}

::uObject* Properties__Get(Properties* __this, ::app::Fuse::PropertyHandle* handle)
{
    if (__this->_handle == handle)
    {
        return __this->_value;
    }

    if (__this->_next != NULL)
    {
        return ::uPtr< ::app::Fuse::Properties*>(__this->_next)->Get(handle);
    }

    return NULL;
}

bool Properties__TryGet(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uObject** val)
{
    if (__this->_handle == handle)
    {
        *val = __this->_value;
        return true;
    }

    if (__this->_next != NULL)
    {
        return ::uPtr< ::app::Fuse::Properties*>(__this->_next)->TryGet(handle, val);
    }

    *val = NULL;
    return false;
}

void Properties__Set(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uObject* val)
{
    if (__this->_handle == NULL)
    {
        __this->_handle = handle;
        __this->_value = val;
    }
    else if (__this->_handle == handle)
    {
        __this->_value = val;
    }
    else
    {
        if (__this->_next == NULL)
        {
            __this->_next = Properties__New_1(NULL);
        }

        ::uPtr< ::app::Fuse::Properties*>(__this->_next)->Set(handle, val);
    }
}

void Properties__AddToList(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uObject* val)
{
    if (__this->_handle == NULL)
    {
        __this->_handle = handle;
        __this->_value = val;
    }
    else if (__this->_next == NULL)
    {
        __this->_next = Properties__New_1(NULL);
        ::uPtr< ::app::Fuse::Properties*>(__this->_next)->AddToList(handle, val);
    }
    else
    {
        ::uPtr< ::app::Fuse::Properties*>(__this->_next)->AddToList(handle, val);
    }
}

void Properties__RemoveFromList(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uObject* val)
{
    __this->Clear_1(handle, val, false);
}

void Properties__ForeachInList(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uDelegate* action, ::uObject* state)
{
    if (__this->_handle == NULL)
    {
        return;
    }

    Properties* p = __this;

    while (p != NULL)
    {
        if (::uPtr< ::app::Fuse::Properties*>(p)->_handle == handle)
        {
            ::uPtr< ::uDelegate*>(action)->InvokeVoid< ::uObject*, ::uObject*>(::uPtr< ::app::Fuse::Properties*>(p)->_value, state);
        }

        p = ::uPtr< ::app::Fuse::Properties*>(p)->_next;
    }
}

void Properties__ForeachInList_1(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uDelegate* action, ::uArray* state)
{
    if (__this->_handle == NULL)
    {
        return;
    }

    Properties* p = __this;

    while (p != NULL)
    {
        if (::uPtr< ::app::Fuse::Properties*>(p)->_handle == handle)
        {
            ::uPtr< ::uDelegate*>(action)->InvokeVoid< ::uObject*, ::uArray*>(::uPtr< ::app::Fuse::Properties*>(p)->_value, state);
        }

        p = ::uPtr< ::app::Fuse::Properties*>(p)->_next;
    }
}

void Properties__Clear(Properties* __this, ::app::Fuse::PropertyHandle* handle)
{
    __this->Clear_1(handle, Properties__NoValue, true);
}

void Properties__Clear_1(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uObject* val, bool all)
{
    if (__this->_handle == NULL)
    {
        return;
    }

    Properties* p = __this;
    Properties* previous = NULL;

    while (p != NULL)
    {
        if ((::uPtr< ::app::Fuse::Properties*>(p)->_handle == handle) && ((val == Properties__NoValue) || ::app::Uno::Object::Equals(::uPtr< ::uObject*>(val), ::uPtr< ::app::Fuse::Properties*>(p)->_value)))
        {
            if (previous == NULL)
            {
                if (::uPtr< ::app::Fuse::Properties*>(p)->_next == NULL)
                {
                    ::uPtr< ::app::Fuse::Properties*>(p)->_handle = NULL;
                    p->_value = NULL;
                    break;
                }
                else
                {
                    ::uPtr< ::app::Fuse::Properties*>(p)->_handle = ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Properties*>(p)->_next)->_handle;
                    p->_value = ::uPtr< ::app::Fuse::Properties*>(p->_next)->_value;
                    p->_next = ::uPtr< ::app::Fuse::Properties*>(p->_next)->_next;

                    if (all)
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else
            {
                ::uPtr< ::app::Fuse::Properties*>(previous)->_next = ::uPtr< ::app::Fuse::Properties*>(p)->_next;
                p = ::uPtr< ::app::Fuse::Properties*>(p)->_next;

                if (all)
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            previous = p;
            p = ::uPtr< ::app::Fuse::Properties*>(p)->_next;
        }
    }
}

void Properties___TypeInit(::uStatic* __this)
{
    Properties__NoValue = ::app::Uno::Object__New(NULL);
}

void Properties___ObjInit(Properties* __this)
{
}

Properties* Properties__New_1(::uStatic* __this)
{
    Properties* inst = (::app::Fuse::Properties*)::uAllocObject(sizeof(::app::Fuse::Properties), ::app::Fuse::Properties__typeof());
    inst->_ObjInit();
    return inst;
}

}}
