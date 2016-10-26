//
// Created by niexiang on 16/10/17.
//
#include "stone_com_ndkdemo_NativeAdd.h"
#include <stdlib.h>
#include <string.h>
JNIEXPORT jstring JNICALL Java_stone_com_ndkdemo_NativeAdd_getStringFromNative
  (JNIEnv * env, jobject obj){
  return (*env)->NewStringUTF(env,"NDK 测试成功");
  }

JNIEXPORT jint JNICALL Java_stone_com_ndkdemo_NativeAdd_add
        (JNIEnv * env, jobject obj, jint x, jint y){
  return x+y;
}
JNIEXPORT jint JNICALL Java_stone_com_ndkdemo_NativeAdd_calculateSum
        (JNIEnv *env, jobject obj, jintArray array){
  jint sum = 0, loop = 0;
  jint *jArray;
  jint length =0;
  length = (*env)->GetArrayLength(env,array);
  if (length > 0)
  {
    jArray = (jint *)malloc(sizeof(jint)*length);
    (*env)->GetIntArrayRegion(env,array,0,length,jArray);
    for(loop = 0;loop<length-1;loop++){
      sum+=jArray[loop];
    }
    free(jArray);
  }
  return sum;
}