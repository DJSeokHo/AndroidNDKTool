#include <jni.h>
#include <i_log.h>

//
// Created by 浩 SHI on 2021/12/16.
//


extern "C"
JNIEXPORT jstring JNICALL
Java_com_swein_androidndktool_examples_referenceexample_JNIReference_errorCacheLocalReference(
        JNIEnv *env, jobject thiz) {

    // 局部引用
    jclass localRefs = env->FindClass("java/lang/String");

    jmethodID mid = env->GetMethodID(localRefs, "<init>", "(Ljava/lang/String;)V");

    jstring str = env->NewStringUTF("string~~");

//    for (int i = 0; i < 1000; i++) {
//        // 局部引用太多会崩溃，需要手动释放
//        jclass cls = env->FindClass("java/lang/String");
//        env->DeleteLocalRef(cls);
//    }

    return static_cast<jstring>(env->NewObject(localRefs, mid, str));

}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_swein_androidndktool_examples_referenceexample_JNIReference_cacheWithGlobalReference(
        JNIEnv *env, jobject thiz) {

    // 全局引用， 程序退出时会保留，所以可以用来做一些缓存的功能。这里说的程序退出，
    // 是指在java上层，点击一个按钮，调用这个函数执行一遍以后，该cpp就执行完毕退出了。
    // 那么下次再次点击按钮，再次调用这个函数执行一遍，那么就会读取cache
    static jclass string_class = nullptr;

    // 如果为空
    if (string_class == nullptr) {
        //先找到class
        jclass cls = env->FindClass("java/lang/String");

        // 创建一个全局引用，static 变量需要全局引用。
        string_class = static_cast<jclass>(env->NewGlobalRef(cls));

        // 释放掉这个class
        env->DeleteLocalRef(cls);
        LOGD("new object");
    }
    else {
        LOGD("use cached object");
    }

    jmethodID mid = env->GetMethodID(string_class, "<init>", "(Ljava/lang/String;)V");

    jstring str = env->NewStringUTF("string~~with cache");

    return static_cast<jstring>(env->NewObject(string_class, mid, str));

}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_swein_androidndktool_examples_referenceexample_JNIReference_useWeakGlobalReference(
        JNIEnv *env, jobject thiz) {


    static jclass string_class = nullptr;

    // 如果为空
    if (string_class == nullptr) {
        //先找到class
        jclass cls = env->FindClass("java/lang/String");

        // 创建一个全局引用，static 变量需要全局引用。
        string_class = static_cast<jclass>(env->NewWeakGlobalRef(cls));

        // 释放掉这个class
        env->DeleteLocalRef(cls);
        LOGD("new object");
    }
    else {
        LOGD("use cached object");
    }

    jboolean isGC = env->IsSameObject(string_class, nullptr);

    if (isGC) {
        LOGD("GC");
    }
    else {
        LOGD("Not GC");
    }

}