package com.swein.androidndktool

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.swein.androidndktool.databinding.ActivityMainBinding
import com.swein.androidndktool.examples.arraytype.ArrayTypeActivity
import com.swein.androidndktool.examples.basic.BasicExampleActivity
import com.swein.androidndktool.examples.create_object_in_cpp_and_return_it_to_app_end.CreateObjectInCppAndReturnItToAppActivity
import com.swein.androidndktool.examples.datatype.DataTypeExampleActivity
import com.swein.androidndktool.examples.dynamicload.DynamicLoadExampleActivity
import com.swein.androidndktool.examples.exceptionexample.ExceptionExampleActivity
import com.swein.androidndktool.examples.interfacecallbackexample.InterfaceCallbackExampleActivity
import com.swein.androidndktool.examples.objectfieldexample.ObjectFieldExampleActivity
import com.swein.androidndktool.examples.objectmethodexample.ObjectMethodExampleActivity
import com.swein.androidndktool.examples.referenceexample.ReferenceExampleActivity
import com.swein.androidndktool.examples.stringexample.StringExampleActivity

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

//        Intent(this, BasicExampleActivity::class.java).apply {
//            startActivity(this)
//        }

//        Intent(this, DynamicLoadExampleActivity::class.java).apply {
//            startActivity(this)
//        }

//        Intent(this, DataTypeExampleActivity::class.java).apply {
//            startActivity(this)
//        }

//        Intent(this, StringExampleActivity::class.java).apply {
//            startActivity(this)
//        }

//        Intent(this, ArrayTypeActivity::class.java).apply {
//            startActivity(this)
//        }

//        Intent(this, ObjectFieldExampleActivity::class.java).apply {
//            startActivity(this)
//        }

//        Intent(this, ObjectMethodExampleActivity::class.java).apply {
//            startActivity(this)
//        }

//        Intent(this, InterfaceCallbackExampleActivity::class.java).apply {
//            startActivity(this)
//        }

//        Intent(this, CreateObjectInCppAndReturnItToAppActivity::class.java).apply {
//            startActivity(this)
//        }

//        Intent(this, ReferenceExampleActivity::class.java).apply {
//            startActivity(this)
//        }

        Intent(this, ExceptionExampleActivity::class.java).apply {
            startActivity(this)
        }

    }
}