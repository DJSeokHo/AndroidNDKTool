package com.swein.androidndktool.examples.referenceexample

object JNIReference {

    init {
        System.loadLibrary("reference_example-lib")
    }

    external fun errorCacheLocalReference(): String
    external fun cacheWithGlobalReference(): String
    external fun useWeakGlobalReference(): String

}