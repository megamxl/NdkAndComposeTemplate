#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_maxl_testnativec_NativeLib_StringFromJNI( JNIEnv* env, jclass clazz) {
    return env->NewStringUTF("test Compose and c");
}