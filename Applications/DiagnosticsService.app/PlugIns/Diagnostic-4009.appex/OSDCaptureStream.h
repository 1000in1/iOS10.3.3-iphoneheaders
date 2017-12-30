/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4009.appex/Diagnostic-4009
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostic-4009/Diagnostic-4009-Structs.h>
#import <Diagnostic-4009/OSDPropertyBasedDevice.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject;

@interface OSDCaptureStream : OSDPropertyBasedDevice {

	OpaqueFigCaptureStreamRef _streamRef;
	NSObject*<OS_dispatch_semaphore> _streamStartSemaphore;
	NSObject*<OS_dispatch_semaphore> _streamStopSemaphore;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> streamStartSemaphore;              //@synthesize streamStartSemaphore=_streamStartSemaphore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> streamStopSemaphore;               //@synthesize streamStopSemaphore=_streamStopSemaphore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                             //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) OpaqueFigCaptureStreamRef streamRef;                              //@synthesize streamRef=_streamRef - In the implementation block
-(OpaqueFigCaptureStreamRef)streamRef;
-(void*)backingRef;
-(long)backingSetProperty:(CFStringRef)arg1 value:(void*)arg2 ;
-(long)backingCopyProperty:(CFStringRef)arg1 dest:(const void*)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)streamStartSemaphore;
-(NSObject*<OS_dispatch_semaphore>)streamStopSemaphore;
-(BOOL)_registerForStreamNotifications:(id*)arg1 ;
-(void)setStreamStartSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setStreamStopSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(BOOL)_unregisterForStreamNotifications:(id*)arg1 ;
-(void)_receivedNotification:(CFStringRef)arg1 notificationObject:(id)arg2 notificationPayload:(id)arg3 ;
-(void)dealloc;
-(void)teardown;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(id)name:(id*)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithStream:(OpaqueFigCaptureStreamRef)arg1 ;
@end

