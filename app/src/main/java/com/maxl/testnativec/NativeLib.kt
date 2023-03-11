package com.maxl.testnativec

class NativeLib {
    companion object {
        @JvmStatic external fun StringFromJNI(): String
        // Used to load the 'testnativec' library on application startup.
        init {
            System.loadLibrary("testnativec")
        }
    }
}