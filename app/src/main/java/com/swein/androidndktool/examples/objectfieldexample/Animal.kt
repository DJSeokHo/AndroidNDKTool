package com.swein.androidndktool.examples.objectfieldexample

class Animal {

    companion object {

        var num: Int = 0

        fun getNumber(): Int {
            return num
        }
    }

    var name: String = ""

    fun getNameString(): String {
        return name
    }


}