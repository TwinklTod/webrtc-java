/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class dev_onvoid_webrtc_RTCPeerConnection */

#ifndef _Included_dev_onvoid_webrtc_RTCPeerConnection
#define _Included_dev_onvoid_webrtc_RTCPeerConnection
#ifdef __cplusplus
extern "C" {
#endif
	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    getSenders
	 * Signature: ()[Ldev/onvoid/webrtc/RTCRtpSender;
	 */
	JNIEXPORT jobjectArray JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_getSenders
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    getReceivers
	 * Signature: ()[Ldev/onvoid/webrtc/RTCRtpReceiver;
	 */
	JNIEXPORT jobjectArray JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_getReceivers
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    getTransceivers
	 * Signature: ()[Ldev/onvoid/webrtc/RTCRtpTransceiver;
	 */
	JNIEXPORT jobjectArray JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_getTransceivers
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    addTrack
	 * Signature: (Ldev/onvoid/webrtc/media/MediaStreamTrack;Ljava/util/List;)Ldev/onvoid/webrtc/RTCRtpSender;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_addTrack
	(JNIEnv *, jobject, jobject, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    removeTrack
	 * Signature: (Ldev/onvoid/webrtc/RTCRtpSender;)V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_removeTrack
	(JNIEnv *, jobject, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    addTransceiver
	 * Signature: (Ldev/onvoid/webrtc/media/MediaStreamTrack;Ldev/onvoid/webrtc/RTCRtpTransceiverInit;)Ldev/onvoid/webrtc/RTCRtpTransceiver;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_addTransceiver
	(JNIEnv *, jobject, jobject, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    createDataChannel
	 * Signature: (Ljava/lang/String;Ldev/onvoid/webrtc/RTCDataChannelInit;)Ldev/onvoid/webrtc/RTCDataChannel;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_createDataChannel
	(JNIEnv *, jobject, jstring, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    createOffer
	 * Signature: (Ldev/onvoid/webrtc/RTCOfferOptions;Ldev/onvoid/webrtc/CreateSessionDescriptionObserver;)V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_createOffer
	(JNIEnv *, jobject, jobject, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    createAnswer
	 * Signature: (Ldev/onvoid/webrtc/RTCAnswerOptions;Ldev/onvoid/webrtc/CreateSessionDescriptionObserver;)V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_createAnswer
	(JNIEnv *, jobject, jobject, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    getCurrentLocalDescription
	 * Signature: ()Ldev/onvoid/webrtc/RTCSessionDescription;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_getCurrentLocalDescription
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    getLocalDescription
	 * Signature: ()Ldev/onvoid/webrtc/RTCSessionDescription;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_getLocalDescription
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    getPendingLocalDescription
	 * Signature: ()Ldev/onvoid/webrtc/RTCSessionDescription;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_getPendingLocalDescription
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    getCurrentRemoteDescription
	 * Signature: ()Ldev/onvoid/webrtc/RTCSessionDescription;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_getCurrentRemoteDescription
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    getRemoteDescription
	 * Signature: ()Ldev/onvoid/webrtc/RTCSessionDescription;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_getRemoteDescription
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    getPendingRemoteDescription
	 * Signature: ()Ldev/onvoid/webrtc/RTCSessionDescription;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_getPendingRemoteDescription
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    setLocalDescription
	 * Signature: (Ldev/onvoid/webrtc/RTCSessionDescription;Ldev/onvoid/webrtc/SetSessionDescriptionObserver;)V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_setLocalDescription
	(JNIEnv *, jobject, jobject, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    setRemoteDescription
	 * Signature: (Ldev/onvoid/webrtc/RTCSessionDescription;Ldev/onvoid/webrtc/SetSessionDescriptionObserver;)V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_setRemoteDescription
	(JNIEnv *, jobject, jobject, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    addIceCandidate
	 * Signature: (Ldev/onvoid/webrtc/RTCIceCandidate;)V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_addIceCandidate
	(JNIEnv *, jobject, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    removeIceCandidates
	 * Signature: ([Ldev/onvoid/webrtc/RTCIceCandidate;)V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_removeIceCandidates
	(JNIEnv *, jobject, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    getSignalingState
	 * Signature: ()Ldev/onvoid/webrtc/RTCSignalingState;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_getSignalingState
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    getIceGatheringState
	 * Signature: ()Ldev/onvoid/webrtc/RTCIceGatheringState;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_getIceGatheringState
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    getIceConnectionState
	 * Signature: ()Ldev/onvoid/webrtc/RTCIceConnectionState;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_getIceConnectionState
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    getConnectionState
	 * Signature: ()Ldev/onvoid/webrtc/RTCPeerConnectionState;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_getConnectionState
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    getConfiguration
	 * Signature: ()Ldev/onvoid/webrtc/RTCConfiguration;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_getConfiguration
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    setConfiguration
	 * Signature: (Ldev/onvoid/webrtc/RTCConfiguration;)V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_setConfiguration
	(JNIEnv *, jobject, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    getStats
	 * Signature: (Ldev/onvoid/webrtc/RTCStatsCollectorCallback;)V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_getStats__Ldev_onvoid_webrtc_RTCStatsCollectorCallback_2
	(JNIEnv *, jobject, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    getStats
	 * Signature: (Ldev/onvoid/webrtc/RTCRtpReceiver;Ldev/onvoid/webrtc/RTCStatsCollectorCallback;)V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_getStats__Ldev_onvoid_webrtc_RTCRtpReceiver_2Ldev_onvoid_webrtc_RTCStatsCollectorCallback_2
	(JNIEnv *, jobject, jobject, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    getStats
	 * Signature: (Ldev/onvoid/webrtc/RTCRtpSender;Ldev/onvoid/webrtc/RTCStatsCollectorCallback;)V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_getStats__Ldev_onvoid_webrtc_RTCRtpSender_2Ldev_onvoid_webrtc_RTCStatsCollectorCallback_2
	(JNIEnv *, jobject, jobject, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    restartIce
	 * Signature: ()V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_restartIce
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCPeerConnection
	 * Method:    close
	 * Signature: ()V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_RTCPeerConnection_close
	(JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
