#include <jni.h>
#include <string>

using namespace std;

extern "C"
JNIEXPORT jstring JNICALL
Java_com_swein_androidndktool_examples_basic_nativemanager_basic_BasicNative_stringFromJNI(
        JNIEnv *env, jobject thiz) {

    string hello = "Hello World, NDK";
    return env->NewStringUTF(hello.c_str());

}