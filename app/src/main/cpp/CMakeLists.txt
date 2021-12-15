# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

#cmake_minimum_required(VERSION 3.10.2)
cmake_minimum_required(VERSION 3.6.0)

# Declares and names the project.

project("androidndktool")

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

set(debug ILog)
message(${debug})

# 创建变量 一个名为var的变量, 值是hello
set(var hello)
message(${var})
set(var 111)
message(${var})

IF(TRUE)
    message("this is true")
ENDIF()

# 常量
message(${CMAKE_CURRENT_LIST_FILE})
message(${CMAKE_CURRENT_LIST_DIR})

include_directories(${CMAKE_SOURCE_DIR}/framework/utility/debug/)

add_library( # Sets the name of the library.
        androidndktool

        # Sets the library as a shared library.
        SHARED

        # Provides a relative path to your source file(s).
        examples/basic/basic.cpp
)

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

add_library( # Sets the name of the library.
        people-lib

        # Sets the library as a shared library.
        SHARED

        # Provides a relative path to your source file(s).
        examples/basic/people/people.cpp
)

add_library(
        dynamic-lib

        SHARED

        examples/dynamic_load/jni_dynamic_load.cpp
)

add_library(
        data_type-lib

        SHARED

        examples/datat_ype/data_type.cpp
)

add_library(
        string_example-lib

        SHARED

        examples/string_example/string_example.cpp
)

add_library(
        array_type-lib

        SHARED

        examples/array_type/array_type.cpp
)

add_library(
        object_field-lib

        SHARED

        examples/object_field/object_field.cpp
)

add_library(
        object_method-lib

        SHARED

        examples/object_method/object_method.cpp
)

add_library(
        interface_callback_example-lib

        SHARED

        examples/interface_callback_example/interface_callback_example.cpp
)


find_library( # Sets the name of the path variable.
        log-lib

        # Specifies the name of the NDK library that
        # you want CMake to locate.
        log
)

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
        androidndktool
        # Links the target library to the log library
        # included in the NDK.
        ${log-lib}
)

target_link_libraries( # Specifies the target library.
        dynamic-lib
        # Links the target library to the log library
        # included in the NDK.
        ${log-lib}
)

target_link_libraries( # Specifies the target library.
        data_type-lib
        # Links the target library to the log library
        # included in the NDK.
        ${log-lib}
)

target_link_libraries( # Specifies the target library.
        string_example-lib
        # Links the target library to the log library
        # included in the NDK.
        ${log-lib}
)


target_link_libraries( # Specifies the target library.
        array_type-lib
        # Links the target library to the log library
        # included in the NDK.
        ${log-lib}
)

target_link_libraries( # Specifies the target library.
        object_field-lib
        # Links the target library to the log library
        # included in the NDK.
        ${log-lib}
)

target_link_libraries( # Specifies the target library.
        object_method-lib
        # Links the target library to the log library
        # included in the NDK.
        ${log-lib}
)

target_link_libraries( # Specifies the target library.
        interface_callback_example-lib
        # Links the target library to the log library
        # included in the NDK.
        ${log-lib}
)
