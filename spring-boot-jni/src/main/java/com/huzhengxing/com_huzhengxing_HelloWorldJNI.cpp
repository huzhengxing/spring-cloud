/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <iostream>
/* Header for class com_huzhengxing_HelloWorldJNI */


int test (int a ,int b) {
    return a+b;
}

int test (int a ) {
    return a;
}

extern "C" {
/*
 * Class:     com_huzhengxing_HelloWorldJNI
 * Method:    sayHello
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_huzhengxing_HelloWorldJNI_sayHello
  (JNIEnv* env, jobject thisObject) {
    std::cout << "Hello from C++ !!" << std::endl;
    }
}

extern "C" {
/*
 * Class:     com_huzhengxing_HelloWorldJNI
 * Method:    sayHello
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_huzhengxing_HelloWorldJNI_add
  (JNIEnv* env, jobject thisObject,jint a ,jint b) {
    std::cout << test(a,b) << std::endl;
    std::cout << test(a) << std::endl;
    }
}


