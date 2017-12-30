/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SSXPCConnection, NSOperationQueue, NSMutableDictionary, NSMutableArray, SSVPlayActivityTable;

@interface SSVPlayActivityController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	SSXPCConnection* _connection;
	NSOperationQueue* _debugLogOperationQueue;
	NSMutableDictionary* _endpointIdentifierToEndpointRevisionInformation;
	int _endpointRevisionInformationDidChangeNotifyToken;
	char _hasAttemptedTableCreation;
	char _hasLoadedEndpointRevisionInformation;
	char _hasSetupEndpointRevisionInformationDidChangeNotifyToken;
	char _hasValidEndpointRevisionInformationDidChangeNotifyToken;
	NSMutableArray* _pendingFlushingSessions;
	NSObject*<OS_dispatch_queue> _serialQueue;
	SSVPlayActivityTable* _table;
	unsigned _writingStyle;

}

@property (nonatomic,readonly) unsigned writingStyle;              //@synthesize writingStyle=_writingStyle - In the implementation block
+(id)_requiredEndpointIdentifiers;
-(id)_table;
-(id)initWithWritingStyle:(unsigned)arg1 ;
-(void)_acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 shouldFilterStoreAccountID:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_revisionsIndexSetForPlayActivityEvents:(id)arg1 ;
-(void)_completePendingPlayEventsWithRevisionIndexSet:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1 ;
-(void)_getFlushSessionInformationForEndpointIdentifier:(id)arg1 shouldAcquire:(char)arg2 storeAccountID:(unsigned long long)arg3 shouldFilterStoreAccountID:(char)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)_loadEndpointIdentifierInformationIfNeeded;
-(void)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)_setEndpointRevisionInformation:(id)arg1 forEndpointIdentifier:(id)arg2 ;
-(id)_sessionInformationForSessionToken:(unsigned long long)arg1 ;
-(id)_copyEndpointRevisionInformationForEndpointIdentifier:(id)arg1 ;
-(void)getRevisionInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setupNotifyTokenIfNeeded;
-(void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)completePendingPlayActivityEventPersistentIDs:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)flushPendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getHasPendingPlayEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getPlayActivityEventsFromRevision:(unsigned long long)arg1 toRevision:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)recordPlayActivityEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeFlushedPlayActivityEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCurrentRevision:(unsigned long long)arg1 revisionVersionToken:(id)arg2 forEndpointIdentifier:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(unsigned)writingStyle;
-(id)init;
-(void)dealloc;
-(id)_connection;
@end

