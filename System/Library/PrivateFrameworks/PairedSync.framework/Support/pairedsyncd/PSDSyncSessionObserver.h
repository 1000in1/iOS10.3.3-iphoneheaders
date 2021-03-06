/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:21 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pairedsyncd/PSDSchedulerObserver.h>
#import <libobjc.A.dylib/PSYSyncSessionProviderInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, PSYSyncSession, NSObject, PSDScheduler, NSString;

@interface PSDSyncSessionObserver : NSObject <PSDSchedulerObserver, PSYSyncSessionProviderInterface> {

	NSXPCConnection* _connection;
	PSYSyncSession* _lastSentSession;
	NSObject*<OS_dispatch_queue> _queue;
	PSDScheduler* _scheduler;
	char _isClientEntitled;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scheduler:(id)arg1 willStartSyncSession:(id)arg2 ;
-(void)scheduler:(id)arg1 didUpdateSyncSessionWithUpdate:(id)arg2 ;
-(void)scheduler:(id)arg1 didClearSyncSession:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)observer;
-(id)initWithXPCConnection:(id)arg1 ;
-(oneway void)requestActiveSyncSessionWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)checkin:(/*^block*/id)arg1 ;
@end

