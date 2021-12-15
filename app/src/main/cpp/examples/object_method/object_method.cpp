#include <jni.h>

//
// Created by 浩 SHI on 2021/12/14.
//

extern "C"
JNIEXPORT void JNICALL
Java_com_swein_androidndktool_examples_objectmethodexample_JNIObjectMethodExample_testInstanceMethod(
        JNIEnv *env, jobject thiz, jobject test_object) {

    jclass cls = env->GetObjectClass(test_object);
    jmethodID mid = env->GetMethodID(cls, "callInstanceMethod", "(I)V");
    jmethodID mid2 = env->GetMethodID(cls, "callInstanceMethod", "(II)V");
    jmethodID mid3 = env->GetMethodID(cls, "callInstanceMethod", "(Ljava/lang/String;)Ljava/lang/String;");
    jmethodID mid4 = env->GetMethodID(cls, "callInstanceMethod", "([Ljava/lang/String;I)Ljava/lang/String;");

    env->CallVoidMethod(test_object, mid, 2);
    env->CallVoidMethod(test_object, mid2, 1, 3);

    jstring str = env->NewStringUTF("jstring");
    env->CallObjectMethod(test_object, mid3, str);

    // 生成数组
    jclass str_class = env->FindClass("java/lang/String");
    int size = 5;
    jobjectArray str_array = env->NewObjectArray(size, str_class, nullptr);

    jstring str_item;
    for (int i = 0; i < size; i++) {

        str_item = env->NewStringUTF("string in cpp");
        env->SetObjectArrayElement(str_array, i, str_item);
    }
    env->CallObjectMethod(test_object, mid4, str_array, 5);


    // call method in companion object as static method
    jfieldID companion_fid = env->GetStaticFieldID(cls, "Companion", "Lcom/swein/androidndktool/examples/objectmethodexample/TestObject$Companion;");
    jobject companion_obj = env->GetStaticObjectField(cls, companion_fid);
    jclass companion_cls = env->GetObjectClass(companion_obj);
    jmethodID mid5 = env->GetMethodID(companion_cls, "callStaticMethod", "(Ljava/lang/String;)Ljava/lang/String;");
    jstring str1 = env->NewStringUTF("jstring~~~");
    env->CallObjectMethod(companion_obj, mid5, str1);
}