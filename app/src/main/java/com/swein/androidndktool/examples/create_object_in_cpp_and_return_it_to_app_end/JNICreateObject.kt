package com.swein.androidndktool.examples.create_object_in_cpp_and_return_it_to_app_end

object JNICreateObject {

    init {
        System.loadLibrary("create_object_in_cpp_and_return_it_to_app-lib")
    }

    // 两种方式实现在cpp创建java对象，并传递给kotlin层
    external fun allocObjectConstructor(): CreateByCPP
    external fun invokeObjectConstructor(): CreateByCPP

}