/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/BatterySaverWatcherDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;
@class NSMutableDictionary, NSMutableArray, BatterySaverWatcher, NSObject, NSCountedSet, NSMutableSet, NSString;

@interface Daemon : NSObject <BatterySaverWatcherDelegate> {

	char _aliveForOperationQueues;
	NSMutableDictionary* _backgroundTaskObservers;
	NSMutableArray* _bagTimers;
	BatterySaverWatcher* _batterySaverWatcher;
	NSMutableDictionary* _cachedObjects;
	int _dialogCount;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_source> _jetsamSource;
	NSCountedSet* _keepAliveAssertions;
	NSMutableSet* _keepAliveOperationQueues;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	int _notifyToken;
	NSObject*<OS_xpc_object> _satisfiedWakeRequests;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)daemon;
-(void)takeKeepAliveAssertion:(id)arg1 ;
-(void)releaseKeepAliveAssertion:(id)arg1 ;
-(void)keepAliveWithAssertion:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)batterySaverWatcherDidChangeState:(id)arg1 ;
-(void)addKeepAliveOperationQueue:(id)arg1 ;
-(void)removeKeepAliveOperationQueue:(id)arg1 ;
-(void)removeBackgroundTaskObserver:(id)arg1 ;
-(id)addObserverForBackgroundTaskWithIdentifierPrefix:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)addBackgroundTaskWithRequest:(id)arg1 ;
-(void)cancelBackgroundTaskWithIdentifier:(id)arg1 ;
-(void)_initTransactionLog;
-(void)_warmUpSharedURLCache;
-(void)_networkUsageStateChangeNotification:(id)arg1 ;
-(void)_operationCountChanged:(id)arg1 ;
-(void)_reloadOperationKeepAliveTransaction;
-(void)_expireCachedObjectForKey:(id)arg1 ;
-(void)_releaseKeepAliveAssertion:(id)arg1 ;
-(void)_setGlobalState;
-(void)_initBackgroundTaskAgent;
-(void)_observeNotifications;
-(void)_getShowingDialogWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_registerAnissettNotifier;
-(void)_reloadWiFiManager;
-(void)_handleWakeWithName:(const char*)arg1 job:(id)arg2 ;
-(void)_updateMIDSINFs;
-(void)cacheObject:(id)arg1 withKey:(id)arg2 expirationInterval:(double)arg3 ;
-(char)hasBackgroundTaskWithIdentifier:(id)arg1 ;
-(void)removeCachedObjectForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)start;
-(void)beginShowingDialog;
-(void)endShowingDialog;
-(id)cachedObjectForKey:(id)arg1 ;
@end

