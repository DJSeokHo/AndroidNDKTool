//
// Created by 浩 SHI on 2021/12/08.
//

#include "people.h"
#include <jni.h>

string People::getString() {
    return "Hello World, from People";
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_swein_androidndktool_examples_basic_nativemanager_people_PeopleNative_getString(
        JNIEnv *env, jobject thiz) {
    People people;

    return env->NewStringUTF(people.getString().c_str());
}