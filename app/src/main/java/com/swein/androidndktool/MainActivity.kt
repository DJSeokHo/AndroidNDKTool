package com.swein.androidndktool

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.swein.androidndktool.databinding.ActivityMainBinding
import com.swein.androidndktool.examples.basic.BasicExampleActivity
import com.swein.androidndktool.examples.dynamicload.DynamicLoadExampleActivity

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

//        Intent(this, BasicExampleActivity::class.java).apply {
//            startActivity(this)
//        }

        Intent(this, DynamicLoadExampleActivity::class.java).apply {
            startActivity(this)
        }
    }

}