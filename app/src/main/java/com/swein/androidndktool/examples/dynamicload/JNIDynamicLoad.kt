package com.swein.androidndktool.examples.dynamicload

object JNIDynamicLoad {

    init {
        System.loadLibrary("dynamic-lib")
    }

    // 将动态注册这两个方法
    external fun sum(x: Int, y: Int): Int
    external fun getNativeString(): String
}