package com.swein.androidndktool.examples.exceptionexample

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import com.swein.androidndktool.R
import com.swein.androidndktool.framework.utility.debug.ILog

class ExceptionExampleActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_exception_example)

        findViewById<Button>(R.id.button).setOnClickListener {

            try {
                JNIException.nativeThrowException()
            }
            catch (e: Exception) {
                ILog.debug("???", e.message)
            }

            JNIException.nativeInvokeJavaException()
        }
    }
}