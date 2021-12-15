package com.swein.androidndktool.examples.interfacecallbackexample

interface ICallbackMethod {
    fun callback()
}

interface IThreadCallbackMethod {
    fun callback()
}

object JNIInterfaceCallbackExample {

    init {
        System.loadLibrary("interface_callback_example-lib")
    }

    external fun cppCallback(interfacei: ICallbackMethod)
    external fun cppThreadCallback(interfacei: IThreadCallbackMethod)
}