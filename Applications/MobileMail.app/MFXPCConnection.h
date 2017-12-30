/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MFServiceConnectionState.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSLock, MailXPCServices;

@interface MFXPCConnection : NSObject <MFServiceConnectionState> {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _messageQueue;
	int _cancelFlag;
	NSLock* _errorHandlerLock;
	/*^block*/id _errorHandler;
	MailXPCServices* _serviceManager;

}

@property (assign,nonatomic) MailXPCServices * serviceManager;              //@synthesize serviceManager=_serviceManager - In the implementation block
@property (copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)dealloc;
-(void)stop;
-(void)start;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(void)handleError:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(MailXPCServices *)serviceManager;
-(void)setServiceManager:(MailXPCServices *)arg1 ;
-(char)shouldCancel;
@end

