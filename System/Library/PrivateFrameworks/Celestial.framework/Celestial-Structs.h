/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, BWNodeOutput, NSObject<OS_dispatch_queue>;

typedef struct OpaqueFigFormatWriter* OpaqueFigFormatWriterRef;

typedef struct OpaqueCMByteStream* OpaqueCMByteStreamRef;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_BW2;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct opaqueCMFormatDescription* opaqueCMFormatDescriptionRef;

typedef struct OpaqueCMBlockBuffer* OpaqueCMBlockBufferRef;

typedef struct _NSZone* NSZoneRef;

typedef struct OpaqueFigCaptureSession* OpaqueFigCaptureSessionRef;

typedef struct OpaqueVTPixelTransferSession* OpaqueVTPixelTransferSessionRef;

typedef struct {
	int width;
	int height;
} SCD_Struct_BW12;

typedef struct OpaqueFigCaptureDevice* OpaqueFigCaptureDeviceRef;

typedef struct OpaqueFigCaptureStream* OpaqueFigCaptureStreamRef;

typedef struct OpaqueFigSimpleMutex* OpaqueFigSimpleMutexRef;

typedef struct {
	double field1;
	float field2;
	float field3;
	double field4;
	float field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
	unsigned field9;
	unsigned char field10;
	unsigned char field11;
	unsigned field12;
	unsigned field13;
	int field14;
	int field15;
	unsigned field16;
	float field17;
	float field18;
	float field19;
	double field20;
	int field21;
	int field22;
	int field23;
	float field24;
	int field25;
	int field26;
	int field27;
	float field28;
	int field29;
	int field30;
	int field31;
	int field32;
	long long field33;
} SCD_Struct_BW16;

typedef struct OpaqueFigSampleBufferProcessor* OpaqueFigSampleBufferProcessorRef;

typedef struct {
	float field1;
	float field2;
	float field3;
} SCD_Struct_BW18;

typedef struct OpaqueCMClock* OpaqueCMClockRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct remoteQueueSenderOpaque* remoteQueueSenderOpaqueRef;

typedef struct CGImage* CGImageRef;

typedef struct OpaqueFigPlaybackItem* OpaqueFigPlaybackItemRef;

typedef struct OpaqueFigVisualContext* OpaqueFigVisualContextRef;

typedef struct OpaqueFigPlayer* OpaqueFigPlayerRef;

typedef struct opaqueCMSession* opaqueCMSessionRef;

typedef struct __CFString* CFStringRef;

typedef struct {
	unsigned val[8];
} SCD_Struct_BW28;

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct opaqueCMSimpleQueue* opaqueCMSimpleQueueRef;

typedef struct TimestampedAudioBufferList {
	__CFAllocator allocator;
	long long auRenderCount;
	unsigned dataBytesCapacity;
	unsigned numFrames;
	SCD_Struct_BW2 pts;
	AudioBufferList abl;
	unsigned numPrependedSilenceFrames;
} TimestampedAudioBufferList;

typedef struct OpaqueVTImageRotationSession* OpaqueVTImageRotationSessionRef;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_BW33;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_BW34;

typedef struct {
	BOOL field1;
	double field2;
	SCD_Struct_BW34 field3;
} SCD_Struct_BW35;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct OpaqueAudioFileID* OpaqueAudioFileIDRef;

typedef struct OpaqueAudioQueue* OpaqueAudioQueueRef;

typedef struct OpaqueFigCaptureSource* OpaqueFigCaptureSourceRef;

typedef struct opaqueCMBufferQueue* opaqueCMBufferQueueRef;

typedef struct opaqueCMBufferQueueTriggerToken* opaqueCMBufferQueueTriggerTokenRef;

typedef struct {
	SCD_Struct_BW2 field1;
	SCD_Struct_BW2 field2;
	SCD_Struct_BW2 field3;
	char field4;
	char field5;
} SCD_Struct_BW42;

typedef struct EAFrameBufferPacket {
	NSMutableData* frameBufferData;
	unsigned frameTimeStamp;
	unsigned frameBytesRead;
	unsigned char frameTypeIndex;
} EAFrameBufferPacket;

typedef struct __CVPixelBufferPool* CVPixelBufferPoolRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct NoiseReductionCtx_s* NoiseReductionCtx_sRef;

typedef struct {
	float field1;
	int field2;
	char field3;
} SCD_Struct_BW48;

typedef struct _CAImageQueue* CAImageQueueRef;

typedef struct OpaqueFigPreviewSynchronizer* OpaqueFigPreviewSynchronizerRef;

typedef struct OpaqueFigRecorder* OpaqueFigRecorderRef;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_Fi52;

typedef struct {
	double w;
	double x;
	double y;
	double z;
} SCD_Struct_Fi53;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	char __opaque[40];
} opaque_pthread_mutex_t;

typedef struct OpaqueFigCaptureISPProcessingSession* OpaqueFigCaptureISPProcessingSessionRef;

typedef struct BWStreamOutputStorage {
	int type;
	unsigned flags;
	char ready;
	char enabled;
	BWNodeOutput* nodeOutput;
	opaqueCMSimpleQueue simpleQueue;
	NSObject<OS_dispatch_queue>* bufferServicingQueue;
	/*function pointer*/void* bufferServicingQueueCallback;
	opaqueCMFormatDescription cachedFormatDescription;
	int frameCount;
} BWStreamOutputStorage;

typedef struct OpaqueFigSemaphore* OpaqueFigSemaphoreRef;

typedef struct {
	double timestamp;
	float x;
	float y;
	float z;
} SCD_Struct_Fi58;

typedef struct {
	SCD_Struct_Fi52 field1;
	SCD_Struct_Fi52 field2;
	SCD_Struct_Fi52 field3;
	SCD_Struct_Fi53 field4;
	int field5;
	BOOL field6;
	BOOL field7;
	BOOL field8;
} SCD_Struct_Fi59;

typedef struct shmemPoolOpaque* shmemPoolOpaqueRef;

typedef struct __CFAllocator* CFAllocatorRef;

typedef struct OpaqueFigFlatDictionaryKeySpec* OpaqueFigFlatDictionaryKeySpecRef;

typedef struct OpaqueFigFormatReader* OpaqueFigFormatReaderRef;

typedef struct OpaqueFigAssetWriter* OpaqueFigAssetWriterRef;

typedef struct BWDeferredMetadataCacheEntry {
	SCD_Struct_BW2 pts;
	__CFDictionary metadataDict;
	short useCount;
	short age;
} BWDeferredMetadataCacheEntry;

typedef struct {
	double x;
	double y;
	double z;
} SCD_Struct_Fi66;

typedef struct {
	int attemptCount;
	double threshold;
} SCD_Struct_Fi67;

typedef struct FigPhotoCompressionSession* FigPhotoCompressionSessionRef;

typedef struct _OpaqueCVAVideoMatting* OpaqueCVAVideoMattingRef;

typedef struct _OpaqueCVAFusion* OpaqueCVAFusionRef;

typedef struct {
	__CVBuffer buffer;
	unsigned readCount;
	char lockedForWriting;
} SCD_Struct_BW71;

typedef struct {
	_ field1;
	_ field2;
	CVBuffer field3;
	unsigned field4;
	char field5;
} SCD_Struct_BW72;

typedef struct OpaqueFigEndpoint* OpaqueFigEndpointRef;

typedef struct OpaqueFigEndpointStream* OpaqueFigEndpointStreamRef;

typedef struct OpaqueFigVirtualDisplaySource* OpaqueFigVirtualDisplaySourceRef;

typedef struct {
	double integrationTime;
	float normalizedSNR;
	float baseISO;
	double exposureBias;
	float gain;
	unsigned conversionGain;
	unsigned readNoise_1x;
	unsigned readNoise_8x;
	unsigned aeAvg;
	unsigned char aeLimitsReached;
	unsigned char aeStable;
	unsigned lensOcclusionScore;
	unsigned lensOcclusionScoreModifiedMovingAverage;
	int afStatus;
	int focusingMethod;
	unsigned motionDataStatus;
	float motionDataBiasErrorEstimate;
	float synchronizedStreamsTelephotoGain;
	float synchronizedStreamsTelephotoStableGain;
	double synchronizedStreamsTelephotoIntegrationTime;
	int synchronizedStreamsTelephotoAFStatus;
	int synchronizedStreamsTelephotoFocusingMethod;
	int synchronizedStreamsTelephotoAFStationaryCount;
	float synchronizedStreamsTelephotoFocusDistance;
	int synchronizedStreamsTelephotoGravityAdjustedFocusPosition;
	int synchronizedStreamsTelephotoLuxLevel;
	int synchronizedStreamsWideFocusPosition;
	float synchronizedStreamsWideFocusDistance;
	int synchronizedStreamsWideAFStatus;
	int synchronizedStreamsWideAFStationaryCount;
	int synchronizedStreamsWideLuxLevel;
	int synchronizedStreamsWideGravityAdjustedFocusPosition;
	long long frameCount;
} SCD_Struct_BW76;

typedef struct {
	SCD_Struct_BW2 sourceTime;
	SCD_Struct_BW2 syncedTime;
} SCD_Struct_BW77;

typedef struct OpaqueVTCompressionSession* OpaqueVTCompressionSessionRef;

