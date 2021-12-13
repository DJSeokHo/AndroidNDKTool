package com.swein.androidndktool.examples.objectfieldexample

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.swein.androidndktool.R
import com.swein.androidndktool.framework.utility.debug.ILog

class ObjectFieldExampleActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_object_field_example)

        val animal = Animal()
        animal.name = "animal"

        JNIObjectFieldExample.accessInstanceField(animal)
        JNIObjectFieldExample.accessStaticField(animal)

        ILog.debug("ObjectFieldExampleActivity Instance", animal.getNameString())
        ILog.debug("ObjectFieldExampleActivity Static", "${Animal.getNumber()}")
    }
}