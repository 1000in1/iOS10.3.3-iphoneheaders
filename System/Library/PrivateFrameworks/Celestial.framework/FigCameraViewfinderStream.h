/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class FigDelegateStorage, FigStateMachine;

@interface FigCameraViewfinderStream : NSObject {

	FigDelegateStorage* _delegateStorage;
	FigStateMachine* _stateMachine;
	OpaqueFigEndpointRef _endpoint;
	OpaqueFigEndpointStreamRef _stream;
	OpaqueFigVirtualDisplaySourceRef _displaySource;
	id _endpointsChangedNotificationToken;
	id _streamsChangedNotificationToken;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)close;
-(void)_setupStateMachine;
-(void)openWithDestination:(id)arg1 ;
-(long)enqueueVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleEndpointsChanged:(id)arg1 ;
-(void)_handleStreamsChanged:(id)arg1 ;
-(void)_setEndpoint:(OpaqueFigEndpointRef)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
@end

