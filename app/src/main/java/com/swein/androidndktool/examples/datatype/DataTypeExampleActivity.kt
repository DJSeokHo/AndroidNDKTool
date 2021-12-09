package com.swein.androidndktool.examples.datatype

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.swein.androidndktool.databinding.ActivityDataTypeExampleBinding
import com.swein.androidndktool.databinding.ActivityDynamicLoadExampleBinding
import com.swein.androidndktool.framework.utility.debug.ILog

class DataTypeExampleActivity : AppCompatActivity() {

    private lateinit var binding: ActivityDataTypeExampleBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityDataTypeExampleBinding.inflate(layoutInflater)
        setContentView(binding.root)

        ILog.debug("DataTypeExampleActivity", "${JNIDataType.callNativeInt(3)}")
        ILog.debug("DataTypeExampleActivity", "${JNIDataType.callNativeByte(3)}")
        ILog.debug("DataTypeExampleActivity", "${JNIDataType.callNativeChar('A')}")
        ILog.debug("DataTypeExampleActivity", "${JNIDataType.callNativeShort(2)}")
        ILog.debug("DataTypeExampleActivity", "${JNIDataType.callNativeLong(2)}")
        ILog.debug("DataTypeExampleActivity", "${JNIDataType.callNativeFloat(2f)}")
        ILog.debug("DataTypeExampleActivity", "${JNIDataType.callNativeDouble(2.0)}")
        ILog.debug("DataTypeExampleActivity", "${JNIDataType.callNativeBoolean(false)}")

    }
}