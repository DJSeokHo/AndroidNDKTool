#include <jni.h>

//
// Created by 浩 SHI on 2021/12/16.
//


extern "C"
JNIEXPORT void JNICALL
Java_com_swein_androidndktool_examples_exceptionexample_JNIException_nativeInvokeJavaException(
        JNIEnv *env, jobject thiz) {

    // 在cpp 中调用 operation产生异常，然后在cpp中处理异常

    jclass cls = env->FindClass("com/swein/androidndktool/examples/exceptionexample/JNIException");

    jmethodID mid = env->GetMethodID(cls, "operation", "()I");

    jmethodID mid2 = env->GetMethodID(cls, "<init>", "()V");
    jobject obj = env->NewObject(cls, mid2);

    env->CallIntMethod(obj, mid);

    // 获取异常，如果有的话
    jthrowable exception = env->ExceptionOccurred();

    if (exception) {
        // 如果有异常，打印异常信息，然后清除异常，使app不会崩掉
        env->ExceptionDescribe();
        env->ExceptionClear();
    }
}
extern "C"
JNIEXPORT void JNICALL
Java_com_swein_androidndktool_examples_exceptionexample_JNIException_nativeThrowException(
        JNIEnv *env, jobject thiz) {

    // 在cpp中产生的异常，上传给java层处理

    jclass cls = env->FindClass("java/lang/IllegalArgumentException");
    env->ThrowNew(cls, "cpp throw exception");

}