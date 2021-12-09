//
// Created by 浩 SHI on 2021/12/09.
//
#include <jni.h>
#include <i_log.h> // include_directories(${CMAKE_SOURCE_DIR}/examples/framework/utility/debug/)

// 安卓端所对应的类名(包含完全地址)
#define JAVA_CLASS "com/swein/androidndktool/examples/dynamicload/JNIDynamicLoad"


jstring getNativeString(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF("굿굿굿");
}

jint sum(JNIEnv* env, jobject thiz, int x, int y) {
    return x + y;
}

int registerNativeMethods(
        JNIEnv* env,
        const char* name, // 类名
        const JNINativeMethod* methods,
        jint nMethods
        ) {

    jclass jcls;
    jcls = env->FindClass(name);
    if (jcls == nullptr) {

        return JNI_FALSE;
    }

    if (env->RegisterNatives(jcls, methods, nMethods) < 0) {

        return JNI_FALSE;
    }

    return JNI_TRUE;

}

//这是静态方法，比较耗时。。
//extern "C"
//JNIEXPORT jstring JNICALL
//Java_com_swein_androidndktool_examples_dynamicload_JNIDynamicLoad_getNativeString(JNIEnv *env,
//                                                                                  jobject thiz) {
//}

static JNINativeMethod gMethods[] = {
        {"getNativeString", "()Ljava/lang/String;", (void *)getNativeString},
        {"sum", "(II)I", (void *)sum}
};

JNIEXPORT int JNICALL
JNI_OnLoad(JavaVM* vm, void* reserved) {
    LOGD("JNI_OnLoad");
    JNIEnv* env;
    if (vm->GetEnv(reinterpret_cast<void **>(&env), JNI_VERSION_1_6) != JNI_OK) {
        return JNI_FALSE;
    }

    registerNativeMethods(env, JAVA_CLASS, gMethods, 2);
    LOGD("ndk jni on load");
    return JNI_VERSION_1_6;
}

