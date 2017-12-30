/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:00 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSPushHandlerDelegate.h>
#import <libobjc.A.dylib/IMSystemMonitorListener.h>
#import <identityservicesd/IDSUTunDeliveryControllerDelegate.h>
#import <identityservicesd/IDSDuetInterfaceDelegate.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, IMRemoteObjectBroadcaster, NSDate, NSTimer, IMMultiQueue, IMPair, IMPowerAssertion, FTMessageDelivery, NSString;

@interface IDSDaemon : NSObject <IDSPushHandlerDelegate, IMSystemMonitorListener, IDSUTunDeliveryControllerDelegate, IDSDuetInterfaceDelegate> {

	opaque_pthread_mutex_t _listenerLock;
	NSMutableArray* _listeners;
	NSMutableArray* _listenerLocalObjects;
	NSMutableArray* _listenerIDs;
	NSMutableArray* _listenerServices;
	NSMutableArray* _listenerNotificationServices;
	NSMutableArray* _listenerCommands;
	NSMutableArray* _listenerCapabilities;
	NSMutableArray* _listenerEntitlements;
	NSMutableArray* _listenerBundleIDs;
	NSMutableDictionary* _queuedBroadcastAttempts;
	NSMutableDictionary* _urgentQueuedBroadcastAttempts;
	NSMutableDictionary* _defaultQueuedBroadcastAttempts;
	NSMutableDictionary* _syncQueuedBroadcastAttempts;
	NSMutableSet* _listenerCachedServices;
	NSMutableSet* _listenerCachedCommands;
	IMRemoteObjectBroadcaster* _notifier;
	NSDate* _birthDate;
	NSTimer* _storageTimer;
	NSMutableSet* _messagesReceivedDuringStorage;
	NSTimer* _nonUrgentInternetSendTimer;
	int _nonUrgentInternetLastAttempt;
	IMMultiQueue* _incomingMessageMultiQueue;
	NSMutableDictionary* _pendingOutgoingAttachments;
	NSMutableDictionary* _pendingIncomingAttachments;
	opaque_pthread_mutex_t _localIncomingGUIDsLock;
	IMPair* _localIncomingGUIDs;
	IMPair* _remoteIncomingGUIDs;
	opaque_pthread_mutex_t _incomingLocalPowerAssertionLock;
	unsigned _incomingLocalPowerAssertionClients;
	IMPowerAssertion* _incomingLocalPowerAssertion;
	id _stateMonitor;
	char _isHardReset;
	char _cloudPairingBeforeFirstUnlock;
	char _hasProcessedMessagesAfterFirstUnlock;
	unsigned char _deviceIsAsleep;
	FTMessageDelivery* _homeKitMessageDelivery;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceController;
+(id)uTunDeliveryController;
+(void)logAccessWarningForAccount:(id)arg1 withService:(id)arg2 entitlement:(id)arg3 clientEntitlements:(id)arg4 logMessage:(id)arg5 ;
+(char)entitlementDictionary:(id)arg1 isEntitledToAccessService:(id)arg2 forEntitlement:(id)arg3 forAccount:(id)arg4 shouldWarn:(char)arg5 ;
+(id)messageStoreForDataProtectionClass:(unsigned)arg1 ;
+(char)_canBulkMessageWithPriority:(int)arg1 adHocServiceType:(unsigned)arg2 ;
+(void)_sendMessageWithSendParameters:(id)arg1 threadContext:(id)arg2 onObject:(id)arg3 willSendBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
+(char)_shouldReplaceLocalDestination:(id)arg1 ;
+(void)_forwardSendMessageToAccountWithSendParameters:(id)arg1 service:(id)arg2 threadContext:(id)arg3 guid:(id)arg4 dataProtectionClass:(unsigned)arg5 willSendBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
+(void)_sendLocalDeliveryMessagesForAccountUUID:(id)arg1 threadContext:(id)arg2 priority:(int)arg3 dataProtectionClass:(unsigned)arg4 ;
+(void)_performDuetCheckAndSendForServiceIdentifier:(id)arg1 serviceDuetIdentifiers:(id)arg2 sendParameters:(id)arg3 logString:(id)arg4 fromQueue:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
+(void)sendMessageWithIDSSendParameters:(id)arg1 messageContext:(id)arg2 threadContext:(id)arg3 onObject:(id)arg4 ;
+(void)_sendLocalDeliveryMessagesForAccountUUID:(id)arg1 threadContext:(id)arg2 priority:(int)arg3 messageTypes:(id)arg4 dataProtectionClass:(unsigned)arg5 ;
+(char)_commandIsSessionCommand:(int)arg1 ;
+(id)sharedInstance;
+(id)pairingManager;
+(id)accountController;
+(id)daemon;
-(id)broadcasterForLocalObject:(id)arg1 messageContext:(id)arg2 ;
-(void)homeKitGetServiceUserIDsWithMessageContext:(id)arg1 ;
-(void)homeKitGetAdminAccessTokensWithServiceUserID:(id)arg1 accessoryID:(id)arg2 pairingToken:(id)arg3 messageContext:(id)arg4 ;
-(void)homeKitGetConsentTokensWithServiceUserID:(id)arg1 accessoryIDs:(id)arg2 adminID:(id)arg3 messageContext:(id)arg4 ;
-(void)homeKitGetUserAccessTokensWithServiceUserID:(id)arg1 userID:(id)arg2 userHandle:(id)arg3 accessoryRequests:(id)arg4 messageContext:(id)arg5 ;
-(void)homeKitRefreshUserAccessTokensWithServiceUserID:(id)arg1 userID:(id)arg2 accessoryRequests:(id)arg3 messageContext:(id)arg4 ;
-(void)duetInterface:(id)arg1 resourceAvailabilityChangedForIdentifiers:(id)arg2 ;
-(id)broadcasterForTopic:(id)arg1 entitlement:(id)arg2 command:(id)arg3 messageContext:(id)arg4 ;
-(void)logState;
-(void)_cleanupOutgoingMessageDatabase;
-(id)serviceController;
-(char)validateListenerForLocalObject:(id)arg1 andCheckEntitlement:(id)arg2 ;
-(void)_respondToAppleCareRequestID:(id)arg1 withMessageContext:(id)arg2 error:(id)arg3 ;
-(id)listenerForLocalObject:(id)arg1 ;
-(void)appleCareSignInUserName:(id)arg1 DSID:(id)arg2 authToken:(id)arg3 requestID:(id)arg4 messageContext:(id)arg5 ;
-(void)appleCareSignOutUserWithRequestID:(id)arg1 messageContext:(id)arg2 ;
-(void)_performSetup;
-(id)daemonCapabilities;
-(void)_pidSuspended:(int)arg1 ;
-(id)uTunController;
-(void)_cleanupIncomingFilesDirectory;
-(void)_resetPreferences;
-(id)uTunDeliveryController;
-(id)registrationController;
-(id)registrationPushManager;
-(id)centralRegListener;
-(id)deviceHeartbeatCenter;
-(id)encryptionController;
-(id)sessionController;
-(id)idStatusQueryController;
-(id)daemonMIGInterface;
-(id)daemonMIGQueryInterface;
-(id)messageStoreMigrator;
-(void)_processStoredMessagesIncludingClassD:(char)arg1 ;
-(void)_startPushHandlingLocked;
-(void)_postAliveNotification;
-(void)_terminate;
-(void)_processOutgoingNonUrgentInternetMessages;
-(void)_resourceAvailabilityChangedForIdentifiers:(id)arg1 priorities:(id)arg2 dataProtectionClasses:(id)arg3 ;
-(char)clientAtIndex:(unsigned)arg1 isEntitledToAccessService:(id)arg2 forEntitlement:(id)arg3 shouldWarn:(char)arg4 ;
-(void)removeListenerObject:(id)arg1 ;
-(void)_resetQueuedBroadcastsForServices:(id)arg1 priority:(int)arg2 ;
-(char)_processQueuedBroadcastsForServices:(id)arg1 priority:(int)arg2 forceRetry:(char)arg3 ;
-(void)_dropQueuedBroadcastsForServices:(id)arg1 priority:(int)arg2 ;
-(void)_cleanupListenerWithPid:(int)arg1 ;
-(void)updateTopics;
-(void)_updatePushCommandsLocked;
-(id)_newSetupInfoWithContext:(id)arg1 ;
-(void)refreshBundleIDs;
-(void)_resetBroadcastQueuesForServices:(id)arg1 ;
-(void)_flushBroadcastQueuesForServices:(id)arg1 existingServices:(id)arg2 ;
-(void)validateListenerForLocalObject:(id)arg1 andPerformBlock:(/*^block*/id)arg2 ;
-(char)validateListenerForLocalObject:(id)arg1 andCheckEntitlement:(id)arg2 forAccessToServiceWithIdentifier:(id)arg3 ;
-(void)_removeListener:(id)arg1 ;
-(void)_removeListenerObject:(id)arg1 ;
-(void)_removeLocalListenerObject:(id)arg1 ;
-(void)removeLocalListenerObject:(id)arg1 ;
-(id)_localPushTopics;
-(char)_lockedRemoteObjectAtIndex:(unsigned)arg1 matchesService:(id)arg2 entitlement:(id)arg3 command:(id)arg4 capabilities:(unsigned)arg5 ignoreService:(char)arg6 useNotificationServices:(char)arg7 ;
-(id)_lockedRemoteObjectsWithService:(id)arg1 entitlement:(id)arg2 command:(id)arg3 capabilities:(unsigned)arg4 ignoreService:(char)arg5 useNotificationServices:(char)arg6 ;
-(id)_lockedRemoteObjectsWithService:(id)arg1 entitlement:(id)arg2 command:(id)arg3 capabilities:(unsigned)arg4 ;
-(id)broadcasterForTopic:(id)arg1 entitlement:(id)arg2 messageContext:(id)arg3 ;
-(id)broadcasterForTopic:(id)arg1 ignoreServiceListener:(char)arg2 messageContext:(id)arg3 ;
-(id)_lockedRemoteObjectsWithService:(id)arg1 entitlement:(id)arg2 command:(id)arg3 capabilities:(unsigned)arg4 ignoreService:(char)arg5 ;
-(id)broadcastAttemptQueueFromPriority:(int)arg1 ;
-(void)enqueueIncomingMessageBroadcast:(/*^block*/id)arg1 broadcastData:(id)arg2 forTopic:(id)arg3 entitlement:(id)arg4 command:(id)arg5 capabilities:(unsigned)arg6 messageContext:(id)arg7 ;
-(id)_lockedRemoteObjectsWithNotificationService:(id)arg1 entitlement:(id)arg2 command:(id)arg3 capabilities:(unsigned)arg4 ;
-(void)_printPriorityBroadcastQueuesForCaller:(id)arg1 priority:(int)arg2 ;
-(void)releaseBroadcastAttemptQueue:(int)arg1 ;
-(void)_printBroadcastAttemptMapForPriority:(int)arg1 service:(id)arg2 ;
-(void)logAccessWarningForClientAtIndex:(unsigned)arg1 withService:(id)arg2 entitlement:(id)arg3 logMessage:(id)arg4 ;
-(char)_setupListenerConnection:(id)arg1 listenerID:(id)arg2 pid:(int)arg3 setupInfo:(id)arg4 entitlements:(id)arg5 setupCompletionBlock:(/*^block*/id)arg6 ;
-(id)accountWithIdentifier:(id)arg1 localObject:(id)arg2 requiredEntitlement:(id)arg3 ;
-(void)deliveryController:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(char)arg8 expectsPeerResponse:(char)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(int)arg12 isCompressed:(char)arg13 connectionType:(long long)arg14 ;
-(void)deliveryController:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(char)arg8 expectsPeerResponse:(char)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(int)arg12 isCompressed:(char)arg13 connectionType:(long long)arg14 ;
-(void)deliveryController:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(char)arg8 expectsPeerResponse:(char)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(int)arg12 isCompressed:(char)arg13 connectionType:(long long)arg14 ;
-(void)deliveryController:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 deviceID:(id)arg3 btUUID:(id)arg4 messageID:(id)arg5 peerResponseIdentifier:(id)arg6 priority:(int)arg7 connectionType:(long long)arg8 ;
-(void)deliveryControllerHasSpaceforNonUrgentMessages:(id)arg1 priority:(int)arg2 dataProtectionClass:(unsigned)arg3 ;
-(void)deliveryControllerHasSpaceforNonUrgentMessages:(id)arg1 priority:(int)arg2 dataProtectionClass:(unsigned)arg3 ofTypes:(id)arg4 ;
-(void)deliveryControllerHasSpaceforUrgentMessages:(id)arg1 dataProtectionClass:(unsigned)arg2 ofTypes:(id)arg3 ;
-(id)deliveryControllerQueuedIncomingMessageDictionary:(id)arg1 ;
-(void)dropQueuedBroadcastsForServices:(id)arg1 ;
-(char)validateListenerForLocalObject:(id)arg1 ;
-(id)listenerWithName:(id)arg1 ;
-(void)_stopPushHandling;
-(id)broadcasterForTarget:(id)arg1 messageContext:(id)arg2 ;
-(id)broadcasterForEntitlement:(id)arg1 messageContext:(id)arg2 ;
-(char)_lockedRemoteObjectAtIndex:(unsigned)arg1 matchesService:(id)arg2 entitlement:(id)arg3 command:(id)arg4 capabilities:(unsigned)arg5 ;
-(id)registrationBroadcasterForTopic:(id)arg1 messageContext:(id)arg2 ;
-(id)broadcasterForTopic:(id)arg1 messageContext:(id)arg2 ;
-(void)enqueueBroadcast:(/*^block*/id)arg1 forTopic:(id)arg2 entitlement:(id)arg3 command:(id)arg4 capabilities:(unsigned)arg5 messageContext:(id)arg6 ;
-(id)dequeueBroadcastWithID:(long long)arg1 forMessageUUID:(id)arg2 service:(id)arg3 priority:(int)arg4 ;
-(char)daemonInterface:(id)arg1 shouldGrantAccessForPID:(int)arg2 auditToken:(SCD_Struct_ID23)arg3 portName:(id)arg4 listenerConnection:(id)arg5 setupInfo:(id)arg6 setupResponse:(id*)arg7 ;
-(void)setListenerServices:(id)arg1 commands:(id)arg2 capabilities:(unsigned)arg3 messageContext:(id)arg4 ;
-(void)registerForNotificationsOnServices:(id)arg1 messageContext:(id)arg2 ;
-(void)xpcObject:(id)arg1 objectContext:(id)arg2 messageContext:(id)arg3 ;
-(void)openSocketWithOptions:(id)arg1 messageContext:(id)arg2 ;
-(void)closeSocketWithOptions:(id)arg1 messageContext:(id)arg2 ;
-(void)getDeliveryStatsWithMessageContext:(id)arg1 ;
-(void)setupAccountWithLoginID:(id)arg1 serviceName:(id)arg2 accountType:(int)arg3 accountConfig:(id)arg4 authToken:(id)arg5 password:(id)arg6 transactionID:(id)arg7 messageContext:(id)arg8 ;
-(void)_respondToRegistrationControlWithRequestID:(id)arg1 status:(int)arg2 messageContext:(id)arg3 error:(id)arg4 ;
-(int)_getCurrentRegistrationControlStatusForRegistrationType:(int)arg1 withError:(id*)arg2 ;
-(void)respondToRegistrationControlActionWithRequestID:(id)arg1 messageContext:(id)arg2 error:(id)arg3 ;
-(void)addAccountWithLoginID:(id)arg1 serviceName:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountInfo:(id)arg5 messageContext:(id)arg6 ;
-(void)_removeAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)_removeAndDeregisterAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)updateAccount:(id)arg1 withAccountInfo:(id)arg2 messageContext:(id)arg3 ;
-(void)enableAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)disableAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)setLoginID:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)authTokenChanged:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)passwordChanged:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)authenticateAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)passwordUpdatedForAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 forAccount:(id)arg3 messageContext:(id)arg4 ;
-(void)validateProfileForAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)addAliases:(id)arg1 toAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)removeAliases:(id)arg1 fromAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)validateAliases:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)unvalidateAliases:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)registerAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)unregisterAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)_reregisterAndReidentify:(id)arg1 account:(id)arg2 messageContext:(id)arg3 ;
-(void)deactivateAndPurgeIdentifyForAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)hardDeregisterWithMessageContext:(id)arg1 ;
-(void)triggerFinalDeregisterWithMessageContext:(id)arg1 ;
-(void)kickGetDependentForAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)reRegisterWithUserID:(id)arg1 action:(id)arg2 service:(id)arg3 messageContext:(id)arg4 ;
-(void)initialLocalSyncStartedForServices:(id)arg1 messageContext:(id)arg2 ;
-(void)initialLocalSyncCompletedForServices:(id)arg1 messageContext:(id)arg2 ;
-(void)reunionSyncStartedForServices:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3 ;
-(void)reunionSyncCompletedForServices:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3 ;
-(void)iCloudSignInWithUserName:(id)arg1 authToken:(id)arg2 password:(id)arg3 accountInfo:(id)arg4 accountStatus:(id)arg5 handles:(id)arg6 messageContext:(id)arg7 ;
-(void)iCloudUpdateForUserName:(id)arg1 accountInfo:(id)arg2 messageContext:(id)arg3 ;
-(void)iCloudSignOutWithMessageContext:(id)arg1 ;
-(void)iCloudSignInHackWithUserName:(id)arg1 password:(id)arg2 messageContext:(id)arg3 ;
-(void)iCloudSignOutHackWithMessageContext:(id)arg1 ;
-(void)idsiCloudSignInDataMigratorForID:(id)arg1 messageContext:(id)arg2 ;
-(void)updateSubServices:(id)arg1 forService:(id)arg2 deviceUniqueID:(id)arg3 messageContext:(id)arg4 ;
-(void)setPairedDeviceInfo:(id)arg1 messageContext:(id)arg2 ;
-(void)setNSUUID:(id)arg1 onDeviceWithUniqueID:(id)arg2 forService:(id)arg3 messageContext:(id)arg4 ;
-(void)incomingAccountSyncMessage:(id)arg1 messageContext:(id)arg2 ;
-(void)rollKeysWithMessageContext:(id)arg1 ;
-(void)registrationControlSetRegistrationStateForRegistrationType:(int)arg1 toState:(int)arg2 requestID:(id)arg3 messageContext:(id)arg4 ;
-(void)registrationControlGetRegistrationStateForRegistrationType:(int)arg1 requestID:(id)arg2 messageContext:(id)arg3 ;
-(char)_validateListenerForLocalPairingWithMessageContext:(id)arg1 error:(id*)arg2 ;
-(void)_respondToRequestID:(id)arg1 withMessageContext:(id)arg2 error:(id)arg3 ;
-(void)_processMessagesUponUnpairing;
-(id)_pairingDeviceCBUUIDs;
-(void)_respondToRequestID:(id)arg1 withMessageContext:(id)arg2 error:(id)arg3 pairedDevices:(id)arg4 ;
-(id)_pairedDeviceCBUUIDs;
-(id)_sortedArrayFromCBUUIDSet:(id)arg1 ;
-(void)_processDisallowedMessages;
-(void)addPairedDeviceWithID:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3 ;
-(void)setupCompletedForPairedDeviceWithID:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3 ;
-(void)connectPairedDeviceWithID:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3 ;
-(void)stopLocalPairingForDeviceWithID:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3 ;
-(void)unpairDeviceWithID:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3 ;
-(void)unpairStartForDeviceWithID:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3 ;
-(void)deletePairedDeviceWithID:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3 ;
-(void)dropAllMessagesWithoutAnyAllowedClassifierForDevice:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3 ;
-(void)setAllowedTrafficClassifiersForDevice:(id)arg1 classifiers:(id)arg2 requestID:(id)arg3 messageContext:(id)arg4 ;
-(void)switchActivePairedDeviceWithID:(id)arg1 requestID:(id)arg2 messageContext:(id)arg3 ;
-(void)getPairingDevicesWithRequestID:(id)arg1 messageContext:(id)arg2 ;
-(void)getPairedDevicesWithRequestID:(id)arg1 messageContext:(id)arg2 ;
-(void)startLocalSetupWithMessageContext:(id)arg1 ;
-(void)addPairedDevice:(id)arg1 messageContext:(id)arg2 ;
-(void)localSetupCompletedWithMessageContext:(id)arg1 ;
-(void)connectPairedDevice:(id)arg1 messageContext:(id)arg2 ;
-(void)stopLocalSetupWithMessageContext:(id)arg1 ;
-(void)localSetupUnpairWithMessageContext:(id)arg1 ;
-(void)localSetupUnpairStartWithMessageContext:(id)arg1 ;
-(void)deletePairedDevice:(id)arg1 messageContext:(id)arg2 ;
-(void)getLocalDeviceInfoWithMessageContext:(id)arg1 ;
-(void)dropAllMessagesWithoutAnyAllowedClassifierWithMessageContext:(id)arg1 ;
-(void)getPairedDeviceInfoWithMessageContext:(id)arg1 ;
-(void)setAllowedTrafficClasses:(id)arg1 messageContext:(id)arg2 ;
-(id)messageStoreForDataProtectionClass:(unsigned)arg1 ;
-(void)_performDuetCheckAndSendForAccount:(id)arg1 sendParameters:(id)arg2 logString:(id)arg3 fromQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_handleSpaceBecomingAvailableForUrgentLocalMessagesWithDataProtectionClasses:(id)arg1 withMessageTypes:(id)arg2 ;
-(void)_failSavedMessageCleanly:(id)arg1 withResponseCode:(int)arg2 ;
-(void)_cleanupOutgoingMessages;
-(void)_cleanupOutgoingQWSMessages;
-(void)_cleanupOutgoingExpiredMessages;
-(void)_cleanupRunawayClientOutgoingMessages;
-(void)_failSavedMessagesCleanly:(id)arg1 withResponseCode:(int)arg2 ;
-(unsigned)_maxOutgoingDatabasesSizeInMB;
-(unsigned)_maxMessagesForRunawayClientConsideration;
-(void)_fetchAccountEntitlements:(id*)arg1 listenerID:(id*)arg2 inContext:(id)arg3 ;
-(char)_canSendMessageWithAccount:(id)arg1 toDestinations:(id)arg2 ;
-(char)_shouldIncludeDefaultDeviceAsDestinationForMessageForFromID:(id)arg1 service:(id)arg2 ;
-(void)_resourceAvailabilityChangedForIdentifiers:(id)arg1 priorities:(id)arg2 dataProtectionClasses:(id)arg3 messageTypes:(id)arg4 ;
-(void)_resourceAvailabilityChangedForIdentifiers:(id)arg1 priority:(int)arg2 dataProtectionClass:(unsigned)arg3 ;
-(void)_resourceAvailabilityChangedForIdentifiers:(id)arg1 priority:(int)arg2 dataProtectionClass:(unsigned)arg3 messageTypes:(id)arg4 ;
-(void)_processLocalMessagesWithAccountUUIDs:(id)arg1 priority:(int)arg2 dataProtectionClass:(unsigned)arg3 ;
-(void)_processLocalMessagesWithAccountUUIDs:(id)arg1 priority:(int)arg2 dataProtectionClass:(unsigned)arg3 messageTypes:(id)arg4 ;
-(void)_nonUrgentInternetSendTimerFired;
-(int)_currentSecondsIntoDay;
-(double)_nonUrgentInternetSendProbabilityForCurrentWindow;
-(char)_hasNonUrgentInternetSendingBudget;
-(char)_rollDieForNonUrgentInternetSend;
-(void)_updateNonUrgentInternetSendTimer;
-(void)_optionallyDecryptMessage:(id)arg1 encryptedData:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 allowRetry:(char)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)_sendErrorMessage:(id)arg1 fromID:(id)arg2 toDestinations:(id)arg3 usingAccountWithUniqueID:(id)arg4 useDictAsTopLevel:(char)arg5 dataToEncrypt:(id)arg6 wantsResponse:(char)arg7 timeout:(double)arg8 command:(id)arg9 priority:(int)arg10 completionBlock:(/*^block*/id)arg11 ;
-(char)_checkIfDupeAndNoteGuid:(id)arg1 local:(char)arg2 topic:(id)arg3 ;
-(void)getLocalIncomingPowerAssertion:(id)arg1 queue:(id)arg2 ;
-(id)_decryptAOverCMessage:(id)arg1 topic:(id)arg2 fromDeviceID:(id)arg3 ;
-(void)_processIncomingLocalMessage:(id)arg1 topic:(id)arg2 command:(id)arg3 deviceID:(id)arg4 btUUID:(id)arg5 context:(id)arg6 storedGUID:(id)arg7 priority:(id)arg8 connectionType:(long long)arg9 ;
-(void)_processStoredIncomingLocalMessage:(id)arg1 ;
-(void)_processIncomingRemoteMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 storedGuid:(id)arg4 messageContext:(id)arg5 ;
-(void)_processStoredIncomingLocalMessages;
-(void)_processStoredIncomingRemoteMessagesWithGUIDs:(id)arg1 ;
-(void)_processDeletingMessagesWithPriority:(int)arg1 reason:(id)arg2 responseCode:(int)arg3 allowedTrafficClasses:(id)arg4 ;
-(void)_processStoredIncomingMessages;
-(id)_payloadFromDecryptedData:(id)arg1 ;
-(char)_processNonMessagingPayloadWithCommand:(id)arg1 dictionaryPayload:(id)arg2 senderToken:(id)arg3 topic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 peerResponseIdentifier:(id)arg7 guid:(id)arg8 service:(id)arg9 messageContext:(id)arg10 ;
-(char)shouldProxyMessageForService:(id)arg1 toIdentifier:(id)arg2 ;
-(void)_handleIncomingAttachmentMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_enqueueBlock:(/*^block*/id)arg1 withTimeout:(double)arg2 forKey:(id)arg3 ;
-(char)_isBulkingStorageMessages;
-(void)_noteLastItemFromStorage:(id)arg1 ;
-(void)_noteItemFromStorage:(id)arg1 ;
-(void)_ackMessageWithSequenceNumber:(unsigned)arg1 forDeviceID:(id)arg2 priority:(int)arg3 connectionType:(long long)arg4 guid:(id)arg5 ;
-(id)_incomingMessageStorageDictionaryForPayload:(id)arg1 topic:(id)arg2 deviceID:(id)arg3 btUUID:(id)arg4 command:(id)arg5 messageUUID:(id)arg6 sequenceNumber:(id)arg7 wantsAppAck:(char)arg8 expectsPeerResponse:(char)arg9 peerResponseIdentifier:(id)arg10 ;
-(char)_shouldStoreBeforeFirstUnlockIncomingLocalMessage:(id)arg1 from:(id)arg2 forTopic:(id)arg3 ;
-(char)_checkIfDupeAndNoteGuid:(id)arg1 local:(char)arg2 topic:(id)arg3 forceNoteGuid:(char)arg4 ;
-(void)_addIncomingGUIDsWithGuid:(id)arg1 isLocal:(char)arg2 hasLock:(char)arg3 ;
-(long long)_messageTypeForConnection:(long long)arg1 ;
-(void)sendServerMessage:(id)arg1 command:(id)arg2 usingAccountWithUniqueID:(id)arg3 messageContext:(id)arg4 ;
-(void)sendMessageWithSendParameters:(id)arg1 messageContext:(id)arg2 ;
-(void)setPreferInfraWiFi:(char)arg1 service:(id)arg2 messageContext:(id)arg3 ;
-(void)setLinkPreferences:(id)arg1 service:(id)arg2 messageContext:(id)arg3 ;
-(void)startOTRTest:(id)arg1 priority:(int)arg2 messageContext:(id)arg3 ;
-(void)testCloudQRConnection:(id)arg1 messageContext:(id)arg2 ;
-(char)_canBulkMessageWithParameters:(id)arg1 ;
-(void)_processStoredOutgoingUrgentMessagesProcessLocalAccounts:(char)arg1 ;
-(void)cancelItemWithIdentifier:(id)arg1 service:(id)arg2 messageContext:(id)arg3 ;
-(void)acknowledgeOutgoingMessageWithGUID:(id)arg1 alternateCallbackID:(id)arg2 forAccountWithUniqueID:(id)arg3 messageContext:(id)arg4 ;
-(void)acknowledgeMessageWithStorageGUID:(id)arg1 realGUID:(id)arg2 forAccountWithUniqueID:(id)arg3 broadcastTime:(id)arg4 messageSize:(id)arg5 priority:(id)arg6 broadcastID:(long long)arg7 connectionType:(long long)arg8 messageContext:(id)arg9 ;
-(void)acknowledgeMessageWithGUID:(id)arg1 forAccountWithUniqueID:(id)arg2 broadcastTime:(id)arg3 messageSize:(id)arg4 priority:(id)arg5 messageContext:(id)arg6 ;
-(void)sendAppAckWithGUID:(id)arg1 toDestination:(id)arg2 forAccountWithUniqueID:(id)arg3 connectionType:(long long)arg4 messageContext:(id)arg5 ;
-(char)_checkContinuityEntitlementForMessageContext:(id)arg1 ;
-(void)continuityClientInstanceCreatedWithMessageContext:(id)arg1 ;
-(void)continuityStartAdvertisingOfType:(int)arg1 withData:(id)arg2 withOptions:(id)arg3 messageContext:(id)arg4 ;
-(void)continuityStopAdvertisingOfType:(int)arg1 messageContext:(id)arg2 ;
-(void)continuityStartScanningForType:(int)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 messageContext:(id)arg5 ;
-(void)continuityStartScanningForType:(int)arg1 withData:(id)arg2 mask:(id)arg3 messageContext:(id)arg4 ;
-(void)continuityStartScanningForType:(int)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(char)arg5 duplicates:(char)arg6 messageContext:(id)arg7 ;
-(void)continuityStartScanningForType:(int)arg1 withData:(id)arg2 mask:(id)arg3 boostedScan:(char)arg4 duplicates:(char)arg5 messageContext:(id)arg6 ;
-(void)continuityStopScanningForType:(int)arg1 messageContext:(id)arg2 ;
-(void)continuityStartTrackingPeer:(id)arg1 forType:(int)arg2 messageContext:(id)arg3 ;
-(void)continuityStopTrackingPeer:(id)arg1 forType:(int)arg2 messageContext:(id)arg3 ;
-(void)continuityConnectToPeer:(id)arg1 messageContext:(id)arg2 ;
-(void)continuityDisconnectFromPeer:(id)arg1 messageContext:(id)arg2 ;
-(void)reportiMessageSpam:(id)arg1 toURI:(id)arg2 messageContext:(id)arg3 ;
-(void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 messageServerTimestamp:(id)arg3 toURI:(id)arg4 messageContext:(id)arg5 ;
-(void)reportiMessageSpamCheckUnknown:(id)arg1 count:(id)arg2 requestID:(id)arg3 messageContext:(id)arg4 ;
-(char)_checkEntitlement:(id)arg1 forAccountWithID:(id)arg2 messageContext:(id)arg3 ;
-(id)_sessionWithUniqueID:(id)arg1 messageContext:(id)arg2 requiredEntitlement:(id)arg3 ;
-(void)setupNewSessionWithConfiguration:(id)arg1 messageContext:(id)arg2 ;
-(void)cleanupSession:(id)arg1 messageContext:(id)arg2 ;
-(void)sendInvitation:(id)arg1 withOptions:(id)arg2 messageContext:(id)arg3 ;
-(void)sendInvitation:(id)arg1 withData:(id)arg2 declineOnError:(char)arg3 messageContext:(id)arg4 ;
-(void)acceptInvitation:(id)arg1 messageContext:(id)arg2 ;
-(void)acceptInvitation:(id)arg1 withData:(id)arg2 messageContext:(id)arg3 ;
-(void)cancelInvitation:(id)arg1 messageContext:(id)arg2 ;
-(void)cancelInvitation:(id)arg1 withData:(id)arg2 messageContext:(id)arg3 ;
-(void)cancelInvitation:(id)arg1 withRemoteEndedReasonOverride:(unsigned)arg2 messageContext:(id)arg3 ;
-(void)declineInvitation:(id)arg1 messageContext:(id)arg2 ;
-(void)declineInvitation:(id)arg1 withData:(id)arg2 messageContext:(id)arg3 ;
-(void)endSession:(id)arg1 messageContext:(id)arg2 ;
-(void)endSession:(id)arg1 withData:(id)arg2 messageContext:(id)arg3 ;
-(void)sendSessionMessage:(id)arg1 toSession:(id)arg2 messageContext:(id)arg3 ;
-(void)setAudioEnabled:(char)arg1 forSessionWithUniqueID:(id)arg2 messageContext:(id)arg3 ;
-(void)setMuted:(char)arg1 forSessionWithUniqueID:(id)arg2 messageContext:(id)arg3 ;
-(void)setPreferences:(id)arg1 forSessionWithUniqueID:(id)arg2 messageContext:(id)arg3 ;
-(void)setInviteTimetout:(int)arg1 forSessionWithUniqueID:(id)arg2 messageContext:(id)arg3 ;
-(void)acknowledgeSessionID:(id)arg1 clientID:(id)arg2 messageContext:(id)arg3 ;
-(id)init;
-(id)currentDevice;
-(void)dealloc;
-(id)restrictions;
-(void)handler:(id)arg1 receivedOfflineMessagePendingForTopic:(id)arg2 messageContext:(id)arg3 ;
-(void)handler:(id)arg1 receivedNoStorageResponseForTopic:(id)arg2 messageContext:(id)arg3 ;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 ;
-(id)pairingManager;
-(id)systemMonitor;
-(void)remoteObjectDiedNotification:(id)arg1 ;
-(void)localObjectDiedNotification:(id)arg1 ;
-(id)_commands;
-(id)accountController;
-(void)systemWillSleep;
-(void)systemDidWake;
-(void)systemDidLock;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)systemDidLeaveDataProtectionLock;
-(id)broadcasterWithMessageContext:(id)arg1 ;
-(void)_storageTimerFired;
-(void)_updateStorageTimerWithInterval:(double)arg1 ;
-(id)_pushTopics;
-(void)shutdown;
@end

