#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_maxl_testnativec_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_maxl_testnativec_NativeLib_stringFromJNI(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF("test Compose and c");
}