package com.shinhoandroid.testjni;

/**
 * @author Liupengfei
 * @describe TODO
 * @date on 2019/8/1 14:36
 */
public class JNIManager {

    static {
        System.loadLibrary("jnitest");
    }

    public String getStr(){
        return JNITest.getStr();
    }


}
