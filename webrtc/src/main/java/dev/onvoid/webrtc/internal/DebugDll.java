package dev.onvoid.webrtc.internal;

public class DebugDll {
    public static void main (String[] args) throws Exception {
        NativeLoader.loadLibrary("webrtc-java");
    }
}
