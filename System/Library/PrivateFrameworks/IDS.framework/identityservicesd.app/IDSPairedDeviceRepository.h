/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:01 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, IDSPairedDevicePersister;
@class NSMutableDictionary, NSObject;

@interface IDSPairedDeviceRepository : NSObject {

	NSMutableDictionary* _pairedDevices;
	NSObject*<OS_dispatch_semaphore> _pairedDevicesLock;
	id<IDSPairedDevicePersister> _persister;

}
-(int)activatePairedDeviceWithCBUUID:(id)arg1 ;
-(id)activePairedDevice;
-(char)loadPairedDevicesFromStorage;
-(char)updatePairedDeviceWithCBUUID:(id)arg1 capabilityFlags:(unsigned long long)arg2 ;
-(char)purgeSecuredEncryptionKeysForAllPairedDevices;
-(id)allPairedDevices;
-(char)containsPairedDeviceWithCBUUID:(id)arg1 ;
-(char)addPairedDeviceWithCBUUID:(id)arg1 ;
-(id)pairedDeviceWithCBUUID:(id)arg1 ;
-(char)removePairedDeviceWithCBUUID:(id)arg1 ;
-(id)pairedDevicesWithIsPairingValue:(char)arg1 ;
-(char)updatePairedDeviceWithCBUUID:(id)arg1 deviceInfoPayload:(id)arg2 ;
-(char)updatePairedDeviceWithCBUUID:(id)arg1 deviceUniqueID:(id)arg2 buildVersion:(id)arg3 productVersion:(id)arg4 productName:(id)arg5 pairingProtocolVersion:(unsigned)arg6 minCompatibilityVersion:(unsigned)arg7 maxCompatibilityVersion:(unsigned)arg8 serviceMinCompatibilityVersion:(unsigned short)arg9 ;
-(void)_accessPairedDevicesInCriticalSectionWithBlock:(/*^block*/id)arg1 ;
-(void)_criticalLoadPairedDeviceArray:(id)arg1 ;
-(id)_criticalPairedDeviceWithCBUUID:(id)arg1 ;
-(id)_criticalActivePairedDevice;
-(char)_addPairedDevice:(id)arg1 ;
-(void)_criticalPutPairedDevice:(id)arg1 ;
-(char)_criticalPersistState;
-(char)_performTransactionInCriticalSectionWithBlock:(/*^block*/id)arg1 ;
-(char)_criticalRemovePairedDeviceWithCBUUID:(id)arg1 ;
-(id)_criticalAllPairedDevices;
-(int)_criticalActivatePairedDeviceWithCBUUID:(id)arg1 ;
-(void)_criticalPerformPairedDeviceDeactivation;
-(int)_criticalPerformPairedDeviceActivationWithCBUUID:(id)arg1 ;
-(void)_criticalUpdatePairedDevice:(id)arg1 isActive:(char)arg2 ;
-(char)_criticalPurgeSecuredEncryptionKeysForAllPairedDevices;
-(char)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 deviceInfoPayload:(id)arg2 ;
-(char)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 capabilityFlags:(unsigned long long)arg2 ;
-(char)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 deviceUniqueID:(id)arg2 buildVersion:(id)arg3 productVersion:(id)arg4 productName:(id)arg5 pairingProtocolVersion:(unsigned)arg6 minCompatibilityVersion:(unsigned)arg7 maxCompatibilityVersion:(unsigned)arg8 serviceMinCompatibilityVersion:(unsigned short)arg9 ;
-(char)_criticalPerformTransactionWithBlock:(/*^block*/id)arg1 ;
-(id)description;
-(char)isEmpty;
-(void)deactivatePairedDevices;
-(id)initWithPersister:(id)arg1 ;
@end

