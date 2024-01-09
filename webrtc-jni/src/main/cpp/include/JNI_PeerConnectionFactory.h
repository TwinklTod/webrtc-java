/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class dev_onvoid_webrtc_PeerConnectionFactory */

#ifndef _Included_dev_onvoid_webrtc_PeerConnectionFactory
#define _Included_dev_onvoid_webrtc_PeerConnectionFactory
#ifdef __cplusplus
extern "C" {
#endif
	/*
	 * Class:     dev_onvoid_webrtc_PeerConnectionFactory
	 * Method:    createAudioSource
	 * Signature: (Ldev/onvoid/webrtc/media/audio/AudioOptions;)Ldev/onvoid/webrtc/media/audio/AudioTrackSource;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_PeerConnectionFactory_createAudioSource
	(JNIEnv *, jobject, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_PeerConnectionFactory
	 * Method:    createAudioTrack
	 * Signature: (Ljava/lang/String;Ldev/onvoid/webrtc/media/audio/AudioTrackSource;)Ldev/onvoid/webrtc/media/audio/AudioTrack;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_PeerConnectionFactory_createAudioTrack
	(JNIEnv *, jobject, jstring, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_PeerConnectionFactory
	 * Method:    createVideoTrack
	 * Signature: (Ljava/lang/String;Ldev/onvoid/webrtc/media/video/VideoTrackSource;)Ldev/onvoid/webrtc/media/video/VideoTrack;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_PeerConnectionFactory_createVideoTrack
	(JNIEnv *, jobject, jstring, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_PeerConnectionFactory
	 * Method:    createPeerConnection
	 * Signature: (Ldev/onvoid/webrtc/RTCConfiguration;Ldev/onvoid/webrtc/PeerConnectionObserver;)Ldev/onvoid/webrtc/RTCPeerConnection;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_PeerConnectionFactory_createPeerConnection
	(JNIEnv *, jobject, jobject, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_PeerConnectionFactory
	 * Method:    getRtpReceiverCapabilities
	 * Signature: (Ldev/onvoid/webrtc/media/MediaType;)Ldev/onvoid/webrtc/RTCRtpCapabilities;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_PeerConnectionFactory_getRtpReceiverCapabilities
	(JNIEnv *, jobject, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_PeerConnectionFactory
	 * Method:    getRtpSenderCapabilities
	 * Signature: (Ldev/onvoid/webrtc/media/MediaType;)Ldev/onvoid/webrtc/RTCRtpCapabilities;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_PeerConnectionFactory_getRtpSenderCapabilities
	(JNIEnv *, jobject, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_PeerConnectionFactory
	 * Method:    dispose
	 * Signature: ()V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_PeerConnectionFactory_dispose
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_PeerConnectionFactory
	 * Method:    initialize
	 * Signature: (Ldev/onvoid/webrtc/media/audio/AudioDeviceModule;Ldev/onvoid/webrtc/media/audio/AudioProcessing;)V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_PeerConnectionFactory_initialize
	(JNIEnv *, jobject, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif