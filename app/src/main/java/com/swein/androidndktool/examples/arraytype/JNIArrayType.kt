package com.swein.androidndktool.examples.arraytype

object JNIArrayType {

    // Reference type, array example

    init {

        System.loadLibrary("array_type-lib")

    }

    external fun callNativeStringArray(strArray: Array<String>): String
}