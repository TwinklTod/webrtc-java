/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class dev_onvoid_webrtc_media_audio_AudioConverter */

#ifndef _Included_dev_onvoid_webrtc_media_audio_AudioConverter
#define _Included_dev_onvoid_webrtc_media_audio_AudioConverter
#ifdef __cplusplus
extern "C" {
#endif
	/*
	 * Class:     dev_onvoid_webrtc_media_audio_AudioConverter
	 * Method:    dispose
	 * Signature: ()V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_media_audio_AudioConverter_dispose
	(JNIEnv*, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_media_audio_AudioConverter
	 * Method:    initialize
	 * Signature: (IIII)V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_media_audio_AudioConverter_initialize
	(JNIEnv*, jobject, jint, jint, jint, jint);

	/*
	 * Class:     dev_onvoid_webrtc_media_audio_AudioConverter
	 * Method:    convertInternal
	 * Signature: ([BI[BI)V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_media_audio_AudioConverter_convertInternal
	(JNIEnv*, jobject, jbyteArray, jint, jbyteArray, jint);

#ifdef __cplusplus
}
#endif
#endif
