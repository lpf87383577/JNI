LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := jnitest

LOCAL_SRC_FILES := E:\test\github\testjni\app\src\main\jni\main.c

LOCAL_C_INCLUDES := E:\test\github\testjni\app\src\main\jni

include $(BUILD_SHARED_LIBRARY)