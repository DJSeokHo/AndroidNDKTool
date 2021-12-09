package com.swein.androidndktool.examples.dynamicload

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView
import com.swein.androidndktool.R
import com.swein.androidndktool.databinding.ActivityDynamicLoadExampleBinding

class DynamicLoadExampleActivity : AppCompatActivity() {

    private lateinit var binding: ActivityDynamicLoadExampleBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityDynamicLoadExampleBinding.inflate(layoutInflater)
        setContentView(binding.root)

        findViewById<TextView>(R.id.textView1).setOnClickListener {
            (it as TextView).text = JNIDynamicLoad.getNativeString()
        }

    }
}