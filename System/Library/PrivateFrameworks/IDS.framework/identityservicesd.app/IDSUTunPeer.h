/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:59 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/IDSUTunConnectionDelegate.h>
#import <identityservicesd/IDSWPLinkManagerConnectivityDelegate.h>

@protocol IDSUTunPeerDelegate, OS_dispatch_source;
@class NSString, IDSUTunConnection, NSMutableSet, NSTimer, NSObject, IDSUTunPeerServiceMap, NSDictionary;

@interface IDSUTunPeer : NSObject <IDSUTunConnectionDelegate, IDSWPLinkManagerConnectivityDelegate> {

	NSString* _identifier;
	NSString* _btUUID;
	NSString* _uniqueID;
	NSString* _originalbtUUID;
	IDSUTunConnection* _syncConnection;
	IDSUTunConnection* _defaultConnection;
	IDSUTunConnection* _urgentConnection;
	IDSUTunConnection* _syncCloudConnection;
	IDSUTunConnection* _defaultCloudConnection;
	IDSUTunConnection* _urgentCloudConnection;
	char _isConnected;
	char _isCloudConnected;
	char _isNearby;
	char _isPeerAwake;
	char _localSetupInProgress;
	char _isPeerAlwaysConnected;
	char _isDefaultPairedDevice;
	char _waitForDefaultPairedDevice;
	char _supportsCloudUrgentConnection;
	char _supportsCloudDefaultConnection;
	char _supportsCloudSyncConnection;
	char _pendingCloudUrgentEnable;
	char _pendingCloudDefaultEnable;
	char _pendingCloudSyncEnable;
	id<IDSUTunPeerDelegate> _delegate;
	NSMutableSet* _servicesPreferringInfraWiFi;
	unsigned long long _totalDeliveredMessagesInfraWiFi;
	unsigned long long _totalPacketsReceivedInfraWiFi;
	unsigned long long _totalPacketsReceivedClientSockets;
	unsigned _dispatchCounterInfraWiFi;
	char _hadInfraWiFiTraffic;
	NSTimer* _disableTimer;
	NSTimer* _cloudDisableTimer;
	NSObject*<OS_dispatch_source> _powerLogTimerUrgent;
	NSObject*<OS_dispatch_source> _powerLogTimerDefault;
	NSObject*<OS_dispatch_source> _powerLogTimerSync;
	NSObject*<OS_dispatch_source> _powerLogTimerSockets;
	int _continuityConnectCount;
	IDSUTunPeerServiceMap* _incomingServiceMap;
	IDSUTunPeerServiceMap* _outgoingServiceMap;

}

@property (assign,nonatomic) char localSetupInProgress;                                          //@synthesize localSetupInProgress=_localSetupInProgress - In the implementation block
@property (assign,nonatomic,__weak) id<IDSUTunPeerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * btUUID;                                                    //@synthesize btUUID=_btUUID - In the implementation block
@property (nonatomic,copy) NSString * uniqueID;                                                  //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) NSString * originalbtUUID;                                            //@synthesize originalbtUUID=_originalbtUUID - In the implementation block
@property (assign,nonatomic) char isNearby;                                                      //@synthesize isNearby=_isNearby - In the implementation block
@property (assign,nonatomic) char isPeerAwake;                                                   //@synthesize isPeerAwake=_isPeerAwake - In the implementation block
@property (nonatomic,readonly) char isConnected; 
@property (assign,nonatomic) char isCloudConnected;                                              //@synthesize isCloudConnected=_isCloudConnected - In the implementation block
@property (assign,nonatomic) char supportsCloudUrgentConnection;                                 //@synthesize supportsCloudUrgentConnection=_supportsCloudUrgentConnection - In the implementation block
@property (assign,nonatomic) char supportsCloudDefaultConnection;                                //@synthesize supportsCloudDefaultConnection=_supportsCloudDefaultConnection - In the implementation block
@property (assign,nonatomic) char supportsCloudSyncConnection;                                   //@synthesize supportsCloudSyncConnection=_supportsCloudSyncConnection - In the implementation block
@property (assign,nonatomic) char pendingCloudUrgentEnable;                                      //@synthesize pendingCloudUrgentEnable=_pendingCloudUrgentEnable - In the implementation block
@property (assign,nonatomic) char pendingCloudDefaultEnable;                                     //@synthesize pendingCloudDefaultEnable=_pendingCloudDefaultEnable - In the implementation block
@property (assign,nonatomic) char pendingCloudSyncEnable;                                        //@synthesize pendingCloudSyncEnable=_pendingCloudSyncEnable - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * sendingMessageStatistics; 
@property (nonatomic,readonly) NSDictionary * urgentPriorityMessageStatistics; 
@property (nonatomic,readonly) NSDictionary * urgentCloudPriorityMessageStatistics; 
@property (nonatomic,readonly) NSDictionary * defaultPriorityMessageStatistics; 
@property (nonatomic,readonly) NSDictionary * syncPriorityMessageStatistics; 
@property (assign,nonatomic) int continuityConnectCount;                                         //@synthesize continuityConnectCount=_continuityConnectCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_powerlogTransportStats;
-(NSDictionary *)sendingMessageStatistics;
-(id)_copyStatisticsDict:(id)arg1 ;
-(void)_addStatsFromDict:(id)arg1 toAggregate:(id)arg2 ;
-(void)_addUniqueTopicsFrom:(id)arg1 to:(id)arg2 ;
-(void)_accumulateStats:(id)arg1 intoMessages:(unsigned long long*)arg2 andBytes:(unsigned long long*)arg3 ;
-(id)_copyPowerlogDictionaryWithOutgoingStats:(id)arg1 incomingStats:(id)arg2 ;
-(void)_powerlogDictionaryForPriority:(int)arg1 ;
-(void)_powerlogDictionaryForSockets;
-(void)setEnableOTR:(char)arg1 ;
-(void)setIsPeerAwake:(char)arg1 ;
-(NSDictionary *)syncPriorityMessageStatistics;
-(NSDictionary *)defaultPriorityMessageStatistics;
-(NSDictionary *)urgentPriorityMessageStatistics;
-(NSDictionary *)urgentCloudPriorityMessageStatistics;
-(id)defaultCloudPriorityMessageStatistics;
-(id)syncCloudPriorityMessageStatistics;
-(void)_powerLogServices:(id)arg1 prefersInfraWifi:(char)arg2 ;
-(void)_checkServicesPreferringInfraWiFi:(unsigned)arg1 ;
-(void)setLocalSetupInProgress:(char)arg1 ;
-(void)dropDisallowedMessages;
-(void)trafficClassesChanged;
-(void)cancelMessageID:(id)arg1 ;
-(id)_connectionForPriority:(int)arg1 messageType:(long long)arg2 ;
-(id)_stringForConnection:(id)arg1 ;
-(int)_priorityForConnection:(id)arg1 ;
-(long long)_connectionTypeForConnection:(id)arg1 ;
-(void)_startDisableTimerIfNecessary;
-(void)_startCloudDisableTimerIfNecessary;
-(void)_clearDisableTimer;
-(void)_handleCBUUIDDidConnect:(id)arg1 isDefaultPairedDevice:(char)arg2 isAlwaysConnected:(char)arg3 ;
-(void)_handleCBUUIDFailToConnect:(id)arg1 ;
-(char)_allConnectionsAreEmpty;
-(void)_disableTimerFired:(id)arg1 ;
-(char)_allCloudConnectionsAreEmpty;
-(void)_cloudDisableTimerFired:(id)arg1 ;
-(void)_clearCloudDisableTimer;
-(void)admissionPolicyChangedForTopic:(id)arg1 allowed:(char)arg2 ;
-(void)connectionConnectivityChanged:(id)arg1 ;
-(void)connection:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(char)arg7 expectsPeerResponse:(char)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 isCompressed:(char)arg11 ;
-(void)connection:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(char)arg7 expectsPeerResponse:(char)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 isCompressed:(char)arg11 ;
-(void)connection:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(char)arg7 expectsPeerResponse:(char)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 isCompressed:(char)arg11 ;
-(void)connection:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 fromID:(id)arg3 messageID:(id)arg4 peerResponseIdentifier:(id)arg5 ;
-(void)connectionHasSpaceForMessages:(id)arg1 dataProtectionClass:(unsigned)arg2 ;
-(void)connectionIsEmpty:(id)arg1 ;
-(void)connectionIsEmptyOfCloudMessages:(id)arg1 ;
-(void)manager:(id)arg1 cbuuidDidConnect:(id)arg2 isAlwaysConnected:(char)arg3 ;
-(void)manager:(id)arg1 cbuuidDidDisconnect:(id)arg2 ;
-(char)manager:(id)arg1 cbuuidDidDiscover:(id)arg2 ;
-(void)manager:(id)arg1 cbuuidDidFailToConnect:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 btUUID:(id)arg2 uniqueID:(id)arg3 ;
-(void)setBtUUID:(NSString *)arg1 ;
-(id)copyConnectionForPriority:(int)arg1 ;
-(id)copyCloudConnectionForPriority:(int)arg1 ;
-(char)hasSpaceForMessagesWithPriority:(int)arg1 dataProtectionClass:(unsigned)arg2 messageType:(long long)arg3 ;
-(void)enableConnection;
-(void)enableCloudConnection;
-(void)disableConnectionForReason:(int)arg1 ;
-(void)disableCloudConnectionForReason:(int)arg1 ;
-(void)setPreferInfraWiFi:(char)arg1 services:(id)arg2 ;
-(void)unpairStart;
-(void)sendMessage:(id)arg1 priority:(int)arg2 messageType:(long long)arg3 ;
-(void)forceOTRNegotiationForTopic:(id)arg1 priority:(int)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSString *)btUUID;
-(char)localSetupInProgress;
-(char)isPeerAwake;
-(char)supportsCloudUrgentConnection;
-(void)setSupportsCloudUrgentConnection:(char)arg1 ;
-(char)supportsCloudSyncConnection;
-(void)setSupportsCloudSyncConnection:(char)arg1 ;
-(char)supportsCloudDefaultConnection;
-(void)setSupportsCloudDefaultConnection:(char)arg1 ;
-(char)pendingCloudSyncEnable;
-(void)setPendingCloudSyncEnable:(char)arg1 ;
-(char)pendingCloudUrgentEnable;
-(void)setPendingCloudUrgentEnable:(char)arg1 ;
-(char)pendingCloudDefaultEnable;
-(void)setPendingCloudDefaultEnable:(char)arg1 ;
-(int)continuityConnectCount;
-(void)setContinuityConnectCount:(int)arg1 ;
-(NSString *)originalbtUUID;
-(void)setOriginalbtUUID:(NSString *)arg1 ;
-(void)setIsCloudConnected:(char)arg1 ;
-(void)setDelegate:(id<IDSUTunPeerDelegate>)arg1 ;
-(void)dealloc;
-(id<IDSUTunPeerDelegate>)delegate;
-(NSString *)identifier;
-(char)isConnected;
-(char)isCloudConnected;
-(NSString *)uniqueID;
-(void)clearStats;
-(void)setUniqueID:(NSString *)arg1 ;
-(void)setIsNearby:(char)arg1 ;
-(void)setLinkPreferences:(id)arg1 ;
-(char)isNearby;
@end

