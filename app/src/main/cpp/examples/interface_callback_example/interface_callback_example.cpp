#include <jni.h>
#include <i_log.h>
#include <pthread.h>

//
// Created by 浩 SHI on 2021/12/15.
//

static JavaVM* jvm = nullptr;

static jclass thread_class;
static jmethodID thread_method;
static jobject thread_object;

JNIEXPORT int JNICALL
JNI_OnLoad(JavaVM* vm, void* reserved) {
    LOGD("JNI_OnLoad");
    JNIEnv* env;
    if (vm->GetEnv(reinterpret_cast<void **>(&env), JNI_VERSION_1_6) != JNI_OK) {
        return JNI_FALSE;
    }

    jvm = vm;

    LOGD("ndk jni on load");
    return JNI_VERSION_1_6;
}


extern "C"
JNIEXPORT void JNICALL
Java_com_swein_androidndktool_examples_interfacecallbackexample_JNIInterfaceCallbackExample_cppCallback(
        JNIEnv *env, jobject thiz, jobject interfacei) {

    LOGD("cppCallback");
    jclass callback_class = env->GetObjectClass(interfacei);
    jmethodID callback_method = env->GetMethodID(callback_class, "callback", "()V");
    env->CallVoidMethod(interfacei, callback_method);
}


void *thread_callback(void *) {

    // env 不能跨线程，不能以参数形式传递，也不能以全局变量的形式，所以我们定义了jvm

    JavaVM* vm = jvm;
    JNIEnv* env = nullptr;

    // 这样就可以实现在线程中拿到env
    if (vm->AttachCurrentThread(&env, nullptr) == 0) {

        env->CallVoidMethod(thread_object, thread_method);

        vm->DetachCurrentThread();
    }

    return 0;
}

extern "C"
JNIEXPORT void JNICALL
Java_com_swein_androidndktool_examples_interfacecallbackexample_JNIInterfaceCallbackExample_cppThreadCallback(
        JNIEnv *env, jobject thiz, jobject interfacei) {

    LOGD("cppThreadCallback");

    thread_object = env->NewGlobalRef(interfacei);
    thread_class = env->GetObjectClass(thread_object);
    thread_method = env->GetMethodID(thread_class, "callback", "()V");

    pthread_t handle;
    pthread_create(&handle, nullptr, thread_callback, nullptr);
}

