#include <cstdio>
#include <jni.h>
#include <cstring>
#include <android/log.h>
#include <unistd.h>

#define APPNAME "CyberTruckChallenge"

/*
 * public native void init();
 */
extern "C" JNIEXPORT void JNICALL Java_org_nowsecure_cybertruck_MainActivity_init(JNIEnv *env, jobject thisObj) {

    __android_log_print(ANDROID_LOG_VERBOSE, APPNAME,  "KEYLESS CRYPTO [3] - Unlocking carID = 3");

    // "Native_c0d3_1s_h4rd3r_To_r3vers3"
    char data[] = {0x4e, 0x61, 0x74, 0x69, 0x76, 0x65, 0x5f, 0x63, 0x30, 0x64, 0x33, 0x5f, 0x31, 0x73, 0x5f, 0x68, 0x34, 0x72, 0x64, 0x33, 0x72, 0x5f, 0x54, 0x6f, 0x5f, 0x72, 0x33, 0x76, 0x65, 0x72, 0x73, 0x33};
    char key[]  = {0x2c, 0x00, 0x17, 0x02, 0x12, 0x55, 0x6f, 0x11, 0x14, 0x29, 0x46, 0x7b, 0x45, 0x32, 0x33, 0x1f, 0x00, 0x0b, 0x17, 0x71, 0x17, 0x19, 0x64, 0x1d, 0x3d, 0x43, 0x57, 0x12, 0x56, 0x1c, 0x57, 0x17};

    int n = strlen(data);

    int i;
    char out[n];

    for (i = 0; i < n; i++)
    {
        out[i] = data[i] ^ key[i];
    }

    //__android_log_print(ANDROID_LOG_VERBOSE, APPNAME,  "KEYLESS CRYPTO [3] - Key: %.32s", out);
    //return env->NewStringUTF(out);

}