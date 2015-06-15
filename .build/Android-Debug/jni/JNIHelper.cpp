#include <stdarg.h>
#include "JniHelper.h"
#include "AndroidCommon.h"
#include <XliPlatform/PlatformSpecific/Android.h>

JavaVM* JniHelper::VM;
int JniHelper::shim_loaded;
jobject JniHelper::ActivityObject;
jclass JniHelper::ShimClass;
pthread_key_t JniHelper::JniThreadKey;
jobject JniHelper::_assetManager;
jmethodID JniHelper::_getAssetManager;

void JniHelper::JniDestroyThread(void* value)
{
    LOGD("JNI: Detaching current thread");
    JNIEnv* env = (JNIEnv*)value;
    VM->DetachCurrentThread();
    pthread_setspecific(JniThreadKey, NULL);
}

void JniHelper::Init(JavaVM* vm, JNIEnv* env, jclass shimClass)
{
    VM = vm;
    if (pthread_key_create(&JniThreadKey, JniDestroyThread))
        LOGD("JNI ERROR: Unable to create pthread key"); // Not fatal

    ShimClass = reinterpret_cast<jclass>(env->NewGlobalRef(shimClass));
    pthread_setspecific(JniThreadKey, (void*)env);

    _getAssetManager = env->GetStaticMethodID(shimClass, "GetAssetManager", "()Landroid/content/res/AssetManager;");
    if (!_getAssetManager) XLI_THROW("Cannot cache mid for getAssetManager.");

    //set up xli legacy jni
    LOGD ("vvvvvvvvvvvvvvv");
    LOGD ("Load Legacy Jni");
    Xli::PlatformSpecific::Android::PreInit(vm, env, ShimClass);
    LOGD ("^^^^^^^^^^^^^^^");
}

JniHelper::JniHelper()
{
    int status_ = (int)VM->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6);
    if (status_ != JNI_OK)
    {
        status_ = (int)VM->AttachCurrentThread(&env, NULL);
        if (status_ != JNI_OK)
            XLI_THROW("JNI ERROR: Failed to attach current thread");
    }
    if (!pthread_getspecific(JniThreadKey))
    {
        pthread_setspecific(JniThreadKey, (void*)env);
    }

    if (ActivityObject==0)
    {
        // fetch from shim
        jmethodID getActivity = env->GetStaticMethodID(ShimClass, "GetActivity", "()Landroid/app/Activity;");
        if (!getActivity) XLI_THROW("Cannot cache mid for getActivity.");
        jobject _activity = env->CallStaticObjectMethod(ShimClass, getActivity);

        if (_activity==0)
        {
            XLI_THROW("JNI ERROR: Failed to grab activity object");
        }

        // cache it
        ActivityObject = reinterpret_cast<jclass>(env->NewGlobalRef(_activity));
    }
}

jclass JniHelper::GetShim()
{
    return ShimClass;
}

JavaVM* JniHelper::GetVM()
{
    return VM;
}

JNIEnv* JniHelper::GetEnv()
{
    return env;
}

JNIEnv* JniHelper::operator->()
{
    // TODO: Check jni exceptions
    return env;
}

jobject JniHelper::GetActivity()
{
    return ActivityObject;
}

AAssetManager* JniHelper::GetAssetManager()
{
    JniHelper jni;
    _assetManager = reinterpret_cast<jobject>(jni->NewGlobalRef(jni->CallStaticObjectMethod(ShimClass, _getAssetManager)));
    return AAssetManager_fromJava(jni.GetEnv(), _assetManager);
}

Xli::String JniHelper::GetString(jobject str)
{
    JniHelper jni;
    const char* utf8 = jni->GetStringUTFChars((jstring)str, NULL);
    Xli::String result = utf8;
    jni->ReleaseStringUTFChars((jstring)str, utf8);
    return result;
}

::uString* JniHelper::JavaToUnoString(jstring jstr)
{
    JniHelper jni;
    if (!jstr) { return NULL; }
    jobject str = jni->NewLocalRef(jstr);
    const jchar* raw =  jni->GetStringChars((jstring)str, NULL);
    int len = jni->GetStringLength((jstring)str);
    int size = len * sizeof(jchar);
    uString* result = ::uAllocString(len);
    memcpy(result->_ptr, (void*)raw, size);
    jni->ReleaseStringChars((jstring)str, raw);
    jni->DeleteLocalRef(str);
    return result;
}

jstring JniHelper::UnoToJavaString(::uString* ustr)
{
    if (!ustr)
        return NULL;

    JniHelper jni;
    return (jni->NewString(ustr->_ptr, ustr->_len));
}

float JniHelper::GetDensity()
{
    jclass shimClass = JniHelper::GetShim();
    WITH_STATIC_JAVA_METHOD(getDisplayMetrics, shimClass, "GetDisplayMetrics", "()Landroid/util/DisplayMetrics;");
    static float density = 0.0;
    if (density==0.0)
    {
        JniHelper jni;
        jclass metricsClass = jni->FindClass("android/util/DisplayMetrics");
        jfieldID jd = jni->GetFieldID( metricsClass, "density", "F" );
        jobject result = jni->CallStaticObjectMethod(shimClass, getDisplayMetrics);
        jfloat d = (jfloat)jni->GetFloatField(result, jd);
        jni->DeleteLocalRef(result);
        jni->DeleteLocalRef(metricsClass);
        density = (float)d;
    }
    return density;
}

jobject JniHelper::EnsureGlobalRef(jobject x)
{
    // JNIInvalidRefType = 0,
    // JNILocalRefType = 1,
    // JNIGlobalRefType = 2,
    // JNIWeakGlobalRefType = 3
    JniHelper jni;
    if (jni->GetObjectRefType(x)<2) {
        x = jni->NewGlobalRef(x);
    }
    return x;
}
