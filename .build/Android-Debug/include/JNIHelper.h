#pragma once
#include <jni.h>
#include <Xli.h>
#include <pthread.h>
#include <Uno/Uno.h>
#include <android/asset_manager.h>
#include <android/asset_manager_jni.h>

#define WITH_STATIC_JAVA_METHOD(HANDLEVAR,JCLASS,METHODNAMESTR,METHODSIGSTR) JniHelper __jni; static jmethodID HANDLEVAR; if (uEnterCriticalIfNull(&HANDLEVAR)) { HANDLEVAR = __jni->GetStaticMethodID(JCLASS, METHODNAMESTR, METHODSIGSTR); uExitCritical(); if (!HANDLEVAR) XLI_THROW("Cannot cache mid for " METHODNAMESTR); }
#define WITH_STATIC_JAVA_METHOD_USEJNI(HANDLEVAR,JCLASS,METHODNAMESTR,METHODSIGSTR) static jmethodID HANDLEVAR; if (uEnterCriticalIfNull(&HANDLEVAR)) { HANDLEVAR = __jni->GetStaticMethodID(JCLASS, METHODNAMESTR, METHODSIGSTR); uExitCritical(); if (!HANDLEVAR) XLI_THROW("Cannot cache mid for " METHODNAMESTR); }

class JniHelper
{
    JNIEnv* env;
    static JavaVM* VM;
    static int shim_loaded;
    static jobject ActivityObject;
    static jclass ShimClass;
    static pthread_key_t JniThreadKey;
    static jobject _assetManager;
    static jmethodID _getAssetManager;

    static void JniDestroyThread(void* value);

public:
    static void Init(JavaVM* vm, JNIEnv* env, jclass shim_class);
    JniHelper();
    static JavaVM* GetVM();
    static jclass GetShim();
    static jobject GetActivity();
    static AAssetManager* GetAssetManager();
    static Xli::String GetString(jobject jstr);

    static ::uString* JavaToUnoString(jstring jstr);
    static jstring UnoToJavaString(::uString* ustr);
    static float GetDensity();
    static jobject EnsureGlobalRef(jobject x);

    JNIEnv* GetEnv();
    JNIEnv* operator->();
};
