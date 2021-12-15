package com.swein.androidndktool.examples.objectmethodexample

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.swein.androidndktool.R
import com.swein.androidndktool.examples.objectfieldexample.JNIObjectFieldExample

class ObjectMethodExampleActivity : AppCompatActivity() {


    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_object_method_example)

        val testObject = TestObject()

        JNIObjectMethodExample.testInstanceMethod(testObject)
    }
}