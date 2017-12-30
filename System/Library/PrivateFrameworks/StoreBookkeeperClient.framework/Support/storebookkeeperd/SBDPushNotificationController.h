/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:42 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <storebookkeeperd/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSURL, NSArray, NSObject, APSConnection, NSMutableArray, NSNumber;

@interface SBDPushNotificationController : NSObject <APSConnectionDelegate> {

	NSString* _environment;
	NSMutableDictionary* _temporaryConnectionsByEnvironment;
	NSURL* _typeRegistrationURL;
	NSArray* _enabledDomains;
	char _pushEnabled;
	char _bagLoaded;
	char _registrationUpdateScheduled;
	id _fakeNotificationObserver;
	NSObject*<OS_dispatch_queue> _queue;
	APSConnection* _connection;
	NSMutableDictionary* _weakDomainDelegates;
	NSMutableDictionary* _pendingRequests;
	NSMutableArray* _registeredDomains;
	NSNumber* _registeredAccountID;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (readonly) APSConnection * connection;                             //@synthesize connection=_connection - In the implementation block
@property (readonly) NSMutableDictionary * weakDomainDelegates;              //@synthesize weakDomainDelegates=_weakDomainDelegates - In the implementation block
@property (readonly) NSMutableDictionary * pendingRequests;                  //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (readonly) NSMutableArray * registeredDomains;                     //@synthesize registeredDomains=_registeredDomains - In the implementation block
@property (readonly) NSNumber * registeredAccountID;                         //@synthesize registeredAccountID=_registeredAccountID - In the implementation block
@property (retain) NSArray * enabledDomains; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)deviceSupportsPushNotifications;
-(void)updateNotificationRegistrationsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setDelegate:(id)arg1 forBookkeeperDomain:(id)arg2 ;
-(void)_startServiceConnectionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_onQueue_updateConnectionTopicsAndStoreRegistrations;
-(void)updateStoreBookkeeperNotificationRegistration:(/*^block*/id)arg1 ;
-(void)_onQueue_updateStoreBookkeeperNotificationRegistration:(/*^block*/id)arg1 ;
-(void)_onQueue_updateStoreBookkeeperNotificationRegistrationForDomain:(id)arg1 optIn:(char)arg2 accountID:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(char)isEnabledForDomain:(id)arg1 ;
-(NSMutableDictionary *)weakDomainDelegates;
-(NSMutableArray *)registeredDomains;
-(NSNumber *)registeredAccountID;
-(id)init;
-(void)dealloc;
-(APSConnection *)connection;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_loadURLBagWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)enabledDomains;
-(void)setEnabledDomains:(NSArray *)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3 ;
-(void)connection:(id)arg1 didChangeConnectedStatus:(char)arg2 ;
-(void)connectionDidReconnect:(id)arg1 ;
-(NSMutableDictionary *)pendingRequests;
-(id)_portNameForEnvironmentName:(id)arg1 ;
@end

