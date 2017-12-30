/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:00 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, IDSPairedDeviceRepository, IDSCountdown, NSString, NSDictionary, NSData, NSSet;

@interface IDSPairingManager : NSObject {

	NSHashTable* _delegateMap;
	IDSPairedDeviceRepository* _pairedDeviceRepository;
	char _hasLoadedPairedDevices;
	int _pairingStateToken;
	/*^block*/id _block;
	char _isPendingResetOfKeyRegenerationFlag;
	IDSCountdown* _pairedDeviceInfoRequestCountdown;

}

@property (nonatomic,readonly) NSString * pairedDeviceUUIDString; 
@property (nonatomic,readonly) NSString * pairedDeviceUniqueID; 
@property (nonatomic,readonly) unsigned pairedDevicePairingProtocolVersion; 
@property (nonatomic,readonly) unsigned pairedDeviceMinCompatibilityVersion; 
@property (nonatomic,readonly) unsigned pairedDeviceMaxCompatibilityVersion; 
@property (nonatomic,readonly) unsigned short pairedDeviceServiceMinCompatibilityVersion; 
@property (nonatomic,readonly) NSDictionary * pairedDevice; 
@property (nonatomic,readonly) NSData * pairedDevicePublicKey; 
@property (nonatomic,readonly) NSData * pairedDevicePublicClassAKey; 
@property (nonatomic,readonly) NSData * pairedDevicePublicClassCKey; 
@property (nonatomic,readonly) NSData * pairedDevicePushToken; 
@property (nonatomic,readonly) NSDictionary * pairedDevicePrivateData; 
@property (nonatomic,readonly) NSDictionary * localDevice; 
@property (nonatomic,readonly) char isPaired; 
@property (nonatomic,readonly) NSSet * allPairedUniqueIDs; 
+(char)_isEncryptionKeyRegenerationSupportedByCapabilityFlags:(unsigned long long)arg1 ;
+(void)devicePairingProtocolVersion:(unsigned*)arg1 minCompatibilityVersion:(unsigned*)arg2 maxCompatibilityVersion:(unsigned*)arg3 ;
+(id)sharedInstance;
-(NSData *)pairedDevicePublicKey;
-(NSData *)pairedDevicePublicClassAKey;
-(NSData *)pairedDevicePublicClassCKey;
-(NSString *)pairedDeviceUUIDString;
-(int)activatePairedDeviceWithCBUUID:(id)arg1 ;
-(void)ensureCommunicationWithActivePairedDeviceIsPossible;
-(NSString *)pairedDeviceUniqueID;
-(unsigned short)pairedDeviceServiceMinCompatibilityVersion;
-(char)isCurrentDevicePairedOrPairing;
-(NSSet *)allPairedUniqueIDs;
-(unsigned)pairedDevicePairingProtocolVersion;
-(unsigned)pairedDeviceMinCompatibilityVersion;
-(unsigned)pairedDeviceMaxCompatibilityVersion;
-(NSDictionary *)pairedDevicePrivateData;
-(id)pairedDeviceForUniqueID:(id)arg1 ;
-(void)_notifyDelegatesWithBlock:(/*^block*/id)arg1 ;
-(char)_hasAllEncryptionKeys;
-(void)_requestPairedDeviceInfo;
-(void)_requestPairedDeviceInfoAfterDelay:(double)arg1 ;
-(id)_activePairedDeviceCBUUID;
-(void)savedGeneratedClassKeys:(id)arg1 ;
-(void)_loadPairedDevicePropertiesIfNeeded;
-(void)_updatePairedState:(char)arg1 ;
-(void)_updateActiveStateForAllPairedDevices;
-(int)_migrateSecuredEncryptionKeys;
-(char)_hasPairedDeviceCapabilityFlags;
-(char)_markSecuredEncryptionKeysAsRegenerated:(char)arg1 ;
-(unsigned long long)_pairedDeviceCapabilityFlags;
-(void)_regenerateSecuredEncryptionKeysWithCapabilityFlags:(unsigned long long)arg1 ;
-(unsigned)_hasRegeneratedSecuredEncryptionKeys;
-(int)_statusOfSecuredEncryptionKeyRegenerationWithCapabilityFlags:(unsigned long long)arg1 ;
-(void)_regenerateSecuredEncryptionKeys;
-(char)_purgeSecuredEncryptionKeysForAllPairedDevices;
-(void)gatherLocalDeviceInfoWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_suspendOTRSessionsWithProtectionClass:(unsigned)arg1 ;
-(id)_localDevicePrivateData;
-(char)_isPairedToDevice:(id)arg1 ;
-(void)_updateActiveStateForAllPairedDevices:(char)arg1 ;
-(void)_notifyDelegatesDevicePairedToDevice:(id)arg1 ;
-(void)_notifyDelegatesDeviceUnpairedFromDevice:(id)arg1 ;
-(char)isMissingAnyPublicKeyForPairedDeviceWithCBUUID:(id)arg1 ;
-(id)_cbuuidsWithIsPairingValue:(char)arg1 ;
-(void)_setPairedDeviceCapabilityFlags:(unsigned long long)arg1 ;
-(id)pairedDeviceBuildVersion;
-(id)pairedDeviceProductVersion;
-(id)pairedDeviceProductName;
-(NSData *)pairedDevicePushToken;
-(char)addLocalPairedDevice:(id)arg1 ;
-(char)removeLocalPairedDevice:(id)arg1 ;
-(id)cbuuidsOfPairingDevices;
-(id)cbuuidsOfPairedDevices;
-(char)updatePairedDeviceBuildVersion:(id)arg1 productVersion:(id)arg2 productName:(id)arg3 pairingProtocolVersion:(unsigned)arg4 minCompatibilityVersion:(unsigned)arg5 maxCompatibilityVersion:(unsigned)arg6 serviceMinCompatibilityVersion:(unsigned short)arg7 capabilityFlags:(unsigned long long)arg8 deviceUniqueID:(id)arg9 ;
-(void)refreshPairedDeviceEncryptionKeys;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSDictionary *)pairedDevice;
-(char)setPairedDeviceInfo:(id)arg1 ;
-(void)deactivatePairedDevices;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)systemDidLeaveDataProtectionLock;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSDictionary *)localDevice;
-(char)isPaired;
@end

