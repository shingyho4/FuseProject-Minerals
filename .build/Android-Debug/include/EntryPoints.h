#pragma once
#include "Xli.h"
#include "XliPlatform.h"
#include "XliPlatform/PlatformSpecific/Android.h"
#include <pthread.h>
#include "GLHelper.h"
#include "AndroidCommon.h"

class EntryPoints
{
private:
    static int key;
public:
    static pthread_cond_t cond;
    static pthread_mutex_t mutex;

    static int GetKey() { return key; }
    static void UpdateKey()  { key+=1; }
};

#define WAIT_ON_UNO_BEGIN() pthread_mutex_lock(&EntryPoints::mutex); int __key__ = EntryPoints::GetKey();
#define WAIT_ON_UNO_END() while (EntryPoints::GetKey()>__key__) { pthread_cond_wait(&EntryPoints::cond, &EntryPoints::mutex); } pthread_mutex_unlock(&EntryPoints::mutex);
#define RUN_ON_UNO_BEGIN() pthread_mutex_lock(&EntryPoints::mutex);
#define RUN_ON_UNO_END() EntryPoints::UpdateKey(); pthread_cond_broadcast(&EntryPoints::cond); pthread_mutex_unlock(&EntryPoints::mutex);
