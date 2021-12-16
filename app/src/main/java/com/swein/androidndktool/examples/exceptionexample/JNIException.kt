package com.swein.androidndktool.examples.exceptionexample

object JNIException {

    init {
        System.loadLibrary("exception_example-lib")
    }

    // 在cpp 中调用 operation产生异常，然后在cpp中处理异常
    external fun nativeInvokeJavaException()

    // 在cpp中产生的异常，上传给java层处理
    @Throws(Exception::class)
    external fun nativeThrowException()

    fun operation(): Int {
        return 2 / 0
    }
}