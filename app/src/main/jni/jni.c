//
// Created by niexiang on 16/10/17.
//
#include "stone_com_ndkdemo_NativeAdd.h"
JNIEXPORT jstring JNICALL Java_stone_com_ndkdemo_NativeAdd_getStringFromNative
  (JNIEnv * env, jobject obj){
  return (*env)->NewStringUTF(env,"NDK 测试成功\n123");
  }

JNIEXPORT jint JNICALL Java_stone_com_ndkdemo_NativeAdd_add
        (JNIEnv * env, jobject obj, jint x, jint y){
  return x+y;
}
