/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSString, CDDebug;

@interface CDDXPCConnection : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _replyQueue;
	char _hasValidConnection;
	Aq _sequenceNumber;
	NSString* _serviceName;
	CDDebug* _debug;

}

@property (readonly) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
@property (readonly) CDDebug * debug;                     //@synthesize debug=_debug - In the implementation block
-(char)establishConnection;
-(void)dealloc;
-(NSString *)serviceName;
-(id)connection;
-(id)initWithMachServiceName:(id)arg1 dispatchQueue:(id)arg2 ;
-(char)sendMessageAsync:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(id)makeStashWithId:(unsigned long long)arg1 ;
-(void)sendBarrier:(/*^block*/id)arg1 ;
-(CDDebug *)debug;
-(unsigned long long)sequenceNumber;
-(void)invalidateConnection;
-(void)cancelConnection;
@end

