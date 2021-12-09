package com.swein.androidndktool.examples.stringexample

object JNIStringExample {

    init {
        System.loadLibrary("string_example-lib")
    }


    external fun callNativeString(str: String): String
    external fun stringMethod(str: String)

}