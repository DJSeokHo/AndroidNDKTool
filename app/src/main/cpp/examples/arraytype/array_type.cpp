#include <jni.h>
#include <i_log.h>

//
// Created by 浩 SHI on 2021/12/09.
//



extern "C"
JNIEXPORT jstring JNICALL
Java_com_swein_androidndktool_examples_arraytype_JNIArrayType_callNativeStringArray(JNIEnv *env,
                                                                                    jobject thiz,
                                                                                    jobjectArray str_array) {

    int len = env->GetArrayLength(str_array);
    LOGD("length is %d", len);

    jobject obj = env->GetObjectArrayElement(str_array, 0);
    jstring j_str = static_cast<jstring>(obj);

    const char *c_str= env->GetStringUTFChars(j_str, JNI_FALSE);
    LOGD("c_str is %s", c_str);
    env->ReleaseStringUTFChars(j_str, c_str);

    return env->NewStringUTF(c_str);
}