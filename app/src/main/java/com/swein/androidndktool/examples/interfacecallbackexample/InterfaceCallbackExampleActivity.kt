package com.swein.androidndktool.examples.interfacecallbackexample

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import com.swein.androidndktool.R
import com.swein.androidndktool.framework.utility.debug.ILog

class InterfaceCallbackExampleActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_interface_callback_example)


        findViewById<Button>(R.id.buttonCallBack).setOnClickListener {

            JNIInterfaceCallbackExample.cppCallback(object : ICallbackMethod {
                override fun callback() {
                    ILog.debug("cppCallback", "thread name is " + Thread.currentThread().name)
                }
            })
        }

        findViewById<Button>(R.id.buttonThreadCallBack).setOnClickListener {
            JNIInterfaceCallbackExample.cppThreadCallback(object : IThreadCallbackMethod {
                override fun callback() {
                    ILog.debug("cppThreadCallback", "thread name is " + Thread.currentThread().name)
                }
            })
        }
    }
}