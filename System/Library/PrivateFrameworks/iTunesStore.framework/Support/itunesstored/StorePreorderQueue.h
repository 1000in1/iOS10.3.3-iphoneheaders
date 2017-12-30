/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, ISOperationQueue;

@interface StorePreorderQueue : NSObject {

	NSMutableArray* _clients;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ISOperationQueue* _operationQueue;

}
+(void)observeXPCServer:(id)arg1 ;
+(id)sharedPreorderQueue;
+(void)cancelPreordersWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)checkQueueWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)getPreordersWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)registerManagerWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_clientDisconnectNotification:(id)arg1 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(/*^block*/id)arg3 ;
-(void)_sendChangeNotificationForKinds:(id)arg1 ;
-(id)_copyPreorderAccountIdentifiers;
-(void)_handleCheckQueueFinish:(id)arg1 ;
-(void)checkPreorderQueue;
-(id)_preorderQueryWithAccountID:(id)arg1 database:(id)arg2 ;
-(void)_handleLoadQueueFinish:(id)arg1 ;
-(id)_clientForConnection:(id)arg1 ;
-(void)addPreordersWithItems:(id)arg1 accountID:(id)arg2 ;
-(void)removePreordersWithPreorderIdentifiers:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

