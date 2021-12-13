//
// Created by 浩 SHI on 2021/12/09.
//

#include <i_log.h>
#include <jni.h>


extern "C"
JNIEXPORT jstring JNICALL
Java_com_swein_androidndktool_examples_stringexample_JNIStringExample_callNativeString(JNIEnv *env,
                                                                                       jobject thiz,
                                                                                        jstring _str) {
    // java string is UTF Code
    const char* str = env->GetStringUTFChars(_str, JNI_FALSE);

    LOGD("java string is %s", str);

    // GetStringUTFChars will alloc memory space
    // So, need release it after use
    env->ReleaseStringUTFChars(_str, str);

    return env->NewStringUTF("this is C style string");
}

extern "C"
JNIEXPORT void JNICALL
Java_com_swein_androidndktool_examples_stringexample_JNIStringExample_stringMethod(JNIEnv *env,
                                                                                   jobject thiz,
                                                                                   jstring _str) {
    // java string is UTF Code
    const char* str = env->GetStringUTFChars(_str, JNI_FALSE);

    LOGD("java string is %s", str);

    int len = env->GetStringLength(_str);
    LOGD("len is %d", len);

    int len_utf = env->GetStringUTFLength(_str);
    LOGD("len_utf is %d", len_utf);

    char buf[128];
    env->GetStringUTFRegion(_str, 0, len - 2, buf);

    LOGD("Region is %s", buf);

    env->ReleaseStringUTFChars(_str, str);
}