package com.swein.androidndktool.examples.arraytype

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import com.swein.androidndktool.databinding.ActivityArrayTypeBinding
import com.swein.androidndktool.framework.utility.debug.ILog

class ArrayTypeActivity : AppCompatActivity() {

    private lateinit var binding: ActivityArrayTypeBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityArrayTypeBinding.inflate(layoutInflater)
        setContentView(binding.root)


        ILog.debug("ArrayTypeActivity",
            JNIArrayType.callNativeStringArray(arrayOf("Coding", "With", "Cat"))
        )

    }

}