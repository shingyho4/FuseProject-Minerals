// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Targets\CPlusPlus\Source\Uno\Uno.h'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __UNO_H__
#define __UNO_H__

#include <cstring>
#include <cstddef>
#include <cstdlib>
#include <exception>
#include <Xli/Config.h>

// Debugging
//#define U_DEBUG_MEM 3 // 1..3
//#define U_DEBUG_UNSAFE

#ifdef XLI_DEBUG
# define U_DEBUG_UNSAFE
#endif

// Workarounds
#define __value ___value
#define register ___register
#undef __callback

// Constants
#ifndef DBL_MAX
# define DBL_MAX 1.7976931348623157E+308
#endif

const double DBL_INF = DBL_MAX + DBL_MAX;
const double DBL_NAN = DBL_INF - DBL_INF;
const float FLT_INF = (float)DBL_INF;
const float FLT_NAN = (float)DBL_NAN;

// Forward declarations
struct uStatic;
struct uString;
struct uType;
struct uWeakObject;
struct uArrayType;
struct uClassType;
struct uValueType;
struct uInterfaceType;
struct uFunction;

/**
    \addtogroup Init
    @{
*/
class uRuntime
{
    uRuntime(const uRuntime& copy);
    uRuntime& operator =(const uRuntime& copy);

public:
    uRuntime();
    ~uRuntime();
};

XLI_NORETURN void uFatalError(const char* msg);

void uEnterCritical();
bool uEnterCriticalIfNull(void* addr);
void uExitCritical();
/** @} */

/**
    \addtogroup ObjectModel
    @{
*/
typedef unsigned char uByte;
typedef signed char uSByte;
typedef short uShort;
typedef unsigned short uUShort;
typedef unsigned int uUInt;
typedef long long uLong;
typedef unsigned long long uULong;

#ifdef WIN32
typedef wchar_t uChar;
#else
typedef uUShort uChar;
#endif

struct uObject
{
    uType* __obj_type;
    uWeakObject* __obj_weak;
    int __obj_retains;

#ifdef U_DEBUG_MEM
    size_t __obj_alloc_size;
    int __obj_id;
#endif

    uType* GetType();
    int GetHashCode();
    bool Equals(uObject* obj);
    uString* ToString();
};

enum uTypeType
{
    uTypeTypeClass,
    uTypeTypeValue,
    uTypeTypeInterface,
    uTypeTypeArray,
    uTypeTypeDelegate,
    uTypeTypeVoid,
};

struct uType : uObject
{
    size_t TypeSize;
    uTypeType TypeType;
    const char* TypeName;
    size_t ValueSize;

    uClassType* Extends;
    uInterfaceType** Implements;
    uArrayType* ArrayType;






    int StrongRefCount;
    int WeakRefCount;
    size_t* StrongRefOffsets;
    size_t* WeakRefOffsets;
    size_t* InterfaceOffsets;

#ifdef U_DEBUG_MEM
    const char** StrongRefNames;
    const char** WeakRefNames;
    int ObjectCount;
#endif

    

    void(*__fp_Finalize)(uObject*);
    int(*__fp_GetHashCode)(uObject*);
    bool(*__fp_Equals)(uObject*, uObject*);
    uString*(*__fp_ToString)(uObject*);
};

uClassType* uObject__typeof();
uClassType* uType__typeof();
uType* uVoid__typeof();

inline uType* uObject::GetType() { return __obj_type; }
inline int uObject::GetHashCode() { return (*__obj_type->__fp_GetHashCode)(this); }
inline bool uObject::Equals(uObject* obj) { return (*__obj_type->__fp_Equals)(this, obj); }
inline uString* uObject::ToString() { return (*__obj_type->__fp_ToString)(this); }
/** @} */

/**
    \addtogroup Memory
    @{
*/
class uAutoReleasePool
{
    int _handle;
    uAutoReleasePool(const uAutoReleasePool& copy);
    uAutoReleasePool& operator = (const uAutoReleasePool& copy);

public:
    uAutoReleasePool();
    ~uAutoReleasePool();
};

void uRetainObject(uObject* obj);
void uReleaseObject(uObject* obj);
void uAutoReleaseObject(uObject* obj);

struct uWeakStateIntercept
{
    enum Event { OnRelease = 0, OnLoad = 1 };

    //  Callback is called on two occasions, both times while holding the
    //  internal uWeakObject's mutex:
    //
    //  1.  Called from uReleaseObject, with Event::OnRelease, when the object's
    //      reference count reaches zero.
    //
    //      Returning true from the callback at this point allows deletion to
    //      proceed normally.
    //
    //      Returning false defers object deletion, at which point, the object
    //      is considered a Zombie. Weak references may bring a Zombie object
    //      back to life (see point 2, below).
    //
    //      NOTE: If the object's reference count reaches zero while it is
    //      considered a Zombie, object deletion proceeds without further
    //      notice.
    //
    //
    //  2.  Called from uLoadWeakObject, with Event::OnLoad, when attempting to
    //      obtain strong reference to a Zombie object (see point 1).
    //
    //      If the callback returns true, the object is brought back to life and
    //      no longer considered a Zombie. Namely, the next time the reference
    //      count reaches zero the callback will be invoked again, per point 1.
    //
    //      Returning false from the callback signals that object deletion is
    //      pending; uLoadWeakObject will return NULL.
    //
    //
    //  For a given object, the callback will be invoked at least once with
    //  Event::OnRelease, before object deletion takes place. Any subsequent
    //  calls with Event::OnRelease will be preceded by exacly one call with
    //  Event::OnLoad as the first argument.

    typedef bool (*Callback)(Event, uObject *);

    static void SetCallback(uWeakObject* obj, Callback callback);
};

void uStoreWeakObject(uWeakObject** addr, uObject* obj);
uObject* uLoadWeakObject(uWeakObject* ptr);

uObject*** uGetGlobalStrongRefs();
uWeakObject*** uGetGlobalWeakRefs();

#ifdef U_DEBUG_MEM
const char** uGetGlobalStrongNames();
const char** uGetGlobalWeakNames();
void uDumpAllStrongRefs(const char* filename);
#endif

template <typename T> struct uStrong;
template <typename T> struct uWeak;

template <typename T> struct uStaticStrong
{
    uObject* _obj;

    uStaticStrong<T>& operator =(T obj)
    {
        uAutoReleaseObject(_obj);
        uRetainObject(_obj = (uObject*)obj);
        return *this;
    }

    uStaticStrong<T>& operator =(const uStaticStrong<T>& copy) { return *this = (T)copy._obj; }
    uStaticStrong<T>& operator =(const uStrong<T>& copy) { return *this = (T)copy._obj; }
    uStaticStrong<T>& operator =(const uWeak<T>& copy) { return *this = (T)uLoadWeakObject(copy._obj); }

    operator T() { return (T)_obj; }
    T operator ->() { return (T)_obj; }
};

template <typename T> struct uStrong
{
    uObject* _obj;

    uStrong() { _obj = NULL; }
    uStrong(const uStrong& copy) { uRetainObject(_obj = copy._obj); }
    ~uStrong() { uReleaseObject(_obj); }

    uStrong<T>& operator =(T obj)
    {
        uAutoReleaseObject(_obj);
        uRetainObject(_obj = (uObject*)obj);
        return *this;
    }

    uStrong<T>& operator =(const uStaticStrong<T>& copy) { return *this = (T)copy._obj; }
    uStrong<T>& operator =(const uStrong<T>& copy) { return *this = (T)copy._obj; }
    uStrong<T>& operator =(const uWeak<T>& copy) { return *this = (T)uLoadWeakObject(copy._obj); }

    operator T() { return (T)_obj; }
    T operator ->() { return (T)_obj; }
};

template <typename T> struct uWeak
{
    uWeakObject* _obj;

    uWeak() { _obj = NULL; }
    ~uWeak() { uStoreWeakObject(&_obj, NULL); }

    uWeak<T>& operator =(T obj)
    {
        uStoreWeakObject(&_obj, (uObject*)obj);
        return *this;
    }

    uWeak<T>& operator =(const uStaticStrong<T>& copy) { return *this = (T)copy._obj; }
    uWeak<T>& operator =(const uStrong<T>& copy) { return *this = (T)copy._obj; }
    uWeak<T>& operator =(const uWeak<T>& copy) { _obj = copy._obj; return *this; }

    operator T() { return (T)uLoadWeakObject(_obj); }
    T operator ->() { return (T)uLoadWeakObject(_obj); }
};
/** @} */

/**
    \addtogroup Exceptions
    @{
*/
namespace app { namespace Uno { struct Exception; } }

class uThrowable : public std::exception
{
    uThrowable& operator = (const uThrowable& copy);

public:
    ::app::Uno::Exception* Exception;
    const char* Function;
    int Line;

    uThrowable(::app::Uno::Exception* exception, const char* func, int line);
    uThrowable(const uThrowable& copy);
    virtual ~uThrowable() XLI_NOEXCEPT;
    virtual const char* what() const XLI_NOEXCEPT;

    static XLI_NORETURN void ThrowNullReference(const char* file, int line);
    static XLI_NORETURN void ThrowInvalidCast(const char* file, int line);
    static XLI_NORETURN void ThrowIndexOutOfRange(const char* file, int line);
};

#define U_THROW(exception) throw ::uThrowable((exception), XLI_FUNCTION, XLI_LINE)
/** @} */

/**
    \addtogroup ReferenceTypes
    @{
*/
struct uClassType : uType
{
};

uClassType* uAllocClassType(size_t typeSize, const char* typeName, uClassType* baseType = NULL, int interfaceCount = 0, int strongRefCount = 0, int weakRefCount = 0);
uObject* uAllocObject(size_t objSize, uType* objType);

bool uIs(const uObject* obj, const uType* type);

template <typename T>
T uAs(uObject* obj, uType* type)
{
    return uIs(obj, type) ? (T)obj : NULL;
}

template <typename T>
T uCast(uObject* obj, uType* type)
{
    if (obj && !uIs(obj, type))
        uThrowable::ThrowInvalidCast(XLI_FUNCTION, XLI_LINE);

    return (T)obj;
}

template <typename T>
T uPtr(T ptr)
{
    if (!ptr)
        uThrowable::ThrowNullReference(XLI_FUNCTION, XLI_LINE);

    return ptr;
}
/** @} */

/**
    \addtogroup ValueTypes
    @{
*/
struct uValueType : uType
{
    int(*__fp_GetHashCode_value)(void*);
    bool(*__fp_Equals_value)(void*, uObject*);
    uString*(*__fp_ToString_value)(void*);
};

uValueType* uAllocValueType(size_t typeSize, const char* typeName, size_t valueSize, int interfaceCount = 0, int strongRefCount = 0, int weakRefCount = 0);
uObject* uBoxValue(uValueType* valueType, const void* valueData);

void uCopyValue(void* addr, uValueType* type, const void* valueData);

template <typename T>
uObject* uBox(uValueType* valueType, const T& value)
{
#ifdef U_DEBUG_UNSAFE
    if (!valueType || valueType->ValueSize != sizeof(T))
        uFatalError(XLI_FUNCTION);
#endif
    return uBoxValue(valueType, &value);
}

template <typename T>
T uUnbox(uObject* obj)
{
#ifdef U_DEBUG_UNSAFE
    if (!obj || obj->__obj_type->ValueSize != sizeof(T))
        uFatalError(XLI_FUNCTION);
#endif
    return *(const T*)((const uByte*)obj + sizeof(uObject));
}
/** @} */

/**
    \addtogroup Interfaces
    @{
*/
struct uInterfaceType : uType
{
};

uInterfaceType* uAllocInterfaceType(const char* typeName);
void* uGetInterfacePtr(const uObject* obj, const uInterfaceType* iface);
/** @} */

/**
    \addtogroup Arrays
    @{
*/
struct uArrayType : uType
{
    uType* ElementType;
};

struct uArray : uObject
{
    void* _ptr;
    int _len;

    int Length() { return _len; }
    void* Ptr() { return _ptr; }

    template <typename T> const T& Item(int index) const {
        if (index < 0 || index >= _len)
            uThrowable::ThrowIndexOutOfRange(XLI_FUNCTION, XLI_LINE);
        return ((const T*)_ptr)[index];
    }
    template <typename T> T& Item(int index) {
        if (index < 0 || index >= _len)
            uThrowable::ThrowIndexOutOfRange(XLI_FUNCTION, XLI_LINE);
        return ((T*)_ptr)[index];
    }
    template <typename T> uStrong<T>& ItemStrong(int index) {
        if (index < 0 || index >= _len)
            uThrowable::ThrowIndexOutOfRange(XLI_FUNCTION, XLI_LINE);
        return ((uStrong<T>*)_ptr)[index];
    }
};

uArrayType* uGetArrayType(uType* elementType);
uArray* uNewArray(uType* elementType, int length, const void* optionalData = NULL);

void uCopyArray(const uArray* srcArray, int srcIndex, uArray* dstArray, int dstIndex, int length);
/** @} */

/**
    \addtogroup Strings
    @{
*/
struct uString : uObject
{
    uChar* _ptr;
    int _len;

    int Length() const { return _len; }
    uChar* Ptr() { return _ptr; }

    const uChar& Item(int index) const {
        if (index < 0 || index >= _len)
            uThrowable::ThrowIndexOutOfRange(XLI_FUNCTION, XLI_LINE);
        return _ptr[index];
    }
};

uString* uAllocString(int length);
uString* uNewStringAnsi(const char* cstr, int length);
uString* uNewStringAnsi(const char* cstr);
uString* uNewStringUtf8(const char* mutf8, int length);
uString* uNewStringUtf8(const char* mutf8);
uString* uNewStringFromArray(const uArray* array);
uString* uGetConstString(const char* mutf8);

bool uCompareStrings(uString* a, uString* b);

const char* uStringToCStr(const uString* str);
void uFreeCStr(const char* cstr);
/** @} */

/**
    \addtogroup Delegates
    @{
*/
struct uDelegateType : uType
{
};

struct uDelegate : uObject
{
    uStrong<uDelegate*> _prev;
    const void* _func;
    uObject* _obj;
    size_t _offset;

#define U_INVOKE_DELEGATE(FUNC_TYPE, ...) (_func ? \
    ((FUNC_TYPE)_func)((uByte*)_offset + (size_t)__VA_ARGS__) : \
    ((FUNC_TYPE)*(uByte**)((uByte*)_obj->__obj_type + _offset))(__VA_ARGS__))

    void InvokeVoid()
    {
        if (_prev) _prev->InvokeVoid();
        U_INVOKE_DELEGATE(void(*)(void*), _obj);
    }

    template <typename T0>
    void InvokeVoid(T0 arg0)
    {
        if (_prev) _prev->InvokeVoid<T0>(arg0);
        U_INVOKE_DELEGATE(void(*)(void*, T0), _obj, arg0);
    }

    template <typename T0, typename T1>
    void InvokeVoid(T0 arg0, T1 arg1)
    {
        if (_prev) _prev->InvokeVoid<T0, T1>(arg0, arg1);
        U_INVOKE_DELEGATE(void(*)(void*, T0, T1), _obj, arg0, arg1);
    }

    template <typename T0, typename T1, typename T2>
    void InvokeVoid(T0 arg0, T1 arg1, T2 arg2)
    {
        if (_prev) _prev->InvokeVoid<T0, T1, T2>(arg0, arg1, arg2);
        U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2), _obj, arg0, arg1, arg2);
    }

    template <typename T0, typename T1, typename T2, typename T3>
    void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3)
    {
        if (_prev) _prev->InvokeVoid<T0, T1, T2, T3>(arg0, arg1, arg2, arg3);
        U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3), _obj, arg0, arg1, arg2, arg3);
    }

    template <typename T0, typename T1, typename T2, typename T3, typename T4>
    void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
    {
        if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4>(arg0, arg1, arg2, arg3, arg4);
        U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4), _obj, arg0, arg1, arg2, arg3, arg4);
    }

    template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
    void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
    {
        if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5>(arg0, arg1, arg3, arg4, arg5);
        U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5), _obj, arg0, arg1, arg2, arg3, arg4, arg5);
    }

    template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
    void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6)
    {
        if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6>(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
        U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
    void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7)
    {
        if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6, T7>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
        U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
    void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8)
    {
        if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6, T7, T8>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
        U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
    void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9)
    {
        if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
        U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
    void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10)
    {
        if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
        U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
    void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11)
    {
        if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
        U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
    void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12)
    {
        if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
        U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    }

    template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
    void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13)
    {
        if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
        U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
    void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14)
    {
        if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
        U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
    }

    template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
    void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14, T15 arg15)
    {
        if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
        U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
    }

    template <typename RT>
    RT Invoke()
    {
        if (_prev) _prev->Invoke<RT>();
        return U_INVOKE_DELEGATE(RT(*)(void*), _obj);
    }

    template <typename RT, typename T0>
    RT Invoke(T0 arg0)
    {
        if (_prev) _prev->Invoke<RT, T0>(arg0);
        return U_INVOKE_DELEGATE(RT(*)(void*, T0), _obj, arg0);
    }

    template <typename RT, typename T0, typename T1>
    RT Invoke(T0 arg0, T1 arg1)
    {
        if (_prev) _prev->Invoke<RT, T0, T1>(arg0, arg1);
        return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1), _obj, arg0, arg1);
    }

    template <typename RT, typename T0, typename T1, typename T2>
    RT Invoke(T0 arg0, T1 arg1, T2 arg2)
    {
        if (_prev) _prev->Invoke<RT, T0, T1, T2>(arg0, arg1, arg2);
        return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2), _obj, arg0, arg1, arg2);
    }

    template <typename RT, typename T0, typename T1, typename T2, typename T3>
    RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3)
    {
        if (_prev) _prev->Invoke<RT, T0, T1, T2, T3>(arg0, arg1, arg2, arg3);
        return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3), _obj, arg0, arg1, arg2, arg3);
    }

    template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4>
    RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
    {
        if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4>(arg0, arg1, arg2, arg3, arg4);
        return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4), _obj, arg0, arg1, arg2, arg3, arg4);
    }

    template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
    RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
    {
        if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5>(arg0, arg1, arg2, arg3, arg4, arg5);
        return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5), _obj, arg0, arg1, arg2, arg3, arg4, arg5);
    }

    template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
    RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6)
    {
        if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6>(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
        return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
    RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7)
    {
        if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6, T7>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
        return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
    RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8)
    {
        if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
        return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
    RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9)
    {
        if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
        return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
    RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10)
    {
        if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
        return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
    RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11)
    {
        if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
        return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
    RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12)
    {
        if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
        return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    }

    template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
    RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13)
    {
        if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
        return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
    RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14)
    {
        if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
        return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
    }

    template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
    RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14, T15 arg15)
    {
        if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
        return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
    }

#undef U_INVOKE_DELEGATE
};

uDelegateType* uAllocDelegateType(const char* typeName);
uDelegate* uNewDelegateNonVirt(uDelegateType* delegateType, const void* funcPtr, uObject* objInst = NULL, size_t objOffset = 0);
uDelegate* uNewDelegateVirt(uDelegateType* delegateType, uObject* objInst, size_t funcOffset);
uDelegate* uNewDelegateInterface(uDelegateType* delegateType, uObject* objInst, uInterfaceType* interfaceType, size_t funcOffset);
/** @} */

/**
    \addtogroup Generics
    @{
*/
template <typename T>
T uDefault()
{
    T result;
    memset(&result, 0, sizeof(T));
    return result;
}

template <typename T>
bool uGenericEquals(const T& a, const T& b)
{
    return memcmp(&a, &b, sizeof(T)) == 0;
}

template <typename T>
bool uGenericEquals(T* a, T* b)
{
    return a == b || (a && b && ((uObject*)a)->Equals((uObject*)b));
}
/** @} */

/**
    \addtogroup Buffers
    @{
*/
#define U_BUFFER_PTR(buffer) ((::uByte*)(buffer)->_data->_ptr + (buffer)->_offset)
#define U_BUFFER_SIZE(buffer) (buffer)->_sizeInBytes

void uReverseBytes(uByte* ptr, size_t size);

template <typename T>
void uReverseBytes(T& ref)
{
    uReverseBytes((uByte*)&ref, sizeof(T));
}

template <typename T>
T uReadBytes(uByte* ptr, bool littleEndian)
{
    T result;
    memcpy(&result, ptr, sizeof(T));

    if (!littleEndian)
        ::uReverseBytes(result);

    return result;
}

template <typename T>
void uWriteBytes(uByte* ptr, T value, bool littleEndian)
{
    if (!littleEndian)
        ::uReverseBytes(value);

    memcpy(ptr, &value, sizeof(T));
}
/** @} */

#endif
