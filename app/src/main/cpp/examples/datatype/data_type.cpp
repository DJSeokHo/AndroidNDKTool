#include <jni.h>
#include <cstring>
#include <i_log.h>
//
// Created by 浩 SHI on 2021/12/09.
//


extern "C"
JNIEXPORT jint JNICALL
Java_com_swein_androidndktool_examples_datatype_JNIDataType_callNativeInt(JNIEnv *env, jobject thiz,
                                                                          jint i) {
    LOGD("java int value is %d", i);

    jint c_i = i * 2;
    return c_i;
}
extern "C"
JNIEXPORT jbyte JNICALL
Java_com_swein_androidndktool_examples_datatype_JNIDataType_callNativeByte(JNIEnv *env,
                                                                           jobject thiz,
                                                                           jbyte byte) {
    LOGD("java byte value is %d", byte);

    jbyte c_byte = byte + (jbyte)10;
    return c_byte;
}
extern "C"
JNIEXPORT jchar JNICALL
Java_com_swein_androidndktool_examples_datatype_JNIDataType_callNativeChar(JNIEnv *env,
                                                                           jobject thiz,
                                                                           jchar c) {

    LOGD("java char value is %c", c);

    jchar c_char = c + (jchar)3;
    return c_char;
}
extern "C"
JNIEXPORT jshort JNICALL
Java_com_swein_androidndktool_examples_datatype_JNIDataType_callNativeShort(JNIEnv *env,
                                                                            jobject thiz,
                                                                            jshort s) {

    LOGD("java short value is %d", s);

    jshort c_short = s + (jshort)10;
    return c_short;
}
extern "C"
JNIEXPORT jlong JNICALL
Java_com_swein_androidndktool_examples_datatype_JNIDataType_callNativeLong(JNIEnv *env,
                                                                           jobject thiz,
                                                                           jlong l) {

    LOGD("java long value is %lld", l);

    jlong c_long = l + (jlong)10;
    return c_long;
}
extern "C"
JNIEXPORT jfloat JNICALL
Java_com_swein_androidndktool_examples_datatype_JNIDataType_callNativeFloat(JNIEnv *env,
                                                                            jobject thiz,
                                                                            jfloat f) {

    LOGD("java float value is %f", f);

    jfloat c_float = f + (jfloat)10.0;
    return c_float;
}
extern "C"
JNIEXPORT jdouble JNICALL
Java_com_swein_androidndktool_examples_datatype_JNIDataType_callNativeDouble(JNIEnv *env,
                                                                             jobject thiz,
                                                                             jdouble d) {

    LOGD("java double value is %f", d);

    jdouble c_double = d + 20.0;
    return c_double;
}
extern "C"
JNIEXPORT jboolean JNICALL
Java_com_swein_androidndktool_examples_datatype_JNIDataType_callNativeBoolean(JNIEnv *env,
                                                                              jobject thiz,
                                                                              jboolean boolean) {

    LOGD("java boolean value is %d", boolean);

    jboolean c_boolean = (jboolean)!boolean;
    return c_boolean;
}