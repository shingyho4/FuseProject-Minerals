// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Targets\CPlusPlus\Source\Uno\Uno.cpp'.
// WARNING: Changes might be lost if you edit this file directly.

/**
    \defgroup Runtime
    \brief Runtime core features

    \defgroup Init
    \brief Initialization and error reporting
    \ingroup Runtime

    \defgroup ObjectModel Object model
    \brief Object type, type info and primitive types
    \ingroup Runtime

    \defgroup ReferenceTypes Reference types
    \brief Object creation, type checking and casting functions
    \ingroup ObjectModel

    \defgroup ValueTypes Value types
    \brief Value type and boxing functions
    \ingroup ObjectModel

    \defgroup Interfaces
    \brief Interface type and functions
    \ingroup ObjectModel

    \defgroup Arrays
    \brief Array types and creation functions
    \ingroup ObjectModel

    \defgroup Strings
    \brief String type and creation functions
    \ingroup ObjectModel

    \defgroup Delegates
    \brief Delegate types and creation functions
    \ingroup ObjectModel

    \defgroup Generics
    \brief Helper functions for generic values
    \ingroup ObjectModel

    \defgroup Memory Memory management
    \brief Automatic reference counting
    \ingroup Runtime

    \defgroup Threads Thead safety
    \brief Critical section (recursive mutex)
    \ingroup Runtime

    \defgroup Exceptions
    \brief Throwable struct and throw macro
    \ingroup Runtime

    \defgroup Buffers
    \brief Helper functions for buffer access and endian conversion
    \ingroup Runtime
*/

#include <Uno/Uno.h>
#include <Xli/Array.h>
#include <Xli/Atomic.h>
#include <Xli/Console.h>
#include <Xli/CoreLib.h>
#include <Xli/Exception.h>
#include <Xli/HashMap.h>
#include <Xli/Mutex.h>
#include <Xli/Thread.h>
#include <Xli/Traits.h>
#include <Xli/Unicode.h>
#include <XliPlatform/MessageBox.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>
#include <app/Uno.NullReferenceException.h>
#include <app/Uno.InvalidCastException.h>
#include <app/Uno.IndexOutOfRangeException.h>

struct uWeakObject
{
    uObject* Object;
    int RefCount;

    enum ObjectState
    {
        Dead = -1,
        Healthy,
        Infected,
        Zombie
    };

    ObjectState ZombieState;
    uWeakStateIntercept::Callback ZombieStateIntercept;
};

struct uAutoReleaseFrame
{
    int StartIndex;

#ifdef U_DEBUG_MEM
    int AllocCount;
    int FreeCount;
    size_t AllocSize;
    size_t FreeSize;
#endif
};

struct uThreadData
{
    Xli::Array<uObject*> AutoReleasePool;
    Xli::Array<uAutoReleaseFrame> AutoReleaseStack;
};

uClassType* uStatic__ObjectType;
uClassType* uStatic__TypeType;
uType* uStatic__VoidType;

static void* uStatic__MainThread;
static Xli::TlsHandle uStatic__ThreadData;
static Xli::MutexHandle uStatic__TypeMutex;
static Xli::MutexHandle uStatic__WeakMutex;
static Xli::MutexHandle uStatic__ArrayMutex;
static Xli::MutexHandle uStatic__StringMutex;

static Xli::HashMap<const char*, uString*>* uStatic__ConstStrings;

static uType* uStatic__DummyType;
static size_t uStatic__DummySize;

#ifdef U_DEBUG_MEM
static Xli::HashMap<uObject*, bool>* uStatic__HeapObjects;
#endif

static uThreadData* uGetThreadData()
{
    void* data = Xli::GetTlsValue(uStatic__ThreadData);

    if (!data)
    {
        data = new uThreadData;
        Xli::SetTlsValue(uStatic__ThreadData, data);
    }

    return (uThreadData*)data;
}

static void uFreeThreadData(void* data)
{
    delete (uThreadData*)data;
}






uRuntime::uRuntime()
{
    if (uStatic__MainThread != NULL)
        uFatalError("There is only one Uno Runtime");

    uStatic__MainThread = Xli::GetCurrentThread();
    uStatic__ThreadData = Xli::CreateTls(uFreeThreadData);
    uStatic__TypeMutex = Xli::CreateMutex();
    uStatic__WeakMutex = Xli::CreateMutex();
    uStatic__ArrayMutex = Xli::CreateMutex();
    uStatic__StringMutex = Xli::CreateMutex();

    uStatic__ConstStrings = new Xli::HashMap<const char*, uString*>();

#ifdef U_DEBUG_MEM
    uStatic__HeapObjects = new Xli::HashMap<uObject*, bool>();
#endif

    // Create 'Uno.Object', 'Uno.Type' and 'Uno.Void' uType objects

    uStatic__ObjectType = (uClassType*)malloc(sizeof(uClassType));
    uStatic__TypeType = (uClassType*)malloc(sizeof(uClassType));
    uStatic__VoidType = (uType*)malloc(sizeof(uType));

    memset(uStatic__ObjectType, 0, sizeof(uClassType));
    uStatic__ObjectType->TypeType = uTypeTypeClass;
    uStatic__ObjectType->TypeName = "Uno.Object";
    uStatic__ObjectType->TypeSize = sizeof(uClassType);
    uStatic__ObjectType->ValueSize = sizeof(uObject*);
    uStatic__ObjectType->Implements = (uInterfaceType**)&uStatic__DummyType;
    uStatic__ObjectType->InterfaceOffsets = &uStatic__DummySize;
    uStatic__ObjectType->__fp_Equals = ::app::Uno::Object__Equals;
    uStatic__ObjectType->__fp_GetHashCode = ::app::Uno::Object__GetHashCode;
    uStatic__ObjectType->__fp_ToString = ::app::Uno::Object__ToString;
    uStatic__ObjectType->__obj_type = uStatic__TypeType;
    uStatic__ObjectType->__obj_retains = 1;

    memcpy(uStatic__TypeType, uStatic__ObjectType, sizeof(uClassType));
    uStatic__TypeType->TypeName = "Uno.Type";
    uStatic__TypeType->Extends = uStatic__ObjectType;
    uStatic__TypeType->__fp_ToString = (uString*(*)(uObject*))::app::Uno::Type__ToString;

    memcpy(uStatic__VoidType, uStatic__ObjectType, sizeof(uType));
    uStatic__VoidType->TypeName = "Uno.Void";
    uStatic__VoidType->TypeType = uTypeTypeVoid;
    uStatic__VoidType->TypeSize = sizeof(uType);
    uStatic__VoidType->ValueSize = 0;




}

uRuntime::~uRuntime()
{




    // TODO: Releasing globals crashes in some cases, debug later

    /*
    uObject*** strong = uGetGlobalStrongRefs();
    uWeakObject*** weak = uGetGlobalWeakRefs();

    for (int i = 0; strong[i]; i++)
        uReleaseObject(*strong[i]);

    for (int i = 0; weak[i]; i++)
        uStoreWeakObject(weak[i], NULL);
    */

    // TODO: Global type objects for user types

    free(uStatic__ObjectType);
    free(uStatic__TypeType);
    free(uStatic__VoidType);

    delete uStatic__ConstStrings;

#ifdef U_DEBUG_MEM
    delete uStatic__HeapObjects;
#endif

    Xli::DeleteTls(uStatic__ThreadData);
    Xli::DeleteMutex(uStatic__TypeMutex);
    Xli::DeleteMutex(uStatic__WeakMutex);
    Xli::DeleteMutex(uStatic__ArrayMutex);
    Xli::DeleteMutex(uStatic__StringMutex);
}

void uFatalError(const char* msg)
{
    Xli::Error->WriteFormat("Runtime Error: %s\n", msg ? msg : "(null)");
    Xli::MessageBox::Show(NULL, "The application has crashed.", "Fatal Error", Xli::DialogButtonsOK, Xli::DialogHintsError);
    exit(1);
}

bool uEnterCriticalIfNull(void* addr)
{
    if (*(void**)addr != NULL)
        return false;

    Xli::LockMutex(uStatic__TypeMutex);

    if (*(void**)addr == NULL)
        return true;

    Xli::UnlockMutex(uStatic__TypeMutex);
    return false;
}

void uEnterCritical()
{
    Xli::LockMutex(uStatic__TypeMutex);
}

void uExitCritical()
{
    Xli::UnlockMutex(uStatic__TypeMutex);
}

uClassType* uObject__typeof()
{
    return uStatic__ObjectType;
}

uClassType* uType__typeof()
{
    return uStatic__TypeType;
}

uType* uVoid__typeof()
{
    return uStatic__VoidType;
}

uAutoReleasePool::uAutoReleasePool()
{
    uThreadData* thread = uGetThreadData();
    _handle = thread->AutoReleaseStack.Add();
    uAutoReleaseFrame& frame = thread->AutoReleaseStack[_handle];

    frame.StartIndex = thread->AutoReleasePool.Length();

#ifdef U_DEBUG_MEM
    frame.AllocCount = 0;
    frame.AllocSize = 0;
    frame.FreeCount = 0;
    frame.FreeSize = 0;
#endif
}

uAutoReleasePool::~uAutoReleasePool()
{
    uThreadData* thread = uGetThreadData();

    if (thread->AutoReleaseStack.Length() - 1 != _handle)
        uFatalError(XLI_FUNCTION);

    uAutoReleaseFrame& frame = thread->AutoReleaseStack[_handle];

    // Note: Rewritten because that uAutoReleaseObject() might be called from uReleaseObject() inside this loop.
    // TODO: It may be faster if uAutoReleaseObject() were able to handle this, i.e. not adding anything to pool while flushing it.
    for (int i = frame.StartIndex; i < thread->AutoReleasePool.Length(); i++)
    {
        uObject* obj = thread->AutoReleasePool[i];

#ifdef U_DEBUG_MEM
        frame.AllocCount++;
        frame.AllocSize += obj->__obj_alloc_size;
#endif
        uReleaseObject(obj);
    }

#if U_DEBUG_MEM >= 1
    Xli::Error->WriteFormat("ARC FRAME: Alloc'd %d objects (%d bytes), Free'd %d objects (%d bytes)\n", frame.AllocCount, frame.AllocSize, frame.FreeCount, frame.FreeSize);
#endif

    thread->AutoReleasePool.Resize(frame.StartIndex);
    thread->AutoReleaseStack.RemoveLast();
}

void uAutoReleaseObject(uObject* obj)
{
    uThreadData* thread = uGetThreadData();

    if (thread->AutoReleaseStack.Length() == 0)
        uFatalError(XLI_FUNCTION);

    if (obj)
    {
        thread->AutoReleasePool.Add(obj);

#ifdef U_DEBUG_MEM
        int releaseCount = 0;

        for (int i = 0; i < thread->AutoReleasePool.Length(); i++)
            if (thread->AutoReleasePool[i] == obj)
                releaseCount++;

        int retainCount = obj->__obj_retains - releaseCount;

        if (retainCount < 0)
            Xli::Error->WriteFormat("*** BAD RELEASE: '%s', object id: %d (%d retains) ***\n", obj->__obj_type->TypeName, obj->__obj_id, retainCount);
#endif
    }
}

void uRetainObject(uObject* obj)
{
    if (obj)
    {
        Xli::AtomicIncrement(&obj->__obj_retains);

#if U_DEBUG_MEM >= 3
        Xli::Error->WriteFormat("Retained '%s' (%d bytes) (%d retains)\n", obj->__obj_type->TypeName, obj->__obj_alloc_size, obj->__obj_retains);
#endif
    }
}

void uReleaseObject(uObject* obj)
{
    if (obj)
    {
        if (Xli::AtomicDecrement(&obj->__obj_retains) == 0)
        {
            if (obj->__obj_weak)
            {
                {
                    Xli::MutexLock lock(uStatic__WeakMutex);

                    if (obj->__obj_retains != 0)
                        return;

                    if (obj->__obj_weak->ZombieState == uWeakObject::Infected)
                    {
                        obj->__obj_weak->ZombieState = uWeakObject::Zombie;
                        if (!obj->__obj_weak->ZombieStateIntercept(uWeakStateIntercept::OnRelease, obj))
                            return;
                    }

                    obj->__obj_weak->ZombieState = uWeakObject::Dead;
                    obj->__obj_weak->Object = NULL;
                }

                if (Xli::AtomicDecrement(&obj->__obj_weak->RefCount) == 0)
                    free(obj->__obj_weak);
            }

#ifdef U_DEBUG_MEM
            uThreadData* thread = uGetThreadData();

            if (thread->AutoReleaseStack.Length() > 0 &&
                thread->AutoReleaseStack.Last().AllocCount > 0)
            {
                thread->AutoReleaseStack.Last().FreeCount++;
                thread->AutoReleaseStack.Last().FreeSize += obj->__obj_alloc_size;
            }
#endif
            uType* type = obj->__obj_type;

            switch (type->TypeType)
            {
            case uTypeTypeClass:
                do
                {
                    if (type->__fp_Finalize)
                    {
                        try { (*type->__fp_Finalize)(obj); }
                        catch (...) { Xli::Error->WriteFormat("Runtime Error: Unhandled exception in finalizer for '%s'\n", type->TypeName); }
                    }

                    for (int i = 0; i < type->StrongRefCount; i++)
                        uReleaseObject(*(uObject**)((uByte*)obj + type->StrongRefOffsets[i]));

                    for (int i = 0; i < type->WeakRefCount; i++)
                        uStoreWeakObject((uWeakObject**)((uByte*)obj + type->WeakRefOffsets[i]), NULL);

                    type = type->Extends;

                } while (type);

                break;

            case uTypeTypeValue:
                {
                    // Note: This must be a boxed value, so append size of object header
                    uByte* valueAddr = (uByte*)obj + sizeof(uObject);

                    for (int i = 0; i < type->StrongRefCount; i++)
                        uReleaseObject(*(uObject**)(valueAddr + type->StrongRefOffsets[i]));

                    for (int i = 0; i < type->WeakRefCount; i++)
                        uStoreWeakObject((uWeakObject**)(valueAddr + type->WeakRefOffsets[i]), NULL);
                }
                break;

            case uTypeTypeDelegate:
                uReleaseObject(((uDelegate*)obj)->_obj);
                uReleaseObject(((uDelegate*)obj)->_prev);
                break;

            case uTypeTypeArray:
                {
                    uArray* array = (uArray*)obj;
                    uArrayType* arrayType = (uArrayType*)type;
                    uType* elmType = arrayType->ElementType;

                    switch (elmType->TypeType)
                    {
                    case uTypeTypeClass:
                    case uTypeTypeInterface:
                    case uTypeTypeDelegate:
                    case uTypeTypeArray:
                        {
                            for (uObject** objAddr = (uObject**)array->_ptr; array->_len--; objAddr++)
                                uReleaseObject(*objAddr);
                        }
                        break;

                    case uTypeTypeValue:
                        {
                            for (uByte* valueAddr = (uByte*)array->_ptr; array->_len--; valueAddr += elmType->ValueSize)
                            {
                                for (int i = 0; i < elmType->StrongRefCount; i++)
                                    uReleaseObject(*(uObject**)(valueAddr + elmType->StrongRefOffsets[i]));

                                for (int i = 0; i < elmType->WeakRefCount; i++)
                                    uStoreWeakObject((uWeakObject**)(valueAddr + elmType->WeakRefOffsets[i]), NULL);
                            }
                        }
                        break;

                    default:
                        uFatalError(XLI_FUNCTION);
                    }
                }
                break;

            default:
                uFatalError(XLI_FUNCTION);
            }

#if U_DEBUG_MEM >= 2
            Xli::Error->WriteFormat("Freeing '%s' (%d bytes)\n", obj->__obj_type->TypeName, obj->__obj_alloc_size);
#endif

#ifdef U_DEBUG_MEM
            uEnterCritical();
            uStatic__HeapObjects->Remove(obj);
            uExitCritical();
#endif

            free(obj);
        }
        else if ((*(uUInt*)&obj->__obj_retains) & 0xF0000000)
        {
            // Object must be corrupt if one of the four first bits are set
            uFatalError(XLI_FUNCTION);
        }
        else
        {
#if U_DEBUG_MEM >= 3
            Xli::Error->WriteFormat("Released '%s' (%d bytes) (%d retains)\n", obj->__obj_type->TypeName, obj->__obj_alloc_size, obj->__obj_retains);
#endif
        }
    }
}

#ifdef U_DEBUG_MEM

static void uDumpObject(FILE *fp, uObject *obj, const char *label)
{
    fprintf(fp, "\tobject_at_%x [label=\"%s refcount: %d\"]\n",
            obj, label, obj->__obj_retains);
}

static void uDumpGlobalRef(FILE *fp, uObject **obj, const char *label)
{
    fprintf(fp, "\tglobal_ref_at_%x [label=\"%s\"]\n",
            obj, label);
    if (*obj)
        fprintf(fp, "\tglobal_ref_at_%x -> object_at_%x\n", obj, *obj);
}

static void uDumpStrongRef(FILE *fp, uObject *obj, uObject *target)
{
    if (target)
        fprintf(fp, "\tobject_at_%x -> object_at_%x\n", obj, target);
}

static void uDumpStrongRefs(FILE *fp, uObject *obj, void *base, uType *type)
{
    for (int i = 0; i < type->StrongRefCount; i++)
    {
        uObject *target = *(uObject**)((uByte*)base + type->StrongRefOffsets[i]);
        uDumpStrongRef(fp, obj, target);
    }
}

static void uDumpObjectAndStrongRefs(FILE *fp, uObject *obj)
{
    uType *type = obj->GetType();

    uDumpObject(fp, obj, type->TypeName);

    switch (type->TypeType)
    {
    case uTypeTypeClass:
        do
        {
	    uDumpStrongRefs(fp, obj, obj, type);
            type = type->Extends;
        } while (type);
	break;

    case uTypeTypeValue:
    {
        uByte* valueAddr = (uByte*)obj + sizeof(uObject);
        uDumpStrongRefs(fp, obj, valueAddr, type);
	break;
    }

    case uTypeTypeDelegate:
    {
        uDelegate *delegate = (uDelegate*)obj;
        uDumpStrongRef(fp, obj, delegate->_obj);
        uDumpStrongRef(fp, obj, delegate->_prev);
        break;
    }

    case uTypeTypeArray:
    {
        uArray *array = (uArray *)obj;
        uArrayType *arrayType = (uArrayType *)type;
        uType *elmType = arrayType->ElementType;

        switch (elmType->TypeType)
        {
            case uTypeTypeClass:
            case uTypeTypeInterface:
            case uTypeTypeDelegate:
            case uTypeTypeArray:
            {
	        for (int i = 0; i < array->_len; ++i)
		{
		    uObject *target = ((uObject **)array->_ptr)[i];
                    uDumpStrongRef(fp, obj, target);
		}
            }
            break;

            case uTypeTypeValue:
            {
                for (int i = 0; i < array->_len; ++i)
                {
                    uByte *valueAddr = (uByte *)array->_ptr + i * elmType->ValueSize;
                    uDumpStrongRefs(fp, obj, valueAddr, elmType);
                }
            }
            break;

            default:
                uFatalError(XLI_FUNCTION);
            }
        }
        break;

    default:
        uFatalError(XLI_FUNCTION);
    }
}

void uDumpAllStrongRefs(const char *path)
{
    FILE *fp = fopen(path, "w");
    if (!fp)
        return;

    fprintf(fp, "digraph object_dump {\n");

    uEnterCritical();

    for (int i = uStatic__HeapObjects->Begin();
         i != uStatic__HeapObjects->End();
	 i = uStatic__HeapObjects->Next(i))
    {
        uDumpObjectAndStrongRefs(fp, uStatic__HeapObjects->GetKey(i));
    }

    uObject ***globalStrongRefs = uGetGlobalStrongRefs();
    const char **globalStrongRefNames = uGetGlobalStrongNames();
    for (int i = 0; globalStrongRefs[i] != NULL && globalStrongRefNames[i] != NULL; ++i)
    {
        uDumpGlobalRef(fp, globalStrongRefs[i], globalStrongRefNames[i]);
    }

    uExitCritical();

    fprintf(fp, "}\n");
    fclose(fp);
}

#endif

void uCopyArray(const uArray* srcArray, int srcIndex, uArray* dstArray, int dstIndex, int length)
{
    if (length < 0 ||
        !srcArray || srcIndex < 0 || srcIndex + length > srcArray->_len ||
        !dstArray || dstIndex < 0 || dstIndex + length > dstArray->_len ||
        srcArray->__obj_type != dstArray->__obj_type)
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));

    uType* elmType = ((uArrayType*)srcArray->__obj_type)->ElementType;
    size_t elmSize = elmType->ValueSize;

    uByte* dst = (uByte*)dstArray->_ptr + elmSize * dstIndex;
    const uByte* src = (const uByte*)srcArray->_ptr + elmSize * srcIndex;

    memcpy(dst, src, elmSize * length);

    switch (elmType->TypeType)
    {
    case uTypeTypeValue:
        for (int i = 0; i < length; i++)
            for (int j = 0; j < elmType->StrongRefCount; j++)
                uRetainObject((uObject*)(dst + i * elmSize + elmType->StrongRefOffsets[j]));

        break;

    default:
        for (int i = 0; i < length; i++)
            uRetainObject((uObject*)dst + i);

        break;
    }
}

void uCopyValue(void* addr, uValueType* type, const void* valueData)
{
    memcpy(addr, valueData, type->ValueSize);

    for (int i = 0; i < type->StrongRefCount; i++)
        uRetainObject(*(uObject**)((uByte*)addr + type->StrongRefOffsets[i]));
}

void uWeakStateIntercept::SetCallback(uWeakObject* weak, uWeakStateIntercept::Callback cb)
{
    if (!weak || !cb || weak->ZombieState != uWeakObject::Healthy)
        uFatalError(XLI_FUNCTION);

    weak->ZombieState = uWeakObject::Infected;
    weak->ZombieStateIntercept = cb;
}

void uStoreWeakObject(uWeakObject** addr, uObject* obj)
{
    if (*addr && Xli::AtomicDecrement(&(*addr)->RefCount) == 0)
        free(*addr);

    if (!obj)
    {
        *addr = NULL;
        return;
    }

    if (!obj->__obj_weak)
    {
        Xli::MutexLock lock(uStatic__WeakMutex);
        if (!obj->__obj_weak)
        {
            obj->__obj_weak = (uWeakObject*)malloc(sizeof(uWeakObject));
            obj->__obj_weak->Object = obj;
            obj->__obj_weak->RefCount = 1;
            obj->__obj_weak->ZombieState = uWeakObject::Healthy;
            obj->__obj_weak->ZombieStateIntercept = 0;
        }
    }

    Xli::AtomicIncrement(&obj->__obj_weak->RefCount);
    *addr = obj->__obj_weak;
}

uObject* uLoadWeakObject(uWeakObject* weak)
{
    if (!weak)
        return NULL;

    Xli::MutexLock lock(uStatic__WeakMutex);
    if (weak->ZombieState == uWeakObject::Zombie)
    {
        if (!weak->ZombieStateIntercept(uWeakStateIntercept::OnLoad, weak->Object))
        {
            weak->ZombieState = uWeakObject::Dead;
            weak->Object = NULL;
            return NULL;
        }

        weak->ZombieState = uWeakObject::Infected;
    }

    uObject* obj = weak->Object;
    uRetainObject(obj);
    uAutoReleaseObject(obj);
    return obj;
}

uThrowable::uThrowable(::app::Uno::Exception* exception, const char* func, int line)
    : Exception(exception)
    , Function(func)
    , Line(line)
{
    uRetainObject((uObject*)Exception);
}

uThrowable::uThrowable(const uThrowable& copy)
    : Exception(copy.Exception)
    , Function(copy.Function)
    , Line(copy.Line)
{
    uRetainObject((uObject*)Exception);
}

uThrowable::~uThrowable() XLI_NOEXCEPT
{
    // Note: There might not be an auto release pool at this point.
    uReleaseObject((uObject*)Exception);
}

const char* uThrowable::what() const XLI_NOEXCEPT
{
    return "Uno.Exception";
}

void uThrowable::ThrowNullReference(const char* file, int line)
{
    throw uThrowable(::app::Uno::NullReferenceException__New_3(NULL), file, line);
}

void uThrowable::ThrowInvalidCast(const char* file, int line)
{
    throw uThrowable(::app::Uno::InvalidCastException__New_3(NULL), file, line);
}

void uThrowable::ThrowIndexOutOfRange(const char* file, int line)
{
    throw uThrowable(::app::Uno::IndexOutOfRangeException__New_3(NULL), file, line);
}

static uType* uAllocType(size_t typeSize, uTypeType typeType, const char* typeName, size_t valueSize, uClassType* baseType = NULL, int interfaceCount = 0, int strongRefCount = 0, int weakRefCount = 0)
{
    // Note: NULL terminated list
    if (interfaceCount > 0)
        interfaceCount++;

    size_t allocSize = typeSize +
        interfaceCount * (sizeof(uType*) + sizeof(size_t)) +
        strongRefCount * sizeof(size_t) + weakRefCount * sizeof(size_t);

#ifdef U_DEBUG_MEM
    allocSize += strongRefCount * sizeof(const char*) + weakRefCount * sizeof(const char*);
#endif

    uType* result = (uType*)uAllocObject(allocSize, uStatic__TypeType);
    uByte* ptr = (uByte*)result + typeSize;

    if (baseType)
    {
        // Copy vtable
        size_t offset = offsetof(uType, __fp_GetHashCode);
        memcpy((uByte*)result + offset, (const uByte*)baseType + offset, baseType->TypeSize - offset);
        result->Extends = baseType;
    }

    result->TypeSize = typeSize;
    result->TypeType = typeType;
    result->TypeName = typeName;
    result->ValueSize = valueSize;

    result->Implements = interfaceCount > 0 ? (uInterfaceType**)ptr : (uInterfaceType**)&uStatic__DummyType;
    ptr += interfaceCount * sizeof(uType*);

    result->InterfaceOffsets = interfaceCount > 0 ? (size_t*)ptr : &uStatic__DummySize;
    ptr += interfaceCount * sizeof(size_t);

    result->StrongRefCount = strongRefCount;
    result->StrongRefOffsets = (size_t*)ptr;
    ptr += strongRefCount * sizeof(size_t);

    result->WeakRefCount = weakRefCount;
    result->WeakRefOffsets = (size_t*)ptr;
    ptr += weakRefCount * sizeof(size_t);

#ifdef U_DEBUG_MEM
    result->StrongRefNames = (const char**)ptr;
    ptr += strongRefCount * sizeof(const char*);

    result->WeakRefNames = (const char**)ptr;
    ptr += weakRefCount * sizeof(const char*);
#endif

    

    return result;
}

uClassType* uAllocClassType(size_t typeSize, const char* typeName, uClassType* baseType, int interfaceCount, int strongRefCount, int weakRefCount)
{
    return (uClassType*)uAllocType(typeSize, uTypeTypeClass, typeName, baseType != NULL ? sizeof(uObject*) : 0, baseType, interfaceCount, strongRefCount, weakRefCount);
}

uObject* uAllocObject(size_t objSize, uType* objType)
{
    uObject* result = (uObject*)malloc(objSize);
    memset(result, 0, objSize);

    result->__obj_type = objType;
    result->__obj_retains = 1;

#ifdef U_DEBUG_MEM
    result->__obj_alloc_size = objSize;
    result->__obj_id = objType->ObjectCount++;
#endif

#if U_DEBUG_MEM >= 2
    Xli::Error->WriteFormat("Alloc'd '%s' (%d bytes)\n", objType->TypeName, objSize);
#endif

#ifdef U_DEBUG_MEM
    uEnterCritical();
    (*uStatic__HeapObjects)[result] = true;
    uExitCritical();
#endif

    uAutoReleaseObject(result);
    return result;
}

uString* uAllocString(int length)
{
    uString* result = (uString*)uAllocObject(sizeof(uString) + sizeof(uChar) * length + sizeof(uChar), ::app::Uno::String__typeof());
    result->_ptr = (uChar*)((uByte*)result + sizeof(uString));
    result->_len = length;
    return result;
}

uString* uNewStringAnsi(const char* cstr, int length)
{
    uString* result = uAllocString(length);

    for (int i = 0; i < length; i++)
        result->_ptr[i] = (uChar)cstr[i];

    return result;
}

uString* uNewStringAnsi(const char* cstr)
{
    return cstr == NULL ? NULL : uNewStringAnsi(cstr, strlen(cstr));
}

uString* uNewStringUtf8(const char* mutf8, int length)
{
    Xli::Utf16String utf16 = Xli::Unicode::Utf8To16(mutf8, length, Xli::UnicodeFlagsModifiedUtf8 | Xli::UnicodeFlagsIgnoreError);
    int len = utf16.Length();

    uString* result = uAllocString(len);
    memcpy(result->_ptr, utf16.Ptr(), sizeof(uChar) * len);
    return result;
}

uString* uNewStringUtf8(const char* mutf8)
{
    return mutf8 == NULL ? NULL : uNewStringUtf8(mutf8, strlen(mutf8));
}

uString* uNewStringFromArray(const uArray* array)
{
    if (!array)
        uThrowable::ThrowNullReference(XLI_FUNCTION, XLI_LINE);

    uString* result = uAllocString(array->_len);
    memcpy(result->_ptr, array->_ptr, sizeof(uChar) * array->_len);
    return result;
}

uString* uGetConstString(const char* mutf8)
{
    Xli::MutexLock lock(uStatic__StringMutex);

    uString* result;
    if (!uStatic__ConstStrings->TryGetValue(mutf8, result))
    {
        result = uNewStringUtf8(mutf8);
        uStatic__ConstStrings->Add(mutf8, result);
        uRetainObject(result);
    }

    return result;
}

bool uCompareStrings(uString* a, uString* b)
{
    return a == b || a != NULL && b != NULL && a->_len == b->_len && memcmp(a->_ptr, b->_ptr, sizeof(uChar) * a->_len);
}

const char* uStringToCStr(const uString* str)
{
    return str ? Xli::Unicode::Utf16To8(str->_ptr, str->_len).SwapPtr() : NULL;
}

void uFreeCStr(const char* cstr)
{
    free((void *)cstr);
}

uArrayType* uGetArrayType(uType* elementType)
{
    if (elementType->ArrayType)
        return elementType->ArrayType;

    Xli::MutexLock lock(uStatic__ArrayMutex);

    size_t nameLen = strlen(elementType->TypeName);
    char* arrayName = (char*)malloc(nameLen + 3); // Memory leak
    memcpy(arrayName, elementType->TypeName, nameLen);
    memcpy(arrayName + nameLen, "[]", 3);

    uArrayType* result = (uArrayType*)uAllocType(sizeof(uArrayType), uTypeTypeArray, arrayName, sizeof(uArray*), uStatic__ObjectType);
    result->ElementType = elementType;
    uRetainObject(result);

    return elementType->ArrayType = result;
}

uArray* uNewArray(uType* elementType, int length, const void* optionalData)
{
    size_t elementSize = elementType->ValueSize;
    uArray* result = (uArray*)uAllocObject(sizeof(uArray) + elementSize * length, uGetArrayType(elementType));
    result->_ptr = (uByte*)result + sizeof(uArray);
    result->_len = length;

    if (optionalData)
        memcpy(result->_ptr, optionalData, elementSize * length);

    return result;
}

static int uValue__GetHashCode(uObject* obj)
{
    uValueType* type = (uValueType*)obj->__obj_type;
    return type->__fp_GetHashCode_value ?
        (*type->__fp_GetHashCode_value)((uByte*)obj + sizeof(uObject)) :
        ::app::Uno::Object__GetHashCode(obj);
}

static bool uValue__Equals(uObject* obj1, uObject* obj2)
{
    uValueType* type = (uValueType*)obj1->__obj_type;
    return type->__fp_Equals_value ?
        (*type->__fp_Equals_value)((uByte*)obj1 + sizeof(uObject), obj2) :
        ::app::Uno::Object__Equals(obj1, obj2);
}

static uString* uValue__ToString(uObject* obj)
{
    uValueType* type = (uValueType*)obj->__obj_type;
    return type->__fp_ToString_value ?
        (*type->__fp_ToString_value)((uByte*)obj + sizeof(uObject)) :
        ::app::Uno::Object__ToString(obj);
}

uValueType* uAllocValueType(size_t typeSize, const char* typeName, size_t valueSize, int interfaceCount, int strongRefCount, int weakRefCount)
{
    uValueType* result = (uValueType*)uAllocType(typeSize, uTypeTypeValue, typeName, valueSize, uStatic__ObjectType, interfaceCount, strongRefCount, weakRefCount);
    result->__fp_GetHashCode = uValue__GetHashCode;
    result->__fp_Equals = uValue__Equals;
    result->__fp_ToString = uValue__ToString;
    return result;
}

uObject* uBoxValue(uValueType* valueType, const void* valueData)
{
    size_t valueSize = valueType->ValueSize;

    uObject* result = uAllocObject(sizeof(uObject) + valueSize, valueType);
    memcpy((uByte*)result + sizeof(uObject), valueData, valueSize);

    for (int i = 0; i < valueType->StrongRefCount; i++)
        uRetainObject(*(uObject**)((uByte*)valueData + valueType->StrongRefOffsets[i]));

    return result;
}

uDelegateType* uAllocDelegateType(const char* typeName)
{
    return (uDelegateType*)uAllocType(sizeof(uDelegateType), uTypeTypeDelegate, typeName, sizeof(uDelegate*), ::app::Uno::Delegate__typeof());
}

uDelegate* uNewDelegateNonVirt(uDelegateType* delegateType, const void* funcPtr, uObject* objInst, size_t objOffset)
{
    uDelegate* result = (uDelegate*)uAllocObject(sizeof(uDelegate), delegateType);
    result->_func = funcPtr;
    result->_obj = objInst;
    result->_offset = objOffset;
    uRetainObject(objInst);
    return result;
}

uDelegate* uNewDelegateVirt(uDelegateType* delegateType, uObject* objInst, size_t funcOffset)
{
    uDelegate* result = (uDelegate*)uAllocObject(sizeof(uDelegate), delegateType);
    result->_obj = objInst;
    result->_offset = funcOffset;
    uRetainObject(objInst);
    return result;
}

uDelegate* uNewDelegateInterface(uDelegateType* delegateType, uObject* objInst, uInterfaceType* interfaceType, size_t funcOffset)
{
    if (!objInst)
    {
        uThrowable::ThrowNullReference(XLI_FUNCTION, XLI_LINE);
        return NULL;
    }

    uType* objType = objInst->__obj_type;

    do
    {
        for (int i = 0; objType->Implements[i]; i++)
            if (objType->Implements[i] == interfaceType)
                return uNewDelegateVirt(delegateType, objInst, objType->InterfaceOffsets[i] + funcOffset);

        objType = objType->Extends;
    }
    while (objType);

    uFatalError(XLI_FUNCTION);
}

bool uIs(const uObject* obj, const uType* type)
{
    if (obj)
    {
        uType* objType = obj->__obj_type;

        switch (type->TypeType)
        {
            case uTypeTypeInterface:
                do
                {
                    for (int i = 0; objType->Implements[i]; i++)
                        if (objType->Implements[i] == type)
                            return true;

                    objType = objType->Extends;
                }
                while (objType);

                break;

            default:
                do
                {
                    if (objType == type)
                        return true;

                    objType = objType->Extends;
                }
                while (objType);

                break;
        }
    }

    return false;
}

uInterfaceType* uAllocInterfaceType(const char* typeName)
{
    return (uInterfaceType*)uAllocType(sizeof(uInterfaceType), uTypeTypeInterface, typeName, sizeof(uObject*), uStatic__ObjectType);
}

void* uGetInterfacePtr(const uObject* obj, const uInterfaceType* type)
{
    uType* objType = obj->__obj_type;

    do
    {
        for (int i = 0; objType->Implements[i]; i++)
            if (objType->Implements[i] == type)
                return (void*)((uByte*)objType + objType->InterfaceOffsets[i]);

        objType = objType->Extends;
    }
    while (objType);

    uFatalError(XLI_FUNCTION);
}

void uReverseBytes(uByte* ptr, size_t size)
{
    uByte tmp;

    switch (size)
    {
    case 2:
        tmp = ptr[0];
        ptr[0] = ptr[1];
        ptr[1] = tmp;
        break;

    case 4:
        tmp = ptr[0];
        ptr[0] = ptr[3];
        ptr[3] = tmp;
        tmp = ptr[1];
        ptr[1] = ptr[2];
        ptr[2] = tmp;
        break;

    case 8:
        tmp = ptr[0];
        ptr[0] = ptr[7];
        ptr[7] = tmp;
        tmp = ptr[1];
        ptr[1] = ptr[6];
        ptr[6] = tmp;
        tmp = ptr[2];
        ptr[2] = ptr[5];
        ptr[5] = tmp;
        tmp = ptr[3];
        ptr[3] = ptr[4];
        ptr[4] = tmp;
        break;

    default:
        uFatalError(XLI_FUNCTION);
    }
}
