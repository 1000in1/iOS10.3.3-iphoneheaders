/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:01 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableArray, NSString, NSArray, NSSet;

@interface IDSDService : NSObject {

	NSDictionary* _serviceProperties;
	NSMutableArray* _adHocServices;
	unsigned _dataProtectionClass;
	char _adHocServicesLoaded;

}

@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * pushTopic; 
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) NSString * queryService; 
@property (nonatomic,readonly) NSString * protocolName; 
@property (nonatomic,readonly) NSString * launchDarwinNotification; 
@property (nonatomic,readonly) NSString * launchMachServiceNotification; 
@property (nonatomic,readonly) NSString * superService; 
@property (nonatomic,readonly) char allowLocalDelivery; 
@property (nonatomic,readonly) char allowWiProxDelivery; 
@property (nonatomic,readonly) char allowMagnetDelivery; 
@property (nonatomic,readonly) char shouldShowUsageNotifications; 
@property (nonatomic,readonly) char allowPartialSendsToSucceed; 
@property (nonatomic,readonly) char canUseLargePayload; 
@property (nonatomic,readonly) char sendOnePerToken; 
@property (nonatomic,readonly) char wantsPhoneNumberAccount; 
@property (nonatomic,readonly) char iCloudBasedService; 
@property (nonatomic,readonly) char tunnelService; 
@property (nonatomic,readonly) char holdsMessagesUntilFirstUnlock; 
@property (nonatomic,readonly) char shouldAutoRegisterAllHandles; 
@property (nonatomic,readonly) char shouldRegisterUsingDSHandle; 
@property (nonatomic,readonly) char shouldSyncAccounts; 
@property (nonatomic,readonly) char shouldNotSyncPhoneNumberAccounts; 
@property (nonatomic,readonly) char shouldAllowProxyDelivery; 
@property (nonatomic,readonly) char wantsLocalReflectedSend; 
@property (nonatomic,readonly) char watchOnlyService; 
@property (nonatomic,readonly) char allowsDuplicates; 
@property (nonatomic,readonly) char useiMessageCallerID; 
@property (nonatomic,readonly) char allowPendingMessagesForInactiveDevice; 
@property (nonatomic,readonly) char allowSendingMessagesToInactiveDevice; 
@property (nonatomic,readonly) char shouldProtectTrafficUsingClassA; 
@property (nonatomic,readonly) char shouldSilentlyFailMessagesOnSwitch; 
@property (nonatomic,readonly) char shouldAllowCloudDelivery; 
@property (nonatomic,readonly) char enabledOnlyWhenPaired; 
@property (nonatomic,readonly) char forceHTTPQueriesOnly; 
@property (nonatomic,readonly) NSDictionary * properties;                                //@synthesize serviceProperties=_serviceProperties - In the implementation block
@property (nonatomic,readonly) NSString * preferencesDomain; 
@property (nonatomic,readonly) NSString * legacyIdentifier; 
@property (nonatomic,readonly) NSString * legacyPreferencesDomain; 
@property (nonatomic,readonly) NSArray * linkedServices; 
@property (nonatomic,readonly) NSArray * adHocServices; 
@property (nonatomic,readonly) unsigned adHocServiceType; 
@property (nonatomic,readonly) NSArray * duetIdentifiers; 
@property (nonatomic,readonly) NSSet * allowedTrafficClasses; 
@property (nonatomic,readonly) unsigned dataProtectionClass; 
@property (nonatomic,readonly) unsigned minCompatibilityVersion; 
@property (nonatomic,readonly) unsigned accountSyncMinCompatibilityVersion; 
-(char)shouldRegisterUsingDSHandle;
-(char)allowPendingMessagesForInactiveDevice;
-(char)shouldSyncAccounts;
-(unsigned)accountSyncMinCompatibilityVersion;
-(char)shouldNotSyncPhoneNumberAccounts;
-(char)iCloudBasedService;
-(char)useiMessageCallerID;
-(unsigned)adHocServiceType;
-(NSString *)launchDarwinNotification;
-(NSString *)launchMachServiceNotification;
-(char)wantsPhoneNumberAccount;
-(NSArray *)adHocServices;
-(char)enabledOnlyWhenPaired;
-(NSString *)preferencesDomain;
-(NSString *)legacyPreferencesDomain;
-(char)shouldAutoRegisterAllHandles;
-(NSString *)queryService;
-(NSString *)superService;
-(NSSet *)allowedTrafficClasses;
-(char)shouldShowUsageNotifications;
-(char)tunnelService;
-(NSArray *)duetIdentifiers;
-(char)shouldProtectTrafficUsingClassA;
-(char)shouldAllowCloudDelivery;
-(char)shouldAllowProxyDelivery;
-(char)allowLocalDelivery;
-(char)allowWiProxDelivery;
-(char)wantsLocalReflectedSend;
-(char)shouldSilentlyFailMessagesOnSwitch;
-(char)canUseLargePayload;
-(char)sendOnePerToken;
-(char)allowPartialSendsToSucceed;
-(char)forceHTTPQueriesOnly;
-(char)allowSendingMessagesToInactiveDevice;
-(char)watchOnlyService;
-(char)allowsDuplicates;
-(void)reloadAdHocServices;
-(char)allowMagnetDelivery;
-(char)holdsMessagesUntilFirstUnlock;
-(id)description;
-(NSString *)identifier;
-(NSString *)serviceName;
-(NSString *)displayName;
-(NSDictionary *)properties;
-(NSString *)protocolName;
-(NSString *)legacyIdentifier;
-(id)initWithServiceDictionary:(id)arg1 ;
-(NSArray *)linkedServices;
-(NSString *)pushTopic;
-(unsigned)minCompatibilityVersion;
-(unsigned)dataProtectionClass;
@end

