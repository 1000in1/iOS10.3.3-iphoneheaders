/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:11 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/Support/fud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_source, OS_dispatch_queue;
@class NSObject, FudIpcDispatch, FudStorage, NSMutableArray;

@interface FudController : NSObject {

	NSObject*<OS_xpc_object> _listener;
	long long _idleExitTimeoutSec;
	char _isRunningTimer;
	char _isWatchingGroup;
	NSObject*<OS_dispatch_source> _idleTimer;
	NSObject*<OS_dispatch_queue> _timeoutQueue;
	NSObject*<OS_dispatch_queue> _processingQueue;
	FudIpcDispatch* _fudIpcDispatch;
	unsigned long long _numProcessedConnection;
	FudStorage* _fudStorage;
	NSMutableArray* _defaultClients;

}
-(id)initWithIdleTimeout:(long long)arg1 ;
-(char)initializeFud;
-(void)handleXPCAPIEvent:(id)arg1 ;
-(void)processAPIDict:(id)arg1 ;
-(void)cancelIdleTimer;
-(void)watchSharedGroup;
-(void)idleExit;
-(void)beginIdleTimer;
-(void)handleXPCStreamEvent:(id)arg1 ;
-(void)handleInternalAPIEvent:(id)arg1 ;
-(void)handleBrokenConnection:(id)arg1 ;
-(void)initIdleTimer;
-(id)loadPolicyForAllPlugins;
-(char)setupXPCStreamsWithPolicies:(id)arg1 shouldRegister:(char)arg2 ;
-(void)handleInternalClientMessage:(id)arg1 ;
-(char)startDefaultClients;
-(char)processEvent:(id)arg1 ;
-(void)handleIdleTimeout;
@end

