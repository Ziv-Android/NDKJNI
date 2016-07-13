package com.ziv.ndkjni;

/**
 *
 * Created by ziv on 16-7-13.
 */
public class NdkJniUtils {
    static {
        System.loadLibrary("ZivJniLibraryName");
    }
    public native String getCLanguageString();
}
