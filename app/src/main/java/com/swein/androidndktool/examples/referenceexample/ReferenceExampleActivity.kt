package com.swein.androidndktool.examples.referenceexample

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import com.swein.androidndktool.R

class ReferenceExampleActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_reference_example)

        findViewById<Button>(R.id.button).setOnClickListener {
            JNIReference.errorCacheLocalReference()
            JNIReference.cacheWithGlobalReference()
//            JNIReference.useWeakGlobalReference()
        }

    }
}