/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:02 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, ISOperationQueue;

@interface RequestQueue : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ISOperationQueue* _operationQueue;

}

@property (retain) ISOperationQueue * operationQueue; 
-(void)observeXPCServer:(id)arg1 ;
-(void)cancelOperationForConnection:(id)arg1 ;
-(void)addOperation:(id)arg1 forMessage:(id)arg2 connection:(id)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)addOperation:(id)arg1 forClient:(id)arg2 withMessageBlock:(/*^block*/id)arg3 ;
-(id)operationForConnection:(id)arg1 ;
-(void)_cancelRequest:(id)arg1 connection:(id)arg2 ;
-(void)_disconnectRequest:(id)arg1 connection:(id)arg2 ;
-(void)disconnectOperationForConnection:(id)arg1 ;
-(void)setClient:(id)arg1 forOperation:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setOperationQueue:(ISOperationQueue *)arg1 ;
-(ISOperationQueue *)operationQueue;
-(void)addOperation:(id)arg1 ;
@end

