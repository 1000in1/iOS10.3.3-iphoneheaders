/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:49 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <AVConference/AVConference-Structs.h>
@class VCAudioRelayIO, NSObject;

@interface VCAudioRelay : NSObject {

	char _isRelayRunning;
	float _IOBufferDuration;
	opaque_pthread_t* _relayThread;
	opaque_pthread_cond_t _wakeUpCondition;
	opaque_pthread_mutex_t _wakeUpMutex;
	OpaqueAudioConverterRef _clientToRemoteConverter;
	OpaqueAudioConverterRef _remoteToClientConverter;
	VCAudioRelayIO* _remoteIO;
	VCAudioRelayIO* _clientIO;
	opaque_pthread_mutex_t _relayLock;
	NSObject*<OS_dispatch_source> _periodicHealthPrintDispatchSource;
	unsigned long _blocksRelayedCount;
	float _clientUplinkPowerMovingAverage;
	float _clientDownlinkPowerMovingAverage;
	opaqueCMSimpleQueueRef _eventQueue;
	SCD_Struct_VC10 _threadEvent;

}

@property (readonly) NSObject*<OS_dispatch_source> periodicHealthPrintDispatchSource;              //@synthesize periodicHealthPrintDispatchSource=_periodicHealthPrintDispatchSource - In the implementation block
@property (readonly) unsigned long blocksRelayedCount;                                             //@synthesize blocksRelayedCount=_blocksRelayedCount - In the implementation block
@property (readonly) float clientUplinkPowerMovingAverage;                                         //@synthesize clientUplinkPowerMovingAverage=_clientUplinkPowerMovingAverage - In the implementation block
@property (readonly) float clientDownlinkPowerMovingAverage;                                       //@synthesize clientDownlinkPowerMovingAverage=_clientDownlinkPowerMovingAverage - In the implementation block
@property (readonly) OpaqueAudioConverterRef remoteToClientConverter;                              //@synthesize remoteToClientConverter=_remoteToClientConverter - In the implementation block
@property (readonly) OpaqueAudioConverterRef clientToRemoteConverter;                              //@synthesize clientToRemoteConverter=_clientToRemoteConverter - In the implementation block
@property (readonly) opaqueCMSimpleQueueRef eventQueue;                                            //@synthesize eventQueue=_eventQueue - In the implementation block
@property (readonly) SCD_Struct_VC10 threadEvent;                                                  //@synthesize threadEvent=_threadEvent - In the implementation block
@property (readonly) char isRelayRunning;                                                          //@synthesize isRelayRunning=_isRelayRunning - In the implementation block
@property (readonly) float IOBufferDuration;                                                       //@synthesize IOBufferDuration=_IOBufferDuration - In the implementation block
@property (copy,readonly) VCAudioRelayIO * remoteIO;                                               //@synthesize remoteIO=_remoteIO - In the implementation block
@property (copy,readonly) VCAudioRelayIO * clientIO;                                               //@synthesize clientIO=_clientIO - In the implementation block
-(id)init;
-(void)dealloc;
-(void)stop;
-(char)start;
-(opaqueCMSimpleQueueRef)eventQueue;
-(void)printStreamFormats;
-(char)canSetPropertyWithError:(id*)arg1 ;
-(char)startRelayThreadWithError:(id*)arg1 ;
-(void)startPeriodicHealthPrint;
-(char)startRelayIO:(id)arg1 name:(id)arg2 ;
-(char)createAudioConvertersWithError:(id*)arg1 ;
-(void)stopRelayThread;
-(void)destroyAudioConverters;
-(OpaqueAudioConverterRef)newAudioConverterWithInputFormat:(AudioStreamBasicDescription*)arg1 outputFormat:(AudioStreamBasicDescription*)arg2 withError:(id*)arg3 ;
-(float)IOBufferDuration;
-(float)rmsPowerOfBuffer:(float*)arg1 numSamples:(unsigned)arg2 ;
-(VCAudioRelayIO *)clientIO;
-(unsigned long)blocksRelayedCount;
-(float)clientUplinkPowerMovingAverage;
-(float)clientDownlinkPowerMovingAverage;
-(char)setIOBufferDuration:(float)arg1 withError:(id*)arg2 ;
-(char)setRemoteIO:(id)arg1 withError:(id*)arg2 ;
-(char)setClientIO:(id)arg1 withError:(id*)arg2 ;
-(void)forwardSamplesFromIO:(id)arg1 toIO:(id)arg2 withConverter:(OpaqueAudioConverterRef)arg3 ;
-(void)sleepTillTime:(timespec*)arg1 ;
-(void)updateRealTimeStats;
-(VCAudioRelayIO *)remoteIO;
-(char)isRelayRunning;
-(OpaqueAudioConverterRef)remoteToClientConverter;
-(OpaqueAudioConverterRef)clientToRemoteConverter;
-(NSObject*<OS_dispatch_source>)periodicHealthPrintDispatchSource;
-(SCD_Struct_VC10)threadEvent;
@end

