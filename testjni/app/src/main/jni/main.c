#include <jni.h>
#include<stdio.h>
//自己创建一个c文件，实现自己定义的native方法，也就是.h文件中的方法
//引入自己生成的.h头文件
#include "com_shinhoandroid_testjni_JNITest.h"

//返回一个字符串
//JNIEXPORT jstring JNICALL Java_com_shinhoandroid_test0730_JNITest_getStr
//重写com_shinhoandroid_test0730_JNITest.h中的方法
JNIEXPORT jstring JNICALL Java_com_shinhoandroid_testjni_JNITest_getStr
  (JNIEnv *env, jclass jobj) {
    return (*env)->NewStringUTF(env,"我是jni");
}
//返回 a+b的结果
JNIEXPORT jint JNICALL Java_com_shinhoandroid_testjni_JNITest_add
  (JNIEnv *env, jclass jobj, jint a, jint b){
  return a+b;
}