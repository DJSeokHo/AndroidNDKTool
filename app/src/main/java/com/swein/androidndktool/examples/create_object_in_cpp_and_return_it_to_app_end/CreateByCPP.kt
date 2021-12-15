package com.swein.androidndktool.examples.create_object_in_cpp_and_return_it_to_app_end

class CreateByCPP {

    companion object {

        var num = 0

        fun getNumber(): Int {
            return num
        }

    }

    var name: String

    constructor(name: String) {
        this.name = name
    }

    fun getNameString(): String {
        return name
    }

}