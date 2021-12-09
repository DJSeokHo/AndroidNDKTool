package com.swein.androidndktool.examples.basic

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.swein.androidndktool.databinding.ActivityBasicExampleBinding
import com.swein.androidndktool.examples.basic.nativemanager.basic.BasicNative
import com.swein.androidndktool.examples.basic.nativemanager.people.PeopleNative

/**
 * 这是静态注册的基础例子
 */
class BasicExampleActivity : AppCompatActivity() {

    private lateinit var binding: ActivityBasicExampleBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityBasicExampleBinding.inflate(layoutInflater)
        setContentView(binding.root)

        // Example of a call to a native method
        binding.textView1.text = BasicNative.stringFromJNI()
        binding.textView2.text = PeopleNative.getString()

    }
}