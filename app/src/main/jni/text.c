//
// Created by wpzhou on 1/6/2020.
//
//#include "jni.h"
#include "com_example_jnitesttow_MyJni.h"

JNIEXPORT jstring JNICALL Java_com_example_jnitesttow_MyJni_getString(JNIEnv * env, jclass jclass){
        char *str = "String from native C";
        return (*env)->NewStringUTF(env, str);
  }