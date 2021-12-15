package com.swein.androidndktool.examples.objectmethodexample

import com.swein.androidndktool.framework.utility.debug.ILog

class TestObject {

    fun callInstanceMethod(str: String): String {
        ILog.debug("TestObject", "callInstanceMethod $str")
        return ""
    }

    fun callInstanceMethod(strArray: Array<String>, num: Int): String {

        ILog.debug("TestObject", "callInstanceMethod")

        for(str in strArray) {
            ILog.debug("TestObject", "str is $str")
        }
        ILog.debug("TestObject", "num is $num")

        return ""
    }

    fun callInstanceMethod(num: Int) {

        ILog.debug("TestObject", "callInstanceMethod $num")

    }

    fun callInstanceMethod(num: Int, number: Int) {

        ILog.debug("TestObject", "callInstanceMethod $num $number")

    }
}