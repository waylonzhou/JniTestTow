package com.example.jnitesttow;

public class MyJni {

    static {
        System.loadLibrary("MyJni");
    }

    public native static String getString();
}