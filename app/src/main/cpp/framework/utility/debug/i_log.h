//
// Created by 浩 SHI on 2021/12/09.
//

#ifndef ANDROIDNDKTOOL_I_LOG_H
#define ANDROIDNDKTOOL_I_LOG_H

#endif //ANDROIDNDKTOOL_I_LOG_H


#include <android/log.h>

#define LOG_TAG "ILog"
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)
#define  LOGW(...)  __android_log_print(ANDROID_LOG_WARN,LOG_TAG,__VA_ARGS__)
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
