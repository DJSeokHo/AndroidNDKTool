package com.swein.androidndktool.examples.basic.nativemanager.basic

object BasicNative {

    init {
        // Used to load the 'androidndktool' library on application startup.
        System.loadLibrary("androidndktool")
    }

    /**
     * A native method that is implemented by the 'androidndktool' native library,
     * which is packaged with this application.
     * 静态注册
     */
    external fun stringFromJNI(): String
}