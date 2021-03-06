/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@protocol SSRequestDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, SSXPCConnection, NSString;

@interface SSRequest : NSObject <SSXPCCoding> {

	int _backgroundTaskIdentifier;
	char _cancelAfterTaskExpiration;
	id<SSRequestDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSXPCConnection* _requestConnection;
	SSXPCConnection* _responseConnection;
	unsigned _assertionID;
	NSObject*<OS_dispatch_source> _backgroundTaskExpirationTimer;
	int _taskAssertionState;

}

@property (assign,nonatomic) char shouldCancelAfterTaskExpiration; 
@property (assign,nonatomic) id<SSRequestDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char usesTaskCompletionAssertions; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_shutdownRequest;
-(void)_startWithMessageID:(long long)arg1 messageBlock:(/*^block*/id)arg2 ;
-(id)_initSSRequest;
-(void)_shutdownRequestWithMessageID:(long long)arg1 ;
-(void)__beginBackgroundTask;
-(void)__endBackgroundTask;
-(void)_cancelBackgroundTaskExpirationTimer;
-(void)setUsesTaskCompletionAssertions:(char)arg1 ;
-(char)usesTaskCompletionAssertions;
-(void)setShouldCancelAfterTaskExpiration:(char)arg1 ;
-(char)shouldCancelAfterTaskExpiration;
-(void)_beginBackgroundTask;
-(void)_expireBackgroundTask;
-(id)init;
-(void)cancel;
-(void)setDelegate:(id<SSRequestDelegate>)arg1 ;
-(void)dealloc;
-(id<SSRequestDelegate>)delegate;
-(char)start;
-(void)disconnect;
-(void)_endBackgroundTask;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
@end

