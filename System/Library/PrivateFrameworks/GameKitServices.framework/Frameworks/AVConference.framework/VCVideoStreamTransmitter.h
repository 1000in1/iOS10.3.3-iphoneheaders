/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:49 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCVideoCaptureClient.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, VCVideoRule, VCMediaStreamStats;

@interface VCVideoStreamTransmitter : NSObject <VCVideoCaptureClient> {

	tagHANDLE* _videoRTP;
	OpaqueVTCompressionSessionRef _compressionSession;
	NSObject*<OS_dispatch_queue> _transmitterQueue;
	tagVCRealTimeThread* _encoderThread;
	char _terminateEncoderThread;
	NSObject*<OS_dispatch_semaphore> _bufferQueueSemaphore;
	opaqueCMSampleBufferRef _savedSampleBuffer;
	opaqueCMBufferQueueRef _bufferQueue;
	char* _buffer;
	unsigned long _bufferSize;
	int _packetBufferSize;
	char* _packetBuffer;
	int _maxPacketCount;
	int* _packetSizes;
	int* _packetFlags;
	unsigned _timestamp;
	SCD_Struct_VC21 _latestSampleBufferTimestamp;
	unsigned long _lastKeyFrameSampleBufferSize;
	double _lastKeyFrameSentTime;
	int _iSMBCount;
	VCVideoRule* _videoRule;
	unsigned _encodingWidth;
	unsigned _encodingHeight;
	unsigned _captureWidth;
	unsigned _captureHeight;
	unsigned _targetFramerate;
	unsigned _txMaxBitrate;
	unsigned _txMinBitrate;
	unsigned _temporaryMaximumBitrate;
	unsigned _keyFrameIntervalDuration;
	unsigned short _recommendedMTU;
	int _videoCodecType;
	unsigned _dwRefreshFrameCounter;
	opaque_pthread_mutex_t _xMBs;
	int _shouldGenerateKeyFrame;
	VCMediaStreamStats* _stats;
	double _reportingIntervalStartTime;
	double _reportingLastUpdateTime;
	unsigned char _lastCameraStatusBits;
	char _enableCVO;
	unsigned _cvoExtensionID;
	tagVCMemoryPool* _frameReferenceMemoryPool;
	opaqueRTCReportingRef _reportingAgent;

}

@property (assign) SCD_Struct_VC21 lastFrameTime;              //@synthesize latestSampleBufferTimestamp=_latestSampleBufferTimestamp - In the implementation block
@property (assign) double lastKeyFrameSentTime;                //@synthesize lastKeyFrameSentTime=_lastKeyFrameSentTime - In the implementation block
@property (assign) unsigned lastRTPTimestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
-(void)dealloc;
-(CGSize)sizeForVideoResolution:(int)arg1 ;
-(CGSize)getBestCaptureSizeForEncodingSize:(CGSize)arg1 ;
-(void)requestKeyFrameGeneration;
-(void)initVideoCompressionWithWidth:(unsigned long)arg1 height:(unsigned long)arg2 bitrate:(unsigned long)arg3 keyFrameIntervalDuration:(unsigned long)arg4 ;
-(void)gatherRealtimeStats:(CFDictionaryRef)arg1 ;
-(void)limitCompressionSessionDataRate:(unsigned)arg1 ;
-(CFDictionaryRef)forceKeyFrameProperties;
-(char)isKeyFrame:(opaqueCMSampleBufferRef)arg1 ;
-(char)prependSPSPPS:(unsigned*)arg1 dataPointer:(char*)arg2 ;
-(long)transmitEncodedVideoFrame:(char*)arg1 size:(unsigned long)arg2 timestamp:(unsigned)arg3 hostTime:(double)arg4 cameraStatusBits:(unsigned char)arg5 ;
-(void)setLastKeyFrameSentTime:(double)arg1 ;
-(void)reportingVideoStreamEvent:(unsigned short)arg1 ;
-(long)transmitVideoPackets:(const char*)arg1 packetSizes:(int*)arg2 startPacket:(int)arg3 packetCount:(int)arg4 lastGroup:(int)arg5 timestamp:(unsigned)arg6 hostTime:(double)arg7 cameraStatusBits:(unsigned char)arg8 bytesSent:(int*)arg9 ;
-(char)onCaptureFrame:(CVBufferRef)arg1 frameTime:(SCD_Struct_VC21)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4 ;
-(void)avConferencePreviewError:(id)arg1 ;
-(id)clientCaptureRule;
-(id)initWithResolution:(int)arg1 framerate:(unsigned)arg2 codecType:(int)arg3 maxBitrate:(unsigned)arg4 minBitrate:(unsigned)arg5 keyFrameInterval:(unsigned)arg6 enableCVO:(char)arg7 cvoExtensionID:(unsigned)arg8 recommendedMTU:(unsigned)arg9 rtpHandle:(tagHANDLE*)arg10 reportingAgent:(opaqueRTCReportingRef)arg11 ;
-(void)startVideo;
-(void)stopVideo;
-(unsigned)setTemporaryMaximumBitrate:(unsigned)arg1 ;
-(void)encodeVideoFrame:(CVBufferRef)arg1 time:(SCD_Struct_VC21)arg2 cameraStatusBits:(unsigned char)arg3 ;
-(void)sendFrame:(opaqueCMSampleBufferRef)arg1 cameraStatusBits:(unsigned char)arg2 ;
-(SCD_Struct_VC21)lastFrameTime;
-(void)setLastFrameTime:(SCD_Struct_VC21)arg1 ;
-(unsigned)lastRTPTimestamp;
-(void)setLastRTPTimestamp:(unsigned)arg1 ;
-(double)lastKeyFrameSentTime;
@end

