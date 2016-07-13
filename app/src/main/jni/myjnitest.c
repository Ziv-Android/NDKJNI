//
// Created by ziv on 16-7-13.
//

#include "com_ziv_ndkjni_NdkJniUtils.h"

/*
 * Class:     com_ziv_ndkjni_NdkJniUtils
 * Method:    getCLanguageString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ziv_ndkjni_NdkJniUtils_getCLanguageString
  (JNIEnv *env, jobject obj){
    return (*env)->NewStringUTF(env,"This just a test for Android Studio NDK JNI development !");
  }