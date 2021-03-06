/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSDictionary, NSString, NSObject;

@interface FigCPEFPAirPlaySession : NSObject {

	char _invalid;
	unsigned long _fairPlayContext;
	NSDictionary* _protectionInfo;
	NSDictionary* _contentInfo;
	OpaqueFigEndpointPlaybackSessionRef _playbackSession;
	NSString* _mediaControlUUID;
	unsigned long _vodkaVersion;
	FPStreamOpaque_Ref _fairPlaySession;
	NSObject*<OS_dispatch_queue> _serializationQueue;

}
-(void)dealloc;
-(void)endSession;
-(id)initWithFairPlayContext:(unsigned long)arg1 protectionInfo:(id)arg2 routeInfo:(id)arg3 playbackSession:(OpaqueFigEndpointPlaybackSessionRef)arg4 mediaControlUUID:(id)arg5 ;
-(id)initWithFairPlayContext:(unsigned long)arg1 contentInfo:(id)arg2 routeInfo:(id)arg3 playbackSession:(OpaqueFigEndpointPlaybackSessionRef)arg4 mediaControlUUID:(id)arg5 ;
-(void)beginSessionWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithFairPlayContext:(unsigned long)arg1 routeInfo:(id)arg2 playbackSession:(OpaqueFigEndpointPlaybackSessionRef)arg3 mediaControlUUID:(id)arg4 ;
-(id)sicWithPic:(id)arg1 ;
-(id)legacySinfs;
-(id)mediaControlParamsWithStoreResponse:(id)arg1 ;
-(id)createPicRequestWithError:(id*)arg1 ;
-(void)authorizeItemCompletionHandler_objc:(SCD_Struct_Fi21*)arg1 picData:(CFDataRef)arg2 playerGUID:(CFStringRef)arg3 error:(long)arg4 ;
-(void)finalize;
@end

