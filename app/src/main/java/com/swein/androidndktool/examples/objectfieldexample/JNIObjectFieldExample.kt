package com.swein.androidndktool.examples.objectfieldexample

object JNIObjectFieldExample {

    init {
        System.loadLibrary("object_field-lib")
    }

    external fun accessInstanceField(animal: Animal)
    external fun accessStaticField(animal: Animal)
}