package com.swein.androidndktool.examples.create_object_in_cpp_and_return_it_to_app_end

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.swein.androidndktool.R
import com.swein.androidndktool.framework.utility.debug.ILog
import java.lang.ref.WeakReference

class CreateObjectInCppAndReturnItToAppActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_create_object_in_cpp_and_return_it_to_app)

        ILog.debug("???", "${JNICreateObject.allocObjectConstructor().getNameString()}")
        ILog.debug("???", "${JNICreateObject.invokeObjectConstructor().getNameString()}")
    }
}