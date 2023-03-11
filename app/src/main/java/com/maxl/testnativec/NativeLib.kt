package com.maxl.testnativec

class NativeLib {

    external fun stringFromJNI(): String

    companion object {
        // Used to load the 'testnativec' library on application startup.
        init {
            System.loadLibrary("testnativec")
        }
    }
}