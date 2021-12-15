#include <jni.h>

//
// Created by 浩 SHI on 2021/12/15.
//


extern "C"
JNIEXPORT jobject JNICALL
Java_com_swein_androidndktool_examples_create_1object_1in_1cpp_1and_1return_1it_1to_1app_1end_JNICreateObject_allocObjectConstructor(
        JNIEnv *env, jobject thiz) {

    jclass cls = env->FindClass("com/swein/androidndktool/examples/create_object_in_cpp_and_return_it_to_app_end/CreateByCPP");
    // <init> 代表构造函数
    jmethodID mid = env->GetMethodID(cls, "<init>", "(Ljava/lang/String;)V");

    jobject obj = env->AllocObject(cls);
    env->CallNonvirtualVoidMethod(obj, cls, mid, env->NewStringUTF("234234234"));

    return obj;
}
extern "C"
JNIEXPORT jobject JNICALL
Java_com_swein_androidndktool_examples_create_1object_1in_1cpp_1and_1return_1it_1to_1app_1end_JNICreateObject_invokeObjectConstructor(
        JNIEnv *env, jobject thiz) {

    jclass cls = env->FindClass("com/swein/androidndktool/examples/create_object_in_cpp_and_return_it_to_app_end/CreateByCPP");
    // <init> 代表构造函数
    jmethodID mid = env->GetMethodID(cls, "<init>", "(Ljava/lang/String;)V");
    jobject obj = env->NewObject(cls, mid, env->NewStringUTF("123123"));

    return obj;

}