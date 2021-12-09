package com.swein.androidndktool.examples.datatype

object JNIDataType {

    init {
        System.loadLibrary("data_type-lib")
    }

    external fun callNativeInt(int: Int): Int

    external fun callNativeByte(byte: Byte): Byte

    external fun callNativeChar(char: Char): Char

    external fun callNativeShort(short: Short): Short

    external fun callNativeLong(long: Long): Long

    external fun callNativeFloat(float: Float): Float

    external fun callNativeDouble(double: Double): Double

    external fun callNativeBoolean(boolean: Boolean): Boolean
}