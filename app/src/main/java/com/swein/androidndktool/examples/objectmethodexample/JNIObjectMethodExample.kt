package com.swein.androidndktool.examples.objectmethodexample

object JNIObjectMethodExample {

    init {
        System.loadLibrary("object_method-lib")
    }

    external fun testInstanceMethod(testObject: TestObject)
}