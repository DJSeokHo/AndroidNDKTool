package com.swein.androidndktool.examples.stringexample

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.swein.androidndktool.databinding.ActivityDynamicLoadExampleBinding
import com.swein.androidndktool.databinding.ActivityStringExampleBinding
import com.swein.androidndktool.framework.utility.debug.ILog

class StringExampleActivity : AppCompatActivity() {

    private lateinit var binding: ActivityStringExampleBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityStringExampleBinding.inflate(layoutInflater)
        setContentView(binding.root)

        ILog.debug("StringExampleActivity", JNIStringExample.callNativeString("kotlin string"))
        JNIStringExample.stringMethod("kotlin string")
    }
}