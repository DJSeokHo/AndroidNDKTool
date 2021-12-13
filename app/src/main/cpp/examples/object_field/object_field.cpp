#include <jni.h>

//
// Created by 浩 SHI on 2021/12/13.
//


extern "C"
JNIEXPORT void JNICALL
Java_com_swein_androidndktool_examples_objectfieldexample_JNIObjectFieldExample_accessStaticField(
        JNIEnv *env, jobject thiz, jobject animal) {

    jclass cls = env->GetObjectClass(animal);
    jfieldID fid = env->GetStaticFieldID(cls, "num", "I");

    int num = env->GetStaticIntField(cls, fid);

    env->SetStaticIntField(cls, fid, ++num);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_swein_androidndktool_examples_objectfieldexample_JNIObjectFieldExample_accessInstanceField(
        JNIEnv *env, jobject thiz, jobject animal) {

    jclass cls = env->GetObjectClass(animal);
    jfieldID fid = env->GetFieldID(cls, "name", "Ljava/lang/String;");
    jstring str= env->NewStringUTF("this is an new name");
    env->SetObjectField(animal, fid, str);
}