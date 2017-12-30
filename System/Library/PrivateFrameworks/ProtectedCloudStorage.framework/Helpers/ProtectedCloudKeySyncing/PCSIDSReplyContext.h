/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:30 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/Helpers/ProtectedCloudKeySyncing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface PCSIDSReplyContext : NSObject {

	NSObject*<OS_dispatch_source> _timeoutTimer;
	/*^block*/id _replyBlock;
	/*^block*/id _completion;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSObject*<OS_dispatch_source> timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (copy) id replyBlock;                                             //@synthesize replyBlock=_replyBlock - In the implementation block
@property (copy) id completion;                                             //@synthesize completion=_completion - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
-(void)runReplyHandlerWithMessage:(id)arg1 error:(id)arg2 ;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 logDescription:(id)arg3 sentID:(id)arg4 replyHandler:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(id)replyBlock;
-(void)setReplyBlock:(id)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
@end

